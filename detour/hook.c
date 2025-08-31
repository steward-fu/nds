// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#define _GNU_SOURCE
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>
#include <string.h>
#include <pthread.h>
#include <sys/mman.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "hook.h"
#include "common.h"

nds_hook myhook = { 0 };

static int is_state_hooked = 0;
static size_t page_size = 4096;
static char home_path[MAX_PATH] = { 0 };
static char state_path[MAX_PATH] = { 0 };
static int init_table(void);

#if defined(UT)
TEST_GROUP(detour);

TEST_SETUP(detour)
{
    init_table();
}

TEST_TEAR_DOWN(detour)
{
}
#endif

int unlock_protected_area(void *p)
{
    int r = -1;

    debug("call %s(p=%p)\n", __func__, p);

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
    nds_load_state pfn = (nds_load_state)myhook.fun.load_state;

    debug("call %s(pfn=%p)\n", __func__, pfn);

    if (!pfn) {
        error("invalid pfn\n");
        return -1;
    }

    if (!system || !d0 || !d1) {
        error("invalid parameters(%p, %p, %p)\n", system, d0, d1);
        return -1;
    }

#if defined(UT)
    return 0;
#endif

    sprintf(buf, "%s/%s_%d.dss", state_path, (const char *)myhook.var.system.gamecard_name, index);
    pfn((void*)myhook.var.system.base, buf, d0, d1, shot_only);
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
    nds_save_state pfn = (nds_save_state)myhook.fun.save_state;

    debug("call %s(pfn=%p)\n", __func__, pfn);

    if (!pfn) {
        error("invalid pfn\n");
        return -1;
    }

    if (!system || !d0 || !d1) {
        error("invalid parameters(%p, %p, %p)\n", system, d0, d1);
        return -1;
    }

#if defined(UT)
    return 0;
#endif

    sprintf(buf, "%s_%d.dss", (const char *)myhook.var.system.gamecard_name, index);
    pfn((void*)myhook.var.system.base, state_path, buf, d0, d1);
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

    debug("call %s()\n", __func__);

    if (path && path[0]) {
        data_file_name = malloc(MAX_PATH);
        memset(data_file_name, 0, MAX_PATH);
        sprintf(data_file_name, "%s/%s.dsv", state_path, (const char *)myhook.var.system.gamecard_name);
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
                    pvVar4 = memmem(data + uVar3, uVar2 - uVar3, (const void *)myhook.var.desmume_footer_str, 0x52);

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
    nds_screen_copy16 pfn_copy16 = (nds_screen_copy16)myhook.fun.screen_copy16;

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
            error("invalid d0 or d1\n");
            break;
        }

        pfn_copy16(d0, 0);
        pfn_copy16(d1, 1);

        if (is_state_hooked == 0) {
            nds_save_state_index pfn = (nds_save_state_index)myhook.fun.save_state_index;

            if (!pfn) {
                error("invalid pfn\n");
                break;
            }

            r = 0;
            pfn((void*)myhook.var.system.base, slot, d0, d1);
        }
        else {
            nds_save_state pfn = (nds_save_state)myhook.fun.save_state;

            if (!pfn) {
                error("invalid pfn\n");
                break;
            }

            r = 0;
            sprintf(buf, "%s_%d.dss", (const char *)myhook.var.system.gamecard_name, slot);
            pfn((void*)myhook.var.system.base, state_path, buf, d0, d1);
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
        nds_load_state_index pfn = (nds_load_state_index)myhook.fun.load_state_index;

        if (!pfn) {
            error("invalid pfn\n");
            return -1;
        }

        pfn((void*)myhook.var.system.base, slot, 0, 0, 0);
    }
    else {
        nds_load_state pfn = (nds_load_state)myhook.fun.load_state;

        if (!pfn) {
            error("invalid pfn\n");
            return -1;
        }

        sprintf(buf, "%s/%s_%d.dss", state_path, (const char *)myhook.var.system.gamecard_name, slot);
        pfn((void*)myhook.var.system.base, buf, 0, 0, 0);
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
    nds_quit pfn = (nds_quit)myhook.fun.quit;

    debug("call %s(pfn=%p)\n", __func__, pfn);

    if (!pfn) {
        error("invalid pfn\n");
        return -1;
    }

#if !defined(UT)
    pfn((void*)myhook.var.system.base);
#endif

    return 0;
}

#if defined(UT)
TEST(detour, quit_drastic)
{
    TEST_ASSERT_EQUAL_INT(0, quit_drastic());
}
#endif

static int patch_drastic64(uint64_t pos, uint64_t pfn)
{
    #define LEN       16
    #define DRASTIC64 "drastic64"

    int r = -1;
    int len = 0;
    FILE* fp = NULL;
    char buf[MAX_PATH] = { 0 };
    uint8_t src[LEN] = { 0 };
    uint8_t dst[LEN] = { 0x42, 0x00, 0x00, 0x58, 0x40, 0x00, 0x1f, 0xd6 };

    debug("call %s(pos=0x%lx, pfn=0x%lx)\n", __func__, pos, pfn);

    snprintf(buf, sizeof(buf), "/tmp/%s", DRASTIC64);
    debug("patch the target file (\"%s\")\n", buf);

    fp = fopen(buf, "rb+");
    if (fp == NULL) {
        error("failed to open file (\'%s\', err=%d)\n", buf, errno);
        return r;
    }

    fseek(fp, pos, SEEK_SET);
    len = fread(src, 1, LEN, fp);
    debug("read %d bytes\n", len);

    dst[8] = (uint8_t)(pfn >> 0);
    dst[9] = (uint8_t)(pfn >> 8);
    dst[10] = (uint8_t)(pfn >> 16);
    dst[11] = (uint8_t)(pfn >> 24);
    dst[12] = (uint8_t)(pfn >> 32);
    dst[13] = (uint8_t)(pfn >> 40);
    dst[14] = (uint8_t)(pfn >> 48);
    dst[15] = (uint8_t)(pfn >> 56);

    debug("org 0x%04lx: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
        pos,
        src[0], src[1], src[2], src[3], src[4], src[5], src[6], src[7],
        src[8], src[9], src[10], src[11], src[12], src[13], src[14], src[15]
    );
    debug("new 0x%04lx: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
        pos,
        dst[0], dst[1], dst[2], dst[3], dst[4], dst[5], dst[6], dst[7],
        dst[9], dst[9], dst[10], dst[11], dst[12], dst[13], dst[14], dst[15]
    );

    if (memcmp(src, dst, LEN)) {
        fseek(fp, pos, SEEK_SET);
        len = fwrite(dst, 1, LEN, fp);
        debug("patched drastic64 at 0x%lx successfully\n", pos);
    }
    else {
        r = 0;
    }

    fclose(fp);

    return r;
}

#if defined(UT)
TEST(detour, patch_drastic64)
{
    TEST_ASSERT_EQUAL_INT(-1, patch_drastic64(0, 0));
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

#if defined(NDS_ARM64)
    r = patch_drastic64((uintptr_t)org, (uintptr_t)cb);
#else
    if (unlock_protected_area(org) >= 0) {
        uintptr_t c = (uintptr_t)cb;
        volatile uint8_t *m = (uint8_t *)(intptr_t)org;

        r = 0;
        m[0] = 0x04;
        m[1] = 0xf0;
        m[2] = 0x1f;
        m[3] = 0xe5;
        m[4] = c >> 0;
        m[5] = c >> 8;
        m[6] = c >> 16;
        m[7] = c >> 24;
    }
#endif

    return r;
}

#if defined(UT)
TEST(detour, add_prehook_cb)
{
    TEST_ASSERT_EQUAL_INT(-1, add_prehook_cb(0, 0));
    TEST_ASSERT_EQUAL_INT(0, add_prehook_cb((void *)0xdead, (void *)0xdead));
}
#endif

static int init_table(void)
{
    debug("call %s()\n", __func__);

    myhook.var.system.base = (uintptr_t *)0x083f4000;
    myhook.var.system.gamecard_name = (uint32_t *)0x0847e8e8;
    myhook.var.system.savestate_num = (uint32_t *)0x08479780;
    myhook.var.system.config.base = (uintptr_t *)0x08479328;
    myhook.var.system.config.hires_3d = (uint32_t *)0x084797c4;
    myhook.var.system.config.controls_a = (uint16_t *)0x084797dc;
    myhook.var.system.config.controls_b = (uint16_t *)0x0847982c;
    myhook.var.system.video.realtime_speed_percentage = (float *)0x0aedec08;
    myhook.var.system.video.rendered_frames_percentage = (float *)0x0aedec0c;
    myhook.var.sdl.swap_screens = (uint32_t *)0x0aee9598;
    myhook.var.sdl.bytes_per_pixel = (uint32_t *)0x0aee957c;
    myhook.var.sdl.needs_reinitializing = (uint32_t *)0x0aee95a0;
    myhook.var.sdl.window = (uintptr_t *)0x0aee9564;
    myhook.var.sdl.renderer = (uintptr_t *)0x0aee9568;
    myhook.var.sdl.screen[0].texture = (uintptr_t *)0x0aee952c;
    myhook.var.sdl.screen[0].pixels = (uintptr_t *)0x0aee9530;
    myhook.var.sdl.screen[0].x = (uint32_t *)0x0aee9534;
    myhook.var.sdl.screen[0].y = (uint32_t *)0x0aee9538;
    myhook.var.sdl.screen[0].w = (uint32_t *)0x0aee953c;
    myhook.var.sdl.screen[0].h = (uint32_t *)0x0aee9540;
    myhook.var.sdl.screen[0].show = (uint8_t *)0x0aee9544;
    myhook.var.sdl.screen[0].hires_mode = (uint8_t *)0x0aee9545;
    myhook.var.sdl.screen[1].texture = (uintptr_t *)0x0aee9548;
    myhook.var.sdl.screen[1].pixels = (uintptr_t *)0x0aee954c;
    myhook.var.sdl.screen[1].x = (uint32_t *)0x0aee9550;
    myhook.var.sdl.screen[1].y = (uint32_t *)0x0aee9554;
    myhook.var.sdl.screen[1].w = (uint32_t *)0x0aee9558;
    myhook.var.sdl.screen[1].h = (uint32_t *)0x0aee955c;
    myhook.var.sdl.screen[1].show = (uint8_t *)0x0aee9560;
    myhook.var.sdl.screen[1].hires_mode = (uint8_t *)0x0aee9561;
    myhook.var.adpcm.step_table = (uint32_t *)0x0815a600;
    myhook.var.adpcm.index_step_table = (uint32_t *)0x0815a6b8;
    myhook.var.desmume_footer_str = (uint32_t *)0x0815a740;
    myhook.var.pcm_handler = (uint32_t *)0x083e532c;
    myhook.var.fast_forward = (uint32_t *)0x08006ad0;
    myhook.var.savestate_thread = (savestate_thread_data_struct *)0x083e4ad0;

#if defined(NDS_ARM64)
    myhook.fun.menu = (void *)0x0007fbd0;
    myhook.fun.free = (void *)0x0000d660;
    myhook.fun.realloc = (void *)0x0000d740;
    myhook.fun.malloc = (void *)0x0000dfb0;
    myhook.fun.screen_copy16 = (void *)0x00088290;
    myhook.fun.print_string = (void *)0x00087f00;
    myhook.fun.print_string_ext = (void *)0x00087bf0;
    myhook.fun.load_state_index = (void *)0x00075230;
    myhook.fun.save_state_index = (void *)0x00075150;
    myhook.fun.quit = (void *)0x0000e8d0;
    myhook.fun.savestate_pre = (void *)0;
    myhook.fun.savestate_post = (void *)0;
    myhook.fun.update_screen = (void *)0x0008a120;
    myhook.fun.load_state = (void *)0x000746f0;
    myhook.fun.save_state = (void *)0x00074da0;
    myhook.fun.blit_screen_menu = (void *)0x00088570;
    myhook.fun.initialize_backup = (void *)0x00072530;
    myhook.fun.set_screen_menu_off = (void *)0x0008a4a0;
    myhook.fun.get_screen_ptr = (void *)0x0008a9c0;
    myhook.fun.select_quit = (void *)0x0007a260;
    myhook.fun.platform_get_input = (void *)0x0008acc0;

    myhook.fun.spu_adpcm_decode_block = (void *)0;
    myhook.fun.render_scanline_tiled_4bpp = (void *)0;
    myhook.fun.render_polygon_setup_perspective_steps = (void *)0;
#else
    myhook.fun.menu = (void *)0x080a0a18;
    myhook.fun.free = (void *)0x08003e58;
    myhook.fun.realloc = (void *)0x0800435c;
    myhook.fun.malloc = (void *)0x080046e0;
    myhook.fun.screen_copy16 = (void *)0x080a59d8;
    myhook.fun.print_string = (void *)0x080a5398;
    myhook.fun.load_state_index = (void *)0x08095ce4;
    myhook.fun.save_state_index = (void *)0x08095c10;
    myhook.fun.quit = (void *)0x08006444;
    myhook.fun.savestate_pre = (void *)0x08095a80;
    myhook.fun.savestate_post = (void *)0x08095154;
    myhook.fun.update_screen = (void *)0x080a83c0;
    myhook.fun.load_state = (void *)0x080951c0;
    myhook.fun.save_state = (void *)0x0809580c;
    myhook.fun.blit_screen_menu = (void *)0x080a62d8;
    myhook.fun.initialize_backup = (void *)0x08092f40;
    myhook.fun.platform_get_input = (void *)0x080a8c30;
    myhook.fun.set_screen_menu_off = (void *)0x080a8240;
    myhook.fun.get_screen_ptr = (void *)0x080a890c;
    myhook.fun.spu_adpcm_decode_block = (void *)0x0808d268;
    myhook.fun.render_scanline_tiled_4bpp = (void *)0x080bcf74;
    myhook.fun.render_polygon_setup_perspective_steps = (void *)0x080c1cd4;
    myhook.fun.printf_chk = (void *)0x08004a04;
    myhook.fun.puts = (void *)0x0800405c;
    myhook.fun.select_quit = (void *)0x0809b134;
    myhook.fun.config_setup_input_map = (void *)0x08097250;
#endif

    return 0;
}

#if defined(UT)
TEST(detour, init_table)
{
    TEST_ASSERT_EQUAL_INT(0, init_table());
    TEST_ASSERT_EQUAL_INT(0x08006ad0, myhook.var.fast_forward);
    TEST_ASSERT_EQUAL_INT(0x080a0a18, myhook.fun.menu);
}
#endif

static int prehook_cb_puts(const char *s)
{
    printf("%s", s);
}

static int prehook_cb_printf_chk(int flag, const char *fmt, ...)
{
    va_list args = { 0 };

    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);

    return 0;
}

#if defined(UT)
TEST(detour, prehook_cb_printf_chk)
{
    TEST_ASSERT_EQUAL_INT(0, prehook_cb_printf_chk(0, NULL));
}
#endif

int init_hook(const char *home, size_t page, const char *path)
{
    page_size = page;

    debug("call %s(home=\"%s\", page=%ld, path=\"%s\")\n", __func__, home, page, path);

    strncpy(home_path, home, sizeof(home_path));
    init_table();

    is_state_hooked = 0;
    if (path && path[0]) {
        is_state_hooked = 1;
        strcpy(state_path, path);
        debug("new state path=\"%s\"\n", path);

        add_prehook_cb((void *)myhook.fun.load_state_index,  (void *)prehook_cb_load_state_index);
        add_prehook_cb((void *)myhook.fun.save_state_index,  (void *)prehook_cb_save_state_index);
        add_prehook_cb((void *)myhook.fun.initialize_backup, (void *)prehook_cb_initialize_backup);
    }

#if !defined(NDS_ARM64)
    add_prehook_cb(
        (void *)myhook.fun.render_polygon_setup_perspective_steps,
        render_polygon_setup_perspective_steps
    );
#endif

    return 0;
}

#if defined(UT)
TEST(detour, init_hook)
{
    const char *path = "/tmp";

    TEST_ASSERT_EQUAL_INT(0, init_hook(NULL, 0, NULL));
    TEST_ASSERT_EQUAL_INT(0, is_state_hooked);
    TEST_ASSERT_EQUAL_INT(0, init_hook(NULL, 0, path));
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

