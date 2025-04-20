// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

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
#include "io_fb.h"

#include <stdint.h>
#include <unistd.h>
#include <stdbool.h>

#include "cfg.h"
#include "log.h"
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

static const GUI_FONT *cur_font = &GUI_Font24_ASCII;

#if !defined(UIDBG)
extern nds_hook myhook;
extern nds_video myvid;
extern nds_event myevt;
#endif

static int running = 0;
static uint16_t *lv_pixels = NULL;
static lv_display_t *lv_disp = NULL;

static GUI_WIDGET_CREATE_INFO info[] = {
    { FRAMEWIN_CreateIndirect,  "",     100, 0, 0, LCD_XSIZE, LCD_YSIZE, WM_CF_SHOW | FRAMEWIN_SF_ICON24, 0 },
    { TEXT_CreateIndirect,      "",     101, 10, 20, 150, 20, 0, GUI_TA_LEFT },
};

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

static int add_menu(MENU_Handle hMenu, MENU_Handle hSubMenu, const char *pText, U16 dwID, U16 dwFlags)
{
    MENU_ITEM_DATA m = { 0 };

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    m.pText = (char *)pText;
    m.hSubmenu = hSubMenu;
    m.Flags = dwFlags;
    m.Id = dwID;
    MENU_AddItem(hMenu, &m);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, add_menu)
{
    TEST_ASSERT_EQUAL_INT(-1, add_menu(0, 0, NULL, 0, 0));
}
#endif

static int create_submenu_file_recent(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("XXX"),         MENU_FILE_OPEN_ROM,    0);
    add_menu(h,     0, l10n("XXX"),         MENU_FILE_OPEN_ROM,    0);
    add_menu(hMenu, h, l10n("Open Recent"), MENU_FILE_OPEN_ROM,    0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_file_recent)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_file_recent(0));
}
#endif

static int create_submenu_file(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("Open ROM"),    MENU_FILE_OPEN_ROM,    0);
    create_submenu_file_recent(h);
    add_menu(h,     0, NULL,                0,                     MENU_IF_SEPARATOR);
    add_menu(h,     0, l10n("Save State"),  MENU_FILE_SAVE_STATE,  0);
    add_menu(h,     0, l10n("Load State"),  MENU_FILE_LOAD_STATE,  0);
    add_menu(h,     0, NULL,                0,                     MENU_IF_SEPARATOR);
    add_menu(h,     0, l10n("Quit"),        MENU_FILE_QUIT,        0);
    add_menu(hMenu, h, l10n("File"),        0,                     0);
    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_file)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_file(0));
}
#endif

static int create_submenu_view(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("Layout"),       MENU_VIEW_LAYOUT, 0);
    add_menu(h,     0, l10n("Filter"),       MENU_VIEW_FILTER, 0);
    add_menu(hMenu, h, l10n("View"),         0,                0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_view)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_view(0));
}
#endif

static int create_submenu_system(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("Continue"),  MENU_SYSTEM_CONTINUE,  0);
    add_menu(h,     0, l10n("Reset"),     MENU_SYSTEM_RESET,     0);
    add_menu(h,     0, NULL,              0,                     MENU_IF_SEPARATOR);
    add_menu(h,     0, l10n("Firmware"),  MENU_SYSTEM_FIRMWARE,  0);
    add_menu(h,     0, l10n("Date Time"), MENU_SYSTEM_DATE_TIME, 0);
    add_menu(h,     0, NULL,              0,                     MENU_IF_SEPARATOR);
    add_menu(h,     0, l10n("Cheat"),     MENU_SYSTEM_CHEAT,     0);
    add_menu(h,     0, l10n("ROM Info"),  MENU_SYSTEM_ROM_INFO,  0);
    add_menu(hMenu, h, l10n("System"),    0,                     0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_system)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_system(0));
}
#endif

static int create_submenu_config_language(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("en_US"),    MENU_CONFIG_LANG_US, 0);
    add_menu(h,     0, l10n("zh_CN"),    MENU_CONFIG_LANG_CN, 0);
    add_menu(h,     0, l10n("zh_TW"),    MENU_CONFIG_LANG_TW, 0);
    add_menu(hMenu, h, l10n("Language"), 0,                   0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_language)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_language(0));
}
#endif

static int create_submenu_config_audio(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("On"),    MENU_CONFIG_AUDIO_ON,  0);
    add_menu(h,     0, l10n("Off"),   MENU_CONFIG_AUDIO_OFF, 0);
    add_menu(hMenu, h, l10n("Audio"), 0,                     0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_audio)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_audio(0));
}
#endif

static int create_submenu_config_swap_screen(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("On"),          MENU_CONFIG_SWAP_SCREEN_ON,  0);
    add_menu(h,     0, l10n("Off"),         MENU_CONFIG_SWAP_SCREEN_OFF, 0);
    add_menu(hMenu, h, l10n("Swap Screen"), 0,                           0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_swap_screen)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_swap_screen(0));
}
#endif

static int create_submenu_config_show_fps(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("On"),       MENU_CONFIG_SHOWFPS_ON,  0);
    add_menu(h,     0, l10n("Off"),      MENU_CONFIG_SHOWFPS_OFF, 0);
    add_menu(hMenu, h, l10n("Show FPS"), 0,                       0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_show_fps)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_show_fps(0));
}
#endif

static int create_submenu_config_frameskip_type(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("None"),           MENU_CONFIG_FRAMESKIP_NONE,   0);
    add_menu(h,     0, l10n("Automatic"),      MENU_CONFIG_FRAMESKIP_AUTO,   0);
    add_menu(h,     0, l10n("Manual"),         MENU_CONFIG_FRAMESKIP_MANUAL, 0);
    add_menu(hMenu, h, l10n("Frameskip Type"), 0,                            0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_frameskip_type)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_frameskip_type(0));
}
#endif

static int create_submenu_config_frameskip_value(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("0"),               MENU_CONFIG_FRAMESKIP_0, 0);
    add_menu(h,     0, l10n("1"),               MENU_CONFIG_FRAMESKIP_1, 0);
    add_menu(h,     0, l10n("2"),               MENU_CONFIG_FRAMESKIP_2, 0);
    add_menu(h,     0, l10n("3"),               MENU_CONFIG_FRAMESKIP_3, 0);
    add_menu(h,     0, l10n("4"),               MENU_CONFIG_FRAMESKIP_4, 0);
    add_menu(h,     0, l10n("5"),               MENU_CONFIG_FRAMESKIP_5, 0);
    add_menu(hMenu, h, l10n("Frameskip Value"), 0,                       0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_frameskip_value)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_frameskip_value(0));
}
#endif

static int create_submenu_config_fastforward(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("0"),            MENU_CONFIG_FASTFORWARD_0, 0);
    add_menu(h,     0, l10n("1"),            MENU_CONFIG_FASTFORWARD_1, 0);
    add_menu(h,     0, l10n("2"),            MENU_CONFIG_FASTFORWARD_2, 0);
    add_menu(h,     0, l10n("3"),            MENU_CONFIG_FASTFORWARD_3, 0);
    add_menu(h,     0, l10n("4"),            MENU_CONFIG_FASTFORWARD_4, 0);
    add_menu(h,     0, l10n("5"),            MENU_CONFIG_FASTFORWARD_5, 0);
    add_menu(hMenu, h, l10n("Fast Forward"), 0,                         0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_fastforward)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_fastforward(0));
}
#endif

static int create_submenu_config_speed(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("None"),           MENU_CONFIG_SPEED_NONE, 0);
    add_menu(h,     0, l10n("50%"),            MENU_CONFIG_SPEED_50,   0);
    add_menu(h,     0, l10n("150%"),           MENU_CONFIG_SPEED_150,  0);
    add_menu(h,     0, l10n("200%"),           MENU_CONFIG_SPEED_200,  0);
    add_menu(h,     0, l10n("250%"),           MENU_CONFIG_SPEED_250,  0);
    add_menu(h,     0, l10n("300%"),           MENU_CONFIG_SPEED_300,  0);
    add_menu(h,     0, l10n("350%"),           MENU_CONFIG_SPEED_350,  0);
    add_menu(h,     0, l10n("400%"),           MENU_CONFIG_SPEED_400,  0);
    add_menu(hMenu, h, l10n("Speed Override"), 0,                      0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_speed)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_speed(0));
}
#endif

static int create_submenu_config_hires_3d(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("On"),                 MENU_CONFIG_HIRES_3D_ON,  0);
    add_menu(h,     0, l10n("Off"),                MENU_CONFIG_HIRES_3D_OFF, 0);
    add_menu(hMenu, h, l10n("High Resolution 3D"), 0,                        0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_hires_3d)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_hires_3d(0));
}
#endif

static int create_submenu_config_debug_log(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("On"),        MENU_CONFIG_DEBUG_LOG_ON,  0);
    add_menu(h,     0, l10n("Off"),       MENU_CONFIG_DEBUG_LOG_OFF, 0);
    add_menu(hMenu, h, l10n("Debug Log"), 0,                         0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config_debug_log)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config_debug_log(0));
}
#endif

static int create_submenu_config(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    create_submenu_config_language(h);
    create_submenu_config_audio(h);
    create_submenu_config_show_fps(h);
    create_submenu_config_frameskip_type(h);
    create_submenu_config_frameskip_value(h);
    create_submenu_config_fastforward(h);
    create_submenu_config_speed(h);
    create_submenu_config_swap_screen(h);
    create_submenu_config_hires_3d(h);
    create_submenu_config_debug_log(h);
    add_menu(h,     0, l10n("Microphone"), MENU_CONFIG_KEYPAD,   0);
    add_menu(h,     0, l10n("Keypad"),     MENU_CONFIG_KEYPAD,   0);
    add_menu(h,     0, l10n("Joystick"),   MENU_CONFIG_JOYSTICK, 0);
    add_menu(h,     0, l10n("Hotkey"),     MENU_CONFIG_HOTKEY,   0);
    add_menu(hMenu, h, l10n("Config"),     0,                    0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_config)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_config(0));
}
#endif

static int create_submenu_tools(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("Walkthrough"), MENU_CONFIG_KEYPAD,   0);
    add_menu(hMenu, h, l10n("Tools"),       0,                    0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_tools)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_tools(0));
}
#endif

static int create_submenu_help(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hMenu) {
        error(GUI"invalid menu handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, cur_font);

    add_menu(h,     0, l10n("About EMU"), MENU_HELP_ABOUT_EMU, 0);
    add_menu(hMenu, h, l10n("Help"),      0,                   0);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_help)
{
    TEST_ASSERT_EQUAL_INT(-1, create_submenu_help(0));
}
#endif

static int create_menu(WM_HWIN hParent)
{
    MENU_Handle h = 0;

    debug(GUI"call %s()\n", __func__);

    if (!hParent) {
        error(GUI"invalid parent handle\n");
        return -1;
    }

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_HORIZONTAL, 0);
    MENU_SetFont(h, cur_font);

    create_submenu_file(h);
    create_submenu_system(h);
    create_submenu_view(h);
    create_submenu_config(h);
    create_submenu_tools(h);
    create_submenu_help(h);

    FRAMEWIN_AddMenu(hParent, h);

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, create_menu)
{
    TEST_ASSERT_EQUAL_INT(-1, create_menu(0));
}
#endif

static void WndProc(WM_MESSAGE* pMsg)
{
    char buf[MAX_PATH] = { 0 };
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
            create_menu(pMsg->hWin);
            break;
        case WM_MENU:
            pMenuInfo = (MENU_MSG_DATA *)pMsg->Data.p;
            switch (pMenuInfo->MsgType) {
            case MENU_ON_ITEMSELECT:
                if (pMenuInfo->ItemId == MENU_FILE_QUIT) {
                    debug(GUI"quit from MENU_FILE_QUIT\n");
                    running = 0;
                    GUI_EndDialog(pMsg->hWin, 0);
#if !defined(UIDBG)
                    emu_quit();
#endif
                }
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
    int rotate = 0;
    void *fb_pixels = NULL;
    SDL_Rect rt = { 0, 0, LCD_XSIZE, LCD_YSIZE };

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

#if !defined(UIDBG)
    myevt.mouse.x = LCD_XSIZE >> 1;
    myevt.mouse.y = LCD_YSIZE >> 1;
    myevt.mouse.pressed = 0;
#endif

    cur_font = &myFont;

#if !defined(UT)
    GUI_SetFont(cur_font);

    GUI_CURSOR_Select(&GUI_CursorArrowL);
    GUI_CURSOR_Show();
    GUI_CURSOR_SetPosition(LCD_XSIZE >> 1, LCD_YSIZE >> 1);

    GUI_CreateDialogBox(info, GUI_COUNTOF(info), WndProc, 0, 0, 0);
    GUI_Delay(100);

    running = 1;
    while (running) {
        flush_lcd_screen(-1, fb_pixels, rt, rt, LCD_XSIZE * 2, 0, rotate);
        flip_lcd_screen();
        GUI_Delay(1000 / 30);
    }
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
    debug(GUI"call %s(system=%p, show_dlg=%d)\n", __func__, sys, show_dlg);

#if !defined(UIDBG)
    myvid.mode = MENU;
#endif

#if defined(SFOS_EGL)
    update_wayland_client_size(SCREEN_W, SCREEN_H);
#endif

    mycfg.ui = UI_UCGUI;
    mycfg.lang = LANG_zh_CN;

    if (mycfg.ui == UI_LVGL) {
        run_lvgl();
    }
    else if (mycfg.ui == UI_UCGUI) {
        run_ucgui();
    }

#if !defined(UIDBG)
    myvid.mode = GAME;
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
    RUN_TEST_CASE(sdl2_menu, add_menu)
    RUN_TEST_CASE(sdl2_menu, create_submenu_file)
    RUN_TEST_CASE(sdl2_menu, create_submenu_view)
    RUN_TEST_CASE(sdl2_menu, create_submenu_system)
    RUN_TEST_CASE(sdl2_menu, create_submenu_config)
    RUN_TEST_CASE(sdl2_menu, create_submenu_tools)
    RUN_TEST_CASE(sdl2_menu, create_submenu_help)
    RUN_TEST_CASE(sdl2_menu, create_menu)
    RUN_TEST_CASE(sdl2_menu, WndProc)
    RUN_TEST_CASE(sdl2_menu, run_ucgui)
    RUN_TEST_CASE(sdl2_menu, refresh_cb)
    RUN_TEST_CASE(sdl2_menu, flush_cb)
    RUN_TEST_CASE(sdl2_menu, run_lvgl)
    RUN_TEST_CASE(sdl2_menu, prehook_cb_menu)
}
#endif

#endif

