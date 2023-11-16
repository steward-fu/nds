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

MMIYOO_EventInfo evt = {0};

extern NDS nds;
extern MMIYOO_VideoInfo vid;
extern int down_scale;

static int running = 0;
static int event_fd = -1;
static int lower_speed = 0;
#ifdef MMIYOO
static int is_stock_system = 0;
#endif
static SDL_sem *event_sem = NULL;
static SDL_Thread *thread = NULL;
static uint32_t hotkey = 0;
static uint32_t pre_keypad_bitmaps = 0;

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

    if (nds.dis_mode == NDS_DIS_MODE_HH0) {
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
    uint32_t mask = (1 << bit) | (1 << (is_stock_system ? MYKEY_SELECT : MYKEY_MENU));
#endif

#ifdef TRIMUI
    uint32_t mask = (1 << bit) | (1 << MYKEY_MENU);
#endif

    return (hotkey ^ mask) ? 0 : 1;
}

static void set_key(uint32_t bit, int val)
{
    if (val) {
        hotkey|= (1 << bit);
        evt.keypad.bitmaps|= (1 << bit);

#ifdef TRIMUI
        if (bit == MYKEY_MENU) {
            hotkey = (1 << MYKEY_MENU);
        }
#endif

#ifdef MMIYOO
        if (is_stock_system) {
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

#ifdef MMIYOO
    if (nds.swap_l1l2) {
        l1 = L2;
        l2 = L1;
        printf(PREFIX"swap L1 and L2 keys\n");
    }

    if (nds.swap_r1r2) {
        r1 = R2;
        r2 = R1;
        printf(PREFIX"swap R1 and R2 keys\n");
    }
#endif

    while (running) {
        SDL_SemWait(event_sem);

        if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0) && nds.keys_90d) {
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
            up = UP;
            down = DOWN;
            left = LEFT;
            right = RIGHT;

            a = A;
            b = B;
            x = X;
            y = Y;
        }

        if (event_fd > 0) {
            if (read(event_fd, &ev, sizeof(struct input_event))) {
                if ((ev.type == EV_KEY) && (ev.value != 2)) {
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
                        if (is_stock_system && (ev.value == 0)) {
                            nds.volume = volume_inc();
                        }
                        else {
                            nds.defer_update_bg = 180;
                        }
                        break;
                    case VOLDOWN:
                        set_key(MYKEY_VOLDOWN, ev.value);
                        if (is_stock_system && (ev.value == 0)) {
                            nds.volume = volume_dec();
                        }
                        else {
                            nds.defer_update_bg = 180;
                        }
                        break;
#endif
                    }

                    if (nds.menu.enable) {
                        hotkey = 0;
                    }

                    if (hit_hotkey(MYKEY_UP)) {
#ifdef MMIYOO
                        if (evt.mode == MMIYOO_MOUSE_MODE) {
                            nds.pen.pos = 1;
                        }
#endif
                        set_key(MYKEY_UP, 0);
                    }

                    if (hit_hotkey(MYKEY_DOWN)) {
#ifdef MMIYOO
                        if (evt.mode == MMIYOO_MOUSE_MODE) {
                            nds.pen.pos = 0;
                        }
#endif
                        set_key(MYKEY_DOWN, 0);
                    }

#ifdef TRIMUI
                    if (hit_hotkey(MYKEY_LEFT)) {
                        if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0)) {
                            evt.mode = (evt.mode == MMIYOO_KEYPAD_MODE) ? MMIYOO_MOUSE_MODE : MMIYOO_KEYPAD_MODE;

                            if (evt.mode == MMIYOO_MOUSE_MODE) {
                                release_all_keys();
                                evt.mouse.x = (evt.mouse.maxx - evt.mouse.minx) / 2;
                                evt.mouse.y = (evt.mouse.maxy - evt.mouse.miny) / 2;
                            }
                            lower_speed = 0;
                        }
                        set_key(MYKEY_LEFT, 0);
                    }

                    if (hit_hotkey(MYKEY_RIGHT)) {
                        set_key(MYKEY_R2, 1);
                        set_key(MYKEY_RIGHT, 0);
                    }
#endif

                    if (hit_hotkey(MYKEY_A)) {
                        if ((evt.mode == MMIYOO_KEYPAD_MODE) && (nds.hres_mode == 0)) {
                            uint32_t tmp = nds.alt_mode;
                            nds.alt_mode = nds.dis_mode;
                            nds.dis_mode = tmp;
                        }
                        set_key(MYKEY_A, 0);
                    }

                    if (hit_hotkey(MYKEY_B)) {
                        down_scale = down_scale ? 0 : 1;
                        set_key(MYKEY_B, 0);
                    }

                    if (hit_hotkey(MYKEY_Y)) {
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
                        set_key(MYKEY_Y, 0);
                    }

                    if (hit_hotkey(MYKEY_START)) {
#ifdef MMIYOO
                        if (nds.menu.enable == 0) {
                            nds.menu.enable = 1;
                            usleep(100000);
                            handle_menu(-1);
                            hotkey = 0;
                            pre_keypad_bitmaps = evt.keypad.bitmaps = 0;
                        }
#endif

#ifdef TRIMUI
                        set_key(MYKEY_EXIT, 1);
#endif
                        set_key(MYKEY_START, 0);
                    }

#ifdef MMIYOO
                    if (is_stock_system == 0) {
                        if (hit_hotkey(MYKEY_SELECT)) {
                            set_key(MYKEY_MENU_ONION, 1);
                            set_key(MYKEY_SELECT, 0);
                        }
                    }
#endif

#ifdef TRIMUI
                    if (hit_hotkey(MYKEY_SELECT)) {
                        set_key(MYKEY_MENU_ONION, 1);
                        set_key(MYKEY_SELECT, 0);
                    }
#endif

                    if (hit_hotkey(MYKEY_R1)) {
#ifdef MMIYOO
                        set_key(MYKEY_FF, 1);
#endif

#ifdef TRIMUI
                        set_key(MYKEY_QSAVE, 1);
#endif
                        set_key(MYKEY_R1, 0);
                    }

                    if (hit_hotkey(MYKEY_L1)) {
#ifdef MMIYOO
                        set_key(MYKEY_EXIT, 1);
#endif

#ifdef TRIMUI
                        set_key(MYKEY_QLOAD, 1);
#endif
                        set_key(MYKEY_L1, 0);
                    }

#ifdef MMIYOO
                    if (hit_hotkey(MYKEY_R2)) {
                        set_key(MYKEY_QSAVE, 1);
                        set_key(MYKEY_R2, 0);
                    }

                    if (hit_hotkey(MYKEY_L2)) {
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
    evt.mouse.y = (evt.mouse.maxy - evt.mouse.miny) / 2;
#endif
    evt.mode = MMIYOO_KEYPAD_MODE;

    event_fd = open("/dev/input/event0", O_RDONLY | O_NONBLOCK | O_CLOEXEC);
    if(event_fd < 0){
        printf(PREFIX"failed to open /dev/input/event0\n");
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
        is_stock_system = 1;
        printf(PREFIX"run on stock system\n");
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
                    if ((is_stock_system == 0) && (cc == MYKEY_MENU)) {
                        continue;
                    }
#endif

#ifdef TRIMUI
                    if (cc == MYKEY_MENU) {
                        continue;
                    }
#endif
                    if (changed & bit) {
                        SDL_SendKeyboardKey((evt.keypad.bitmaps & bit) ? SDL_PRESSED : SDL_RELEASED, SDL_GetScancodeFromKey(code[cc]));
                    }
                }

#ifdef TRIMUI
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

            if ((nds.dis_mode == NDS_DIS_MODE_HH0) && (nds.keys_90d == 0)) {
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
                    addy = -120;
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
                        addy = -120;
                        break;
                    }
                }
#endif
                SDL_SendMouseMotion(vid.window, 0, 0, evt.mouse.x + addx, evt.mouse.y + addy);
            }

#ifdef TRIMUI
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

