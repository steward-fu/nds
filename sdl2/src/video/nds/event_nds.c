// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include "../../SDL_internal.h"

#if SDL_VIDEO_DRIVER_NDS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <dirent.h>
#include <linux/input.h>

#include "../../SDL_internal.h"
#include "../../events/SDL_events_c.h"
#include "../../core/linux/SDL_evdev.h"
#include "../../thread/SDL_systhread.h"

#include "video_nds.h"
#include "event_nds.h"
#include "../../joystick/nds/joy_nds.h"

#include "snd.h"
#include "log.h"
#include "hook.h"
#include "cfg.pb.h"
#include "drastic.h"

#if defined(UT)
#include "unity_fixture.h"
#endif

extern nds_joy myjoy;
extern nds_video myvid;
extern nds_pb_cfg mycfg;

nds_event myevt = {{ 0 }};

#if defined(UT)
TEST_GROUP(sdl2_event);

TEST_SETUP(sdl2_event)
{
    debug(SDL"call %s()\n", __func__);

    reset_cfg();
}

TEST_TEAR_DOWN(sdl2_event)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

static uint32_t release_all_report_keys(void)
{
    int cc = 0;

    for (cc = 0; cc <= KEY_BIT_LAST; cc++) {
        if (myevent.key.cur_bits & 1) {
#if !defined(UT)
            SDL_SendKeyboardKey(
                SDL_RELEASED,
                SDL_GetScancodeFromKey(myevent.key.report_key[cc])
            );
#endif
        }
        myevent.key.cur_bits >>= 1;
    }
    myevent.key.cur_bits = 0;

    return myevent.key.cur_bits;
}

#if defined(UT)
TEST(sdl2_event, release_all_keys)
{
    myevt.key.cur_bits = 0xffffffff;
    TEST_ASSERT_EQUAL_INT(0, free_all_keys());
    TEST_ASSERT_EQUAL_INT(0, myevt.key.cur_bits);
}
#endif

static uint32_t set_key_bit(uint32_t bit, int val)
{
    if (val > 0) {
        myevt.key.cur_bits |= (1 << bit);
    }
    else {
        myevent.key.cur_bits &= ~(1 << bit);
    }

    return myevent.key.cur_bits;
}

#if defined(UT)
TEST(sdl2_event, set_key_bit)
{
    TEST_ASSERT_EQUAL_INT(0, free_all_keys());
    TEST_ASSERT_EQUAL_INT(0, set_key_bit(KEY_BIT_SELECT, 0));
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_A), set_key_bit(KEY_BIT_A, 1));
    TEST_ASSERT_EQUAL_INT(0, set_key_bit(KEY_BIT_A, 0));
}
#endif

#if defined(A30) || defined(UT)
static int update_joystick_key(
    int update_x,
    int update_y,
    int pre_x,
    int pre_y)
{
    static int pre_up = 0;
    static int pre_down = 0;
    static int pre_left = 0;
    static int pre_right = 0;

    int r = 0;

    if (update_x) {
        if (pre_x < myevent.joy.threshold.left) {
            if (pre_left == 0) {
                r = 1;
                pre_left = 1;
                set_key_bit(KEY_BIT_LEFT, 1);
            }
        }
        else if (pre_x > myevent.joy.threshold.right) {
            if (pre_right == 0) {
                r = 1;
                pre_right = 1;
                set_key_bit(KEY_BIT_RIGHT, 1);
            }
        }
        else {
            if (pre_left != 0) {
                r = 1;
                pre_left = 0;
                set_key_bit(KEY_BIT_LEFT, 0);
            }
            if (pre_right != 0) {
                r = 1;
                pre_right = 0;
                set_key_bit(KEY_BIT_RIGHT, 0);
            }
        }
    }

    if (update_y) {
        if (pre_y < myevent.joy.threshold.up) {
            if (pre_up == 0) {
                r = 1;
                pre_up = 1;
                set_key_bit(KEY_BIT_UP, 1);
            }
        }
        else if (pre_y > myevent.joy.threshold.down) {
            if (pre_down == 0) {
                r = 1;
                pre_down = 1;
                set_key_bit(KEY_BIT_DOWN, 1);
            }
        }
        else {
            if (pre_up != 0) {
                r = 1;
                pre_up = 0;
                set_key_bit(KEY_BIT_UP, 0);
            }
            if (pre_down != 0) {
                r = 1;
                pre_down = 0;
                set_key_bit(KEY_BIT_DOWN, 0);
            }
        }
    }

    return r;
}

#if defined(UT)
TEST(sdl2_event, get_key_bit)
{
    TEST_ASSERT_EQUAL_INT(KEY_BIT_A, get_key_bit(DEV_KEY_CODE_A));
}
#endif

#if defined(UT)
TEST(sdl2_event, get_key_bit)
{
    TEST_ASSERT_EQUAL_INT(KEY_BIT_A, get_key_bit(DEV_KEY_CODE_A));
}
#endif

static int input_handler(void *data)
{
    int fd = -1;
    struct input_event ev = {{ 0 }};

    myevent.key.cur_bits = 0;
    TEST_ASSERT_EQUAL_INT(1, update_joystick_key(1, 0, 100, 100));
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_RIGHT), myevent.key.cur_bits);

#if defined(UT)
    return 0;
#endif

#if defined(UT)
    return 0;
#endif

#if defined(UT)
    return 0;
#endif

    fd = open(INPUT_DEV, O_RDONLY | O_NONBLOCK | O_CLOEXEC);
    if(fd < 0){
        error(SDL"failed to open \"%s\"\n", INPUT_DEV);
        exit(-1);
    }

    if (update_y) {
        if (pre_y < myevent.joy.threshold.up) {
            if (pre_up == 0) {
                pre_up = 1;
            }
        }
        else if (pre_y > myevent.joy.threshold.down) {
            if (pre_down == 0) {
                pre_down = 1;
            }
        }
        else {
            if (pre_up != 0) {
                pre_up = 0;
            }
            if (pre_down != 0) {
                pre_down = 0;
            }
        }
    }

if (ev.code == 97) {
    exit(0);
}
                k = get_key_bit(ev.code);
                if (k >= 0) {
                    r = 1;
                    set_key_bit(k, ev.value);
                }
            }
        }
        else {
#if !defined(UT)
            int x = 0;
            int y = 0;
#endif
            const int xv = mycfg.joy.left.x.step;
            const int yv = mycfg.joy.left.y.step;

        if (r) {
        }
        else {
            if (pre_left != 0) {
                r = 1;
                pre_left = 0;
                set_key_bit(mycfg.joy.left.remap.left, 0);
            }
            if (pre_right != 0) {
                r = 1;
                pre_right = 0;
                set_key_bit(mycfg.joy.left.remap.right, 0);
            }
        }
    }

        if (r) {
        }
    }
    free_all_keys();
    close(fd);
    debug(SDL"call %s()++\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_event, input_handler)
{
    TEST_ASSERT_EQUAL_INT(0, input_handler(NULL));
}
#endif

void init_event(void)
{
    TEST_ASSERT_EQUAL_INT(0, input_handler(NULL));
}
#endif

void init_event(void)
{
    struct input_event ev = {0};

    uint32_t l1 = DEV_KEY_CODE_L1;
    uint32_t r1 = DEV_KEY_CODE_R1;
    uint32_t l2 = DEV_KEY_CODE_L2;
    uint32_t r2 = DEV_KEY_CODE_R2;

    uint32_t a = DEV_KEY_CODE_A;
    uint32_t b = DEV_KEY_CODE_B;
    uint32_t x = DEV_KEY_CODE_X;
    uint32_t y = DEV_KEY_CODE_Y;

    uint32_t up = DEV_KEY_CODE_UP;
    uint32_t down = DEV_KEY_CODE_DOWN;
    uint32_t left = DEV_KEY_CODE_LEFT;
    uint32_t right = DEV_KEY_CODE_RIGHT;

    myevent.running = 1;
    while (myevent.running) {
        SDL_SemWait(myevent.lock);

        if ((nds.menu.enable == 0) &&
            (nds.menu.drastic.enable == 0) &&
            nds.keys_rotate)
        {
            if (nds.keys_rotate == 1) {
                up = DEV_KEY_CODE_LEFT;
                down = DEV_KEY_CODE_RIGHT;
                left = DEV_KEY_CODE_DOWN;
                right = DEV_KEY_CODE_UP;

                a = DEV_KEY_CODE_X;
                b = DEV_KEY_CODE_A;
                x = DEV_KEY_CODE_Y;
                y = DEV_KEY_CODE_B;
            }
            else {
                up = DEV_KEY_CODE_RIGHT;
                down = DEV_KEY_CODE_LEFT;
                left = DEV_KEY_CODE_UP;
                right = DEV_KEY_CODE_DOWN;

                a = DEV_KEY_CODE_B;
                b = DEV_KEY_CODE_Y;
                x = DEV_KEY_CODE_A;
                y = DEV_KEY_CODE_X;
            }
        }
        else {
            up = DEV_KEY_CODE_UP;
            down = DEV_KEY_CODE_DOWN;
            left = DEV_KEY_CODE_LEFT;
            right = DEV_KEY_CODE_RIGHT;

            a = DEV_KEY_CODE_A;
            b = DEV_KEY_CODE_B;
            x = DEV_KEY_CODE_X;
            y = DEV_KEY_CODE_Y;
        }

        if (nds.swap_l1l2) {
            l1 = DEV_KEY_CODE_L2;
            l2 = DEV_KEY_CODE_L1;
        }
        else {
            l1 = DEV_KEY_CODE_L1;
            l2 = DEV_KEY_CODE_L2;
        }

        if (nds.swap_r1r2) {
            r1 = DEV_KEY_CODE_R2;
            r2 = DEV_KEY_CODE_R1;
        }
        else {
            r1 = DEV_KEY_CODE_R1;
            r2 = DEV_KEY_CODE_R2;
        }

        if (myevent.dev.fd > 0) {
            int r = 0;

            if (read(myevent.dev.fd, &ev, sizeof(struct input_event))) {
                if ((ev.type == EV_KEY) && (ev.value != 2)) {
                    r = 1;
                    debug(SDL"%s: code:%d, value:%d in %s\n",
                        INPUT_DEV, ev.code, ev.value, __func__);
                    if (ev.code == l1) {
                        set_key_bit(KEY_BIT_L1, ev.value);
                    }
                    if (ev.code == r1) {
                        set_key_bit(KEY_BIT_R1, ev.value);
                    }
                    if (ev.code == up) {
                        set_key_bit(KEY_BIT_UP, ev.value);
                    }
                    if (ev.code == down) {
                        set_key_bit(KEY_BIT_DOWN, ev.value);
                    }
                    if (ev.code == left) {
                        set_key_bit(KEY_BIT_LEFT, ev.value);
                    }
                    if (ev.code == right) {
                        set_key_bit(KEY_BIT_RIGHT, ev.value);
                    }
                    if (ev.code == a) {
                        set_key_bit(KEY_BIT_A, ev.value);
                    }
                    if (ev.code == b) {
                        set_key_bit(KEY_BIT_B, ev.value);
                    }
                    if (ev.code == x) {
                        set_key_bit(KEY_BIT_X, ev.value);
                    }
                    if (ev.code == y) {
                        set_key_bit(KEY_BIT_Y, ev.value);
                    }
#if defined(A30) || defined(UT)
                    if (ev.code == r2) {
                        if (mycfg.joy.left.mode == _joy_lr_mode_pen) {
                            mycfg.pen.show.count = DEF_CFG_PEN_SHOW_COUNT;
                            SDL_SendMouseButton(vid.window, 0,
                                ev.value ? SDL_PRESSED : SDL_RELEASED,
                                SDL_BUTTON_LEFT);
                        }
                        set_key_bit(KEY_BIT_L2, ev.value);
                    }
                    if (ev.code == l2) {
                        set_key_bit(KEY_BIT_R2, ev.value);
                    }
#endif

#if defined(MINI) || defined(UT)
                    if (ev.code == r2) {
                        set_key_bit(KEY_BIT_L2, ev.value);
                    }
                    if (ev.code == l2) {
                        set_key_bit(KEY_BIT_R2, ev.value);
                    }
#endif

                    switch (ev.code) {
                    case DEV_KEY_CODE_START:
                        set_key_bit(KEY_BIT_START, ev.value);
                        break;
                    case DEV_KEY_CODE_SELECT:
                        set_key_bit(KEY_BIT_SELECT, ev.value);
                        break;
                    case DEV_KEY_CODE_MENU:
                        set_key_bit(KEY_BIT_MENU, ev.value);
                        break;
#if defined(MINI) || defined(UT)
                    case DEV_KEY_CODE_POWER:
                        set_key_bit(KEY_BIT_POWER, ev.value);
                        break;
                    case DEV_KEY_CODE_VOLUP:
                        set_key_bit(KEY_BIT_VOLUP, ev.value);
                        if (myevent.stock_os) {
                            if (ev.value == 0) {
                                nds.volume = volume_inc();
                            }
                        }
                        else {
                            nds.defer_update_bg = 60;
                        }
                        break;
                    case DEV_KEY_CODE_VOLDOWN:
                        set_key_bit(KEY_BIT_VOLDOWN, ev.value);
                        if (myevent.stock_os) {
                            if (ev.value == 0) {
                                nds.volume = volume_dec();
                            }
                        }
                        else {
                            nds.defer_update_bg = 60;
                        }
                        break;
#endif

#if defined(A30)
                    case DEV_KEY_CODE_VOLUP:
                        set_key_bit(KEY_BIT_VOLUP, ev.value);
                        if (ev.value == 0) {
                            nds.volume = volume_inc();
                        }
                        break;
                    case DEV_KEY_CODE_VOLDOWN:
                        set_key_bit(KEY_BIT_VOLDOWN, ev.value);
                        if (ev.value == 0) {
                            nds.volume = volume_dec();
                        }
                        break;
#endif
                    }
                }
            }

#if defined(A30) || defined(UT)
            r |= check_joystick_status();
#endif
            if (r > 0) {
                handle_hotkey();
            }
        }
        SDL_SemPost(myevent.lock);
        usleep(150000);
    }
    
    return 0;
}

void EventInit(void)
{
#if defined(MINI) || defined(UT)
    DIR *dir = NULL;

    myevent.stock_os = 1;
    dir = opendir("/mnt/SDCARD/.tmp_update");
    if (dir) {
        closedir(dir);
        myevent.stock_os = 0;
    }
#endif

    myevent.pen.max_x = NDS_W;
    myevent.pen.max_y = NDS_H;
    myevent.pen.x = myevent.pen.max_x >> 1;
    myevent.pen.y = myevent.pen.max_y >> 1;
    myevent.dev.mode = DEV_MODE_KEY;

    myevent.dev.fd = open(INPUT_DEV, O_RDONLY | O_NONBLOCK | O_CLOEXEC);
    if(myevent.dev.fd < 0){
        err(SDL"failed to open \"%s\" in%s\n", INPUT_DEV, __func__);
        exit(-1);
    }

    myevent.lock = SDL_CreateSemaphore(1);
    if(myevent.lock == NULL) {
        err(SDL"failed to create input semaphore in %s\n", __func__);
        exit(-1);
    }

    myevent.key.report_key[KEY_BIT_UP] = SDLK_UP;
    myevent.key.report_key[KEY_BIT_DOWN] = SDLK_DOWN;
    myevent.key.report_key[KEY_BIT_LEFT] = SDLK_LEFT;
    myevent.key.report_key[KEY_BIT_RIGHT] = SDLK_RIGHT;
    myevent.key.report_key[KEY_BIT_A] = SDLK_SPACE;
    myevent.key.report_key[KEY_BIT_B] = SDLK_LCTRL;
    myevent.key.report_key[KEY_BIT_X] = SDLK_LSHIFT;
    myevent.key.report_key[KEY_BIT_Y] = SDLK_LALT;
    myevent.key.report_key[KEY_BIT_L1] = SDLK_e;
    myevent.key.report_key[KEY_BIT_R1] = SDLK_t;
    myevent.key.report_key[KEY_BIT_L2] = SDLK_TAB;
    myevent.key.report_key[KEY_BIT_R2] = SDLK_BACKSPACE;
    myevent.key.report_key[KEY_BIT_SELECT] = SDLK_RCTRL;
    myevent.key.report_key[KEY_BIT_START] = SDLK_RETURN;
    myevent.key.report_key[KEY_BIT_MENU] = SDLK_HOME;
    myevent.key.report_key[KEY_BIT_QSAVE] = SDLK_0;
    myevent.key.report_key[KEY_BIT_QLOAD] = SDLK_1;
    myevent.key.report_key[KEY_BIT_FF] = SDLK_2;
    myevent.key.report_key[KEY_BIT_EXIT] = SDLK_3;
    myevent.key.report_key[KEY_BIT_MENU_ONION] = SDLK_HOME;

#if defined(A30) || defined(UT)
    myevent.joy.threshold.up = DEF_THRESHOLD_UP;
    myevent.joy.threshold.down = DEF_THRESHOLD_DOWN;
    myevent.joy.threshold.left = DEF_THRESHOLD_LEFT;
    myevent.joy.threshold.right = DEF_THRESHOLD_RIGHT;
#endif

    myevent.thread = SDL_CreateThreadInternal(
        input_handler,
        "Miyoo Input Thread",
        4096,
        NULL
    );
    if(myevent.thread == NULL) {
        err(SDL"failed to create input thread in %s\n", __func__);
        exit(-1);
    }
}

#if defined(UT)
TEST(sdl2_event, init_event)
{
    init_event();
    TEST_PASS();
}
#endif

void quit_event(void)
{
    init_event();
    TEST_PASS();
}
#endif

void quit_event(void)
{
    init_event();
    TEST_PASS();
}
#endif

void quit_event(void)
{
    myevent.running = 0;
    if (myevent.thread) {
        SDL_WaitThread(myevent.thread, NULL);
        myevent.thread = NULL;
    }

    if (myevent.lock) {
        SDL_DestroySemaphore(myevent.lock);
        myevent.lock = NULL;
    }

    if(myevent.dev.fd > 0) {
        close(myevent.dev.fd);
        myevent.dev.fd = -1;
    }
}

#if defined(UT)
TEST(sdl2_event, quit_event)
{
    quit_event();
    TEST_PASS();
}
#endif

void pump_event(_THIS)
{
    if (mycfg.mode == MODE_KEY) {
        int cc = 0;
        uint32_t bit = 0;
        uint32_t changed = myevent.key.pre_bits ^ myevent.key.cur_bits;

        for (cc = 0; cc <= KEY_BIT_LAST; cc++) {
            bit = 1 << cc;
            if (changed & bit) {
#if !defined(UT)
                int pressed = myevt.key.cur_bits & bit ? SDL_PRESSED : SDL_RELEASED;

                SDL_SendKeyboardKey(pressed, SDL_GetScancodeFromKey(myevt.key.code[cc]));
#endif
            }
            myevent.key.pre_bits = myevent.key.cur_bits;
        }
    }
    SDL_SemPost(myevent.lock);
}

#if defined(UT)
TEST(sdl2_event, pump_event)
{
    pump_event(NULL);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(sdl2_event)
{
    RUN_TEST_CASE(sdl2_event, release_all_keys)
    RUN_TEST_CASE(sdl2_event, set_key_bit)
    RUN_TEST_CASE(sdl2_event, get_key_bit)
    RUN_TEST_CASE(sdl2_event, input_handler)
    RUN_TEST_CASE(sdl2_event, init_event)
    RUN_TEST_CASE(sdl2_event, quit_event)
    RUN_TEST_CASE(sdl2_event, pump_event)
}
#endif

#endif

