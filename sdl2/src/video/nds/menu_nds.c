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

#if !defined(UIDBG)
extern nds_hook myhook;
extern nds_video myvid;
#endif

static void *fb_pixels = NULL;

static GUI_WIDGET_CREATE_INFO info[] = {
    { FRAMEWIN_CreateIndirect,  "",     100, 0, 0, SCREEN_W, SCREEN_H, WM_CF_SHOW | FRAMEWIN_SF_ICON16, 0},
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
    debug(SDL"call %s()\n", __func__);
}

TEST_TEAR_DOWN(sdl2_menu)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

static void WndProc(WM_MESSAGE* pMsg)
{
    GUI_RECT rt = { 0 };
    char buf[MAX_PATH] = { 0 };
    WM_HWIN hWin = 0;
    FRAMEWIN_Handle hFrame = 0;
    GUI_PID_STATE *mouse = NULL;
    MENU_Handle hMenu = 0;
    MENU_ITEM_DATA item = { 0 };

    debug(SDL"call %s(pMsg=%p)\n", __func__, pMsg);

    do {
        if (!pMsg) {
            error(SDL"pMsg is null\n");
            break;
        }

        hWin = pMsg->hWin;
        hFrame = hWin;

        switch (pMsg->MsgId) {
        case WM_INIT_DIALOG:
            snprintf(buf, sizeof(buf), "%s - %s", NDS_VER, __DATE__);
            FRAMEWIN_SetText(hFrame, buf);
            FRAMEWIN_SetFont(hFrame, &GUI_Font8x15B_1);

            WM_GetClientRectEx(hFrame, &rt);
            hMenu = MENU_CreateEx(3, 20, 634, 20, hFrame, WM_CF_SHOW, 0, 0);
            item.pText = "File";
            item.Id = 100;
            item.Flags = 0;
            item.hSubmenu = 0;
            MENU_AddItem(hMenu, &item);

            item.pText = "Edit";
            item.Id = 101;
            item.Flags = 0;
            item.hSubmenu = 0;
            MENU_AddItem(hMenu, &item);

            item.pText = "View";
            item.Id = 102;
            item.Flags = 0;
            item.hSubmenu = 0;
            MENU_AddItem(hMenu, &item);

            item.pText = "Help";
            item.Id = 103;
            item.Flags = 0;
            item.hSubmenu = 0;
            MENU_AddItem(hMenu, &item);
            MENU_SetFont(hMenu, &GUI_Font8x15B_1);
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

void prehook_cb_menu(void *sys, uint32_t show_dlg)
{
    int cc = 0;
    SDL_Rect rt = { 0, 0, LCD_XSIZE, LCD_YSIZE };

    debug(GUI"call %s(system=%p, show_dlg=%d)\n", __func__, sys, show_dlg);

    do {
        if (!sys) {
            error(SDL"sys is null");
            break;
        }

#if defined(SFOS_EGL)
        update_wayland_client_size(SCREEN_W, SCREEN_H);
#endif

        GUI_Init();
        GUI_SetBkColor(GUI_GRAY);
        GUI_Clear();

        fb_pixels = fb_getbuffer();
        debug(GUI"fb_pixels=%p\n", fb_pixels);
        if (!fb_pixels) {
            error(SDL"fb_pixels is null\n");
            break;
        }

        GUI_CURSOR_Show();
        GUI_CURSOR_SetPosition(LCD_XSIZE >> 1, LCD_YSIZE >> 1);

        GUI_CreateDialogBox(info, GUI_COUNTOF(info), WndProc, 0, 0, 0);
        GUI_Delay(100);

        cc = 100;
        while (cc--) {
            flush_lcd_screen(-1, fb_pixels, rt, rt, LCD_XSIZE * 2, 0, 0);
            flip_lcd_screen();
            GUI_Delay(100);
        }
    } while (0);
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

