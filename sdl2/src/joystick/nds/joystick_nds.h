// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __JOYSTICK_NDS_H__
#define __JOYSTICK_NDS_H__

#define JOYSTICK_NAME "Miyoo Joystick"

#if defined(A30) || defined(UT)

#if !defined(UT)
#define A30_JOYSTICK_CFG "/config/joypad.config"
#else
#define A30_JOYSTICK_CFG "./joypad.config"
#endif

#define A30_JOYSTICK_DEV "/dev/ttyS0"
#define A30_AXIS_MAX_LEN 16
#define A30_FRAME_LEN 6
#define A30_FRAME_START 0xff
#define A30_FRAME_STOP 0xfe

typedef struct a30_frame {
    uint8_t magic_start;
    uint8_t unused0;
    uint8_t unused1;
    uint8_t axis0;
    uint8_t axis1;
    uint8_t magic_end;
} a30_frame_t;
#endif

typedef struct miyoo_joystick {
#if defined(A30) || defined(UT)
    int dev_fd;
    int last_x;
    int last_y;
    a30_frame_t cur_frame;
    int32_t cur_axis[A30_AXIS_MAX_LEN];
    int32_t last_axis[A30_AXIS_MAX_LEN];

    int running;
    SDL_Thread *thread;

    int x_min;
    int x_max;
    int x_zero;
    int y_min;
    int y_max;
    int y_zero;
#endif
} miyoo_joystick;

#endif

