// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __NDS_EVENT_H__
#define __NDS_EVENT_H__

#include "../../SDL_internal.h"
#include "nds_event.h"
#include "hook.h"

#if defined(MIYOO_MINI)
#define INPUT_DEV   "/dev/input/event0"
#elif defined(MIYOO_FLIP)
#define INPUT_DEV   "/dev/miyooio"
#elif defined(PANDORA)
#define INPUT_DEV   "/dev/input/event4"
#define KEYPAD_DEV  "/dev/input/event0"
#elif defined(QX1000)
#define INPUT_DEV   "/dev/input/event3"
#define TOUCH_DEV   "/dev/input/event1"
#define POWER_DEV   "/dev/input/event0"
#elif defined(QX1050)
#define INPUT_DEV   "/dev/input/event3"
#elif defined(XT897)
#define INPUT_DEV   "/dev/input/event1"
#define TOUCH_DEV   "/dev/input/event7"
#define POWER_DEV   "/dev/input/event3"
#elif defined(XT894)
#define INPUT_DEV   "/dev/input/event3"
#define TOUCH_DEV   "/dev/input/event4"
#define POWER_DEV   "/dev/input/event2"
#elif defined(GKD_PIXEL2)
#define INPUT_DEV   "/dev/input/event2"
#elif defined(GKDMINI)
#define INPUT_DEV   "/dev/input/event2"
#elif defined(TRIMUI_BRICK)
#define INPUT_DEV   "/dev/input/event3"
#elif defined(TRIMUI_SMART)
#define INPUT_DEV   "/dev/input/event0"
#endif

#define CHECK_ONION_FILE "/mnt/SDCARD/.tmp_update"

#if defined(MIYOO_FLIP)
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
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_POWER      116
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114
#endif

#if defined(TRIMUI_SMART)
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
#define DEV_KEY_CODE_L2         -1
#define DEV_KEY_CODE_R2         -1
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
#define DEV_KEY_CODE_L2         25
#define DEV_KEY_CODE_R2         14
#define DEV_KEY_CODE_START      56
#define DEV_KEY_CODE_SELECT     29
#define DEV_KEY_CODE_MENU       57
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     -1
#define DEV_KEY_CODE_VOL_DOWN   -1

#define DEV_KEY_CODE_SAVE       1
#define DEV_KEY_CODE_LOAD       11
#define DEV_KEY_CODE_FAST       3
#define DEV_KEY_CODE_EXIT       16
#endif

#if defined(XT897)
#define DEV_KEY_CODE_UP         17
#define DEV_KEY_CODE_DOWN       31
#define DEV_KEY_CODE_LEFT       30
#define DEV_KEY_CODE_RIGHT      32
#define DEV_KEY_CODE_A          38
#define DEV_KEY_CODE_B          37
#define DEV_KEY_CODE_X          24
#define DEV_KEY_CODE_Y          23
#define DEV_KEY_CODE_L1         16
#define DEV_KEY_CODE_R1         18
#define DEV_KEY_CODE_L2         14
#define DEV_KEY_CODE_R2         41
#define DEV_KEY_CODE_SELECT     51
#define DEV_KEY_CODE_START      52
#define DEV_KEY_CODE_MENU       57
#define DEV_KEY_CODE_POWER      116
#define DEV_KEY_CODE_VOL_UP     -1
#define DEV_KEY_CODE_VOL_DOWN   -1

#define DEV_KEY_CODE_SAVE       2
#define DEV_KEY_CODE_LOAD       11
#define DEV_KEY_CODE_FAST       -1
#define DEV_KEY_CODE_EXIT       28
#endif

#if defined(XT894)
#define DEV_KEY_CODE_UP         17
#define DEV_KEY_CODE_DOWN       31
#define DEV_KEY_CODE_LEFT       30
#define DEV_KEY_CODE_RIGHT      32
#define DEV_KEY_CODE_A          38
#define DEV_KEY_CODE_B          37
#define DEV_KEY_CODE_X          24
#define DEV_KEY_CODE_Y          23
#define DEV_KEY_CODE_L1         16
#define DEV_KEY_CODE_R1         18
#define DEV_KEY_CODE_L2         14
#define DEV_KEY_CODE_R2         40
#define DEV_KEY_CODE_SELECT     51
#define DEV_KEY_CODE_START      52
#define DEV_KEY_CODE_MENU       57
#define DEV_KEY_CODE_POWER      116
#define DEV_KEY_CODE_VOL_UP     -1
#define DEV_KEY_CODE_VOL_DOWN   -1

#define DEV_KEY_CODE_SAVE       2
#define DEV_KEY_CODE_LOAD       11
#define DEV_KEY_CODE_FAST       -1
#define DEV_KEY_CODE_EXIT       28
#endif

#if defined(QX1050)
#define DEV_KEY_CODE_UP         17
#define DEV_KEY_CODE_DOWN       44
#define DEV_KEY_CODE_LEFT       30
#define DEV_KEY_CODE_RIGHT      31
#define DEV_KEY_CODE_A          40
#define DEV_KEY_CODE_B          53
#define DEV_KEY_CODE_X          26
#define DEV_KEY_CODE_Y          39
#define DEV_KEY_CODE_L1         16
#define DEV_KEY_CODE_R1         17
#define DEV_KEY_CODE_L2         100
#define DEV_KEY_CODE_R2         15
#define DEV_KEY_CODE_SELECT     52
#define DEV_KEY_CODE_START      103
#define DEV_KEY_CODE_MENU       57
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     -1
#define DEV_KEY_CODE_VOL_DOWN   -1

#define DEV_KEY_CODE_SAVE       1
#define DEV_KEY_CODE_LOAD       14
#define DEV_KEY_CODE_FAST       -1
#define DEV_KEY_CODE_EXIT       28
#endif

#if defined(QX1000)
#define DEV_KEY_CODE_UP         16
#define DEV_KEY_CODE_DOWN       27
#define DEV_KEY_CODE_LEFT       43
#define DEV_KEY_CODE_RIGHT      30
#define DEV_KEY_CODE_A          40
#define DEV_KEY_CODE_B          52
#define DEV_KEY_CODE_X          25
#define DEV_KEY_CODE_Y          38
#define DEV_KEY_CODE_L1         41
#define DEV_KEY_CODE_R1         17
#define DEV_KEY_CODE_L2         111
#define DEV_KEY_CODE_R2         15
#define DEV_KEY_CODE_SELECT     51
#define DEV_KEY_CODE_START      103
#define DEV_KEY_CODE_MENU       57
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     -1
#define DEV_KEY_CODE_VOL_DOWN   -1

#define DEV_KEY_CODE_SAVE       1
#define DEV_KEY_CODE_LOAD       14
#define DEV_KEY_CODE_FAST       -1
#define DEV_KEY_CODE_EXIT       28
#endif

#if defined(UT)
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
#define DEV_KEY_CODE_R1         10
#define DEV_KEY_CODE_L2         11
#define DEV_KEY_CODE_R2         12
#define DEV_KEY_CODE_SELECT     13
#define DEV_KEY_CODE_START      14
#define DEV_KEY_CODE_MENU       15
#define DEV_KEY_CODE_POWER      16
#define DEV_KEY_CODE_VOL_UP     17
#define DEV_KEY_CODE_VOL_DOWN   18

#define DEV_KEY_CODE_SAVE       19
#define DEV_KEY_CODE_LOAD       20
#define DEV_KEY_CODE_FAST       21
#define DEV_KEY_CODE_EXIT       22
#endif

#if defined(TRIMUI_BRICK)
#define DEV_KEY_CODE_UP         100
#define DEV_KEY_CODE_DOWN       101
#define DEV_KEY_CODE_LEFT       102
#define DEV_KEY_CODE_RIGHT      103
#define DEV_KEY_CODE_A          305
#define DEV_KEY_CODE_B          304
#define DEV_KEY_CODE_X          308
#define DEV_KEY_CODE_Y          307
#define DEV_KEY_CODE_L1         310
#define DEV_KEY_CODE_R1         311
#define DEV_KEY_CODE_L2         104
#define DEV_KEY_CODE_R2         105
#define DEV_KEY_CODE_START      315
#define DEV_KEY_CODE_SELECT     314
#define DEV_KEY_CODE_MENU       316
#define DEV_KEY_CODE_POWER      -1
#define DEV_KEY_CODE_VOL_UP     115
#define DEV_KEY_CODE_VOL_DOWN   114

#define DEV_KEY_CODE_SAVE       317
#define DEV_KEY_CODE_LOAD       318
#endif

#if defined(GKD_PIXEL2)
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

#if defined(GKDMINI)
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
#define DEV_KEY_CODE_MENU       316
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
#define KEY_BIT_QUIT            18
#define KEY_BIT_SWAP            19
#define KEY_BIT_DRASTIC         20
#define KEY_BIT_HINGE           21
#define KEY_BIT_LAST            21

#define KEY_BIT_POWER           22
#define KEY_BIT_VOLUP           23
#define KEY_BIT_VOLDOWN         24

#define NDS_KEY_MODE            0
#define NDS_TOUCH_MODE          1

#define NDS_INPUT_OFFSET        0x80000
#define NDS_KEY_BIT_UP          (1 << 0)
#define NDS_KEY_BIT_DOWN        (1 << 1)
#define NDS_KEY_BIT_LEFT        (1 << 2)
#define NDS_KEY_BIT_RIGHT       (1 << 3)
#define NDS_KEY_BIT_A           (1 << 4)
#define NDS_KEY_BIT_B           (1 << 5)
#define NDS_KEY_BIT_X           (1 << 6)
#define NDS_KEY_BIT_Y           (1 << 7)
#define NDS_KEY_BIT_L           (1 << 8)
#define NDS_KEY_BIT_R           (1 << 9)
#define NDS_KEY_BIT_START       (1 << 10)
#define NDS_KEY_BIT_SELECT      (1 << 11)
#define NDS_KEY_BIT_HINGE       (1 << 12)
#define NDS_KEY_BIT_SAVE        0x0080000
#define NDS_KEY_BIT_LOAD        0x0100000
#define NDS_KEY_BIT_FAST        0x0200000
#define NDS_KEY_BIT_SWAP        0x0400000
#define NDS_KEY_BIT_SCREEN_V    0x0800000
#define NDS_KEY_BIT_SCREEN_H    0x1000000
#define NDS_KEY_BIT_MENU        0x0040000
#define NDS_KEY_BIT_QUIT        0x4000000

#if defined(TRIMUI_SMART) || defined(UT)
typedef struct _cust_key_t {
    int fd;
    uint8_t *mem;
    uint32_t *gpio;
    uint32_t pre_cfg;
} cust_key_t;
#endif

typedef struct {
    int x;
    int y;
    int pressure;
} touch_data_t;

typedef struct {
    int fd;

#if defined(XT894) || defined(XT897) || defined(QX1000)
    int tp_fd;
    int pwr_fd;
#endif

#if defined(PANDORA) || defined(UT)
    int kb_fd;
#endif

    struct _keypad{
        uint32_t cur_bits;
        uint32_t pre_bits;

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
        uint32_t save;
        uint32_t load;
        uint32_t fast;
        uint32_t exit;
        uint32_t swap;
    } keypad;

    struct _mouse{
        int x;
        int y;
        int max_x;
        int max_y;
        int slow_down;
    } touch;

    input_struct input;

    int mode;
    SDL_sem *sem;

    struct {
        int running;
        SDL_Thread *id;
    } thread;

#if defined(TRIMUI_SMART) || defined(UT)
    cust_key_t cust_key;
#endif
} nds_event;

void init_event(void);
void quit_event(void);
void pump_event(_THIS);
void prehook_platform_get_input(uintptr_t);

#endif

