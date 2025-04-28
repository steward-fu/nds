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

#define MYKEY_UP            0
#define MYKEY_DOWN          1
#define MYKEY_LEFT          2
#define MYKEY_RIGHT         3
#define MYKEY_A             4
#define MYKEY_B             5
#define MYKEY_X             6
#define MYKEY_Y             7
#define MYKEY_L1            8
#define MYKEY_R1            9
#define MYKEY_L2            10
#define MYKEY_R2            11
#define MYKEY_SELECT        12
#define MYKEY_START         13
#define MYKEY_MENU          14
#define MYKEY_QSAVE         15
#define MYKEY_QLOAD         16
#define MYKEY_FF            17
#define MYKEY_EXIT          18
#define MYKEY_MENU_ONION    19
#define MYKEY_POWER         20
#define MYKEY_VOLUP         21
#define MYKEY_VOLDOWN       22

#define MYKEY_LAST_BITS     19 // ignore POWER, VOL-, VOL+ keys

#define MMIYOO_KEYPAD_MODE 0
#define MMIYOO_MOUSE_MODE  1

typedef struct _MMIYOO_EventInfo {
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
} MMIYOO_EventInfo;

extern void MMIYOO_EventInit(void);
extern void MMIYOO_EventDeinit(void);
extern void MMIYOO_PumpEvents(_THIS);

#endif

