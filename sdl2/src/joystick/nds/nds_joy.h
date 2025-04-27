// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __NDS_JOY_H__
#define __NDS_JOY_H__

#define JOY_NAME "NDS Joystick"

#define DEF_CFG_JOY_MIN     -128
#define DEF_CFG_JOY_ZERO    0
#define DEF_CFG_JOY_MAX     128

#if defined(UT)
#define JOY_CFG_FILE        "joy.cfg"
#endif

#if defined(FLIP)
#define JOY_DEV             "/dev/ttyS1"
#define JOY_CFG_FILE        "/userdata/joypad.config"
#define JOY_RIGHT_CFG_FILE  "/userdata/joypad_right.config"
#endif

#if defined(A30)
#define JOY_DEV             "/dev/ttyS0"
#define JOY_CFG_FILE        "/config/joypad.config"
#endif

#if defined(A30) || defined(FLIP) || defined(UT)
#define AXIS_MAX_LEN        4
#define FRAME_LEN           6
#define FRAME_START         0xff
#define FRAME_STOP          0xfe

typedef struct {
    uint8_t magic_start;
    uint8_t axisLY;
    uint8_t axisLX;
    uint8_t axisRY;
    uint8_t axisRX;
    uint8_t magic_end;
} joy_frame_t;

typedef struct {
    int min;
    int max;
    int zero;
    int dead;
} cali_t;

typedef struct {
    int x;
    int y;
} jval_t;
#endif

typedef struct {
#if defined(A30) || defined(FLIP) || defined(UT)
    int fd;

    int running;
    SDL_Thread *thread;

    joy_frame_t cur_frame;
    int32_t cur_axis[AXIS_MAX_LEN];
    int32_t last_axis[AXIS_MAX_LEN];

    struct {
        struct {
            cali_t x;
            cali_t y;
        } cali;

        jval_t last;
    } left, right;
#endif
} nds_joy;

#endif

