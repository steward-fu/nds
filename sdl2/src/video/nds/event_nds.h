// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __EVENT_NDS_H__
#define __EVENT_NDS_H__

#include "hook.h"

#if defined(MIYOO_FLIP)
#define INPUT_DEV "/dev/miyooio"
#endif

#if defined(MIYOO_A30) || defined(UT)
#define INPUT_DEV "/dev/input/event3"
#endif

#if defined(MIYOO_MINI)
#define INPUT_DEV "/dev/input/event0"
#endif

#if defined(SFOS_XT897)
#define INPUT_DEV "/dev/input/event1"
#endif

#if defined(MIYOO_FLIP)
#define DEV_KEY_BUF_MAX         32
#define DEV_KEY_IDX_MAX         19

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
#define DEV_KEY_CODE_SELECT     13
#define DEV_KEY_CODE_START      14
#define DEV_KEY_CODE_MENU       15
#define DEV_KEY_CODE_VOL_UP     16
#define DEV_KEY_CODE_VOL_DOWN   17
#endif

#if defined(MIYOO_MINI)
#define DEV_KEY_CODE_UP         103
#define DEV_KEY_CODE_DOWN       108
#define DEV_KEY_CODE_LEFT       105
#define DEV_KEY_CODE_RIGHT      106
#define DEV_KEY_CODE_A          57
#define DEV_KEY_CODE_B          29
#define DEV_KEY_CODE_X          42
#define DEV_KEY_CODE_Y          56
#define DEV_KEY_CODE_L1         18
#define DEV_KEY_CODE_R1         20
#define DEV_KEY_CODE_L2         15
#define DEV_KEY_CODE_R2         14
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#endif

#if defined(MIYOO_A30) || defined(UT)
#define DEV_KEY_CODE_UP         103
#define DEV_KEY_CODE_DOWN       108
#define DEV_KEY_CODE_LEFT       105
#define DEV_KEY_CODE_RIGHT      106
#define DEV_KEY_CODE_A          57
#define DEV_KEY_CODE_B          29
#define DEV_KEY_CODE_X          42
#define DEV_KEY_CODE_Y          56
#define DEV_KEY_CODE_L1         15
#define DEV_KEY_CODE_R1         14
#define DEV_KEY_CODE_L2         18
#define DEV_KEY_CODE_R2         20
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#endif

#if defined(SFOS_XT897)
#define DEV_KEY_CODE_UP         17
#define DEV_KEY_CODE_DOWN       31
#define DEV_KEY_CODE_LEFT       30
#define DEV_KEY_CODE_RIGHT      32
#define DEV_KEY_CODE_A          38
#define DEV_KEY_CODE_B          37
#define DEV_KEY_CODE_X          23
#define DEV_KEY_CODE_Y          24
#define DEV_KEY_CODE_L1         16
#define DEV_KEY_CODE_R1         18
#define DEV_KEY_CODE_L2         -1
#define DEV_KEY_CODE_R2         -2
#define DEV_KEY_CODE_SELECT     51
#define DEV_KEY_CODE_START      52
#define DEV_KEY_CODE_MENU       57
#define DEV_KEY_CODE_VOL_UP     -4
#define DEV_KEY_CODE_VOL_DOWN   -5
#endif

enum key_bits {
    KEY_BIT_UP = 0,
    KEY_BIT_DOWN,
    KEY_BIT_LEFT,
    KEY_BIT_RIGHT,
    KEY_BIT_A,
    KEY_BIT_B,
    KEY_BIT_X,
    KEY_BIT_Y,
    KEY_BIT_L1,
    KEY_BIT_R1,
    KEY_BIT_L2,
    KEY_BIT_R2,
    KEY_BIT_SELECT,
    KEY_BIT_START,
    KEY_BIT_MENU,
    KEY_BIT_SAVE,
    KEY_BIT_LOAD,
    KEY_BIT_FAST,
    KEY_BIT_SWAP,
    KEY_BIT_ROM,
    KEY_BIT_QUIT,
    KEY_BIT_MIC,
    KEY_BIT_VOL_UP,
    KEY_BIT_VOL_DOWN,
    KEY_BIT_MAX
};

enum nds_key_bits {
    NDS_KEY_BIT_UP       = (1 << 0),
    NDS_KEY_BIT_DOWN     = (1 << 1),
    NDS_KEY_BIT_LEFT     = (1 << 2),
    NDS_KEY_BIT_RIGHT    = (1 << 3),
    NDS_KEY_BIT_A        = (1 << 4),
    NDS_KEY_BIT_B        = (1 << 5),
    NDS_KEY_BIT_X        = (1 << 6),
    NDS_KEY_BIT_Y        = (1 << 7),
    NDS_KEY_BIT_L        = (1 << 8),
    NDS_KEY_BIT_R        = (1 << 9),
    NDS_KEY_BIT_START    = (1 << 10),
    NDS_KEY_BIT_SELECT   = (1 << 11),

    NDS_KEY_BIT_SAVE     = 0x0080000,
    NDS_KEY_BIT_LOAD     = 0x0100000,
    NDS_KEY_BIT_FAST     = 0x0200000,
    NDS_KEY_BIT_SWAP     = 0x0400000,
    NDS_KEY_BIT_SCREEN_V = 0x0800000,
    NDS_KEY_BIT_SCREEN_H = 0x1000000,
    NDS_KEY_BIT_MENU     = 0x2000000,
    NDS_KEY_BIT_QUIT     = 0x4000000,
};

typedef struct {
    struct {
        uint32_t cur_bits;
        uint32_t pre_bits;
        SDL_Scancode code[32];
    } key;

    struct {
        uint32_t x;
        uint32_t y;
        uint8_t pressed;
    } mouse;

    int running;
    SDL_Thread *thread;
} nds_event;

void init_event(void);
void quit_event(void);
void pump_event(_THIS);
void prehook_cb_platform_get_input(uintptr_t);

#endif

