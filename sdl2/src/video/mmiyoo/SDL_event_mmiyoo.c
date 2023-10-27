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

MMIYOO_EventInfo MMiyooEventInfo = {0};

extern NDS nds;
extern MMIYOO_VideoInfo MMiyooVideoInfo;
extern int down_scale;

static int running = 0;
static int event_fd = -1;
static int is_stock_system = 0;
static SDL_sem *event_sem = NULL;
static SDL_Thread *thread = NULL;
static uint32_t pre_keypad_bitmaps = 0;

int volume_inc(void);
int volume_dec(void);

static void check_mouse_pos(void)
{
    if (MMiyooEventInfo.mouse.y < MMiyooEventInfo.mouse.miny) {
        MMiyooEventInfo.mouse.y = MMiyooEventInfo.mouse.miny;
    }
    if (MMiyooEventInfo.mouse.y > MMiyooEventInfo.mouse.maxy) {
        MMiyooEventInfo.mouse.y = MMiyooEventInfo.mouse.maxy;
    }
    if (MMiyooEventInfo.mouse.x < MMiyooEventInfo.mouse.minx) {
        MMiyooEventInfo.mouse.x = MMiyooEventInfo.mouse.minx;
    }
    if (MMiyooEventInfo.mouse.x >= MMiyooEventInfo.mouse.maxx) {
        MMiyooEventInfo.mouse.x = MMiyooEventInfo.mouse.maxx;
    }
}

static int get_move_interval(int type)
{
    float move = 0.0;

    if (nds.dis_mode == NDS_DIS_MODE_HH0) {
        move = ((float)clock() - nds.pen.pre_ticks) / ((type == 0) ? nds.pen.yv : nds.pen.xv);
    }
    else {
        move = ((float)clock() - nds.pen.pre_ticks) / ((type == 0) ? nds.pen.xv : nds.pen.yv);
    }

    if (move <= 0.0) {
        move = 1.0;
    }
    return (int)(1.0 * move);
}

int EventUpdate(void *data)
{
    const uint32_t L1 = 18;
    const uint32_t L2 = 15;
    const uint32_t R1 = 20;
    const uint32_t R2 = 14;

    const uint32_t UP = 103;
    const uint32_t DOWN = 108;
    const uint32_t LEFT = 105;
    const uint32_t RIGHT = 106;

    struct input_event ev = {0};
    uint32_t bit = 0, hotkey = 0;
    uint32_t l1 = L1;
    uint32_t l2 = L2;
    uint32_t r1 = R1;
    uint32_t r2 = R2;

    uint32_t up = UP;
    uint32_t down = DOWN;
    uint32_t left = LEFT;
    uint32_t right = RIGHT;

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

    while (running) {
        SDL_SemWait(event_sem);

        if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0) && nds.dpad_90d) {
            right = UP;
            left = DOWN;
            up = LEFT;
            down = RIGHT;
        }
        else {
            up = UP;
            down = DOWN;
            left = LEFT;
            right = RIGHT;
        }

        if (event_fd > 0) {
            if (read(event_fd, &ev, sizeof(struct input_event))) {
                if ((ev.type == EV_KEY) && (ev.value != 2)) {
                    //printf("%s, code:%d\n", __func__, ev.code);

                    if (ev.code == l1) { bit = (1 << MYKEY_L1); }
                    if (ev.code == l2) { bit = (1 << MYKEY_L2); }
                    if (ev.code == r1) { bit = (1 << MYKEY_R1); }
                    if (ev.code == r2) { bit = (1 << MYKEY_R2); }
                    
                    if (ev.code == up) { bit = (1 << MYKEY_UP); }
                    if (ev.code == down) { bit = (1 << MYKEY_DOWN); }
                    if (ev.code == left) { bit = (1 << MYKEY_LEFT); }
                    if (ev.code == right) { bit = (1 << MYKEY_RIGHT); }

                    switch (ev.code) {
                    case 57:  bit = (1 << MYKEY_A);      break;
                    case 29:  bit = (1 << MYKEY_B);      break;
                    case 42:  bit = (1 << MYKEY_X);      break;
                    case 56:  bit = (1 << MYKEY_Y);      break;
                    case 28:  bit = (1 << MYKEY_START);  break;
                    case 97:  bit = (1 << MYKEY_SELECT); break;
                    case 1:   bit = (1 << MYKEY_MENU);   break;
                    case 116: bit = (1 << MYKEY_POWER);  break;
                    case 115: bit = (1 << MYKEY_VOLUP);
                        if (is_stock_system && (ev.value == 0)) {
                            nds.volume = volume_inc();
                        }
                        else {
                            nds.defer_update_bg = 180;
                        }
                        break;
                    case 114: bit = (1 << MYKEY_VOLDOWN);
                        if (is_stock_system && (ev.value == 0)) {
                            nds.volume = volume_dec();
                        }
                        else {
                            nds.defer_update_bg = 180;
                        }
                        break;
                    }

                    if(bit){
                        if(ev.value){
                            MMiyooEventInfo.keypad.bitmaps|= bit;
                        }
                        else{
                            MMiyooEventInfo.keypad.bitmaps&= ~bit;
                        }
                    }

                    if (nds.menu.enable == 0) {
                        hotkey = MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_SELECT);
                    }
                    else {
                        hotkey = 0;
                    }
                    
                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_UP))) {
                        if (MMiyooEventInfo.mode == MMIYOO_MOUSE_MODE) {
                            nds.pen.pos = 1;
                        }
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_UP);
                    }
                    
                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_DOWN))) {
                        if (MMiyooEventInfo.mode == MMIYOO_MOUSE_MODE) {
                            nds.pen.pos = 0;
                        }
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_DOWN);
                    }
                    
                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_A))) {
                        if ((MMiyooEventInfo.mode == MMIYOO_KEYPAD_MODE) && (nds.hres_mode == 0)) {
                            uint32_t tmp = nds.alt_mode;
                            nds.alt_mode = nds.dis_mode;
                            nds.dis_mode = tmp;
                        }
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_A);
                    }
                    
                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_B))) {
                        down_scale = down_scale ? 0 : 1;
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_B);
                    }
                    
                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_Y))) {
                        if (MMiyooEventInfo.mode == MMIYOO_KEYPAD_MODE) {
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
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_Y);
                    }

                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_START))) {
                        if (nds.menu.enable == 0) {
                            nds.menu.enable = 1;

                            usleep(100000);
                            handle_menu(-1);

                            hotkey = 0;
                            pre_keypad_bitmaps = MMiyooEventInfo.keypad.bitmaps = 0;
                        }
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_START);
                    }

                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_R1))) {
                        MMiyooEventInfo.keypad.bitmaps|= (1 << MYKEY_FF);
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_R1);
                    }

                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_R2))) {
                        MMiyooEventInfo.keypad.bitmaps|= (1 << MYKEY_QSAVE);
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_R2);
                    }

                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_L1))) {
                        MMiyooEventInfo.keypad.bitmaps|= (1 << MYKEY_EXIT);
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_L1);
                    }

                    if (hotkey && (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_L2))) {
                        MMiyooEventInfo.keypad.bitmaps|= (1 << MYKEY_QLOAD);
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_L2);
                    }
                    else if (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_L2)) {
                        MMiyooEventInfo.mode = (MMiyooEventInfo.mode == MMIYOO_KEYPAD_MODE) ? MMIYOO_MOUSE_MODE : MMIYOO_KEYPAD_MODE;
                        MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_L2);

                        if (MMiyooEventInfo.mode == MMIYOO_MOUSE_MODE) {
                            MMiyooEventInfo.mouse.x = (MMiyooEventInfo.mouse.maxx - MMiyooEventInfo.mouse.minx) / 2;
                            MMiyooEventInfo.mouse.y = 120 + (MMiyooEventInfo.mouse.maxy - MMiyooEventInfo.mouse.miny) / 2;
                        }
                    }
                }
            
                if (!(MMiyooEventInfo.keypad.bitmaps & 0x0f)) {
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
    DIR *dir = NULL;

    pre_keypad_bitmaps = 0;
    memset(&MMiyooEventInfo, 0, sizeof(MMiyooEventInfo));
    MMiyooEventInfo.mouse.minx = 0;
    MMiyooEventInfo.mouse.miny = 0;
    MMiyooEventInfo.mouse.maxx = 256;
    MMiyooEventInfo.mouse.maxy = 192;
    MMiyooEventInfo.mouse.x = (MMiyooEventInfo.mouse.maxx - MMiyooEventInfo.mouse.minx) / 2;
    MMiyooEventInfo.mouse.y = 120 + (MMiyooEventInfo.mouse.maxy - MMiyooEventInfo.mouse.miny) / 2;
    MMiyooEventInfo.mode = MMIYOO_KEYPAD_MODE;

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


    dir = opendir("/mnt/SDCARD/.tmp_update");
    if (dir) {
        closedir(dir);
    }
    else {
        is_stock_system = 1;
        printf(PREFIX"run on stock system\n");
    }
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
    const SDL_Scancode code[]={
        SDLK_UP, SDLK_DOWN, SDLK_LEFT, SDLK_RIGHT,
        SDLK_SPACE, SDLK_LCTRL, SDLK_LSHIFT, SDLK_LALT,
        SDLK_e, SDLK_t, SDLK_TAB, SDLK_BACKSPACE,
        SDLK_RCTRL, SDLK_RETURN, SDLK_HOME, SDLK_0, SDLK_1, SDLK_2, SDLK_3, SDLK_HOME, SDLK_BACKSPACE
    };

    SDL_SemWait(event_sem);
    if (nds.menu.enable) {
        int cc = 0;
        uint32_t v0 = pre_keypad_bitmaps;
        uint32_t v1 = MMiyooEventInfo.keypad.bitmaps;

        for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
            if ((v0 & 1) != (v1 & 1)) {
                if ((v1 & 1) == 0) {
                    handle_menu(cc);
                }
            }
            v0>>= 1;
            v1>>= 1;
        }
        pre_keypad_bitmaps = MMiyooEventInfo.keypad.bitmaps;
    }
    else {
        if (MMiyooEventInfo.mode == MMIYOO_KEYPAD_MODE) {
            if (pre_keypad_bitmaps != MMiyooEventInfo.keypad.bitmaps) {
                int cc = 0;
                uint32_t v0 = pre_keypad_bitmaps;
                uint32_t v1 = MMiyooEventInfo.keypad.bitmaps;

                for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
                    if ((v0 & 1) != (v1 & 1)) {
                        SDL_SendKeyboardKey((v1 & 1) ? SDL_PRESSED : SDL_RELEASED, SDL_GetScancodeFromKey(code[cc]));
                    }
                    v0>>= 1;
                    v1>>= 1;
                }

                if (pre_keypad_bitmaps & (1 << MYKEY_QSAVE)) {
                    nds.state|= NDS_STATE_QSAVE;
                    MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_QSAVE);
                }
                if (pre_keypad_bitmaps & (1 << MYKEY_QLOAD)) {
                    nds.state|= NDS_STATE_QLOAD;
                    MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_QLOAD);
                }
                if (pre_keypad_bitmaps & (1 << MYKEY_FF)) {
                    nds.state|= NDS_STATE_FF;
                    MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_FF);
                }
                if (pre_keypad_bitmaps & (1 << MYKEY_EXIT)) {
                    MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_EXIT);
                }
                pre_keypad_bitmaps = MMiyooEventInfo.keypad.bitmaps;
            }
        }
        else {
            int updated = 0;
            
            if (pre_keypad_bitmaps != MMiyooEventInfo.keypad.bitmaps) {
                uint32_t cc = 0;
                uint32_t v0 = pre_keypad_bitmaps;
                uint32_t v1 = MMiyooEventInfo.keypad.bitmaps;

                if ((v0 & (1 << MYKEY_A)) != (v1 & (1 << MYKEY_A))) {
                    SDL_SendMouseButton(MMiyooVideoInfo.window, 0, (v1 & (1 << MYKEY_A)) ? SDL_PRESSED : SDL_RELEASED, SDL_BUTTON_LEFT);
                }
                
                for (cc=0; cc<=MYKEY_LAST_BITS; cc++) {
                    if ((cc == MYKEY_FF) || (cc == MYKEY_QSAVE) || (cc == MYKEY_QLOAD) || (cc == MYKEY_EXIT) || (cc == MYKEY_R2)) {
                        if ((v0 & 1) != (v1 & 1)) {
                            SDL_SendKeyboardKey((v1 & 1) ? SDL_PRESSED : SDL_RELEASED, SDL_GetScancodeFromKey(code[cc]));
                        }
                    }
                    v0>>= 1;
                    v1>>= 1;
                }
            }

            if ((nds.dis_mode == NDS_DIS_MODE_HH0) && (nds.dpad_90d == 0)) {
                if (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_UP)) {
                    updated = 1;
                    MMiyooEventInfo.mouse.x+= get_move_interval(1);
                }
                if (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_DOWN)) {
                    updated = 1;
                    MMiyooEventInfo.mouse.x-= get_move_interval(1);
                }
                if (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_LEFT)) {
                    updated = 1;
                    MMiyooEventInfo.mouse.y-= get_move_interval(0);
                }
                if (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_RIGHT)) {
                    updated = 1;
                    MMiyooEventInfo.mouse.y+= get_move_interval(0);
                }
            }
            else {
                if (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_UP)) {
                    updated = 1;
                    MMiyooEventInfo.mouse.y-= get_move_interval(1);
                }
                if (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_DOWN)) {
                    updated = 1;
                    MMiyooEventInfo.mouse.y+= get_move_interval(1);
                }
                if (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_LEFT)) {
                    updated = 1;
                    MMiyooEventInfo.mouse.x-= get_move_interval(0);
                }
                if (MMiyooEventInfo.keypad.bitmaps & (1 << MYKEY_RIGHT)) {
                    updated = 1;
                    MMiyooEventInfo.mouse.x+= get_move_interval(0);
                }
            }
            check_mouse_pos();

            if(updated){
                int addx = 0, addy = 0;

                if ((MMiyooEventInfo.mouse.minx == 0) && (MMiyooEventInfo.mouse.miny == 120)) {
                    addx = 80;
                }
                if ((MMiyooEventInfo.mouse.minx == 160) && (MMiyooEventInfo.mouse.miny == 0)) {
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
                SDL_SendMouseMotion(MMiyooVideoInfo.window, 0, 0, MMiyooEventInfo.mouse.x + addx, MMiyooEventInfo.mouse.y + addy);
            }
            
            if (pre_keypad_bitmaps & (1 << MYKEY_QSAVE)) {
                MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_QSAVE);
            }
            if (pre_keypad_bitmaps & (1 << MYKEY_QLOAD)) {
                MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_QLOAD);
            }
            if (pre_keypad_bitmaps & (1 << MYKEY_FF)) {
                MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_FF);
            }
            if (pre_keypad_bitmaps & (1 << MYKEY_EXIT)) {
                MMiyooEventInfo.keypad.bitmaps&= ~(1 << MYKEY_EXIT);
            }
            pre_keypad_bitmaps = MMiyooEventInfo.keypad.bitmaps;
        }
    }
    SDL_SemPost(event_sem);
}

#endif

