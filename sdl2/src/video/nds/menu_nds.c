// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#define _GNU_SOURCE
#include <stdio.h>
#include <setjmp.h>
#include <string.h>

#if !defined(UIDBG)
#include "../../SDL_internal.h"
#endif

#if SDL_VIDEO_DRIVER_NDS

#if !defined(UIDBG)
#include "SDL_hints.h"
#include "../../render/SDL_sysrender.h"
#endif

#if defined(UIDBG)
#include <SDL.h>
#endif

#include "lvgl.h"

#include "GUI.h"
#include "GUIConf.h"
#include "LCDConf.h"
#include "MENU.h"
#include "FRAMEWIN.h"
#include "MULTIPAGE.h"
#include "LISTVIEW.h"
#include "io_fb.h"

#include <stdint.h>
#include <unistd.h>
#include <stdbool.h>

#include "cfg.h"
#include "log.h"
#include "file.h"
#include "lang.h"
#include "menu_nds.h"

#if !defined(UIDBG)
#include "video_nds.h"
#include "event_nds.h"
#endif

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "cfg.pb.h"

extern GUI_FONT myFont;
extern nds_pb_cfg mycfg;

#if !defined(UIDBG)
extern nds_hook myhook;
extern nds_video myvid;
extern nds_event myevt;
#endif

static int cur_sel = MENU_FILE_OPEN_ROM;
static int quit = 0;
static int restart = 0;
static int running = 0;
static uint16_t *lv_pixels = NULL;
static lv_display_t *lv_disp = NULL;
static const GUI_FONT *cur_font = &GUI_Font24_ASCII;

#if !defined(UT)
static GUI_WIDGET_CREATE_INFO info[] = {
    {
        FRAMEWIN_CreateIndirect,
        "",
        100,
        0,
        0,
        LCD_XSIZE,
        LCD_YSIZE,
        WM_CF_SHOW | FRAMEWIN_SF_ICON24,
        0
    },
};
#endif

#if defined(UIDBG)
int flip_lcd_screen(void);
int flush_lcd_screen(int, const void *, SDL_Rect, SDL_Rect, int, int, int);
#endif

#if defined(UT)
TEST_GROUP(sdl2_menu);

TEST_SETUP(sdl2_menu)
{
    debug(GUI"call %s()\n", __func__);
}

TEST_TEAR_DOWN(sdl2_menu)
{
    debug(GUI"call %s()\n", __func__);
}
#endif

static int add_or_update_menu(MENU_Handle hMenu, MENU_Handle hSub, const char *s, U16 id, U16 flags, MENU_TYPE t)
{
    MENU_ITEM_DATA m = { 0 };

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    m.pText = (char *)s;
    m.hSubmenu = hSub;
    m.Flags = flags;
    m.Id = id;

    if (t == MENU_ADD) {
        MENU_AddItem(hMenu, &m);
    }
    else if (t == MENU_UPDATE) {
        if (id) {
            MENU_SetItem(hMenu, id, &m);
        }
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, add_or_update_menu)
{
    TEST_ASSERT_EQUAL_INT(-1, add_or_update_menu(0, 0, NULL, 0, 0, MENU_ADD));
}
#endif

static int create_or_delete_submenu_file_recent(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(h, 0, "XXX", 0, 0, t);
    add_or_update_menu(hMenu, h, l10n("Open Recent"), MENU_FILE_OPEN_RECENT, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_file_recent)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_file_recent(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_file(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(h, 0, l10n("Open ROM"), MENU_FILE_OPEN_ROM, 0, t);
    create_or_delete_submenu_file_recent(h, t);
    add_or_update_menu(h, 0, NULL, 0, MENU_IF_SEPARATOR, t);
    add_or_update_menu(h, 0, l10n("Save State"), MENU_FILE_SAVE_STATE, 0, t);
    add_or_update_menu(h, 0, l10n("Load State"), MENU_FILE_LOAD_STATE, 0, t);
    add_or_update_menu(h, 0, NULL, 0, MENU_IF_SEPARATOR, t);
    add_or_update_menu(h, 0, l10n("Quit"), MENU_FILE_QUIT, 0, t);
    add_or_update_menu(hMenu, h, l10n("File"), MENU_FILE, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_file)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_file(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_show_fps(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(
        h,
        0,
        l10n("On"),
        MENU_CFG_SHOWFPS_ON,
        mycfg.show_frame_counter ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("Off"),
        MENU_CFG_SHOWFPS_OFF,
        !mycfg.show_frame_counter ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(hMenu, h, l10n("Show FPS"), MENU_CFG_SHOWFPS, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_show_fps)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_show_fps(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_swap_screen(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(
        h,
        0,
        l10n("On"),
        MENU_CFG_SWAP_SCREEN_ON,
        mycfg.screen_swap ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("Off"),
        MENU_CFG_SWAP_SCREEN_OFF,
        !mycfg.screen_swap ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(hMenu, h, l10n("Swap Screen"), MENU_CFG_SWAP_SCREEN, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_swap_screen)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_swap_screen(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_frameskip_type(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(
        h,
        0,
        l10n("None"),
        MENU_CFG_FRAMESKIP_NONE,
        mycfg.frameskip_type == FRAMESKIP_TYPE_NONE ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("Automatic"),
        MENU_CFG_FRAMESKIP_AUTO,
        mycfg.frameskip_type == FRAMESKIP_TYPE_AUTOMATIC ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("Manual"),
        MENU_CFG_FRAMESKIP_MANUAL,
        mycfg.frameskip_type == FRAMESKIP_TYPE_MANUAL ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(hMenu, h, l10n("Frameskip Type"), MENU_CFG_FRAMESKIP_TYPE, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_frameskip_type)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_frameskip_type(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_frameskip_value(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(
        h,
        0,
        l10n("0"),
        MENU_CFG_FRAMESKIP_0,
        mycfg.frameskip_value == 0 ? MENU_IF_CHECKED : 0 ,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("1"),
        MENU_CFG_FRAMESKIP_1,
        mycfg.frameskip_value == 1 ? MENU_IF_CHECKED : 0 ,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("2"),
        MENU_CFG_FRAMESKIP_2,
        mycfg.frameskip_value == 2 ? MENU_IF_CHECKED : 0 ,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("3"),
        MENU_CFG_FRAMESKIP_3,
        mycfg.frameskip_value == 3 ? MENU_IF_CHECKED : 0 ,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("4"),
        MENU_CFG_FRAMESKIP_4,
        mycfg.frameskip_value == 4 ? MENU_IF_CHECKED : 0 ,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("5"),
        MENU_CFG_FRAMESKIP_5,
        mycfg.frameskip_value == 5 ? MENU_IF_CHECKED : 0 ,
        t
    );

    add_or_update_menu(hMenu, h, l10n("Frameskip Value"), MENU_CFG_FRAMESKIP_VALUE, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_frameskip_value)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_frameskip_value(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_hires_3d(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(
        h,
        0,
        l10n("On"),
        MENU_CFG_HIRES_3D_ON,
        mycfg.hires_3d ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("Off"),
        MENU_CFG_HIRES_3D_OFF,
        !mycfg.hires_3d ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(hMenu, h, l10n("High Resolution 3D"), MENU_CFG_HIRES_3D, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_hires_3d)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_hires_3d(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_fastforward(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(
        h,
        0,
        l10n("0"),
        MENU_CFG_FASTFORWARD_0,
        mycfg.fast_forward == 0 ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("1"),
        MENU_CFG_FASTFORWARD_1,
        mycfg.fast_forward == 1 ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("2"),
        MENU_CFG_FASTFORWARD_2,
        mycfg.fast_forward == 2 ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("3"),
        MENU_CFG_FASTFORWARD_3,
        mycfg.fast_forward == 3 ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("4"),
        MENU_CFG_FASTFORWARD_4,
        mycfg.fast_forward == 4 ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("5"),
        MENU_CFG_FASTFORWARD_5,
        mycfg.fast_forward == 5 ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(hMenu, h, l10n("Fast Forward"), MENU_CFG_FASTFORWARD, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_fastforward)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_fastforward(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_view(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    create_or_delete_submenu_config_show_fps(h, t);
    create_or_delete_submenu_config_swap_screen(h, t);
    create_or_delete_submenu_config_fastforward(h, t);
    create_or_delete_submenu_config_frameskip_type(h, t);
    create_or_delete_submenu_config_frameskip_value(h, t);
    create_or_delete_submenu_config_hires_3d(h, t);
    add_or_update_menu(h, 0, l10n("Layout"), MENU_VIEW_LAYOUT, 0, t);
    add_or_update_menu(h, 0, l10n("Filter"), MENU_VIEW_FILTER, 0, t);
    add_or_update_menu(hMenu, h, l10n("View"), MENU_VIEW, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_view)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_view(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_system(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(h, 0, l10n("Continue"), MENU_SYS_CONTINUE,  0, t);
    add_or_update_menu(h, 0, l10n("Restart"), MENU_SYS_RESTART, 0, t);
    add_or_update_menu(h, 0, NULL, 0, MENU_IF_SEPARATOR, t);
    add_or_update_menu(h, 0, l10n("Firmware"), MENU_SYS_FIRMWARE, 0, t);
    add_or_update_menu(h, 0, l10n("Date Time"), MENU_SYS_DATE_TIME, 0, t);
    add_or_update_menu(h, 0, NULL, 0, MENU_IF_SEPARATOR, t);
    add_or_update_menu(h, 0, l10n("Cheat"), MENU_SYS_CHEAT, 0, t);
    add_or_update_menu(h, 0, l10n("ROM Info"), MENU_SYS_ROM_INFO, 0, t);
    add_or_update_menu(hMenu, h, l10n("System"), MENU_SYS, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_system)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_system(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_gui(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

#if !defined(UT)
    add_or_update_menu(
        h,
        0,
        l10n("LVGL"),
        MENU_CFG_STYLE_LVGL,
        (mycfg.style == STYLE_LVGL)  ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(h,
        0,
        l10n("uC/GUI"),
        MENU_CFG_STYLE_UCGUI,
        (mycfg.style == STYLE_UCGUI) ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(hMenu, h, l10n("Style"), MENU_CFG_STYLE, 0, t);
#endif

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_language)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_language(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_language(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

#if !defined(UT)
    add_or_update_menu(
        h,
        0,
        l10n("en_US"),
        MENU_CFG_LANG_US,
        (mycfg.lang == LANG_en_US) ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("zh_CN"),
        MENU_CFG_LANG_CN,
        (mycfg.lang == LANG_zh_CN) ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("zh_TW"),
        MENU_CFG_LANG_TW,
        (mycfg.lang == LANG_zh_TW) ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(hMenu, h, l10n("Language"), MENU_CFG_LANG, 0, t);
#endif

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_language)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_language(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_audio(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(
        h,
        0,
        l10n("On"),
        MENU_CFG_AUDIO_ON,
        mycfg.enable_sound ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("Off"),
        MENU_CFG_AUDIO_OFF,
        !mycfg.enable_sound ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(hMenu, h, l10n("Audio"), MENU_CFG_AUDIO, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_audio)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_audio(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config_debug_log(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

#if !defined(UT)
    add_or_update_menu(
        h,
        0,
        l10n("On"),
        MENU_CFG_DBG_ON,
        mycfg.dbg ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        h,
        0,
        l10n("Off"),
        MENU_CFG_DBG_OFF,
        !mycfg.dbg ? MENU_IF_CHECKED : 0,
        t
    );

    add_or_update_menu(
        hMenu,
        h,
        l10n("Debug Log"),
        MENU_CFG_DBG,
        0,
        t
    );
#endif

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config_debug_log)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config_debug_log(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_config(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    create_or_delete_submenu_config_gui(h, t);
    create_or_delete_submenu_config_language(h, t);
    create_or_delete_submenu_config_debug_log(h, t);
    create_or_delete_submenu_config_audio(h, t);
    add_or_update_menu(h, 0, l10n("Touch"), MENU_CFG_TOUCH, 0, t);
    add_or_update_menu(h, 0, l10n("Keypad"), MENU_CFG_KEYPAD, 0, t);
    add_or_update_menu(h, 0, l10n("Joystick"), MENU_CFG_JOYSTICK, 0, t);
    add_or_update_menu(h, 0, l10n("Microphone"), MENU_CFG_MICROPHONE, 0, t);
    add_or_update_menu(h, 0, l10n("Hotkey"), MENU_CFG_HOTKEY, 0, t);
    add_or_update_menu(hMenu, h, l10n("Config"), MENU_CFG, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_config)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_config(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_tools(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(h, 0, l10n("Walkthrough"), MENU_TOOLS_WALKTHROUGH, 0, t);
    add_or_update_menu(hMenu, h, l10n("Tools"), MENU_TOOLS, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_tools)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_tools(0, MENU_UPDATE));
}
#endif

static int create_or_delete_submenu_help(MENU_Handle hMenu, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
        MENU_SetFont(h, cur_font);
    }

    add_or_update_menu(h, 0, l10n("About EMU"), MENU_HELP_ABOUT_EMU, 0, t);
    add_or_update_menu(hMenu, h, l10n("Help"), MENU_HELP, 0, t);

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_submenu_help)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_submenu_help(0, MENU_UPDATE));
}
#endif

static int create_or_delete_menu(WM_HWIN hParent, MENU_TYPE t)
{
    static MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if ((t == MENU_ADD) && !hParent) {
        error(GUI"invalid parent handle\n");
        return -1;
    }

    if ((t == MENU_ADD) && h) {
        error(GUI"menu has been created already\n");
        return -1;
    }

    if (t == MENU_ADD) {
        h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_HORIZONTAL, 0);
        MENU_SetFont(h, cur_font);
    }

    create_or_delete_submenu_file(h, t);
    create_or_delete_submenu_system(h, t);
    create_or_delete_submenu_view(h, t);
    create_or_delete_submenu_config(h, t);
    create_or_delete_submenu_tools(h, t);
    create_or_delete_submenu_help(h, t);

    if (t == MENU_ADD) {
        FRAMEWIN_AddMenu(hParent, h);
    }

    if ((t == MENU_DEL) && h) {
        MENU_Delete(h);
        h = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_or_delete_menu)
{
    TEST_ASSERT_EQUAL_INT(-1, create_or_delete_menu(0, MENU_ADD));
    TEST_ASSERT_EQUAL_INT( 0, create_or_delete_menu(0, MENU_UPDATE));
}
#endif

static int handle_lang(uint32_t id)
{
    debug(GUI"call %s()\n", __func__);

    switch (id) {
    case MENU_CFG_LANG_US:
        mycfg.lang = LANG_en_US;
        debug(GUI"MENU_CFG_LANG_US\n");
        break;
    case MENU_CFG_LANG_CN:
        mycfg.lang = LANG_zh_CN;
        debug(GUI"MENU_CFG_LANG_CN\n");
        break;
    case MENU_CFG_LANG_TW:
        mycfg.lang = LANG_zh_TW;
        debug(GUI"MENU_CFG_LANG_TW\n");
        break;
    default:
        error(GUI"invalid id(%d)\n", id);
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, handle_lang)
{
    TEST_ASSERT_EQUAL_INT(-1, handle_lang(0));
}
#endif

static int handle_dbg(uint32_t id)
{
    debug(GUI"call %s()\n", __func__);

    switch (id) {
    case MENU_CFG_DBG_ON:
        mycfg.dbg = 1;
        error(GUI"MENU_CFG_DBG_ON\n");
        break;
    case MENU_CFG_DBG_OFF:
        mycfg.dbg = 0;
        error(GUI"MENU_CFG_DBG_OFF\n");
        break;
    default:
        error(GUI"invalid id(%d)\n", id);
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, handle_dbg)
{
    TEST_ASSERT_EQUAL_INT(-1, handle_dbg(0));
}
#endif

static int handle_showfps(uint32_t id)
{
    debug(GUI"call %s()\n", __func__);

    switch (id) {
    case MENU_CFG_SHOWFPS_ON:
        mycfg.show_frame_counter = 1;
        debug(GUI"MENU_CFG_SHOWFPS_ON\n");
        break;
    case MENU_CFG_SHOWFPS_OFF:
        mycfg.show_frame_counter = 0;
        debug(GUI"MENU_CFG_SHOWFPS_OFF\n");
        break;
    default:
        error(GUI"invalid id(%d)\n", id);
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, handle_showfps)
{
    TEST_ASSERT_EQUAL_INT(-1, handle_showfps(0));
}
#endif

static int handle_swap_screen(uint32_t id)
{
    debug(GUI"call %s()\n", __func__);

    switch (id) {
    case MENU_CFG_SWAP_SCREEN_ON:
        mycfg.screen_swap = 1;
        debug(GUI"MENU_CFG_SWAP_SCREEN_ON\n");
        break;
    case MENU_CFG_SWAP_SCREEN_OFF:
        mycfg.screen_swap = 0;
        debug(GUI"MENU_CFG_SWAP_SCREEN_OFF\n");
        break;
    default:
        error(GUI"invalid id(%d)\n", id);
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, handle_swap_screen)
{
    TEST_ASSERT_EQUAL_INT(-1, handle_swap_screen(0));
}
#endif

static int handle_fast_forward(uint32_t id)
{
    debug(GUI"call %s()\n", __func__);

    switch (id) {
    case MENU_CFG_FASTFORWARD_0:
        mycfg.fast_forward = 0;
        debug(GUI"MENU_CFG_FASTFORWARD_0\n");
        break;
    case MENU_CFG_FASTFORWARD_1:
        mycfg.fast_forward = 1;
        debug(GUI"MENU_CFG_FASTFORWARD_1\n");
        break;
    case MENU_CFG_FASTFORWARD_2:
        mycfg.fast_forward = 2;
        debug(GUI"MENU_CFG_FASTFORWARD_2\n");
        break;
    case MENU_CFG_FASTFORWARD_3:
        mycfg.fast_forward = 3;
        debug(GUI"MENU_CFG_FASTFORWARD_3\n");
        break;
    case MENU_CFG_FASTFORWARD_4:
        mycfg.fast_forward = 4;
        debug(GUI"MENU_CFG_FASTFORWARD_4\n");
        break;
    case MENU_CFG_FASTFORWARD_5:
        mycfg.fast_forward = 5;
        debug(GUI"MENU_CFG_FASTFORWARD_5\n");
        break;
    default:
        error(GUI"invalid id(%d)\n", id);
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, handle_fast_forward)
{
    TEST_ASSERT_EQUAL_INT(-1, handle_fast_forward(0));
}
#endif

static int handle_frameskip(uint32_t id)
{
    debug(GUI"call %s()\n", __func__);

    switch (id) {
    case MENU_CFG_FRAMESKIP_NONE:
        mycfg.frameskip_type = FRAMESKIP_TYPE_NONE;
        debug(GUI"MENU_CFG_FRAMESKIP_NONE\n");
        break;
    case MENU_CFG_FRAMESKIP_AUTO:
        mycfg.frameskip_type = FRAMESKIP_TYPE_AUTOMATIC;
        debug(GUI"MENU_CFG_FRAMESKIP_AUTOMATIC\n");
        break;
    case MENU_CFG_FRAMESKIP_MANUAL:
        mycfg.frameskip_type = FRAMESKIP_TYPE_MANUAL;
        debug(GUI"MENU_CFG_FRAMESKIP_MANUAL\n");
        break;
    case MENU_CFG_FRAMESKIP_0:
        mycfg.frameskip_value = 0;
        debug(GUI"MENU_CFG_FRAMESKIP_0\n");
        break;
    case MENU_CFG_FRAMESKIP_1:
        mycfg.frameskip_value = 1;
        debug(GUI"MENU_CFG_FRAMESKIP_1\n");
        break;
    case MENU_CFG_FRAMESKIP_2:
        mycfg.frameskip_value = 2;
        debug(GUI"MENU_CFG_FRAMESKIP_2\n");
        break;
    case MENU_CFG_FRAMESKIP_3:
        mycfg.frameskip_value = 3;
        debug(GUI"MENU_CFG_FRAMESKIP_3\n");
        break;
    case MENU_CFG_FRAMESKIP_4:
        mycfg.frameskip_value = 4;
        debug(GUI"MENU_CFG_FRAMESKIP_4\n");
        break;
    case MENU_CFG_FRAMESKIP_5:
        mycfg.frameskip_value = 5;
        debug(GUI"MENU_CFG_FRAMESKIP_5\n");
        break;
    default:
        error(GUI"invalid id(%d)\n", id);
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, handle_frameskip)
{
    TEST_ASSERT_EQUAL_INT(-1, handle_frameskip(0));
}
#endif

static int handle_hires_3d(uint32_t id)
{
    switch (id) {
    case MENU_CFG_HIRES_3D_ON:
        mycfg.hires_3d = 1;
        debug(GUI"MENU_CFG_HIRES_3D_ON\n");
        break;
    case MENU_CFG_HIRES_3D_OFF:
        mycfg.hires_3d = 0;
        debug(GUI"MENU_CFG_HIRES_3D_OFF\n");
        break;
    default:
        error(GUI"invalid id(%d)\n", id);
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, handle_hires_3d)
{
    TEST_ASSERT_EQUAL_INT(-1, handle_hires_3d(0));
}
#endif

static int handle_audio(uint32_t id)
{
    switch (id) {
    case MENU_CFG_AUDIO_ON:
        mycfg.enable_sound = 1;
        debug(GUI"MENU_CFG_AUDIO_ON\n");
        break;
    case MENU_CFG_AUDIO_OFF:
        mycfg.enable_sound = 0;
        debug(GUI"MENU_CFG_AUDIO_OFF\n");
        break;
    default:
        error(GUI"invalid id(%d)\n", id);
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, handle_audio)
{
    TEST_ASSERT_EQUAL_INT(-1, handle_audio(0));
}
#endif

static int draw_rgb16(uint32_t c, int x, int y)
{
    uint32_t r = 0;
    uint32_t g = 0;
    uint32_t b = 0;

    debug(GUI"call %s()\n", __func__);

    r = c & 0x1f;
    g = (c >> 5) & 0x1f;
    b = (c >> 10) & 0x1f;
    r = (r << 3) | (r >> 2);
    g = (g << 3) | (g >> 2);
    b = (b << 3) | (b >> 2);
    c = (b << 16) | (g << 8) | r;

    GUI_SetColor(c);
    GUI_DrawPixel(x, y);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, draw_rgb16)
{
    TEST_ASSERT_EQUAL_INT(-1, draw_rgb16(0, 0, 0));
}
#endif

static int draw_nds_icon(const char *path, int x, int y)
{
    int cc = 0;
    int y1 = 0;
    int x1 = 0;
    int idx = 0;
    int left = 0;
    int right = 0;

#if !defined(UIDBG)
    nds_icon_struct icon = { 0 };
#endif

    debug(GUI"call %s()\n", __func__);

#if defined(UIDBG)
    for (y1 = 0; y1 < 32; y1++) {
        for (x1 = 0; x1 < 16; x1++) {
            for (cc = 0; cc < 2; cc++) {
                draw_rgb16(0x000f, x + (x1 << 2) + 0, y + (y1 << 1) + cc);
                draw_rgb16(0x000f, x + (x1 << 2) + 1, y + (y1 << 1) + cc);
                draw_rgb16(0x000f, x + (x1 << 2) + 2, y + (y1 << 1) + cc);
                draw_rgb16(0x000f, x + (x1 << 2) + 3, y + (y1 << 1) + cc);
            }
        }
    }
#else
    if (file_get_icon_data(path, &icon)) {
        error(GUI"failed to get nds icon from \"%s\"\n", path);
        return -1;
    }

    for (y1 = 0; y1 < 32; y1++) {
        for (x1 = 0; x1 < 16; x1++) {
            left = icon.pixels[idx] & 0xf;
            right = (icon.pixels[idx] >> 4) & 0xf;
            idx += 1;

            for (cc = 0; cc < 2; cc++) {
                draw_rgb16(icon.palette[left],  x + (x1 << 2) + 0, y + (y1 << 1) + cc);
                draw_rgb16(icon.palette[left],  x + (x1 << 2) + 1, y + (y1 << 1) + cc);
                draw_rgb16(icon.palette[right], x + (x1 << 2) + 2, y + (y1 << 1) + cc);
                draw_rgb16(icon.palette[right], x + (x1 << 2) + 3, y + (y1 << 1) + cc);
            }
        }
    }
#endif
    return 0;
}

#if defined(UT)
TEST(sdl2_menu, draw_nds_icon)
{
    TEST_ASSERT_EQUAL_INT(-1, draw_nds_icon(NULL, 0, 0));
}
#endif

static int handle_open_rom(WM_HWIN hWin)
{
    int w = 0;
    int h = 0;
    int fcnt = 0;
    GUI_RECT rt = { 0 };

    debug(GUI"call %s()\n", __func__);

    if (!hWin) {
        error(GUI"invalid window handle\n");
        return -1;
    }

    WM_GetInsideRectEx(hWin, &rt);
    w = rt.x1 - rt.x0;
    h = rt.y1 - rt.y0;

    fcnt = dir_get_file_count("/home/steward/Data/ROM/NDS/CN/");
    printf(GUI"total file count %d\n", fcnt);
    draw_nds_icon("/tmp/", 10, 10 + 0);
    draw_nds_icon("/tmp/", 10, 10 + 80);
    draw_nds_icon("/tmp/", 10, 10 + 160);
    draw_nds_icon("/tmp/", 10, 10 + 240);
    draw_nds_icon("/tmp/", 10, 10 + 320);
}

#if defined(UT)
TEST(sdl2_menu, handle_open_rom)
{
    TEST_ASSERT_EQUAL_INT(-1, handle_open_rom());
}
#endif

static void WndProc(WM_MESSAGE* pMsg)
{
    char buf[MAX_PATH] = { 0 };
    WM_KEY_INFO* pKeyInfo = NULL;
    MENU_MSG_DATA *pMenuInfo = NULL;

    debug(GUI"call %s(pMsg=%p)\n", __func__, pMsg);

    do {
        if (!pMsg) {
            error(GUI"pMsg is null\n");
            break;
        }

        switch (pMsg->MsgId) {
        case WM_INIT_DIALOG:
            snprintf(buf, sizeof(buf), "%s - %s", NDS_VER, __DATE__);
            FRAMEWIN_SetText(pMsg->hWin, buf);
            FRAMEWIN_SetFont(pMsg->hWin, cur_font);

            create_or_delete_menu(pMsg->hWin, MENU_ADD);
            break;
        case WM_DELETE:
            create_or_delete_menu(pMsg->hWin, MENU_DEL);
            break;
        case WM_PAINT:
            switch (cur_sel) {
            case MENU_FILE_OPEN_ROM:
                handle_open_rom(pMsg->hWin);
                break;
            }
            break;
        case WM_KEY:
            pKeyInfo = (WM_KEY_INFO *)pMsg->Data.p;
            if (pKeyInfo->Key == SDLK_LALT) {
                running = 0;
            }
            break;
        case WM_MENU:
            pMenuInfo = (MENU_MSG_DATA *)pMsg->Data.p;
            switch (pMenuInfo->MsgType) {
            case MENU_ON_ITEMSELECT:
                switch (pMenuInfo->ItemId) {
                case MENU_FILE_QUIT:
                    quit = 1;
                    running = 0;
                    debug(GUI"MENU_FILE_QUIT\n");
                    break;
                case MENU_SYS_CONTINUE:
                    running = 0;
                    debug(GUI"MENU_SYS_CONTINUE\n");
                    break;
                case MENU_SYS_RESTART:
                    restart = 1;
                    running = 0;

#if !defined(UIDBG)
                    reset_system();
#endif
                    debug("MENU_SYS_RESTART\n");
                    break;
                case MENU_CFG_LANG_US:
                case MENU_CFG_LANG_CN:
                case MENU_CFG_LANG_TW:
                    handle_lang(pMenuInfo->ItemId);
                    break;
                case MENU_CFG_DBG_ON:
                case MENU_CFG_DBG_OFF:
                    handle_dbg(pMenuInfo->ItemId);
                    break;
                case MENU_CFG_SHOWFPS_ON:
                case MENU_CFG_SHOWFPS_OFF:
                    handle_showfps(pMenuInfo->ItemId);
                    break;
                case MENU_CFG_SWAP_SCREEN_ON:
                case MENU_CFG_SWAP_SCREEN_OFF:
                    handle_swap_screen(pMenuInfo->ItemId);
                    break;
                case MENU_CFG_FASTFORWARD_0:
                case MENU_CFG_FASTFORWARD_1:
                case MENU_CFG_FASTFORWARD_2:
                case MENU_CFG_FASTFORWARD_3:
                case MENU_CFG_FASTFORWARD_4:
                case MENU_CFG_FASTFORWARD_5:
                    handle_fast_forward(pMenuInfo->ItemId);
                    break;
                case MENU_CFG_FRAMESKIP_NONE:
                case MENU_CFG_FRAMESKIP_AUTO:
                case MENU_CFG_FRAMESKIP_MANUAL:
                case MENU_CFG_FRAMESKIP_0:
                case MENU_CFG_FRAMESKIP_1:
                case MENU_CFG_FRAMESKIP_2:
                case MENU_CFG_FRAMESKIP_3:
                case MENU_CFG_FRAMESKIP_4:
                case MENU_CFG_FRAMESKIP_5:
                    handle_frameskip(pMenuInfo->ItemId);
                    break;
                case MENU_CFG_HIRES_3D_ON:
                case MENU_CFG_HIRES_3D_OFF:
                    handle_hires_3d(pMenuInfo->ItemId);
                    break;
                case MENU_CFG_AUDIO_ON:
                case MENU_CFG_AUDIO_OFF:
                    handle_audio(pMenuInfo->ItemId);
                    break;
                case MENU_FILE_OPEN_ROM:
                    cur_sel = MENU_FILE_OPEN_ROM;
                    handle_open_rom(pMsg->hWin);
                    break;
                }

#if !defined(UIDBG)
                init_drastic_config();
#endif

                create_or_delete_menu(0, MENU_UPDATE);
                break;
            }
            break;
        default:
            WM_DefaultProc(pMsg);
        }
    } while(0);
}

#if defined(UT)
TEST(sdl2_menu, WndProc)
{
    WndProc(NULL);
    TEST_PASS();
}
#endif

static int run_ucgui(void)
{
    WM_HWIN hWin = 0;
    void *fb_pixels = NULL;

#if !defined(UT)
    int rotate = 0;
    SDL_Rect rt = { 0, 0, LCD_XSIZE, LCD_YSIZE };
#endif

    debug(GUI"call %s(w=%d, h=%d)++\n", __func__, LCD_XSIZE, LCD_YSIZE);

#if defined(MIYOO_MINI)
    rotate = E_MI_GFX_ROTATE_180;
#endif

#if !defined(UT)
    GUI_Init();
    GUI_UC_SetEncodeUTF8();
    GUI_SetBkColor(GUI_GRAY);
    GUI_Clear();
#endif

    fb_pixels = fb_getbuffer();
    debug(GUI"fb_pixels=%p\n", fb_pixels);
    if (!fb_pixels) {
        error(GUI"fb_pixels is null\n");
        return -1;
    }

    cur_font = &myFont;

#if !defined(UT)
    GUI_SetFont(cur_font);

    GUI_CURSOR_Select(&GUI_CursorArrowL);
    GUI_CURSOR_Show();

#if defined(UIDBG)
    GUI_CURSOR_SetPosition(LCD_XSIZE >> 1, LCD_YSIZE >> 1);
#else
    GUI_CURSOR_SetPosition(myevt.mouse.x, myevt.mouse.y);
#endif

    hWin = GUI_CreateDialogBox(info, GUI_COUNTOF(info), WndProc, 0, 0, 0);
    GUI_Delay(100);

    running = 1;
    while (running) {
        if (!GUI_Exec()) {
            GUI_X_WAIT_EVENT();
            flush_lcd_screen(-1, fb_pixels, rt, rt, LCD_XSIZE * 2, 0, rotate);
            flip_lcd_screen();
        }
    }
    GUI_EndDialog(hWin, 0);
#endif

    debug(GUI"call %s()--\n", __func__);
    return 0;
}

#if defined(UT)
TEST(sdl2_menu, run_ucgui)
{
    TEST_ASSERT_EQUAL_INT(-1, run_ucgui());
}
#endif

static void refresh_cb(lv_timer_t *timer)
{
    debug(GUI"call %s()\n", __func__);

    lv_refr_now(lv_disp);
    flip_lcd_screen();
}

#if defined(UT)
TEST(sdl2_menu, refresh_cb)
{
    refresh_cb(NULL);
    TEST_PASS();
}
#endif

static void flush_cb(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map)
{
    int rotate = 0;
    SDL_Rect rt = { 0, 0, LCD_XSIZE, LCD_YSIZE };

    debug(GUI"call %s()\n", __func__);

#if defined(MIYOO_MINI)
    rotate = E_MI_GFX_ROTATE_180;
#endif

#if !defined(UT)
    lv_display_flush_ready(disp);
#endif

    flush_lcd_screen(-1, lv_pixels, rt, rt, LCD_XSIZE * 2, 0, rotate);
}

#if defined(UT)
TEST(sdl2_menu, flush_cb)
{
    flush_cb(NULL, NULL, NULL);
    TEST_PASS();
}
#endif

static int run_lvgl(void)
{
    lv_obj_t *label = NULL;
    lv_timer_t * refr_timer = NULL;

    debug(GUI"call %s(w=%d, h=%d)++\n", __func__, LCD_XSIZE, LCD_YSIZE);

    if (lv_pixels) {
        free(lv_pixels);
    }

    lv_pixels = malloc(LCD_XSIZE * LCD_YSIZE * 2);
    if (!lv_pixels) {
        error(GUI"failed to allocate buffer\n");
        return -1;
    }

    lv_init();
    lv_disp = lv_display_create(LCD_XSIZE, LCD_YSIZE);
    lv_display_set_flush_cb(lv_disp, flush_cb);
    lv_display_set_buffers(lv_disp, lv_pixels, NULL, LCD_XSIZE * LCD_YSIZE * 2, LV_DISPLAY_RENDER_MODE_FULL);

    refr_timer = lv_display_get_refr_timer(lv_disp);
    lv_timer_set_cb(refr_timer, refresh_cb);

    label = lv_label_create(lv_screen_active());
    lv_label_set_text(label, "Hello, world!");

    lv_timer_handler();
    SDL_Delay(3000);

    free(lv_pixels);
    lv_pixels = NULL;
    debug(GUI"call %s()--\n", __func__);
    return 0;
}

#if defined(UT)
TEST(sdl2_menu, run_lvgl)
{
    TEST_ASSERT_EQUAL_INT(0, run_lvgl());
}
#endif

void prehook_cb_menu(void *sys, uint32_t show_dlg)
{
    uint8_t aret = 0;
    char buf[MAX_PATH + 32] = { 0 };

    debug(GUI"call %s(system=%p, show_dlg=%d)\n", __func__, sys, show_dlg);

#if !defined(UIDBG)
    aret = audio_pause();
    debug(GUI"audio_pause r=%d\n", aret);

    myvid.mode = MENU;
#endif

#if defined(SFOS_EGL)
    update_wayland_client_size(SCREEN_W, SCREEN_H);
#endif

#if defined(MIYOO_FLIP)
    swap_frag_color(0);
#endif

    mycfg.style = STYLE_UCGUI;

    quit = 0;
    restart = 0;
    running = 0;

    if (mycfg.style == STYLE_LVGL) {
        run_lvgl();
    }
    else {
        run_ucgui();
    }

#if !defined(UIDBG)
    myvid.mode = GAME;
#endif

#if defined(MIYOO_FLIP)
    swap_frag_color(1);
#endif

#if !defined(UIDBG)
    audio_revert_pause_state(aret);

    if (quit) {
        snprintf(buf, sizeof(buf), "%s/%s", mycfg.home, CFG_PATH);
        update_cfg(buf);
        quit_nds();
    }

    if (restart) {
        longjmp(myhook.var.system.reset_jmp, 0);
    }
#endif
}

#if defined(UT)
TEST(sdl2_menu, prehook_cb_menu)
{
    prehook_cb_menu(NULL, 0);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(sdl2_menu)
{
    RUN_TEST_CASE(sdl2_menu, add_or_update_menu)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_file_recent)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_file)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_view)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_system)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config_language)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config_audio)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config_swap_screen)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config_show_fps)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config_frameskip_type)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config_frameskip_value)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config_fastforward)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config_hires_3d)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config_debug_log)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_config)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_tools)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_submenu_help)
    RUN_TEST_CASE(sdl2_menu, create_or_delete_menu)
    RUN_TEST_CASE(sdl2_menu, WndProc)
    RUN_TEST_CASE(sdl2_menu, run_ucgui)
    RUN_TEST_CASE(sdl2_menu, refresh_cb)
    RUN_TEST_CASE(sdl2_menu, flush_cb)
    RUN_TEST_CASE(sdl2_menu, run_lvgl)
    RUN_TEST_CASE(sdl2_menu, prehook_cb_menu)
}
#endif

#endif

