// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/prctl.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "cfg.h"
#include "log.h"
#include "hook.h"

nds_hook myhook = { 0 };

static int is_state_hooked = 0;
static size_t page_size = 4096;
static char state_path[MAX_PATH] = { 0 };

#if defined(UT)
TEST_GROUP(detour_hook);

TEST_SETUP(detour_hook)
{
    debug(SDL"call %s()\n", __func__);
}

TEST_TEAR_DOWN(detour_hook)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

static int prehook_cb_save_state_index(int slot)
{
    int r = -1;
    char buf[255] = {0};
    void *ss0 = NULL;
    void *ss1 = NULL;

    debug(DTR"call %s()\n", __func__);

    if ((slot < 0) || (slot > MAX_SLOT)) {
        error(DTR"invalid slot\n");
        return r;
    }

    do {
        ss0 = malloc(0x18000);
        ss1 = malloc(0x18000);

        if ((ss0 != NULL) && (ss1 != NULL)) {
            nds_screen_copy16 pfn_copy16 = (nds_screen_copy16)myhook.fun.screen_copy16;
            if (!pfn_copy16) {
                error(DTR"invalid screen_copy16 address\n");
                break;
            }
            pfn_copy16(ss0, 0);
            pfn_copy16(ss1, 1);

            if (is_state_hooked == 0) {
                nds_save_state_index pfn = (nds_save_state_index)myhook.fun.save_state_index;

                if (!pfn) {
                    error(DTR"invalid save_state_index address\n");
                    break;
                }
                pfn((void *)myhook.var.system.base, slot, ss0, ss1);
            }
            else {
                nds_save_state pfn = (nds_save_state)myhook.fun.save_state;

                if (!pfn) {
                    error(DTR"invalid save_state address\n");
                    break;
                }
                sprintf(buf, "%s_%d.dss", myhook.var.system.gamecard_name, slot);
                pfn((void *)myhook.var.system.base, state_path, buf, ss0, ss1);
            }
            r = 0;
        }
    } while(0);

    if (ss0 != NULL) {
        free(ss0);
    }
    if (ss1 != NULL) {
        free(ss1);
    }

    return r;
}

#if defined(UT)
TEST(detour_hook, prehook_cb_save_state_index)
{
    TEST_ASSERT_EQUAL_INT(-1, prehook_cb_save_state_index(-1));
    TEST_ASSERT_EQUAL_INT(-1, prehook_cb_save_state_index(0));
    TEST_ASSERT_EQUAL_INT(-1, prehook_cb_save_state_index(MAX_SLOT + 1));
}
#endif

int prehook_cb_load_state_index(int slot)
{
    int r = -1;
    char buf[255] = { 0 };

    debug(DTR"call %s()\n", __func__);

    if ((slot < 0) || (slot > MAX_SLOT)) {
        error(DTR"invalid slot\n");
        return r;
    }

    do {
        if (is_state_hooked == 0) {
            nds_load_state_index pfn = (nds_load_state_index)myhook.fun.load_state_index;

            if (!pfn) {
                break;
            }
            pfn((void *)myhook.var.system.base, slot, 0, 0, 0);
        }
        else {
            nds_load_state pfn = (nds_load_state)myhook.fun.load_state;

            if (!pfn) {
                break;
            }
            snprintf(buf, sizeof(buf), "%s/%s_%d.dss", state_path, myhook.var.system.gamecard_name, slot);
            pfn((void *)myhook.var.system.base, buf, 0, 0, 0);
        }
        r = 0;
    } while(0);

    return r;
}

#if defined(UT)
TEST(detour_hook, prehook_cb_load_state_index)
{
    TEST_ASSERT_EQUAL_INT(-1, prehook_cb_load_state_index(-1));
    TEST_ASSERT_EQUAL_INT(-1, prehook_cb_load_state_index(0));
    TEST_ASSERT_EQUAL_INT(-1, prehook_cb_load_state_index(MAX_SLOT + 1));
}
#endif

int emu_quit(void)
{
    nds_quit pfn = (nds_quit)myhook.fun.quit;

    debug(DTR"call %s(pfn=%p)\n", __func__, pfn);

    if (!pfn) {
        error(DTR"pfn is null\n");
        return -1;
    }
    pfn((void *)myhook.var.system.base);

    return 0;
}

#if defined(UT)
TEST(detour_hook, emu_quit)
{
    TEST_ASSERT_EQUAL_INT(-1, emu_quit());
}
#endif

int set_fast_forward(uint8_t v)
{
    uint32_t *ff = (uint32_t*)myhook.var.fast_forward;

    if (ff) {
        unlock_protected_area((uintptr_t)myhook.var.fast_forward);
        *ff = 0xe3a03000 | v;
    }

    return 0;
}

#if defined(UT)
TEST(detour_hook, set_fast_forward)
{
    TEST_ASSERT_EQUAL_INT(0, set_fast_forward(0));
}
#endif

int32_t load_state(void *sys, uint32_t idx, uint16_t *st, uint16_t *sb, uint32_t ss_only)
{
    int32_t r = -1;
    nds_load_state pfn = NULL;
    char buf[MAX_PATH] = { 0 };

    debug(DTR"call %s()\n", __func__);

    if (!sys || !st || !sb) {
        error(DTR"invalid parameters(0x%x, 0x%x, 0x%x)\n", sys, st, sb);
        return r;
    }

    pfn = (nds_load_state)myhook.fun.load_state;
    if (!pfn) {
        error(DTR"pfn is null\n");
        return r;
    }

    snprintf(buf, sizeof(buf), "%s/%s_%d.dss", state_path, (char *)myhook.var.system.gamecard_name, idx);
    r = pfn((void*)myhook.var.system.base, buf, st, sb, ss_only);

    return r;
}

#if defined(UT)
TEST(detour_hook, load_state)
{
    uint16_t buf[MAX_PATH] = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, load_state(NULL, 0, NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(-1, load_state(buf, 0, buf, buf, 0));
}
#endif

int32_t save_state(void *sys, uint32_t idx, uint16_t *st, uint16_t *sb)
{
    int32_t r = -1;
    nds_save_state pfn = NULL;
    char buf[MAX_PATH] = { 0 };

    debug(DTR"call %s()\n", __func__);

    if (!sys || !st || !sb) {
        error(DTR"invalid parameters\n");
        return r;
    }

    pfn = (nds_save_state)myhook.fun.save_state;
    if (!pfn) {
        error(DTR"pfn is null\n");
        return r;
    }
    sprintf(buf, "%s_%d.dss", (char*)myhook.var.system.gamecard_name, idx);
    r = pfn((void*)myhook.var.system.base, state_path, buf, st, sb);

    return r;
}

#if defined(UT)
TEST(detour_hook, save_state)
{
    uint16_t buf[MAX_PATH] = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, save_state(NULL, 0, NULL, NULL));
    TEST_ASSERT_EQUAL_INT(-1, save_state(buf, 0, buf, buf));
}
#endif

void prehook_cb_init_backup(backup_struct *backup, backup_type_enum backup_type, uint8_t *data, uint32_t size, char *path)
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

    debug(DTR"call %s()\n");

    if (path && path[0]) {
        data_file_name = malloc(MAX_PATH);
        memset(data_file_name, 0, MAX_PATH);
        sprintf(data_file_name, "%s/%s.dsv", state_path, myhook.var.system.gamecard_name);
        debug(DTR"new state path=\"%s\"\n", data_file_name);
    }

    do {
        if (!backup) {
            error(DTR"backup is null\n");
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
            error(DTR"backup is null\n");
            break;
        }

        if (data_file_name == (char *)0) {
            backup->file_path[0] = 0;
        }
        else {
            __stream = fopen(data_file_name,"rb");
            backup->footer_written = '\0';
            if (__stream == (FILE *)0) {
                error(DTR"failed to load backup file in %s\n", __func__);
                memset(data, size, 0xff);
                memset(backup, 0xff, size >> 0xc);
            }
            else {
                sVar1 = fread(data, size, 1, __stream);
                if (sVar1 != 1) {
                    error(DTR"failed to load entire size in %s\n", __func__);
                }

                __off = ftell(__stream);
                fseek(__stream, 0, 2);
                uVar2 = ftell(__stream);
                fseek(__stream, __off, 0);
                fclose(__stream);
                debug(DTR"loading backup file %s, %d bytes in %s\n", data_file_name, uVar2, __func__);

                if ((size + 0x7a) != uVar2) {
                    backup->fix_file_size = size + 0x7a;
                }

                if (uVar2 < size) {
                    uVar3 = uVar2 - 0x400 & ~((int)(uVar2 - 0x400) >> 0x1f);
                    pvVar4 = memmem(data + uVar3, uVar2 - uVar3, (const void *)myhook.var.desmume_footer_str, 0x52);

                    if (pvVar4 != (void *)0x0) {
                        uVar2 = (intptr_t)pvVar4 - (intptr_t)data;
                        debug(DTR"found DeSmuME footer at %d. Truncating in %s\n", uVar2, __func__);
                    }
                    uVar3 = uVar2 >> 0xe;
                    error(DTR"backup file less than full size (should be %d, loaded %d) in %s\n", size, uVar2, __func__);

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
TEST(detour_hook, prehook_cb_init_backup)
{
    prehook_cb_init_backup(NULL, 0, NULL, 0, NULL);
    TEST_PASS();
}
#endif

int unlock_protected_area(uintptr_t addr)
{
    int r = -1;

    debug(DTR"call %s(0x%x)\n", __func__, addr);

    if (!addr) {
        error(DTR"invalid address\n");
        return r;
    }

    r = mprotect(ALIGN_ADDR(addr), page_size, PROT_READ | PROT_WRITE);
    debug(DTR"ret=%d\n", r);

    return r;
}

#if defined(UT)
TEST(detour_hook, unlock_protected_area)
{
    TEST_ASSERT_EQUAL_INT(-1, unlock_protected_area(0));
    TEST_ASSERT_EQUAL_INT( 0, unlock_protected_area(0xdeadbeef));
}
#endif

int install_prehook_cb(uintptr_t func, void *cb)
{
    int r = -1;
    uintptr_t addr = (uintptr_t)cb;
    volatile uint8_t *base = (uint8_t *)func;

    debug(DTR"call %s(func=0x%x, cb=%p)\n", __func__, func, cb);

    if (!func || !cb) {
        error(DTR"invalid parameters(0x%x, 0x%x)\n", func, cb);
        return r;
    }

    r = unlock_protected_area(func);
    if (base) {
        base[0] = 0x04;
        base[1] = 0xf0;
        base[2] = 0x1f;
        base[3] = 0xe5;
        base[4] = addr >> 0;
        base[5] = addr >> 8;
        base[6] = addr >> 16;
        base[7] = addr >> 24;
    }

    return r;
}

#if defined(UT)
TEST(detour_hook, install_prehook_cb)
{
    TEST_ASSERT_EQUAL_INT(-1, install_prehook_cb(0, 0));
}
#endif

static int init_table(void)
{
#if defined(NDS_ARM64)
    const uint64_t VAR_BASE_OFFSET = 0x7ff4496000;
    const uint64_t FUN_BASE_OFFSET = 0x7ff4133460;
    const uint64_t VAR_START_OFFSET = 0x004f6000;
    const uint64_t FUN_START_OFFSET = 0x00193460;
#endif

    debug(DTR"call %s()\n", __func__);

#if defined(NDS_ARM64)
    myhook.var.system.base                              = (uintptr_t *) 0x7ff4496000;
    myhook.var.system.config.frameskip_type             = (uint32_t *)  0x7ff451b9a8;
    myhook.var.system.config.frameskip_value            = (uint32_t *)  0x7ff451b9ac;
    myhook.var.system.config.safe_frameskip             = (uint32_t *)  0x7ff451ba10;
    myhook.var.system.config.show_frame_counter         = (uint32_t *)  0x7ff451b9b0;
    myhook.var.system.config.screen_orientation         = (uint32_t *)  0x7ff451b9b4;
    myhook.var.system.config.screen_scaling             = (uint32_t *)  0x7ff451b9b8;
    myhook.var.system.config.screen_swap                = (uint32_t *)  0x7ff451b9bc;
    myhook.var.system.config.savestate_number           = (uint32_t *)  0x7ff451b9c0;
    myhook.var.system.config.fast_forward               = (uint32_t *)  0x7ff451b9c4;
    myhook.var.system.config.enable_sound               = (uint32_t *)  0x7ff451b9c8;
    myhook.var.system.config.clock_speed                = (uint32_t *)  0x7ff451b9cc;
    myhook.var.system.config.threaded_3d                = (uint32_t *)  0x7ff451b9d0;
    myhook.var.system.config.mirror_touch               = (uint32_t *)  0x7ff451b9d4;
    myhook.var.system.config.compress_savestates        = (uint32_t *)  0x7ff451b9d8;
    myhook.var.system.config.savestate_snapshot         = (uint32_t *)  0x7ff451b9dc;
    myhook.var.system.config.unzip_roms                 = (uint32_t *)  0x7ff451b9e4;
    myhook.var.system.config.backup_in_savestates       = (uint32_t *)  0x7ff451b9e8;
    myhook.var.system.config.ignore_gamecard_limit      = (uint32_t *)  0x7ff451b9ec;
    myhook.var.system.config.frame_interval             = (uint32_t *)  0x7ff451b9f0;
    myhook.var.system.config.trim_roms                  = (uint32_t *)  0x7ff451b9f8;
    myhook.var.system.config.fix_main_2d_screen         = (uint32_t *)  0x7ff451b9fc;
    myhook.var.system.config.disable_edge_marking       = (uint32_t *)  0x7ff451ba00;
    myhook.var.system.config.hires_3d                   = (uint32_t *)  0x7ff451ba04;
    myhook.var.system.config.use_rtc_custom_time        = (uint32_t *)  0x7ff451ba1c;
    myhook.var.system.config.rtc_custom_time            = (uint64_t *)  0x7ff451ba20;
    myhook.var.system.config.rtc_system_time            = (uint32_t *)  0x7ff451ba28;
    myhook.var.system.config.slot2_device_type          = (uint32_t *)  0x7ff451ba14;
    myhook.var.system.config.rumble_frames              = (uint32_t *)  0x7ff451ba18;
    myhook.var.system.config.enable_cheats              = (uint32_t *)  0x7ff451b9e0;
    myhook.var.system.config.batch_threads_3d_count     = (uint32_t *)  0x7ff451b9f4;
    myhook.var.system.config.bypass_3d                  = (uint32_t *)  0x7ff451ba08;
    myhook.var.system.config.firmware.username          = (wchar_t *)   0x7ff451b590;
    myhook.var.system.config.firmware.language          = (uint32_t *)  0x7ff451b594;
    myhook.var.system.config.firmware.favorite_color    = (uint32_t *)  0x7ff451b598;
    myhook.var.system.config.firmware.birthday_month    = (uint32_t *)  0x7ff451b59c;
    myhook.var.system.config.firmware.birthday_day      = (uint32_t *)  0x7ff451b5a0;

    myhook.var.system.config.controls_a[CONTROL_INDEX_UP]                   = (uint16_t *) 0x7ff451ba2c;
    myhook.var.system.config.controls_a[CONTROL_INDEX_DOWN]                 = (uint16_t *) 0x7ff451ba2e;
    myhook.var.system.config.controls_a[CONTROL_INDEX_LEFT]                 = (uint16_t *) 0x7ff451ba30;
    myhook.var.system.config.controls_a[CONTROL_INDEX_RIGHT]                = (uint16_t *) 0x7ff451ba32;
    myhook.var.system.config.controls_a[CONTROL_INDEX_A]                    = (uint16_t *) 0x7ff451ba34;
    myhook.var.system.config.controls_a[CONTROL_INDEX_B]                    = (uint16_t *) 0x7ff451ba36;
    myhook.var.system.config.controls_a[CONTROL_INDEX_X]                    = (uint16_t *) 0x7ff451ba38;
    myhook.var.system.config.controls_a[CONTROL_INDEX_Y]                    = (uint16_t *) 0x7ff451ba3a;
    myhook.var.system.config.controls_a[CONTROL_INDEX_L]                    = (uint16_t *) 0x7ff451ba3c;
    myhook.var.system.config.controls_a[CONTROL_INDEX_R]                    = (uint16_t *) 0x7ff451ba3e;
    myhook.var.system.config.controls_a[CONTROL_INDEX_START]                = (uint16_t *) 0x7ff451ba40;
    myhook.var.system.config.controls_a[CONTROL_INDEX_SELECT]               = (uint16_t *) 0x7ff451ba42;
    myhook.var.system.config.controls_a[CONTROL_INDEX_HINGE]                = (uint16_t *) 0x7ff451ba44;
    myhook.var.system.config.controls_a[CONTROL_INDEX_TOUCH_CURSOR_UP]      = (uint16_t *) 0x7ff451ba46;
    myhook.var.system.config.controls_a[CONTROL_INDEX_TOUCH_CURSOR_DOWN]    = (uint16_t *) 0x7ff451ba48;
    myhook.var.system.config.controls_a[CONTROL_INDEX_TOUCH_CURSOR_LEFT]    = (uint16_t *) 0x7ff451ba4a;
    myhook.var.system.config.controls_a[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]   = (uint16_t *) 0x7ff451ba4c;
    myhook.var.system.config.controls_a[CONTROL_INDEX_TOUCH_CURSOR_PRESS]   = (uint16_t *) 0x7ff451ba4e;
    myhook.var.system.config.controls_a[CONTROL_INDEX_MENU]                 = (uint16_t *) 0x7ff451ba50;
    myhook.var.system.config.controls_a[CONTROL_INDEX_SAVE_STATE]           = (uint16_t *) 0x7ff451ba52;
    myhook.var.system.config.controls_a[CONTROL_INDEX_LOAD_STATE]           = (uint16_t *) 0x7ff451ba54;
    myhook.var.system.config.controls_a[CONTROL_INDEX_FAST_FORWARD]         = (uint16_t *) 0x7ff451ba56;
    myhook.var.system.config.controls_a[CONTROL_INDEX_SWAP_SCREENS]         = (uint16_t *) 0x7ff451ba58;
    myhook.var.system.config.controls_a[CONTROL_INDEX_SWAP_ORIENTATION_A]   = (uint16_t *) 0x7ff451ba5a;
    myhook.var.system.config.controls_a[CONTROL_INDEX_SWAP_ORIENTATION_B]   = (uint16_t *) 0x7ff451ba5c;
    myhook.var.system.config.controls_a[CONTROL_INDEX_LOAD_GAME]            = (uint16_t *) 0x7ff451ba5e;
    myhook.var.system.config.controls_a[CONTROL_INDEX_QUIT]                 = (uint16_t *) 0x7ff451ba60;
    myhook.var.system.config.controls_a[CONTROL_INDEX_FAKE_MICROPHONE]      = (uint16_t *) 0x7ff451ba62;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_UP]                = (uint16_t *) 0x7ff451ba6a;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_DOWN]              = (uint16_t *) 0x7ff451ba6c;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_LEFT]              = (uint16_t *) 0x7ff451ba6e;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_RIGHT]             = (uint16_t *) 0x7ff451ba70;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_SELECT]            = (uint16_t *) 0x7ff451ba72;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_BACK]              = (uint16_t *) 0x7ff451ba76;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_EXIT]              = (uint16_t *) 0x7ff451ba74;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_PAGE_UP]           = (uint16_t *) 0x7ff451ba78;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_PAGE_DOWN]         = (uint16_t *) 0x7ff451ba7a;
    myhook.var.system.config.controls_a[CONTROL_INDEX_UI_SWITCH]            = (uint16_t *) 0x7ff451ba7c;

    myhook.var.system.config.controls_b[CONTROL_INDEX_UP]                   = (uint16_t *) 0x7ff451ba7e;
    myhook.var.system.config.controls_b[CONTROL_INDEX_DOWN]                 = (uint16_t *) 0x7ff451ba80;
    myhook.var.system.config.controls_b[CONTROL_INDEX_LEFT]                 = (uint16_t *) 0x7ff451ba82;
    myhook.var.system.config.controls_b[CONTROL_INDEX_RIGHT]                = (uint16_t *) 0x7ff451ba84;
    myhook.var.system.config.controls_b[CONTROL_INDEX_A]                    = (uint16_t *) 0x7ff451ba86;
    myhook.var.system.config.controls_b[CONTROL_INDEX_B]                    = (uint16_t *) 0x7ff451ba88;
    myhook.var.system.config.controls_b[CONTROL_INDEX_X]                    = (uint16_t *) 0x7ff451ba8a;
    myhook.var.system.config.controls_b[CONTROL_INDEX_Y]                    = (uint16_t *) 0x7ff451ba8c;
    myhook.var.system.config.controls_b[CONTROL_INDEX_L]                    = (uint16_t *) 0x7ff451ba8e;
    myhook.var.system.config.controls_b[CONTROL_INDEX_R]                    = (uint16_t *) 0x7ff451ba90;
    myhook.var.system.config.controls_b[CONTROL_INDEX_START]                = (uint16_t *) 0x7ff451ba92;
    myhook.var.system.config.controls_b[CONTROL_INDEX_SELECT]               = (uint16_t *) 0x7ff451ba94;
    myhook.var.system.config.controls_b[CONTROL_INDEX_HINGE]                = (uint16_t *) 0x7ff451ba96;
    myhook.var.system.config.controls_b[CONTROL_INDEX_TOUCH_CURSOR_UP]      = (uint16_t *) 0x7ff451ba98;
    myhook.var.system.config.controls_b[CONTROL_INDEX_TOUCH_CURSOR_DOWN]    = (uint16_t *) 0x7ff451ba9a;
    myhook.var.system.config.controls_b[CONTROL_INDEX_TOUCH_CURSOR_LEFT]    = (uint16_t *) 0x7ff451ba9c;
    myhook.var.system.config.controls_b[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]   = (uint16_t *) 0x7ff451ba9e;
    myhook.var.system.config.controls_b[CONTROL_INDEX_TOUCH_CURSOR_PRESS]   = (uint16_t *) 0x7ff451baa0;
    myhook.var.system.config.controls_b[CONTROL_INDEX_MENU]                 = (uint16_t *) 0x7ff451baa2;
    myhook.var.system.config.controls_b[CONTROL_INDEX_SAVE_STATE]           = (uint16_t *) 0x7ff451baa4;
    myhook.var.system.config.controls_b[CONTROL_INDEX_LOAD_STATE]           = (uint16_t *) 0x7ff451baa6;
    myhook.var.system.config.controls_b[CONTROL_INDEX_FAST_FORWARD]         = (uint16_t *) 0x7ff451baa8;
    myhook.var.system.config.controls_b[CONTROL_INDEX_SWAP_SCREENS]         = (uint16_t *) 0x7ff451baaa;
    myhook.var.system.config.controls_b[CONTROL_INDEX_SWAP_ORIENTATION_A]   = (uint16_t *) 0x7ff451baac;
    myhook.var.system.config.controls_b[CONTROL_INDEX_SWAP_ORIENTATION_B]   = (uint16_t *) 0x7ff451baae;
    myhook.var.system.config.controls_b[CONTROL_INDEX_LOAD_GAME]            = (uint16_t *) 0x7ff451bab0;
    myhook.var.system.config.controls_b[CONTROL_INDEX_QUIT]                 = (uint16_t *) 0x7ff451bab2;
    myhook.var.system.config.controls_b[CONTROL_INDEX_FAKE_MICROPHONE]      = (uint16_t *) 0x7ff451bab4;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_UP]                = (uint16_t *) 0x7ff451babc;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_DOWN]              = (uint16_t *) 0x7ff451babe;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_LEFT]              = (uint16_t *) 0x7ff451bac0;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_RIGHT]             = (uint16_t *) 0x7ff451bac2;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_SELECT]            = (uint16_t *) 0x7ff451bac4;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_BACK]              = (uint16_t *) 0x7ff451bac8;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_EXIT]              = (uint16_t *) 0x7ff451bac6;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_PAGE_UP]           = (uint16_t *) 0x7ff451baca;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_PAGE_DOWN]         = (uint16_t *) 0x7ff451bacc;
    myhook.var.system.config.controls_b[CONTROL_INDEX_UI_SWITCH]            = (uint16_t *) 0x7ff451bace;

    myhook.var.sdl.window               = (uintptr_t *) (VAR_BASE_OFFSET + (0x0402a578 - VAR_START_OFFSET));
    myhook.var.sdl.renderer             = (uintptr_t *) (VAR_BASE_OFFSET + (0x0402a580 - VAR_START_OFFSET));
    myhook.var.sdl.pixel_format         = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a5a8 - VAR_START_OFFSET));
    myhook.var.sdl.color_depth          = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a5ac - VAR_START_OFFSET));
    myhook.var.sdl.bytes_per_pixel      = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a5b0 - VAR_START_OFFSET));
    myhook.var.sdl.logical_width        = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a5bc - VAR_START_OFFSET));
    myhook.var.sdl.logical_height       = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a5c0 - VAR_START_OFFSET));
    myhook.var.sdl.scale_factor         = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a5cc - VAR_START_OFFSET));
    myhook.var.sdl.update_orientation   = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a5d0 - VAR_START_OFFSET));
    myhook.var.sdl.swap_screens         = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a5d4 - VAR_START_OFFSET));
    myhook.var.sdl.needs_reinitializing = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a5dc - VAR_START_OFFSET));

    myhook.var.sdl.screen[0].texture    = (uintptr_t *) (VAR_BASE_OFFSET + (0x0402a528 - VAR_START_OFFSET));
    myhook.var.sdl.screen[0].pixels     = (uintptr_t *) (VAR_BASE_OFFSET + (0x0402a530 - VAR_START_OFFSET));
    myhook.var.sdl.screen[0].x          = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a538 - VAR_START_OFFSET));
    myhook.var.sdl.screen[0].y          = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a53c - VAR_START_OFFSET));
    myhook.var.sdl.screen[0].w          = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a540 - VAR_START_OFFSET));
    myhook.var.sdl.screen[0].h          = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a544 - VAR_START_OFFSET));
    myhook.var.sdl.screen[0].show       = (uint8_t *)   (VAR_BASE_OFFSET + (0x0402a548 - VAR_START_OFFSET));
    myhook.var.sdl.screen[0].hires_mode = (uint8_t *)   (VAR_BASE_OFFSET + (0x0402a549 - VAR_START_OFFSET));

    myhook.var.sdl.screen[1].texture    = (uintptr_t *) (VAR_BASE_OFFSET + (0x0402a550 - VAR_START_OFFSET));
    myhook.var.sdl.screen[1].pixels     = (uintptr_t *) (VAR_BASE_OFFSET + (0x0402a558 - VAR_START_OFFSET));
    myhook.var.sdl.screen[1].x          = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a560 - VAR_START_OFFSET));
    myhook.var.sdl.screen[1].y          = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a564 - VAR_START_OFFSET));
    myhook.var.sdl.screen[1].w          = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a568 - VAR_START_OFFSET));
    myhook.var.sdl.screen[1].h          = (uint32_t *)  (VAR_BASE_OFFSET + (0x0402a56c - VAR_START_OFFSET));
    myhook.var.sdl.screen[1].show       = (uint8_t *)   (VAR_BASE_OFFSET + (0x0402a570 - VAR_START_OFFSET));
    myhook.var.sdl.screen[1].hires_mode = (uint8_t *)   (VAR_BASE_OFFSET + (0x0402a571 - VAR_START_OFFSET));

    myhook.fun.menu                     = FUN_BASE_OFFSET;
    myhook.fun.quit                     = FUN_BASE_OFFSET - (FUN_START_OFFSET - 0x0010fa20);
    myhook.fun.set_screen_swap          = FUN_BASE_OFFSET - (FUN_START_OFFSET - 0x0019a7d0);
    myhook.fun.set_screen_menu_on       = FUN_BASE_OFFSET - (FUN_START_OFFSET - 0x0019a900);
    myhook.fun.set_screen_menu_off      = FUN_BASE_OFFSET - (FUN_START_OFFSET - 0x0019a170);
    myhook.fun.set_screen_hires_mode    = FUN_BASE_OFFSET - (FUN_START_OFFSET - 0x00199f90);
    myhook.fun.set_screen_orientation   = FUN_BASE_OFFSET - (FUN_START_OFFSET - 0x0019a7b0);
    myhook.fun.set_screen_scale_factor  = FUN_BASE_OFFSET - (FUN_START_OFFSET - 0x0019a790);
#endif

#if defined(NDS_ARM32)
    myhook.var.system.base              = (uintptr_t *) 0x083f4000;
    myhook.var.system.gamecard_name     = (uint32_t *)  0x0847e8e8;
    myhook.var.system.savestate_num     = (uint32_t *)  0x08479780;
    myhook.var.sdl.bytes_per_pixel      = (uint32_t *)  0x0aee957c;
    myhook.var.sdl.needs_reinitializing = (uint32_t *)  0x0aee95a0;
    myhook.var.sdl.window               = (uintptr_t *) 0x0aee9564;
    myhook.var.sdl.renderer             = (uintptr_t *) 0x0aee9568;
    myhook.var.sdl.screen[0].texture    = (uintptr_t *) 0x0aee952c;
    myhook.var.sdl.screen[0].pixels     = (uintptr_t *) 0x0aee9530;
    myhook.var.sdl.screen[0].x          = (uint32_t *)  0x0aee9534;
    myhook.var.sdl.screen[0].y          = (uint32_t *)  0x0aee9538;
    myhook.var.sdl.screen[0].w          = (uint32_t *)  0x0aee953c;
    myhook.var.sdl.screen[0].h          = (uint32_t *)  0x0aee9540;
    myhook.var.sdl.screen[0].show       = (uint8_t *)   0x0aee9544;
    myhook.var.sdl.screen[0].hires_mode = (uint8_t *)   0x0aee9545;
    myhook.var.sdl.screen[1].texture    = (uintptr_t *) 0x0aee9548;
    myhook.var.sdl.screen[1].pixels     = (uintptr_t *) 0x0aee954c;
    myhook.var.sdl.screen[1].x          = (uint32_t *)  0x0aee9550;
    myhook.var.sdl.screen[1].y          = (uint32_t *)  0x0aee9554;
    myhook.var.sdl.screen[1].w          = (uint32_t *)  0x0aee9558;
    myhook.var.sdl.screen[1].h          = (uint32_t *)  0x0aee955c;
    myhook.var.sdl.screen[1].show       = (uint8_t *)   0x0aee9560;
    myhook.var.sdl.screen[1].hires_mode = (uint8_t *)   0x0aee9561;
    myhook.var.adpcm.step_table         = (uint32_t *)  0x0815a600;
    myhook.var.adpcm.index_step_table   = (uint32_t *)  0x0815a6b8;
    myhook.var.desmume_footer_str       = (uint32_t *)  0x0815a740;
    myhook.var.pcm_handler              = (uint32_t *)  0x083e532c;
    myhook.var.fast_forward             = (uint32_t *)  0x08006ad0;

    myhook.fun.menu                                     = 0x080a0a18;
    myhook.fun.free                                     = 0x08003e58;
    myhook.fun.realloc                                  = 0x0800435c;
    myhook.fun.malloc                                   = 0x080046e0;
    myhook.fun.screen_copy16                            = 0x080a59d8;
    myhook.fun.print_string                             = 0x080a5398;
    myhook.fun.load_state_index                         = 0x08095ce4;
    myhook.fun.save_state_index                         = 0x08095c10;
    myhook.fun.quit                                     = 0x08006444;
    myhook.fun.savestate_pre                            = 0x08095a80;
    myhook.fun.savestate_post                           = 0x08095154;
    myhook.fun.update_screen                            = 0x080a83c0;
    myhook.fun.load_state                               = 0x080951c0;
    myhook.fun.save_state                               = 0x0809580c;
    myhook.fun.blit_screen_menu                         = 0x080a62d8;
    myhook.fun.initialize_backup                        = 0x08092f40;
    myhook.fun.set_screen_menu_off                      = 0x080a8240;
    myhook.fun.get_screen_ptr                           = 0x080a890c;
    myhook.fun.spu_adpcm_decode_block                   = 0x0808d268;
    myhook.fun.render_scanline_tiled_4bpp               = 0x080bcf74;
    myhook.fun.render_polygon_setup_perspective_steps   = 0x080c1cd4;
#endif

    return 0;
}

#if defined(UT)
TEST(detour_hook, init_table)
{
    TEST_ASSERT_EQUAL_INT(0, init_table());
}
#endif

int init_hook(void)
{
    debug(DTR"call %s()\n", __func__);

    if (init_table() < 0) {
        error(DTR"failed to initialize hook table\n");
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(detour_hook, init_hook)
{
    TEST_ASSERT_EQUAL_INT(0, init_hook());
}
#endif

int quit_hook(void)
{
    debug(DTR"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(detour_hook, quit_hook)
{
    TEST_ASSERT_EQUAL_INT(0, quit_hook());
}
#endif

size_t set_page_size(size_t ps)
{
    size_t org = page_size;

    debug(DTR"call %s()\n", __func__);

    page_size = ps;
    debug(DTR"new page_size=%d\n", page_size);
    return org;
}

#if defined(UT)
TEST(detour_hook, set_page_size)
{
    set_page_size(1024);
    TEST_ASSERT_EQUAL_INT(1024, set_page_size(4096));
    TEST_ASSERT_EQUAL_INT(4096, page_size);
}
#endif

int install_state_handler(const char *path)
{
    debug(DTR"call %s()\n", __func__);

    is_state_hooked = 0;
    if (!path) {
        error(DTR"invalid path\n");
        return -1;
    }

    if (install_prehook_cb(myhook.fun.load_state_index, prehook_cb_load_state_index) < 0) {
        error(DTR"failed to install load_state_index hook\n");
        return -1;
    }

    if (install_prehook_cb(myhook.fun.save_state_index, prehook_cb_save_state_index) < 0) {
        error(DTR"failed to install save_state_index hook\n");
        return -1;
    }

    if (install_prehook_cb(myhook.fun.initialize_backup, prehook_cb_init_backup) < 0) {
        error(DTR"failed to install initialize_backup hook\n");
        return -1;
    }

    if (path && path[0]) {
        debug(DTR"new state path \"%s\"", path);

        is_state_hooked = 1;
        strncpy(state_path, path, sizeof(state_path));
        return 0;
    }

    return -1;
}

#if defined(UT)
TEST(detour_hook, install_state_handler)
{
    TEST_ASSERT_EQUAL_INT(-1, install_state_handler(NULL));
}
#endif

#if defined(UIDBG) || defined(MIYOO_FLIP) || defined(UT)
void prehook_cb_render_polygon_steps(void)
{
    debug(DTR"call %s()\n", __func__);
}
#endif

#if defined(UT)
TEST(detour_hook, prehook_cb_render_polygon_steps)
{
    prehook_cb_render_polygon_steps();
    TEST_PASS();
}
#endif

int install_render_handler(void)
{
    debug(DTR"call %s()\n", __func__);

    if (install_prehook_cb(myhook.fun.render_polygon_setup_perspective_steps, prehook_cb_render_polygon_steps) < 0) {
        error(DTR"failed to install render_polygon_setup_perspective_steps hook\n");
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(detour_hook, install_render_handler)
{
    TEST_ASSERT_EQUAL_INT(-1, install_render_handler());
}
#endif

int patch_elf(uint64_t pos, uint64_t pfn)
{
    #define LEN 16

    int r = -1;
    int len = 0;
    FILE* fp = NULL;
    uint8_t src[LEN] = { 0 };
    uint8_t dst[LEN] = { 0x42, 0x00, 0x00, 0x58, 0x40, 0x00, 0x1f, 0xd6 };

    debug(DTR"call %s()\n", __func__);

    fp = fopen("drastic", "rb+");
    if (fp == NULL) {
        error(DTR"failed to open drastic file\n");
        return r;
    }

    fseek(fp, pos, SEEK_SET);
    len = fread(src, 1, LEN, fp);
    debug(DTR"read %d bytes\n", len);

    dst[8] = (uint8_t)(pfn >> 0);
    dst[9] = (uint8_t)(pfn >> 8);
    dst[10] = (uint8_t)(pfn >> 16);
    dst[11] = (uint8_t)(pfn >> 24);
    dst[12] = (uint8_t)(pfn >> 32);
    dst[13] = (uint8_t)(pfn >> 40);
    dst[14] = (uint8_t)(pfn >> 48);
    dst[15] = (uint8_t)(pfn >> 56);

    debug(DTR"org %04llx: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
        pos,
        src[0], src[1], src[2], src[3], src[4], src[5], src[6], src[7],
        src[8], src[9], src[10], src[11], src[12], src[13], src[14], src[15]
    );
    debug(DTR"new %04llx: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
        pos,
        dst[0], dst[1], dst[2], dst[3], dst[4], dst[5], dst[6], dst[7],
        dst[9], dst[9], dst[10], dst[11], dst[12], dst[13], dst[14], dst[15]
    );

    if (memcmp(src, dst, LEN)) {
        fseek(fp, pos, SEEK_SET);
        len = fwrite(dst, 1, LEN, fp);
        debug(DTR"patched drastic at 0x%llx successfully\n", pos);
    }
    else {
        r = 0;
    }

    fclose(fp);
    return r;
}

#if defined(UT)
TEST(detour_hook, patch_elf)
{
    TEST_ASSERT_EQUAL_INT(-1, patch_elf(0, 0));
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(detour_hook)
{
    RUN_TEST_CASE(detour_hook, prehook_cb_save_state_index)
    RUN_TEST_CASE(detour_hook, prehook_cb_load_state_index)
    RUN_TEST_CASE(detour_hook, emu_quit)
    RUN_TEST_CASE(detour_hook, set_fast_forward)
    RUN_TEST_CASE(detour_hook, load_state)
    RUN_TEST_CASE(detour_hook, save_state)
    RUN_TEST_CASE(detour_hook, prehook_cb_init_backup)
    RUN_TEST_CASE(detour_hook, unlock_protected_area)
    RUN_TEST_CASE(detour_hook, install_prehook_cb)
    RUN_TEST_CASE(detour_hook, init_table)
    RUN_TEST_CASE(detour_hook, init_hook)
    RUN_TEST_CASE(detour_hook, quit_hook)
    RUN_TEST_CASE(detour_hook, set_page_size)
    RUN_TEST_CASE(detour_hook, install_state_handler)
    RUN_TEST_CASE(detour_hook, prehook_cb_render_polygon_steps)
    RUN_TEST_CASE(detour_hook, install_render_handler)
    RUN_TEST_CASE(detour_hook, patch_elf)
}
#endif

