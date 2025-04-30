// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __NDS_EVENT_H__
#define __NDS_EVENT_H__

#include "../../SDL_internal.h"
#include "nds_event.h"

#if defined(MINI)
#define INPUT_DEV   "/dev/input/event0"
#elif defined(A30)
#define INPUT_DEV   "/dev/input/event3"
#elif defined(FLIP)
#define INPUT_DEV   "/dev/miyooio"
#elif defined(RG28XX)
#define INPUT_DEV   "/dev/input/event1"
#elif defined(PANDORA)
#define INPUT_DEV   "/dev/input/event4"
#elif defined(QX1000)
#define INPUT_DEV   "/dev/input/event3"
#else
#define INPUT_DEV   "/dev/input/event0"
#endif

#if defined(UT)
#define DEV_KEY_CODE_UP         1
#define DEV_KEY_CODE_DOWN       2
#define DEV_KEY_CODE_LEFT       3
#define DEV_KEY_CODE_RIGHT      4
#define DEV_KEY_CODE_A          5
#define DEV_KEY_CODE_B          6
#define DEV_KEY_CODE_X          7
#define DEV_KEY_CODE_Y          8
#define DEV_KEY_CODE_L1         9
#define DEV_KEY_CODE_L2         10
#define DEV_KEY_CODE_R1         11
#define DEV_KEY_CODE_R2         12
#define DEV_KEY_CODE_START      13
#define DEV_KEY_CODE_SELECT     14
#define DEV_KEY_CODE_MENU       15
#define DEV_KEY_CODE_VOL_UP     16
#define DEV_KEY_CODE_VOL_DOWN   17
#endif

#if defined(RG28XX)
#define DEV_KEY_CODE_UP         103
#define DEV_KEY_CODE_DOWN       108
#define DEV_KEY_CODE_LEFT       105
#define DEV_KEY_CODE_RIGHT      106
#define DEV_KEY_CODE_A          57
#define DEV_KEY_CODE_B          29
#define DEV_KEY_CODE_X          42
#define DEV_KEY_CODE_Y          56
#define DEV_KEY_CODE_L1         15
#define DEV_KEY_CODE_L2         18
#define DEV_KEY_CODE_R1         14
#define DEV_KEY_CODE_R2         20
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#endif

#if defined(FLIP)
#define DEV_KEY_BUF_MAX         32
#define DEV_KEY_IDX_MAX         19
#define DEV_KEY_CODE_UP         103
#define DEV_KEY_CODE_DOWN       108
#define DEV_KEY_CODE_LEFT       105
#define DEV_KEY_CODE_RIGHT      106
#define DEV_KEY_CODE_A          57
#define DEV_KEY_CODE_B          29
#define DEV_KEY_CODE_X          42
#define DEV_KEY_CODE_Y          56
#define DEV_KEY_CODE_L1         15
#define DEV_KEY_CODE_L2         18
#define DEV_KEY_CODE_R1         14
#define DEV_KEY_CODE_R2         20
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#endif

#if defined(A30)
#define DEV_KEY_CODE_UP         103
#define DEV_KEY_CODE_DOWN       108
#define DEV_KEY_CODE_LEFT       105
#define DEV_KEY_CODE_RIGHT      106
#define DEV_KEY_CODE_A          57
#define DEV_KEY_CODE_B          29
#define DEV_KEY_CODE_X          42
#define DEV_KEY_CODE_Y          56
#define DEV_KEY_CODE_L1         15
#define DEV_KEY_CODE_L2         18
#define DEV_KEY_CODE_R1         14
#define DEV_KEY_CODE_R2         20
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#endif

#if defined(MINI)
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

#if defined(TRIMUI)
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

#if defined(PANDORA)
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

#if defined(QX1000)
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
        int max_x;
        int max_y;
    } mouse;

    int mode;
} nds_event;

void init_event(void);
void quit_event(void);
void pump_event(_THIS);

#endif

