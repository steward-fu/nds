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
#elif defined(GKD2)
#define INPUT_DEV   "/dev/input/event2"
#else
#define INPUT_DEV   "/dev/input/event0"
#endif

#if defined(UT)
#define MAX_VOL                 31
#endif

#if defined(RG28XX)
#define MAX_VOL                 31
#define DEV_KEY_BUF_MAX         16

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
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#endif

#if defined(FLIP) || defined(UT)
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
#define DEV_KEY_CODE_R1         14
#define DEV_KEY_CODE_L2         18
#define DEV_KEY_CODE_R2         20
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_POWER      -1
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
#define DEV_KEY_CODE_R1         14
#define DEV_KEY_CODE_L2         18
#define DEV_KEY_CODE_R2         20
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#endif

#if defined(MINI)
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
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_POWER      116
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#endif

#if defined(TRIMUI)
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
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     -1
#define DEV_KEY_CODE_VOL_DOWN   -1
#endif

#if defined(PANDORA)
#define DEV_KEY_CODE_UP         103
#define DEV_KEY_CODE_DOWN       108
#define DEV_KEY_CODE_LEFT       105
#define DEV_KEY_CODE_RIGHT      106
#define DEV_KEY_CODE_A          107
#define DEV_KEY_CODE_B          109
#define DEV_KEY_CODE_X          104
#define DEV_KEY_CODE_Y          102
#define DEV_KEY_CODE_L1         54
#define DEV_KEY_CODE_R1         97
#define DEV_KEY_CODE_START      56
#define DEV_KEY_CODE_SELECT     29
#define DEV_KEY_CODE_MENU       139
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     -1
#define DEV_KEY_CODE_VOL_DOWN   -1
#endif

#if defined(QX1000)
#define DEV_KEY_CODE_UP         16
#define DEV_KEY_CODE_DOWN       30
#define DEV_KEY_CODE_LEFT       43
#define DEV_KEY_CODE_RIGHT      31
#define DEV_KEY_CODE_A          38
#define DEV_KEY_CODE_B          37
#define DEV_KEY_CODE_X          25
#define DEV_KEY_CODE_Y          24
#define DEV_KEY_CODE_L1         41
#define DEV_KEY_CODE_R1         17
#define DEV_KEY_CODE_L2         15
#define DEV_KEY_CODE_R2         28
#define DEV_KEY_CODE_SELECT     53
#define DEV_KEY_CODE_START      29
#define DEV_KEY_CODE_MENU       57
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     -1
#define DEV_KEY_CODE_VOL_DOWN   -1

#define DEV_KEY_CODE_SAVE       46
#define DEV_KEY_CODE_LOAD       49
#define DEV_KEY_CODE_FAST       -1
#define DEV_KEY_CODE_EXIT       1
#endif

#if defined(GKD2)
#define DEV_KEY_CODE_UP         544
#define DEV_KEY_CODE_DOWN       545
#define DEV_KEY_CODE_LEFT       546
#define DEV_KEY_CODE_RIGHT      547
#define DEV_KEY_CODE_A          305
#define DEV_KEY_CODE_B          304
#define DEV_KEY_CODE_X          307
#define DEV_KEY_CODE_Y          308
#define DEV_KEY_CODE_L1         310
#define DEV_KEY_CODE_R1         311
#define DEV_KEY_CODE_L2         312
#define DEV_KEY_CODE_R2         313
#define DEV_KEY_CODE_START      315
#define DEV_KEY_CODE_SELECT     314
#define DEV_KEY_CODE_MENU       704
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     -1
#define DEV_KEY_CODE_VOL_DOWN   -1
#endif

#define KEY_BIT_UP              0
#define KEY_BIT_DOWN            1
#define KEY_BIT_LEFT            2
#define KEY_BIT_RIGHT           3
#define KEY_BIT_A               4
#define KEY_BIT_B               5
#define KEY_BIT_X               6
#define KEY_BIT_Y               7
#define KEY_BIT_L1              8
#define KEY_BIT_R1              9
#define KEY_BIT_L2              10
#define KEY_BIT_R2              11
#define KEY_BIT_SELECT          12
#define KEY_BIT_START           13
#define KEY_BIT_MENU            14
#define KEY_BIT_SAVE            15
#define KEY_BIT_LOAD            16
#define KEY_BIT_FAST            17
#define KEY_BIT_EXIT            18
#define KEY_BIT_ONION           19
#define KEY_BIT_LAST            19

#define KEY_BIT_POWER           20
#define KEY_BIT_VOLUP           21
#define KEY_BIT_VOLDOWN         22

#define NDS_KEY_MODE            0
#define NDS_TOUCH_MODE          1

#if defined(TRIMUI)
typedef struct _cust_key_t {
    int fd;
    uint8_t *mem;
    uint32_t *gpio;
    uint32_t pre_cfg;
} cust_key_t;
#endif

typedef struct {
    int fd;

    struct _keypad{
        uint32_t cur_keys;
        uint32_t pre_keys;

        uint32_t up;
        uint32_t down;
        uint32_t left;
        uint32_t right;
        uint32_t a;
        uint32_t b;
        uint32_t x;
        uint32_t y;
        uint32_t l1;
        uint32_t r1;
        uint32_t l2;
        uint32_t r2;
        uint32_t select;
        uint32_t start;
        uint32_t menu;
        uint32_t power;
        uint32_t vol_up;
        uint32_t vol_down;
        uint32_t save;
        uint32_t load;
        uint32_t fast;
        uint32_t exit;
    } keypad;

    struct _mouse{
        int x;
        int y;
        int max_x;
        int max_y;
        int slow_down;
    } touch;

    int vol;
    int mode;
    SDL_sem *sem;

    struct {
        int running;
        SDL_Thread *id;
    } thread;

#if defined(MINI)
    int is_stock_os;
#endif

#if defined(TRIMUI)
    cust_key_t cust_key;
#endif
} nds_event;

void init_event(void);
void quit_event(void);
void pump_event(_THIS);

#endif

