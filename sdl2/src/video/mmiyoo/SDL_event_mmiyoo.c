/*
  Special customized version for the DraStic emulator that runs on
      Miyoo Mini (Plus)
      TRIMUI-SMART
      Miyoo A30
      Anbernic RG28XX
      Fxtec Pro1 (QX1000)

  Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>
  Copyright (C) 2022-2024 Steward Fu <steward.fu@gmail.com>

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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <dirent.h>
#include <linux/input.h>

#ifdef RG28XX
#include <alsa/asoundlib.h>
#endif

#include "../../SDL_internal.h"
#include "../../events/SDL_events_c.h"
#include "../../core/linux/SDL_evdev.h"
#include "../../thread/SDL_systhread.h"

#include "SDL_video_mmiyoo.h"
#include "SDL_event_mmiyoo.h"

#if defined(PANDORA)
    #define INPUT_DEV "/dev/input/event4"
#elif defined(QX1000) || defined(A30)
    #define INPUT_DEV "/dev/input/event3"
#elif defined(RG28XX)
    #define INPUT_DEV "/dev/input/event1"
#else
    #define INPUT_DEV "/dev/input/event0"
#endif

#ifdef UNITTEST
    #define UP      1
    #define DOWN    2
    #define LEFT    3
    #define RIGHT   4
    #define A       5
    #define B       6
    #define X       7
    #define Y       8
    #define L1      9
    #define L2      10
    #define R1      11
    #define R2      12
    #define START   13
    #define SELECT  14
    #define MENU    15
    #define VOLUP   16
    #define VOLDOWN 17
#endif

#ifdef RG28XX
    #define UP      103
    #define DOWN    108
    #define LEFT    105
    #define RIGHT   106
    #define A       57
    #define B       29
    #define X       42
    #define Y       56
    #define L1      15
    #define L2      18
    #define R1      14
    #define R2      20
    #define START   28
    #define SELECT  97
    #define MENU    1
    #define VOLUP   115
    #define VOLDOWN 114
#endif

#ifdef A30
    #define UP      103
    #define DOWN    108
    #define LEFT    105
    #define RIGHT   106
    #define A       57
    #define B       29
    #define X       42
    #define Y       56
    #define L1      15
    #define L2      18
    #define R1      14
    #define R2      20
    #define START   28
    #define SELECT  97
    #define MENU    1
    #define VOLUP   115
    #define VOLDOWN 114
#endif

#ifdef MMIYOO
    #define UP      103
    #define DOWN    108
    #define LEFT    105
    #define RIGHT   106
    #define A       57
    #define B       29
    #define X       42
    #define Y       56
    #define L1      18
    #define L2      15
    #define R1      20
    #define R2      14
    #define START   28
    #define SELECT  97
    #define MENU    1
    #define POWER   116
    #define VOLUP   115
    #define VOLDOWN 114
#endif

#ifdef TRIMUI
    #define UP      103
    #define DOWN    108
    #define LEFT    105
    #define RIGHT   106
    #define A       57
    #define B       29
    #define X       42
    #define Y       56
    #define L1      15
    #define R1      14
    #define START   28
    #define SELECT  97
    #define MENU    1
#endif

#ifdef PANDORA
    #define UP      103
    #define DOWN    108
    #define LEFT    105
    #define RIGHT   106
    #define A       107
    #define B       109
    #define X       104
    #define Y       102
    #define L1      54
    #define R1      97
    #define START   56
    #define SELECT  29
    #define MENU    139
#endif

#ifdef QX1000
    #define UP      16 // 'Q'
    #define DOWN    30 // 'A'
    #define LEFT    43 // '\'
    #define RIGHT   31 // 'S'
    #define A       38 // 'L'
    #define B       37 // 'K'
    #define X       25 // 'P'
    #define Y       24 // 'O'
    #define R1      17 // 'W'
    #define R10     51 // ','
    #define R2      28 // 'Enter'
    #define L1      41 // '`'
    #define L10     50 // 'M'
    #define L2      15 // 'Tab'
    #define SELECT  53 // '/'
    #define START   29 // 'RCTRL'
    #define MENU    57 // ' '
    #define QSAVE   46 // 'C'
    #define QLOAD   49 // 'N'
    #define EXIT    1  // 'ESC'
#endif

MMIYOO_EventInfo evt = {0};

extern GFX gfx;
extern NDS nds;
extern MMIYOO_VideoInfo vid;
extern int pixel_filter;

static int running = 0;
static int event_fd = -1;
static int lower_speed = 0;
#ifdef MMIYOO
static int is_stock_os = 0;
#endif
static SDL_sem *event_sem = NULL;
static SDL_Thread *thread = NULL;

extern int FB_W;
extern int FB_H;
extern int g_lastX;
extern int g_lastY;

#ifdef TRIMUI
typedef struct _cust_key_t {
    int fd;
    uint8_t *mem;
    uint32_t *gpio;
    uint32_t pre_cfg;
} cust_key_t;

static cust_key_t cust_key = {0};
#endif

const SDL_Scancode code[]={
    SDLK_UP,            // UP
    SDLK_DOWN,          // DOWN
    SDLK_LEFT,          // LEFT
    SDLK_RIGHT,         // RIGHT
    SDLK_SPACE,         // A
    SDLK_LCTRL,         // B
    SDLK_LSHIFT,        // X
    SDLK_LALT,          // Y
    SDLK_e,             // L1
    SDLK_t,             // R1
    SDLK_TAB,           // L2
    SDLK_BACKSPACE,     // R2
    SDLK_RCTRL,         // SELECT
    SDLK_RETURN,        // START
    SDLK_HOME,          // MENU
    SDLK_0,             // QUICK SAVE
    SDLK_1,             // QUICK LOAD
    SDLK_2,             // FAST FORWARD
    SDLK_3,             // EXIT
    SDLK_HOME,          // MENU (Onion system)
};

int volume_inc(void);
int volume_dec(void);

#ifdef RG28XX
static int volume = 16;

static int set_volume(void)
{
    char buf[255] = {0};

    sprintf(buf, "amixer set \'lineout volume\' %d", volume);
    system(buf);
    return 0;
}

int volume_inc(void)
{
    if (volume < 31) {
        volume += 2;
        if (volume > 31) {
            volume = 31;
        }
        set_volume();
    }
    return volume;
}

int volume_dec(void)
{
    if (volume > 0) {
        volume -= 2;
        if (volume < 0) {
            volume = 0;
        }
        set_volume();
    }
    return volume;
}
#endif

static void check_mouse_pos(void)
{
    if (evt.mouse.x < 0) {
        evt.mouse.x = 0;
    }
    if (evt.mouse.x >= evt.mouse.maxx) {
        evt.mouse.x = evt.mouse.maxx;
    }
    if (evt.mouse.y < 0) {
        evt.mouse.y = 0;
    }
    if (evt.mouse.y > evt.mouse.maxy) {
        evt.mouse.y = evt.mouse.maxy;
    }
}

static int is_hh_mode(void)
{
    if ((nds.dis_mode == NDS_DIS_MODE_HH0) ||
        (nds.dis_mode == NDS_DIS_MODE_HH1) ||
        (nds.dis_mode == NDS_DIS_MODE_HH2) ||
        (nds.dis_mode == NDS_DIS_MODE_HH3))
    {
        return 1;
    }
    return 0;
}

static int get_move_interval(int type)
{
    float move = 0.0;
    long yv = nds.pen.yv;
    long xv = nds.pen.xv;

    if (lower_speed) {
        yv*= 2;
        xv*= 2;
    }

    if (is_hh_mode()) {
        move = ((float)clock() - nds.pen.pre_ticks) / ((type == 0) ? yv : xv);
    }
    else {
        move = ((float)clock() - nds.pen.pre_ticks) / ((type == 0) ? xv : yv);
    }

    if (move <= 0.0) {
        move = 1.0;
    }
    return (int)(1.0 * move);
}

static void release_all_keys(void)
{
    int cc = 0;

    for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
        if (evt.keypad.cur_keys & 1) {
            SDL_SendKeyboardKey(SDL_RELEASED, SDL_GetScancodeFromKey(code[cc]));
        }
        evt.keypad.cur_keys>>= 1;
    }
}

static int hit_hotkey(uint32_t bit)
{
#if defined(MMIYOO) || defined(A30) || defined(RG28XX) || defined(UNITTEST)
    uint32_t mask = (1 << bit) | (1 << ((nds.hotkey == HOTKEY_BIND_SELECT) ? MYKEY_SELECT : MYKEY_MENU));
#endif

#if defined(TRIMUI) || defined(PANDORA)
    uint32_t mask = (1 << bit) | (1 << MYKEY_MENU);
#endif

#ifdef QX1000
    uint32_t mask = (1 << bit) | (1 << MYKEY_MENU);
#endif

    return (evt.keypad.cur_keys ^ mask) ? 0 : 1;
}

static void set_key(uint32_t bit, int val)
{
    if (val) {
#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000)
        if (bit == MYKEY_MENU) {
            evt.keypad.cur_keys = (1 << MYKEY_MENU);
        }
#endif

#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
        if (nds.hotkey == HOTKEY_BIND_SELECT) {
            if (bit == MYKEY_SELECT) {
                evt.keypad.cur_keys = (1 << MYKEY_SELECT);
            }
        }
        else {
            if (bit == MYKEY_MENU) {
                evt.keypad.cur_keys = (1 << MYKEY_MENU);
            }
        }
#endif
        evt.keypad.cur_keys|= (1 << bit);
    }
    else {
        evt.keypad.cur_keys &= ~(1 << bit);
    }
}

#if defined(A30) && USE_MYJOY
static int update_joystick(void)
{
    const int LTH = -30;
    const int RTH = 30;
    const int UTH = -30;
    const int DTH = 30;

    static int pre_x = -1;
    static int pre_y = -1;

    int r = 0;

    if (nds.joy.mode == MYJOY_MODE_KEYPAD) {
        static int pre_up = 0;
        static int pre_down = 0;
        static int pre_left = 0;
        static int pre_right = 0;

        uint32_t u_key = MYKEY_UP;
        uint32_t d_key = MYKEY_DOWN;
        uint32_t l_key = MYKEY_LEFT;
        uint32_t r_key = MYKEY_RIGHT;

        if (g_lastX != pre_x) {
            pre_x = g_lastX;
            if (pre_x < LTH) {
                if (pre_left == 0) {
                    r = 1;
                    pre_left = 1;
                    set_key(l_key, 1);
                }
            }
            else if (pre_x > RTH){
                if (pre_right == 0) {
                    r = 1;
                    pre_right = 1;
                    set_key(r_key, 1);
                }
            }
            else {
                if (pre_left != 0) {
                    r = 1;
                    pre_left = 0;
                    set_key(l_key, 0);
                }
                if (pre_right != 0) {
                    r = 1;
                    pre_right = 0;
                    set_key(r_key, 0);
                }
            }
        }

        if (g_lastY != pre_y) {
            pre_y = g_lastY;
            if (pre_y < UTH) {
                if (pre_up == 0) {
                    r = 1;
                    pre_up = 1;
                    set_key(u_key, 1);
                }
            }
            else if (pre_y > DTH){
                if (pre_down == 0) {
                    r = 1;
                    pre_down = 1;
                    set_key(d_key, 1);
                }
            }
            else {
                if (pre_up != 0) {
                    r = 1;
                    pre_up = 0;
                    set_key(u_key, 0);
                }
                if (pre_down != 0) {
                    r = 1;
                    pre_down = 0;
                    set_key(d_key, 0);
                }
            }
        }
    }
    else if (nds.joy.mode == MYJOY_MODE_STYLUS) {
        static int pre_up = 0;
        static int pre_down = 0;
        static int pre_left = 0;
        static int pre_right = 0;

        if (g_lastX != pre_x) {
            pre_x = g_lastX;
            if (pre_x < LTH) {
                if (pre_left == 0) {
                    pre_left = 1;
                }
            }
            else if (pre_x > RTH){
                if (pre_right == 0) {
                    pre_right = 1;
                }
            }
            else {
                if (pre_left != 0) {
                    pre_left = 0;
                }
                if (pre_right != 0) {
                    pre_right = 0;
                }
            }
        }

        if (g_lastY != pre_y) {
            pre_y = g_lastY;
            if (pre_y < UTH) {
                if (pre_up == 0) {
                    pre_up = 1;
                }
            }
            else if (pre_y > DTH){
                if (pre_down == 0) {
                    pre_down = 1;
                }
            }
            else {
                if (pre_up != 0) {
                    pre_up = 0;
                }
                if (pre_down != 0) {
                    pre_down = 0;
                }
            }
        }

        if (pre_up || pre_down || pre_left || pre_right) {
            if (evt.keypad.cur_keys &  (1 << MYKEY_Y)) {
                if (pre_right) {
                    static int cc = 0;

                    if (cc == 0) {
                        nds.pen.sel+= 1;
                        if (nds.pen.sel >= nds.pen.max) {
                            nds.pen.sel = 0;
                        }
                        reload_pen();
                        cc = 30;
                    }
                    else {
                        cc -= 1;
                    }
                }
            }
            else {
                int x = 0;
                int y = 0;
                const int v = MYJOY_MOVE_SPEED;

                if (is_hh_mode() && (nds.keys_rotate == 0)) {
                    if (pre_down) {
                        evt.mouse.x -= v;
                    }
                    if (pre_up) {
                        evt.mouse.x += v;
                    }
                    if (pre_left) {
                        evt.mouse.y -= v;
                    }
                    if (pre_right) {
                        evt.mouse.y += v;
                    }
                }
                else {
                    if (pre_left) {
                        evt.mouse.x -= v;
                    }
                    if (pre_right) {
                        evt.mouse.x += v;
                    }
                    if (pre_up) {
                        evt.mouse.y -= v;
                    }
                    if (pre_down) {
                        evt.mouse.y += v;
                    }
                }
                check_mouse_pos();

                x = (evt.mouse.x * 160) / evt.mouse.maxx;
                y = (evt.mouse.y * 120) / evt.mouse.maxy;
                SDL_SendMouseMotion(vid.window, 0, 0, x + 80, y + (nds.pen.pos ? 120 : 0));
            }
            nds.joy.show_cnt = MYJOY_SHOW_CNT;
        }
    }
    else if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
        static int pre_up = 0;
        static int pre_down = 0;
        static int pre_left = 0;
        static int pre_right = 0;

        uint32_t u_key = nds.joy.cuskey[0];
        uint32_t d_key = nds.joy.cuskey[1];
        uint32_t l_key = nds.joy.cuskey[2];
        uint32_t r_key = nds.joy.cuskey[3];

        if (g_lastX != pre_x) {
            pre_x = g_lastX;
            if (pre_x < LTH) {
                if (pre_left == 0) {
                    r = 1;
                    pre_left = 1;
                    set_key(l_key, 1);
                }
            }
            else if (pre_x > RTH){
                if (pre_right == 0) {
                    r = 1;
                    pre_right = 1;
                    set_key(r_key, 1);
                }
            }
            else {
                if (pre_left != 0) {
                    r = 1;
                    pre_left = 0;
                    set_key(l_key, 0);
                }
                if (pre_right != 0) {
                    r = 1;
                    pre_right = 0;
                    set_key(r_key, 0);
                }
            }
        }

        if (g_lastY != pre_y) {
            pre_y = g_lastY;
            if (pre_y < UTH) {
                if (pre_up == 0) {
                    r = 1;
                    pre_up = 1;
                    set_key(u_key, 1);
                }
            }
            else if (pre_y > DTH){
                if (pre_down == 0) {
                    r = 1;
                    pre_down = 1;
                    set_key(d_key, 1);
                }
            }
            else {
                if (pre_up != 0) {
                    r = 1;
                    pre_up = 0;
                    set_key(u_key, 0);
                }
                if (pre_down != 0) {
                    r = 1;
                    pre_down = 0;
                    set_key(d_key, 0);
                }
            }
        }
    }
    return r;
}
#endif

static int handle_hotkey(void)
{
    int hotkey_mask = 0;
#ifdef TRIMUI
    char buf[MAX_PATH << 1] = {0};
#endif

    hotkey_mask = 1;
    if (nds.menu.enable || nds.menu.drastic.enable) {
        hotkey_mask = 0;
    }

    if (hotkey_mask && hit_hotkey(MYKEY_UP)) {
#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX)
        if (evt.mode == MMIYOO_MOUSE_MODE) {
            switch (nds.dis_mode) {
            case NDS_DIS_MODE_VH_T0:
            case NDS_DIS_MODE_VH_T1:
            case NDS_DIS_MODE_S0:
            case NDS_DIS_MODE_S1:
                break;
            default:
                nds.pen.pos = 1;
                break;
            }
        }
#ifdef A30
        if (nds.joy.mode == MYJOY_MODE_STYLUS) {
            nds.pen.pos = 1;
        }
#endif
#endif
        set_key(MYKEY_UP, 0);
    }

    if (hotkey_mask && hit_hotkey(MYKEY_DOWN)) {
#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX)
        if (evt.mode == MMIYOO_MOUSE_MODE) {
            switch (nds.dis_mode) {
            case NDS_DIS_MODE_VH_T0:
            case NDS_DIS_MODE_VH_T1:
            case NDS_DIS_MODE_S0:
            case NDS_DIS_MODE_S1:
                break;
            default:
                nds.pen.pos = 0;
                break;
            }
        }
#ifdef A30
        if (nds.joy.mode == MYJOY_MODE_STYLUS) {
            nds.pen.pos = 0;
        }
#endif
#endif
        set_key(MYKEY_DOWN, 0);
    }

    if (hotkey_mask && hit_hotkey(MYKEY_LEFT)) {
#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
        if (nds.hres_mode == 0) {
            if (nds.dis_mode > 0) {
                nds.dis_mode -= 1;
            }
        }
        else {
            nds.dis_mode = NDS_DIS_MODE_HRES0;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA)
        if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0)) {
            evt.mode = (evt.mode == MMIYOO_KEYPAD_MODE) ? MMIYOO_MOUSE_MODE : MMIYOO_KEYPAD_MODE;

            if (evt.mode == MMIYOO_MOUSE_MODE) {
                release_all_keys();
            }
            lower_speed = 0;
        }
#endif
        set_key(MYKEY_LEFT, 0);
    }

    if (hotkey_mask && hit_hotkey(MYKEY_RIGHT)) {
#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
        if (nds.hres_mode == 0) {
            if (nds.dis_mode < NDS_DIS_MODE_LAST) {
                nds.dis_mode += 1;
            }
        }
        else {
            nds.dis_mode = NDS_DIS_MODE_HRES1;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA)
        set_key(MYKEY_R2, 1);
#endif
        set_key(MYKEY_RIGHT, 0);
    }

    if (hotkey_mask && hit_hotkey(MYKEY_A)) {
#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
        if ((evt.mode == MMIYOO_KEYPAD_MODE) && (nds.hres_mode == 0)) {
            uint32_t tmp = nds.alt_mode;
            nds.alt_mode = nds.dis_mode;
            nds.dis_mode = tmp;
        }
#endif

#ifdef TRIMUI
        nds.dis_mode = (nds.dis_mode == NDS_DIS_MODE_S0) ? NDS_DIS_MODE_S1 : NDS_DIS_MODE_S0;
        disp_resize();
#endif
        set_key(MYKEY_A, 0);
    }

    if (hotkey_mask && hit_hotkey(MYKEY_B)) {
#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
        pixel_filter = pixel_filter ? 0 : 1;
#endif
        set_key(MYKEY_B, 0);
    }

    if (hit_hotkey(MYKEY_X)) {
#ifdef TRIMUI
        int w = FB_W;
        int h = FB_H;
        int pitch = FB_W * FB_BPP;
        uint32_t *dst = NULL;
        SDL_Surface *p = NULL;
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);

        // for MMIYOO
        // dst = (uint32_t *)gfx.fb.virAddr + (w * (gfx.vinfo.yoffset ? 0 : h));
        dst = (uint32_t *)gfx.hw.ion.vadd + (w * h * (gfx.fb.flip ? 0 : 1));

        if (nds.dis_mode == NDS_DIS_MODE_S0) {
            w = NDS_H;
            h = NDS_W;
        }
        else {
            w = FB_H;
            h = FB_W;
        }
        pitch = FB_H * FB_BPP;

        if (dst) {
            p = SDL_CreateRGBSurfaceFrom(dst, w, h, 32, pitch, 0, 0, 0, 0);
            if (p) {
                sprintf(buf, "%s/%02d%02d%02d.png", nds.shot.path, tm.tm_hour, tm.tm_min, tm.tm_sec);
                IMG_SavePNG(p, buf);
                SDL_FreeSurface(p);
                printf(PREFIX"Saved \'%s\'\n", buf);
            }
        }
        nds.shot.take = 1;
#endif
        set_key(MYKEY_X, 0);
    }

    if (hit_hotkey(MYKEY_Y)) {
        if (hotkey_mask) {
            if (evt.mode == MMIYOO_KEYPAD_MODE) {
                if ((nds.overlay.sel >= nds.overlay.max) &&
                    (nds.dis_mode != NDS_DIS_MODE_VH_T0) &&
                    (nds.dis_mode != NDS_DIS_MODE_VH_T1) &&
                    (nds.dis_mode != NDS_DIS_MODE_S1) &&
                    (nds.dis_mode != NDS_DIS_MODE_HRES1))
                {
                    nds.theme.sel+= 1;
                    if (nds.theme.sel > nds.theme.max) {
                        nds.theme.sel = 0;
                    }
                }
            }
            else {
                nds.pen.sel+= 1;
                if (nds.pen.sel >= nds.pen.max) {
                    nds.pen.sel = 0;
                }
                reload_pen();
            }
        }
        else {
            nds.menu.sel+= 1;
            if (nds.menu.sel >= nds.menu.max) {
                nds.menu.sel = 0;
            }
            reload_menu();

            if (nds.menu.drastic.enable) {
                SDL_SendKeyboardKey(SDL_PRESSED, SDLK_e);
                usleep(100000);
                SDL_SendKeyboardKey(SDL_RELEASED, SDLK_e);
            }
        }
        set_key(MYKEY_Y, 0);
    }

    if (hotkey_mask && hit_hotkey(MYKEY_START)) {
#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX)
        if (nds.menu.enable == 0) {
#ifdef QX1000
            update_wayland_res(640, 480);
#endif
            nds.menu.enable = 1;
            usleep(100000);
            handle_menu(-1);
            evt.keypad.pre_keys = evt.keypad.cur_keys = 0;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000)
        set_key(MYKEY_EXIT, 1);
#endif
        set_key(MYKEY_START, 0);
    }

#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
    if (nds.hotkey == HOTKEY_BIND_MENU) {
        if (hotkey_mask && hit_hotkey(MYKEY_SELECT)) {
            set_key(MYKEY_MENU_ONION, 1);
            set_key(MYKEY_SELECT, 0);
        }
    }
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000)
    if (hotkey_mask && hit_hotkey(MYKEY_SELECT)) {
        set_key(MYKEY_MENU_ONION, 1);
        set_key(MYKEY_SELECT, 0);
    }
#endif

    if (hotkey_mask && hit_hotkey(MYKEY_R1)) {
#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
        static int pre_ff = 0;

        if (pre_ff != nds.fast_forward) {
            pre_ff = nds.fast_forward;
            dtr_fastforward(nds.fast_forward);
        }
        set_key(MYKEY_FF, 1);
#endif

#if defined(TRIMUI) || defined(PANDORA)
        set_key(MYKEY_QSAVE, 1);
#endif
        set_key(MYKEY_R1, 0);
    }

    if (hotkey_mask && hit_hotkey(MYKEY_L1)) {
#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
        set_key(MYKEY_EXIT, 1);
#endif

#if defined(TRIMUI) || defined(PANDORA)
        set_key(MYKEY_QLOAD, 1);
#endif
        set_key(MYKEY_L1, 0);
    }

#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX)
    if (hotkey_mask && hit_hotkey(MYKEY_R2)) {
#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
        set_key(MYKEY_QLOAD, 1);
#else
        set_key(MYKEY_QSAVE, 1);
#endif
        set_key(MYKEY_R2, 0);
    }

    if (hotkey_mask && hit_hotkey(MYKEY_L2)) {
#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
        set_key(MYKEY_QSAVE, 1);
#else
        set_key(MYKEY_QLOAD, 1);
#endif
        set_key(MYKEY_L2, 0);
    }
    else if (evt.keypad.cur_keys & (1 << MYKEY_L2)) {
#ifdef A30
        if (nds.joy.mode != MYJOY_MODE_STYLUS) {
#endif
            if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0)) {
                evt.mode = (evt.mode == MMIYOO_KEYPAD_MODE) ? MMIYOO_MOUSE_MODE : MMIYOO_KEYPAD_MODE;
                set_key(MYKEY_L2, 0);

                if (evt.mode == MMIYOO_MOUSE_MODE) {
                    release_all_keys();
                }
                lower_speed = 0;
            }
#ifdef A30
        }
#endif
    }
#endif

    if (!(evt.keypad.cur_keys & 0x0f)) {
        nds.pen.pre_ticks = clock();
    }

    return 0;
}

int EventUpdate(void *data)
{
#ifdef RG28XX
    char tbuf[16] = {0};
#endif
    struct input_event ev = {0};

    uint32_t l1 = L1;
    uint32_t r1 = R1;
#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX)
    uint32_t l2 = L2;
    uint32_t r2 = R2;
#endif

    uint32_t a = A;
    uint32_t b = B;
    uint32_t x = X;
    uint32_t y = Y;

    uint32_t up = UP;
    uint32_t down = DOWN;
    uint32_t left = LEFT;
    uint32_t right = RIGHT;

    while (running) {
        SDL_SemWait(event_sem);

        if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0) && nds.keys_rotate) {
            if (nds.keys_rotate == 1) {
                up = LEFT;
                down = RIGHT;
                left = DOWN;
                right = UP;

                a = X;
                b = A;
                x = Y;
                y = B;
            }
            else {
                up = RIGHT;
                down = LEFT;
                left = UP;
                right = DOWN;

                a = B;
                b = Y;
                x = A;
                y = X;
            }
        }
        else {
            up = UP;
            down = DOWN;
            left = LEFT;
            right = RIGHT;

            a = A;
            b = B;
            x = X;
            y = Y;
        }

#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX)
        if (nds.swap_l1l2) {
            l1 = L2;
            l2 = L1;
        }
        else {
            l1 = L1;
            l2 = L2;
        }

        if (nds.swap_r1r2) {
            r1 = R2;
            r2 = R1;
        }
        else {
            r1 = R1;
            r2 = R2;
        }
#endif

#ifdef TRIMUI
        if (cust_key.gpio != NULL) {
            static uint32_t pre_value = 0;
            uint32_t v = *cust_key.gpio & 0x800;

            if (v != pre_value) {
                pre_value = v;
                set_key(MYKEY_R2, !v);
            }
        }
#endif

        if (event_fd > 0) {
            int r = 0;

#ifdef RG28XX
            ev.code = 0;
            if (read(event_fd, tbuf, 16)) {
                ev.value = !!tbuf[12];

                switch (tbuf[10]) {
                case 0x11: 
                    if (ev.value) {
                        ev.code = (tbuf[12] == 0xff) ? up : down;
                    }
                    else {
                        ev.code = up;
                        set_key(MYKEY_UP, 0);
                        set_key(MYKEY_DOWN, 0);
                    }
                    break;
                case 0x10:
                    if (ev.value) {
                        ev.code = (tbuf[12] == 0xff) ? left : right;
                    }
                    else {
                        ev.code = left;
                        set_key(MYKEY_LEFT, 0);
                        set_key(MYKEY_RIGHT, 0);
                    }
                    break;
                case 0x30: ev.code = a; break;
                case 0x31: ev.code = b; break;
                case 0x33: ev.code = x; break;
                case 0x32: ev.code = y; break;
                case 0x34: ev.code = l1; break;
                case 0x3a: ev.code = l2; break;
                case 0x35: ev.code = r1; break;
                case 0x3b: ev.code = r2; break;
                case 0x38: ev.code = MENU; break;
                case 0x36: ev.code = SELECT; break;
                case 0x37: ev.code = START; break;
                case 0x73: ev.code = VOLUP; break;
                case 0x72: ev.code = VOLDOWN; break;
                }

                if (ev.code > 0) {
#else
            if (read(event_fd, &ev, sizeof(struct input_event))) {
                if ((ev.type == EV_KEY) && (ev.value != 2)) {
#endif
                    r = 1;
                    //printf(PREFIX"code:%d, value:%d\n", ev.code, ev.value);
                    if (ev.code == l1)      { set_key(MYKEY_L1,    ev.value); }
                    if (ev.code == r1)      { set_key(MYKEY_R1,    ev.value); }
                    if (ev.code == up)      { set_key(MYKEY_UP,    ev.value); }
                    if (ev.code == down)    { set_key(MYKEY_DOWN,  ev.value); }
                    if (ev.code == left)    { set_key(MYKEY_LEFT,  ev.value); }
                    if (ev.code == right)   { set_key(MYKEY_RIGHT, ev.value); }
                    if (ev.code == a)       { set_key(MYKEY_A,     ev.value); }
                    if (ev.code == b)       { set_key(MYKEY_B,     ev.value); }
                    if (ev.code == x)       { set_key(MYKEY_X,     ev.value); }
                    if (ev.code == y)       { set_key(MYKEY_Y,     ev.value); }
#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX)
#ifdef A30
                    if (ev.code == r2) {
                        if (nds.joy.mode == MYJOY_MODE_STYLUS) {
                            nds.joy.show_cnt = MYJOY_SHOW_CNT;
                            SDL_SendMouseButton(vid.window, 0, ev.value ? SDL_PRESSED : SDL_RELEASED, SDL_BUTTON_LEFT);
                        }
                        set_key(MYKEY_L2, ev.value);
                    }
                    if (ev.code == l2)      { set_key(MYKEY_R2,    ev.value); }
#else
                    if (ev.code == r2)      { set_key(MYKEY_L2,    ev.value); }
                    if (ev.code == l2)      { set_key(MYKEY_R2,    ev.value); }
#endif
#endif

#ifdef QX1000
                    if (ev.code == L10)     { set_key(MYKEY_L1,    ev.value); }
                    if (ev.code == R10)     { set_key(MYKEY_R1,    ev.value); }
#endif
                    switch (ev.code) {
                    case START:  set_key(MYKEY_START, ev.value);  break;
                    case SELECT: set_key(MYKEY_SELECT, ev.value); break;
                    case MENU:   set_key(MYKEY_MENU, ev.value);   break;
#ifdef QX1000
                    case QSAVE:  set_key(MYKEY_QSAVE, ev.value);  break;
                    case QLOAD:  set_key(MYKEY_QLOAD, ev.value);  break;
                    case EXIT:   set_key(MYKEY_EXIT, ev.value);   break;
#endif
#ifdef MMIYOO
                    case POWER:  set_key(MYKEY_POWER, ev.value);  break;
                    case VOLUP:
                        set_key(MYKEY_VOLUP, ev.value);
                        if (is_stock_os) {
                            if (ev.value == 0) {
                                nds.volume = volume_inc();
                            }
                        }
                        else {
                            nds.defer_update_bg = 60;
                        }
                        break;
                    case VOLDOWN:
                        set_key(MYKEY_VOLDOWN, ev.value);
                        if (is_stock_os) {
                            if (ev.value == 0) {
                                nds.volume = volume_dec();
                            }
                        }
                        else {
                            nds.defer_update_bg = 60;
                        }
                        break;
#endif

#if defined(A30) || defined(RG28XX)
                    case VOLUP:
                        set_key(MYKEY_VOLUP, ev.value);
                        if (ev.value == 0) {
                            nds.volume = volume_inc();
                        }
                        break;
                    case VOLDOWN:
                        set_key(MYKEY_VOLDOWN, ev.value);
                        if (ev.value == 0) {
                            nds.volume = volume_dec();
                        }
                        break;
#endif
                    }
                }
            }

#if defined(A30) && USE_MYJOY
            r |= update_joystick();
#endif
            if (r > 0) {
                handle_hotkey();
            }
        }
        SDL_SemPost(event_sem);
        usleep(1000000 / 60);
    }
    
    return 0;
}

void MMIYOO_EventInit(void)
{
#ifdef MMIYOO
    DIR *dir = NULL;
#endif

    evt.keypad.pre_keys = 0;
    memset(&evt, 0, sizeof(evt));
    evt.mouse.maxx = NDS_W;
    evt.mouse.maxy = NDS_H;
    evt.mouse.x = evt.mouse.maxx >> 1;
    evt.mouse.y = evt.mouse.maxy >> 1;

#ifdef TRIMUI
    cust_key.gpio = NULL;
    cust_key.fd = open("/dev/mem", O_RDWR);
    if (cust_key.fd > 0) {
        cust_key.mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, cust_key.fd, 0x01c20000);
        if (cust_key.mem != MAP_FAILED) {
            uint32_t *p = NULL;

            p = (uint32_t *)(cust_key.mem + 0x800 + (0x24 * 6) + 0x04);
            cust_key.pre_cfg = *p;
            *p &= 0xfff000ff;

            p = (uint32_t *)(cust_key.mem + 0x800 + (0x24 * 6) + 0x1c);
            *p |= 0x01500000;

            cust_key.gpio = (uint32_t *)(cust_key.mem + 0x800 + (0x24 * 6) + 0x10);
        }
    }
#endif
    evt.mode = MMIYOO_KEYPAD_MODE;

    event_fd = open(INPUT_DEV, O_RDONLY | O_NONBLOCK | O_CLOEXEC);
    if(event_fd < 0){
        printf(PREFIX"Failed to open %s\n", INPUT_DEV);
        exit(-1);
    }

    if((event_sem =  SDL_CreateSemaphore(1)) == NULL) {
        SDL_SetError("Can't create input semaphore");
        exit(-1);
    }

#ifdef RG28XX
    set_volume();
#endif

    running = 1;
    if((thread = SDL_CreateThreadInternal(EventUpdate, "MMIYOOInputThread", 4096, NULL)) == NULL) {
        SDL_SetError("Can't create input thread");
        exit(-1);
    }

#ifdef MMIYOO
    dir = opendir("/mnt/SDCARD/.tmp_update");
    if (dir) {
        closedir(dir);
    }
    else {
        is_stock_os = 1;
        printf(PREFIX"Run on Stock OS\n");
    }
#endif
}

void MMIYOO_EventDeinit(void)
{
    running = 0;
    SDL_WaitThread(thread, NULL);
    SDL_DestroySemaphore(event_sem);
    if(event_fd > 0) {
        close(event_fd);
        event_fd = -1;
    }

#ifdef TRIMUI
    if (cust_key.fd > 0) {
        uint32_t *p = NULL;

        p = (uint32_t *)(cust_key.mem + 0x800 + (0x24 * 6) + 0x04);
        *p = cust_key.pre_cfg;
        munmap(cust_key.mem, 4096);
        close(cust_key.fd);

        cust_key.gpio = NULL;
        cust_key.fd = -1;
    }
#endif
}

void MMIYOO_PumpEvents(_THIS)
{
    SDL_SemWait(event_sem);
    if (nds.menu.enable) {
#if defined(MMIYOO) || defined(QX1000) || defined(A30) || defined(RG28XX)
        int cc = 0;
        uint32_t bit = 0;
        uint32_t changed = evt.keypad.pre_keys ^ evt.keypad.cur_keys;

        for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
            bit = 1 << cc;
            if (changed & bit) {
                if ((evt.keypad.cur_keys & bit) == 0) {
                    handle_menu(cc);
                }
            }
        }
        evt.keypad.pre_keys = evt.keypad.cur_keys;
#endif
    }
    else {
        if (evt.mode == MMIYOO_KEYPAD_MODE) {
            if (evt.keypad.pre_keys != evt.keypad.cur_keys) {
                int cc = 0;
                uint32_t bit = 0;
                uint32_t changed = evt.keypad.pre_keys ^ evt.keypad.cur_keys;

                for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
                    bit = 1 << cc;

#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
                    if ((nds.hotkey == HOTKEY_BIND_MENU) && (cc == MYKEY_MENU)) {
                        continue;
                    }
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000)
                    if (cc == MYKEY_MENU) {
                        continue;
                    }
#endif

                    if (changed & bit) {
                        SDL_SendKeyboardKey((evt.keypad.cur_keys & bit) ? SDL_PRESSED : SDL_RELEASED, SDL_GetScancodeFromKey(code[cc]));
                    }
                }

#if defined(TRIMUI) || defined(PANDORA)
                if (evt.keypad.pre_keys & (1 << MYKEY_R2)) {
                    set_key(MYKEY_R2, 0);
                }
                if (evt.keypad.pre_keys & (1 << MYKEY_L2)) {
                    set_key(MYKEY_L2, 0);
                }
#endif
                if (evt.keypad.pre_keys & (1 << MYKEY_QSAVE)) {
                    nds.state|= NDS_STATE_QSAVE;
                    set_key(MYKEY_QSAVE, 0);
                }
                if (evt.keypad.pre_keys & (1 << MYKEY_QLOAD)) {
                    nds.state|= NDS_STATE_QLOAD;
                    set_key(MYKEY_QLOAD, 0);
                }
                if (evt.keypad.pre_keys & (1 << MYKEY_FF)) {
                    nds.state|= NDS_STATE_FF;
                    set_key(MYKEY_FF, 0);
                }
                if (evt.keypad.pre_keys & (1 << MYKEY_MENU_ONION)) {
                    set_key(MYKEY_MENU_ONION, 0);
                }
                if (evt.keypad.pre_keys & (1 << MYKEY_EXIT)) {
                    release_all_keys();
                }
                evt.keypad.pre_keys = evt.keypad.cur_keys;
            }
        }
        else {
            int updated = 0;
            
            if (evt.keypad.pre_keys != evt.keypad.cur_keys) {
                uint32_t cc = 0;
                uint32_t bit = 0;
                uint32_t changed = evt.keypad.pre_keys ^ evt.keypad.cur_keys;

                if (changed & (1 << MYKEY_A)) {
                    SDL_SendMouseButton(vid.window, 0, (evt.keypad.cur_keys & (1 << MYKEY_A)) ? SDL_PRESSED : SDL_RELEASED, SDL_BUTTON_LEFT);
                }

                for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
                    bit = 1 << cc;
                    if ((cc == MYKEY_FF) || (cc == MYKEY_QSAVE) || (cc == MYKEY_QLOAD) || (cc == MYKEY_EXIT) || (cc == MYKEY_R2)) {
                        if (changed & bit) {
                            SDL_SendKeyboardKey((evt.keypad.cur_keys & bit) ? SDL_PRESSED : SDL_RELEASED, SDL_GetScancodeFromKey(code[cc]));
                        }
                    }
                    if (cc == MYKEY_R1) {
                        if (changed & bit) {
                            lower_speed = (evt.keypad.cur_keys & bit);
                        }
                    }
                }
            }

            if (is_hh_mode() && (nds.keys_rotate == 0)) {
                if (evt.keypad.cur_keys & (1 << MYKEY_UP)) {
                    updated = 1;
                    evt.mouse.x+= get_move_interval(1);
                }
                if (evt.keypad.cur_keys & (1 << MYKEY_DOWN)) {
                    updated = 1;
                    evt.mouse.x-= get_move_interval(1);
                }
                if (evt.keypad.cur_keys & (1 << MYKEY_LEFT)) {
                    updated = 1;
                    evt.mouse.y-= get_move_interval(0);
                }
                if (evt.keypad.cur_keys & (1 << MYKEY_RIGHT)) {
                    updated = 1;
                    evt.mouse.y+= get_move_interval(0);
                }
            }
            else {
                if (evt.keypad.cur_keys & (1 << MYKEY_UP)) {
                    updated = 1;
                    evt.mouse.y-= get_move_interval(1);
                }
                if (evt.keypad.cur_keys & (1 << MYKEY_DOWN)) {
                    updated = 1;
                    evt.mouse.y+= get_move_interval(1);
                }
                if (evt.keypad.cur_keys & (1 << MYKEY_LEFT)) {
                    updated = 1;
                    evt.mouse.x-= get_move_interval(0);
                }
                if (evt.keypad.cur_keys & (1 << MYKEY_RIGHT)) {
                    updated = 1;
                    evt.mouse.x+= get_move_interval(0);
                }
            }
            check_mouse_pos();

            if(updated){
                int x = 0;
                int y = 0;

                x = (evt.mouse.x * 160) / evt.mouse.maxx;
                y = (evt.mouse.y * 120) / evt.mouse.maxy;
                SDL_SendMouseMotion(vid.window, 0, 0, x + 80, y + (nds.pen.pos ? 120 : 0));
            }

#if defined(TRIMUI) || defined(PANDORA)
                if (evt.keypad.pre_keys & (1 << MYKEY_R2)) {
                    set_key(MYKEY_R2, 0);
                }
                if (evt.keypad.pre_keys & (1 << MYKEY_L2)) {
                    set_key(MYKEY_L2, 0);
                }
#endif
            if (evt.keypad.pre_keys & (1 << MYKEY_QSAVE)) {
                set_key(MYKEY_QSAVE, 0);
            }
            if (evt.keypad.pre_keys & (1 << MYKEY_QLOAD)) {
                set_key(MYKEY_QLOAD, 0);
            }
            if (evt.keypad.pre_keys & (1 << MYKEY_FF)) {
                set_key(MYKEY_FF, 0);
            }
            if (evt.keypad.pre_keys & (1 << MYKEY_EXIT)) {
                release_all_keys();
            }
            evt.keypad.pre_keys = evt.keypad.cur_keys;
        }
    }
    SDL_SemPost(event_sem);
}

#ifdef UNITTEST
#include "unity_fixture.h"

TEST_GROUP(sdl2_event_mmiyoo);

TEST_SETUP(sdl2_event_mmiyoo)
{
}

TEST_TEAR_DOWN(sdl2_event_mmiyoo)
{
}

TEST(sdl2_event_mmiyoo, hit_hotkey)
{
    TEST_ASSERT_EQUAL(hit_hotkey(0), 0);
}

TEST_GROUP_RUNNER(sdl2_event_mmiyoo)
{
    RUN_TEST_CASE(sdl2_event_mmiyoo, hit_hotkey);
}
#endif

