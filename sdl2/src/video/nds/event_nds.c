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

#include "io_fb.h"
#include "GUIConf.h"
#include "GUI_Protected.h"
#include "LCD_ConfDefaults.h"

#if defined(UT)
#include "unity_fixture.h"
#endif

extern nds_joy myjoy;
extern nds_hook myhook;
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

static uint32_t free_all_keys(void)
{
    int cc = 0;

    for (cc = 0; cc <= KEY_BIT_MAX; cc++) {
        if ((myevt.key.cur_bits & 1) && myevt.key.code[cc]) {
            SDL_SendKeyboardKey(SDL_RELEASED, SDL_GetScancodeFromKey(myevt.key.code[cc]));
        }
        myevt.key.cur_bits >>= 1;
    }
    myevt.key.cur_bits = 0;

    return myevt.key.cur_bits;
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
        myevt.key.cur_bits &= ~(1 << bit);
    }

    return myevt.key.cur_bits;
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

static int get_key_bit(uint32_t code)
{
    debug(SDL"call %s()\n", __func__);

    switch (code) {
    case DEV_KEY_CODE_UP:       return KEY_BIT_UP;
    case DEV_KEY_CODE_DOWN:     return KEY_BIT_DOWN;
    case DEV_KEY_CODE_LEFT:     return KEY_BIT_LEFT;
    case DEV_KEY_CODE_RIGHT:    return KEY_BIT_RIGHT;
    case DEV_KEY_CODE_A:        return KEY_BIT_A;
    case DEV_KEY_CODE_B:        return KEY_BIT_B;
    case DEV_KEY_CODE_X:        return KEY_BIT_X;
    case DEV_KEY_CODE_Y:        return KEY_BIT_Y;
    case DEV_KEY_CODE_L1:       return KEY_BIT_L1;
    case DEV_KEY_CODE_R1:       return KEY_BIT_R1;
    case DEV_KEY_CODE_L2:       return KEY_BIT_L2;
    case DEV_KEY_CODE_R2:       return KEY_BIT_R2;
    case DEV_KEY_CODE_SELECT:   return KEY_BIT_SELECT;
    case DEV_KEY_CODE_START:    return KEY_BIT_START;
    case DEV_KEY_CODE_MENU:     return KEY_BIT_MENU;
    case DEV_KEY_CODE_VOL_UP:   return KEY_BIT_VOL_UP;
    case DEV_KEY_CODE_VOL_DOWN: return KEY_BIT_VOL_DOWN;
    }

    return -1;
}

#if defined(UT)
TEST(sdl2_event, get_key_bit)
{
    TEST_ASSERT_EQUAL_INT(KEY_BIT_A, get_key_bit(DEV_KEY_CODE_A));
}
#endif

static int send_gui_event(void)
{
    int cc = 0;
    uint32_t v = 0;

    const int MOV = 5;
    GUI_PID_STATE mouse = { 0 };

    debug(SDL"call %s()\n", __func__);

    for (cc = 0; cc < KEY_BIT_MAX; cc++) {
        v = (myevt.key.cur_bits & (1 << cc)) ? 1 : 0;

        switch (cc) {
        case KEY_BIT_UP:
            if (v && (myevt.mouse.y > 0)) {
                myevt.mouse.y -= MOV;
            }
            break;
        case KEY_BIT_DOWN:
            if (v && (myevt.mouse.y < SCREEN_H)) {
                myevt.mouse.y += MOV;
            }
            break;
        case KEY_BIT_LEFT:
            if (v && (myevt.mouse.x > 0)) {
                myevt.mouse.x -= MOV;
            }
            break;
        case KEY_BIT_RIGHT:
            if (v && (myevt.mouse.x < SCREEN_W)) {
                myevt.mouse.x += MOV;
            }
            break;
        case KEY_BIT_A:
            myevt.mouse.pressed = v;
            break;
        }
    }

    mouse.x = myevt.mouse.x;
    mouse.y = myevt.mouse.y;
    mouse.Pressed = myevt.mouse.pressed;
    debug(SDL"mouse event(x=%d, y=%d, pressed=%d)\n", mouse.x, mouse.y, mouse.Pressed);

    GUI_MOUSE_StoreState(&mouse);
    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_gui_event)
{
    TEST_ASSERT_EQUAL_INT(0, send_gui_event());
}
#endif

static uint32_t remap_key(uint32_t k)
{
    uint32_t r = 0;

    debug(SDL"call %s(%d)\n", __func__, k);

    r = (((k >> 0x16) & 0x300) | (k & 0xff));
    debug(SDL"remapped key=%d\n", r);
    return r;
}

#if defined(UT)
TEST(sdl2_event, remap_key)
{
    TEST_ASSERT_EQUAL_INT(338, remap_key(SDLK_UP));
}
#endif

static int generate_update_keys(uint32_t k[2][CONTROL_INDEX_MAX])
{
    debug(SDL"call %s()\n", __func__);

    k[0][CONTROL_INDEX_UP]              = remap_key(myevt.key.code[KEY_BIT_UP]);
    k[0][CONTROL_INDEX_DOWN]            = remap_key(myevt.key.code[KEY_BIT_DOWN]);
    k[0][CONTROL_INDEX_LEFT]            = remap_key(myevt.key.code[KEY_BIT_LEFT]);
    k[0][CONTROL_INDEX_RIGHT]           = remap_key(myevt.key.code[KEY_BIT_RIGHT]);
    k[0][CONTROL_INDEX_A]               = remap_key(myevt.key.code[KEY_BIT_A]);
    k[0][CONTROL_INDEX_B]               = remap_key(myevt.key.code[KEY_BIT_B]);
    k[0][CONTROL_INDEX_X]               = remap_key(myevt.key.code[KEY_BIT_X]);
    k[0][CONTROL_INDEX_Y]               = remap_key(myevt.key.code[KEY_BIT_Y]);
    k[0][CONTROL_INDEX_L]               = remap_key(myevt.key.code[KEY_BIT_L1]);
    k[0][CONTROL_INDEX_R]               = remap_key(myevt.key.code[KEY_BIT_R1]);
    k[0][CONTROL_INDEX_START]           = remap_key(myevt.key.code[KEY_BIT_START]);
    k[0][CONTROL_INDEX_SELECT]          = remap_key(myevt.key.code[KEY_BIT_SELECT]);

    k[0][CONTROL_INDEX_MENU]            = remap_key(myevt.key.code[KEY_BIT_MENU]);
    k[0][CONTROL_INDEX_SAVE_STATE]      = remap_key(myevt.key.code[KEY_BIT_SAVE]);
    k[0][CONTROL_INDEX_LOAD_STATE]      = remap_key(myevt.key.code[KEY_BIT_LOAD]);
    k[0][CONTROL_INDEX_FAST_FORWARD]    = remap_key(myevt.key.code[KEY_BIT_FAST]);
    k[0][CONTROL_INDEX_SWAP_SCREENS]    = remap_key(myevt.key.code[KEY_BIT_SWAP]);
    k[0][CONTROL_INDEX_LOAD_GAME]       = remap_key(myevt.key.code[KEY_BIT_ROM]);
    k[0][CONTROL_INDEX_QUIT]            = remap_key(myevt.key.code[KEY_BIT_QUIT]);
    k[0][CONTROL_INDEX_FAKE_MICROPHONE] = remap_key(myevt.key.code[KEY_BIT_MIC]);
    return 0;
}

#if defined(UT)
TEST(sdl2_event, generate_update_keys)
{
    uint32_t k[2][CONTROL_INDEX_MAX] = { 0 };

    TEST_ASSERT_EQUAL_INT(0, generate_update_keys(k));
    TEST_ASSERT_EQUAL_INT(338, k[0][CONTROL_INDEX_UP]);
}
#endif

static int input_handler(void *data)
{
    int need_gen_key = 1;
    uint32_t new_update_keys[2][CONTROL_INDEX_MAX] = { 0 };

#if !defined(UT)
    int fd = -1;
    int act = 0;
    int bit = 0;

#if !defined(MIYOO_FLIP)
    struct input_event ev = {{ 0 }};
#endif

#if defined(MIYOO_FLIP)
    int cc = 0;
    int pre_bits = 0;
    int buf[DEV_KEY_BUF_MAX] = { 0 };
    int idx[DEV_KEY_BUF_MAX] = {
        /* 0  */ DEV_KEY_CODE_B,
        /* 1  */ DEV_KEY_CODE_Y,
        /* 2  */ DEV_KEY_CODE_SELECT,
        /* 3  */ DEV_KEY_CODE_START,
        /* 4  */ DEV_KEY_CODE_UP,
        /* 5  */ DEV_KEY_CODE_DOWN,
        /* 6  */ DEV_KEY_CODE_LEFT,
        /* 7  */ DEV_KEY_CODE_RIGHT,
        /* 8  */ DEV_KEY_CODE_A,
        /* 9  */ DEV_KEY_CODE_X,
        /* 10 */ DEV_KEY_CODE_L1,
        /* 11 */ DEV_KEY_CODE_R1,
        /* 12 */ DEV_KEY_CODE_L2,
        /* 13 */ DEV_KEY_CODE_R2,
        /* 14 */ -1,
        /* 15 */ -1,
        /* 16 */ DEV_KEY_CODE_MENU,
        /* 17 */ DEV_KEY_CODE_VOL_UP,
        /* 18 */ DEV_KEY_CODE_VOL_DOWN,
        /* 19 */ -1
    };
#endif
#endif

    debug(SDL"call %s()++\n", __func__);

#if !defined(UT)
    fd = open(INPUT_DEV, O_RDONLY | O_NONBLOCK | O_CLOEXEC);
    if(fd < 0){
        error(SDL"failed to open \"%s\"\n", INPUT_DEV);
        exit(-1);
    }

    myevt.running = 1;
    while (myevt.running) {
        act = 0;

        if (need_gen_key && *myhook.var.system.config.controls_a[CONTROL_INDEX_UP]) {
            need_gen_key = 0;
            generate_update_keys(new_update_keys);
            update_keys(new_update_keys);
        }

#if defined(MIYOO_FLIP)
        if (read(fd, buf, sizeof(buf))) {
            for (cc = 0; cc < DEV_KEY_IDX_MAX; cc++) {
                if ((!!buf[cc]) == (!!(pre_bits & (1 << cc)))) {
                    continue;
                }
                debug(SDL"%s, idx=%d, value=%d\n", INPUT_DEV, idx[cc], !!buf[cc]);

                bit = get_key_bit(idx[cc]);
                if (bit >= 0) {
                    act = 1;
                    set_key_bit(bit, !!buf[cc]);
                }

                if (buf[cc]) {
                    pre_bits |= (1 << cc);
                }
                else {
                    pre_bits &= ~(1 << cc);
                }
            }
        }
#else
        if (read(fd, &ev, sizeof(struct input_event))) {
            if ((ev.type == EV_KEY) && (ev.value != 2)) {
                debug(SDL"%s, code=%d, value=%d\n", INPUT_DEV, ev.code, ev.value);

                bit = get_key_bit(ev.code);
                if (bit >= 0) {
                    act = 1;
                    set_key_bit(bit, ev.value);
                }
            }
        }
#endif

        if (myvid.mode == MENU) {
            send_gui_event();
        }

        usleep(1000000 / 30);
    }

    if (mycfg.mode == MODE_KEY) {
        free_all_keys();
    }
    close(fd);
#endif

    debug(SDL"call %s()--\n", __func__);
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
    debug(SDL"call %s()\n", __func__);

    myevt.key.code[KEY_BIT_UP]      = SDLK_UP;
    myevt.key.code[KEY_BIT_DOWN]    = SDLK_DOWN;
    myevt.key.code[KEY_BIT_LEFT]    = SDLK_LEFT;
    myevt.key.code[KEY_BIT_RIGHT]   = SDLK_RIGHT;
    myevt.key.code[KEY_BIT_A]       = SDLK_LCTRL;
    myevt.key.code[KEY_BIT_B]       = SDLK_LALT;
    myevt.key.code[KEY_BIT_X]       = SDLK_SPACE;
    myevt.key.code[KEY_BIT_Y]       = SDLK_LSHIFT;
    myevt.key.code[KEY_BIT_L1]      = SDLK_TAB;
    myevt.key.code[KEY_BIT_R1]      = SDLK_BACKSPACE;
    myevt.key.code[KEY_BIT_L2]      = SDLK_PAGEUP;
    myevt.key.code[KEY_BIT_R2]      = SDLK_PAGEDOWN;
    myevt.key.code[KEY_BIT_SELECT]  = SDLK_ESCAPE;
    myevt.key.code[KEY_BIT_START]   = SDLK_RETURN;

    myevt.key.code[KEY_BIT_MENU]    = SDLK_HOME;
    myevt.key.code[KEY_BIT_SAVE]    = SDLK_0;
    myevt.key.code[KEY_BIT_LOAD]    = SDLK_1;
    myevt.key.code[KEY_BIT_FAST]    = SDLK_2;
    myevt.key.code[KEY_BIT_SWAP]    = SDLK_3;
    myevt.key.code[KEY_BIT_ROM]     = SDLK_4;
    myevt.key.code[KEY_BIT_QUIT]    = SDLK_5;
    myevt.key.code[KEY_BIT_MIC]     = SDLK_6;

    myevt.thread = SDL_CreateThreadInternal(input_handler, "NDS Input Handler", 4096, NULL);
    if(myevt.thread == NULL) {
        error(SDL"failed to create input thread\n");
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
    debug(SDL"call %s()\n", __func__);

    myevt.running = 0;
    if (myevt.thread) {
        SDL_WaitThread(myevt.thread, NULL);
        myevt.thread = NULL;
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
        uint32_t changed = myevt.key.pre_bits ^ myevt.key.cur_bits;

        for (cc = 0; cc < KEY_BIT_MAX; cc++) {
            bit = 1 << cc;

            if (changed & bit) {
#if !defined(UT)
                int pressed = myevt.key.cur_bits & bit ? SDL_PRESSED : SDL_RELEASED;

                debug("send key=%d, press=%d\n", myevt.key.code[cc], pressed);
                SDL_SendKeyboardKey(pressed, SDL_GetScancodeFromKey(myevt.key.code[cc]));
#endif
            }
        }
    }
}

#if defined(UT)
TEST(sdl2_event, pump_event)
{
    pump_event(NULL);
    TEST_PASS();
}
#endif

void prehook_cb_platform_get_input(uintptr_t param)
{
    debug(SDL"call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_event, prehook_cb_platform_get_input)
{
    prehook_cb_platform_get_input(NULL);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(sdl2_event)
{
    RUN_TEST_CASE(sdl2_event, release_all_keys)
    RUN_TEST_CASE(sdl2_event, set_key_bit)
    RUN_TEST_CASE(sdl2_event, get_key_bit)
    RUN_TEST_CASE(sdl2_event, send_gui_event)
    RUN_TEST_CASE(sdl2_event, remap_key)
    RUN_TEST_CASE(sdl2_event, generate_update_keys)
    RUN_TEST_CASE(sdl2_event, input_handler)
    RUN_TEST_CASE(sdl2_event, init_event)
    RUN_TEST_CASE(sdl2_event, quit_event)
    RUN_TEST_CASE(sdl2_event, pump_event)
    RUN_TEST_CASE(sdl2_event, prehook_cb_platform_get_input)
}
#endif

#endif

