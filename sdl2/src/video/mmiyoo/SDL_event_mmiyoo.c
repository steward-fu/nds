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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <dirent.h>
#include <linux/input.h>

#include "../../events/SDL_events_c.h"
#include "../../core/linux/SDL_evdev.h"
#include "../../thread/SDL_systhread.h"

#include "SDL_video_mmiyoo.h"
#include "SDL_event_mmiyoo.h"

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

#ifdef FUNKEYS
    #define UP      22
    #define DOWN    32
    #define LEFT    38
    #define RIGHT   19
    #define A       30
    #define B       48
    #define X       45
    #define Y       21
    #define L1      50
    #define R1      49
    #define START   31
    #define SELECT  37
    #define MENU    16
#endif

#ifdef PANDORA
    #define UP      103
    #define DOWN    108
    #define LEFT    105
    #define RIGHT   106
    #define A       29
    #define B       42
    #define X       109
    #define Y       104
    #define L1      102
    #define R1      107
    #define START   56
    #define SELECT  29
    #define MENU    139
#endif

MMIYOO_EventInfo evt = {0};

extern GFX gfx;
extern NDS nds;
extern MMIYOO_VideoInfo vid;
extern int down_scale;

static int running = 0;
static int event_fd = -1;
static int lower_speed = 0;
#ifdef MMIYOO
static int is_stock_os = 0;
#endif
static SDL_sem *event_sem = NULL;
static SDL_Thread *thread = NULL;
static uint32_t hotkey = 0;
static uint32_t pre_keypad_bitmaps = 0;

extern int FB_W;
extern int FB_H;

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

static void check_mouse_pos(void)
{
    if (evt.mouse.y < evt.mouse.miny) {
        evt.mouse.y = evt.mouse.miny;
    }
    if (evt.mouse.y > evt.mouse.maxy) {
        evt.mouse.y = evt.mouse.maxy;
    }
    if (evt.mouse.x < evt.mouse.minx) {
        evt.mouse.x = evt.mouse.minx;
    }
    if (evt.mouse.x >= evt.mouse.maxx) {
        evt.mouse.x = evt.mouse.maxx;
    }
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

    if ((nds.dis_mode == NDS_DIS_MODE_HH0) || (nds.dis_mode == NDS_DIS_MODE_HH1)) {
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
        if (evt.keypad.bitmaps & 1) {
            SDL_SendKeyboardKey(SDL_RELEASED, SDL_GetScancodeFromKey(code[cc]));
        }
        evt.keypad.bitmaps>>= 1;
    }
}

static int hit_hotkey(uint32_t bit)
{
#ifdef MMIYOO
    uint32_t mask = (1 << bit) | (1 << ((nds.hotkey == HOTKEY_BIND_SELECT) ? MYKEY_SELECT : MYKEY_MENU));
#endif

#if defined(TRIMUI) || defined(PANDORA)
    uint32_t mask = (1 << bit) | (1 << MYKEY_MENU);
#endif

#ifdef FUNKEYS
    uint32_t mask = (1 << bit) | (1 << MYKEY_START);
#endif

    return (hotkey ^ mask) ? 0 : 1;
}

static void set_key(uint32_t bit, int val)
{
    if (val) {
        hotkey|= (1 << bit);
        evt.keypad.bitmaps|= (1 << bit);

#if defined(TRIMUI) || defined(PANDORA)
        if (bit == MYKEY_MENU) {
            hotkey = (1 << MYKEY_MENU);
        }
#endif

#ifdef FUNKEYS
        if (bit == MYKEY_START) {
            hotkey = (1 << MYKEY_START);
        }
#endif

#ifdef MMIYOO
        if (nds.hotkey == HOTKEY_BIND_SELECT) {
            if (bit == MYKEY_SELECT) {
                hotkey = (1 << MYKEY_SELECT);
            }
        }
        else {
            if (bit == MYKEY_MENU) {
                hotkey = (1 << MYKEY_MENU);
            }
        }
#endif
    }
    else {
        hotkey&= ~(1 << bit);
        evt.keypad.bitmaps&= ~(1 << bit);
    }
}

int EventUpdate(void *data)
{
    struct input_event ev = {0};

    uint32_t l1 = L1;
    uint32_t r1 = R1;
#ifdef MMIYOO
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

    int hotkey_mask = 0;
#ifdef TRIMUI
    char buf[MAX_PATH << 1] = {0};
#endif

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

#ifdef MMIYOO
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
            if (read(event_fd, &ev, sizeof(struct input_event))) {
                if ((ev.type == EV_KEY) && (ev.value != 2)) {
                    //printf(PREFIX"code:%d, value:%d\n", ev.code, ev.value);
                    if (ev.code == l1)      { set_key(MYKEY_L1,    ev.value); }
                    if (ev.code == r1)      { set_key(MYKEY_R1,    ev.value); }
#ifdef MMIYOO
                    if (ev.code == l2)      { set_key(MYKEY_L2,    ev.value); }
                    if (ev.code == r2)      { set_key(MYKEY_R2,    ev.value); }
#endif
                    if (ev.code == up)      { set_key(MYKEY_UP,    ev.value); }
                    if (ev.code == down)    { set_key(MYKEY_DOWN,  ev.value); }
                    if (ev.code == left)    { set_key(MYKEY_LEFT,  ev.value); }
                    if (ev.code == right)   { set_key(MYKEY_RIGHT, ev.value); }
                    if (ev.code == a)       { set_key(MYKEY_A,     ev.value); }
                    if (ev.code == b)       { set_key(MYKEY_B,     ev.value); }
                    if (ev.code == x)       { set_key(MYKEY_X,     ev.value); }
                    if (ev.code == y)       { set_key(MYKEY_Y,     ev.value); }

                    switch (ev.code) {
                    case START:  set_key(MYKEY_START, ev.value);  break;
                    case SELECT: set_key(MYKEY_SELECT, ev.value); break;
                    case MENU:   set_key(MYKEY_MENU, ev.value);   break;
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
                            nds.defer_update_bg = 360;
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
                            nds.defer_update_bg = 360;
                        }
                        break;
#endif
                    }

                    hotkey_mask = 1;
                    if (nds.menu.enable || nds.menu.drastic.enable) {
                        hotkey_mask = 0;
                    }

                    if (hotkey_mask && hit_hotkey(MYKEY_UP)) {
#ifdef MMIYOO
                        if (evt.mode == MMIYOO_MOUSE_MODE) {
                            nds.pen.pos = 1;
                        }
#endif
                        set_key(MYKEY_UP, 0);
                    }

                    if (hotkey_mask && hit_hotkey(MYKEY_DOWN)) {
#ifdef MMIYOO
                        if (evt.mode == MMIYOO_MOUSE_MODE) {
                            nds.pen.pos = 0;
                        }
#endif
                        set_key(MYKEY_DOWN, 0);
                    }

                    if (hotkey_mask && hit_hotkey(MYKEY_LEFT)) {
#ifdef MMIYOO
                        if (nds.hres_mode == 0) {
                            if (nds.dis_mode > 0) {
                                nds.dis_mode-= 1;
                            }
                        }
                        else {
                            nds.dis_mode = NDS_DIS_MODE_HRES0;
                        }
#endif

#if defined(TRIMUI) || defined(FUNKEYS) || defined(PANDORA)
                        if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0)) {
                            evt.mode = (evt.mode == MMIYOO_KEYPAD_MODE) ? MMIYOO_MOUSE_MODE : MMIYOO_KEYPAD_MODE;

                            if (evt.mode == MMIYOO_MOUSE_MODE) {
                                release_all_keys();
                                evt.mouse.x = (evt.mouse.maxx - evt.mouse.minx) / 2;
                                evt.mouse.y = (evt.mouse.maxy - evt.mouse.miny) / 2;
                            }
                            lower_speed = 0;
                        }
#endif
                        set_key(MYKEY_LEFT, 0);
                    }

                    if (hotkey_mask && hit_hotkey(MYKEY_RIGHT)) {
#ifdef MMIYOO
                        if (nds.hres_mode == 0) {
                            if (nds.dis_mode < NDS_DIS_MODE_LAST) {
                                nds.dis_mode+= 1;
                            }
                        }
                        else {
                            nds.dis_mode = NDS_DIS_MODE_HRES1;
                        }
#endif

#if defined(TRIMUI) || defined(FUNKEYS) || defined(PANDORA)
                        set_key(MYKEY_R2, 1);
#endif
                        set_key(MYKEY_RIGHT, 0);
                    }

                    if (hotkey_mask && hit_hotkey(MYKEY_A)) {
#ifdef MMIYOO
                        if ((evt.mode == MMIYOO_KEYPAD_MODE) && (nds.hres_mode == 0)) {
                            uint32_t tmp = nds.alt_mode;
                            nds.alt_mode = nds.dis_mode;
                            nds.dis_mode = tmp;
                        }
#endif

#ifdef TRIMUI
                        switch (nds.dis_mode) {
                        case NDS_DIS_MODE_S0:
                            if (down_scale == 1) {
                                down_scale = 0;
                            }
                            else {
                                nds.dis_mode = NDS_DIS_MODE_S1;
                            }
                            break;
                        case NDS_DIS_MODE_S1:
                            down_scale = 1;
                            nds.dis_mode = NDS_DIS_MODE_S0;
                            break;
                        }
                        disp_resize();
#endif
                        set_key(MYKEY_A, 0);
                    }

                    if (hotkey_mask && hit_hotkey(MYKEY_B)) {
#ifdef MMIYOO
                        down_scale = down_scale ? 0 : 1;
#endif
                        set_key(MYKEY_B, 0);
                    }

                    if (hit_hotkey(MYKEY_X)) {
#ifdef MMIYOO
#endif

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
                            w = down_scale ? FB_H : (FB_H - (BLUR_OFFSET << 1));
                            h = down_scale ? FB_W : (FB_W - (BLUR_OFFSET << 1));
                        }
                        else {
                            w = 192;
                            h = 256;
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

#ifndef FUNKEYS
                    if (hotkey_mask && hit_hotkey(MYKEY_START)) {
#ifdef MMIYOO
                        if (nds.menu.enable == 0) {
                            nds.menu.enable = 1;
                            usleep(100000);
                            handle_menu(-1);
                            hotkey = 0;
                            pre_keypad_bitmaps = evt.keypad.bitmaps = 0;
                        }
#endif

#if defined(TRIMUI) || defined(PANDORA)
                        set_key(MYKEY_EXIT, 1);
#endif
                        set_key(MYKEY_START, 0);
                    }
#endif

#ifdef MMIYOO
                    if (nds.hotkey == HOTKEY_BIND_MENU) {
                        if (hotkey_mask && hit_hotkey(MYKEY_SELECT)) {
                            set_key(MYKEY_MENU_ONION, 1);
                            set_key(MYKEY_SELECT, 0);
                        }
                    }
#endif

#if defined(TRIMUI) || defined(PANDORA)
                    if (hotkey_mask && hit_hotkey(MYKEY_SELECT)) {
                        set_key(MYKEY_MENU_ONION, 1);
                        set_key(MYKEY_SELECT, 0);
                    }
#endif

#ifdef FUNKEYS
                    if (hotkey_mask && hit_hotkey(MYKEY_SELECT)) {
                        set_key(MYKEY_EXIT, 1);
                        set_key(MYKEY_SELECT, 0);
                    }
#endif

                    if (hotkey_mask && hit_hotkey(MYKEY_R1)) {
#ifdef MMIYOO
                        static int pre_ff = 0;

                        if (pre_ff != nds.fast_forward) {
                            pre_ff = nds.fast_forward;
                            dtr_fastforward(nds.fast_forward);
                        }
                        set_key(MYKEY_FF, 1);
#endif

#if defined(TRIMUI) || defined(FUNKEYS) || defined(PANDORA)
                        set_key(MYKEY_QSAVE, 1);
#endif
                        set_key(MYKEY_R1, 0);
                    }

                    if (hotkey_mask && hit_hotkey(MYKEY_L1)) {
#ifdef MMIYOO
                        set_key(MYKEY_EXIT, 1);
#endif

#if defined(TRIMUI) || defined(FUNKEYS) || defined(PANDORA)
                        set_key(MYKEY_QLOAD, 1);
#endif
                        set_key(MYKEY_L1, 0);
                    }

#ifdef MMIYOO
                    if (hotkey_mask && hit_hotkey(MYKEY_R2)) {
                        set_key(MYKEY_QSAVE, 1);
                        set_key(MYKEY_R2, 0);
                    }

                    if (hotkey_mask && hit_hotkey(MYKEY_L2)) {
                        set_key(MYKEY_QLOAD, 1);
                        set_key(MYKEY_L2, 0);
                    }
                    else if (evt.keypad.bitmaps & (1 << MYKEY_L2)) {
                        if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0)) {
                            evt.mode = (evt.mode == MMIYOO_KEYPAD_MODE) ? MMIYOO_MOUSE_MODE : MMIYOO_KEYPAD_MODE;
                            set_key(MYKEY_L2, 0);

                            if (evt.mode == MMIYOO_MOUSE_MODE) {
                                release_all_keys();
                                evt.mouse.x = (evt.mouse.maxx - evt.mouse.minx) / 2;
                                evt.mouse.y = 120 + (evt.mouse.maxy - evt.mouse.miny) / 2;
                            }
                            lower_speed = 0;
                        }
                    }
#endif
                }
            
                if (!(evt.keypad.bitmaps & 0x0f)) {
                    nds.pen.pre_ticks = clock();
                }
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

    pre_keypad_bitmaps = 0;
    memset(&evt, 0, sizeof(evt));
    evt.mouse.minx = 0;
    evt.mouse.miny = 0;
    evt.mouse.maxx = 256;
    evt.mouse.maxy = 192;
    evt.mouse.x = (evt.mouse.maxx - evt.mouse.minx) / 2;
#ifdef MMIYOO
    evt.mouse.y = 120 + (evt.mouse.maxy - evt.mouse.miny) / 2;
#endif

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
    evt.mouse.y = (evt.mouse.maxy - evt.mouse.miny) / 2;
#endif
    evt.mode = MMIYOO_KEYPAD_MODE;

#if defined(PANDORA)
    event_fd = open("/dev/input/event4", O_RDONLY | O_NONBLOCK | O_CLOEXEC);
#else
    event_fd = open("/dev/input/event0", O_RDONLY | O_NONBLOCK | O_CLOEXEC);
#endif
    if(event_fd < 0){
        printf(PREFIX"Failed to open event0\n");
    }

    if((event_sem =  SDL_CreateSemaphore(1)) == NULL) {
        SDL_SetError("Can't create input semaphore");
        return;
    }

    running = 1;
    if((thread = SDL_CreateThreadInternal(EventUpdate, "MMIYOOInputThread", 4096, NULL)) == NULL) {
        SDL_SetError("Can't create input thread");
        return;
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
#ifdef MMIYOO
        int cc = 0;
        uint32_t bit = 0;
        uint32_t changed = pre_keypad_bitmaps ^ evt.keypad.bitmaps;

        for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
            bit = 1 << cc;
            if (changed & bit) {
                if ((evt.keypad.bitmaps & bit) == 0) {
                    handle_menu(cc);
                }
            }
        }
        pre_keypad_bitmaps = evt.keypad.bitmaps;
#endif
    }
    else {
        if (evt.mode == MMIYOO_KEYPAD_MODE) {
            if (pre_keypad_bitmaps != evt.keypad.bitmaps) {
                int cc = 0;
                uint32_t bit = 0;
                uint32_t changed = pre_keypad_bitmaps ^ evt.keypad.bitmaps;

                for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
                    bit = 1 << cc;

#ifdef MMIYOO
                    if ((nds.hotkey == HOTKEY_BIND_MENU) && (cc == MYKEY_MENU)) {
                        continue;
                    }
#endif

#if defined(TRIMUI) || defined(PANDORA)
                    if (cc == MYKEY_MENU) {
                        continue;
                    }
#endif

                    if (changed & bit) {
                        SDL_SendKeyboardKey((evt.keypad.bitmaps & bit) ? SDL_PRESSED : SDL_RELEASED, SDL_GetScancodeFromKey(code[cc]));
                    }
                }

#if defined(TRIMUI) || defined(FUNKEYS) || defined(PANDORA)
                if (pre_keypad_bitmaps & (1 << MYKEY_R2)) {
                    set_key(MYKEY_R2, 0);
                }
                if (pre_keypad_bitmaps & (1 << MYKEY_L2)) {
                    set_key(MYKEY_L2, 0);
                }
#endif
                if (pre_keypad_bitmaps & (1 << MYKEY_QSAVE)) {
                    nds.state|= NDS_STATE_QSAVE;
                    set_key(MYKEY_QSAVE, 0);
                }
                if (pre_keypad_bitmaps & (1 << MYKEY_QLOAD)) {
                    nds.state|= NDS_STATE_QLOAD;
                    set_key(MYKEY_QLOAD, 0);
                }
                if (pre_keypad_bitmaps & (1 << MYKEY_FF)) {
                    nds.state|= NDS_STATE_FF;
                    set_key(MYKEY_FF, 0);
                }
                if (pre_keypad_bitmaps & (1 << MYKEY_MENU_ONION)) {
                    set_key(MYKEY_MENU_ONION, 0);
                }
                if (pre_keypad_bitmaps & (1 << MYKEY_EXIT)) {
                    release_all_keys();
                }
                pre_keypad_bitmaps = evt.keypad.bitmaps;
            }
        }
        else {
            int updated = 0;
            
            if (pre_keypad_bitmaps != evt.keypad.bitmaps) {
                uint32_t cc = 0;
                uint32_t bit = 0;
                uint32_t changed = pre_keypad_bitmaps ^ evt.keypad.bitmaps;

                if (changed & (1 << MYKEY_A)) {
                    SDL_SendMouseButton(vid.window, 0, (evt.keypad.bitmaps & (1 << MYKEY_A)) ? SDL_PRESSED : SDL_RELEASED, SDL_BUTTON_LEFT);
                }

                for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
                    bit = 1 << cc;
                    if ((cc == MYKEY_FF) || (cc == MYKEY_QSAVE) || (cc == MYKEY_QLOAD) || (cc == MYKEY_EXIT) || (cc == MYKEY_R2)) {
                        if (changed & bit) {
                            SDL_SendKeyboardKey((evt.keypad.bitmaps & bit) ? SDL_PRESSED : SDL_RELEASED, SDL_GetScancodeFromKey(code[cc]));
                        }
                    }
                    if (cc == MYKEY_R1) {
                        if (changed & bit) {
                            lower_speed = (evt.keypad.bitmaps & bit);
                        }
                    }
                }
            }

            if (((nds.dis_mode == NDS_DIS_MODE_HH0) || (nds.dis_mode == NDS_DIS_MODE_HH1)) && (nds.keys_rotate == 0)) {
                if (evt.keypad.bitmaps & (1 << MYKEY_UP)) {
                    updated = 1;
                    evt.mouse.x+= get_move_interval(1);
                }
                if (evt.keypad.bitmaps & (1 << MYKEY_DOWN)) {
                    updated = 1;
                    evt.mouse.x-= get_move_interval(1);
                }
                if (evt.keypad.bitmaps & (1 << MYKEY_LEFT)) {
                    updated = 1;
                    evt.mouse.y-= get_move_interval(0);
                }
                if (evt.keypad.bitmaps & (1 << MYKEY_RIGHT)) {
                    updated = 1;
                    evt.mouse.y+= get_move_interval(0);
                }
            }
            else {
                if (evt.keypad.bitmaps & (1 << MYKEY_UP)) {
                    updated = 1;
                    evt.mouse.y-= get_move_interval(1);
                }
                if (evt.keypad.bitmaps & (1 << MYKEY_DOWN)) {
                    updated = 1;
                    evt.mouse.y+= get_move_interval(1);
                }
                if (evt.keypad.bitmaps & (1 << MYKEY_LEFT)) {
                    updated = 1;
                    evt.mouse.x-= get_move_interval(0);
                }
                if (evt.keypad.bitmaps & (1 << MYKEY_RIGHT)) {
                    updated = 1;
                    evt.mouse.x+= get_move_interval(0);
                }
            }
            check_mouse_pos();

            if(updated){
                int addx = 0, addy = 0;
#ifdef MMIYOO
                if ((evt.mouse.minx == 0) && (evt.mouse.miny == 120)) {
                    addx = 80;
                }
                if ((evt.mouse.minx == 160) && (evt.mouse.miny == 0)) {
                    addy = 60;
                }

                switch (nds.dis_mode) {
                case NDS_DIS_MODE_VH_T0:
                case NDS_DIS_MODE_VH_T1:
                //case NDS_DIS_MODE_S0:
                //case NDS_DIS_MODE_S1:
                    //addy = -120;
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
                    case NDS_DIS_MODE_HH1:
                        addy = -120;
                        break;
                    }
                }
#endif
                SDL_SendMouseMotion(vid.window, 0, 0, evt.mouse.x + addx, evt.mouse.y + addy);
            }

#if defined(TRIMUI) || defined(FUNKEYS) || defined(PANDORA)
                if (pre_keypad_bitmaps & (1 << MYKEY_R2)) {
                    set_key(MYKEY_R2, 0);
                }
                if (pre_keypad_bitmaps & (1 << MYKEY_L2)) {
                    set_key(MYKEY_L2, 0);
                }
#endif
            if (pre_keypad_bitmaps & (1 << MYKEY_QSAVE)) {
                set_key(MYKEY_QSAVE, 0);
            }
            if (pre_keypad_bitmaps & (1 << MYKEY_QLOAD)) {
                set_key(MYKEY_QLOAD, 0);
            }
            if (pre_keypad_bitmaps & (1 << MYKEY_FF)) {
                set_key(MYKEY_FF, 0);
            }
            if (pre_keypad_bitmaps & (1 << MYKEY_EXIT)) {
                release_all_keys();
            }
            pre_keypad_bitmaps = evt.keypad.bitmaps;
        }
    }
    SDL_SemPost(event_sem);
}

#endif

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

