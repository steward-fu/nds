// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include "../../SDL_internal.h"

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/select.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <linux/input.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "../../events/SDL_events_c.h"
#include "../../core/linux/SDL_evdev.h"
#include "../../thread/SDL_systhread.h"

#include "SDL_events.h"
#include "SDL_joystick.h"
#include "../SDL_sysjoystick.h"
#include "../SDL_joystick_c.h"

#include "../../video/nds/nds_video.h"

#include "common.h"
#include "nds_joy.h"

#if defined(A30) || defined(FLIP) || defined(UT)
nds_joy myjoy = { 0 };
#endif

#if defined(UT)
TEST_GROUP(sdl2_joystick);

TEST_SETUP(sdl2_joystick)
{
    FILE *f = NULL;

    debug("call %s()\n", __func__);

    f = fopen(JOY_CFG_FILE, "w+");
    if (f) {
        fprintf(f, "x_min=%d\n",  DEF_CFG_JOY_MIN);
        fprintf(f, "x_max=%d\n",  DEF_CFG_JOY_MAX);
        fprintf(f, "x_zero=%d\n", DEF_CFG_JOY_ZERO);
        fprintf(f, "y_min=%d\n",  DEF_CFG_JOY_MIN);
        fprintf(f, "y_max=%d\n",  DEF_CFG_JOY_MAX);
        fprintf(f, "y_zero=%d\n", DEF_CFG_JOY_ZERO);
        fclose(f);
    }

    f = fopen(JOY_RIGHT_CFG_FILE, "w+");
    if (f) {
        fprintf(f, "x_min=%d\n",  DEF_CFG_JOY_MIN);
        fprintf(f, "x_max=%d\n",  DEF_CFG_JOY_MAX);
        fprintf(f, "x_zero=%d\n", DEF_CFG_JOY_ZERO);
        fprintf(f, "y_min=%d\n",  DEF_CFG_JOY_MIN);
        fprintf(f, "y_max=%d\n",  DEF_CFG_JOY_MAX);
        fprintf(f, "y_zero=%d\n", DEF_CFG_JOY_ZERO);
        fclose(f);
    }
}

TEST_TEAR_DOWN(sdl2_joystick)
{
    debug("call %s()\n", __func__);

    unlink(JOY_CFG_FILE);
    unlink(JOY_RIGHT_CFG_FILE);
}
#endif

#if defined(A30) || defined(FLIP) || defined(UT)
static int open_uart(const char *port)
{
    int fd = -1;

    debug("call %s()\n", __func__);

    if (!port) {
        error("invalid port\n");
        return -1;
    }

#if !defined(UT)
    fd = open(port, O_RDWR | O_NOCTTY | O_NDELAY);
    if (fd < 0) {
        error("failed to open \"%s\"\n", port);
        return -1;
    }

    if (fcntl(fd, F_SETFL, 0) < 0) {
        error("failed to set fcntl\n");
        return -1;
    }
#endif

    return fd;
}

#if defined(UT)
TEST(sdl2_joystick, open_uart)
{
    TEST_ASSERT_EQUAL_INT(-1, open_uart(NULL));
}
#endif

static int set_uart(int fd, int speed, int flow_ctrl, int databits, int stopbits, int parity)
{
#if !defined(UT)
    int i = 0;
    int name_arr[] = { 115200, 19200, 9600, 4800, 2400, 1200, 300 };
    int speed_arr[] = { B115200, B19200, B9600, B4800, B2400, B1200, B300 };
#endif
    struct termios options = { 0 };

    debug("call %s(fd=%d)\n", __func__, fd);

    if (fd < 0) {
        error("invalid handle\n");
        return -1;
    }

#if !defined(UT)
    if (tcgetattr(fd, &options) != 0) {
        error("failed to get uart attributes\n");
        return -1;
    }

    for (i = 0; i < sizeof(speed_arr) / sizeof(int); i++) {
        if (speed == name_arr[i]) {
            cfsetispeed(&options, speed_arr[i]);
            cfsetospeed(&options, speed_arr[i]);
        }
    }
#endif

    options.c_cflag |= CLOCAL;
    options.c_cflag |= CREAD;
    switch (flow_ctrl) {
    case 0:
        options.c_cflag &= ~CRTSCTS;
        break;
    case 1:
        options.c_cflag |= CRTSCTS;
        break;
    case 2:
        options.c_cflag |= IXON | IXOFF | IXANY;
        break;
    default:
        error("invalid flow bit(0x%x)\n", flow_ctrl);
        return -1;
    }

    options.c_cflag &= ~CSIZE;
    switch (databits) {
    case 5:
        options.c_cflag |= CS5;
        break;
    case 6:
        options.c_cflag |= CS6;
        break;
    case 7:
        options.c_cflag |= CS7;
        break;
    case 8:
        options.c_cflag |= CS8;
        break;
    default:
        error("invalid data bit(0x%x)\n", databits);
        return -1;
    }

    switch (parity) {
    case 'n':
    case 'N':
        options.c_cflag &= ~PARENB;
        options.c_iflag &= ~INPCK;
        break;
    case 'o':
    case 'O':
        options.c_cflag |= (PARODD | PARENB);
        options.c_iflag |= INPCK;
        break;
    case 'e':
    case 'E':
        options.c_cflag |= PARENB;
        options.c_cflag &= ~PARODD;
        options.c_iflag |= INPCK;
        break;
    case 's':
    case 'S':
        options.c_cflag &= ~PARENB;
        options.c_cflag &= ~CSTOPB;
        break;
    default:
        error("invalid parity bit(0x%x)\n", parity);
        return -1;
    }

    switch (stopbits) {
    case 1:
        options.c_cflag &= ~CSTOPB;
        break;
    case 2:
        options.c_cflag |= CSTOPB;
        break;
    default:
        error("invalid stop bit(0x%x)\n", stopbits);
        return -1;
    }

    options.c_oflag &= ~OPOST;
    options.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
    options.c_iflag &= ~(INLCR | ICRNL | IGNCR);
    options.c_oflag &= ~(ONLCR | OCRNL);
    options.c_cc[VTIME] = 1;
    options.c_cc[VMIN] = 1;

#if !defined(UT)
    tcflush(fd, TCIFLUSH);
    if (tcsetattr(fd, TCSANOW, &options) != 0) {
        error("failed to get uart attributes\n");
        return -1;
    }
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, set_uart)
{
    TEST_ASSERT_EQUAL_INT(-1, set_uart(0, 0, 0, 0, 0, 0));
    TEST_ASSERT_EQUAL_INT(-1, set_uart(0, 9600, 0, 32, 10, 'X'));
    TEST_ASSERT_EQUAL_INT( 0, set_uart(0, 9600, 0, 8,  1,  'N'));
}
#endif

static int init_uart(int fd, int speed, int flow_ctrl, int databits, int stopbits, int parity)
{
    debug("call %s(fd=%d)\n", __func__, fd);

    if (fd < 0) {
        error("invalid handle\n");
        return -1;
    }

    if (set_uart(fd, speed, flow_ctrl, databits, stopbits, parity) < 0) {
        error("failed to set joystick device\n");
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, init_uart)
{
    TEST_ASSERT_EQUAL_INT(-1, init_uart(0, 0, 0, 0, 0, 0));
    TEST_ASSERT_EQUAL_INT( 0, init_uart(0, 9600, 0, 8, 1, 'N'));
}
#endif

static int read_uart(int fd, char *buf, int len)
{
#if !defined(UT)
    int f_sel = 0;
    fd_set f_read = { 0 };
    struct timeval time = { 0 };
#endif

    debug("call %s(fd=%d, buf=%p, len=%d)\n", __func__, fd, buf, len);

    if ((fd < 0) || !buf || (len <= 0)) {
        error("invalid parameters\n");
        return -1;
    }

#if !defined(UT)
    FD_ZERO(&f_read);
    FD_SET(fd, &f_read);

    time.tv_sec = 10;
    time.tv_usec = 0;
    f_sel = select(fd + 1, &f_read, NULL, NULL, &time);
    if (f_sel) {
        return read(fd, buf, len);
    }
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, read_uart)
{
    char buf[32] = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, read_uart(-1, NULL, 0));
    TEST_ASSERT_EQUAL_INT(-1, read_uart(0, NULL, 0));
    TEST_ASSERT_EQUAL_INT(-1, read_uart(0, buf, 0));
    TEST_ASSERT_EQUAL_INT( 0, read_uart(0, buf, sizeof(buf)));
}
#endif

static int filter_dead_zone(int dead, int newAxis, int oldAxis)
{
    debug("call %s()\n", __func__);

    if (abs(newAxis - oldAxis) < abs(dead)) {
        return 1;
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, filter_dead_zone)
{
    TEST_ASSERT_EQUAL_INT(0, filter_dead_zone(0, 100, 110));
    TEST_ASSERT_EQUAL_INT(1, filter_dead_zone(100, 110, 100));
}
#endif

static int limit_value(int value)
{
    debug("call %s(%d)\n", __func__, value);

    if (value > 127) {
        value = 127;
    }
    else if (value < -128) {
        value = -128;
    }
    return value;
}

#if defined(UT)
TEST(sdl2_joystick, limit_value)
{
    TEST_ASSERT_EQUAL_INT( 127, limit_value(255));
    TEST_ASSERT_EQUAL_INT(   0, limit_value(0));
    TEST_ASSERT_EQUAL_INT(-128, limit_value(-255));
}
#endif

static void update_axis_values(void)
{
    int i = 0;
    int r = 0;

    debug("call %s()\n", __func__);

    for (i = 0; i < AXIS_MAX_LEN; i++) {
        if (myjoy.cur_axis[i] != myjoy.last_axis[i]) {
            r = limit_value(myjoy.cur_axis[i]);

            switch (i) {
            case 0:
                if (!filter_dead_zone(myjoy.left.cali.x.dead, myjoy.cur_axis[i], myjoy.last_axis[i])) {
                    myjoy.left.last.x = r;
                }
                break;
            case 1:
                if (!filter_dead_zone(myjoy.left.cali.y.dead, myjoy.cur_axis[i], myjoy.last_axis[i])) {
                    myjoy.left.last.y = r;
                }
                break;
            case 2:
                if (!filter_dead_zone(myjoy.right.cali.x.dead, myjoy.cur_axis[i], myjoy.last_axis[i])) {
                    myjoy.right.last.x = r;
                }
                break;
            case 3:
                if (!filter_dead_zone(myjoy.right.cali.y.dead, myjoy.cur_axis[i], myjoy.last_axis[i])) {
                    myjoy.right.last.y = r;
                }
                break;
            }
        }
        myjoy.last_axis[i] = myjoy.cur_axis[i];
    }
}

#if defined(UT)
TEST(sdl2_joystick, update_axis_values)
{
    myjoy.left.cali.x.dead = 0;
    myjoy.left.last.x = 0;
    myjoy.cur_axis[0] = 100;
    myjoy.last_axis[0] = 0;

    myjoy.left.cali.y.dead = 0;
    myjoy.left.last.y = 0;
    myjoy.cur_axis[1] = 100;
    myjoy.last_axis[1] = 0;
    update_axis_values();
    TEST_ASSERT_EQUAL_INT(100, myjoy.left.last.x);
    TEST_ASSERT_EQUAL_INT(100, myjoy.left.last.y);

    myjoy.left.cali.x.dead = 110;
    myjoy.left.last.x = 0;
    myjoy.cur_axis[0] = 100;
    myjoy.last_axis[0] = 0;

    myjoy.left.cali.y.dead = 110;
    myjoy.left.last.y = 0;
    myjoy.cur_axis[1] = 100;
    myjoy.last_axis[1] = 0;
    update_axis_values();
    TEST_ASSERT_EQUAL_INT(0, myjoy.left.last.x);
    TEST_ASSERT_EQUAL_INT(0, myjoy.left.last.y);
}
#endif

static int frame_to_axis(cali_t *c, uint8_t raw)
{
    int div = 0;
    int value = 0;

    debug("call %s()\n", __func__);

    div = c->max - c->zero;
    if ((raw > c->zero) && (div > 0)) {
        value = ((raw - c->zero) * 126) / div;
    }

    div = c->zero - c->min;
    if ((raw < c->zero) && (div > 0)) {
        value = ((raw - c->zero) * 126) / div;
    }

    if ((value > 0) && (value < c->dead)) {
        return 0;
    }

    if ((value < 0) && (value > -(c->dead))) {
        return 0;
    }

    return value;
}

#if defined(UT)
TEST(sdl2_joystick, frame_to_axis)
{
    myjoy.left.cali.x.max = 0;
    myjoy.left.cali.x.zero = 0;
    myjoy.left.cali.x.dead = 0;
    TEST_ASSERT_EQUAL_INT(0, frame_to_axis(&myjoy.left.cali.x, 0));

    myjoy.left.cali.x.max = 1;
    myjoy.left.cali.x.zero = 0;
    myjoy.left.cali.x.dead = 0;
    TEST_ASSERT_EQUAL_INT(32130, frame_to_axis(&myjoy.left.cali.x, 255));

    myjoy.left.cali.x.max = 1;
    myjoy.left.cali.x.zero = 0;
    myjoy.left.cali.x.dead = 32131;
    TEST_ASSERT_EQUAL_INT(0, frame_to_axis(&myjoy.left.cali.x, 255));
}
#endif

static int parse_serial_buf(const char *cmd, int len)
{
    int i = 0;
    int p = 0;
    int s = 0;

    debug("call %s()\n", __func__);

    if (!cmd || (len < FRAME_LEN)) {
        error("invalid parameters(%p, 0x%x)\n", cmd, len);
        return -1;
    }

    s = len - FRAME_LEN;
    s += 1;
    for (i = 0; i < s; i += FRAME_LEN) {
        for (p = 0; p < (FRAME_LEN - 1); p++) {
            int tail = i + (FRAME_LEN - 1);

            if (tail >= len) {
                break;
            }

            if ((cmd[i] == (char)FRAME_START) &&
                (cmd[tail] == (char)FRAME_STOP))
            {
                memcpy(&myjoy.cur_frame, cmd + i, sizeof(myjoy.cur_frame));
                break;
            }
            else {
                i += 1;
            }
        }
    }

#if defined(FLIP)
    myjoy.cur_axis[0] = frame_to_axis(&myjoy.left.cali.x, myjoy.cur_frame.left_x);
    myjoy.cur_axis[1] = frame_to_axis(&myjoy.left.cali.y, myjoy.cur_frame.left_y);
    myjoy.cur_axis[2] = frame_to_axis(&myjoy.right.cali.x, myjoy.cur_frame.right_x);
    myjoy.cur_axis[3] = frame_to_axis(&myjoy.right.cali.y, myjoy.cur_frame.right_y);
#endif

#if defined(A30)
    myjoy.cur_axis[0] = frame_to_axis(&myjoy.left.cali.x, myjoy.cur_frame.right_y);
    myjoy.cur_axis[1] = frame_to_axis(&myjoy.left.cali.y, myjoy.cur_frame.right_x);
#endif

    update_axis_values();
    debug("axis=%d,%d,%d,%d\n", myjoy.cur_axis[0], myjoy.cur_axis[1], myjoy.cur_axis[2], myjoy.cur_axis[3]);

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, parse_serial_buf)
{
    char buf0[] = { FRAME_START, 1, 2, 11, 22, FRAME_STOP };
    char buf1[] = { 5, 6, FRAME_START, 1, 2, 33, 44, FRAME_STOP };
    char buf2[] = { 5, 6, FRAME_START, 1, 2, 3 };

    TEST_ASSERT_EQUAL_INT(-1, parse_serial_buf(NULL, 0));
    TEST_ASSERT_EQUAL_INT(-1, parse_serial_buf(buf0, 0));

    TEST_ASSERT_EQUAL_INT(0, parse_serial_buf(buf0, sizeof(buf0)));
    TEST_ASSERT_EQUAL_INT(FRAME_START, myjoy.cur_frame.magic_start);
    TEST_ASSERT_EQUAL_INT(buf0[1], myjoy.cur_frame.left_y);
    TEST_ASSERT_EQUAL_INT(buf0[2], myjoy.cur_frame.left_x);
    TEST_ASSERT_EQUAL_INT(buf0[3], myjoy.cur_frame.right_y);
    TEST_ASSERT_EQUAL_INT(buf0[4], myjoy.cur_frame.right_x);
    TEST_ASSERT_EQUAL_INT(FRAME_STOP, myjoy.cur_frame.magic_end);

    TEST_ASSERT_EQUAL_INT(0, parse_serial_buf(buf1, sizeof(buf1)));
    TEST_ASSERT_EQUAL_INT(FRAME_START, myjoy.cur_frame.magic_start);
    TEST_ASSERT_EQUAL_INT(buf1[3], myjoy.cur_frame.left_y);
    TEST_ASSERT_EQUAL_INT(buf1[4], myjoy.cur_frame.left_x);
    TEST_ASSERT_EQUAL_INT(buf1[5], myjoy.cur_frame.right_y);
    TEST_ASSERT_EQUAL_INT(buf1[6], myjoy.cur_frame.right_x);
    TEST_ASSERT_EQUAL_INT(FRAME_STOP, myjoy.cur_frame.magic_end);

    memset(&myjoy.cur_frame, 0, sizeof(myjoy.cur_frame));
    TEST_ASSERT_EQUAL_INT(0, parse_serial_buf(buf2, sizeof(buf2)));
    TEST_ASSERT_EQUAL_INT(0, myjoy.cur_frame.magic_start);
    TEST_ASSERT_EQUAL_INT(0, myjoy.cur_frame.left_y);
    TEST_ASSERT_EQUAL_INT(0, myjoy.cur_frame.left_x);
    TEST_ASSERT_EQUAL_INT(0, myjoy.cur_frame.right_y);
    TEST_ASSERT_EQUAL_INT(0, myjoy.cur_frame.right_x);
    TEST_ASSERT_EQUAL_INT(0, myjoy.cur_frame.magic_end);
}
#endif

static int init_serial(void)
{
    debug("call %s()\n", __func__);

    memset(myjoy.cur_axis, 0, sizeof(myjoy.cur_axis));
    memset(myjoy.last_axis, 0, sizeof(myjoy.last_axis));
    memset(&(myjoy.cur_frame), 0, sizeof(myjoy.cur_frame));

    myjoy.fd = open_uart(JOY_DEV);
    if (myjoy.fd < 0) {
        error("failedl to open \"%s\"\n", JOY_DEV);
        return -1;
    }

    if (init_uart(myjoy.fd, 9600, 0, 8, 1, 'N') < 0) {
        return -1;
    }
    debug("joy fd=%d\n", myjoy.fd);

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, init_serial)
{
    TEST_ASSERT_EQUAL_INT(-1, init_serial());
    TEST_ASSERT_EQUAL_INT(0, myjoy.cur_frame.magic_start);
    TEST_ASSERT_EQUAL_INT(0, myjoy.cur_axis[0]);
    TEST_ASSERT_EQUAL_INT(0, myjoy.last_axis[0]);
}
#endif

static int read_joy_cfg(const char *path, cali_t *x, cali_t *y)
{
    FILE *f = NULL;
    char buf[MAX_PATH] = { 0 };

    debug("call %s(%s)\n", __func__, path);

    f = fopen(path, "r");
    if (!f) {
        error("failed to open \"%s\"\n", path);
        return -1;
    }

    while (fgets(buf, sizeof(buf), f)) {
        if (strcasestr(buf, "x_min=")) {
            x->min = atoi(&buf[6]);
            debug("joy x_min=%d\n", x->min);
        }
        else if (strcasestr(buf, "x_max=")) {
            x->max = atoi(&buf[6]);
            debug("joy x_max=%d\n", x->max);
        }
        else if (strcasestr(buf, "x_zero=")) {
            x->zero = atoi(&buf[7]);
            debug("joy x_zero=%d\n", x->zero);
        }
        else if (strcasestr(buf, "y_min=")) {
            y->min = atoi(&buf[6]);
            debug("joy y_min=%d\n", y->min);
        }
        else if (strcasestr(buf, "y_max=")) {
            y->max = atoi(&buf[6]);
            debug("joy y_max=%d\n", y->max);
        }
        else if (strcasestr(buf, "y_zero=")) {
            y->zero = atoi(&buf[7]);
            debug("joy y_zero=%d\n", y->zero);
        }
        else {
            error("invalid string=\"%s\"\n", buf);
        }
    }
    fclose(f);

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, read_joy_cfg)
{
    cali_t x = { 0 };
    cali_t y = { 0 };

    TEST_ASSERT_EQUAL_INT(0, read_joy_cfg(JOY_CFG_FILE, &x, &y));
    TEST_ASSERT_EQUAL_INT(DEF_CFG_JOY_MIN,  x.min);
    TEST_ASSERT_EQUAL_INT(DEF_CFG_JOY_MAX,  x.max);
    TEST_ASSERT_EQUAL_INT(DEF_CFG_JOY_ZERO, x.zero);
    TEST_ASSERT_EQUAL_INT(DEF_CFG_JOY_MIN,  y.min);
    TEST_ASSERT_EQUAL_INT(DEF_CFG_JOY_MAX,  y.max);
    TEST_ASSERT_EQUAL_INT(DEF_CFG_JOY_ZERO, y.zero);
}
#endif

int joy_handler(void *param)
{
#if !defined(UT)
    int r = 0;
    char buf[MAX_PATH] = { 0 };
#endif

    debug("%s()++\n", __func__);

#if !defined(UT)
    myjoy.running = 1;

    while (myjoy.running) {
        r = read_uart(myjoy.fd, buf, sizeof(buf));

        if (r > 0) {
            buf[r] = 0;
            parse_serial_buf(buf, r);
        }
        usleep(10000);
    }
#endif

    debug("%s()--\n", __func__);

    return 0;
}
#endif

#if defined(UT)
TEST(sdl2_joystick, joy_handler)
{
    TEST_ASSERT_EQUAL_INT(0, joy_handler(NULL));
}
#endif

int JoystickInit(void)
{
    debug("call %s()\n", __func__);

#if defined(A30) || defined(FLIP) || defined(UT)
    read_joy_cfg(JOY_CFG_FILE, &myjoy.left.cali.x, &myjoy.left.cali.y);

#if defined(FLIP) || defined(UT)
    read_joy_cfg(JOY_RIGHT_CFG_FILE, &myjoy.right.cali.x, &myjoy.right.cali.y);
#endif

    init_serial();

    myjoy.thread = SDL_CreateThreadInternal(joy_handler, "NDS Joy Handler", 4096, NULL);
    if (myjoy.thread == NULL) {
        error("failed to create thread for joystick\n");
        return -1;
    }
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickInit)
{
    TEST_ASSERT_EQUAL_INT(0, JoystickInit());
}
#endif

void JoystickQuit(void)
{
    debug("call %s()\n", __func__);

#if defined(A30) || defined(FLIP) || defined(UT)
    myjoy.running = 0;

    if (myjoy.thread) {
        SDL_WaitThread(myjoy.thread, NULL);
        myjoy.thread = NULL;
    }

    if (myjoy.fd > 0) {
        close(myjoy.fd);
        myjoy.fd = -1;
    }
#endif
}

#if defined(UT)
TEST(sdl2_joystick, JoystickQuit)
{
    JoystickQuit();
    TEST_PASS();
}
#endif

static int JoystickGetCount(void)
{
    debug("call %s()\n", __func__);

    return 1;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickGetCount)
{
    TEST_ASSERT_EQUAL_INT(1, JoystickGetCount());
}
#endif

static void JoystickDetect(void)
{
    debug("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_joystick, JoystickDetect)
{
    JoystickDetect();
    TEST_PASS();
}
#endif

static const char* JoystickGetDeviceName(int idx)
{
    debug("call %s()\n", __func__);

    return JOY_NAME;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickGetDeviceName)
{
    TEST_ASSERT_EQUAL_STRING(JOY_NAME, JoystickGetDeviceName(0));
}
#endif

static int JoystickGetDevicePlayerIndex(int idx)
{
    debug("call %s()\n", __func__);

    return -1;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickGetDevicePlayerIndex)
{
    TEST_ASSERT_EQUAL_INT(-1, JoystickGetDevicePlayerIndex(0));
}
#endif

static void JoystickSetDevicePlayerIndex(int idx, int player)
{
    debug("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_joystick, JoystickSetDevicePlayerIndex)
{
    JoystickSetDevicePlayerIndex(0, 0);
    TEST_PASS();
}
#endif

static SDL_JoystickGUID JoystickGetDeviceGUID(int idx)
{
    SDL_JoystickGUID guid;
    const char *name = NULL;

    debug("call %s()\n", __func__);

    name = JoystickGetDeviceName(idx);
    SDL_zero(guid);
    SDL_memcpy(&guid, name, SDL_min(sizeof(guid), SDL_strlen(name)));
    return guid;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickGetDeviceGUID)
{
    const int idx = 1;
    SDL_JoystickGUID guid;
    char *dst = (char *)&guid;
    const char *src = JoystickGetDeviceName(idx);

    guid = JoystickGetDeviceGUID(idx);
    TEST_ASSERT_EQUAL(src[0], dst[0]);
}
#endif

static SDL_JoystickID JoystickGetDeviceInstanceID(int idx)
{
    debug("call %s()\n", __func__);

    return idx;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickGetDeviceInstanceID)
{
    const int idx = 1;

    TEST_ASSERT_EQUAL_INT(idx, JoystickGetDeviceInstanceID(idx));
}
#endif

int JoystickOpen(SDL_Joystick *j, int idx)
{
    debug("call %s()\n", __func__);

    if (!j) {
        debug("joystick is null\n");
        return -1;
    }

    j->nbuttons = 18;
    j->naxes = 2;
    j->nhats = 0;
    j->instance_id = idx;
    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickOpen)
{
    const int idx = 1;
    SDL_Joystick j = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, JoystickOpen(NULL, 0));

    TEST_ASSERT_EQUAL_INT(0, JoystickOpen(&j, idx));
    TEST_ASSERT_EQUAL_INT(18, j.nbuttons);
    TEST_ASSERT_EQUAL_INT(idx, j.instance_id);
}
#endif

void JoystickClose(SDL_Joystick *j)
{
    debug("call %s()\n", __func__);

    if (!j) {
        debug("j is null\n");
    }
}

#if defined(UT)
TEST(sdl2_joystick, JoystickClose)
{
    SDL_Joystick j = { 0 };

    JoystickClose(NULL);
    JoystickClose(&j);
    TEST_PASS();
}
#endif

static int JoystickRumble(SDL_Joystick *j, uint16_t low_freq, uint16_t high_freq)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickRumble)
{
    TEST_ASSERT_EQUAL_INT(0, JoystickRumble(NULL, 0, 0));
}
#endif

static int JoystickRumbleTriggers(SDL_Joystick *j, uint16_t left, uint16_t right)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickRumbleTriggers)
{
    TEST_ASSERT_EQUAL_INT(0, JoystickRumbleTriggers(NULL, 0, 0));
}
#endif

static uint32_t JoystickGetCapabilities(SDL_Joystick *j)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickGetCapabilities)
{
    TEST_ASSERT_EQUAL_INT(0, JoystickGetCapabilities(NULL));
}
#endif

static int JoystickSetLED(SDL_Joystick *j, uint8_t r, uint8_t g, uint8_t b)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickSetLED)
{
    TEST_ASSERT_EQUAL_INT(0, JoystickSetLED(NULL, 0, 0, 0));
}
#endif

static int JoystickSendEffect(SDL_Joystick *j, const void *data, int size)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickSendEffect)
{
    TEST_ASSERT_EQUAL_INT(0, JoystickSendEffect(NULL, NULL, 0));
}
#endif

static int JoystickSetSensorsEnabled(SDL_Joystick *j, SDL_bool enabled)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickSetSensorsEnabled)
{
    TEST_ASSERT_EQUAL_INT(0, JoystickSetSensorsEnabled(NULL, 0));
}
#endif

void JoystickUpdate(SDL_Joystick *j)
{
#if defined(A30) || defined(FLIP)
    static int pre_lx = -1;
    static int pre_ly = -1;
    static int pre_rx = -1;
    static int pre_ry = -1;
#endif

    debug("call %s()\n", __func__);

    do {
        if (!j) {
            error("joystick is null\n");
            break;
        }

#if defined(A30) || defined(FLIP)
        if (myjoy.left.last.x != pre_lx) {
            pre_lx = myjoy.left.last.x;
            SDL_PrivateJoystickAxis(j, 0, pre_lx);
        }

        if (myjoy.left.last.y != pre_ly) {
            pre_ly = myjoy.left.last.y;
            SDL_PrivateJoystickAxis(j, 1, pre_ly);
        }

        if (myjoy.right.last.x != pre_rx) {
            pre_rx = myjoy.right.last.x;
            SDL_PrivateJoystickAxis(j, 0, pre_rx);
        }

        if (myjoy.right.last.y != pre_ry) {
            pre_ry = myjoy.left.last.y;
            SDL_PrivateJoystickAxis(j, 1, pre_ry);
        }
#endif
    } while (0);
}

#if defined(UT)
TEST(sdl2_joystick, JoystickUpdate)
{
    JoystickUpdate(NULL);
    TEST_PASS();
}
#endif

static SDL_bool JoystickGetGamepadMapping(int idx, SDL_GamepadMapping *out)
{
    debug("call %s()\n", __func__);

    return SDL_FALSE;
}

#if defined(UT)
TEST(sdl2_joystick, JoystickGetGamepadMapping)
{
    TEST_ASSERT_EQUAL(SDL_FALSE, JoystickGetGamepadMapping(0, NULL));
}
#endif

SDL_JoystickDriver NDS_JoystickDriver = {
    JoystickInit,
    JoystickGetCount,
    JoystickDetect,
    JoystickGetDeviceName,
    JoystickGetDevicePlayerIndex,
    JoystickSetDevicePlayerIndex,
    JoystickGetDeviceGUID,
    JoystickGetDeviceInstanceID,
    JoystickOpen,
    JoystickRumble,
    JoystickRumbleTriggers,
    JoystickGetCapabilities,
    JoystickSetLED,
    JoystickSendEffect,
    JoystickSetSensorsEnabled,
    JoystickUpdate,
    JoystickClose,
    JoystickQuit,
    JoystickGetGamepadMapping
};

