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
#include "menu_nds.h"

#if !defined(UIDBG)
#include "video_nds.h"
#include "event_nds.h"
#endif

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "cfg.pb.h"

extern nds_pb_cfg mycfg;

#if !defined(UIDBG)
extern nds_hook myhook;
extern nds_video myvid;
#endif

static int running = 0;
static GUI_WIDGET_CREATE_INFO info[] = {
    { FRAMEWIN_CreateIndirect,  "",     100, 0, 0, LCD_XSIZE, LCD_YSIZE, WM_CF_SHOW | FRAMEWIN_SF_ICON24, 0},
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

static int add_menu(MENU_Handle hMenu, MENU_Handle hSubMenu, char *pText, U16 dwID, U16 dwFlags)
{
    MENU_ITEM_DATA m = { 0 };

    m.pText = pText;
    m.hSubmenu = hSubMenu;
    m.Flags = dwFlags;
    m.Id = dwID;
    MENU_AddItem(hMenu, &m);

    return 0;
}

static int create_submenu_file(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, &GUI_Font24_ASCII);

    add_menu(h,     0, " Open ROM...",          MENU_FILE_OPEN_ROM,         0);
    add_menu(h,     0, " Open Recent ",         MENU_FILE_OPEN_RECENT,      0);
    add_menu(h,     0, NULL,                    0,                          MENU_IF_SEPARATOR);
    add_menu(h,     0, " Save State ",          MENU_FILE_SAVE_STATE,       0);
    add_menu(h,     0, " Load State ",          MENU_FILE_LOAD_STATE,       0);
    add_menu(h,     0, NULL,                    0,                          MENU_IF_SEPARATOR);
    add_menu(h,     0, " Quit ",                MENU_FILE_QUIT,             0);
    add_menu(hMenu, h, " File ",                0,                          0);
}

static int create_submenu_view(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, &GUI_Font24_ASCII);

    add_menu(h,     0, " Layout ",              MENU_VIEW_LAYOUT,   0);
    add_menu(h,     0, " Filter ",              MENU_VIEW_FILTER,   0);
    add_menu(hMenu, h, " View ",                0,                  0);
}

static int create_submenu_system(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, &GUI_Font24_ASCII);

    add_menu(hMenu, h, " System ",              0,                      0);
}

static int create_submenu_config(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, &GUI_Font24_ASCII);

    add_menu(hMenu, h, " Config ",              0,                      0);
}

static int create_submenu_tools(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, &GUI_Font24_ASCII);

    add_menu(hMenu, h, " Tools ",              0,                      0);
}

static int create_submenu_help(MENU_Handle hMenu)
{
    MENU_Handle h = 0;

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_VERTICAL, 0);
    MENU_SetFont(h, &GUI_Font24_ASCII);

    add_menu(hMenu, h, " Help ",              0,                      0);
}

#if defined(UT)
TEST(sdl2_menu, create_submenu_file)
{
    TEST_ASSERT_EQUAL_INT(-1, create_menu(NULL));
}
#endif

static int create_menu(WM_HWIN hParent)
{
    MENU_Handle h = 0;

    h = MENU_CreateEx(0, 0, 0, 0, WM_UNATTACHED, 0, MENU_CF_HORIZONTAL, 100);
    MENU_SetFont(h, &GUI_Font24_ASCII);

    create_submenu_file(h);
    create_submenu_view(h);
    create_submenu_system(h);
    create_submenu_config(h);
    create_submenu_tools(h);
    create_submenu_help(h);

    FRAMEWIN_AddMenu(hParent, h);
}

#if defined(UT)
TEST(sdl2_menu, create_menu)
{
    TEST_ASSERT_EQUAL_INT(-1, create_menu(NULL));
}
#endif

static void WndProc(WM_MESSAGE* pMsg)
{
    GUI_RECT rt = { 0 };
    char buf[MAX_PATH] = { 0 };
    GUI_PID_STATE *mouse = NULL;
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
            FRAMEWIN_SetFont(pMsg->hWin, &GUI_Font24_ASCII);
            create_menu(pMsg->hWin);
            break;
        case WM_MENU:
            pMenuInfo = (MENU_MSG_DATA *)pMsg->Data.p;
            switch (pMenuInfo->MsgType) {
            case MENU_ON_ITEMSELECT:
                if (pMenuInfo->ItemId == MENU_FILE_QUIT) {
                    debug(GUI"exit\n");
                    running = 0;
                    GUI_EndDialog(pMsg->hWin, 0);
                    break;
                }
                sprintf(buf, "ID %d", pMenuInfo->ItemId);
                GUI_MessageBox(buf, "main", GUI_MB_OK);
                break;
            }
            break;
        case WM_PAINT:
            break;
        case WM_MOUSEOVER:
            mouse = (GUI_PID_STATE *)pMsg->Data.p;
            GUI_CURSOR_SetPosition(mouse->x, mouse->y);
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
    int cc = 0;
    void *fb_pixels = NULL;
    SDL_Rect rt = { 0, 0, LCD_XSIZE, LCD_YSIZE };

    debug(GUI"call %s()\n", __func__);

    GUI_Init();
    GUI_SetBkColor(GUI_GRAY);
    GUI_Clear();

    fb_pixels = fb_getbuffer();
    debug(GUI"fb_pixels=%p\n", fb_pixels);
    if (!fb_pixels) {
        error(GUI"fb_pixels is null\n");
        return -1;
    }

    GUI_CURSOR_Show();
    GUI_CURSOR_SetPosition(LCD_XSIZE >> 1, LCD_YSIZE >> 1);

    GUI_CreateDialogBox(info, GUI_COUNTOF(info), WndProc, 0, 0, 0);
    GUI_Delay(100);

    running = 1;
    while (running) {
        flush_lcd_screen(-1, fb_pixels, rt, rt, LCD_XSIZE * 2, 0, 0);
        flip_lcd_screen();
        GUI_Delay(1000 / 30);
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_menu, run_ucgui)
{
    TEST_ASSERT_EQUAL_INT(-1, run_ucgui());
}
#endif

static int run_lvgl(void)
{
    debug(GUI"call %s()\n", __func__);

    lv_obj_t *label = lv_label_create(lv_screen_active());
    lv_label_set_text(label, "Hello, world!");
 
    lv_timer_handler();
    SDL_Delay(3000);
    return 0;
}

#if defined(UT)
TEST(sdl2_menu, run_lvgl)
{
    TEST_ASSERT_EQUAL_INT(-1, run_lvgl());
}
#endif

void prehook_cb_menu(void *sys, uint32_t show_dlg)
{
    debug(GUI"call %s(system=%p, show_dlg=%d)\n", __func__, sys, show_dlg);

#if defined(SFOS_EGL)
    update_wayland_client_size(SCREEN_W, SCREEN_H);
#endif

    if (mycfg.ui == UI_LVGL) {
        run_lvgl();
    }
    else if (mycfg.ui == UI_UCGUI) {
        run_ucgui();
    }
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
    RUN_TEST_CASE(sdl2_menu, WndProc)
    RUN_TEST_CASE(sdl2_menu, prehook_cb_menu)
}
#endif

#endif

