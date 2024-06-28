// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __JOY_NDS_H__
#define __JOY_NDS_H__

#define JOY_NAME "NDS Joy"

#define DEF_CFG_JOY_MIN     -128
#define DEF_CFG_JOY_ZERO    0
#define DEF_CFG_JOY_MAX     128
#define JOY_DEV             "/dev/ttyS0"

#if defined(UT)
#define JOY_CFG_FILE        "joy.cfg"
#endif

#if defined(MIYOO_A30)
#define JOY_CFG_FILE        "/config/joypad.config"
#endif

#if defined(MIYOO_A30) || defined(UT)
#define AXIS_MAX_LEN        16
#define FRAME_LEN           6
#define FRAME_START         0xff
#define FRAME_STOP          0xfe

typedef struct {
    uint8_t magic_start;
    uint8_t unused0;
    uint8_t unused1;
    uint8_t axis0;
    uint8_t axis1;
    uint8_t magic_end;
} joy_frame_t;
#endif

typedef struct {
#if defined(MIYOO_A30) || defined(UT)
    int dev_fd;

    int running;
    SDL_Thread *thread;

    struct {
        int last_x;
        int last_y;

        int x_min;
        int x_max;
        int x_zero;
        int x_dead;

        int y_min;
        int y_max;
        int y_zero;
        int y_dead;

        joy_frame_t cur_frame;
        int32_t cur_axis[AXIS_MAX_LEN];
        int32_t last_axis[AXIS_MAX_LEN];
    } left, right;
#endif
} nds_joy;

#endif

