// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __NDS_EVENT_H__
#define __NDS_EVENT_H__

#include "../../SDL_internal.h"
#include "nds_event.h"

#if defined(FLIP)
#define DEV_KEY_BUF_MAX     32
#define DEV_KEY_IDX_MAX     19
#endif

#define KEY_BIT_UP          0
#define KEY_BIT_DOWN        1
#define KEY_BIT_LEFT        2
#define KEY_BIT_RIGHT       3
#define KEY_BIT_A           4
#define KEY_BIT_B           5
#define KEY_BIT_X           6
#define KEY_BIT_Y           7
#define KEY_BIT_L1          8
#define KEY_BIT_R1          9
#define KEY_BIT_L2          10
#define KEY_BIT_R2          11
#define KEY_BIT_SELECT      12
#define KEY_BIT_START       13
#define KEY_BIT_MENU        14
#define KEY_BIT_SAVE        15
#define KEY_BIT_LOAD        16
#define KEY_BIT_FAST        17
#define KEY_BIT_EXIT        18
#define KEY_BIT_ONION       19
#define KEY_BIT_LAST        19

#define KEY_BIT_POWER       20
#define KEY_BIT_VOLUP       21
#define KEY_BIT_VOLDOWN     22

#define NDS_KEY_MODE        0
#define NDS_TOUCH_MODE      1

typedef struct {
    struct _keypad{
        uint32_t cur_keys;
        uint32_t pre_keys;
    } keypad;

    struct _mouse{
        int x;
        int y;
        int maxx;
        int maxy;
    } mouse;

    int mode;
} NDS_Event;

void init_event(void);
void quit_event(void);
void pump_event(_THIS);

#endif

