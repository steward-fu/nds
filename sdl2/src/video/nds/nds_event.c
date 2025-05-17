// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <dirent.h>
#include <linux/input.h>

#if defined(RG28XX)
#include <alsa/asoundlib.h>
#endif

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "../../SDL_internal.h"
#include "../../events/SDL_events_c.h"
#include "../../core/linux/SDL_evdev.h"
#include "../../thread/SDL_systhread.h"
#include "../../joystick/nds/nds_joy.h"

#include "snd.h"
#include "common.h"
#include "nds_video.h"
#include "nds_event.h"

nds_event myevent = { 0 };

extern nds_joy myjoy;
extern nds_hook myhook;
extern nds_video myvideo;
extern nds_config myconfig;

const SDL_Scancode nds_key_code[] = {
    SDLK_UP,            // UP
    SDLK_DOWN,          // DOWN
    SDLK_LEFT,          // LEFT
    SDLK_RIGHT,         // RIGHT
    SDLK_RETURN,        // A
    SDLK_ESCAPE,        // B
    SDLK_LSHIFT,        // X
    SDLK_LALT,          // Y
    SDLK_PAGEUP,        // L1
    SDLK_PAGEDOWN,      // R1
    SDLK_TAB,           // L2
    SDLK_BACKSPACE,     // R2
    SDLK_RCTRL,         // SELECT
    SDLK_RETURN,        // START
    SDLK_HOME,          // MENU
    SDLK_0,             // SAVE
    SDLK_1,             // LOAD
    SDLK_2,             // FAST
    SDLK_3,             // EXIT
    SDLK_4,             // SWAP
    SDLK_HOME,          // ONION
};

#if defined(UT)
TEST_GROUP(sdl2_event);

TEST_SETUP(sdl2_event)
{
}

TEST_TEAR_DOWN(sdl2_event)
{
}
#endif

#if defined(RG28XX) || defined(UT)
static int set_rg28xx_vol(void)
{
#if !defined(UT)
    char buf[MAX_PATH] = { 0 };
#endif

    debug("call %s()\n", __func__);

#if !defined(UT)
    sprintf(buf, "amixer set \'lineout volume\' %d", myevent.vol);
    system(buf);
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_event, set_rg28xx_vol)
{
    TEST_ASSERT_EQUAL_INT(0, set_rg28xx_vol());
}
#endif

int inc_rg28xx_vol(void)
{
    debug("call %s()\n", __func__);

    if (myevent.vol < MAX_VOL) {
        myevent.vol += 2;

        if (myevent.vol > MAX_VOL) {
            myevent.vol = MAX_VOL;
        }

        set_rg28xx_vol();
    }

    return myevent.vol;
}

#if defined(UT)
TEST(sdl2_event, inc_rg28xx_vol)
{
    myevent.vol = 0;
    TEST_ASSERT_EQUAL_INT(2, inc_rg28xx_vol());
    myevent.vol = MAX_VOL;
    TEST_ASSERT_EQUAL_INT(MAX_VOL, inc_rg28xx_vol());
}
#endif

int dec_rg28xx_vol(void)
{
    debug("call %s()\n", __func__);

    if (myevent.vol > 0) {
        myevent.vol -= 2;

        if (myevent.vol < 0) {
            myevent.vol = 0;
        }

        set_rg28xx_vol();
    }

    return myevent.vol;
}
#endif

#if defined(UT)
TEST(sdl2_event, dec_rg28xx_vol)
{
    myevent.vol = 0;
    TEST_ASSERT_EQUAL_INT(0, dec_rg28xx_vol());
    myevent.vol = 10;
    TEST_ASSERT_EQUAL_INT(8, dec_rg28xx_vol());
}
#endif

static int limit_touch_axis(void)
{
    int r = 0;

    debug("call %s()\n", __func__);

    if (myevent.touch.x < 0) {
        r = 1;
        myevent.touch.x = 0;
    }
    if (myevent.touch.x >= myevent.touch.max_x) {
        r = 1;
        myevent.touch.x = myevent.touch.max_x;
    }
    if (myevent.touch.y < 0) {
        r = 1;
        myevent.touch.y = 0;
    }
    if (myevent.touch.y > myevent.touch.max_y) {
        r = 1;
        myevent.touch.y = myevent.touch.max_y;
    }

    return r;
}

#if defined(UT)
TEST(sdl2_event, limit_touch_axis)
{
    myevent.touch.x = -10;
    TEST_ASSERT_EQUAL_INT(1, limit_touch_axis());
    TEST_ASSERT_EQUAL_INT(0, myevent.touch.x);
    myevent.touch.x = 10000;
    myevent.touch.max_x = 320;
    TEST_ASSERT_EQUAL_INT(1, limit_touch_axis());
    TEST_ASSERT_EQUAL_INT(myevent.touch.max_x, myevent.touch.x);
}
#endif

static int is_hh_mode(void)
{
    debug("call %s()\n", __func__);

    if ((myconfig.layout.mode.sel == LAYOUT_MODE_T16) ||
        (myconfig.layout.mode.sel == LAYOUT_MODE_T17) ||
        (myconfig.layout.mode.sel == LAYOUT_MODE_T18) ||
        (myconfig.layout.mode.sel == LAYOUT_MODE_T19))
    {
        return 1;
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_event, is_hh_mode)
{
    myconfig.layout.mode.sel = LAYOUT_MODE_T16;
    TEST_ASSERT_EQUAL_INT(1, is_hh_mode());
    myconfig.layout.mode.sel = 0;
    TEST_ASSERT_EQUAL_INT(0, is_hh_mode());
}
#endif

static int inc_touch_axis(int type)
{
    float move = 0.0;
    float v = 100000.0 / ((float)myconfig.pen.speed / 10.0);

    debug("call %s()\n", __func__);

    if (myevent.touch.slow_down) {
        v*= 2;
    }

    move = 250000.0 / v;
    if (move <= 0.0) {
        move = 1.0;
    }
    return (int)(1.0 * move);
}

#if defined(UT)
TEST(sdl2_event, inc_touch_axis)
{
    TEST_ASSERT_EQUAL_INT(1, !!inc_touch_axis(0));
}
#endif

static int release_keys(void)
{
    int cc = 0;

    debug("call %s()\n", __func__);

    for (cc = 0; cc <= KEY_BIT_LAST; cc++) {
        if (myevent.keypad.cur_bits & 1) {
#if !defined(UT)
            SDL_SendKeyboardKey(SDL_RELEASED, SDL_GetScancodeFromKey(nds_key_code[cc]));
#endif
        }
        myevent.keypad.cur_bits >>= 1;
    }
    myevent.input.touch_status = 0;
    myevent.input.button_status = 0;

    return 0;
}

#if defined(UT)
TEST(sdl2_event, release_keys)
{
    myevent.keypad.cur_bits = (1 << KEY_BIT_A);
    TEST_ASSERT_EQUAL_INT(0, release_keys());
    TEST_ASSERT_EQUAL_INT(0, myevent.keypad.cur_bits);
}
#endif

static int hit_hotkey(uint32_t bit)
{
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(UT) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    uint32_t mask = (1 << bit) | (1 << ((myconfig.hotkey == HOTKEY_BIND_SELECT) ? KEY_BIT_SELECT : KEY_BIT_MENU));
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000) || defined(XT897)
    uint32_t mask = (1 << bit) | (1 << KEY_BIT_MENU);
#endif

    debug("call %s(bit=%d)\n", __func__, bit);

    return (myevent.keypad.cur_bits ^ mask) ? 0 : 1;
}

#if defined(UT)
TEST(sdl2_event, hit_hotkey)
{
    myconfig.hotkey = HOTKEY_BIND_SELECT;
    myevent.keypad.cur_bits = (1 << KEY_BIT_SELECT) | (1 << KEY_BIT_A);
    TEST_ASSERT_EQUAL_INT(1, hit_hotkey(KEY_BIT_A));
}
#endif

static int set_key_bit(uint32_t bit, int val)
{
    debug("call %s(bit=%d, val=%d, cur_bits=0x%04x)\n", __func__, bit, val, myevent.keypad.cur_bits);

    if (val) {
#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000) || defined(XT897)
        if (bit == KEY_BIT_MENU) {
            myevent.keypad.cur_bits = (1 << KEY_BIT_MENU);
        }
#endif

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (myconfig.hotkey == HOTKEY_BIND_SELECT) {
            if (bit == KEY_BIT_SELECT) {
                myevent.keypad.cur_bits = (1 << KEY_BIT_SELECT);
            }
        }
        else {
            if (bit == KEY_BIT_MENU) {
                myevent.keypad.cur_bits = (1 << KEY_BIT_MENU);
            }
        }
#endif
        myevent.keypad.cur_bits|= (1 << bit);
    }
    else {
        myevent.keypad.cur_bits &= ~(1 << bit);
    }

    debug("cur_bits=0x%04x\n", myevent.keypad.cur_bits);
    return 0;
}

#if defined(UT)
TEST(sdl2_event, set_key_bit)
{
    myevent.keypad.cur_bits = 0;
    TEST_ASSERT_EQUAL_INT(0, set_key_bit(KEY_BIT_UP, 1));
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_UP), myevent.keypad.cur_bits);
    TEST_ASSERT_EQUAL_INT(0, set_key_bit(KEY_BIT_UP, 0));
    TEST_ASSERT_EQUAL_INT((0 << KEY_BIT_UP), myevent.keypad.cur_bits);
}
#endif

#if defined(A30) || defined(FLIP) || defined(UT)
static int trans_joy_to_keypad(jval_t *j, int idx)
{
    int r = 0;
    static int pre_x[2] = { -1, -1 };
    static int pre_y[2] = { -1, -1 };
    static int pre_up[2] = { 0 };
    static int pre_down[2] = { 0 };
    static int pre_left[2] = { 0 };
    static int pre_right[2] = { 0 };

    uint32_t u_key = KEY_BIT_UP;
    uint32_t d_key = KEY_BIT_DOWN;
    uint32_t l_key = KEY_BIT_LEFT;
    uint32_t r_key = KEY_BIT_RIGHT;

    int UP_TH = -1 * myconfig.joy.dzone;
    int DOWN_TH = myconfig.joy.dzone;
    int LEFT_TH = -1 * myconfig.joy.dzone;
    int RIGHT_TH = myconfig.joy.dzone;

    debug("call %s(idx=%d)\n", __func__, idx);

    if (idx) {
        u_key = KEY_BIT_X;
        d_key = KEY_BIT_B;
        l_key = KEY_BIT_Y;
        r_key = KEY_BIT_A;

        UP_TH = -1 * myconfig.rjoy.dzone;
        DOWN_TH = myconfig.rjoy.dzone;
        LEFT_TH = -1 * myconfig.rjoy.dzone;
        RIGHT_TH = myconfig.rjoy.dzone;
    }

    if (j->x != pre_x[idx]) {
        pre_x[idx] = j->x;
        if (pre_x[idx] < LEFT_TH) {
            if (pre_left[idx] == 0) {
                r = 1;
                pre_left[idx] = 1;
                set_key_bit(l_key, 1);
            }

            if (pre_right[idx]) {
                r = 1;
                pre_right[idx] = 0;
                set_key_bit(r_key, 0);
            }
        }
        else if (pre_x[idx] > RIGHT_TH){
            if (pre_right[idx] == 0) {
                r = 1;
                pre_right[idx] = 1;
                set_key_bit(r_key, 1);
            }

            if (pre_left[idx]) {
                r = 1;
                pre_left[idx] = 0;
                set_key_bit(l_key, 0);
            }
        }
        else {
            if (pre_left[idx]) {
                r = 1;
                pre_left[idx] = 0;
                set_key_bit(l_key, 0);
            }

            if (pre_right[idx]) {
                r = 1;
                pre_right[idx] = 0;
                set_key_bit(r_key, 0);
            }
        }
    }

    if (j->y != pre_y[idx]) {
        pre_y[idx] = j->y;
        if (pre_y[idx] < UP_TH) {
            if (pre_up[idx] == 0) {
                r = 1;
                pre_up[idx] = 1;
                set_key_bit(u_key, 1);
            }

            if (pre_down[idx]) {
                r = 1;
                pre_down[idx] = 0;
                set_key_bit(d_key, 0);
            }
        }
        else if (pre_y[idx] > DOWN_TH){
            if (pre_down[idx] == 0) {
                r = 1;
                pre_down[idx] = 1;
                set_key_bit(d_key, 1);
            }

            if (pre_up[idx]) {
                r = 1;
                pre_up[idx] = 0;
                set_key_bit(u_key, 0);
            }
        }
        else {
            if (pre_up[idx]) {
                r = 1;
                pre_up[idx] = 0;
                set_key_bit(u_key, 0);
            }
            if (pre_down[idx]) {
                r = 1;
                pre_down[idx] = 0;
                set_key_bit(d_key, 0);
            }
        }
    }

    return r;
}

#if defined(UT)
TEST(sdl2_event, trans_joy_to_keypad)
{
    jval_t j = { 0 };

    TEST_ASSERT_EQUAL_INT(0, trans_joy_to_keypad(&j, 0));
}
#endif

static int trans_joy_to_touch(jval_t *j, int idx)
{
    int r = 0;
    static int pre_x[2] = { -1, -1 };
    static int pre_y[2] = { -1, -1 };

    static int pre_up[2] = { 0 };
    static int pre_down[2] = { 0 };
    static int pre_left[2] = { 0 };
    static int pre_right[2] = { 0 };

    int UP_TH = -1 * myconfig.joy.dzone;
    int DOWN_TH = myconfig.joy.dzone;
    int LEFT_TH = -1 * myconfig.joy.dzone;
    int RIGHT_TH = myconfig.joy.dzone;

    debug("call %s(j=%p, idx=%d)\n", __func__, j, idx);

    if (idx) {
        UP_TH = -1 * myconfig.rjoy.dzone;
        DOWN_TH = myconfig.rjoy.dzone;
        LEFT_TH = -1 * myconfig.rjoy.dzone;
        RIGHT_TH = myconfig.rjoy.dzone;
    }

    if (j->x != pre_x[idx]) {
        pre_x[idx] = j->x;
        if (pre_x[idx] < LEFT_TH) {
            if (pre_left[idx] == 0) {
                pre_left[idx] = 1;
            }

            if (pre_right[idx]) {
                pre_right[idx] = 0;
            }
        }
        else if (pre_x[idx] > RIGHT_TH){
            if (pre_right[idx] == 0) {
                pre_right[idx] = 1;
            }

            if (pre_left[idx]) {
                pre_left[idx] = 0;
            }
        }
        else {
            if (pre_left[idx]) {
                pre_left[idx] = 0;
            }
            if (pre_right[idx]) {
                pre_right[idx] = 0;
            }
        }
    }

    if (j->y != pre_y[idx]) {
        pre_y[idx] = j->y;
        if (pre_y[idx] < UP_TH) {
            if (pre_up[idx] == 0) {
                pre_up[idx] = 1;
            }

            if (pre_down[idx]) {
                pre_down[idx] = 0;
            }
        }
        else if (pre_y[idx] > DOWN_TH){
            if (pre_down[idx] == 0) {
                pre_down[idx] = 1;
            }

            if (pre_up[idx]) {
                pre_up[idx] = 0;
            }
        }
        else {
            if (pre_up[idx]) {
                pre_up[idx] = 0;
            }
            if (pre_down[idx]) {
                pre_down[idx] = 0;
            }
        }
    }

    if (pre_up[idx] || pre_down[idx] || pre_left[idx] || pre_right[idx]) {
        r = 1;
        if (myevent.keypad.cur_bits &  (1 << KEY_BIT_Y)) {
            if (pre_right[idx]) {
                static int cc = 0;

                if (cc == 0) {
                    myconfig.pen.sel+= 1;
                    if (myconfig.pen.sel >= myconfig.pen.max) {
                        myconfig.pen.sel = 0;
                    }
                    load_touch_pen();
                    cc = 30;
                }
                else {
                    cc -= 1;
                }
            }
        }
        else {
            int x = 0;
            int y = 0;

            if (is_hh_mode() && (myconfig.keys_rotate == 0)) {
                if (pre_up[idx]) {
                    myevent.touch.x+= inc_touch_axis(1);
                }
                if (pre_down[idx]) {
                    myevent.touch.x-= inc_touch_axis(1);
                }
                if (pre_left[idx]) {
                    myevent.touch.y-= inc_touch_axis(0);
                }
                if (pre_right[idx]) {
                    myevent.touch.y+= inc_touch_axis(0);
                }
            }
            else {
                if (pre_up[idx]) {
                    myevent.touch.y-= inc_touch_axis(1);
                }
                if (pre_down[idx]) {
                    myevent.touch.y+= inc_touch_axis(1);
                }
                if (pre_left[idx]) {
                    myevent.touch.x-= inc_touch_axis(0);
                }
                if (pre_right[idx]) {
                    myevent.touch.x+= inc_touch_axis(0);
                }
            }
            limit_touch_axis();

            x = (myevent.touch.x * 160) / myevent.touch.max_x;
            y = (myevent.touch.y * 120) / myevent.touch.max_y;
            SDL_SendMouseMotion(myvideo.win, 0, 0, x + 80, y + (*myhook.var.sdl.swap_screens ? 120 : 0));
        }
        myconfig.joy.show_cnt = MYJOY_SHOW_CNT;
    }

    return r;
}

#if defined(UT)
TEST(sdl2_event, trans_joy_to_touch)
{
    jval_t j = { 0 };

    TEST_ASSERT_EQUAL_INT(0, trans_joy_to_touch(&j, 0));
}
#endif

static int trans_joy_to_custkey(jval_t *j, int idx)
{
    int r = 0;
    static int pre_x[2] = { -1, -1 };
    static int pre_y[2] = { -1, -1 };

    static int pre_up[2] = { 0 };
    static int pre_down[2] = { 0 };
    static int pre_left[2] = { 0 };
    static int pre_right[2] = { 0 };

    uint32_t u_key = myconfig.joy.cust_key[0];
    uint32_t d_key = myconfig.joy.cust_key[1];
    uint32_t l_key = myconfig.joy.cust_key[2];
    uint32_t r_key = myconfig.joy.cust_key[3];

    int UP_TH = -1 * myconfig.joy.dzone;
    int DOWN_TH = myconfig.joy.dzone;
    int LEFT_TH = -1 * myconfig.joy.dzone;
    int RIGHT_TH = myconfig.joy.dzone;

    debug("call %s(j=%p, idx=%d)\n", __func__, j, idx);

    if (idx) {
        UP_TH = -1 * myconfig.rjoy.dzone;
        DOWN_TH = myconfig.rjoy.dzone;
        LEFT_TH = -1 * myconfig.rjoy.dzone;
        RIGHT_TH = myconfig.rjoy.dzone;

        u_key = myconfig.rjoy.cust_key[0];
        d_key = myconfig.rjoy.cust_key[1];
        l_key = myconfig.rjoy.cust_key[2];
        r_key = myconfig.rjoy.cust_key[3];
    }

    if (j->x != pre_x[idx]) {
        pre_x[idx] = j->x;
        if (pre_x[idx] < LEFT_TH) {
            if (pre_left[idx] == 0) {
                r = 1;
                pre_left[idx] = 1;
                set_key_bit(l_key, 1);
            }

            if (pre_right[idx]) {
                r = 1;
                pre_right[idx] = 0;
                set_key_bit(r_key, 0);
            }
        }
        else if (pre_x[idx] > RIGHT_TH){
            if (pre_right[idx] == 0) {
                r = 1;
                pre_right[idx] = 1;
                set_key_bit(r_key, 1);
            }

            if (pre_left[idx]) {
                r = 1;
                pre_left[idx] = 0;
                set_key_bit(l_key, 0);
            }
        }
        else {
            if (pre_left[idx]) {
                r = 1;
                pre_left[idx] = 0;
                set_key_bit(l_key, 0);
            }

            if (pre_right[idx]) {
                r = 1;
                pre_right[idx] = 0;
                set_key_bit(r_key, 0);
            }
        }
    }

    if (j->y != pre_y[idx]) {
        pre_y[idx] = j->y;
        if (pre_y[idx] < UP_TH) {
            if (pre_up[idx] == 0) {
                r = 1;
                pre_up[idx] = 1;
                set_key_bit(u_key, 1);
            }

            if (pre_down[idx]) {
                r = 1;
                pre_down[idx] = 0;
                set_key_bit(d_key, 0);
            }
        }
        else if (pre_y[idx] > DOWN_TH){
            if (pre_down[idx] == 0) {
                r = 1;
                pre_down[idx] = 1;
                set_key_bit(d_key, 1);
            }

            if (pre_up[idx]) {
                r = 1;
                pre_up[idx] = 0;
                set_key_bit(u_key, 0);
            }
        }
        else {
            if (pre_up[idx]) {
                r = 1;
                pre_up[idx] = 0;
                set_key_bit(u_key, 0);
            }

            if (pre_down[idx]) {
                r = 1;
                pre_down[idx] = 0;
                set_key_bit(d_key, 0);
            }
        }
    }

    return r;
}

#if defined(UT)
TEST(sdl2_event, trans_joy_to_custkey)
{
    jval_t j = { 0 };

    TEST_ASSERT_EQUAL_INT(0, trans_joy_to_custkey(&j, 0));
}
#endif

static int update_joy_state(void)
{
    int r = 0;

    debug("call %s()\n", __func__);

    if (myconfig.joy.mode == MYJOY_MODE_KEY) {
        r |= trans_joy_to_keypad(&myjoy.left.last, 0);
    }
    else if (myconfig.joy.mode == MYJOY_MODE_TOUCH) {
        r |= trans_joy_to_touch(&myjoy.left.last, 0);
    }
    else if (myconfig.joy.mode == MYJOY_MODE_CUST_KEY) {
        r |= trans_joy_to_custkey(&myjoy.left.last, 0);
    }

    if (myconfig.rjoy.mode == MYJOY_MODE_KEY) {
        r |= trans_joy_to_keypad(&myjoy.right.last, 1);
    }
    else if (myconfig.rjoy.mode == MYJOY_MODE_TOUCH) {
        r |= trans_joy_to_touch(&myjoy.right.last, 1);
    }
    else if (myconfig.rjoy.mode == MYJOY_MODE_CUST_KEY) {
        r |= trans_joy_to_custkey(&myjoy.right.last, 1);
    }

    return r;
}
#endif

#if defined(UT)
TEST(sdl2_event, update_joy_state)
{
    TEST_ASSERT_EQUAL_INT(0, update_joy_state());
}
#endif

static int enter_sdl2_menu(sdl2_menu_type_t t)
{
    debug("call %s(t=%d)\n", __func__, t);

    if (myvideo.menu.sdl2.enable == 0) {
        myvideo.menu.sdl2.type = t;
        myvideo.menu.sdl2.enable = 1;
        usleep(100000);
        handle_sdl2_menu(-1);
        myevent.keypad.pre_bits = myevent.keypad.cur_bits = 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_event, enter_sdl2_menu)
{
    TEST_ASSERT_EQUAL_INT(0, enter_sdl2_menu());
}
#endif

static int handle_hotkey(void)
{
    int check_hotkey = 0;

#if defined(TRIMUI)
    char buf[MAX_PATH] = { 0 };
#endif

    debug("call %s()\n", __func__);

    check_hotkey = 1;
    if (myvideo.menu.sdl2.enable || myvideo.menu.drastic.enable) {
        check_hotkey = 0;
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_LEFT)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (myconfig.layout.mode.sel > 0) {
            myconfig.layout.mode.sel -= 1;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA)
        if ((myvideo.menu.sdl2.enable == 0) && (myvideo.menu.drastic.enable == 0)) {
            myevent.mode = (myevent.mode == NDS_KEY_MODE) ? NDS_TOUCH_MODE : NDS_KEY_MODE;

            if (myevent.mode == NDS_TOUCH_MODE) {
                release_keys();
            }
            myevent.touch.slow_down = 0;
        }
#endif
        set_key_bit(KEY_BIT_LEFT, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_RIGHT)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (myconfig.layout.mode.sel < myvideo.layout.max_mode) {
            myconfig.layout.mode.sel += 1;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA)
        set_key_bit(KEY_BIT_R2, 1);
#endif
        set_key_bit(KEY_BIT_RIGHT, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_A)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (myevent.mode == NDS_KEY_MODE) {
            uint32_t tmp = myconfig.layout.mode.alt;
            myconfig.layout.mode.alt = myconfig.layout.mode.sel;
            myconfig.layout.mode.sel = tmp;
        }
#endif

#if defined(TRIMUI)
        myconfig.layout.mode.sel = (myconfig.layout.mode.sel == NDS_DIS_MODE_S0) ? LAYOUT_MODE_T3 : NDS_DIS_MODE_S0;
        disp_resize();
#endif
        set_key_bit(KEY_BIT_A, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_B)) {
        myconfig.filter = (myconfig.filter == FILTER_PIXEL) ? FILTER_BLUR : FILTER_PIXEL;
        set_key_bit(KEY_BIT_B, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_X)) {
#if defined(FLIP)
        enter_sdl2_menu(MENU_TYPE_SHOW_HOTKEY);
#endif

        set_key_bit(KEY_BIT_X, 0);
    }

    if (hit_hotkey(KEY_BIT_Y)) {
        if (check_hotkey) {
            if (myevent.mode == NDS_KEY_MODE) {
                if ((myconfig.layout.mode.sel != LAYOUT_MODE_T0) &&
                    (myconfig.layout.mode.sel != LAYOUT_MODE_T1) &&
                    (myconfig.layout.mode.sel != LAYOUT_MODE_T3))
                {
                    myconfig.layout.bg.sel += 1;
                    if (myconfig.layout.bg.sel > myvideo.layout.mode[myconfig.layout.mode.sel].max_bg) {
                        myconfig.layout.bg.sel = 0;
                    }
                }
            }
            else {
                myconfig.pen.sel+= 1;
                if (myconfig.pen.sel >= myconfig.pen.max) {
                    myconfig.pen.sel = 0;
                }
                load_touch_pen();
            }
        }
        else {
            myconfig.menu.sel += 1;
            if (myconfig.menu.sel >= myconfig.menu.max) {
                myconfig.menu.sel = 0;
            }
            load_menu_res();

            if (myvideo.menu.drastic.enable) {
                SDL_SendKeyboardKey(SDL_PRESSED, SDLK_e);
                usleep(100000);
                SDL_SendKeyboardKey(SDL_RELEASED, SDLK_e);
            }
        }
        set_key_bit(KEY_BIT_Y, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_START)) {
#if defined(MINI) || defined(QX1000) || defined(XT897) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (myvideo.menu.sdl2.enable == 0) {
#if defined(QX1000) || defined(XT897)
            update_wayland_res(640, 480);
#endif

            enter_sdl2_menu(MENU_TYPE_SDL2);
        }
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000) || defined(XT897)
        set_key_bit(KEY_BIT_QUIT, 1);
#endif
        set_key_bit(KEY_BIT_START, 0);
    }

    if (myconfig.hotkey == HOTKEY_BIND_MENU) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (check_hotkey && hit_hotkey(KEY_BIT_SELECT)) {
            set_key_bit(KEY_BIT_ONION, 1);
            set_key_bit(KEY_BIT_SELECT, 0);
        }
#endif
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_SELECT)) {
#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000) || defined(XT897)
        set_key_bit(KEY_BIT_ONION, 1);
        set_key_bit(KEY_BIT_SELECT, 0);
#endif
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_R1)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        static int pre_ff = 0;

        if (pre_ff != myconfig.fast_forward) {
            pre_ff = myconfig.fast_forward;
            fast_forward(myconfig.fast_forward);
        }
        set_key_bit(KEY_BIT_FAST, 1);
#endif

#if defined(TRIMUI) || defined(PANDORA)
        set_key_bit(KEY_BIT_SAVE, 1);
#endif
        set_key_bit(KEY_BIT_R1, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_L1)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        set_key_bit(KEY_BIT_QUIT, 1);
#endif

#if defined(TRIMUI) || defined(PANDORA)
        set_key_bit(KEY_BIT_LOAD, 1);
#endif
        set_key_bit(KEY_BIT_L1, 0);
    }

#if defined(MINI) || defined(QX1000) || defined(XT897) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    if (check_hotkey && hit_hotkey(KEY_BIT_R2)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        set_key_bit(KEY_BIT_LOAD, 1);
#else
        set_key_bit(KEY_BIT_SAVE, 1);
#endif
        set_key_bit(KEY_BIT_R2, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_L2)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        set_key_bit(KEY_BIT_SAVE, 1);
#else
        set_key_bit(KEY_BIT_LOAD, 1);
#endif
        set_key_bit(KEY_BIT_L2, 0);
    }
    else if (myevent.keypad.cur_bits & (1 << KEY_BIT_L2)) {
#if defined(A30) || defined(FLIP)
        if (myconfig.joy.mode != MYJOY_MODE_TOUCH) {
#endif
            if ((myvideo.menu.sdl2.enable == 0) && (myvideo.menu.drastic.enable == 0)) {
                myevent.mode = (myevent.mode == NDS_KEY_MODE) ? NDS_TOUCH_MODE : NDS_KEY_MODE;
                set_key_bit(KEY_BIT_L2, 0);

                if (myevent.mode == NDS_TOUCH_MODE) {
                    release_keys();
                }
                myevent.touch.slow_down = 0;
            }
#if defined(A30) || defined(FLIP)
        }
#endif
    }
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_event, handle_hotkey)
{
    TEST_ASSERT_EQUAL_INT(0, handle_hotkey());
}
#endif

static int update_key_bit(uint32_t c, uint32_t v)
{
    debug("call %s(c=%d, v=%d)\n", __func__, c, v);

    if (c == myevent.keypad.up) {
        set_key_bit(KEY_BIT_UP, v);
    }
    if (c == myevent.keypad.down) {
        set_key_bit(KEY_BIT_DOWN, v);
    }
    if (c == myevent.keypad.left) {
        set_key_bit(KEY_BIT_LEFT, v);
    }
    if (c == myevent.keypad.right) {
        set_key_bit(KEY_BIT_RIGHT, v);
    }
    if (c == myevent.keypad.a) {
        set_key_bit(KEY_BIT_A, v);
    }
    if (c == myevent.keypad.b) {
        set_key_bit(KEY_BIT_B, v);
    }
    if (c == myevent.keypad.x) {
        set_key_bit(KEY_BIT_X, v);
    }
    if (c == myevent.keypad.y) {
        set_key_bit(KEY_BIT_Y, v);
    }
    if (c == myevent.keypad.l1) {
        set_key_bit(KEY_BIT_L1, v);
    }
    if (c == myevent.keypad.r1) {
        set_key_bit(KEY_BIT_R1, v);
    }
    if (c == myevent.keypad.r2) {
#if defined(A30) || defined(FLIP)
        if (myconfig.joy.mode == MYJOY_MODE_TOUCH) {
            myconfig.joy.show_cnt = MYJOY_SHOW_CNT;
            myevent.input.touch_status = !!v;
            SDL_SendMouseButton(myvideo.win, 0, v ? SDL_PRESSED : SDL_RELEASED, SDL_BUTTON_LEFT);
        }
#endif
        set_key_bit(KEY_BIT_L2, v);
    }
    if (c == myevent.keypad.l2) {
        set_key_bit(KEY_BIT_R2, v);
    }
    if (c == myevent.keypad.select) {
        set_key_bit(KEY_BIT_SELECT, v);
    }
    if (c == myevent.keypad.start) {
        set_key_bit(KEY_BIT_START, v);
    }
    if (c == myevent.keypad.menu) {
        set_key_bit(KEY_BIT_MENU, v);
    }

#if defined(QX1000) || defined(XT897) || defined(BRICK) || defined(UT)
    if (c == myevent.keypad.save) {
        set_key_bit(KEY_BIT_SAVE, v);
    }
    if (c == myevent.keypad.load) {
        set_key_bit(KEY_BIT_LOAD, v);
    }
#if defined(QX1000) || defined(XT897) || defined(UT)
    if (c == myevent.keypad.fast) {
        set_key_bit(KEY_BIT_FAST, v);
    }
    if (c == myevent.keypad.exit) {
        set_key_bit(KEY_BIT_QUIT, v);
    }
#endif
#endif

#if defined(MINI) || defined(UT)
    if (c == myevent.keypad.power) {
        set_key_bit(KEY_BIT_POWER, v);
    }
    if (c == myevent.keypad.vol_up) {
        set_key_bit(KEY_BIT_VOLUP, v);
        if (myevent.stock) {
            if (v == 0) {
                myevent.vol = inc_mini_vol();
            }
        }
        else {
            myvideo.layout.reload_bg = RELOAD_BG_COUNT;
        }
    }
    if (c == myevent.keypad.vol_down) {
        set_key_bit(KEY_BIT_VOLDOWN, v);
        if (myevent.stock) {
            if (v == 0) {
                myevent.vol = dec_mini_vol();
            }
        }
        else {
            myvideo.layout.reload_bg = RELOAD_BG_COUNT;
        }
    }
#endif

#if defined(A30) || defined(RG28XX) || defined(UT)
    if (c == myevent.keypad.vol_up) {
        set_key_bit(KEY_BIT_VOLUP, v);
        if (v == 0) {
            myevent.vol = 0;//inc_a30_vol();
        }
    }
    if (c == myevent.keypad.vol_down) {
        set_key_bit(KEY_BIT_VOLDOWN, v);
        if (v == 0) {
            myevent.vol = 0;//dec_a30_vol();
        }
    }
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_event, update_key_bit)
{
    myevent.keypad.cur_bits = 0;
    myevent.keypad.up = DEV_KEY_CODE_UP;
    TEST_ASSERT_EQUAL_INT(0, update_key_bit(DEV_KEY_CODE_UP, 1));
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_UP), myevent.keypad.cur_bits);
    TEST_ASSERT_EQUAL_INT(0, update_key_bit(DEV_KEY_CODE_UP, 0));
    TEST_ASSERT_EQUAL_INT((0 << KEY_BIT_UP), myevent.keypad.cur_bits);
}
#endif

#if defined(FLIP) || defined(UT)
static int get_flip_key_code(struct input_event *e)
{
    static uint32_t pre_bits = 0;

    int r = 0;
    int cc = 0;
    int buf[DEV_KEY_BUF_MAX] = { 0 };
    const int kval[DEV_KEY_BUF_MAX] = {
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
        /* 17 */ -1,
        /* 18 */ -1,
        /* 19 */ -1
    }; 

    debug("call %s(e=%p)\n", __func__, e);

    if (myevent.fd < 0) {
        error("invalid input handle\n");
        return r;
    }

    if (!e) {
        error("e is null\n");
        return -1;
    }

#if !defined(UT)
    if (read(myevent.fd, buf, sizeof(buf)) == 0) {
        return r;
    }
#endif

    for (cc = 0; cc < DEV_KEY_IDX_MAX; cc++) {
        if (kval[cc] < 0) {
            continue;
        }

        if ((!!buf[cc]) == (!!(pre_bits & (1 << cc)))) {
            continue;
        }

        r = 1;
        if (!!buf[cc]) {
            pre_bits |= (1 << cc);
        }
        else {
            pre_bits &= ~(1 << cc);
        }
        update_key_bit(kval[cc], !!buf[cc]);
    }

    e->code = 0;
    e->value = 0;
    return r;
}
#endif

#if defined(UT)
TEST(sdl2_event, get_flip_key_code)
{
    struct input_event e = {{ 0 }};

    TEST_ASSERT_EQUAL_INT(0, get_flip_key_code(&e));
}
#endif

#if defined(RG28XX) || defined(UT)
static int get_rg28xx_key_code(struct input_event *e)
{
    int r = 0;
    char buf[DEV_KEY_BUF_MAX] = { 0 };

    debug("call %s(e=%p)\n", __func__, e);

    if (myevent.fd < 0) {
        error("invalid input handle\n");
        return -1;
    }

    if (!e) {
        error("e is null\n");
        return -1;
    }

#if !defined(UT)
    if (read(myevent.fd, buf, sizeof(buf)) == 0) {
        return r;
    }
#endif

    r = 1;
    e->value = !!buf[12];

    switch (buf[10]) {
    case 0x11: 
        if (e->value) {
            e->code = (buf[12] == 0xff) ? myevent.keypad.up : myevent.keypad.down;
        }
        else {
            e->code = myevent.keypad.up;
            set_key_bit(KEY_BIT_UP, 0);
            set_key_bit(KEY_BIT_DOWN, 0);
        }
        break;
    case 0x10:
        if (e->value) {
            e->code = (buf[12] == 0xff) ? myevent.keypad.left : myevent.keypad.right;
        }
        else {
            e->code = myevent.keypad.left;
            set_key_bit(KEY_BIT_LEFT, 0);
            set_key_bit(KEY_BIT_RIGHT, 0);
        }
        break;
    case 0x30:
        e->code = myevent.keypad.a;
        break;
    case 0x31:
        e->code = myevent.keypad.b;
        break;
    case 0x33:
        e->code = myevent.keypad.x;
        break;
    case 0x32:
        e->code = myevent.keypad.y;
        break;
    case 0x34:
        e->code = myevent.keypad.l1;
        break;
    case 0x3a:
        e->code = myevent.keypad.l2;
        break;
    case 0x35:
        e->code = myevent.keypad.r1;
        break;
    case 0x3b:
        e->code = myevent.keypad.r2;
        break;
    case 0x38:
        e->code = myevent.keypad.menu;
        break;
    case 0x36:
        e->code = myevent.keypad.select;
        break;
    case 0x37:
        e->code = myevent.keypad.start;
        break;
    case 0x73:
        e->code = myevent.keypad.vol_up;
        break;
    case 0x72:
        e->code = myevent.keypad.vol_down;
        break;
    default:
        r = 0;
        break;
    }

    return r;
}
#endif

#if defined(UT)
TEST(sdl2_event, get_rg28xx_key_code)
{
    struct input_event e = {{ 0 }};

    e.code = 0x32;
    TEST_ASSERT_EQUAL_INT(0, get_rg28xx_key_code(&e));
    TEST_ASSERT_EQUAL_INT(0x32, e.code);
}
#endif

#if defined(BRICK) || defined(UT)
static int get_brick_key_code(struct input_event *e)
{
    int r = 0;
    static uint32_t pre_up_down = 0;
    static uint32_t pre_left_right = 0;

    debug("call %s(e=%p)\n", __func__, e);

    if (myevent.fd < 0) {
        error("invalid input handle\n");
        return -1;
    }

    if (!e) {
        error("e is null\n");
        return -1;
    }

#if !defined(UT)
    if (read(myevent.fd, e, sizeof(struct input_event)) == 0) {
        return 0;
    }
#endif

    r = 1;
    switch (e->code) {
    case 17:
        if (e->value == -1) {
            e->code = DEV_KEY_CODE_UP;
            e->value = 1;
            pre_up_down = DEV_KEY_CODE_UP;
        }
        else if (e->value == 1) {
            e->code = DEV_KEY_CODE_DOWN;
            e->value = 1;
            pre_up_down = DEV_KEY_CODE_DOWN;
        }
        else {
            e->code = pre_up_down;
            e->value = 0;
        }
        break;
    case 16:
        if (e->value == -1) {
            e->code = DEV_KEY_CODE_LEFT;
            e->value = 1;
            pre_left_right = DEV_KEY_CODE_LEFT;
        }
        else if (e->value == 1) {
            e->code = DEV_KEY_CODE_RIGHT;
            e->value = 1;
            pre_left_right = DEV_KEY_CODE_RIGHT;
        }
        else {
            e->code = pre_left_right;
            e->value = 0;
        }
        break;
    case 2:
        e->code = DEV_KEY_CODE_L2;
        e->value = !!e->value;
        break;
    case 5:
        e->code = DEV_KEY_CODE_R2;
        e->value = !!e->value;
        break;
    }

    return r;
}
#endif

#if defined(UT)
TEST(sdl2_event, get_brick_key_code)
{
    struct input_event e = { 0 };

    e.code = 17;
    e.value = 1;
    TEST_ASSERT_EQUAL_INT(1, get_brick_key_code(&e));
    TEST_ASSERT_EQUAL_INT(DEV_KEY_CODE_DOWN, e.code);
}
#endif

static int get_input_key_code(struct input_event *e)
{
    debug("call %s(e=%p)\n", __func__, e);

    if (myevent.fd < 0) {
        error("invalid input handle\n");
        return -1;
    }

    if (!e) {
        error("e is null\n");
        return -1;
    }

#if !defined(UT)
    if (read(myevent.fd, e, sizeof(struct input_event)) == 0) {
        return 0;
    }
#endif
    
    if ((e->type == EV_KEY) && (e->value != 2)) {
        return 1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_event, get_input_key_code)
{
    struct input_event e = {{ 0 }};

    TEST_ASSERT_EQUAL_INT(0, get_input_key_code(&e));
}
#endif

static int update_latest_keypad_value(void)
{
    debug("call %s()\n", __func__);

    if ((myvideo.menu.sdl2.enable == 0) && (myvideo.menu.drastic.enable == 0) && myconfig.keys_rotate) {
        if (myconfig.keys_rotate == 1) {
            myevent.keypad.up = DEV_KEY_CODE_LEFT;
            myevent.keypad.down = DEV_KEY_CODE_RIGHT;
            myevent.keypad.left = DEV_KEY_CODE_DOWN;
            myevent.keypad.right = DEV_KEY_CODE_UP;

            myevent.keypad.a = DEV_KEY_CODE_X;
            myevent.keypad.b = DEV_KEY_CODE_A;
            myevent.keypad.x = DEV_KEY_CODE_Y;
            myevent.keypad.y = DEV_KEY_CODE_B;
        }
        else {
            myevent.keypad.up = DEV_KEY_CODE_RIGHT;
            myevent.keypad.down = DEV_KEY_CODE_LEFT;
            myevent.keypad.left = DEV_KEY_CODE_UP;
            myevent.keypad.right = DEV_KEY_CODE_DOWN;

            myevent.keypad.a = DEV_KEY_CODE_B;
            myevent.keypad.b = DEV_KEY_CODE_Y;
            myevent.keypad.x = DEV_KEY_CODE_A;
            myevent.keypad.y = DEV_KEY_CODE_X;
        }
    }
    else {
        myevent.keypad.up = DEV_KEY_CODE_UP;
        myevent.keypad.down = DEV_KEY_CODE_DOWN;
        myevent.keypad.left = DEV_KEY_CODE_LEFT;
        myevent.keypad.right = DEV_KEY_CODE_RIGHT;

        myevent.keypad.a = DEV_KEY_CODE_A;
        myevent.keypad.b = DEV_KEY_CODE_B;
        myevent.keypad.x = DEV_KEY_CODE_X;
        myevent.keypad.y = DEV_KEY_CODE_Y;
    }

    if (myconfig.swap_l1_l2) {
        myevent.keypad.l1 = DEV_KEY_CODE_L2;
        myevent.keypad.l2 = DEV_KEY_CODE_L1;
    }
    else {
        myevent.keypad.l1 = DEV_KEY_CODE_L1;
        myevent.keypad.l2 = DEV_KEY_CODE_L2;
    }

    if (myconfig.swap_r1_r2) {
        myevent.keypad.r1 = DEV_KEY_CODE_R2;
        myevent.keypad.r2 = DEV_KEY_CODE_R1;
    }
    else {
        myevent.keypad.r1 = DEV_KEY_CODE_R1;
        myevent.keypad.r2 = DEV_KEY_CODE_R2;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_event, update_latest_keypad_value)
{
    myevent.keypad.up = 0;
    TEST_ASSERT_EQUAL_INT(0, update_latest_keypad_value());
    TEST_ASSERT_EQUAL_INT(DEV_KEY_CODE_UP, myevent.keypad.up);

    myconfig.swap_l1_l2 = 1;
    TEST_ASSERT_EQUAL_INT(0, update_latest_keypad_value());
    TEST_ASSERT_EQUAL_INT(DEV_KEY_CODE_L2, myevent.keypad.l1);

    myconfig.keys_rotate = 1;
    TEST_ASSERT_EQUAL_INT(0, update_latest_keypad_value());
    TEST_ASSERT_EQUAL_INT(DEV_KEY_CODE_LEFT, myevent.keypad.up);
}
#endif

#if defined(TRIMUI) || defined(UT)
static int handle_trimui_special_key(void)
{
    int r = 0;
    static uint32_t pre_value = 0;

    debug("call %s()\n", __func__);

    if (myevent.cust_key.gpio != NULL) {
        uint32_t v = *myevent.cust_key.gpio & 0x800;

        if (v != pre_value) {
            r = 1;
            pre_value = v;
            set_key_bit(KEY_BIT_R2, !v);
        }
    }

    return r;
}
#endif

#if defined(UT)
TEST(sdl2_event, handle_trimui_special_key)
{
    uint32_t t = 0;

    myevent.cust_key.gpio = NULL;
    TEST_ASSERT_EQUAL_INT(0, handle_trimui_special_key());

    t = 0x800;
    myevent.cust_key.gpio = &t;
    myevent.keypad.cur_bits = 0;
    TEST_ASSERT_EQUAL_INT(1, handle_trimui_special_key());
    TEST_ASSERT_EQUAL_INT((0 << KEY_BIT_R2), myevent.keypad.cur_bits);

    t = 0;
    myevent.cust_key.gpio = &t;
    myevent.keypad.cur_bits = 0;
    TEST_ASSERT_EQUAL_INT(1, handle_trimui_special_key());
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_R2), myevent.keypad.cur_bits);

    t = 0;
    myevent.cust_key.gpio = &t;
    myevent.keypad.cur_bits = 0;
    TEST_ASSERT_EQUAL_INT(0, handle_trimui_special_key());
    TEST_ASSERT_EQUAL_INT(0, myevent.keypad.cur_bits);
}
#endif

int input_handler(void *data)
{
    int rk = 0;
    int rj = 0;
    struct input_event ev = {{ 0 }};

    debug("call %s()\n", __func__);

#if !defined(UT)
    myevent.fd = open(INPUT_DEV, O_RDONLY | O_NONBLOCK | O_CLOEXEC);
    if (myevent.fd < 0) {
        error("failed to open \"%s\"\n", INPUT_DEV);
        exit(-1);
    }
#endif

#if defined(UT)
    myevent.thread.running = 0;
#else
    myevent.thread.running = 1;

    myevent.sem = SDL_CreateSemaphore(1);
    if(myevent.sem == NULL) {
        error("failed to create semaphore\n");
        exit(-1);
    }
#endif

    while (myevent.thread.running) {
        update_latest_keypad_value();

        SDL_SemWait(myevent.sem);

#if defined(FLIP) || defined(UT)
        rk = get_flip_key_code(&ev);
#elif defined(RG28XX) || defined(UT)
        rk = get_rg28xx_key_code(&ev);
#elif defined(BRICK) || defined(UT)
        rk = get_brick_key_code(&ev);
#else
        rk = get_input_key_code(&ev);
#endif

        if (rk > 0) {
            debug("code=%d, value=%d\n", ev.code, ev.value);
            update_key_bit(ev.code, ev.value);
        }

#if defined(A30) || defined(FLIP)
        rj = update_joy_state();
#endif

        if ((rk > 0) || (rj > 0)) {
            handle_hotkey();
        }

#if defined(TRIMUI) || defined(UT)
        handle_trimui_special_key();
#endif

        SDL_SemPost(myevent.sem);

        usleep(10000);
    }
    
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
#if defined(MINI) || defined(UT)
    DIR *dir = NULL;
#endif

    debug("call %s()\n", __func__);

    memset(&myevent, 0, sizeof(myevent));

#if defined(RG28XX)
    myevent.vol = 16;
#endif

    myevent.mode = NDS_KEY_MODE;
    myevent.touch.max_x = NDS_W;
    myevent.touch.max_y = NDS_H;
    myevent.touch.x = myevent.touch.max_x >> 1;
    myevent.touch.y = myevent.touch.max_y >> 1;

    myevent.keypad.up = DEV_KEY_CODE_UP;
    myevent.keypad.down = DEV_KEY_CODE_DOWN;
    myevent.keypad.left = DEV_KEY_CODE_LEFT;
    myevent.keypad.right = DEV_KEY_CODE_RIGHT;
    myevent.keypad.a = DEV_KEY_CODE_A;
    myevent.keypad.b = DEV_KEY_CODE_B;
    myevent.keypad.x = DEV_KEY_CODE_X;
    myevent.keypad.y = DEV_KEY_CODE_Y;
    myevent.keypad.l1 = DEV_KEY_CODE_L1;
    myevent.keypad.r1 = DEV_KEY_CODE_R1;
    myevent.keypad.l2 = DEV_KEY_CODE_L2;
    myevent.keypad.r2 = DEV_KEY_CODE_R2;
    myevent.keypad.select = DEV_KEY_CODE_SELECT;
    myevent.keypad.start = DEV_KEY_CODE_START;
    myevent.keypad.menu = DEV_KEY_CODE_MENU;
    myevent.keypad.power = DEV_KEY_CODE_POWER;
    myevent.keypad.vol_up = DEV_KEY_CODE_VOL_UP;
    myevent.keypad.vol_down = DEV_KEY_CODE_VOL_DOWN;

#if defined(QX1000) || defined(XT897) || defined(BRICK) || defined(UT)
    myevent.keypad.save = DEV_KEY_CODE_SAVE;
    myevent.keypad.load = DEV_KEY_CODE_LOAD;
#if defined(QX1000) || defined(XT897) || defined(UT)
    myevent.keypad.fast = DEV_KEY_CODE_FAST;
    myevent.keypad.exit = DEV_KEY_CODE_EXIT;
#endif
#endif

#if defined(TRIMUI) || defined(UT)
    myevent.cust_key.gpio = NULL;
    myevent.cust_key.fd = open("/dev/mem", O_RDWR);
    if (myevent.cust_key.fd > 0) {
        myevent.cust_key.mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, myevent.cust_key.fd, 0x01c20000);
        if (myevent.cust_key.mem != MAP_FAILED) {
            uint32_t *p = NULL;

            p = (uint32_t *)(myevent.cust_key.mem + 0x800 + (0x24 * 6) + 0x04);
            myevent.cust_key.pre_cfg = *p;
            *p &= 0xfff000ff;

            p = (uint32_t *)(myevent.cust_key.mem + 0x800 + (0x24 * 6) + 0x1c);
            *p |= 0x01500000;

            myevent.cust_key.gpio = (uint32_t *)(myevent.cust_key.mem + 0x800 + (0x24 * 6) + 0x10);
        }
    }
#endif

#if defined(RG28XX)
    set_volume();
#endif

    myevent.thread.id = SDL_CreateThreadInternal(input_handler, "NDS Input Handler", 4096, NULL);
    if (myevent.thread.id == NULL) {
        error("failed to create thread for input handler\n");
        exit(-1);
    }

#if defined(MINI) || defined(UT)
    dir = opendir(CHECK_ONION_FILE);
    if (dir) {
        closedir(dir);
    }
    else {
        myevent.stock = 1;
        debug("it is stock system\n");
    }
#endif
}

#if defined(UT)
TEST(sdl2_event, init_event)
{
    init_event();
    TEST_ASSERT_EQUAL_INT(NDS_KEY_MODE, myevent.mode);
    TEST_ASSERT_NOT_NULL(myevent.thread.id);
    TEST_ASSERT_EQUAL_INT(1, myevent.stock);
    TEST_ASSERT_EQUAL_INT(DEV_KEY_CODE_SAVE, myevent.keypad.save);
}
#endif

void quit_event(void)
{
    debug("call %s()\n", __func__);

    myevent.thread.running = 0;
    debug("wait for input handler complete...\n");
    if (myevent.thread.id) {
        SDL_WaitThread(myevent.thread.id, NULL);
    }
    debug("completed\n");

    if (myevent.sem) {
        SDL_DestroySemaphore(myevent.sem);
    }

    if(myevent.fd > 0) {
        close(myevent.fd);
        myevent.fd = -1;
    }

#if defined(TRIMUI) || defined(UT)
    if (myevent.cust_key.fd > 0) {
        uint32_t *p = (uint32_t *)(myevent.cust_key.mem + 0x800 + (0x24 * 6) + 0x04);

        *p = myevent.cust_key.pre_cfg;
        munmap(myevent.cust_key.mem, 4096);
        close(myevent.cust_key.fd);

        myevent.cust_key.gpio = NULL;
        myevent.cust_key.fd = -1;
    }
#endif
}

#if defined(UT)
TEST(sdl2_event, quit_event)
{
    myevent.thread.running = 1;
    quit_event();
    TEST_ASSERT_EQUAL_INT(0, myevent.thread.running);
}
#endif

static int send_key_to_menu(void)
{
    int cc = 0;
    uint32_t bit = 0;
    uint32_t changed = myevent.keypad.pre_bits ^ myevent.keypad.cur_bits;

    debug("call %s()\n", __func__);

    for (cc = 0; cc <= KEY_BIT_LAST; cc++) {
        bit = 1 << cc;

        if (changed & bit) {
            if ((myevent.keypad.cur_bits & bit) == 0) {
                handle_sdl2_menu(cc);
            }
        }
    }
    myevent.keypad.pre_bits = myevent.keypad.cur_bits;

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_key_to_menu)
{
    myevent.keypad.pre_bits = 0;
    myevent.keypad.cur_bits = (1 << KEY_BIT_A);
    TEST_ASSERT_EQUAL_INT(0, send_key_to_menu());
    TEST_ASSERT_EQUAL_INT(myevent.keypad.pre_bits, myevent.keypad.cur_bits);
}
#endif

static int update_raw_input_statue(uint32_t kbit, int val)
{
    uint32_t b = 0;

    debug("call %s(kbit=%d, val=%d)\n", kbit, val);

    switch (kbit) {
    case KEY_BIT_UP:        b = NDS_KEY_BIT_UP;     break;
    case KEY_BIT_DOWN:      b = NDS_KEY_BIT_DOWN;   break;
    case KEY_BIT_LEFT:      b = NDS_KEY_BIT_LEFT;   break;
    case KEY_BIT_RIGHT:     b = NDS_KEY_BIT_RIGHT;  break;
    case KEY_BIT_A:         b = NDS_KEY_BIT_A;      break;
    case KEY_BIT_B:         b = NDS_KEY_BIT_B;      break;
    case KEY_BIT_X:         b = NDS_KEY_BIT_X;      break;
    case KEY_BIT_Y:         b = NDS_KEY_BIT_Y;      break;
    case KEY_BIT_L1:        b = NDS_KEY_BIT_L;      break;
    case KEY_BIT_R1:        b = NDS_KEY_BIT_R;      break;
    case KEY_BIT_R2:        b = NDS_KEY_BIT_SWAP;   break;
    case KEY_BIT_SELECT:    b = NDS_KEY_BIT_SELECT; break;
    case KEY_BIT_START:     b = NDS_KEY_BIT_START;  break;
    case KEY_BIT_SWAP:      b = NDS_KEY_BIT_SWAP;   break;
    case KEY_BIT_MENU:      b = NDS_KEY_BIT_MENU;   break;
    case KEY_BIT_ONION:     b = NDS_KEY_BIT_MENU;   break;
    case KEY_BIT_QUIT:      b = NDS_KEY_BIT_QUIT;   break;
    case KEY_BIT_SAVE:      b = NDS_KEY_BIT_SAVE;   break;
    case KEY_BIT_LOAD:      b = NDS_KEY_BIT_LOAD;   break;
    case KEY_BIT_FAST:      b = NDS_KEY_BIT_FAST;   break;
    }

    if (val) {
        myevent.input.button_status |= b;
    }
    else {
        myevent.input.button_status &= ~b;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_event, update_raw_input_statue)
{
    myevent.input.button_status = 0;
    TEST_ASSERT_EQUAL_INT(0, update_raw_input_statue(KEY_BIT_UP, 1));
    TEST_ASSERT_EQUAL_INT(NDS_KEY_BIT_UP, myevent.input.button_status);
    TEST_ASSERT_EQUAL_INT(0, update_raw_input_statue(KEY_BIT_UP, 0));
    TEST_ASSERT_EQUAL_INT(0, myevent.input.button_status);
}
#endif

static int send_key_event(int raw_event)
{
    int cc = 0;
    int pressed = 0;
    uint32_t bit = 0;
    uint32_t changed = myevent.keypad.pre_bits ^ myevent.keypad.cur_bits;

    debug("call %s(raw_event=%d)\n", __func__, raw_event);

    for (cc=0; cc<=KEY_BIT_LAST; cc++) {
        bit = 1 << cc;
        pressed = !!(myevent.keypad.cur_bits & bit);

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if ((myconfig.hotkey == HOTKEY_BIND_MENU) && (cc == KEY_BIT_MENU)) {
            continue;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000) || defined(XT897)
        if (cc == KEY_BIT_MENU) {
            continue;
        }
#endif

        if (changed & bit) {
            if (raw_event) {
                debug("input bit=0x%x, pressed=%d\n", cc, pressed);
                update_raw_input_statue(cc, pressed);
            }
            else {
                debug("send code[%d]=0x%04x, pressed=%d\n", cc, nds_key_code[cc], pressed);
#if !defined(UT)
                SDL_SendKeyboardKey(
                    pressed ? SDL_PRESSED : SDL_RELEASED,
                    SDL_GetScancodeFromKey(nds_key_code[cc])
                );
#endif
            }
        }
    }

#if defined(TRIMUI) || defined(PANDORA)
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_R2)) {
        set_key_bit(KEY_BIT_R2, 0);
    }
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_L2)) {
        set_key_bit(KEY_BIT_L2, 0);
    }
#endif
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_SAVE)) {
        myvideo.lcd.status |= NDS_STATE_SAVE;
        set_key_bit(KEY_BIT_SAVE, 0);
        update_raw_input_statue(KEY_BIT_SAVE, 0);
    }
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_LOAD)) {
        myvideo.lcd.status |= NDS_STATE_LOAD;
        set_key_bit(KEY_BIT_LOAD, 0);
        update_raw_input_statue(KEY_BIT_LOAD, 0);
    }
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_FAST)) {
        myvideo.lcd.status |= NDS_STATE_FAST;
        set_key_bit(KEY_BIT_FAST, 0);
        update_raw_input_statue(KEY_BIT_FAST, 0);
    }
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_ONION)) {
        set_key_bit(KEY_BIT_ONION, 0);
        update_raw_input_statue(KEY_BIT_ONION, 0);
    }
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_QUIT)) {
        release_keys();
        update_raw_input_statue(KEY_BIT_QUIT, 0);
    }
    myevent.keypad.pre_bits = myevent.keypad.cur_bits;

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_key_event)
{
    myevent.keypad.pre_bits = 0;
    myevent.keypad.cur_bits = (1 << KEY_BIT_QUIT);
    TEST_ASSERT_EQUAL_INT(0, send_key_event(0));
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_QUIT), myevent.keypad.cur_bits);
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_QUIT), myevent.keypad.pre_bits);
}
#endif

static int update_touch_axis(void)
{
    int r = 0;

    debug("call %s()\n", __func__);

    if (is_hh_mode() && (myconfig.keys_rotate == 0)) {
        if (myevent.keypad.cur_bits & (1 << KEY_BIT_UP)) {
            r = 1;
            myevent.touch.x+= inc_touch_axis(1);
        }
        if (myevent.keypad.cur_bits & (1 << KEY_BIT_DOWN)) {
            r = 1;
            myevent.touch.x-= inc_touch_axis(1);
        }
        if (myevent.keypad.cur_bits & (1 << KEY_BIT_LEFT)) {
            r = 1;
            myevent.touch.y-= inc_touch_axis(0);
        }
        if (myevent.keypad.cur_bits & (1 << KEY_BIT_RIGHT)) {
            r = 1;
            myevent.touch.y+= inc_touch_axis(0);
        }
    }
    else {
        if (myevent.keypad.cur_bits & (1 << KEY_BIT_UP)) {
            r = 1;
            myevent.touch.y-= inc_touch_axis(1);
        }
        if (myevent.keypad.cur_bits & (1 << KEY_BIT_DOWN)) {
            r = 1;
            myevent.touch.y+= inc_touch_axis(1);
        }
        if (myevent.keypad.cur_bits & (1 << KEY_BIT_LEFT)) {
            r = 1;
            myevent.touch.x-= inc_touch_axis(0);
        }
        if (myevent.keypad.cur_bits & (1 << KEY_BIT_RIGHT)) {
            r = 1;
            myevent.touch.x+= inc_touch_axis(0);
        }
    }

    return r;
}

#if defined(UT)
TEST(sdl2_event, update_touch_axis)
{
    myevent.touch.x = 0;
    myevent.touch.y = 0;
    myevent.keypad.cur_bits = (1 << KEY_BIT_RIGHT);
    TEST_ASSERT_EQUAL_INT(1, update_touch_axis());
    TEST_ASSERT_EQUAL_INT(1, !!myevent.touch.x);
}
#endif

static int send_touch_key(int raw_event)
{
    uint32_t cc = 0;
    uint32_t bit = 0;
    uint32_t changed = myevent.keypad.pre_bits ^ myevent.keypad.cur_bits;

#if !defined(UT)
    uint32_t pressed = 0;
#endif

    debug("call %s(changed=0x%x)\n", __func__, changed);

    if (changed & (1 << KEY_BIT_A)) {
#if !defined(UT)
        pressed = !!(myevent.keypad.cur_bits & (1 << KEY_BIT_A));
        debug("send touch key (pressed=%d)\n", pressed);

        if (raw_event) {
            myevent.input.touch_status = pressed;
        }
        else {
            SDL_SendMouseButton(
                myvideo.win,
                0,
                pressed ? SDL_PRESSED : SDL_RELEASED,
                SDL_BUTTON_LEFT
            );
        }
#endif
    }

    for (cc = 0; cc <= KEY_BIT_LAST; cc++) {
        bit = 1 << cc;

        if ((cc == KEY_BIT_FAST) ||
            (cc == KEY_BIT_SAVE) ||
            (cc == KEY_BIT_LOAD) ||
            (cc == KEY_BIT_QUIT) ||
            (cc == KEY_BIT_R2))
        {
            if (changed & bit) {
#if !defined(UT)
                pressed = myevent.keypad.cur_bits & bit;

                SDL_SendKeyboardKey(
                    pressed ? SDL_PRESSED : SDL_RELEASED,
                    SDL_GetScancodeFromKey(nds_key_code[cc])
                );
#endif
            }
        }
        if (cc == KEY_BIT_R1) {
            if (changed & bit) {
                myevent.touch.slow_down = (myevent.keypad.cur_bits & bit) ? 1 : 0;
            }
        }
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_touch_key)
{
    myevent.touch.slow_down = 0;
    myevent.keypad.pre_bits = 0;
    myevent.keypad.cur_bits = (1 << KEY_BIT_R1);
    TEST_ASSERT_EQUAL_INT(0, send_touch_key());
    TEST_ASSERT_EQUAL_INT(1, myevent.touch.slow_down);
}
#endif

static int send_touch_axis(void)
{
#if !defined(UT)
    int x = 0;
    int y = 0;

#endif

    debug("call %s()\n", __func__);

#if !defined(UT)
    x = (myevent.touch.x * 160) / myevent.touch.max_x;
    y = (myevent.touch.y * 120) / myevent.touch.max_y;

    SDL_SendMouseMotion(myvideo.win, 0, 0, x + 80, y + (*myhook.var.sdl.swap_screens ? 120 : 0));
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_touch_axis)
{
    TEST_ASSERT_EQUAL_INT(0, send_touch_axis());
}
#endif

static int send_touch_event(int raw_event)
{
    int r = 0;

    debug("call %s()\n", __func__);

    if (myevent.keypad.pre_bits != myevent.keypad.cur_bits) {
        send_touch_key(raw_event);
    }

    r |= update_touch_axis();
    r |= limit_touch_axis();
    if (r) {
        send_touch_axis();
    }

#if defined(TRIMUI) || defined(PANDORA)
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_R2)) {
        set_key_bit(KEY_BIT_R2, 0);
    }
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_L2)) {
        set_key_bit(KEY_BIT_L2, 0);
    }
#endif
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_SAVE)) {
        set_key_bit(KEY_BIT_SAVE, 0);
    }
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_LOAD)) {
        set_key_bit(KEY_BIT_LOAD, 0);
    }
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_FAST)) {
        set_key_bit(KEY_BIT_FAST, 0);
    }
    if (myevent.keypad.pre_bits & (1 << KEY_BIT_QUIT)) {
        release_keys();
    }
    myevent.keypad.pre_bits = myevent.keypad.cur_bits;

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_touch_event)
{
    myevent.keypad.cur_bits = 0;
    myevent.keypad.pre_bits = (1 << KEY_BIT_QUIT);
    TEST_ASSERT_EQUAL_INT(0, send_touch_event());
    TEST_ASSERT_EQUAL_INT(0, myevent.keypad.pre_bits);
    TEST_ASSERT_EQUAL_INT(0, myevent.keypad.cur_bits);
}
#endif

void pump_event(_THIS)
{
    debug("call %s()\n", __func__);

#if !defined(UT)
    SDL_SemWait(myevent.sem);
#endif

    if (myvideo.menu.sdl2.enable) {
        send_key_to_menu();
    }
    else {
        if (myevent.mode == NDS_KEY_MODE) {
            if (myevent.keypad.pre_bits != myevent.keypad.cur_bits) {
                send_key_event(0);
            }
        }
        else if (myevent.mode == NDS_TOUCH_MODE) {
            send_touch_event(0);
        }
    }

#if !defined(UT)
    SDL_SemPost(myevent.sem);
#endif
}

#if defined(UT)
TEST(sdl2_event, pump_event)
{
    pump_event(NULL);
    TEST_PASS();
}
#endif

void prehook_cb_platform_get_input(uintptr_t p)
{
    static int pre_tp_x = 0;
    static int pre_tp_y = 0;
    static uint32_t pre_tp_bits = 0;
    static uint32_t pre_key_bits = 0;

    input_struct *input = (input_struct *)(((uint8_t *)p) + NDS_INPUT_OFFSET);

    debug("call %s(p=%p)\n", __func__, input);

    if (myvideo.menu.sdl2.enable) {
        send_key_to_menu();
    }
    else {
        if (myevent.mode == NDS_KEY_MODE) {
            if (myevent.keypad.pre_bits != myevent.keypad.cur_bits) {
                send_key_event(1);
            }
        }
        else if (myevent.mode == NDS_TOUCH_MODE) {
            send_touch_event(1);
        }
    }

    if (pre_key_bits != myevent.input.button_status) {
        pre_key_bits = myevent.input.button_status;
        if (p) {
            input->button_status = myevent.input.button_status;
            debug("button_status=0x%x\n", input->button_status);
        }
        else {
            error("p is null\n");
        }
    }

    if ((pre_tp_bits != myevent.input.touch_status)  ||
        (pre_tp_x != myevent.touch.x) ||
        (pre_tp_y != myevent.touch.y))
    {
        pre_tp_x = myevent.touch.x;
        pre_tp_y = myevent.touch.y;
        pre_tp_bits = myevent.input.touch_status;

        if (p) {
            input->touch_x = myevent.touch.x;
            input->touch_y = myevent.touch.y;
            input->touch_status = myevent.input.touch_status;
            debug(
                "x=%d, y=%d, pressed%d\n",
                input->touch_x,
                input->touch_y,
                !!input->touch_status
            );
        }
        else {
            error("p is null\n");
        }
    }
}

#if defined(UT)
TEST(sdl2_event, prehook_cb_platform_get_input)
{
    input_struct *in = malloc(sizeof(input_struct));

    TEST_ASSERT_NOT_NULL(in);
    prehook_cb_platform_get_input(0);
    myevent.keypad.cur_bits = (1 << KEY_BIT_A);
    prehook_cb_platform_get_input((uintptr_t)((uint8_t *)in - NDS_INPUT_OFFSET));
    TEST_ASSERT_EQUAL_INT(in->button_status, NDS_KEY_BIT_A);
    free(in);
}
#endif

