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

static int is_state_hooked = 0;
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

int unlock_protected_area(void *p)
{
    int r = -1;

    debug("call %s(p=%p)\n", _func__, p);

    if (!p) {
        error("invalid pointer\n");
        return r;
    }

#if defined(UT)
    return 0;
#endif

    r = mprotect(ALIGN_ADDR(p), page_size, PROT_READ | PROT_WRITE | PROT_EXEC);
    debug("mprotect()=%d\n", r);

    return r;
}

#if defined(UT)
TEST(detour, unlock_protected_area)
{
    TEST_ASSERT_EQUAL_INT(-1, unlock_protected_area(NULL));
    TEST_ASSERT_EQUAL_INT(0, unlock_protected_area((void *)0xdead));
}
#endif

int fast_forward(uint8_t v)
{
    uint32_t *ff = (uint32_t*)CODE_FAST_FORWARD;

    // 0xe3a03006
    unlock_protected_area((void *)CODE_FAST_FORWARD);

#if defined(UT)
    return 0;
#endif

    *ff = 0xe3a03000 | v;
    return 0;
}

#if defined(UT)
TEST(detour, fast_forward)
{
    TEST_ASSERT_EQUAL_INT(0, fast_forward(0));
}
#endif

static int32_t prehook_cb_load_state_index(void *system, uint32_t index, uint16_t *d0, uint16_t *d1, uint32_t shot_only)
{
    char buf[MAX_PATH] = { 0 };
    nds_load_state pfn = (nds_load_state)FUN_LOAD_STATE;

    debug("call %s(pfn=%p)\n", __func__, pfn);

    if (!pfn) {
        error("invalid pfn\n");
        return -1;
    }

    if (!system || !d0 || !d1) {
        error("invalid parameters(0x%x, 0x%x, 0x%x)\n", system, d0, d1);
        return -1;
    }

#if defined(UT)
    return 0;
#endif

    sprintf(buf, "%s/%s_%d.dss", state_path, VAR_SYSTEM_GAMECARD_NAME, index);
    pfn((void*)VAR_SYSTEM, buf, d0, d1, shot_only);
}

#if defined(UT)
TEST(detour, prehook_cb_load_state_index)
{
    TEST_ASSERT_EQUAL_INT(-1, prehook_cb_load_state_index(NULL, 0, NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, prehook_cb_load_state_index((void *)0xdead, 0, (void *)0xdead, (void *)0xdead, 0));
}
#endif

static int32_t prehook_cb_save_state_index(void *system, uint32_t index, uint16_t *d0, uint16_t *d1)
{
    char buf[MAX_PATH] = { 0 };
    nds_save_state pfn = (nds_save_state)FUN_SAVE_STATE;

    debug("call %s(pfn=%p)\n", __func__, pfn);

    if (!pfn) {
        error("invalid pfn\n");
        return -1;
    }

    if (!system || !d0 || !d1) {
        error("invalid parameters(0x%x, 0x%x, 0x%x)\n", system, d0, d1);
        return -1;
    }

#if defined(UT)
    return 0;
#endif

    sprintf(buf, "%s_%d.dss", VAR_SYSTEM_GAMECARD_NAME, index);
    pfn((void*)VAR_SYSTEM, state_path, buf, d0, d1);
}

#if defined(UT)
TEST(detour, prehook_cb_save_state_index)
{
    TEST_ASSERT_EQUAL_INT(-1, prehook_cb_save_state_index(NULL, 0, NULL, NULL));
    TEST_ASSERT_EQUAL_INT(0, prehook_cb_save_state_index((void *)0xdead, 0, (void *)0xdead, (void *)0xdead));
}
#endif

static void prehook_cb_initialize_backup(backup_struct *backup, backup_type_enum backup_type, uint8_t *data, uint32_t size, char *path)
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

#if defined(UT)
TEST(detour, prehook_cb_initialize_backup)
{
    prehook_cb_initialize_backup(NULL, 0, NULL, 0, NULL);
    TEST_PASS();
}
#endif

int save_state(int slot)
{
    int r = -1;
    void *d0 = NULL;
    void *d1 = NULL;
    char buf[MAX_PATH] = { 0 };
    nds_screen_copy16 pfn_copy16 = (nds_screen_copy16)FUN_SCREEN_COPY16;

    debug("call %s(slot=%d)\n", __func__, slot);

    if (slot > MAX_STATE_SLOT) {
        error("invalid slot\n");
        return -1;
    }

#if defined(UT)
    return 0;
#endif

    d0 = malloc(0x18000);
    d1 = malloc(0x18000);

    do {
        if (!d0 || !d1) {
            error("invalid d0 or d1\n", __func__);
            break;
        }

        pfn_copy16(d0, 0);
        pfn_copy16(d1, 1);

        if (is_state_hooked == 0) {
            nds_save_state_index pfn = (nds_save_state_index)FUN_SAVE_STATE_INDEX;

            if (!pfn) {
                error("invalid pfn\n");
                break;
            }

            r = 0;
            pfn((void*)VAR_SYSTEM, slot, d0, d1);
        }
        else {
            nds_save_state pfn = (nds_save_state)FUN_SAVE_STATE;

            if (!pfn) {
                error("invalid pfn\n");
                break;
            }

            r = 0;
            sprintf(buf, "%s_%d.dss", VAR_SYSTEM_GAMECARD_NAME, slot);
            pfn((void*)VAR_SYSTEM, state_path, buf, d0, d1);
        }
    } while(0);

    if (d0) {
        free(d0);
    }
    if (d1) {
        free(d1);
    }

    return r;
}

#if defined(UT)
TEST(detour, save_state)
{
    TEST_ASSERT_EQUAL_INT(-1, save_state(MAX_STATE_SLOT + 1));
    TEST_ASSERT_EQUAL_INT(0, save_state(MAX_STATE_SLOT));
}
#endif

int load_state(int slot)
{
    char buf[MAX_PATH] = { 0 };

    debug("call %s(slot=%d)\n", __func__, slot);

    if (slot > MAX_STATE_SLOT) {
        error("invalid slot\n");
        return -1;
    }

#if defined(UT)
    return 0;
#endif

    if (is_state_hooked == 0) {
        nds_load_state_index pfn = (nds_load_state_index)FUN_LOAD_STATE_INDEX;

        if (!pfn) {
            error("invalid pfn\n");
            return -1;
        }

        pfn((void*)VAR_SYSTEM, slot, 0, 0, 0);
    }
    else {
        nds_load_state pfn = (nds_load_state)FUN_LOAD_STATE;

        if (!pfn) {
            error("invalid pfn\n");
            return -1;
        }

        sprintf(buf, "%s/%s_%d.dss", state_path, VAR_SYSTEM_GAMECARD_NAME, slot);
        pfn((void*)VAR_SYSTEM, buf, 0, 0, 0);
    }

    return 0;
}

#if defined(UT)
TEST(detour, load_state)
{
    TEST_ASSERT_EQUAL_INT(-1, load_state(MAX_STATE_SLOT + 1));
    TEST_ASSERT_EQUAL_INT(0, load_state(MAX_STATE_SLOT));
}
#endif

int quit_drastic(void)
{
    nds_quit pfn = (nds_quit)FUN_QUIT;

    debug("call %s(pfn=%p)\n", __func__, pfn);

    if (!pfn) {
        error("invalid pfn\n");
        return -1;
    }

#if !defined(UT)
    pfn((void*)VAR_SYSTEM);
#endif

    return 0;
}

#if defined(UT)
TEST(detour, quit_drastic)
{
    TEST_ASSERT_EQUAL_INT(0, quit_drastic());
}
#endif

int add_prehook_cb(void *org, void *cb)
{
    int r = -1;

    debug("call %s(org=%p, cb=%p)\n", __func__, org, cb);

    if (!org || !cb) {
        error("invalid pointer\n");
        return r;
    }

#if defined(UT)
    return 0;
#endif

    if (unlock_protected_area(org) >= 0) {
        uintptr_t c = (uintptr_t)cb;
        volatile uint8_t *m = (uint8_t *)(intptr_t)org;

        m[0] = 0x04;
        m[1] = 0xf0;
        m[2] = 0x1f;
        m[3] = 0xe5;
        m[4] = c >> 0;
        m[5] = c >> 8;
        m[6] = c >> 16;
        m[7] = c >> 24;
    }

    return r;
}

#if defined(UT)
TEST(detour, add_prehook_cb)
{
    TEST_ASSERT_EQUAL_INT(-1, add_prehook_cb(0, 0));
    TEST_ASSERT_EQUAL_INT(0, add_prehook_cb((void *)0xdead, (void *)0xdead));
}
#endif

static int write_file(const char *fpath, const void *buf, int len)
{
    int r = -1;
    int fd = -1;

    debug("call %s()\n", __func__);

    if (!fpath || !buf) {
        error("invalid parameters(0x%x, 0x%x)\n", fpath, buf);
        return r;
    }

    fd = open(fpath, O_CREAT | O_WRONLY, 0644);
    if (fd < 0) {
        error("failed to create \"%s\"\n", fpath);
        return r;
    }

    r = write(fd, buf, len);
    if (r != len) {
        error("failed to write data to \"%s\"\n", fpath);
        return r;
    }

    close(fd);
    return r;
}

#if defined(UT)
TEST(detour, write_file)
{
    char buf[] = { "1234567890" };

    TEST_ASSERT_EQUAL_INT(-1, write_file("/XXX/XXX", buf, strlen(buf)));
    TEST_ASSERT_EQUAL_INT(10, write_file("/tmp/0", buf, strlen(buf)));
}
#endif

int drop_bios_files(const char *path)
{
    int r = 0;
    char buf[MAX_PATH] = { 0 };

    sprintf(buf, "%s/" BIOS_FOLDER "/" DRASTIC_BIOS_ARM7, path);
    r |= write_file(buf, drastic_bios_arm7, sizeof(drastic_bios_arm7));

    sprintf(buf, "%s/" BIOS_FOLDER "/" DRASTIC_BIOS_ARM9, path);
    r |= write_file(buf, drastic_bios_arm9, sizeof(drastic_bios_arm9));

    sprintf(buf, "%s/" BIOS_FOLDER "/" NDS_BIOS_ARM7, path);
    r |= write_file(buf, nds_bios_arm7, sizeof(nds_bios_arm7));

    sprintf(buf, "%s/" BIOS_FOLDER "/" NDS_BIOS_ARM9, path);
    r |= write_file(buf, nds_bios_arm9, sizeof(nds_bios_arm9));

    sprintf(buf, "%s/" BIOS_FOLDER "/" NDS_FIRMWARE, path);
    r |= write_file(buf, nds_firmware, sizeof(nds_firmware));

    return r;
}

#if defined(UT)
TEST(detour, drop_bios_files)
{
    #define VALID_PATH      "/tmp"
    #define INVALID_PATH    "/XXX/XXXX"

    TEST_ASSERT_EQUAL_INT(282624, drop_bios_files(VALID_PATH));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" DRASTIC_BIOS_ARM7, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" DRASTIC_BIOS_ARM9, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" NDS_BIOS_ARM7, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" NDS_BIOS_ARM9, F_OK));
    TEST_ASSERT_EQUAL_INT(0, access(VALID_PATH "/" NDS_FIRMWARE, F_OK));
    TEST_ASSERT_EQUAL_INT(-1, drop_bios_files(INVALID_PATH));
    unlink(VALID_PATH "/" DRASTIC_BIOS_ARM7);
    unlink(VALID_PATH "/" DRASTIC_BIOS_ARM9);
    unlink(VALID_PATH "/" NDS_BIOS_ARM7);
    unlink(VALID_PATH "/" NDS_BIOS_ARM9);
    unlink(VALID_PATH "/" NDS_FIRMWARE);
}
#endif

int init_hook(size_t page, const char *path)
{
    page_size = page;

    debug("call %s(page=%d, path=\"%s\")\n", __func__, page, path);

    is_state_hooked = 0;
    if (path && path[0]) {
        is_state_hooked = 1;
        strcpy(state_path, path);
        debug("new state path=\"%s\"\n", path);

        add_prehook_cb((void *)FUN_LOAD_STATE_INDEX,  (void *)prehook_cb_load_state_index);
        add_prehook_cb((void *)FUN_SAVE_STATE_INDEX,  (void *)prehook_cb_save_state_index);
        add_prehook_cb((void *)FUN_INITIALIZE_BACKUP, (void *)prehook_cb_initialize_backup);
    }

    return 0;
}

#if defined(UT)
TEST(detour, init_hook)
{
    const char *path = "/tmp";

    TEST_ASSERT_EQUAL_INT(0, init_hook(0, NULL));
    TEST_ASSERT_EQUAL_INT(0, is_state_hooked);
    TEST_ASSERT_EQUAL_INT(0, init_hook(0, path));
    TEST_ASSERT_EQUAL_INT(1, is_state_hooked);
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

