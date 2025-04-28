// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#define _GNU_SOURCE
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <sys/mman.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "debug.h"
#include "detour.h"
#include "drastic_bios_arm7.h"
#include "drastic_bios_arm9.h"
#include "nds_firmware.h"
#include "nds_bios_arm7.h"
#include "nds_bios_arm9.h"

static int is_hooked = 0;
static size_t page_size = 4096;
static char state_path[MAX_PATH] = { 0 };

#if defined(UT)
TEST_GROUP(detour);

TEST_SETUP(detour)
{
}

TEST_TEAR_DOWN(detour)
{
}
#endif

int dtr_fastforward(uint8_t v)
{
    uint32_t *ff = (uint32_t*)CODE_FAST_FORWARD;

    // 0xe3a03006
    mprotect(ALIGN_ADDR(CODE_FAST_FORWARD), page_size, PROT_READ | PROT_WRITE | PROT_EXEC);
    *ff = 0xe3a03000 | v;
    return 0;
}

static int32_t dtr_load_state_index(void *system, uint32_t index, uint16_t *snapshot_top, uint16_t *snapshot_bottom, uint32_t snapshot_only)
{
    char buf[255] = {0};
    nds_load_state _func = (nds_load_state)FUN_LOAD_STATE;

    sprintf(buf, "%s/%s_%d.dss", state_path, VAR_SYSTEM_GAMECARD_NAME, index);
    _func((void*)VAR_SYSTEM, buf, snapshot_top, snapshot_bottom, snapshot_only);
}

static int32_t dtr_save_state_index(void *system, uint32_t index, uint16_t *snapshot_top, uint16_t *snapshot_bottom)
{
    char buf[255] = {0};
    nds_save_state _func1 = (nds_save_state)FUN_SAVE_STATE;

    sprintf(buf, "%s_%d.dss", VAR_SYSTEM_GAMECARD_NAME, index);
    _func1((void*)VAR_SYSTEM, state_path, buf, snapshot_top, snapshot_bottom);
}

static void dtr_initialize_backup(backup_struct *backup, backup_type_enum backup_type, uint8_t *data, uint32_t size, char *path)
{
    char *data_file_name = NULL;
    FILE *__stream = NULL;
    FILE *data_file = NULL;
    size_t sVar1 = 0;
    long __off = 0;
    uint32_t uVar2 = 0;
    uint32_t backup_file_size = 0;
    uint32_t uVar3 = 0;
    void *pvVar4 = NULL;
    uint8_t *desmume_footer_ptr = NULL;
    uint8_t uVar5 = 0;
    uint32_t truncate_size = 0;
    uint32_t desmume_footer_position = 0;
    uint32_t clean_pages_loaded = 0;

    debug("call %s()\n");

    if (path && path[0]) {
        data_file_name = malloc(MAX_PATH);
        memset(data_file_name, 0, MAX_PATH);
        sprintf(data_file_name, "%s/%s.dsv", state_path, VAR_SYSTEM_GAMECARD_NAME);
        debug("new state path=\"%s\"\n", data_file_name);
    }

    do {
        if (!backup) {
            error("backup is null\n");
            break;
        }

        backup->type = backup_type;
        backup->address_mask = size - 1;
        backup->fix_file_size = 0;
        backup->data = data;
        backup->firmware = 0;
        if (backup_type != BACKUP_TYPE_FLASH) {
            if (backup_type == BACKUP_TYPE_NONE) {
                backup->address_bytes = 0;
                break;
            }

            if (backup_type != BACKUP_TYPE_EEPROM) {
                break;
            }

            if (size < 0x10001) {
                uVar5 = 0x02;
                if (size < 0x201) {
                    uVar5 = 0x01;
                }
                backup->address_bytes = uVar5;
                break;
            }
        }
        backup->address_bytes = 3;
    } while(0);

    do {
        if (!backup) {
            error("backup is null\n");
            break;
        }

        if (data_file_name == (char *)0) {
            backup->file_path[0] = 0;
        }
        else {
            __stream = fopen(data_file_name,"rb");
            backup->footer_written = '\0';
            if (__stream == (FILE *)0) {
                error("failed to load backup file in %s\n", __func__);
                memset(data, size, 0xff);
                memset(backup, 0xff, size >> 0xc);
            }
            else {
                sVar1 = fread(data, size, 1, __stream);
                if (sVar1 != 1) {
                    error("failed to load entire size in %s\n", __func__);
                }

                __off = ftell(__stream);
                fseek(__stream, 0, 2);
                uVar2 = ftell(__stream);
                fseek(__stream, __off, 0);
                fclose(__stream);
                debug("loading backup file %s, %d bytes in %s\n", data_file_name, uVar2, __func__);

                if ((size + 0x7a) != uVar2) {
                    backup->fix_file_size = size + 0x7a;
                }

                if (uVar2 < size) {
                    uVar3 = uVar2 - 0x400 & ~((int)(uVar2 - 0x400) >> 0x1f);
                    pvVar4 = memmem(data + uVar3, uVar2 - uVar3, (const void *)VAR_DESMUME_FOOTER_STR, 0x52);

                    if (pvVar4 != (void *)0x0) {
                        uVar2 = (intptr_t)pvVar4 - (intptr_t)data;
                        debug("found DeSmuME footer at %d. Truncating in %s\n", uVar2, __func__);
                    }
                    uVar3 = uVar2 >> 0xe;
                    error("backup file less than full size (should be %d, loaded %d) in %s\n", size, uVar2, __func__);

                    memset(data + uVar2, size - uVar2, 0xff);
                    memset(backup, 0, uVar3 * 4);
                    memset(backup->dirty_page_bitmap + uVar3, 0xff, ((size + 0x3fff >> 0xe) - uVar3) * 4);
                }
                else {
                    memset(backup, 0, size + 0x3fff >> 0xe);
                }
            }
            strncpy(backup->file_path, data_file_name, 0x3ff);
            backup->file_path[0x3ff] = 0;
        }
        backup->status = 0;
    } while(0);

    if (data_file_name) {
        free(data_file_name);
    }
}

int dtr_savestate(int slot)
{
#ifndef UNITTEST
#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX) || defined(FLIP)
    char buf[255] = {0};
    nds_screen_copy16 _func0 = (nds_screen_copy16)FUN_SCREEN_COPY16;

    void *d0 = malloc(0x18000);
    void *d1 = malloc(0x18000);

    if ((d0 != NULL) && (d1 != NULL)) {
        _func0(d0, 0);
        _func0(d1, 1);

        if (is_hooked == 0) {
            nds_save_state_index _func1 = (nds_save_state_index)FUN_SAVE_STATE_INDEX;

            _func1((void*)VAR_SYSTEM, slot, d0, d1);
        }
        else {
            nds_save_state _func1 = (nds_save_state)FUN_SAVE_STATE;

            sprintf(buf, "%s_%d.dss", VAR_SYSTEM_GAMECARD_NAME, slot);
            _func1((void*)VAR_SYSTEM, state_path, buf, d0, d1);
        }
    }
    if (d0 != NULL) {
        free(d0);
    }
    if (d1 != NULL) {
        free(d1);
    }
#endif

#if defined(TRIMUI) || defined(PANDORA)
    nds_screen_copy16 _func0 = (nds_screen_copy16)FUN_SCREEN_COPY16;
    nds_save_state_index _func1 = (nds_save_state_index)FUN_SAVE_STATE_INDEX;

    void *d0 = malloc(0x18000);
    void *d1 = malloc(0x18000);

    if ((d0 != NULL) && (d1 != NULL)) {
        _func0(d0, 0);
        _func0(d1, 1);
        _func1((void*)VAR_SYSTEM, slot, d0, d1);
    }
    if (d0 != NULL) {
        free(d0);
    }
    if (d1 != NULL) {
        free(d1);
    }
#endif
#endif
}

int dtr_loadstate(int slot)
{
#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX) || defined(FLIP)
    char buf[255] = {0};

    if (is_hooked == 0) {
        nds_load_state_index _func = (nds_load_state_index)FUN_LOAD_STATE_INDEX;

        _func((void*)VAR_SYSTEM, slot, 0, 0, 0);
    }
    else {
        nds_load_state _func = (nds_load_state)FUN_LOAD_STATE;

        sprintf(buf, "%s/%s_%d.dss", state_path, VAR_SYSTEM_GAMECARD_NAME, slot);
        _func((void*)VAR_SYSTEM, buf, 0, 0, 0);
    }
#endif

#if defined(TRIMUI) || defined(PANDORA)
    nds_load_state_index _func = (nds_load_state_index)FUN_LOAD_STATE_INDEX;

    _func((void*)VAR_SYSTEM, slot, 0, 0, 0);
#endif
}

int dtr_quit(void)
{
    nds_quit _func = (nds_quit)FUN_QUIT;

    _func((void*)VAR_SYSTEM);
}

void detour_hook(uintptr_t org, uintptr_t cb)
{
    int r = 0;
    volatile uint8_t *m = (uint8_t *)(intptr_t)org;

    debug("call %s(org=%p, cb=%p)\n", __func__, m, cb);

    r = mprotect(ALIGN_ADDR(m), page_size, PROT_READ | PROT_WRITE | PROT_EXEC);
    debug("mprotect()=%d\n", r);

    m[0] = 0x04;
    m[1] = 0xf0;
    m[2] = 0x1f;
    m[3] = 0xe5;
    m[4] = cb >> 0;
    m[5] = cb >> 8;
    m[6] = cb >> 16;
    m[7] = cb >> 24;
}

static int write_file(const char *fpath, const void *buf, int len)
{
    int fd = -1;

    debug("call %s()\n", __func__);

    if (!fpath || !buf) {
        error("invalid parameters(0x%x, 0x%x)\n", fpath, buf);
        return -1;
    }

    if (access(fpath, F_OK) == 0) {
        debug("\"%s\" existed already\n", fpath);
        return 0;
    }

    fd = open(fpath, O_CREAT | O_WRONLY, 0644);
    if (fd < 0) {
        error("failed to create \"%s\"\n", fpath);
        return -1;
    }

    if (write(fd, buf, len) != len) {
        error("failed to write data to \"%s\"\n", fpath);
    }

    close(fd);
    return 0;
}

int drop_bios_files(const char *path)
{
    #define BIOS_FOLDER "system"

    char buf[MAX_PATH] = { 0 };

    sprintf(buf, "%s/"BIOS_FOLDER"/drastic_bios_arm7.bin", path);
    write_file(buf, drastic_bios_arm7, sizeof(drastic_bios_arm7));

    sprintf(buf, "%s/"BIOS_FOLDER"/drastic_bios_arm9.bin", path);
    write_file(buf, drastic_bios_arm9, sizeof(drastic_bios_arm9));

    sprintf(buf, "%s/"BIOS_FOLDER"/nds_bios_arm7.bin", path);
    write_file(buf, nds_bios_arm7, sizeof(nds_bios_arm7));

    sprintf(buf, "%s/"BIOS_FOLDER"/nds_bios_arm9.bin", path);
    write_file(buf, nds_bios_arm9, sizeof(nds_bios_arm9));

    sprintf(buf, "%s/"BIOS_FOLDER"/nds_firmware.bin", path);
    write_file(buf, nds_firmware, sizeof(nds_firmware));

    return 0;
}

int init_hook(size_t page, const char *path)
{
    page_size = page;

    debug("call %s(page=%d, path=\"%s\")\n", __func__, page, path);

    is_hooked = 0;
    if (path && path[0]) {
        is_hooked = 1;
        strcpy(state_path, path);
        detour_hook(FUN_LOAD_STATE_INDEX, (intptr_t)dtr_load_state_index);
        detour_hook(FUN_SAVE_STATE_INDEX, (intptr_t)dtr_save_state_index);
        detour_hook(FUN_INITIALIZE_BACKUP, (intptr_t)dtr_initialize_backup);
    }

    return 0;
}

#if defined(UT)
TEST(detour, init_hook)
{
    TEST_ASSERT_EQUAL_INT(0, init_hook(0, NULL));
}
#endif

int quit_hook(void)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(detour, quit_hook)
{
    TEST_ASSERT_EQUAL_INT(0, quit_hook());
}
#endif

#if defined(UT)
void render_polygon_setup_perspective_steps(void)
{
}
#endif

#if defined(UT)
TEST(detour, render_polygon_setup_perspective_steps)
{
    render_polygon_setup_perspective_steps();
    TEST_PASS();
}
#endif

