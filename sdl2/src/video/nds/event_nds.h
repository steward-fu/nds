// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __EVENT_NDS_H__
#define __EVENT_NDS_H__

#if defined(MIYOO_FLIP)
#define INPUT_DEV "/dev/input/event5"
#endif

#if defined(MIYOO_A30) || defined(UT)
#define INPUT_DEV "/dev/input/event3"
#endif

#if defined(SFOS_XT897)
#define INPUT_DEV "/dev/input/event1"
#endif

#if defined(MIYOO_FLIP)
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
#define DEV_KEY_CODE_QSAVE      -1
#define DEV_KEY_CODE_QLOAD      -2
#define DEV_KEY_CODE_FFORWARD   -3
#define DEV_KEY_CODE_EXIT       316
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#define DEV_KEY_CODE_POWER      -5
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
#define DEV_KEY_CODE_QSAVE      -1
#define DEV_KEY_CODE_QLOAD      -2
#define DEV_KEY_CODE_FFORWARD   -3
#define DEV_KEY_CODE_EXIT       -4
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#define DEV_KEY_CODE_POWER      -5
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
#define DEV_KEY_CODE_QSAVE      2
#define DEV_KEY_CODE_QLOAD      11
#define DEV_KEY_CODE_FFORWARD   -3
#define DEV_KEY_CODE_EXIT       29
#define DEV_KEY_CODE_VOL_UP     -4
#define DEV_KEY_CODE_VOL_DOWN   -5
#define DEV_KEY_CODE_POWER      -6
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
    KEY_BIT_QSAVE,
    KEY_BIT_QLOAD,
    KEY_BIT_FFORWARD,
    KEY_BIT_EXIT,
    KEY_BIT_VOL_UP,
    KEY_BIT_VOL_DOWN,
    KEY_BIT_POWER,
    KEY_BIT_MAX
};

typedef struct {
    struct {
        uint32_t cur_bits;
        uint32_t pre_bits;
        SDL_Scancode code[32];
    } key;

    int running;
    SDL_Thread *thread;
} nds_event;

void init_event(void);
void quit_event(void);
void pump_event(_THIS);

#endif

