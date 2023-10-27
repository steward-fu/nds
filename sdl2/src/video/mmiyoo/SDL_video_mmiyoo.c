/*
  Customized version for Miyoo-Mini handheld.
  Only tested under Miyoo-Mini stock OS (original firmware) with Parasyte compatible layer.

  Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>
  Copyright (C) 2022-2022 Steward Fu <steward.fu@gmail.com>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/
#include "../../SDL_internal.h"

#if SDL_VIDEO_DRIVER_MMIYOO

#include <dirent.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <pthread.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <time.h>
#include <json-c/json.h>

#include "../../events/SDL_events_c.h"
#include "../SDL_sysvideo.h"
#include "../SDL_sysvideo.h"
#include "../SDL_pixels_c.h"

#include "SDL_image.h"
#include "SDL_version.h"
#include "SDL_syswm.h"
#include "SDL_loadso.h"
#include "SDL_events.h"
#include "SDL_video.h"
#include "SDL_mouse.h"
#include "SDL_video_mmiyoo.h"
#include "SDL_event_mmiyoo.h"
#include "SDL_opengles_mmiyoo.h"
#include "SDL_framebuffer_mmiyoo.h"

#include "hex_pen.h"

#define PRINT_STRING 0x080a5398

NDS nds = {0};
GFX gfx = {0};
MMIYOO_VideoInfo MMiyooVideoInfo={0};

int down_scale = 1;

int show_fps = 0;
SDL_Surface *fps_info = NULL;

static pthread_t thread;
static int is_running = 0;
static SDL_Surface *cvt = NULL;

extern int need_reload_bg;
extern MMIYOO_EventInfo MMiyooEventInfo;

static int MMIYOO_VideoInit(_THIS);
static int MMIYOO_SetDisplayMode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode);
static void MMIYOO_VideoQuit(_THIS);

static CUST_MENU drastic_menu = {0};
static char *translate[MAX_LANG_LINE] = {0};

void sigterm(int signum)
{
    MMIYOO_VideoQuit(NULL);
    printf("Oops ! sigterm caught!\n");
}

static int get_current_menu_layer(void)
{
    int cc = 0;
    const char *P0 = "Change Options";
    const char *P1 = "Frame skip type";
    const char *P2 = "D-Pad Up";
    const char *P3 = "Enter Menu";
    const char *P4 = "Username";
    const char *P5 = "KB Space: toggle cheat/folder    KB Left Ctrl: return to main menu";
    const char *P6 = "KB Space: select";

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if ((drastic_menu.item[cc].x == 180) && !memcmp(drastic_menu.item[cc].msg, P0, strlen(P0))) {
            return NDS_DRASTIC_MENU_MAIN;
        }
        else if ((drastic_menu.item[cc].x == 92) && !memcmp(drastic_menu.item[cc].msg, P1, strlen(P1))) {
            return NDS_DRASTIC_MENU_OPTION;
        }
        else if ((drastic_menu.item[cc].x == 56) && !memcmp(drastic_menu.item[cc].msg, P2, strlen(P2))) {
            return NDS_DRASTIC_MENU_CONTROLLER;
        }
        else if ((drastic_menu.item[cc].x == 56) && !memcmp(drastic_menu.item[cc].msg, P3, strlen(P3))) {
            return NDS_DRASTIC_MENU_CONTROLLER2;
        }
        else if ((drastic_menu.item[cc].x == 92) && !memcmp(drastic_menu.item[cc].msg, P4, strlen(P4))) {
            return NDS_DRASTIC_MENU_FIRMWARE;
        }
        else if ((drastic_menu.item[cc].x == 6) && !memcmp(drastic_menu.item[cc].msg, P5, strlen(P5))) {
            return NDS_DRASTIC_MENU_CHEAT;
        }
        else if ((drastic_menu.item[cc].x == 6) && !memcmp(drastic_menu.item[cc].msg, P6, strlen(P6))) {
            return NDS_DRASTIC_MENU_ROM;
        }
    }
    return -1;
}

static int draw_drastic_menu_main(void)
{
    int cc = 0;
    int draw = 0;
    int x = 0, y = 0;
    SDL_Rect rt = {0};
    CUST_MENU_SUB *p = NULL;
    char buf[MAX_PATH] = {0};

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        x = 150;
        draw = 0;
        
        memset(buf, 0, sizeof(buf));
        p = &drastic_menu.item[cc];
        if (p->y == 201) {
            draw = 1;
            sprintf(buf, "%s %s", to_lang("Version"), &p->msg[8]);
            x = FB_W - get_font_width(buf) - 10;
            y = 10;
        }
        else if (p->y == 280) {
            draw = 1;
            y = 100 + (0 * 30);
            strcpy(buf, to_lang("Change Options"));
        }
        else if (p->y == 288) {
            draw = 1;
            y = 100 + (1 * 30);
            strcpy(buf, to_lang("Configure Controls"));
        }
        else if (p->y == 296) {
            draw = 1;
            y = 100 + (2 * 30);
            strcpy(buf, to_lang("Configure Firmware"));
        }
        else if (p->y == 304) {
            draw = 1;
            y = 100 + (3 * 30);
            strcpy(buf, to_lang("Configure Cheats"));
        }
        else if (p->y == 320) {
            draw = 1;
            y = 100 + (4 * 30);
            sprintf(buf, "%s %s", to_lang("Load state"), &p->msg[13]);
        }
        else if (p->y == 328) {
            draw = 1;
            y = 100 + (5 * 30);
            sprintf(buf, "%s %s", to_lang("Save state"), &p->msg[13]);
        }
        else if (p->y == 344) {
            draw = 1;
            y = 100 + (6 * 30);
            strcpy(buf, to_lang("Load new game"));
        }
        else if (p->y == 352) {
            draw = 1;
            y = 100 + (7 * 30);
            strcpy(buf, to_lang("Restart game"));
        }
        else if (p->y == 368) {
            draw = 1;
            y = 100 + (8 * 30);
            strcpy(buf, to_lang("Return to game"));
        }
        else if (p->y == 384) {
            draw = 1;
            y = 100 + (9 * 30);
            strcpy(buf, to_lang("Exit DraStic"));
        }

        if (draw) {
            if (p->bg) {
                rt.x = 5;
                rt.y = y - 4;
                rt.w = 630;
                rt.h = 30;
                SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                    (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
            }
            draw_info(nds.menu.drastic.main, buf, x, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            if (p->bg) {
                rt.x = x - 50;
                rt.y = y - (nds.menu.drastic.cursor->h / 3);
                SDL_BlitSurface(nds.menu.drastic.cursor, NULL, nds.menu.drastic.main, &rt);
            }
        }
    }
    return 0;
}

static int mark_double_spaces(char *p)
{
    int cc = 0;
    int len = strlen(p);

    for (cc=0; cc<len - 1; cc++) {
        if ((p[cc] == ' ') && (p[cc + 1] == ' ')) {
            p[cc] = 0;
            return 0;
        }
    }
    return -1;
}

static char* find_menu_string_tail(char *p)
{
    int cc = 0;

    for (cc=strlen(p) - 1; cc>=0; cc--) {
        if (p[cc] == ' ') {
            return &p[cc + 1];
        }
    }
    return NULL;
}

static int draw_drastic_menu_option(void)
{
    int w = 0;
    int y = 0;
    int s0 = 0;
    int s1 = 0;
    int cc = 0;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = {0};
    CUST_MENU_SUB *p = NULL;
    char buf[MAX_PATH] = {0};

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].bg > 0) {
            cursor = cc;
        }
    }

    if (cursor <= 6) {
        s0 = 1;
        s1 = 14;
    }
    else if (cursor >= (drastic_menu.cnt - 7)) {
        s0 = drastic_menu.cnt - 14;
        s1 = drastic_menu.cnt - 1;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if ((cc >= s0) && (cc < s1)) {
            y = 25 + (cnt * 30);
            memset(buf, 0, sizeof(buf));
            p = &drastic_menu.item[cc];
        
            cnt+= 1;            
            if (p->bg) {
                rt.x = 5;
                rt.y = y - 4;
                rt.w = 630;
                rt.h = 30;
                SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                    (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
            }

            if (p->y <= 384) {
                strcpy(buf, to_lang(find_menu_string_tail(p->msg)));
                w = get_font_width(buf);
                draw_info(nds.menu.drastic.main, buf, FB_W - w - 20, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);

                mark_double_spaces(p->msg);
                strcpy(buf, to_lang(p->msg));
                draw_info(nds.menu.drastic.main, buf, 60, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
            else {
                strcpy(buf, to_lang(p->msg));
                draw_info(nds.menu.drastic.main, buf, 60, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }

            if (p->bg) {
                rt.x = 10;
                rt.y = y - (nds.menu.drastic.cursor->h / 3) - 2;
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface(nds.menu.drastic.cursor, NULL, nds.menu.drastic.main, &rt);
            }
        }
    }
    return 0;
}

static int draw_drastic_menu_controller(void)
{
    int y = 0;
    int cc = 0;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = {0};
    int s0 = 0, s1 = 0;
    CUST_MENU_SUB *p = NULL;
    char buf[MAX_PATH] = {0};

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt;) {
        if ((drastic_menu.item[cc].y >= 240) && (drastic_menu.item[cc].y <= 376)) {
            if ((drastic_menu.item[cc + 1].bg > 0) || (drastic_menu.item[cc + 2].bg > 0)) {
                break;
            }
            cc+= 3;
        }
        else {
            if (drastic_menu.item[cc].bg > 0) {
                break;
            }
            cc+= 1;
        }
        cursor+= 1;
    }
    
    if (cursor <= 6) {
        s0 = 0;
        s1 = 13;
    }
    else if (cursor >= (24 - 7)) {
        s0 = 24 - 13;
        s1 = 24;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    cnt = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        p = &drastic_menu.item[cc];

        if ((p->y == 224) || (p->y == 232) || (p->y == 201)) {
            continue;
        }

        memset(buf, 0, sizeof(buf));
        if ((cnt >= s0) && (cnt < s1)) {
            y = 25 + ((cnt - s0) * 30);
            
            if ((p->y >= 240) && (p->y <= 376)) {
                if (drastic_menu.item[cc + 1].bg || drastic_menu.item[cc + 2].bg) {
                    int sum = drastic_menu.item[cc + 1].bg + drastic_menu.item[cc + 2].bg;
                    uint32_t c = sum > 500 ? 0xff0000 : nds.menu.c2;

                    rt.x = 5;
                    rt.y = y - 4;
                    rt.w = 630;
                    rt.h = 30;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
                }
                draw_info(nds.menu.drastic.main, p->msg, 20, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
                if ((p->y >= 240) && (p->y <= 376)) {
                    draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 1].msg), 300, y, drastic_menu.item[cc + 1].bg ? nds.menu.c0 : nds.menu.c1, 0);
                    draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 2].msg), 480, y, drastic_menu.item[cc + 2].bg ? nds.menu.c0 : nds.menu.c1, 0);
                }
            }
            else {
                if (p->bg) {
                    rt.x = 5;
                    rt.y = y - 4;
                    rt.w = 630;
                    rt.h = 30;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                        (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
                }
                draw_info(nds.menu.drastic.main, to_lang(p->msg), 20, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
        }

        cnt+= 1;
        if ((p->y >= 240) && (p->y <= 376)) {
            cc+= 2;
        }
    }
    return 0;
}

static int draw_drastic_menu_controller2(void)
{
    int y = 0;
    int cc = 0;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = {0};
    int s0 = 0, s1 = 0;
    CUST_MENU_SUB *p = NULL;
    char buf[MAX_PATH] = {0};

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt;) {
        if ((drastic_menu.item[cc].y >= 240) && (drastic_menu.item[cc].y <= 384)) {
            if ((drastic_menu.item[cc + 1].bg > 0) || (drastic_menu.item[cc + 2].bg > 0)) {
                break;
            }
            cc+= 3;
        }
        else {
            if (drastic_menu.item[cc].bg > 0) {
                break;
            }
            cc+= 1;
        }
        cursor+= 1;
    }
    
    if (cursor <= 6) {
        s0 = 0;
        s1 = 13;
    }
    else if (cursor >= (23 - 7)) {
        s0 = 23 - 13;
        s1 = 23;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    cnt = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        p = &drastic_menu.item[cc];

        if ((p->y == 224) || (p->y == 232) || (p->y == 201)) {
            continue;
        }

        memset(buf, 0, sizeof(buf));
        if ((cnt >= s0) && (cnt < s1)) {
            y = 25 + ((cnt - s0) * 30);
            
            if ((p->y >= 240) && (p->y <= 384)) {
                if (drastic_menu.item[cc + 1].bg || drastic_menu.item[cc + 2].bg) {
                    int sum = drastic_menu.item[cc + 1].bg + drastic_menu.item[cc + 2].bg;
                    uint32_t c = sum > 500 ? 0xff0000 : nds.menu.c2;

                    rt.x = 5;
                    rt.y = y - 4;
                    rt.w = 630;
                    rt.h = 30;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
                }
                draw_info(nds.menu.drastic.main, p->msg, 20, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
                if ((p->y >= 240) && (p->y <= 384)) {
                    draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 1].msg), 300, y, drastic_menu.item[cc + 1].bg ? nds.menu.c0 : nds.menu.c1, 0);
                    draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 2].msg), 480, y, drastic_menu.item[cc + 2].bg ? nds.menu.c0 : nds.menu.c1, 0);
                }
            }
            else {
                if (p->bg) {
                    rt.x = 5;
                    rt.y = y - 4;
                    rt.w = 630;
                    rt.h = 30;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                        (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
                }
                draw_info(nds.menu.drastic.main, to_lang(p->msg), 20, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
        }

        cnt+= 1;
        if ((p->y >= 240) && (p->y <= 384)) {
            cc+= 2;
        }
    }
    return 0;
}

static int draw_drastic_menu_firmware(void)
{
    int t = 0;
    int w = 0;
    int y = 0;
    int cc = 0;
    int cnt = 0;
    SDL_Rect rt = {0};
    CUST_MENU_SUB *p = NULL;
    char buf[MAX_PATH] = {0};
    char name[MAX_PATH] = {0};

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        p = &drastic_menu.item[cc];
        if ((p->x == 352) || (p->x == 108)) {
            continue;
        }
    
        memset(buf, 0, sizeof(buf));
        if (p->x != 92) {
            strcat(name, p->msg);
        }
        else {
            y = 25 + (cnt * 30);
            if ((p->x == 92) && (p->bg)) {
                rt.x = 5;
                rt.y = y - 4;
                rt.w = 630;
                rt.h = 30;
                SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                    (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
            }

            cnt+= 1;
            if (p->y == 280) {
                mark_double_spaces(p->msg);
                strcpy(buf, to_lang(p->msg));
                draw_info(nds.menu.drastic.main, buf, 60, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
            else if (p->y == 296) {
                w = get_font_width(name);
                draw_info(nds.menu.drastic.main, name, FB_W - w - 20, 25, nds.menu.c1, 0);

                w = strlen(p->msg);
                p->msg[w - 3] = 0;
                for (t=14; t<w; t++) {
                    if (p->msg[t] != ' ') {
                        strcpy(buf, &p->msg[t]);
                        break;
                    }
                }
                w = get_font_width(buf);
                draw_info(nds.menu.drastic.main, buf, FB_W - w - 20, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);

                strcpy(buf, to_lang("Favorite Color"));
                draw_info(nds.menu.drastic.main, buf, 60, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
            else if (p->y <= 312) {
                strcpy(buf, to_lang(find_menu_string_tail(p->msg)));
                w = get_font_width(buf);
                draw_info(nds.menu.drastic.main, buf, FB_W - w - 20, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);

                mark_double_spaces(p->msg);
                strcpy(buf, to_lang(p->msg));
                draw_info(nds.menu.drastic.main, buf, 60, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
            else {
                strcpy(buf, to_lang(p->msg));
                draw_info(nds.menu.drastic.main, buf, 60, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }

            if ((p->x == 92) && (p->bg)) {
                rt.x = 10;
                rt.y = y - (nds.menu.drastic.cursor->h / 3) - 2;
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface(nds.menu.drastic.cursor, NULL, nds.menu.drastic.main, &rt);
            }
        }
    }
    return 0;
}

static int draw_drastic_menu_cheat(void)
{
    int y = 0;
    int cc = 0;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = {0};
    int s0 = 0, s1 = 0;
    CUST_MENU_SUB *p = NULL;
    char buf[MAX_PATH] = {0};

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        p = &drastic_menu.item[cc];
        if (p->x == 650) {
            for (s0=0; s0<drastic_menu.cnt; s0++) {
                if ((drastic_menu.item[s0].x == 10) && (drastic_menu.item[s0].y == p->y)) {
                    drastic_menu.item[s0].cheat = 1;
                    drastic_menu.item[s0].enable = strcmp(p->msg, "enabled") == 0 ? 1 : 0;
                    break;
                }
            }
        }
    }

    s0 = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].x == 10) {
            memcpy(&drastic_menu.item[s0], &drastic_menu.item[cc], sizeof(drastic_menu.item[cc]));
            s0+= 1;
        }
        memset(&drastic_menu.item[cc], 0, sizeof(drastic_menu.item[cc]));
    }
    drastic_menu.cnt = s0;

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].bg > 0) {
            cursor = cc;
        }
    }

    if (drastic_menu.cnt == 0) {
        return 0;
    }

    if (drastic_menu.cnt < 13) {
        s0 = 0;
        s1 = drastic_menu.cnt;
    }
    else if (cursor <= 6) {
        s0 = 0;
        s1 = 13;
    }
    else if (cursor >= (drastic_menu.cnt - 7)) {
        s0 = drastic_menu.cnt - 13;
        s1 = drastic_menu.cnt;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    cnt = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        memset(buf, 0, sizeof(buf));
        p = &drastic_menu.item[cc];

        if (p->x != 10) {
            continue;
        }

        if ((cc >= s0) && (cc < s1)) {
            y = 25 + (cnt * 30);

            if (p->bg) {
                rt.x = 5;
                rt.y = y - 4;
                rt.w = 630;
                rt.h = 30;
                SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format,
                    (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
            }

            cnt+= 1;
            draw_info(nds.menu.drastic.main, p->msg, 60, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            if (p->cheat) {
                rt.x = 600;
                rt.y = y - 2;
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface((p->enable > 0 ) ? nds.menu.drastic.yes : nds.menu.drastic.no, NULL, nds.menu.drastic.main, &rt);
            }
            if (p->bg) {
                rt.x = 10;
                rt.y = y - (nds.menu.drastic.cursor->h / 3) - 2;
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface(nds.menu.drastic.cursor, NULL, nds.menu.drastic.main, &rt);
            }
        }
    }
    return 0;
}

static int draw_drastic_menu_rom(void)
{
    int y = 0;
    int cc = 0;
    int chk = 0;
    int all = 0;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = {0};
    int s0 = 0, s1 = 0;
    CUST_MENU_SUB *p = NULL;
    
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].x == 10) {
            if (drastic_menu.item[cc].bg > 0) {
                chk = 10;
                break;
            }
        }
        if (drastic_menu.item[cc].x == 587) {
            if (drastic_menu.item[cc].bg > 0) {
                chk = 587;
                break;
            }
        }
    }

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].x == chk) {
            if (drastic_menu.item[cc].bg > 0) {
                break;
            }
            cursor+= 1;
        }
    }

    all = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].x == chk) {
            all+= 1;
        }
    }

    if (all < 12) {
        s0 = 0;
        s1 = all;
    }
    else if (cursor <= 6) {
        s0 = 0;
        s1 = 12;
    }
    else if (cursor >= (all - 6)) {
        s0 = all - 12;
        s1 = all;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 6;
    }

    {
        uint32_t c = 0x335445;

        p = &drastic_menu.item[0];
        rt.x = 5;
        rt.y = 25 - 4;
        rt.w = 630;
        rt.h = 30;
        SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
        draw_info(nds.menu.drastic.main, p->msg, 20, 25, 0xa0cb93, 0);
    }

    cnt = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        p = &drastic_menu.item[cc];
        if (p->x == chk) {
            y = 25 + (((cnt - s0) + 1) * 30);
            if ((cnt >= s0) && (cnt < s1)) {
                if (p->bg) {
                    rt.x = 5;
                    rt.y = y - 4;
                    rt.w = 630;
                    rt.h = 30;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format,
                        (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
                }
                draw_info(nds.menu.drastic.main, p->msg, 20, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
            cnt+= 1;
        }
    }
    return 0;
}

int process_drastic_menu(void)
{
    int layer = get_current_menu_layer();

    SDL_BlitSurface(nds.menu.drastic.bg, NULL, nds.menu.drastic.main, NULL);
    switch (layer) {
    case NDS_DRASTIC_MENU_MAIN:
        draw_drastic_menu_main();
        break;
    case NDS_DRASTIC_MENU_OPTION:
        draw_drastic_menu_option();
        break;
    case NDS_DRASTIC_MENU_CONTROLLER:
        draw_drastic_menu_controller();
        break;
    case NDS_DRASTIC_MENU_CONTROLLER2:
        draw_drastic_menu_controller2();
        break;
    case NDS_DRASTIC_MENU_FIRMWARE:
        draw_drastic_menu_firmware();
        break;
    case NDS_DRASTIC_MENU_CHEAT:
        draw_drastic_menu_cheat();
        break;
    case NDS_DRASTIC_MENU_ROM:
        draw_drastic_menu_rom();
        break;
    default:
        SDL_SendKeyboardKey(SDL_PRESSED, SDL_GetScancodeFromKey(SDLK_RIGHT));
        usleep(100000);
        SDL_SendKeyboardKey(SDL_RELEASED, SDL_GetScancodeFromKey(SDLK_RIGHT));
        memset(&drastic_menu, 0, sizeof(drastic_menu));
        return 0;
    }
    GFX_Copy(nds.menu.drastic.main->pixels, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->pitch, 0, E_MI_GFX_ROTATE_180);
    GFX_Flip();
    GFX_Copy(nds.menu.drastic.main->pixels, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->pitch, 0, E_MI_GFX_ROTATE_180);
    GFX_Flip();
    memset(&drastic_menu, 0, sizeof(drastic_menu));
    return 0;
}

void my_print_string(char *p, uint32_t fg, uint32_t bg, uint32_t x, uint32_t y)
{
    int w = 0, h = 0;
    SDL_Color col = {0};
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    static int fps_cnt = 0;

    if (p && (strlen(p) > 0)) {
        if (drastic_menu.cnt < MAX_MENU_LINE) {
            drastic_menu.item[drastic_menu.cnt].x = x;
            drastic_menu.item[drastic_menu.cnt].y = y;
            drastic_menu.item[drastic_menu.cnt].fg = fg;
            drastic_menu.item[drastic_menu.cnt].bg = bg;
            strcpy(drastic_menu.item[drastic_menu.cnt].msg, p);
            drastic_menu.cnt+= 1;
        }
        //printf("x:%d, y:%d, fg:0x%x, bg:0x%x, \'%s\'\n", x, y, fg, bg, p);
    }

    if ((x == 0) && (y == 0) && (fg == 0xffff) && (bg == 0x0000)) {
        if (fps_cnt++ > 60) {
            fps_cnt = 0;

            w = strlen(p);
            for (h=w-1; h>=0; h--) {
                if (p[h] == ' ') {
                    p[h] = 0;
                    break;
                }
            }

            col.r = 0x00;
            col.g = 0x80;
            col.b = 0x00;
            TTF_SizeUTF8(nds.font, p, &w, &h);
            t0 = TTF_RenderUTF8_Solid(nds.font, p, col);
            if (t0) {
                t1 = SDL_CreateRGBSurface(SDL_SWSURFACE, t0->w, t0->h, 32, 0, 0, 0, 0);
                if (t1) {
                    SDL_FillRect(t1, &t1->clip_rect, 0x000000);
                    SDL_BlitSurface(t0, NULL, t1, NULL);

                    if (fps_info) {
                        SDL_FreeSurface(fps_info);
                    }
                    fps_info = SDL_ConvertSurface(t1, cvt->format, 0);
                    SDL_FreeSurface(t1);
                }
                SDL_FreeSurface(t0);
            }
            show_fps = 60;
        }
    }
}

static void patch_it(void)
{
    size_t page_size = sysconf(_SC_PAGESIZE);
    uint32_t val = (uint32_t)my_print_string;
    volatile uint8_t *base = (uint8_t*)PRINT_STRING;

    #define ALIGN_ADDR(addr) ((void*)((size_t)(addr) & ~(page_size - 1)))
    mprotect(ALIGN_ADDR(PRINT_STRING), page_size, PROT_READ | PROT_WRITE);
    base[0] = 0x04;
    base[1] = 0xf0;
    base[2] = 0x1f;
    base[3] = 0xe5;
    base[4] = val >> 0;
    base[5] = val >> 8;
    base[6] = val >> 16;
    base[7] = val >> 24;
}

static void unpatch_it(void)
{
    size_t page_size = sysconf(_SC_PAGESIZE);
    volatile uint32_t *dump = (uint32_t*)PRINT_STRING;

    #define ALIGN_ADDR(addr) ((void*)((size_t)(addr) & ~(page_size - 1)))
    mprotect(ALIGN_ADDR(PRINT_STRING), page_size, PROT_READ | PROT_WRITE);
    dump[0] = 0xe16d42f4;
    dump[1] = 0xe1a05001;
}

static void strip_newline(char *p)
{
    int cc = 0, len = strlen(p);

    for(cc=0; cc<len; cc++) {
        if ((p[cc] == '\r') || (p[cc] == '\n')) {
            p[cc] = 0;
            break;
        }
    }
}

static void *video_handler(void *threadid)
{
    while (is_running) {
        if (gfx.action == GFX_ACTION_FLIP) {
            gfx.action = GFX_ACTION_NONE;

            if (((nds.dis_mode != NDS_DIS_MODE_S0) && (nds.dis_mode != NDS_DIS_MODE_S1)) || (nds.hres_mode > 0)) {
                My_QueueCopy(gfx.thread[0].texture, (nds.hres_mode > 0) ? gfx.thread[0].pixels : get_pixels(gfx.thread[0].texture), 
                    &gfx.thread[0].srt, &gfx.thread[0].drt);
            }
            if ((gfx.thread[1].srt.w == 256) && (gfx.thread[1].srt.h == 192)) {
                My_QueueCopy(gfx.thread[1].texture, get_pixels(gfx.thread[1].texture), &gfx.thread[1].srt, &gfx.thread[1].drt);
            }
            GFX_Flip();
        }
        usleep(1);
    }
    pthread_exit(NULL);
}

static int read_config(void)
{
    FILE *f = NULL;
    char buf[MAX_PATH] = {0};
    struct json_object *jval = NULL;
    struct json_object *jfile = NULL;

    jfile = json_object_from_file(nds.cfg_path);
    if (jfile == NULL) {
        printf("Failed to read settings from json file (%s)\n", nds.cfg_path);
        return -1;
    }

    json_object_object_get_ex(jfile, JSON_NDS_PEN_SEL, &jval);
    if (jval) {
        nds.pen.sel = json_object_get_int(jval);
        printf("[json] nds.pen.sel: %d\n", nds.pen.sel);
        if (nds.pen.sel >= nds.pen.max) {
            printf("Invalid nds.pen.sel(%d), reset as 0\n", nds.pen.sel);
            nds.pen.sel = 0;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_PEN_POS, &jval);
    if (jval) {
        nds.pen.pos = json_object_get_int(jval) == 0 ? 0 : 1;
        printf("[json] nds.pen.pos: %d\n", nds.pen.pos);
    }

    json_object_object_get_ex(jfile, JSON_NDS_THEME_SEL, &jval);
    if (jval) {
        nds.theme.sel = json_object_get_int(jval);
        printf("[json] nds.theme.sel: %d\n", nds.theme.sel);
        if (nds.theme.sel > nds.theme.max) {
            printf("Invalid nds.theme.sel(%d), reset as 0\n", nds.theme.sel);
            nds.theme.sel = 0;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_DIS_MODE, &jval);
    if (jval) {
        nds.dis_mode = json_object_get_int(jval);
        printf("[json] nds.dis_mode: %d\n", nds.dis_mode);
        if (nds.dis_mode > NDS_DIS_MODE_LAST) {
            printf("Invalid nds.dis_mode(%d), reset as 0\n", nds.dis_mode);
            nds.dis_mode = 0;
        }
    }
    
    json_object_object_get_ex(jfile, JSON_NDS_ALT_MODE, &jval);
    if (jval) {
        nds.alt_mode = json_object_get_int(jval);
        printf("[json] nds.alt_mode: %d\n", nds.alt_mode);
        if (nds.alt_mode > NDS_DIS_MODE_LAST) {
            printf("Invalid nds.alt_mode(%d), reset as 0\n", nds.alt_mode);
            nds.alt_mode = 0;
        }
    }
    
    json_object_object_get_ex(jfile, JSON_NDS_PEN_XV, &jval);
    if (jval) {
        nds.pen.xv = json_object_get_int(jval);
        printf("[json] nds.xv: %d\n", nds.pen.xv);
        if (nds.pen.xv <= 0) {
            printf("Invalid nds.pen.xv(%d), reset as 10000\n", nds.pen.xv);
            nds.pen.xv = 10000;
        }
    }
    
    json_object_object_get_ex(jfile, JSON_NDS_PEN_YV, &jval);
    if (jval) {
        nds.pen.yv = json_object_get_int(jval);
        printf("[json] nds.yv: %d\n", nds.pen.yv);
        if (nds.pen.yv <= 0) {
            printf("Invalid nds.pen.yv(%d), reset as 12000\n", nds.pen.yv);
            nds.pen.yv = 12000;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_VALUE, &jval);
    if (jval) {
        nds.alpha.val = json_object_get_int(jval);
        printf("[json] nds.alpha.val: %d\n", nds.alpha.val);
        if ((nds.alpha.val < 0) || (nds.alpha.val > NDS_ALPHA_MAX)) {
            printf("Invalid nds.alpha.val(%d), reset as 0\n", nds.alpha.val);
            nds.alpha.val = 0;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_POSITION, &jval);
    if (jval) {
        nds.alpha.pos = json_object_get_int(jval);
        printf("[json] nds.alpha.pos: %d\n", nds.alpha.pos);
        if ((nds.alpha.pos < 0) || (nds.alpha.pos >= 4)) {
            printf("Invalid nds.alpha.pos(%d), reset as 0\n", nds.alpha.pos);
            nds.alpha.pos = 0;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_BORDER, &jval);
    if (jval) {
        nds.alpha.border = json_object_get_int(jval);
        nds.alpha.border%= NDS_BORDER_MAX;
        printf("[json] nds.alpha.border: %d\n", nds.alpha.border);
    }

    json_object_object_get_ex(jfile, JSON_NDS_MAX_CPU, &jval);
    if (jval) {
        nds.maxcpu = json_object_get_int(jval);
        printf("[json] nds.maxcpu: %d\n", nds.maxcpu);
        if (nds.maxcpu < 0) {
            printf("Invalid nds.maxcpu(%d), reset as 1600\n", nds.maxcpu);
            nds.maxcpu = 1600;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_MIN_CPU, &jval);
    if (jval) {
        nds.mincpu = json_object_get_int(jval);
        printf("[json] nds.mincpu: %d\n", nds.mincpu);
        if (nds.mincpu < 0) {
            printf("Invalid nds.mincpu(%d), reset as 500\n", nds.mincpu);
            nds.mincpu = 500;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_OVERLAY, &jval);
    if (jval) {
        nds.overlay.sel = json_object_get_int(jval);
        printf("[json] nds.overlay.sel: %d\n", nds.overlay.sel);
        if (nds.overlay.sel < 0) {
            printf("Invalid nds.overlay.sel(%d), reset as 0\n", nds.overlay.sel);
            nds.overlay.sel = 0;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_SWAP_L1L2, &jval);
    if (jval) {
        nds.swap_l1l2 = json_object_get_int(jval) ? 1 : 0;
        printf("[json] nds.swap_l1l2: %d\n", nds.swap_l1l2);
    }

    json_object_object_get_ex(jfile, JSON_NDS_SWAP_R1R2, &jval);
    if (jval) {
        nds.swap_r1r2 = json_object_get_int(jval) ? 1 : 0;
        printf("[json] nds.swap_r1r2: %d\n", nds.swap_r1r2);
    }

    json_object_object_get_ex(jfile, JSON_NDS_DPAD_90D, &jval);
    if (jval) {
        nds.dpad_90d = json_object_get_int(jval) ? 1 : 0;
        printf("[json] nds.dpad_90d: %d\n", nds.dpad_90d);
    }

    json_object_object_get_ex(jfile, JSON_NDS_CUST_MENU, &jval);
    if (jval) {
        nds.cust_menu = json_object_get_int(jval) ? 1 : 0;
        printf("[json] nds.cust_menu: %d\n", nds.cust_menu);
    }

    nds.menu.c0 = 0xffffff;
    json_object_object_get_ex(jfile, JSON_NDS_MENU_C0, &jval);
    if (jval) {
        const char *p = json_object_get_string(jval);
        nds.menu.c0 = strtol(p, NULL, 16);
        printf("[json] nds.menu.c0: 0x%x\n", nds.menu.c0);
    }

    nds.menu.c1 = 0x000000;
    json_object_object_get_ex(jfile, JSON_NDS_MENU_C1, &jval);
    if (jval) {
        const char *p = json_object_get_string(jval);
        nds.menu.c1 = strtol(p, NULL, 16);
        printf("[json] nds.menu.c1: 0x%x\n", nds.menu.c1);
    }

    nds.menu.c2 = 0x289a35;
    json_object_object_get_ex(jfile, JSON_NDS_MENU_C2, &jval);
    if (jval) {
        const char *p = json_object_get_string(jval);
        nds.menu.c2 = strtol(p, NULL, 16);
        printf("[json] nds.menu.c2: 0x%x\n", nds.menu.c2);
    }

    json_object_object_get_ex(jfile, JSON_NDS_LANG, &jval);
    if (jval) {
        const char *lang = json_object_get_string(jval);

        printf("[json] nds.lang: %s\n", lang);
        if (strcasecmp(lang, "en") == 0) {
            nds.lang = NDS_LANG_EN;
        }
        else {
            sprintf(buf, "%s/%s", TRANSLATE_PATH, lang); 
            f = fopen(buf, "r");
            if (f != NULL) {
                int cc = 0, len = 0;

                memset(buf, 0, sizeof(buf));
                while (fgets(buf, sizeof(buf), f)) {
                    strip_newline(buf);
                    len = strlen(buf) + 2;
                    if (len == 0) {
                        continue;
                    }
                    translate[cc] = malloc(len);
                    if (translate[cc] != NULL) {
                        memcpy(translate[cc], buf, len);
                        //printf("Translate: \'%s\'(len=%d)\n", translate[cc], len);
                    }
                    cc+= 1;
                    if (cc >= MAX_LANG_LINE) {
                        break;
                    }
                    memset(buf, 0, sizeof(buf));
                }
                fclose(f);
                nds.lang = !NDS_LANG_EN;
            }
            else {
                nds.lang = NDS_LANG_EN;
            }
        }
    }

    reload_pen();
    reload_overlay();
    json_object_put(jfile);
    return 0;
}

static int write_config(void)
{
    struct json_object *jfile = NULL;

    jfile = json_object_from_file(nds.cfg_path);
    if (jfile == NULL) {
        printf("Failed to write settings to json file (%s)\n", nds.cfg_path);
        return -1;
    }

    json_object_object_add(jfile, JSON_NDS_PEN_SEL, json_object_new_int(nds.pen.sel));
    json_object_object_add(jfile, JSON_NDS_THEME_SEL, json_object_new_int(nds.theme.sel));
    json_object_object_add(jfile, JSON_NDS_DIS_MODE, json_object_new_int(nds.dis_mode));
    json_object_object_add(jfile, JSON_NDS_ALPHA_VALUE, json_object_new_int(nds.alpha.val));
    json_object_object_add(jfile, JSON_NDS_ALPHA_POSITION, json_object_new_int(nds.alpha.pos));
    json_object_object_add(jfile, JSON_NDS_ALPHA_BORDER, json_object_new_int(nds.alpha.border));
    json_object_object_add(jfile, JSON_NDS_OVERLAY, json_object_new_int(nds.overlay.sel));
    json_object_object_add(jfile, JSON_NDS_ALT_MODE, json_object_new_int(nds.alt_mode));
    json_object_object_add(jfile, JSON_NDS_DPAD_90D, json_object_new_int(nds.dpad_90d));

    json_object_to_file_ext(nds.cfg_path, jfile, JSON_C_TO_STRING_PRETTY);
    json_object_put(jfile);
    printf("Writing settings to json file !\n");
    return 0;
}

static int get_cpuclock(void)
{
    static const uint64_t divsrc = 432000000llu * 524288;

    int fd_mem = -1;
    void *pll_map = NULL;
    uint32_t rate = 0;
    uint32_t lpf_value = 0;
    uint32_t post_div = 0;

    fd_mem = open("/dev/mem", O_RDWR);
    if (fd_mem < 0) {
        return 0;
    }

    pll_map = mmap(0, PLL_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd_mem, BASE_REG_MPLL_PA);
    if (pll_map) {
        volatile uint8_t* p8 = (uint8_t*)pll_map;
        volatile uint16_t* p16 = (uint16_t*)pll_map;

        lpf_value = p16[0x2a4] + (p16[0x2a6] << 16);
        post_div = p16[0x232] + 1;
        if (lpf_value == 0) {
            lpf_value = (p8[0x2c2 << 1] << 16) + (p8[0x2c1 << 1] << 8) + p8[0x2c0 << 1];
        }

        if (lpf_value && post_div) {
            rate = (divsrc / lpf_value * 2 / post_div * 16);
        }
        printf("Current cpuclock=%u (lpf=%u, post_div=%u)\n", rate, lpf_value, post_div);
        munmap(pll_map, PLL_SIZE);
    }
    close(fd_mem);
    return rate / 1000000;
}

static void write_file(const char* fname, char* str)
{
	int fd = open(fname, O_WRONLY);

	if (fd >= 0) {
        write(fd, str, strlen(str));
        close(fd);
    }
}

static int set_cpuclock(uint32_t newclock)
{
    int fd_mem = -1;
    void *pll_map = NULL;
    uint32_t post_div = 0;
    char clockstr[16] = {0};
    const char fn_governor[] = "/sys/devices/system/cpu/cpufreq/policy0/scaling_governor";
    const char fn_setspeed[] = "/sys/devices/system/cpu/cpufreq/policy0/scaling_setspeed";

    if ((newclock < nds.mincpu) || (newclock > nds.maxcpu)) {
        return -1;
    }

    fd_mem = open("/dev/mem", O_RDWR);
    if (fd_mem < 0) {
        return -1;
    }

    pll_map = mmap(0, PLL_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd_mem, BASE_REG_MPLL_PA);
    if (pll_map) {
        printf("Set cpuclock %dMHz\n", newclock);

        newclock*= 1000;
        sprintf(clockstr, "%d", newclock);
        write_file(fn_governor, "userspace");
        write_file(fn_setspeed, clockstr);

        if (newclock >= 800000) {
            post_div = 2;
        }
        else if (newclock >= 400000) {
            post_div = 4;
        }
        else if (newclock >= 200000) {
            post_div = 8;
        }
        else {
            post_div = 16;
        }

        if (1) {
            static const uint64_t divsrc = 432000000llu * 524288;
            uint32_t rate = (newclock * 1000) / 16 * post_div / 2;
            uint32_t lpf = (uint32_t)(divsrc / rate);
            volatile uint16_t* p16 = (uint16_t*)pll_map;
            uint32_t cur_post_div = (p16[0x232] & 0x0f) + 1;
            uint32_t tmp_post_div = cur_post_div;

            if (post_div > cur_post_div) {
                while (tmp_post_div != post_div) {
                    tmp_post_div <<= 1;
                    p16[0x232] = (p16[0x232] & 0xf0) | ((tmp_post_div - 1) & 0x0f);
                }
            }

            p16[0x2A8] = 0x0000;        // reg_lpf_enable = 0
            p16[0x2AE] = 0x000f;        // reg_lpf_update_cnt = 32
            p16[0x2A4] = lpf & 0xffff;  // set target freq to LPF high
            p16[0x2A6] = lpf >> 16;     // set target freq to LPF high
            p16[0x2B0] = 0x0001;        // switch to LPF control
            p16[0x2B2]|= 0x1000;        // from low to high
            p16[0x2A8] = 0x0001;        // reg_lpf_enable = 1
            while(!(p16[0x2ba] & 1));   // polling done
            p16[0x2A0] = lpf & 0xffff;  // store freq to LPF low
            p16[0x2A2] = lpf >> 16;     // store freq to LPF low

            if (post_div < cur_post_div) {
                while (tmp_post_div != post_div) {
                    tmp_post_div >>= 1;
                    p16[0x232] = (p16[0x232] & 0xf0) | ((tmp_post_div - 1) & 0x0f);
                }
            }
        }
        munmap(pll_map, PLL_SIZE);
    }
    close(fd_mem);
    return 0;
}

static int get_dir_path(const char *path, int desire, char *buf)
{
    DIR *d = NULL;
    int count = 0, r = -1;
    struct dirent *dir = NULL;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (strcmp(dir->d_name, ".") == 0) {
                continue;
            }

            if (strcmp(dir->d_name, "..") == 0) {
                continue;
            }

            if (dir->d_type != DT_DIR) {
                continue;
            }

            if (count == desire) {
                r = snprintf(buf, MAX_PATH, "%s/%s", path, dir->d_name) ? 0 : 1;
                break;
            }
            count+= 1;
        }
        closedir(d);
    }
    return r;
}

static int get_file_path(const char *path, int desire, char *buf, int add_path)
{
    DIR *d = NULL;
    int count = 0, r = -1;
    struct dirent *dir = NULL;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (strcmp(dir->d_name, ".") == 0) {
                continue;
            }

            if (strcmp(dir->d_name, "..") == 0) {
                continue;
            }

            if (dir->d_type == DT_DIR) {
                continue;
            }

            if (count == desire) {
                if (add_path) {
                    r = snprintf(buf, MAX_PATH, "%s/%s", path, dir->d_name) ? 0 : 1;
                }
                else {
                    r = snprintf(buf, MAX_PATH, "%s", dir->d_name) ? 0 : 1;
                }
                break;
            }
            count+= 1;
        }
        closedir(d);
    }
    return r;
}

static int get_dir_count(const char *path)
{
    DIR *d = NULL;
    int count = 0;
    struct dirent *dir = NULL;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (dir->d_type != DT_DIR) {
                continue;
            }
            if (strcmp(dir->d_name, ".") == 0) {
                continue;
            }
            if (strcmp(dir->d_name, "..") == 0) {
                continue;
            }
            count+= 1;
        }
        closedir(d);
    }
    return count;
}

static int get_file_count(const char *path)
{
    DIR *d = NULL;
    int count = 0;
    struct dirent *dir = NULL;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (dir->d_type == DT_DIR) {
                continue;
            }
            if (strcmp(dir->d_name, ".") == 0) {
                continue;
            }
            if (strcmp(dir->d_name, "..") == 0) {
                continue;
            }
            count+= 1;
        }
        closedir(d);
    }
    return count;
}

static int get_theme_count(void)
{
    int r = 0;

    memset(nds.theme.path, 0, sizeof(nds.theme.path));
    if (getcwd(nds.theme.path, sizeof(nds.theme.path))) {
        strcat(nds.theme.path, "/");
        strcat(nds.theme.path, THEME_PATH);
        r = get_dir_count(nds.theme.path);
    }
    return r;
}

static int get_pen_count(void)
{
    int r = 0;

    memset(nds.pen.path, 0, sizeof(nds.pen.path));
    if (getcwd(nds.pen.path, sizeof(nds.pen.path))) {
        strcat(nds.pen.path, "/");
        strcat(nds.pen.path, PEN_PATH);
        r = get_file_count(nds.pen.path);
    }
    return r;
}

static int get_overlay_count(void)
{
    int r = 0;

    memset(nds.overlay.path, 0, sizeof(nds.overlay.path));
    if (getcwd(nds.overlay.path, sizeof(nds.overlay.path))) {
        strcat(nds.overlay.path, "/");
        strcat(nds.overlay.path, OVERLAY_PATH);
        r = get_file_count(nds.overlay.path);
    }
    return r;
}

void GFX_Init(void)
{
    int cc = 0;
    SDL_Surface *t = NULL;

    MI_SYS_Init();
    MI_GFX_Open();

    gfx.fd = open("/dev/fb0", O_RDWR);
    ioctl(gfx.fd, FBIOGET_FSCREENINFO, &gfx.finfo);
    gfx.fb.phyAddr = gfx.finfo.smem_start;
    ioctl(gfx.fd, FBIOGET_VSCREENINFO, &gfx.vinfo);
    gfx.vinfo.yoffset = 0;
    ioctl(gfx.fd, FBIOPUT_VSCREENINFO, &gfx.vinfo);
    MI_SYS_MemsetPa(gfx.fb.phyAddr, 0, FB_SIZE);
    MI_SYS_Mmap(gfx.fb.phyAddr, gfx.finfo.smem_len, &gfx.fb.virAddr, TRUE);
    memset(&gfx.hw.opt, 0, sizeof(gfx.hw.opt));

    MI_SYS_MMA_Alloc(NULL, TMP_SIZE, &gfx.tmp.phyAddr);
    MI_SYS_Mmap(gfx.tmp.phyAddr, TMP_SIZE, &gfx.tmp.virAddr, TRUE);

    MI_SYS_MMA_Alloc(NULL, TMP_SIZE, &gfx.overlay.phyAddr);
    MI_SYS_Mmap(gfx.overlay.phyAddr, TMP_SIZE, &gfx.overlay.virAddr, TRUE);

    for (cc=0; cc<MAX_QUEUE; cc++) {
        gfx.thread[cc].pixels = malloc(TMP_SIZE);
    }

    cvt = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
    printf("Surface for convert: %p\n", cvt);

    nds.pen.sel = 0;
    nds.pen.max = get_pen_count();
    printf("How many pen:%d\n", nds.pen.max);

    nds.theme.sel = 0;
    nds.theme.max = get_theme_count();
    printf("How many theme:%d\n", nds.theme.max);

    nds.overlay.sel = nds.overlay.max = get_overlay_count();
    printf("How many overlay:%d\n", nds.overlay.max);

    t = IMG_Load(MENU_BG_FILE);
    if (t) {
        nds.menu.bg = SDL_ConvertSurface(t, cvt->format, 0);
        printf("Menu bg: %p\n", nds.menu.bg);
        SDL_FreeSurface(t);
    }
    nds.menu.cursor = IMG_Load(MENU_CURSOR_FILE);
    printf("Menu cursor: %p\n", nds.menu.cursor);

    t = IMG_Load(DRASTIC_MENU_BG_FILE);
    if (t) {
        nds.menu.drastic.bg = SDL_ConvertSurface(t, cvt->format, 0);
        printf("DraStic menu bg: %p\n", nds.menu.drastic.bg);
        SDL_FreeSurface(t);
    }
    nds.menu.drastic.cursor = IMG_Load(DRASTIC_MENU_CURSOR_FILE);
    if (nds.menu.drastic.cursor) {
        printf("DraStic menu cursor: %p\n", nds.menu.drastic.cursor);
    }
    
    nds.menu.drastic.yes = IMG_Load(DRASTIC_MENU_YES_FILE);
    if (nds.menu.drastic.yes) {
        printf("DraStic menu yes: %p\n", nds.menu.drastic.yes);
    }
    
    nds.menu.drastic.no = IMG_Load(DRASTIC_MENU_NO_FILE);
    if (nds.menu.drastic.no) {
        printf("DraStic menu no: %p\n", nds.menu.drastic.no);
    }
    
    nds.menu.drastic.main = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
    if (nds.menu.drastic.main) {
        if (nds.menu.drastic.bg) {
            SDL_BlitSurface(nds.menu.drastic.bg, NULL, nds.menu.drastic.main, NULL);
        }
    }

    getcwd(nds.cfg_path, sizeof(nds.cfg_path));
    strcat(nds.cfg_path, "/");
    strcat(nds.cfg_path, CFG_PATH);

    TTF_Init();
    nds.font = TTF_OpenFont(FONT_PATH, FONT_SIZE);
    printf("nds.font: %p\n", nds.font);

    is_running = 1;
    gfx.action = GFX_ACTION_NONE;
    pthread_create(&thread, NULL, video_handler, (void *)NULL);
}

void GFX_Quit(void)
{
    int cc = 0;
    void *ret = NULL;

    gfx.vinfo.yoffset = 0;
    ioctl(gfx.fd, FBIOPUT_VSCREENINFO, &gfx.vinfo);
    close(gfx.fd);
    gfx.fd = 0;

    MI_SYS_Munmap(gfx.fb.virAddr, TMP_SIZE);
    MI_SYS_Munmap(gfx.tmp.virAddr, TMP_SIZE);
    MI_SYS_MMA_Free(gfx.tmp.phyAddr);
    MI_SYS_Munmap(gfx.overlay.virAddr, TMP_SIZE);
    MI_SYS_MMA_Free(gfx.overlay.phyAddr);

    for (cc=0; cc<MAX_QUEUE; cc++) {
        if (gfx.thread[cc].pixels) {
            free(gfx.thread[cc].pixels);
            gfx.thread[cc].pixels = NULL;
        }
    }
    MI_GFX_Close();
    MI_SYS_Exit();

    is_running = 0;
    pthread_join(thread, &ret);
}

void GFX_Clear(void)
{
    MI_SYS_MemsetPa(gfx.fb.phyAddr, 0, FB_SIZE);
    MI_SYS_MemsetPa(gfx.tmp.phyAddr, 0, TMP_SIZE);
}

int draw_pen(const void *pixels, int width, int pitch)
{
    int c0 = 0;
    int c1 = 0;
    int w = 28;
    int h = 28;
    int sub = 0;
    int sw = 256;
    int sh = 192;
    int x0 = 0, y0 = 0;
    int x1 = 0, y1 = 0;
    int x = 0, y = 0, is_565 = 0, scale = 1;
    uint16_t r = 0, g = 0, b = 0;
    uint32_t *s = hex_pen;
    uint16_t *d_565 = (uint16_t*)pixels;
    uint32_t *d_888 = (uint32_t*)pixels;

    if ((pitch / width) == 2) {
        is_565 = 1;
    }

    if (width == 512) {
        sw = 512;
        sh = 384;
        scale = 2;
    }

    x = ((MMiyooEventInfo.mouse.x - MMiyooEventInfo.mouse.minx) * sw) / (MMiyooEventInfo.mouse.maxx - MMiyooEventInfo.mouse.minx);
    y = ((MMiyooEventInfo.mouse.y - MMiyooEventInfo.mouse.miny) * sh) / (MMiyooEventInfo.mouse.maxy - MMiyooEventInfo.mouse.miny);

    switch (nds.dis_mode) {
    case NDS_DIS_MODE_VH_T0:
    case NDS_DIS_MODE_VH_T1:
    //case NDS_DIS_MODE_S0:
    //case NDS_DIS_MODE_S1:
        sub = sh;
        break;
    }

    if (nds.pen.pos == 0) {
        switch (nds.dis_mode) {
        case NDS_DIS_MODE_V0:
        case NDS_DIS_MODE_V1:
        case NDS_DIS_MODE_H0:
        case NDS_DIS_MODE_H1:
        case NDS_DIS_MODE_VH_S0:
        case NDS_DIS_MODE_VH_S1:
        case NDS_DIS_MODE_VH_C0:
        case NDS_DIS_MODE_VH_C1:
        case NDS_DIS_MODE_HH0:
            sub = sh;
            break;
        }
    }
    
    if (nds.pen.img) {
        w = nds.pen.img->w;
        h = nds.pen.img->h;
        s = nds.pen.img->pixels;
    }

    switch(nds.pen.type) {
    case PEN_LT:
        break;
    case PEN_LB:
        y-= (h * scale);
        break;
    case PEN_RT:
        x-= (w * scale);
        break;
    case PEN_RB:
        x-= (w * scale);
        y-= (h * scale);
        break;
    }

    asm ("PLD [%0, #128]"::"r" (s));
    for (c1=0; c1<h; c1++) {
        asm ("PLD [%0, #128]"::"r" (d_565));
        asm ("PLD [%0, #128]"::"r" (d_888));
        for (c0=0; c0<w; c0++) {
            x0 = x1 = (c0 * scale) + x;
            y0 = y1 = (c1 * scale) + (y - sub);

            if (scale == 2) {
                x0+= 1;
                y0+= 1;
            }
            if ((y0 >= 0) && (y0 < sh) && (x0 < sw) && (x0 >= 0)) {
                if (*s) {
                    if (is_565) {
                        r = (*s & 0xf80000) >> 8;
                        g = (*s & 0x00f800) >> 5;
                        b = (*s & 0x0000f8) >> 3;
                        d_565[(y1 * width) + x1] = r | g | b;
                        if (scale == 2) {
                            d_565[((y1 + 0) * width) + (x1 + 1)] = r | g | b;
                            d_565[((y1 + 1) * width) + (x1 + 0)] = r | g | b;
                            d_565[((y1 + 1) * width) + (x1 + 1)] = r | g | b;
                        }
                    }
                    else {
                        d_888[(y1 * width) + x1] = *s;
                        if (scale == 2) {
                            d_888[((y1 + 0) * width) + (x1 + 1)] = r | g | b;
                            d_888[((y1 + 1) * width) + (x1 + 0)] = r | g | b;
                            d_888[((y1 + 1) * width) + (x1 + 1)] = r | g | b;
                        }
                    }
                }
            }
            s+= 1;
        }
    }
    return 0;
}

int GFX_Copy(const void *pixels, SDL_Rect srcrect, SDL_Rect dstrect, int pitch, int alpha, int rotate)
{
    int copy_it = 1;
    MI_U16 u16Fence = 0;

    if (pixels == NULL) {
        return -1;
    }
    
    if (alpha != 0) {
        if (nds.alpha.val > NDS_ALPHA_MAX) {
            nds.alpha.val = 0;
        }

        if (nds.alpha.val > 0) {
            float m0 = (float)nds.alpha.val / 10;
            float m1 = 1.0 - m0;
            uint32_t *d = gfx.tmp.virAddr;
            uint32_t r0 = 0, g0 = 0, b0 = 0;
            uint32_t r1 = 0, g1 = 0, b1 = 0;
            int x = 0, y = 0, ax = 0, ay = 0, sw = 0, sh = 0;
            const uint32_t *s0 = gfx.fb.virAddr + (FB_W * gfx.vinfo.yoffset * FB_BPP);
            const uint16_t *s1_565 = pixels;
            const uint32_t *s1_888 = pixels;
            uint32_t col[] = {
                0x000000, 0xa0a0a0, 0x400000, 0x004000, 0x000040, 0x000000, 0xa0a000, 0x00a0a0
            };
            
            switch (nds.dis_mode) {
            case NDS_DIS_MODE_VH_T0:
                sw = 170;
                sh = 128;
                break;
            case NDS_DIS_MODE_VH_T1:
                sw = srcrect.w;
                sh = srcrect.h;
                break;
            }

            ay = 0;
            for (y=0; y<sh; y++) {
                switch (nds.dis_mode) {
                case NDS_DIS_MODE_VH_T0:
                    if (y && ((y % 2) == 0)) {
                        ay+= 1;
                    }
                    break;
                }

                ax = 0;
                for (x=0; x<sw; x++) {
                    asm ("PLD [%0, #128]"::"r" (s0));
                    if ((nds.alpha.border > 0) && ((y == 0) || (y == (sh - 1)) || (x == 0) || (x == (sw - 1)))) {
                        *d++ = col[nds.alpha.border];
                    }
                    else {
                        switch (nds.dis_mode) {
                        case NDS_DIS_MODE_VH_T0:
                            if (x && ((x % 2) == 0)) {
                                ax+= 1;
                            }
                            break;
                        }

                        if (pitch == 512) {
                            asm ("PLD [%0, #128]"::"r" (s1_565));
                            r1 = (s1_565[((y + ay) * srcrect.w) + x + ax] & 0xf800) >> 8;
                            g1 = (s1_565[((y + ay) * srcrect.w) + x + ax] & 0x07e0) >> 3;
                            b1 = (s1_565[((y + ay) * srcrect.w) + x + ax] & 0x001f) << 3;
                        }
                        else {
                            asm ("PLD [%0, #128]"::"r" (s1_888));
                            r1 = (s1_888[((y + ay) * srcrect.w) + x + ax] & 0xff0000) >> 16;
                            g1 = (s1_888[((y + ay) * srcrect.w) + x + ax] & 0x00ff00) >> 8;
                            b1 = (s1_888[((y + ay) * srcrect.w) + x + ax] & 0x0000ff) >> 0;
                        }
                        
                        switch (nds.alpha.pos % 4) {
                        case 0:
                            r0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x - 1)] & 0x0000ff) >> 0;
                            break;
                        case 1:
                            r0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0x0000ff) >> 0;
                            break;
                        case 2:
                            r0 = (s0[((sh - y - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0x0000ff) >> 0;
                            break;
                        case 3:
                            r0 = (s0[((sh - y - 1) * FB_W) + (sw - x - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y - 1) * FB_W) + (sw - x - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y - 1) * FB_W) + (sw - x - 1)] & 0x0000ff) >> 0;
                            break;
                        }

                        r0 = (uint8_t)((r0 * m0) + (r1 * m1));
                        g0 = (uint8_t)((g0 * m0) + (g1 * m1));
                        b0 = (uint8_t)((b0 * m0) + (b1 * m1));
                        *d++ = ((r0 << 16) | (g0 << 8) | b0);
                    }
                }
            }
            copy_it = 0;
        }
       
        switch (nds.dis_mode) {
        case NDS_DIS_MODE_VH_T0:
            dstrect.w = 170;
            dstrect.h = 128;
            if (nds.alpha.val > 0) {
                srcrect.w = dstrect.w;
                srcrect.h = dstrect.h;
                pitch = srcrect.w * 4;
            }
            break;
        case NDS_DIS_MODE_VH_T1:
            dstrect.w = 256;
            dstrect.h = 192;
            if (nds.alpha.val > 0) {
                srcrect.w = dstrect.w;
                srcrect.h = dstrect.h;
                pitch = srcrect.w * 4;
            }
            break;
        }
        
        switch (nds.alpha.pos % 4) {
        case 0:
            dstrect.x = 0;
            dstrect.y = 480 - dstrect.h;
            break;
        case 1:
            dstrect.x = 640 - dstrect.w;
            dstrect.y = 480 - dstrect.h;
            break;
        case 2:
            dstrect.x = 640 - dstrect.w;
            dstrect.y = 0;
            break;
        case 3:
            dstrect.x = 0;
            dstrect.y = 0;
            break;
        }
    }

    if ((copy_it) && (down_scale)) {
        do {
            if (nds.hres_mode != 0) {
                break;
            }

            if ((srcrect.w != 256) || (srcrect.h != 192)) {
                break;
            }

            if (pitch == 1024) {
                asm volatile (
                    "1:  mov r8, %2             ;"
                    "    add r9, %1, %3         ;"
                    "2:  vldmia %0!, {q8-q11}   ;"
                    "    vdup.32 d31, d23[1]    ;"
                    "    vdup.32 d30, d23[0]    ;"
                    "    vdup.32 d29, d22[1]    ;"
                    "    vdup.32 d28, d22[0]    ;"
                    "    vdup.32 d27, d21[1]    ;"
                    "    vdup.32 d26, d21[0]    ;"
                    "    vdup.32 d25, d20[1]    ;"
                    "    vdup.32 d24, d20[0]    ;"
                    "    vdup.32 d23, d19[1]    ;"
                    "    vdup.32 d22, d19[0]    ;"
                    "    vdup.32 d21, d18[1]    ;"
                    "    vdup.32 d20, d18[0]    ;"
                    "    vdup.32 d19, d17[1]    ;"
                    "    vdup.32 d18, d17[0]    ;"
                    "    vdup.32 d17, d16[1]    ;"
                    "    vdup.32 d16, d16[0]    ;"
                    "    vstmia %1!, {q8-q15}   ;"
                    "    vstmia r9!, {q8-q15}   ;"
                    "    subs r8, #1            ;"
                    "    bne 2b                 ;"
                    "    add %1, %1, %3         ;"
                    "    subs %4, #1            ;"
                    "    bne 1b                 ;"
                    :
                    : "r"(pixels), "r"(gfx.tmp.virAddr), "r"(16), "r"(512 * 4), "r"(192)
                    : "r8", "r9", "q8", "q9", "q10", "q11", "q12", "q13", "q14", "q15", "memory", "cc"
                );

                copy_it = 0;
                srcrect.x = 0;
                srcrect.y = 0;
                srcrect.w = 512;
                srcrect.h = 384;
                pitch = srcrect.w * 4;
            }
            else {
                int x = 0, y = 0;
                uint16_t *s0 = NULL;
                uint16_t *s1 = (uint16_t*)pixels;
                uint16_t *d = (uint16_t*)gfx.tmp.virAddr;

                for (y=0; y<srcrect.h; y++) {
                    s0 = d;
                    for (x=0; x<srcrect.w; x++) {
                        *d++ = *s1;
                        *d++ = *s1++;
                    }
                    neon_memcpy(d, s0, 1024);
                    d+= 512;
                }

                copy_it = 0;
                srcrect.x = 0;
                srcrect.y = 0;
                srcrect.w = 512;
                srcrect.h = 384;
                pitch = srcrect.w * 2;
            }
        } while(0);
    }

    if (copy_it) {
        neon_memcpy(gfx.tmp.virAddr, pixels, srcrect.h * pitch);
    }
    
    gfx.hw.opt.u32GlobalSrcConstColor = 0;
    gfx.hw.opt.eRotate = rotate;
    gfx.hw.opt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
    gfx.hw.opt.eDstDfbBldOp = 0;
    gfx.hw.opt.eDFBBlendFlag = 0;

    gfx.hw.src.rt.s32Xpos = srcrect.x;
    gfx.hw.src.rt.s32Ypos = srcrect.y;
    gfx.hw.src.rt.u32Width = srcrect.w;
    gfx.hw.src.rt.u32Height = srcrect.h;
    gfx.hw.src.surf.u32Width = srcrect.w;
    gfx.hw.src.surf.u32Height = srcrect.h;
    gfx.hw.src.surf.u32Stride = pitch;
    gfx.hw.src.surf.eColorFmt = (pitch / srcrect.w) == 2 ? E_MI_GFX_FMT_RGB565 : E_MI_GFX_FMT_ARGB8888;
    gfx.hw.src.surf.phyAddr = gfx.tmp.phyAddr;
    
    gfx.hw.dst.rt.s32Xpos = 0;
    gfx.hw.dst.rt.s32Ypos = 0;
    gfx.hw.dst.rt.u32Width = FB_W;
    gfx.hw.dst.rt.u32Height = FB_H;
    gfx.hw.dst.rt.s32Xpos = dstrect.x;
    gfx.hw.dst.rt.s32Ypos = dstrect.y;
    gfx.hw.dst.rt.u32Width = dstrect.w;
    gfx.hw.dst.rt.u32Height = dstrect.h;
    gfx.hw.dst.surf.u32Width = FB_W;
    gfx.hw.dst.surf.u32Height = FB_H;
    gfx.hw.dst.surf.u32Stride = FB_W * FB_BPP;
    gfx.hw.dst.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    gfx.hw.dst.surf.phyAddr = gfx.fb.phyAddr + (FB_W * gfx.vinfo.yoffset * FB_BPP);

    MI_SYS_FlushInvCache(gfx.tmp.virAddr, pitch * srcrect.h);
    MI_GFX_BitBlit(&gfx.hw.src.surf, &gfx.hw.src.rt, &gfx.hw.dst.surf, &gfx.hw.dst.rt, &gfx.hw.opt, &u16Fence);
    MI_GFX_WaitAllDone(FALSE, u16Fence);
    
    if ((nds.menu.enable == 0) && (srcrect.w != 800) && ((srcrect.w == 256) || (srcrect.w == 512)) && (nds.overlay.sel < nds.overlay.max)) {
        gfx.hw.src.rt.s32Xpos = 0;
        gfx.hw.src.rt.s32Ypos = 0;
        gfx.hw.src.rt.u32Width = FB_W;
        gfx.hw.src.rt.u32Height = FB_H;

        gfx.hw.dst.rt.s32Xpos = 0;
        gfx.hw.dst.rt.s32Ypos = 0;
        gfx.hw.dst.rt.u32Width = FB_W;
        gfx.hw.dst.rt.u32Height = FB_H;
        gfx.hw.dst.surf.phyAddr = gfx.fb.phyAddr + (FB_W * gfx.vinfo.yoffset * FB_BPP);

        gfx.hw.opt.u32GlobalSrcConstColor = 0xff000000;
        gfx.hw.opt.eRotate = E_MI_GFX_ROTATE_180;
        gfx.hw.opt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
        gfx.hw.opt.eDstDfbBldOp = E_MI_GFX_DFB_BLD_INVSRCALPHA;
        gfx.hw.opt.eDFBBlendFlag = E_MI_GFX_DFB_BLEND_SRC_PREMULTIPLY | E_MI_GFX_DFB_BLEND_COLORALPHA | E_MI_GFX_DFB_BLEND_ALPHACHANNEL;
        MI_GFX_BitBlit(&gfx.hw.overlay.surf, &gfx.hw.overlay.rt, &gfx.hw.dst.surf, &gfx.hw.dst.rt, &gfx.hw.opt, &u16Fence);
        MI_GFX_WaitAllDone(FALSE, u16Fence);
    }
    return 0;
}

void GFX_Flip(void)
{
    ioctl(gfx.fd, FBIOPAN_DISPLAY, &gfx.vinfo);
    gfx.vinfo.yoffset ^= FB_H;
}

int get_font_width(const char *info)
{
    int w = 0, h = 0;

    if (nds.font && info) {
        TTF_SizeUTF8(nds.font, info, &w, &h);
    }
    return w;
}

int get_font_height(const char *info)
{
    int w = 0, h = 0;

    if (nds.font && info) {
        TTF_SizeUTF8(nds.font, info, &w, &h);
    }
    return h;
}

const char *to_lang(const char *p)
{
    const char *info = p;
    int cc = 0, r = 0, len = 0;
    
    if ((nds.lang == NDS_LANG_EN) || (p == NULL)) {
        return p;
    }

    len = strlen(p);
    if ((len == 0) || (len >= MAX_PATH)) {
        return 0;
    }

    for (cc=0; translate[cc]; cc++) {
        if (memcmp((char*)p, translate[cc], len) == 0) {
            r = 1;
            info = &translate[cc][len + 1];
            //printf("Translate \'%s\' as \'%s\'\n", p, info);
            break;
        }
    }

    if (r == 0) {
        //printf("Failed to find the translation: \'%s\'(len=%d)\n", p, len);
        info = p;
    }
    return info;
}

int draw_info(SDL_Surface *dst, const char *info, int x, int y, uint32_t fgcolor, uint32_t bgcolor)
{
    int w = 0, h = 0;
    SDL_Color fg = {0};
    SDL_Rect rt = {0, 0, 0, 0};
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    SDL_Surface *t2 = NULL;

    h = strlen(info);
    if ((nds.font == NULL) || (h == 0) || (h >= MAX_PATH)) {
        return -1;
    }

    fg.r = (fgcolor >> 16) & 0xff;
    fg.g = (fgcolor >> 8) & 0xff;
    fg.b = (fgcolor >> 0) & 0xff;
    TTF_SizeUTF8(nds.font, info, &w, &h);
    t0 = TTF_RenderUTF8_Solid(nds.font, info, fg);
    if (t0) {
        if (dst == NULL) {
            t1 = SDL_CreateRGBSurface(SDL_SWSURFACE, t0->w, t0->h, 32, 0, 0, 0, 0);
            if (t1) {
                SDL_FillRect(t1, &t1->clip_rect, bgcolor);
                SDL_BlitSurface(t0, NULL, t1, NULL);

                t2 = SDL_ConvertSurface(t1, cvt->format, 0);
                if (t2) {
                    rt.x = x;
                    rt.y = y;
                    rt.w = t2->w;
                    rt.h = t2->h;
                    GFX_Copy(t2->pixels, t2->clip_rect, rt, t2->pitch, 0, E_MI_GFX_ROTATE_180);
                    SDL_FreeSurface(t2);
                }
                SDL_FreeSurface(t1);
            }
        }
        else {
            rt.x = x;
            rt.y = y;
            SDL_BlitSurface(t0, NULL, dst, &rt);
        }
        SDL_FreeSurface(t0);
    }
    return 0;
}

int reload_pen(void)
{
    static int pre_sel = -1;

    char buf[MAX_PATH] = {0};
    SDL_Surface *t = NULL;

    if (pre_sel != nds.pen.sel) {
        pre_sel = nds.pen.sel;

        if (nds.pen.img) {
            SDL_FreeSurface(nds.pen.img);
            nds.pen.img = NULL;
        }

        nds.pen.type = PEN_LB;
        if (get_file_path(nds.pen.path, nds.pen.sel, buf, 1) == 0) {
            printf("Pen (%s)\n", buf);
            t = IMG_Load(buf);
            if (t) {
                nds.pen.img = SDL_ConvertSurface(t, cvt->format, 0);
                SDL_FreeSurface(t);

                if (strstr(buf, "_lt")) {
                    nds.pen.type = PEN_LT;
                }
                else if (strstr(buf, "_rt")) {
                    nds.pen.type = PEN_RT;
                }
                else if (strstr(buf, "_rb")) {
                    nds.pen.type = PEN_RB;
                }
                else {
                    nds.pen.type = PEN_LB;
                }
                printf("Pen type %d\n", nds.pen.type);
            }
            else {
                printf("Failed to load pen (%s)\n", buf);
            }
        }
    }
    return 0;
}

int reload_bg(void)
{
    static int pre_sel = -1;
    static int pre_mode = -1;

    char buf[MAX_PATH] = {0};
    SDL_Surface *t = NULL;
    SDL_Rect srt = {0, 0, FB_W, FB_H};
    SDL_Rect drt = {0, 0, FB_W, FB_H};

    if (nds.overlay.sel >= nds.overlay.max) {
        if ((pre_sel != nds.theme.sel) || (pre_mode != nds.dis_mode)) {
            pre_mode = nds.dis_mode;
            pre_sel = nds.theme.sel;

            if (nds.theme.img) {
                SDL_FreeSurface(nds.theme.img);
                nds.theme.img = NULL;
            }

            nds.theme.img = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
            if (nds.theme.img) {
                SDL_FillRect(nds.theme.img, &nds.theme.img->clip_rect, SDL_MapRGB(nds.theme.img->format, 0x00, 0x00, 0x00));

                if (get_dir_path(nds.theme.path, nds.theme.sel, buf) == 0) {
                    switch (nds.dis_mode) {
                    case NDS_DIS_MODE_VH_T0:
                    case NDS_DIS_MODE_VH_T1:
                        return 0;
                    case NDS_DIS_MODE_S0:
                        strcat(buf, "/bg_s0.png");
                        break;
                    case NDS_DIS_MODE_S1:
                        return 0;
                    case NDS_DIS_MODE_V0:
                        strcat(buf, "/bg_v0.png");
                        break;
                    case NDS_DIS_MODE_V1:
                        strcat(buf, "/bg_v1.png");
                        break;
                    case NDS_DIS_MODE_H0:
                        strcat(buf, "/bg_h0.png");
                        break;
                    case NDS_DIS_MODE_H1:
                        strcat(buf, "/bg_h1.png");
                        break;
                    case NDS_DIS_MODE_VH_S0:
                        strcat(buf, "/bg_vh_s0.png");
                        break;
                    case NDS_DIS_MODE_VH_S1:
                        strcat(buf, "/bg_vh_s1.png");
                        break;
                    case NDS_DIS_MODE_VH_C0:
                        strcat(buf, "/bg_vh_c0.png");
                        break;
                    case NDS_DIS_MODE_VH_C1:
                        strcat(buf, "/bg_vh_c1.png");
                        break;
                    case NDS_DIS_MODE_HH0:
                        strcat(buf, "/bg_hh0.png");
                        break;
                    case NDS_DIS_MODE_HRES0:
                        strcat(buf, "/bg_hres0.png");
                        break;
                    }
                    
                    printf("Wallpaper (%s)\n", buf);
                    t = IMG_Load(buf);
                    if (t) {
                        SDL_BlitSurface(t, NULL, nds.theme.img, NULL);
                        SDL_FreeSurface(t);
                    }
                    else {
                        printf("Failed to load wallpaper (%s)\n", buf);
                    }
                    GFX_Copy(nds.theme.img->pixels, srt, drt, nds.theme.img->pitch, 0, E_MI_GFX_ROTATE_180);
                }
            }
        }
        else {
            if (nds.theme.img) {
                GFX_Copy(nds.theme.img->pixels, srt, drt, nds.theme.img->pitch, 0, E_MI_GFX_ROTATE_180);
            }
        }
    }
    else {
        t = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
        if (t) {
            SDL_Rect rt = {0, 0, FB_W, FB_H};

            SDL_FillRect(t, &t->clip_rect, SDL_MapRGB(t->format, 0x00, 0x00, 0x00));
            GFX_Copy(t->pixels, rt, rt, t->pitch, 0, E_MI_GFX_ROTATE_180);
            SDL_FreeSurface(t);
        }
    }
    return 0;
}

int reload_overlay(void)
{
    static int pre_sel = -1;

    char buf[MAX_PATH] = {0};
    SDL_Surface *t = NULL;

    if ((nds.overlay.sel < nds.overlay.max) && (pre_sel != nds.overlay.sel)) {
        pre_sel = nds.overlay.sel;

        if (nds.overlay.img) {
            SDL_FreeSurface(nds.overlay.img);
            nds.overlay.img = NULL;
        }

        nds.overlay.img = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
        if (nds.overlay.img) {
            SDL_FillRect(nds.overlay.img, &nds.overlay.img->clip_rect, SDL_MapRGB(nds.overlay.img->format, 0x00, 0x00, 0x00));

            if (get_file_path(nds.overlay.path, nds.overlay.sel, buf, 1) == 0) {
                printf("Overlay (%s)\n", buf);
                t = IMG_Load(buf);
                if (t) {
                    SDL_BlitSurface(t, NULL, nds.overlay.img, NULL);
                    SDL_FreeSurface(t);

                    gfx.hw.overlay.surf.phyAddr = gfx.overlay.phyAddr;
                    gfx.hw.overlay.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
                    gfx.hw.overlay.surf.u32Width = FB_W;
                    gfx.hw.overlay.surf.u32Height = FB_H;
                    gfx.hw.overlay.surf.u32Stride = FB_W * FB_BPP;
                    gfx.hw.overlay.rt.s32Xpos = 0;
                    gfx.hw.overlay.rt.s32Ypos = 0;
                    gfx.hw.overlay.rt.u32Width = FB_W;
                    gfx.hw.overlay.rt.u32Height = FB_H;
                    neon_memcpy(gfx.overlay.virAddr, nds.overlay.img->pixels, FB_W * FB_H * 4);
                    MI_SYS_FlushInvCache(gfx.overlay.virAddr, FB_W * FB_H * FB_BPP);
                }
                else {
                    printf("Failed to load overlay (%s)\n", buf);
                }
            }
        }
    }
    return 0;
}

static int MMIYOO_Available(void)
{
    const char *envr = SDL_getenv("SDL_VIDEODRIVER");
    if((envr) && (SDL_strcmp(envr, MMIYOO_DRIVER_NAME) == 0)) {
        return 1;
    }
    return 0;
}

static void MMIYOO_DeleteDevice(SDL_VideoDevice *device)
{
    SDL_free(device);
}

int MMIYOO_CreateWindow(_THIS, SDL_Window *window)
{
    SDL_SetMouseFocus(window);
    MMiyooVideoInfo.window = window;
    printf("%s, w:%d, h:%d\n", __func__, window->w, window->h);
    //glUpdateBufferSettings(fb_flip, &fb_idx, fb_vaddr);
    return 0;
}

int MMIYOO_CreateWindowFrom(_THIS, SDL_Window *window, const void *data)
{
    return SDL_Unsupported();
}

static SDL_VideoDevice *MMIYOO_CreateDevice(int devindex)
{
    SDL_VideoDevice *device=NULL;
    SDL_GLDriverData *gldata=NULL;

    if(!MMIYOO_Available()) {
        return (0);
    }

    device = (SDL_VideoDevice *) SDL_calloc(1, sizeof(SDL_VideoDevice));
    if(!device) {
        SDL_OutOfMemory();
        return (0);
    }
    device->is_dummy = SDL_TRUE;

    device->VideoInit = MMIYOO_VideoInit;
    device->VideoQuit = MMIYOO_VideoQuit;
    device->SetDisplayMode = MMIYOO_SetDisplayMode;
    device->PumpEvents = MMIYOO_PumpEvents;
    device->CreateSDLWindow = MMIYOO_CreateWindow;
    device->CreateSDLWindowFrom = MMIYOO_CreateWindowFrom;
    device->CreateWindowFramebuffer = MMIYOO_CreateWindowFramebuffer;
    device->UpdateWindowFramebuffer = MMIYOO_UpdateWindowFramebuffer;
    device->DestroyWindowFramebuffer = MMIYOO_DestroyWindowFramebuffer;

    device->GL_LoadLibrary = glLoadLibrary;
    device->GL_GetProcAddress = glGetProcAddress;
    device->GL_CreateContext = glCreateContext;
    device->GL_SetSwapInterval = glSetSwapInterval;
    device->GL_SwapWindow = glSwapWindow;
    device->GL_MakeCurrent = glMakeCurrent;
    device->GL_DeleteContext = glDeleteContext;
    device->GL_UnloadLibrary = glUnloadLibrary;
    
    gldata = (SDL_GLDriverData*)SDL_calloc(1, sizeof(SDL_GLDriverData));
    if(gldata == NULL) {
        SDL_OutOfMemory();
        SDL_free(device);
        return NULL;
    }
    device->gl_data = gldata;

    device->free = MMIYOO_DeleteDevice;
    return device;
}

VideoBootStrap MMIYOO_bootstrap = {MMIYOO_DRIVER_NAME, "MMIYOO VIDEO DRIVER", MMIYOO_CreateDevice};

int MMIYOO_VideoInit(_THIS)
{
    SDL_DisplayMode mode={0};
    SDL_VideoDisplay display={0};

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 640;
    mode.h = 480;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 640;
    mode.h = 480;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 800;
    mode.h = 480;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 800;
    mode.h = 480;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);
    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 800;
    mode.h = 600;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 800;
    mode.h = 600;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 320;
    mode.h = 240;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 320;
    mode.h = 240;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 480;
    mode.h = 272;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 480;
    mode.h = 272;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_AddVideoDisplay(&display, SDL_FALSE);
    
    GFX_Init();
    read_config();
    MMIYOO_EventInit();

    if (nds.cust_menu) {
        patch_it();
    }

    {
        struct sigaction action;

        memset(&action, 0, sizeof(action));
        action.sa_handler = sigterm;
        sigaction(SIGTERM, &action, NULL);
    }
    return 0;
}

static int MMIYOO_SetDisplayMode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode)
{
    return 0;
}

void MMIYOO_VideoQuit(_THIS)
{
    int cc = 0;

    if (nds.cust_menu) {
        unpatch_it();
    }

    write_config();
    if (cvt) {
        SDL_FreeSurface(cvt);
        cvt = NULL;
    }

    if (fps_info) {
        SDL_FreeSurface(fps_info);
        fps_info = NULL;
    }

    if (nds.pen.img) {
        SDL_FreeSurface(nds.pen.img);
        nds.pen.img = NULL;
    }

    if (nds.theme.img) {
        SDL_FreeSurface(nds.theme.img);
        nds.theme.img = NULL;
    }

    if (nds.overlay.img) {
        SDL_FreeSurface(nds.overlay.img);
        nds.overlay.img = NULL;
    }

    if (nds.menu.bg) {
        SDL_FreeSurface(nds.menu.bg);
        nds.menu.bg = NULL;
    }

    if (nds.menu.cursor) {
        SDL_FreeSurface(nds.menu.cursor);
        nds.menu.cursor = NULL;
    }

    if (nds.menu.drastic.bg) {
        SDL_FreeSurface(nds.menu.drastic.bg);
        nds.menu.drastic.bg = NULL;
    }

    if (nds.menu.drastic.cursor) {
        SDL_FreeSurface(nds.menu.drastic.cursor);
        nds.menu.drastic.cursor = NULL;
    }

    if (nds.menu.drastic.main) {
        SDL_FreeSurface(nds.menu.drastic.main);
        nds.menu.drastic.main = NULL;
    }

    if (nds.menu.drastic.yes) {
        SDL_FreeSurface(nds.menu.drastic.yes);
        nds.menu.drastic.yes = NULL;
    }

    if (nds.menu.drastic.no) {
        SDL_FreeSurface(nds.menu.drastic.no);
        nds.menu.drastic.no = NULL;
    }

    if (nds.font) {
        TTF_CloseFont(nds.font);
        nds.font = NULL;
    }
    TTF_Quit();
    GFX_Quit();
    MMIYOO_EventDeinit();

    for (cc=0; translate[cc]; cc++) {
        free(translate[cc]);
        translate[cc] = NULL;
    }
}

static const char *DIS_MODE0[] = {
    "640*480",
    "640*480",
    "512*384",
    "640*480",
    "256*192",
    "320*240",
    "256*192",
    "320*240",
    "480*360",
    "384*288",
    "384*288",
    "384*288",
    "427*320"
};

static const char *DIS_MODE1[] = {
    "170*128",
    "256*192",
    "",
    "",
    "256*192",
    "320*240",
    "256*192",
    "320*240",
    "160*120",
    "256*192",
    "256*192",
    "256*192",
    "427*320"
};

static const char *POS[] = {
    "Top-Right", "Top-Left", "Bottom-Left", "Bottom-Right"
};

static const char *BORDER[] = {
    "None", "White", "Red", "Green", "Blue", "Black", "Yellow", "Cyan"
};

static const char *DPAD[] = {
    "0°", "90°"
};

int handle_menu(int key)
{
    static int cur_sel = 0;
    static uint32_t cur_cpuclock = 0;
    static uint32_t pre_cpuclock = 0;

    const int SX = 150;
    const int SY = 95;
    const int SSX = 385;
    const int MENU_CPU = 0;
    const int MENU_OVERLAY = 1;
    const int MENU_DIS = 2;
    const int MENU_DIS_ALPHA = 3;
    const int MENU_DIS_BORDER = 4;
    const int MENU_DIS_POSITION = 5;
    const int MENU_ALT = 6;
    const int MENU_DPAD = 7;
    const int MENU_LAST = 7;

    char buf[MAX_PATH] = {0};
    SDL_Rect rt = {0};
    int pre_w = 0;
    int h = get_font_height(" ") + 9;
    uint32_t sel_col = 0xffff00;
    uint32_t unsel_col = 0x666600;
    uint32_t dis_col = 0x666666;
    uint32_t val_col = 0xff0000;
    uint32_t col0 = 0, col1 = 0, dis_mode = 0;

    if (pre_cpuclock == 0) {
        cur_cpuclock = pre_cpuclock = get_cpuclock();
    }
    switch (key) {
    case MYKEY_UP:
        if (cur_sel > 0) {
            cur_sel-= 1;
        }
        break;
    case MYKEY_DOWN:
        if (cur_sel < MENU_LAST) {
            cur_sel+= 1;
        }
        break;
    case MYKEY_LEFT:
        switch(cur_sel) {
        case MENU_CPU:
            if (cur_cpuclock > nds.mincpu) {
                cur_cpuclock-= 50;
            }
            break;
        case MENU_OVERLAY:
            if (nds.overlay.sel > 0) {
                nds.overlay.sel-= 1;
            }
            break;
        case MENU_DIS:
            if (nds.hres_mode == 0) {
                if (nds.dis_mode > 0) {
                    nds.dis_mode-= 1;
                }
            }
            else {
                nds.dis_mode = NDS_DIS_MODE_HRES0;
            }
            break;
        case MENU_DIS_ALPHA:
            if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.val > 0) {
                    nds.alpha.val-= 1;
                }
            }
            break;
        case MENU_DIS_BORDER:
            if ((nds.alpha.val > 0) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.border > 0) {
                    nds.alpha.border-= 1;
                }
            }
            break;
        case MENU_DIS_POSITION:
            if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.pos > 0) {
                    nds.alpha.pos-= 1;
                }
            }
            break;
        case MENU_ALT:
            if (nds.alt_mode > 0) {
                nds.alt_mode-= 1;
            }
            break;
        case MENU_DPAD:
            nds.dpad_90d = 0;
            break;
        }
        break;
    case MYKEY_RIGHT:
        switch(cur_sel) {
        case MENU_CPU:
            if (cur_cpuclock < nds.maxcpu) {
                cur_cpuclock+= 50;
            }
            break;
        case MENU_OVERLAY:
            if (nds.overlay.sel < nds.overlay.max) {
                nds.overlay.sel+= 1;
            }
            break;
        case MENU_DIS:
            if (nds.hres_mode == 0) {
                if (nds.dis_mode < NDS_DIS_MODE_LAST) {
                    nds.dis_mode+= 1;
                }
            }
            else {
                nds.dis_mode = NDS_DIS_MODE_HRES1;
            }
            break;
        case MENU_DIS_ALPHA:
            if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.val < NDS_ALPHA_MAX) {
                    nds.alpha.val+= 1;
                }
            }
            break;
        case MENU_DIS_BORDER:
            if ((nds.alpha.val > 0) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.border < NDS_BORDER_MAX) {
                    nds.alpha.border+= 1;
                }
            }
            break;
        case MENU_DIS_POSITION:
            if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.pos < 3) {
                    nds.alpha.pos+= 1;
                }
            }
            break;
        case MENU_ALT:
            if (nds.alt_mode < NDS_DIS_MODE_LAST) {
                nds.alt_mode+= 1;
            }
            break;
        case MENU_DPAD:
            nds.dpad_90d = 1;
            break;
        }
        break;
    case MYKEY_B:
        if (cur_cpuclock != pre_cpuclock) {
            set_cpuclock(cur_cpuclock);
            pre_cpuclock = cur_cpuclock;
        }
        nds.menu.enable = 0;
        return 0;
    }

    dis_mode = nds.dis_mode;
    SDL_BlitSurface(nds.menu.bg, NULL, cvt, NULL);

    if (cur_sel == MENU_CPU) {
        col0 = sel_col;
        col1 = val_col;
    }
    else {
        col0 = unsel_col;
        col1 = unsel_col;
    }
    draw_info(cvt, to_lang("CPU"), SX, SY + (h * MENU_CPU), col0, 0);
    sprintf(buf, "%dMHz", cur_cpuclock);
    draw_info(cvt, buf, SSX, SY + (h * MENU_CPU), col1, 0);

    if (cur_sel == MENU_OVERLAY) {
        col0 = sel_col;
        col1 = val_col;
    }
    else {
        col0 = unsel_col;
        col1 = unsel_col;
    }
    draw_info(cvt, to_lang("Overlay"), SX, SY + (h * MENU_OVERLAY), col0, 0);
    if (nds.overlay.sel < nds.overlay.max) {
        get_file_path(nds.overlay.path, nds.overlay.sel, buf, 0);
        reload_overlay();
    }
    else {
        sprintf(buf, to_lang("None"));
    }
    draw_info(cvt, buf, SSX, SY + (h * MENU_OVERLAY), col1, 0);

    if (cur_sel == MENU_DIS) {
        col0 = sel_col;
        col1 = val_col;
    }
    else {
        col0 = unsel_col;
        col1 = unsel_col;
    }
    draw_info(cvt, to_lang("Display"), SX, SY + (h * MENU_DIS), col0, 0);
    if (nds.hres_mode == 0) {
        sprintf(buf, "[%02d] %s", nds.dis_mode, DIS_MODE0[nds.dis_mode]);
    }
    else {
        sprintf(buf, "[%02d] %s", nds.dis_mode, nds.dis_mode == NDS_DIS_MODE_HRES0 ? "512*384" : "640*480");
    }
    pre_w = get_font_width(buf);
    draw_info(cvt, buf, SSX, SY + (h * MENU_DIS), col1, 0);
    if (nds.hres_mode == 0) {
        sprintf(buf, "%s", DIS_MODE1[nds.dis_mode]);
    }
    draw_info(cvt, buf, SSX + (pre_w - get_font_width(buf)), SY + (h * (MENU_DIS + 1)), col1, 0);

    if ((cur_sel == MENU_DIS_ALPHA) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
        col0 = sel_col;
        col1 = val_col;
    }
    else {
        if ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1)) {
            col0 = unsel_col;
            col1 = unsel_col;
        }
        else {
            col0 = dis_col;
            col1 = dis_col;
        }
    }
    draw_info(cvt, to_lang("Alpha"), SX + 20, SY + (h * MENU_DIS_ALPHA), col0, 0);
    sprintf(buf, "%d", nds.alpha.val);
    draw_info(cvt, buf, SSX, SY + (h * MENU_DIS_ALPHA), col1, 0);
    
    if ((cur_sel == MENU_DIS_BORDER) && (nds.alpha.val > 0) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
        col0 = sel_col;
        col1 = val_col;
    }
    else {
        if ((nds.alpha.val > 0) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
            col0 = unsel_col;
            col1 = unsel_col;
        }
        else {
            col0 = dis_col;
            col1 = dis_col;
        }
    }
    draw_info(cvt, to_lang("Border"), SX + 20, SY + (h * MENU_DIS_BORDER), col0, 0);
    sprintf(buf, "%s", to_lang(BORDER[nds.alpha.border]));
    draw_info(cvt, buf, SSX, SY + (h * MENU_DIS_BORDER), col1, 0);
    
    if ((cur_sel == MENU_DIS_POSITION) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
        col0 = sel_col;
        col1 = val_col;
    }
    else {
        if ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1)) {
            col0 = unsel_col;
            col1 = unsel_col;
        }
        else {
            col0 = dis_col;
            col1 = dis_col;
        }
    }
    draw_info(cvt, to_lang("Position"), SX + 20, SY + (h * MENU_DIS_POSITION), col0, 0);
    sprintf(buf, "%s", to_lang(POS[nds.alpha.pos]));
    draw_info(cvt, buf, SSX, SY + (h * MENU_DIS_POSITION), col1, 0);
    
    if (cur_sel == MENU_ALT) {
        col0 = sel_col;
        col1 = val_col;
        dis_mode = nds.alt_mode;
    }
    else {
        col0 = unsel_col;
        col1 = unsel_col;
    }
    draw_info(cvt, to_lang("Alt. Display"), SX, SY + (h * MENU_ALT), col0, 0);
    sprintf(buf, "[%02d] %s", nds.alt_mode, DIS_MODE0[nds.alt_mode]);
    pre_w = get_font_width(buf);
    draw_info(cvt, buf, SSX, SY + (h * MENU_ALT), col1, 0);
    if (nds.hres_mode == 0) {
        sprintf(buf, "%s", DIS_MODE1[nds.alt_mode]);
    }
    draw_info(cvt, buf, SSX + (pre_w - get_font_width(buf)), SY + (h * (MENU_ALT + 1)), col1, 0);

    if (cur_sel == MENU_DPAD) {
        col0 = sel_col;
        col1 = val_col;
    }
    else {
        col0 = unsel_col;
        col1 = unsel_col;
    }
    draw_info(cvt, to_lang("DPAD"), SX, SY + (h * MENU_DPAD), col0, 0);
    sprintf(buf, "%s", DPAD[nds.dpad_90d % 2]);
    draw_info(cvt, buf, SSX, SY + (h * MENU_DPAD), col1, 0);

    if ((cur_sel == MENU_OVERLAY) && (nds.overlay.sel < nds.overlay.max) && (nds.overlay.img)) {
        rt.x = 450;
        rt.y = 360;
        rt.w = 128;
        rt.h = 96;
        SDL_SoftStretch(nds.overlay.img, NULL, cvt, &rt);
    }
    else {
        switch (dis_mode) {
        case NDS_DIS_MODE_VH_T0:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
           
            rt.w = 34;
            rt.h = 26;
            switch (nds.alpha.pos) {
            case 0:
                rt.x = (450 + 128) - rt.w;
                rt.y = 360;
                break;
            case 1:
                rt.x = 450;
                rt.y = 360;
                break;
            case 2:
                rt.x = 450;
                rt.y = (360 + 96) - rt.h;
                break;
            case 3:
                rt.x = (450 + 128) - rt.w;
                rt.y = (360 + 96) - rt.h;
                break;
            }
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, (30 * nds.alpha.val)));
            break;
        case NDS_DIS_MODE_VH_T1:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
           
            rt.w = 51;
            rt.h = 38;
            switch (nds.alpha.pos) {
            case 0:
                rt.x = (450 + 128) - rt.w;
                rt.y = 360;
                break;
            case 1:
                rt.x = 450;
                rt.y = 360;
                break;
            case 2:
                rt.x = 450;
                rt.y = (360 + 96) - rt.h;
                break;
            case 3:
                rt.x = (450 + 128) - rt.w;
                rt.y = (360 + 96) - rt.h;
                break;
            }
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, (30 * nds.alpha.val)));
            break;
        case NDS_DIS_MODE_S0:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 76;
            rt.x = 450 + ((128 - rt.w) / 2);
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_S1:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_V0:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = 450 + ((128 - rt.w) / 2);
            rt.y = 360 + ((96 - (rt.h * 2)) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = 450 + ((128 - rt.w) / 2);
            rt.y = 360 + ((96 - (rt.h * 2)) / 2) + rt.h;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_V1:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = 450 + ((128 - rt.w) / 2);
            rt.y = 360 + ((96 - (rt.h * 2)) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = 450 + ((128 - rt.w) / 2);
            rt.y = 360 + ((96 - (rt.h * 2)) / 2) + rt.h;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_H0:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = 450 + ((128 - (rt.w * 2)) / 2);
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = 450 + ((128 - (rt.w * 2)) / 2) + rt.w;
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_H1:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = 450 + ((128 - (rt.w * 2)) / 2);
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = 450 + ((128 - (rt.w * 2)) / 2) + rt.w;
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S0:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 96;
            rt.h = 72;
            rt.x = 450;
            rt.y = 360;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 32;
            rt.h = 24;
            rt.x = 450 + (128 - rt.w);
            rt.y = 360 + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S1:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 77;
            rt.h = 58;
            rt.x = 450;
            rt.y = 360;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = 450 + (128 - rt.w);
            rt.y = 360 + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_C0:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 77;
            rt.h = 58;
            rt.x = 450 + ((128 - rt.w) / 2);
            rt.y = 360;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = 450 + ((128 - rt.w) / 2);
            rt.y = 360 + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_C1:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 77;
            rt.h = 58;
            rt.x = 450;
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = 450 + (128 - rt.w);
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_HH0:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 64;
            rt.h = 85;
            rt.x = 450;
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 64;
            rt.h = 85;
            rt.x = 450 + (128 - rt.w);
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_HRES0:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 76;
            rt.x = 450 + ((128 - rt.w) / 2);
            rt.y = 360 + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_HRES1:
            rt.x = 450;
            rt.y = 360;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        }
    }

    rt.x = SX - 60;
    rt.y = SY + (h * cur_sel) - (nds.menu.cursor->h / 3) - 2;
    SDL_BlitSurface(nds.menu.cursor, NULL, cvt, &rt);

    GFX_Copy(cvt->pixels, cvt->clip_rect, cvt->clip_rect, cvt->pitch, 0, E_MI_GFX_ROTATE_180);
    GFX_Flip();
    need_reload_bg = RELOAD_BG_COUNT;
    return 0;
}

#endif

