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

#include "debug.h"
#include "nds_video.h"
#include "nds_event.h"

nds_event myevent = { 0 };
extern nds_joy myjoy;

extern GFX gfx;
extern NDS nds;
extern MMIYOO_VideoInfo vid;
extern int pixel_filter;
extern int FB_W;
extern int FB_H;

const SDL_Scancode nds_key_code[] = {
    SDLK_UP,            // UP
    SDLK_DOWN,          // DOWN
    SDLK_LEFT,          // LEFT
    SDLK_RIGHT,         // RIGHT
    SDLK_SPACE,         // A
    SDLK_LCTRL,         // B
    SDLK_LSHIFT,        // X
    SDLK_LALT,          // Y
    SDLK_e,             // L1
    SDLK_t,             // R1
    SDLK_TAB,           // L2
    SDLK_BACKSPACE,     // R2
    SDLK_RCTRL,         // SELECT
    SDLK_RETURN,        // START
    SDLK_HOME,          // MENU
    SDLK_0,             // SAVE
    SDLK_1,             // LOAD
    SDLK_2,             // FAST
    SDLK_3,             // EXIT
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
    if ((nds.dis_mode == NDS_DIS_MODE_HH0) ||
        (nds.dis_mode == NDS_DIS_MODE_HH1) ||
        (nds.dis_mode == NDS_DIS_MODE_HH2) ||
        (nds.dis_mode == NDS_DIS_MODE_HH3))
    {
        return 1;
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_event, is_hh_mode)
{
    nds.dis_mode = NDS_DIS_MODE_HH0;
    TEST_ASSERT_EQUAL_INT(1, is_hh_mode());
    nds.dis_mode = 0;
    TEST_ASSERT_EQUAL_INT(0, is_hh_mode());
}
#endif

static int get_touch_interval(int type)
{
    float move = 0.0;
    float v = 100000.0 / ((float)nds.pen.xv / 10.0);

    if (myevent.touch.slow_down) {
        v*= 2;
    }

    move = ((float)clock() - nds.pen.pre_ticks) / v;
    if (move <= 0.0) {
        move = 1.0;
    }
    return (int)(1.0 * move);
}

#if defined(UT)
TEST(sdl2_event, get_touch_interval)
{
    TEST_ASSERT_EQUAL_INT(1, !!get_touch_interval(0));
}
#endif

static int release_keys(void)
{
    int cc = 0;

    for (cc = 0; cc <= KEY_BIT_LAST; cc++) {
        if (myevent.keypad.cur_keys & 1) {
#if !defined(UT)
            SDL_SendKeyboardKey(SDL_RELEASED, SDL_GetScancodeFromKey(nds_key_code[cc]));
#endif
        }
        myevent.keypad.cur_keys >>= 1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_event, release_keys)
{
    myevent.keypad.cur_keys = (1 << KEY_BIT_A);
    TEST_ASSERT_EQUAL_INT(0, release_keys());
    TEST_ASSERT_EQUAL_INT(0, myevent.keypad.cur_keys);
}
#endif

static int hit_hotkey(uint32_t bit)
{
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(UT) || defined(FLIP) || defined(GKD2)
    uint32_t mask = (1 << bit) | (1 << ((nds.hotkey == HOTKEY_BIND_SELECT) ? KEY_BIT_SELECT : KEY_BIT_MENU));
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000)
    uint32_t mask = (1 << bit) | (1 << KEY_BIT_MENU);
#endif

    return (myevent.keypad.cur_keys ^ mask) ? 0 : 1;
}

#if defined(UT)
TEST(sdl2_event, hit_hotkey)
{
    nds.hotkey = HOTKEY_BIND_SELECT;
    myevent.keypad.cur_keys = (1 << KEY_BIT_SELECT) | (1 << KEY_BIT_A);
    TEST_ASSERT_EQUAL_INT(1, hit_hotkey(KEY_BIT_A));
}
#endif

static int set_key_bit(uint32_t bit, int val)
{
    debug("call %s()\n", __func__);

    if (val) {
#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000)
        if (bit == KEY_BIT_MENU) {
            myevent.keypad.cur_keys = (1 << KEY_BIT_MENU);
        }
#endif

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        if (nds.hotkey == HOTKEY_BIND_SELECT) {
            if (bit == KEY_BIT_SELECT) {
                myevent.keypad.cur_keys = (1 << KEY_BIT_SELECT);
            }
        }
        else {
            if (bit == KEY_BIT_MENU) {
                myevent.keypad.cur_keys = (1 << KEY_BIT_MENU);
            }
        }
#endif
        myevent.keypad.cur_keys|= (1 << bit);
    }
    else {
        myevent.keypad.cur_keys &= ~(1 << bit);
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_event, set_key_bit)
{
    myevent.keypad.cur_keys = 0;
    TEST_ASSERT_EQUAL_INT(0, set_key_bit(KEY_BIT_UP, 1));
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_UP), myevent.keypad.cur_keys);
    TEST_ASSERT_EQUAL_INT(0, set_key_bit(KEY_BIT_UP, 0));
    TEST_ASSERT_EQUAL_INT((0 << KEY_BIT_UP), myevent.keypad.cur_keys);
}
#endif

#if defined(A30) || defined(FLIP) || defined(UT)
static int trans_joy_to_keypad(jval_t *j, int rjoy)
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

    int UP_TH = -1 * nds.joy.dzone;
    int DOWN_TH = nds.joy.dzone;
    int LEFT_TH = -1 * nds.joy.dzone;
    int RIGHT_TH = nds.joy.dzone;

    debug("call %s(rjoy=%d)\n", __func__, rjoy);

    if (rjoy) {
        u_key = KEY_BIT_X;
        d_key = KEY_BIT_B;
        l_key = KEY_BIT_Y;
        r_key = KEY_BIT_A;

        UP_TH = -1 * nds.rjoy.dzone;
        DOWN_TH = nds.rjoy.dzone;
        LEFT_TH = -1 * nds.rjoy.dzone;
        RIGHT_TH = nds.rjoy.dzone;
    }

    if (j->x != pre_x[rjoy]) {
        pre_x[rjoy] = j->x;
        if (pre_x[rjoy] < LEFT_TH) {
            if (pre_left[rjoy] == 0) {
                r = 1;
                pre_left[rjoy] = 1;
                set_key_bit(l_key, 1);
            }
        }
        else if (pre_x[rjoy] > RIGHT_TH){
            if (pre_right[rjoy] == 0) {
                r = 1;
                pre_right[rjoy] = 1;
                set_key_bit(r_key, 1);
            }
        }
        else {
            if (pre_left[rjoy] != 0) {
                r = 1;
                pre_left[rjoy] = 0;
                set_key_bit(l_key, 0);
            }
            if (pre_right[rjoy] != 0) {
                r = 1;
                pre_right[rjoy] = 0;
                set_key_bit(r_key, 0);
            }
        }
    }

    if (j->y != pre_y[rjoy]) {
        pre_y[rjoy] = j->y;
        if (pre_y[rjoy] < UP_TH) {
            if (pre_up[rjoy] == 0) {
                r = 1;
                pre_up[rjoy] = 1;
                set_key_bit(u_key, 1);
            }
        }
        else if (pre_y[rjoy] > DOWN_TH){
            if (pre_down[rjoy] == 0) {
                r = 1;
                pre_down[rjoy] = 1;
                set_key_bit(d_key, 1);
            }
        }
        else {
            if (pre_up[rjoy] != 0) {
                r = 1;
                pre_up[rjoy] = 0;
                set_key_bit(u_key, 0);
            }
            if (pre_down[rjoy] != 0) {
                r = 1;
                pre_down[rjoy] = 0;
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

static int trans_joy_to_touch(jval_t *j, int rjoy)
{
    int r = 0;
    static int pre_x[2] = { -1, -1 };
    static int pre_y[2] = { -1, -1 };

    static int pre_up[2] = { 0 };
    static int pre_down[2] = { 0 };
    static int pre_left[2] = { 0 };
    static int pre_right[2] = { 0 };

    int UP_TH = -1 * nds.joy.dzone;
    int DOWN_TH = nds.joy.dzone;
    int LEFT_TH = -1 * nds.joy.dzone;
    int RIGHT_TH = nds.joy.dzone;

    debug("call %s(rjoy=%d)\n", __func__, rjoy);

    if (rjoy) {
        UP_TH = -1 * nds.rjoy.dzone;
        DOWN_TH = nds.rjoy.dzone;
        LEFT_TH = -1 * nds.rjoy.dzone;
        RIGHT_TH = nds.rjoy.dzone;
    }

    if (j->x != pre_x[rjoy]) {
        pre_x[rjoy] = j->x;
        if (pre_x[rjoy] < LEFT_TH) {
            if (pre_left[rjoy] == 0) {
                pre_left[rjoy] = 1;
            }
        }
        else if (pre_x[rjoy] > RIGHT_TH){
            if (pre_right[rjoy] == 0) {
                pre_right[rjoy] = 1;
            }
        }
        else {
            if (pre_left[rjoy] != 0) {
                pre_left[rjoy] = 0;
            }
            if (pre_right[rjoy] != 0) {
                pre_right[rjoy] = 0;
            }
        }
    }

    if (j->y != pre_y[rjoy]) {
        pre_y[rjoy] = j->y;
        if (pre_y[rjoy] < UP_TH) {
            if (pre_up[rjoy] == 0) {
                pre_up[rjoy] = 1;
            }
        }
        else if (pre_y[rjoy] > DOWN_TH){
            if (pre_down[rjoy] == 0) {
                pre_down[rjoy] = 1;
            }
        }
        else {
            if (pre_up[rjoy] != 0) {
                pre_up[rjoy] = 0;
            }
            if (pre_down[rjoy] != 0) {
                pre_down[rjoy] = 0;
            }
        }
    }

    if (pre_up[rjoy] || pre_down[rjoy] || pre_left[rjoy] || pre_right[rjoy]) {
        if (myevent.keypad.cur_keys &  (1 << KEY_BIT_Y)) {
            if (pre_right[rjoy]) {
                static int cc = 0;

                if (cc == 0) {
                    nds.pen.sel+= 1;
                    if (nds.pen.sel >= nds.pen.max) {
                        nds.pen.sel = 0;
                    }
                    reload_pen();
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

            if (is_hh_mode() && (nds.keys_rotate == 0)) {
                if (pre_up[rjoy]) {
                    myevent.touch.x+= get_touch_interval(1);
                }
                if (pre_down[rjoy]) {
                    myevent.touch.x-= get_touch_interval(1);
                }
                if (pre_left[rjoy]) {
                    myevent.touch.y-= get_touch_interval(0);
                }
                if (pre_right[rjoy]) {
                    myevent.touch.y+= get_touch_interval(0);
                }
            }
            else {
                if (pre_up[rjoy]) {
                    myevent.touch.y-= get_touch_interval(1);
                }
                if (pre_down[rjoy]) {
                    myevent.touch.y+= get_touch_interval(1);
                }
                if (pre_left[rjoy]) {
                    myevent.touch.x-= get_touch_interval(0);
                }
                if (pre_right[rjoy]) {
                    myevent.touch.x+= get_touch_interval(0);
                }
            }
            limit_touch_axis();

            x = (myevent.touch.x * 160) / myevent.touch.max_x;
            y = (myevent.touch.y * 120) / myevent.touch.max_y;
            SDL_SendMouseMotion(vid.window, 0, 0, x + 80, y + (nds.pen.pos ? 120 : 0));
        }
        nds.joy.show_cnt = MYJOY_SHOW_CNT;
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

static int trans_joy_to_custkey(jval_t *j, int rjoy)
{
    int r = 0;
    static int pre_x[2] = { -1, -1 };
    static int pre_y[2] = { -1, -1 };

    static int pre_up[2] = { 0 };
    static int pre_down[2] = { 0 };
    static int pre_left[2] = { 0 };
    static int pre_right[2] = { 0 };

    uint32_t u_key = nds.joy.cuskey[0];
    uint32_t d_key = nds.joy.cuskey[1];
    uint32_t l_key = nds.joy.cuskey[2];
    uint32_t r_key = nds.joy.cuskey[3];

    int UP_TH = -1 * nds.joy.dzone;
    int DOWN_TH = nds.joy.dzone;
    int LEFT_TH = -1 * nds.joy.dzone;
    int RIGHT_TH = nds.joy.dzone;

    debug("call %s(rjoy=%d)\n", __func__, rjoy);

    if (rjoy) {
        UP_TH = -1 * nds.rjoy.dzone;
        DOWN_TH = nds.rjoy.dzone;
        LEFT_TH = -1 * nds.rjoy.dzone;
        RIGHT_TH = nds.rjoy.dzone;

        u_key = nds.rjoy.cuskey[0];
        d_key = nds.rjoy.cuskey[1];
        l_key = nds.rjoy.cuskey[2];
        r_key = nds.rjoy.cuskey[3];
    }

    if (j->x != pre_x[rjoy]) {
        pre_x[rjoy] = j->x;
        if (pre_x[rjoy] < LEFT_TH) {
            if (pre_left[rjoy] == 0) {
                r = 1;
                pre_left[rjoy] = 1;
                set_key_bit(l_key, 1);
            }
        }
        else if (pre_x[rjoy] > RIGHT_TH){
            if (pre_right[rjoy] == 0) {
                r = 1;
                pre_right[rjoy] = 1;
                set_key_bit(r_key, 1);
            }
        }
        else {
            if (pre_left[rjoy] != 0) {
                r = 1;
                pre_left[rjoy] = 0;
                set_key_bit(l_key, 0);
            }
            if (pre_right[rjoy] != 0) {
                r = 1;
                pre_right[rjoy] = 0;
                set_key_bit(r_key, 0);
            }
        }
    }

    if (j->y != pre_y[rjoy]) {
        pre_y[rjoy] = j->y;
        if (pre_y[rjoy] < UP_TH) {
            if (pre_up[rjoy] == 0) {
                r = 1;
                pre_up[rjoy] = 1;
                set_key_bit(u_key, 1);
            }
        }
        else if (pre_y[rjoy] > DOWN_TH){
            if (pre_down[rjoy] == 0) {
                r = 1;
                pre_down[rjoy] = 1;
                set_key_bit(d_key, 1);
            }
        }
        else {
            if (pre_up[rjoy] != 0) {
                r = 1;
                pre_up[rjoy] = 0;
                set_key_bit(u_key, 0);
            }
            if (pre_down[rjoy] != 0) {
                r = 1;
                pre_down[rjoy] = 0;
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

    if (nds.joy.mode == MYJOY_MODE_KEYPAD) {
        r |= trans_joy_to_keypad(&myjoy.left.last, 0);
    }
    else if (nds.joy.mode == MYJOY_MODE_STYLUS) {
        r |= trans_joy_to_touch(&myjoy.left.last, 0);
    }
    else if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
        r |= trans_joy_to_custkey(&myjoy.left.last, 0);
    }

    if (nds.rjoy.mode == MYJOY_MODE_KEYPAD) {
        r |= trans_joy_to_keypad(&myjoy.right.last, 1);
    }
    else if (nds.rjoy.mode == MYJOY_MODE_STYLUS) {
        r |= trans_joy_to_touch(&myjoy.right.last, 1);
    }
    else if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
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

static int handle_hotkey(void)
{
    int check_hotkey = 0;

#if defined(TRIMUI)
    char buf[MAX_PATH] = { 0 };
#endif

    debug("call %s()\n", __func__);

    check_hotkey = 1;
    if (nds.menu.enable || nds.menu.drastic.enable) {
        check_hotkey = 0;
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_UP)) {
        if (myevent.mode == NDS_TOUCH_MODE) {
            switch (nds.dis_mode) {
            case NDS_DIS_MODE_VH_T0:
            case NDS_DIS_MODE_VH_T1:
            case NDS_DIS_MODE_S0:
            case NDS_DIS_MODE_S1:
                break;
            default:
                nds.pen.pos = 1;
                break;
            }
        }
#if defined(A30) || defined(FLIP)
        if (nds.joy.mode == MYJOY_MODE_STYLUS) {
            nds.pen.pos = 1;
        }
#endif
        set_key_bit(KEY_BIT_UP, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_DOWN)) {
#if defined(MINI) || defined(QX1000) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        if (myevent.mode == NDS_TOUCH_MODE) {
            switch (nds.dis_mode) {
            case NDS_DIS_MODE_VH_T0:
            case NDS_DIS_MODE_VH_T1:
            case NDS_DIS_MODE_S0:
            case NDS_DIS_MODE_S1:
                break;
            default:
                nds.pen.pos = 0;
                break;
            }
        }
#if defined(A30) || defined(FLIP)
        if (nds.joy.mode == MYJOY_MODE_STYLUS) {
            nds.pen.pos = 0;
        }
#endif
#endif
        set_key_bit(KEY_BIT_DOWN, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_LEFT)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        if (nds.hres_mode == 0) {
            if (nds.dis_mode > 0) {
                nds.dis_mode -= 1;
            }
        }
        else {
            nds.dis_mode = NDS_DIS_MODE_HRES0;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA)
        if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0)) {
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
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        if (nds.hres_mode == 0) {
            if (nds.dis_mode < NDS_DIS_MODE_LAST) {
                nds.dis_mode += 1;
            }
        }
        else {
            nds.dis_mode = NDS_DIS_MODE_HRES1;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA)
        set_key_bit(KEY_BIT_R2, 1);
#endif
        set_key_bit(KEY_BIT_RIGHT, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_A)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        if ((myevent.mode == NDS_KEY_MODE) && (nds.hres_mode == 0)) {
            uint32_t tmp = nds.alt_mode;
            nds.alt_mode = nds.dis_mode;
            nds.dis_mode = tmp;
        }
#endif

#if defined(TRIMUI)
        nds.dis_mode = (nds.dis_mode == NDS_DIS_MODE_S0) ? NDS_DIS_MODE_S1 : NDS_DIS_MODE_S0;
        disp_resize();
#endif
        set_key_bit(KEY_BIT_A, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_B)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        pixel_filter = pixel_filter ? 0 : 1;
#endif
        set_key_bit(KEY_BIT_B, 0);
    }

    if (hit_hotkey(KEY_BIT_X)) {
#if defined(TRIMUI)
        int w = FB_W;
        int h = FB_H;
        int pitch = FB_W * FB_BPP;
        uint32_t *dst = NULL;
        SDL_Surface *p = NULL;
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);

        // for MMIYOO
        // dst = (uint32_t *)gfx.fb.virAddr + (w * (gfx.vinfo.yoffset ? 0 : h));
        dst = (uint32_t *)gfx.hw.ion.vadd + (w * h * (gfx.fb.flip ? 0 : 1));

        if (nds.dis_mode == NDS_DIS_MODE_S0) {
            w = NDS_H;
            h = NDS_W;
        }
        else {
            w = FB_H;
            h = FB_W;
        }
        pitch = FB_H * FB_BPP;

        if (dst) {
            p = SDL_CreateRGBSurfaceFrom(dst, w, h, 32, pitch, 0, 0, 0, 0);
            if (p) {
                sprintf(buf, "%s/%02d%02d%02d.png", nds.shot.path, tm.tm_hour, tm.tm_min, tm.tm_sec);
                IMG_SavePNG(p, buf);
                SDL_FreeSurface(p);
                printf(PREFIX"Saved \'%s\'\n", buf);
            }
        }
        nds.shot.take = 1;
#endif
        set_key_bit(KEY_BIT_X, 0);
    }

    if (hit_hotkey(KEY_BIT_Y)) {
        if (check_hotkey) {
            if (myevent.mode == NDS_KEY_MODE) {
                if ((nds.overlay.sel >= nds.overlay.max) &&
                    (nds.dis_mode != NDS_DIS_MODE_VH_T0) &&
                    (nds.dis_mode != NDS_DIS_MODE_VH_T1) &&
                    (nds.dis_mode != NDS_DIS_MODE_S1) &&
                    (nds.dis_mode != NDS_DIS_MODE_HRES1))
                {
                    nds.theme.sel+= 1;
                    if (nds.theme.sel > nds.theme.max) {
                        nds.theme.sel = 0;
                    }
                }
            }
            else {
                nds.pen.sel+= 1;
                if (nds.pen.sel >= nds.pen.max) {
                    nds.pen.sel = 0;
                }
                reload_pen();
            }
        }
        else {
            nds.menu.sel+= 1;
            if (nds.menu.sel >= nds.menu.max) {
                nds.menu.sel = 0;
            }
            reload_menu();

            if (nds.menu.drastic.enable) {
                SDL_SendKeyboardKey(SDL_PRESSED, SDLK_e);
                usleep(100000);
                SDL_SendKeyboardKey(SDL_RELEASED, SDLK_e);
            }
        }
        set_key_bit(KEY_BIT_Y, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_START)) {
#if defined(MINI) || defined(QX1000) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        if (nds.menu.enable == 0) {
#if defined(QX1000)
            update_wayland_res(640, 480);
#endif

            nds.menu.enable = 1;
            usleep(100000);
            handle_menu(-1);
            myevent.keypad.pre_keys = myevent.keypad.cur_keys = 0;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000)
        set_key_bit(KEY_BIT_EXIT, 1);
#endif
        set_key_bit(KEY_BIT_START, 0);
    }

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
    if (nds.hotkey == HOTKEY_BIND_MENU) {
        if (check_hotkey && hit_hotkey(KEY_BIT_SELECT)) {
            set_key_bit(KEY_BIT_ONION, 1);
            set_key_bit(KEY_BIT_SELECT, 0);
        }
    }
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000)
    if (check_hotkey && hit_hotkey(KEY_BIT_SELECT)) {
        set_key_bit(KEY_BIT_ONION, 1);
        set_key_bit(KEY_BIT_SELECT, 0);
    }
#endif

    if (check_hotkey && hit_hotkey(KEY_BIT_R1)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        static int pre_ff = 0;

        if (pre_ff != nds.fast_forward) {
            pre_ff = nds.fast_forward;
            fast_forward(nds.fast_forward);
        }
        set_key_bit(KEY_BIT_FAST, 1);
#endif

#if defined(TRIMUI) || defined(PANDORA)
        set_key_bit(KEY_BIT_SAVE, 1);
#endif
        set_key_bit(KEY_BIT_R1, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_L1)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        set_key_bit(KEY_BIT_EXIT, 1);
#endif

#if defined(TRIMUI) || defined(PANDORA)
        set_key_bit(KEY_BIT_LOAD, 1);
#endif
        set_key_bit(KEY_BIT_L1, 0);
    }

#if defined(MINI) || defined(QX1000) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
    if (check_hotkey && hit_hotkey(KEY_BIT_R2)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        set_key_bit(KEY_BIT_LOAD, 1);
#else
        set_key_bit(KEY_BIT_SAVE, 1);
#endif
        set_key_bit(KEY_BIT_R2, 0);
    }

    if (check_hotkey && hit_hotkey(KEY_BIT_L2)) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        set_key_bit(KEY_BIT_SAVE, 1);
#else
        set_key_bit(KEY_BIT_LOAD, 1);
#endif
        set_key_bit(KEY_BIT_L2, 0);
    }
    else if (myevent.keypad.cur_keys & (1 << KEY_BIT_L2)) {
#if defined(A30) || defined(FLIP)
        if (nds.joy.mode != MYJOY_MODE_STYLUS) {
#endif
            if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0)) {
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

    if (!(myevent.keypad.cur_keys & 0x0f)) {
        nds.pen.pre_ticks = clock();
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_event, handle_hotkey)
{
    TEST_ASSERT_EQUAL_INT(0, handle_hotkey());
}
#endif

#if defined(FLIP) || defined(UT)
static int get_flip_key_code(struct input_event *e)
{
    int r = 0;
    int cc = 0;
    int buf[DEV_KEY_BUF_MAX] = { 0 };

    static int pre_bits = 0;

    const uint32_t kval[DEV_KEY_BUF_MAX] = {
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

    debug("call %s()\n", __func__);

    if (myevent.fd < 0) {
        error("invalid input handle\n");
        return -1;
    }

#if !defined(UT)
    if (read(myevent.fd, buf, sizeof(buf)) == 0) {
        return r;
    }
#endif

    for (cc = 0; cc < DEV_KEY_IDX_MAX; cc++) {
        if ((!!buf[cc]) == (!!(pre_bits & (1 << cc)))) {
            continue;
        }

        if (kval[cc] > 0) {
            r |= 1;
            e->code = kval[cc];
            e->value = !!buf[cc];

            if (buf[cc]) {
                pre_bits |= (1 << cc);
            }
            else {
                pre_bits &= ~(1 << cc);
            }
        }
    }

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

    debug("call %s()\n", __func__);

    if (myevent.fd < 0) {
        error("invalid input handle\n");
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

    TEST_ASSERT_EQUAL_INT(0, get_rg28xx_key_code(&e));
}
#endif

static int get_input_key_code(struct input_event *e)
{
    debug("call %s()\n", __func__);

    if (myevent.fd < 0) {
        error("invalid input handle\n");
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
    if ((nds.menu.enable == 0) && (nds.menu.drastic.enable == 0) && nds.keys_rotate) {
        if (nds.keys_rotate == 1) {
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

    if (nds.swap_l1l2) {
        myevent.keypad.l1 = DEV_KEY_CODE_L2;
        myevent.keypad.l2 = DEV_KEY_CODE_L1;
    }
    else {
        myevent.keypad.l1 = DEV_KEY_CODE_L1;
        myevent.keypad.l2 = DEV_KEY_CODE_L2;
    }

    if (nds.swap_r1r2) {
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
}
#endif

#if defined(TRIMUI) || defined(UT)
static int handle_trimui_special_key(void)
{
#if !defined(UT)
    if (cust_key.gpio != NULL) {
        static uint32_t pre_value = 0;
        uint32_t v = *cust_key.gpio & 0x800;

        if (v != pre_value) {
            pre_value = v;
            set_key_bit(KEY_BIT_R2, !v);
        }
    }
#endif

    return 0;
}
#endif

#if defined(UT)
TEST(sdl2_event, handle_trimui_special_key)
{
    TEST_ASSERT_EQUAL_INT(0, handle_trimui_special_key());
}
#endif

static int update_key_bit(uint32_t c, uint32_t v)
{
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
#if defined(A30) || defined(FLIP)
    if (c == myevent.keypad.r2) {
        if (nds.joy.mode == MYJOY_MODE_STYLUS) {
            nds.joy.show_cnt = MYJOY_SHOW_CNT;
            SDL_SendMouseButton(vid.window, 0, v ? SDL_PRESSED : SDL_RELEASED, SDL_BUTTON_LEFT);
        }
        set_key_bit(KEY_BIT_L2, v);
    }
    if (c == myevent.keypad.l2) {
        set_key_bit(KEY_BIT_R2, v);
    }
#else
    if (c == myevent.keypad.r2) {
        set_key_bit(KEY_BIT_L2, v);
    }
    if (c == myevent.keypad.l2) {
        set_key_bit(KEY_BIT_R2, v);
    }
#endif

    if (c == myevent.keypad.select) {
        set_key_bit(KEY_BIT_SELECT, v);
    }
    if (c == myevent.keypad.start) {
        set_key_bit(KEY_BIT_START, v);
    }
    if (c == myevent.keypad.menu) {
        set_key_bit(KEY_BIT_MENU, v);
    }

#if defined(QX1000)
    if (c == myevent.keypad.save) {
        set_key_bit(KEY_BIT_SAVE, v);
    }
    if (c == myevent.keypad.load) {
        set_key_bit(KEY_BIT_LOAD, v);
    }
    if (c == myevent.keypad.fast) {
        set_key_bit(KEY_BIT_FAST, v);
    }
    if (c == myevent.keypad.exit) {
        set_key_bit(KEY_BIT_EXIT, v);
    }
#endif

#if defined(MINI)
    if (c == myevent.keypad.power) {
        set_key_bit(KEY_BIT_POWER, v);
    }
    if (c == myevent.keypad.vol_up) {
        set_key_bit(KEY_BIT_VOLUP, v);
        if (is_stock_os) {
            if (v == 0) {
                myevent.vol = volume_inc();
            }
        }
        else {
            nds.defer_update_bg = 60;
        }
    }
    if (c == myevent.keypad.vol_down) {
        set_key_bit(KEY_BIT_VOLDOWN, v);
        if (is_stock_os) {
            if (v == 0) {
                myevent.vol = volume_dec();
            }
        }
        else {
            nds.defer_update_bg = 60;
        }
        break;
    }
#endif

#if defined(A30) || defined(RG28XX)
    if (c == myevent.keypad.vol_up) {
        set_key_bit(KEY_BIT_VOLUP, v);
        if (v == 0) {
            myevent.vol = volume_inc();
        }
    }
    if (c == myevent.keypad.vol_down) {
        set_key_bit(KEY_BIT_VOLDOWN, v);
        if (v == 0) {
            myevent.vol = volume_dec();
        }
    }
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_event, update_key_bit)
{
    myevent.keypad.cur_keys = 0;
    myevent.keypad.up = DEV_KEY_CODE_UP;
    TEST_ASSERT_EQUAL_INT(0, update_key_bit(DEV_KEY_CODE_UP, 1));
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_UP), myevent.keypad.cur_keys);
    TEST_ASSERT_EQUAL_INT(0, update_key_bit(DEV_KEY_CODE_UP, 0));
    TEST_ASSERT_EQUAL_INT((0 << KEY_BIT_UP), myevent.keypad.cur_keys);
}
#endif

int input_handler(void *data)
{
    int rk = 0;
    int rj = 0;
    struct input_event ev = {{ 0 }};

#if !defined(UT)
    myevent.fd = open(INPUT_DEV, O_RDONLY | O_NONBLOCK | O_CLOEXEC);
    if (myevent.fd < 0) {
        error("failed to open \"%s\"\n", INPUT_DEV);
        exit(-1);
    }
#endif

#if !defined(UT)
    myevent.thread.running = 1;

    myevent.sem = SDL_CreateSemaphore(1);
    if(myevent.sem == NULL) {
        error("failed to create semaphore\n");
        exit(-1);
    }
#endif

    while (myevent.thread.running) {
        SDL_SemWait(myevent.sem);

        update_latest_keypad_value();

#if defined(FLIP) || defined(UT)
        rk = get_flip_key_code(&ev);
#elif defined(RG28XX) || defined(UT)
        rk = get_rg28xx_key_code(&ev);
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
        usleep(1000000 / 60);
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
#if defined(MINI)
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

#if defined(QX1000)
    myevent.keypad.save = DEV_KEY_CODE_SAVE;
    myevent.keypad.load = DEV_KEY_CODE_LOAD;
    myevent.keypad.fast = DEV_KEY_CODE_FAST;
    myevent.keypad.exit = DEV_KEY_CODE_EXIT;
#endif

#if defined(TRIMUI)
    cust_key.gpio = NULL;
    cust_key.fd = open("/dev/mem", O_RDWR);
    if (cust_key.fd > 0) {
        cust_key.mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, cust_key.fd, 0x01c20000);
        if (cust_key.mem != MAP_FAILED) {
            uint32_t *p = NULL;

            p = (uint32_t *)(cust_key.mem + 0x800 + (0x24 * 6) + 0x04);
            cust_key.pre_cfg = *p;
            *p &= 0xfff000ff;

            p = (uint32_t *)(cust_key.mem + 0x800 + (0x24 * 6) + 0x1c);
            *p |= 0x01500000;

            cust_key.gpio = (uint32_t *)(cust_key.mem + 0x800 + (0x24 * 6) + 0x10);
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

#if defined(MINI)
    dir = opendir("/mnt/SDCARD/.tmp_update");
    if (dir) {
        closedir(dir);
    }
    else {
        is_stock_os = 1;
        debug("it is stock system\n");
    }
#endif
}

#if defined(UT)
TEST(sdl2_event, init_event)
{
    init_event();
    TEST_ASSERT_EQUAL_INT(NDS_KEY_MODE, myevent.mode);
}
#endif

void quit_event(void)
{
    debug("call %s()\n", __func__);

    myevent.thread.running = 0;

#if !defined(UT)
    SDL_WaitThread(myevent.thread.id, NULL);
    SDL_DestroySemaphore(myevent.sem);
#endif

    if(myevent.fd > 0) {
        close(myevent.fd);
        myevent.fd = -1;
    }

#if defined(TRIMUI)
    if (cust_key.fd > 0) {
        uint32_t *p = (uint32_t *)(cust_key.mem + 0x800 + (0x24 * 6) + 0x04);

        *p = cust_key.pre_cfg;
        munmap(cust_key.mem, 4096);
        close(cust_key.fd);

        cust_key.gpio = NULL;
        cust_key.fd = -1;
    }
#endif
}

#if defined(UT)
TEST(sdl2_event, quit_event)
{
    quit_event();
    TEST_PASS();
}
#endif

static int send_key_to_menu(void)
{
    int cc = 0;
    uint32_t bit = 0;
    uint32_t changed = myevent.keypad.pre_keys ^ myevent.keypad.cur_keys;

    debug("call %s()\n", __func__);

    for (cc=0; cc<=KEY_BIT_LAST; cc++) {
        bit = 1 << cc;

        if (changed & bit) {
            if ((myevent.keypad.cur_keys & bit) == 0) {
                handle_menu(cc);
            }
        }
    }
    myevent.keypad.pre_keys = myevent.keypad.cur_keys;

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_key_to_menu)
{
    TEST_ASSERT_EQUAL_INT(0, send_key_to_menu());
}
#endif

static int send_key_event(void)
{
    int cc = 0;
    uint32_t bit = 0;
    uint32_t changed = myevent.keypad.pre_keys ^ myevent.keypad.cur_keys;

    debug("call %s()\n", __func__);

    for (cc=0; cc<=KEY_BIT_LAST; cc++) {
        bit = 1 << cc;

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2)
        if ((nds.hotkey == HOTKEY_BIND_MENU) && (cc == KEY_BIT_MENU)) {
            continue;
        }
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000)
        if (cc == KEY_BIT_MENU) {
            continue;
        }
#endif

        if (changed & bit) {
#if !defined(UT)
            SDL_SendKeyboardKey((myevent.keypad.cur_keys & bit) ? SDL_PRESSED : SDL_RELEASED, SDL_GetScancodeFromKey(nds_key_code[cc]));
#endif
        }
    }

#if defined(TRIMUI) || defined(PANDORA)
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_R2)) {
        set_key_bit(KEY_BIT_R2, 0);
    }
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_L2)) {
        set_key_bit(KEY_BIT_L2, 0);
    }
#endif
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_SAVE)) {
        nds.state|= NDS_STATE_QSAVE;
        set_key_bit(KEY_BIT_SAVE, 0);
    }
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_LOAD)) {
        nds.state|= NDS_STATE_QLOAD;
        set_key_bit(KEY_BIT_LOAD, 0);
    }
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_FAST)) {
        nds.state|= NDS_STATE_FF;
        set_key_bit(KEY_BIT_FAST, 0);
    }
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_ONION)) {
        set_key_bit(KEY_BIT_ONION, 0);
    }
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_EXIT)) {
        release_keys();
    }
    myevent.keypad.pre_keys = myevent.keypad.cur_keys;

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_key_event)
{
    myevent.keypad.pre_keys = 0;
    myevent.keypad.cur_keys = (1 << KEY_BIT_EXIT);
    TEST_ASSERT_EQUAL_INT(0, send_key_event());
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_EXIT), myevent.keypad.cur_keys);
    TEST_ASSERT_EQUAL_INT((1 << KEY_BIT_EXIT), myevent.keypad.pre_keys);
}
#endif

static int update_touch_axis(void)
{
    int r = 0;

    debug("call %s()\n", __func__);

    if (is_hh_mode() && (nds.keys_rotate == 0)) {
        if (myevent.keypad.cur_keys & (1 << KEY_BIT_UP)) {
            r = 1;
            myevent.touch.x+= get_touch_interval(1);
        }
        if (myevent.keypad.cur_keys & (1 << KEY_BIT_DOWN)) {
            r = 1;
            myevent.touch.x-= get_touch_interval(1);
        }
        if (myevent.keypad.cur_keys & (1 << KEY_BIT_LEFT)) {
            r = 1;
            myevent.touch.y-= get_touch_interval(0);
        }
        if (myevent.keypad.cur_keys & (1 << KEY_BIT_RIGHT)) {
            r = 1;
            myevent.touch.y+= get_touch_interval(0);
        }
    }
    else {
        if (myevent.keypad.cur_keys & (1 << KEY_BIT_UP)) {
            r = 1;
            myevent.touch.y-= get_touch_interval(1);
        }
        if (myevent.keypad.cur_keys & (1 << KEY_BIT_DOWN)) {
            r = 1;
            myevent.touch.y+= get_touch_interval(1);
        }
        if (myevent.keypad.cur_keys & (1 << KEY_BIT_LEFT)) {
            r = 1;
            myevent.touch.x-= get_touch_interval(0);
        }
        if (myevent.keypad.cur_keys & (1 << KEY_BIT_RIGHT)) {
            r = 1;
            myevent.touch.x+= get_touch_interval(0);
        }
    }

    return r;
}

#if defined(UT)
TEST(sdl2_event, update_touch_axis)
{
    myevent.touch.x = 0;
    myevent.touch.y = 0;
    myevent.keypad.cur_keys = (1 << KEY_BIT_RIGHT);
    TEST_ASSERT_EQUAL_INT(1, update_touch_axis());
    TEST_ASSERT_EQUAL_INT(1, !!myevent.touch.x);
}
#endif

static int send_touch_key(void)
{
    uint32_t cc = 0;
    uint32_t bit = 0;
    uint32_t changed = myevent.keypad.pre_keys ^ myevent.keypad.cur_keys;

    debug("call %s()\n", __func__);

    if (changed & (1 << KEY_BIT_A)) {
#if !defined(UT)
        SDL_SendMouseButton(vid.window, 0, (myevent.keypad.cur_keys & (1 << KEY_BIT_A)) ? SDL_PRESSED : SDL_RELEASED, SDL_BUTTON_LEFT);
#endif
    }

    for (cc = 0; cc <= KEY_BIT_LAST; cc++) {
        bit = 1 << cc;

        if ((cc == KEY_BIT_FAST) || (cc == KEY_BIT_SAVE) || (cc == KEY_BIT_LOAD) || (cc == KEY_BIT_EXIT) || (cc == KEY_BIT_R2)) {
            if (changed & bit) {
#if !defined(UT)
                SDL_SendKeyboardKey((myevent.keypad.cur_keys & bit) ? SDL_PRESSED : SDL_RELEASED, SDL_GetScancodeFromKey(nds_key_code[cc]));
#endif
            }
        }
        if (cc == KEY_BIT_R1) {
            if (changed & bit) {
                myevent.touch.slow_down = (myevent.keypad.cur_keys & bit) ? 1 : 0;
            }
        }
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_touch_key)
{
    myevent.touch.slow_down = 0;
    myevent.keypad.pre_keys = 0;
    myevent.keypad.cur_keys = (1 << KEY_BIT_R1);
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

    SDL_SendMouseMotion(vid.window, 0, 0, x + 80, y + (nds.pen.pos ? 120 : 0));
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_touch_axis)
{
    TEST_ASSERT_EQUAL_INT(0, send_touch_axis());
}
#endif

static int send_touch_event(void)
{
    int r = 0;

    debug("call %s()\n", __func__);

    if (myevent.keypad.pre_keys != myevent.keypad.cur_keys) {
        send_touch_key();
    }

    r |= update_touch_axis();
    r |= limit_touch_axis();
    if (r) {
        send_touch_axis();
    }

#if defined(TRIMUI) || defined(PANDORA)
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_R2)) {
        set_key_bit(KEY_BIT_R2, 0);
    }
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_L2)) {
        set_key_bit(KEY_BIT_L2, 0);
    }
#endif
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_SAVE)) {
        set_key_bit(KEY_BIT_SAVE, 0);
    }
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_LOAD)) {
        set_key_bit(KEY_BIT_LOAD, 0);
    }
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_FAST)) {
        set_key_bit(KEY_BIT_FAST, 0);
    }
    if (myevent.keypad.pre_keys & (1 << KEY_BIT_EXIT)) {
        release_keys();
    }
    myevent.keypad.pre_keys = myevent.keypad.cur_keys;

    return 0;
}

#if defined(UT)
TEST(sdl2_event, send_touch_event)
{
    myevent.keypad.pre_keys = (1 << KEY_BIT_EXIT);
    TEST_ASSERT_EQUAL_INT(0, send_touch_event());
    TEST_ASSERT_EQUAL_INT(0, myevent.keypad.pre_keys);
    TEST_ASSERT_EQUAL_INT(0, myevent.keypad.cur_keys);
}
#endif

void pump_event(_THIS)
{
    debug("call %s()\n", __func__);

    SDL_SemWait(myevent.sem);
    if (nds.menu.enable) {
        send_key_to_menu();
    }
    else {
        if (myevent.mode == NDS_KEY_MODE) {
            if (myevent.keypad.pre_keys != myevent.keypad.cur_keys) {
                send_key_event();
            }
        }
        else if (myevent.mode == NDS_TOUCH_MODE) {
            send_touch_event();
        }
    }
    SDL_SemPost(myevent.sem);
}

#if defined(UT)
TEST(sdl2_event, pump_event)
{
    pump_event(NULL);
    TEST_PASS();
}
#endif

