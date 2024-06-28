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

#if defined(MINI) || defined(UT)
#define INPUT_DEV "/dev/input/event0"
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
#define DEV_KEY_CODE_L2         18
#define DEV_KEY_CODE_R1         14
#define DEV_KEY_CODE_R2         20
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_VOLUP      115
#define DEV_KEY_CODE_VOLDOWN    114
#endif

#if defined(MINI) || defined(UT)
#define DEV_KEY_CODE_UP         103
#define DEV_KEY_CODE_DOWN       108
#define DEV_KEY_CODE_LEFT       105
#define DEV_KEY_CODE_RIGHT      106
#define DEV_KEY_CODE_A          57
#define DEV_KEY_CODE_B          29
#define DEV_KEY_CODE_X          42
#define DEV_KEY_CODE_Y          56
#define DEV_KEY_CODE_L1         18
#define DEV_KEY_CODE_L2         15
#define DEV_KEY_CODE_R1         20
#define DEV_KEY_CODE_R2         14
#define DEV_KEY_CODE_START      28
#define DEV_KEY_CODE_SELECT     97
#define DEV_KEY_CODE_MENU       1
#define DEV_KEY_CODE_POWER      116
#define DEV_KEY_CODE_VOLUP      115
#define DEV_KEY_CODE_VOLDOWN    114
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
#define KEY_BIT_QSAVE           15
#define KEY_BIT_QLOAD           16
#define KEY_BIT_FF              17
#define KEY_BIT_EXIT            18
#define KEY_BIT_MENU_ONION      19
#define KEY_BIT_LAST            KEY_BIT_MENU_ONION // ignore other keys
#define KEY_BIT_POWER           20
#define KEY_BIT_VOLUP           21
#define KEY_BIT_VOLDOWN         22

#define DEF_THRESHOLD_UP        -30
#define DEF_THRESHOLD_DOWN      30
#define DEF_THRESHOLD_LEFT      -30
#define DEF_THRESHOLD_RIGHT     30

typedef enum _move_dir {
    MOVE_DIR_LEFT_RIGHT = 0,
    MOVE_DIR_UP_DOWN
} move_dir_t;

typedef enum _dev_mode {
    DEV_MODE_KEY = 0,
    DEV_MODE_PEN
} dev_mode_t;

typedef struct _miyoo_event_t {
#if defined(MINI) || defined(UT)
    int stock_os;
#endif

    struct {
        uint32_t cur_bits;
        uint32_t pre_bits;
        SDL_Scancode report_key[32];
    } key;

    struct {
        int x;
        int y;
        int max_x;
        int max_y;
        int lower_speed;
        clock_t pre_ticks;
    } pen;

    struct {
        int fd;
        dev_mode_t mode;
    } dev;

    int running;
    SDL_sem *lock;
    SDL_Thread *thread;

void init_event(void);
void quit_event(void);
void pump_event(_THIS);

#endif

