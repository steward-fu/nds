// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include <time.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <dirent.h>
#include <stdbool.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <pthread.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <json-c/json.h>

#if defined(GKD2) || defined(GKDMINI) || defined(BRICK)
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
#endif

#if defined(PANDORA)
#include <linux/kd.h>
#endif

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "../../SDL_internal.h"
#include "../SDL_sysvideo.h"
#include "../SDL_sysvideo.h"
#include "../SDL_pixels_c.h"
#include "../../events/SDL_events_c.h"

#include "SDL_image.h"
#include "SDL_version.h"
#include "SDL_syswm.h"
#include "SDL_loadso.h"
#include "SDL_events.h"
#include "SDL_video.h"
#include "SDL_mouse.h"

#include "hook.h"
#include "common.h"
#include "hex_pen.h"
#include "nds_video.h"
#include "nds_event.h"

#if defined(FLIP)
#include "hex_flip_hotkey_cn.h"
#include "hex_flip_hotkey_en.h"
#endif

#if defined(BRICK)
#include "hex_brick_hotkey_cn.h"
#include "hex_brick_hotkey_en.h"
#endif

#if defined(GKD2)
#include "hex_gkd2_hotkey_cn.h"
#include "hex_gkd2_hotkey_en.h"
#endif

#if defined(GKDMINI)
#include "hex_gkdmini_hotkey_cn.h"
#include "hex_gkdmini_hotkey_en.h"
#endif

#if defined(MINI)
#include "hex_mini_hotkey_cn.h"
#include "hex_mini_hotkey_en.h"
#endif

#if defined(TRIMUI_SMART)
#include "hex_trimui_hotkey_cn.h"
#include "hex_trimui_hotkey_en.h"
#endif

nds_video myvideo = { 0 };

extern nds_hook myhook;
extern nds_event myevent;
extern nds_config myconfig;
        
static char lang_file_name[MAX_LANG_FILE][MAX_LANG_NAME] = { 0 };

#if defined(TRIMUI_SMART)
static uint32_t LUT_256x192_N20[NDS_W * NDS_H] = { 0 };
static uint32_t LUT_256x192_N21[NDS_W * NDS_H] = { 0 };
static uint32_t LUT_256x192_N30[NDS_W * NDS_H] = { 0 };
static uint32_t LUT_256x192_N31[NDS_W * NDS_H] = { 0 };
#endif

static void quit_video(_THIS);
static int flip_lcd(void);
static int init_device(void);
static int quit_device(void);
static int init_video(_THIS);
static int free_menu_res(void);
static int load_lang_file(void);
static int load_bg_image(void);
static int get_font_width(const char *);
static int get_font_height(const char *);
static int draw_touch_pen(void *, int, int);
static int draw_info(SDL_Surface *, const char *, int, int, uint32_t, uint32_t);
static int set_disp_mode(_THIS, SDL_VideoDisplay *, SDL_DisplayMode *);
static int get_file_name_by_index(const char *, int, char *, int);

#if defined(MINI)
static int load_mask_image(const char *);
#endif

#if !defined(TRIMUI_SMART) && !defined(MINI) && !defined(BRICK) && !defined(GKD2) && !defined(GKDMINI)
static int load_shader_file(const char *);
#endif

#if 0 //defined(MINI)
static int load_mask_file(void);
#endif

static SDL_Rect def_layout_pos[][2] = {
    // LAYOUT_MODE_N0
    {{ 0, 0, 160, 120 }, { 0, 0, 640, 480 }},
    // LAYOUT_MODE_N1
    {{ 0, 0, 256, 192 }, { 0, 0, 640, 480 }},
    // LAYOUT_MODE_N2
    {{ 0, 0, 0, 0 }, { 64, 48, 512, 384 }},
    // LAYOUT_MODE_N3
    {{ 0, 0, 0, 0 }, { 0, 0, 640, 480 }},
    // LAYOUT_MODE_N4
    {{ 192, 48, 256, 192 }, { 192, 240, 256, 192 }},
    // LAYOUT_MODE_N5
    {{ 160, 0, 320, 240 }, { 160, 240, 320, 240 }},
    // LAYOUT_MODE_N6
    {{ 64, 144, 256, 192 }, { 320, 144, 256, 192 }},
    // LAYOUT_MODE_N7
    {{ 0, 120, 320, 240 }, { 320, 120, 320, 240 }},
    // LAYOUT_MODE_N8
    {{ 0, 0, 160, 120 }, { 160, 120, 480, 360 }},
    // LAYOUT_MODE_N9
    {{ 0, 0, 256, 192 }, { 256, 192, 384, 288 }},
    // LAYOUT_MODE_N10
    {{ 240, 0, 160, 120 }, { 80, 120, 480, 360 }},
    // LAYOUT_MODE_N11
    {{ 256, 0, 128, 96 }, { 64, 96, 512, 384 }},
    // LAYOUT_MODE_N12
    {{ 512, 0, 128, 96 }, { 0, 96, 512, 384 }},
    // LAYOUT_MODE_N13
    {{ 0, 0, 128, 96 }, { 128, 96, 512, 384 }},
    // LAYOUT_MODE_N14
    {{ 192, 0, 256, 192 }, { 128, 192, 384, 288 }},
    // LAYOUT_MODE_N15
    {{ 0, 144, 256, 192 }, { 256, 96, 384, 288 }},

    // LAYOUT_MODE_B0
    {{ 0, 26, 427, 320 }, { 320, 26, 427, 320 }},
    // LAYOUT_MODE_B1
    {{ 320, 26, 427, 320 }, { 0, 26, 427, 320 }},
    // LAYOUT_MODE_B2
    {{ 0, 0, 480, 320 }, { 320, 0, 480, 320 }},
    // LAYOUT_MODE_B3
    {{ 320, 0, 480, 320 }, { 0, 0, 480, 320 }},

    // LAYOUT_MODE_D0
    //{{ 0, 0, 0, 0 }, { 0, 0, 640, 480 }},

#if defined(XT894) || defined(XT897) || defined(QX1000)
    // LAYOUT_MODE_C0
    {{ 0, 0, 160, 120 }, { 0, 0, 640, 480 }},
    // LAYOUT_MODE_C1
    {{ 0, 0, 0, 0 }, { 0, 0, 640, 480 }},
    // LAYOUT_MODE_C2
    {{ 0, 0, 0, 0 }, { 0, 0, 640, 480 }},
#endif
};

static const char* LAYOUT_NAME_STR[] = {
    "N00",
    "N01",
    "N02",
    "N03",
    "N04",
    "N05",
    "N06",
    "N07",
    "N08",
    "N09",
    "N10",
    "N11",
    "N12",
    "N13",
    "N14",
    "N15",
    "B00",
    "B01",
    "B02",
    "B03",

#if defined(XT894) || defined(XT897)
    "C00",
    "C01",
    "C02",
#endif
};

#if defined(FLIP) || defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
GLfloat bg_vertices[] = {
   -1.0f,  1.0f,  0.0f,  0.0f,  0.0f,
   -1.0f, -1.0f,  0.0f,  0.0f,  1.0f,
    1.0f, -1.0f,  0.0f,  1.0f,  1.0f,
    1.0f,  1.0f,  0.0f,  1.0f,  0.0f
};

GLfloat fg_vertices[] = {
   -1.0f,  1.0f,  0.0f,  0.0f,  0.0f,
   -1.0f, -1.0f,  0.0f,  0.0f,  1.0f,
    1.0f, -1.0f,  0.0f,  1.0f,  1.0f,
    1.0f,  1.0f,  0.0f,  1.0f,  0.0f
};

GLushort vert_indices[] = {
    0, 1, 2, 0, 2, 3
};
#endif

const char *def_vert_src =
"   attribute vec4 vert_tex_pos;                                            \n"
"   attribute vec2 vert_tex_coord;                                          \n"
"   attribute float vert_alpha;                                             \n"
"   varying vec2 frag_tex_coord;                                            \n"

"   void main()                                                             \n"
"   {                                                                       \n"
#if defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
"       const float angle = 270.0 * (3.1415 * 2.0) / 360.0;                 \n"
"       mat4 rot = mat4(                                                    \n"
"           cos(angle), -sin(angle), 0.0, 0.0,                              \n"
"           sin(angle),  cos(angle), 0.0, 0.0,                              \n"
"                  0.0,         0.0, 1.0, 0.0,                              \n"
"                  0.0,         0.0, 0.0, 1.0);                             \n"
"       gl_Position = vert_tex_pos * rot;                                   \n"
"       frag_tex_coord = vert_tex_coord;                                    \n"
#endif

#if defined(FLIP)
"       gl_Position = vert_tex_pos;                                         \n"
"       frag_tex_coord = vert_tex_coord;                                    \n"
#endif
"}                                                                          \n";

const char *def_frag_src =
"   precision highp float;                                                  \n"
"   varying vec2 frag_tex_coord;                                            \n"
"   uniform vec4 frag_screen;                                               \n"
"   uniform float frag_alpha;                                               \n"
"   uniform sampler2D frag_tex_sample;                                      \n"
"   void main()                                                             \n"
"   {                                                                       \n"
"       vec3 tex = texture2D(frag_tex_sample, frag_tex_coord).bgr;          \n"
"       gl_FragColor = vec4(tex, frag_alpha);                               \n"
"   }                                                                       \n";

#if defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
EGLint egl_cfg[] = {
    EGL_SURFACE_TYPE,
    EGL_WINDOW_BIT,
    EGL_RENDERABLE_TYPE,
    EGL_OPENGL_ES2_BIT,
    EGL_RED_SIZE,
    8,
    EGL_GREEN_SIZE,
    8,
    EGL_BLUE_SIZE,
    8,
    EGL_NONE
};

EGLint ctx_attribs[] = {
    EGL_CONTEXT_CLIENT_VERSION, 
    2, 
    EGL_NONE
};
#endif

#if defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
static void cb_remove(void *, struct wl_registry *, uint32_t);
static void cb_handle(void *, struct wl_registry *, uint32_t, const char *, uint32_t);

static struct wl_registry_listener cb_global = {
    .global = cb_handle,
    .global_remove = cb_remove
};
#endif

#if defined(UT)
TEST_GROUP(sdl2_video);

TEST_SETUP(sdl2_video)
{
}

TEST_TEAR_DOWN(sdl2_video)
{
}
#endif

static int alloc_lcd_mem(void)
{
    int i = 0;
    int j = 0;
    uint32_t size = NDS_Wx2 * NDS_Hx2 * 4;

    trace("call %s()\n", __func__)

    for (i = 0; i < 2; i++) {
        for (j = 0; j <2; j++) {
#if defined(MINI)
            MI_U32 r = 0;

            r = MI_SYS_MMA_Alloc(NULL, size, &myvideo.lcd.phy_addr[i][j]);
            if (r) {
                fatal("failed to allocate buffer for lcd.phy_addr[%d][%d] (size=%d)\n", i, j, size);
            }

            MI_SYS_Mmap(myvideo.lcd.phy_addr[i][j], size, &myvideo.lcd.virt_addr[i][j], TRUE);
#else
            myvideo.lcd.virt_addr[i][j] = malloc(size);

            if (myvideo.lcd.virt_addr[i][j] == NULL) {
                fatal("failed to allocate buffer for lcd.virt_addr[%d][%d] (size=%d)\n", i, j, size);
            }
#endif
            trace("lcd.virt_addr[%d][%d]=%p\n", i, j, myvideo.lcd.virt_addr[i][j]);
        }
    }

    return 0;
}

static int free_lcd_mem(void)
{
    int i = 0;
    int j = 0;

    trace("call %s()\n", __func__)

    for (i = 0; i < 2; i++) {
        for (j = 0; j <2; j++) {
#if defined(MINI)
            const int size = NDS_Wx2 * NDS_Hx2 * 4;

            if (myvideo.lcd.phy_addr[i][j]) {
                MI_SYS_Munmap(myvideo.lcd.virt_addr[i][j], size);
                MI_SYS_MMA_Free(myvideo.lcd.phy_addr[i][j]);
                myvideo.lcd.phy_addr[i][j] = NULL;
            }
#else
            free(myvideo.lcd.virt_addr[i][j]);
#endif
            myvideo.lcd.virt_addr[i][j] = NULL;
        }
    }

    return 0;
}

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
static int get_cpu_core(int idx)
{
    FILE *fd = NULL;
    char buf[MAX_PATH] = { 0 };

    sprintf(buf, "cat /sys/devices/system/cpu/cpu%d/online", idx % 4); 
    fd = popen(buf, "r");
    if (fd == NULL) {
        return -1;
    }

    fgets(buf, sizeof(buf), fd);
    pclose(fd);
    return atoi(buf);
}

static int check_cpu_core_before_set(int num, int v)
{
    char buf[MAX_PATH] = { 0 };

    trace("call %s()\n", __func__);

    if (num >= MAX_CPU_CORE) {
        return -1;
    }

    if (get_cpu_core(num) != v) {
        sprintf(buf, "echo %d > /sys/devices/system/cpu/cpu%d/online", v ? 1 : 0, num);
        system(buf);
    }

    return 0;
}   

static int set_cpu_core(int n)
{
    int cc = 0;

    trace("call %s(n=%d)\n", __func__, n);

    n -= 1;
    if (n < 0) {
        error("invalid cpu number\n");
        return -1;
    }

    for (cc = 0; cc < MAX_CPU_CORE; cc++) {
        check_cpu_core_before_set(cc, cc <= n ? 1 : 0);
    }

    return 0;
}
#endif

#if defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897) || defined(UT)
static void* wl_disp_handler(void* pParam)
{
    trace("call %s()++\n", __func__);

    myvideo.wl.thread.running = 1;

    while (myvideo.wl.thread.running) {
        if (myvideo.wl.ready) {
            wl_display_dispatch(myvideo.wl.display);
        }
        else {
            usleep(1000);
        }
    }

    trace("call %s()--\n", __func__);

    return NULL;
}

#if defined(UT)
TEST(sdl2_video, wl_disp_handler)
{
    //TEST_ASSERT_EQUAL_INT(0, wl_disp_handler());
}
#endif

static void cb_ping(void *dat, struct wl_shell_surface *shell_surf, uint32_t serial)
{
    trace("call %s()\n", __func__);

    wl_shell_surface_pong(shell_surf, serial);
}

#if defined(UT)
TEST(sdl2_video, cb_ping)
{
    //TEST_ASSERT_EQUAL_INT(0, cb_ping());
}
#endif

static void cb_config(void *dat, struct wl_shell_surface *shell_surf, uint32_t edges, int32_t w, int32_t h)
{
    trace("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, cb_config)
{
    //TEST_ASSERT_EQUAL_INT(0, cb_config());
}
#endif

static void cb_popup_done(void *dat, struct wl_shell_surface *shell_surf)
{
    trace("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, cb_popup_done)
{
    //TEST_ASSERT_EQUAL_INT(0, cb_popup_done());
}
#endif

static const struct wl_shell_surface_listener cb_shell_surf = {
    cb_ping,
    cb_config,
    cb_popup_done
};

static void cb_handle(void *dat, struct wl_registry *reg, uint32_t id, const char *intf, uint32_t ver)
{
    trace("call %s()\n", __func__);

    if (strcmp(intf, "wl_compositor") == 0) {
        myvideo.wl.compositor = wl_registry_bind(reg, id, &wl_compositor_interface, 1);
    }
    else if (strcmp(intf, "wl_shell") == 0) {
        myvideo.wl.shell = wl_registry_bind(reg, id, &wl_shell_interface, 1);
    }
}

#if defined(UT)
TEST(sdl2_video, cb_handle)
{
    //TEST_ASSERT_EQUAL_INT(0, cb_handle());
}
#endif

static void cb_remove(void *dat, struct wl_registry *reg, uint32_t id)
{
    trace("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, cb_remove)
{
    //TEST_ASSERT_EQUAL_INT(0, cb_remove());
}
#endif
#endif

static int get_current_menu_layer(void)
{
    int cc = 0;
    const char *P0 = "Change Options";
    const char *P1 = "Frame skip type";
    const char *P2 = "D-Pad Up";
    const char *P3 = "Enter Menu";
    const char *P4 = "Username";
    const char *P5 = "KB Return: toggle cheat";
    const char *P6 = "KB Return: select";

    trace("call %s(item.cnt=%d)\n", __func__, myvideo.menu.drastic.item.cnt);

    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; cc++) {
        if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P0, strlen(P0))) {
            return MENU_MAIN;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P1, strlen(P1))) {
            return MENU_OPTION;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P2, strlen(P2))) {
            return MENU_CONTROLLER;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P3, strlen(P3))) {
            return MENU_CONTROLLER2;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P4, strlen(P4))) {
            return MENU_FIRMWARE;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P5, strlen(P5))) {
            return MENU_CHEAT;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P6, strlen(P6))) {
            return MENU_ROM;
        }
    }

    return -1;
}

#if defined(UT)
TEST(sdl2_video, get_current_menu_layer)
{
    TEST_ASSERT_EQUAL_INT(0, get_current_menu_layer());
}
#endif

static int draw_drastic_menu_main(void)
{
    int x = 0;
    int y = 0;
    int w = 30;
    int h = 100;
    int cc = 0;
    int div = 1;
    int draw = 0;
    int draw_shot = 0;
    SDL_Rect rt = { 0 };
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH << 1] = { 0 };

    trace("call %s()\n", __func__);

#if defined(TRIMUI_SMART)
    div = 2;
#endif

    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; cc++) {
        draw = 0;
        x = 90 / div;
        w = myvideo.menu.line_h / div;
        h = 100 / div;

#if defined(TRIMUI_SMART)
        x = 25 / div;
#endif

        memset(buf, 0, sizeof(buf));
        p = &myvideo.menu.drastic.item.idx[cc];
        if (p->y == 201) {
            draw = 1;
            sprintf(buf, "DraStic %s", &p->msg[8]);
            x = 10;
            y = 10 / div;
        }
        else if (p->y == 280) {
            draw = 1;
            y = h + (0 * w);
            strcpy(buf, l10n("Change Options"));
        }
        else if (p->y == 288) {
            draw = 1;
            y = h + (1 * w);
            strcpy(buf, l10n("Configure Controls"));
        }
        else if (p->y == 296) {
            draw = 1;
            y = h + (2 * w);
            strcpy(buf, l10n("Configure Firmware"));
        }
        else if (p->y == 304) {
            draw = 1;
            y = h + (3 * w);
            strcpy(buf, l10n("Configure Cheats"));
        }
        else if (p->y == 320) {
            draw = 1;
            y = h + (4 * w);
            sprintf(buf, "%s %s", l10n("Load state"), &p->msg[13]);
        }
        else if (p->y == 328) {
            draw = 1;
            y = h + (5 * w);
            sprintf(buf, "%s %s", l10n("Save state"), &p->msg[13]);
        }
        else if (p->y == 344) {
            draw = 1;
            y = h + (6 * w);
            strcpy(buf, l10n("Load new game"));
        }
        else if (p->y == 352) {
            draw = 1;
            y = h + (7 * w);
            strcpy(buf, l10n("Restart game"));
        }
        else if (p->y == 368) {
            draw = 1;
            y = h + (8 * w);
            strcpy(buf, l10n("Return to game"));
        }
        else if (p->y == NDS_Hx2) {
            draw = 1;
            y = h + (9 * w);
            strcpy(buf, l10n("Exit DraStic"));
        }

        if (draw) {
            if (p->bg) {
                rt.x = 5 / div;
                rt.y = y - (3 / div);
                rt.w = SCREEN_W - (10 / div);
                rt.h = w;
                SDL_FillRect(
                    myvideo.menu.drastic.frame,
                    &rt,
                    SDL_MapRGB(
                        myvideo.menu.drastic.frame->format, 
                        (MENU_COLOR_DRASTIC >> 16) & 0xff,
                        (MENU_COLOR_DRASTIC >> 8) & 0xff,
                        MENU_COLOR_DRASTIC & 0xff
                    )
                );

                if ((p->y == 320) || (p->y == 328)) {
                    draw_shot = 1;
                }

                if (myconfig.menu.show_cursor && myvideo.menu.drastic.cursor) {
                    rt.x = (5 / div) + (x - myvideo.menu.drastic.cursor->w) / 2;
                    rt.y -= ((myvideo.menu.drastic.cursor->h - myvideo.menu.line_h) / 2);
                    rt.w = 0;
                    rt.h = 0;
                    SDL_BlitSurface(
                        myvideo.menu.drastic.cursor,
                        NULL,
                        myvideo.menu.drastic.frame,
                        &rt
                    );
                }
            }
            draw_info(
                myvideo.menu.drastic.frame,
                buf,
                x,
                y,
                p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                0
            );
        }
    }

    y = 10;
    sprintf(buf, "%s", __DATE__);
    x = SCREEN_W - get_font_width(buf) - 10;
    draw_info(myvideo.menu.drastic.frame, buf, x, y / div, MENU_COLOR_UNSEL, 0);

    if (draw_shot) {
        const uint32_t len = NDS_W * NDS_H * 2;
        uint16_t *top = malloc(len);
        uint16_t *bottom = malloc(len);

        if (top && bottom) {
            SDL_Surface *t = NULL;
#if defined(TRIMUI_SMART)
            SDL_Surface *sm = NULL;
#endif

#if defined(TRIMUI_SMART)
            const int SM_W = (float)NDS_W / 1.35;
            const int SM_H = (float)NDS_H / 1.35;
#endif
            uint32_t slot = *((uint32_t *)myhook.var.system.savestate_num);
            nds_load_state_index pfn = (nds_load_state_index)myhook.fun.load_state_index;

#if defined(TRIMUI_SMART)
            sm = SDL_CreateRGBSurface(0, SM_W, SM_H, 16, 0, 0, 0, 0);
#endif

            memset(top, 0, len);
            memset(bottom, 0, len);
            pfn((void*)myhook.var.system.base, slot, top, bottom, 1);
            t = SDL_CreateRGBSurfaceFrom(top, NDS_W, NDS_H, 16, NDS_W * 2, 0, 0, 0, 0);
            if (t) {
#if defined(MINI) || defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(XT894) || defined(XT897) || defined(QX1000)
                rt.x = SCREEN_W - (NDS_W + 10);
                rt.y = 50;
                rt.w = NDS_W;
                rt.h = NDS_H;
                SDL_BlitSurface(t, NULL, myvideo.menu.drastic.frame, &rt);
#endif
                SDL_FreeSurface(t);
            }

            t = SDL_CreateRGBSurfaceFrom(bottom, NDS_W, NDS_H, 16, NDS_W * 2, 0, 0, 0, 0);
            if (t) {
#if defined(MINI) || defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(XT894) || defined(XT897) || defined(QX1000)
                rt.x = SCREEN_W - (NDS_W + 10);
                rt.y = 50 + NDS_H;
                rt.w = NDS_W;
                rt.h = NDS_H;
                SDL_BlitSurface(t, NULL, myvideo.menu.drastic.frame, &rt);
#endif

#if defined(TRIMUI_SMART)
                SDL_SoftStretch(t, NULL, sm, NULL);

                rt.x = SCREEN_W - (SM_W + 5);
                rt.y = (SCREEN_H - SM_H) >> 1;
                rt.w = SM_W;
                rt.h = SM_H;
                SDL_BlitSurface(sm, NULL, myvideo.menu.drastic.frame, &rt);
#endif
                SDL_FreeSurface(t);
            }

#if defined(TRIMUI_SMART)
            if (sm) {
                SDL_FreeSurface(sm);
            }
#endif
        }

        if (top) {
            free(top);
        }

        if (bottom) {
            free(bottom);
        }
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_drastic_menu_main)
{
    TEST_ASSERT_EQUAL_INT(0, draw_drastic_menu_main());
}
#endif

static int mark_double_spaces(char *p)
{
    int cc = 0;
    int len = strlen(p);

    trace("call %s()\n", __func__);

    for (cc = 0; cc < len - 1; cc++) {
        if ((p[cc] == ' ') && (p[cc + 1] == ' ')) {
            p[cc] = 0;
            return 0;
        }
    }

    return -1;
}

#if defined(UT)
TEST(sdl2_video, mark_double_spaces)
{
    //TEST_ASSERT_EQUAL_INT(0, mark_double_spaces());
}
#endif

static char* find_menu_string_tail(char *p)
{
    int cc = 0;

    trace("call %s()\n", __func__);

    for (cc = strlen(p) - 1; cc >= 0; cc--) {
        if (p[cc] == ' ') {
            return &p[cc + 1];
        }
    }

    return NULL;
}

#if defined(UT)
TEST(sdl2_video, find_menu_string_tail)
{
    //TEST_ASSERT_EQUAL_INT(0, find_menu_string_tail());
}
#endif

static int draw_drastic_menu_option(void)
{
    int w = 0;
    int y = 0;
    int ww = 0;
    int s0 = 0;
    int s1 = 0;
    int cc = 0;
    int div = 1;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = { 0 };
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH] = { 0 };

    trace("call %s()\n", __func__);

#if defined(TRIMUI_SMART)
    div = 2;
#endif

    cursor = 0;
    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; cc++) {
        if (myvideo.menu.drastic.item.idx[cc].bg > 0) {
            cursor = cc;
        }
    }

    if (cursor <= 6) {
        s0 = 1;
        s1 = 14;
    }
    else if (cursor >= (myvideo.menu.drastic.item.cnt - 7)) {
        s0 = myvideo.menu.drastic.item.cnt - 14;
        s1 = myvideo.menu.drastic.item.cnt - 1;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; cc++) {
        ww = myvideo.menu.line_h / div;

        if ((cc >= s0) && (cc < s1)) {
            y = (25 / div) + (cnt * ww);
            memset(buf, 0, sizeof(buf));
            p = &myvideo.menu.drastic.item.idx[cc];
        
            cnt+= 1;            
            if (p->bg) {
                rt.x = 5 / div;
                rt.y = y - (3 / div);
                rt.w = SCREEN_W - (10 / div);
                rt.h = ww;
                SDL_FillRect(
                    myvideo.menu.drastic.frame,
                    &rt,
                    SDL_MapRGB(
                        myvideo.menu.drastic.frame->format, 
                        (MENU_COLOR_DRASTIC >> 16) & 0xff,
                        (MENU_COLOR_DRASTIC >> 8) & 0xff,
                        MENU_COLOR_DRASTIC & 0xff
                    )
                );
            }

            if (p->y <= NDS_Hx2) {
                strcpy(buf, l10n(find_menu_string_tail(p->msg)));
                w = get_font_width(buf);
                draw_info(
                    myvideo.menu.drastic.frame,
                    buf,
                    SCREEN_W - w - (ww / div),
                    y,
                    p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                    0
                );

                mark_double_spaces(p->msg);
                strcpy(buf, l10n(p->msg));
            }
            else {
                strcpy(buf, l10n(p->msg));
            }
            draw_info(
                myvideo.menu.drastic.frame,
                buf,
                ww / div,
                y,
                p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                0
            );
        }
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_drastic_menu_option)
{
    TEST_ASSERT_EQUAL_INT(0, draw_drastic_menu_option());
}
#endif

static int draw_drastic_menu_controller(void)
{
    int y = 0;
    int w = 0;
    int cc = 0;
    int div = 1;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = { 0 };
    int s0 = 0, s1 = 0;
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH] = { 0 };

    trace("call %s()\n", __func__);

#if defined(TRIMUI_SMART)
    div = 2;
#endif

    cursor = 0;
    for (cc=0; cc<myvideo.menu.drastic.item.cnt;) {
        if ((myvideo.menu.drastic.item.idx[cc].y >= 240) &&
            (myvideo.menu.drastic.item.idx[cc].y <= 376))
        {
            if ((myvideo.menu.drastic.item.idx[cc + 1].bg > 0) ||
                (myvideo.menu.drastic.item.idx[cc + 2].bg > 0))
            {
                break;
            }
            cc += 3;
        }
        else {
            if (myvideo.menu.drastic.item.idx[cc].bg > 0) {
                break;
            }
            cc += 1;
        }
        cursor += 1;
    }
    
    if (cursor <= 6) {
        s0 = 0;
        s1 = 13;
    }
    else if (cursor >= (24 - 7)) {
        s0 = 24 - 13;
        s1 = 24;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    cnt = 0;
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        w = myvideo.menu.line_h / div;
        p = &myvideo.menu.drastic.item.idx[cc];

        if ((p->y == 224) || (p->y == 232) || (p->y == 201)) {
            continue;
        }

        memset(buf, 0, sizeof(buf));
        if ((cnt >= s0) && (cnt < s1)) {
            y = (25 / div) + ((cnt - s0) * w);

            if ((p->y >= 240) && (p->y <= 376)) {
                if (myvideo.menu.drastic.item.idx[cc + 1].bg || myvideo.menu.drastic.item.idx[cc + 2].bg) {
                    int sum = myvideo.menu.drastic.item.idx[cc + 1].bg + myvideo.menu.drastic.item.idx[cc + 2].bg;
                    uint32_t c = sum > 500 ? 0xff0000 : MENU_COLOR_DRASTIC;

                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = SCREEN_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(
                        myvideo.menu.drastic.frame,
                        &rt,
                        SDL_MapRGB(myvideo.menu.drastic.frame->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff)
                    );
                }
                draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, y, p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL, 0);
                if ((p->y >= 240) && (p->y <= 376)) {
                    draw_info(
                        myvideo.menu.drastic.frame,
                        l10n(myvideo.menu.drastic.item.idx[cc + 1].msg),
                        300 / div,
                        y,
                        myvideo.menu.drastic.item.idx[cc + 1].bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                        0
                    );

                    draw_info(
                        myvideo.menu.drastic.frame,
                        l10n(myvideo.menu.drastic.item.idx[cc + 2].msg),
                        480 / div,
                        y,
                        myvideo.menu.drastic.item.idx[cc + 2].bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                        0
                    );
                }
            }
            else {
                if (p->bg) {
                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = SCREEN_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, 
                        (MENU_COLOR_DRASTIC >> 16) & 0xff, (MENU_COLOR_DRASTIC >> 8) & 0xff, MENU_COLOR_DRASTIC & 0xff));
                }
                draw_info(myvideo.menu.drastic.frame, l10n(p->msg), 20 / div, y, p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL, 0);
            }
        }

        cnt += 1;
        if ((p->y >= 240) && (p->y <= 376)) {
            cc += 2;
        }
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_drastic_menu_controller)
{
    TEST_ASSERT_EQUAL_INT(0, draw_drastic_menu_controller());
}
#endif

static int draw_drastic_menu_controller2(void)
{
    int y = 0;
    int w = 0;
    int cc = 0;
    int cnt = 0;
    int div = 1;
    int cursor = 0;
    SDL_Rect rt = { 0 };
    int s0 = 0, s1 = 0;
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH] = { 0 };

    trace("call %s()\n", __func__);

#if defined(TRIMUI_SMART)
    div = 2;
#endif

    cursor = 0;
    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; ) {
        if ((myvideo.menu.drastic.item.idx[cc].y >= 240) &&
            (myvideo.menu.drastic.item.idx[cc].y <= NDS_Hx2))
        {
            if ((myvideo.menu.drastic.item.idx[cc + 1].bg > 0) ||
                (myvideo.menu.drastic.item.idx[cc + 2].bg > 0))
            {
                break;
            }
            cc+= 3;
        }
        else {
            if (myvideo.menu.drastic.item.idx[cc].bg > 0) {
                break;
            }
            cc+= 1;
        }
        cursor+= 1;
    }
    
    if (cursor <= 6) {
        s0 = 0;
        s1 = 13;
    }
    else if (cursor >= (23 - 7)) {
        s0 = 23 - 13;
        s1 = 23;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    cnt = 0;
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        w = myvideo.menu.line_h / div;
        p = &myvideo.menu.drastic.item.idx[cc];

        if ((p->y == 224) || (p->y == 232) || (p->y == 201)) {
            continue;
        }

        memset(buf, 0, sizeof(buf));
        if ((cnt >= s0) && (cnt < s1)) {
            y = (25 / div) + ((cnt - s0) * w);

            if ((p->y >= 240) && (p->y <= NDS_Hx2)) {
                if (myvideo.menu.drastic.item.idx[cc + 1].bg ||
                    myvideo.menu.drastic.item.idx[cc + 2].bg)
                {
                    int sum = myvideo.menu.drastic.item.idx[cc + 1].bg + myvideo.menu.drastic.item.idx[cc + 2].bg;
                    uint32_t c = sum > 500 ? 0xff0000 : MENU_COLOR_DRASTIC;

                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = SCREEN_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(
                        myvideo.menu.drastic.frame,
                        &rt,
                        SDL_MapRGB(myvideo.menu.drastic.frame->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
                }
                draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, y, p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL, 0);
                if ((p->y >= 240) && (p->y <= NDS_Hx2)) {
                    draw_info(
                        myvideo.menu.drastic.frame,
                        l10n(myvideo.menu.drastic.item.idx[cc + 1].msg),
                        300 / div,
                        y,
                        myvideo.menu.drastic.item.idx[cc + 1].bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                        0
                    );

                    draw_info(
                        myvideo.menu.drastic.frame,
                        l10n(myvideo.menu.drastic.item.idx[cc + 2].msg),
                        480 / div,
                        y,
                        myvideo.menu.drastic.item.idx[cc + 2].bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                        0
                    );
                }
            }
            else {
                if (p->bg) {
                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = SCREEN_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(
                        myvideo.menu.drastic.frame,
                        &rt,
                        SDL_MapRGB(
                            myvideo.menu.drastic.frame->format, 
                            (MENU_COLOR_DRASTIC >> 16) & 0xff,
                            (MENU_COLOR_DRASTIC >> 8) & 0xff,
                            MENU_COLOR_DRASTIC & 0xff
                        )
                    );
                }
                draw_info(
                    myvideo.menu.drastic.frame,
                    l10n(p->msg),
                    20 / div,
                    y,
                    p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                    0
                );
            }
        }

        cnt+= 1;
        if ((p->y >= 240) && (p->y <= NDS_Hx2)) {
            cc+= 2;
        }
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_drastic_menu_controller2)
{
    TEST_ASSERT_EQUAL_INT(0, draw_drastic_menu_controller2());
}
#endif

static int draw_drastic_menu_firmware(void)
{
    int t = 0;
    int w = 0;
    int y = 0;
    int ww = 30;
    int cc = 0;
    int div = 1;
    int cnt = 0;
    SDL_Rect rt = { 0 };
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH] = { 0 };
    char name[MAX_PATH] = { 0 };

    trace("call %s()\n", __func__);

#if defined(TRIMUI_SMART)
    div = 2;
#endif

    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        ww = myvideo.menu.line_h / div;
        p = &myvideo.menu.drastic.item.idx[cc];
        if ((p->x == 352) || (p->x == 108)) {
            continue;
        }
    
        memset(buf, 0, sizeof(buf));
        if ((p->x != 92) && (p->x != 256)) {
            strcat(name, p->msg);
        }
        else {
            y = (25 / div) + (cnt * ww);
            if (((p->x == 92) || (p->x == 256)) && (p->bg)) {
                rt.x = 5 / div;
                rt.y = y - (3 / div);
                rt.w = SCREEN_W - (10 / div);
                rt.h = ww;
                SDL_FillRect(
                    myvideo.menu.drastic.frame,
                    &rt,
                    SDL_MapRGB(
                        myvideo.menu.drastic.frame->format, 
                        (MENU_COLOR_DRASTIC >> 16) & 0xff,
                        (MENU_COLOR_DRASTIC >> 8) & 0xff,
                        MENU_COLOR_DRASTIC & 0xff)
                    );
            }

            cnt+= 1;
            if (p->y == 280) {
                mark_double_spaces(p->msg);
                strcpy(buf, l10n(p->msg));
            }
            else if (p->y == 296) {
                w = get_font_width(name);
                draw_info(
                    myvideo.menu.drastic.frame,
                    name,
                    SCREEN_W - w - (ww / div),
                    25 / div, MENU_COLOR_UNSEL,
                    0
                );

                w = strlen(p->msg);
                p->msg[w - 3] = 0;
                for (t=14; t<w; t++) {
                    if (p->msg[t] != ' ') {
                        strcpy(buf, &p->msg[t]);
                        break;
                    }
                }
                w = get_font_width(buf);
                draw_info(
                    myvideo.menu.drastic.frame,
                    buf,
                    SCREEN_W - w - (ww / div),
                    y,
                    p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                    0
                );

                strcpy(buf, l10n("Favorite Color"));
            }
            else if (p->y <= 312) {
                strcpy(buf, l10n(find_menu_string_tail(p->msg)));
                w = get_font_width(buf);
                draw_info(
                    myvideo.menu.drastic.frame,
                    buf,
                    SCREEN_W - w - (ww / div),
                    y,
                    p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                    0
                );

                mark_double_spaces(p->msg);
                strcpy(buf, l10n(p->msg));
            }
            else {
                strcpy(buf, l10n(p->msg));
            }
            draw_info(
                myvideo.menu.drastic.frame,
                buf,
                ww / div,
                y,
                p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
                0
            );
        }
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_drastic_menu_firmware)
{
    TEST_ASSERT_EQUAL_INT(0, draw_drastic_menu_firmware());
}
#endif

static int draw_drastic_menu_cheat(void)
{
    int y = 0;
    int w = 30;
    int cc = 0;
    int div = 1;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = {0};
    int s0 = 0, s1 = 0;
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH] = { 0 };

    trace("call %s()\n", __func__);

#if defined(TRIMUI_SMART)
    div = 2;
#endif
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        p = &myvideo.menu.drastic.item.idx[cc];
        if (p->x == 650) {
            for (s0=0; s0<myvideo.menu.drastic.item.cnt; s0++) {
                if ((myvideo.menu.drastic.item.idx[s0].x == 10) &&
                    (myvideo.menu.drastic.item.idx[s0].y == p->y))
                {
                    myvideo.menu.drastic.item.idx[s0].cheat = 1;
                    myvideo.menu.drastic.item.idx[s0].enable = strcmp(p->msg, "enabled") == 0 ? 1 : 0;
                    break;
                }
            }
        }
    }

    s0 = 0;
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        if (myvideo.menu.drastic.item.idx[cc].x == 10) {
            memcpy(
                &myvideo.menu.drastic.item.idx[s0],
                &myvideo.menu.drastic.item.idx[cc],
                sizeof(myvideo.menu.drastic.item.idx[cc])
            );
            s0 += 1;
        }
        memset(&myvideo.menu.drastic.item.idx[cc], 0, sizeof(myvideo.menu.drastic.item.idx[cc]));
    }
    myvideo.menu.drastic.item.cnt = s0;

    cursor = 0;
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        if (myvideo.menu.drastic.item.idx[cc].bg > 0) {
            cursor = cc;
        }
    }

    if (myvideo.menu.drastic.item.cnt == 0) {
        return 0;
    }

    if (myvideo.menu.drastic.item.cnt < 13) {
        s0 = 0;
        s1 = myvideo.menu.drastic.item.cnt;
    }
    else if (cursor <= 6) {
        s0 = 0;
        s1 = 13;
    }
    else if (cursor >= (myvideo.menu.drastic.item.cnt - 7)) {
        s0 = myvideo.menu.drastic.item.cnt - 13;
        s1 = myvideo.menu.drastic.item.cnt;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    cnt = 0;
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        w = myvideo.menu.line_h / div;
        memset(buf, 0, sizeof(buf));
        p = &myvideo.menu.drastic.item.idx[cc];

        if (p->x != 10) {
            continue;
        }

        if ((cc >= s0) && (cc < s1)) {
            y = (25 / div) + (cnt * w);

            if (p->bg) {
                rt.x = 5 / div;
                rt.y = y - (3 / div);
                rt.w = SCREEN_W - (10 / div);
                rt.h = w;
                SDL_FillRect(
                    myvideo.menu.drastic.frame,
                    &rt,
                    SDL_MapRGB(myvideo.menu.drastic.frame->format,
                    (MENU_COLOR_DRASTIC >> 16) & 0xff, (MENU_COLOR_DRASTIC >> 8) & 0xff, MENU_COLOR_DRASTIC & 0xff));
            }

            cnt += 1;
            draw_info(myvideo.menu.drastic.frame, p->msg, w / div, y, p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL, 0);
            if (p->cheat && myvideo.menu.drastic.yes && myvideo.menu.drastic.no) {
                rt.x = SCREEN_W - myvideo.menu.drastic.yes->w - (w / div);
                rt.y = y - 1;
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface(
                    (p->enable > 0 ) ? myvideo.menu.drastic.yes : myvideo.menu.drastic.no,
                    NULL,
                    myvideo.menu.drastic.frame,
                    &rt
                );
            }
        }
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_drastic_menu_cheat)
{
    TEST_ASSERT_EQUAL_INT(0, draw_drastic_menu_cheat());
}
#endif

static int draw_drastic_menu_rom(void)
{
    int y = 0;
    int w = 0;
    int cc = 0;
    int s0 = 0;
    int s1 = 0;
    int div = 1;
    int chk = 0;
    int all = 0;
    int cnt = 0;
    int cursor = 0;
    uint32_t c = 0;
    SDL_Rect rt = { 0 };
    cust_menu_sub_t *p = NULL;
    char buf[255] = { 0 };

    trace("call %s()\n", __func__);

#if defined(TRIMUI_SMART)
    div = 2;
#endif

    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; cc++) {
        if (myvideo.menu.drastic.item.idx[cc].x == 10) {
            if (myvideo.menu.drastic.item.idx[cc].bg > 0) {
                chk = 10;
                break;
            }
        }
        if (myvideo.menu.drastic.item.idx[cc].x == 587) {
            if (myvideo.menu.drastic.item.idx[cc].bg > 0) {
                chk = 587;
                break;
            }
        }
    }

    cursor = 0;
    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; cc++) {
        if (myvideo.menu.drastic.item.idx[cc].x == chk) {
            if (myvideo.menu.drastic.item.idx[cc].bg > 0) {
                break;
            }
            cursor+= 1;
        }
    }

    all = 0;
    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; cc++) {
        if (myvideo.menu.drastic.item.idx[cc].x == chk) {
            all+= 1;
        }
    }

    if (all < 12) {
        s0 = 0;
        s1 = all;
    }
    else if (cursor <= 6) {
        s0 = 0;
        s1 = 12;
    }
    else if (cursor >= (all - 6)) {
        s0 = all - 12;
        s1 = all;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 6;
    }

    c = 0x335445;
    w = myvideo.menu.line_h / div;
    p = &myvideo.menu.drastic.item.idx[0];
    rt.x = 5 / div;
    rt.y = (25 / div) - (4 / div);
    rt.w = SCREEN_W - (10 / div);
    rt.h = w;
    SDL_FillRect(
        myvideo.menu.drastic.frame,
        &rt,
        SDL_MapRGB(myvideo.menu.drastic.frame->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff)
    );
    draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, 25 / div, 0xa0cb93, 0);

    cnt = 0;
    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; cc++) {
        w = myvideo.menu.line_h / div;
        p = &myvideo.menu.drastic.item.idx[cc];
        if (p->x == chk) {
            y = (25 / div) + (((cnt - s0) + 1) * w);
            if ((cnt >= s0) && (cnt < s1)) {
                if (p->bg) {
                    rt.x = 5 / div;
                    rt.y = y - (4 / div);
                    rt.w = SCREEN_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(
                        myvideo.menu.drastic.frame,
                        &rt,
                        SDL_MapRGB(myvideo.menu.drastic.frame->format,
                        (MENU_COLOR_DRASTIC >> 16) & 0xff, (MENU_COLOR_DRASTIC >> 8) & 0xff, MENU_COLOR_DRASTIC & 0xff));

                    strcpy(buf, p->msg);
                }
                draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, y, p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL, 0);
            }
            cnt+= 1;
        }
    }

#if !defined(TRIMUI_SMART)
    if (buf[0]) {
        SDL_Surface *t = SDL_CreateRGBSurface(SDL_SWSURFACE, 32, 32, 32, 0, 0, 0, 0);

        if (t) {
            int i = 0;
            int j = 0;
            nds_icon_struct icon = { 0 };
            SDL_Rect srt = { 0, 0, 32, 32 };
            SDL_Rect drt = { 0, 0, 96, 96 };
            uint32_t *pixels = (uint32_t *)t->pixels;
            nds_file_get_icon_data pfn =
                (nds_file_get_icon_data)myhook.fun.nds_file_get_icon_data;

            pfn(buf, &icon);
            trace("draw icon for \"%s\"\n", buf);

            SDL_FillRect(
                t,
                &t->clip_rect,
                SDL_MapRGB(t->format, 0x80, 0x00, 0x00)
            );

            for (i = 0; i < 32; i++) {
                for (j = 0; j < 16; j++) {
                    int left = icon.pixels[(i * 16) + j] & 0x0f;
                    int right = (icon.pixels[(i * 16) + j] >> 4) & 0x0f;
                    *pixels++ = rgb565_to_rgb888(icon.palette[left]);
                    *pixels++ = rgb565_to_rgb888(icon.palette[right]);
                }
            }

            drt.x = LAYOUT_BG_W - 100;
            drt.y = 0;
            drt.w = 100;
            drt.h = 100;
            SDL_FillRect(
                myvideo.menu.drastic.frame,
                &drt,
                SDL_MapRGB(myvideo.menu.drastic.frame->format, 0x80, 0x00, 0x00)
            );

            drt.x = LAYOUT_BG_W - 98;
            drt.y = 2;
            drt.w = 96;
            drt.h = 96;
            SDL_SoftStretch(t, &srt, myvideo.menu.drastic.frame, &drt);
            SDL_FreeSurface(t);
        }
    }
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_drastic_menu_rom)
{
    //TEST_ASSERT_EQUAL_INT(0, draw_drastic_menu_rom());
}
#endif

int handle_drastic_menu(void)
{
    int layer = 0;

    trace("call %s()\n", __func__);

    layer = get_current_menu_layer();
    SDL_SoftStretch(
        (layer == MENU_MAIN) ? myvideo.menu.drastic.bg0 : myvideo.menu.drastic.bg1,
        NULL,
        myvideo.menu.drastic.frame, NULL
    );

    trace("cur layer=%d\n", layer);
    switch (layer) {
    case MENU_MAIN:
        draw_drastic_menu_main();
        break;
    case MENU_OPTION:
        draw_drastic_menu_option();
        break;
    case MENU_CONTROLLER:
        draw_drastic_menu_controller();
        break;
    case MENU_CONTROLLER2:
        draw_drastic_menu_controller2();
        break;
    case MENU_FIRMWARE:
        draw_drastic_menu_firmware();
        break;
    case MENU_CHEAT:
        draw_drastic_menu_cheat();
        break;
    case MENU_ROM:
        draw_drastic_menu_rom();
        break;
    default:
        return 0;
    }

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
    myvideo.menu.update = 1;
#else
    flush_lcd(
        TEXTURE_TMP,
        myvideo.menu.drastic.frame->pixels,
        myvideo.menu.drastic.frame->clip_rect,
        myvideo.menu.drastic.frame->clip_rect,
        myvideo.menu.drastic.frame->pitch
    );
    flip_lcd();

    flush_lcd(
        TEXTURE_TMP,
        myvideo.menu.drastic.frame->pixels,
        myvideo.menu.drastic.frame->clip_rect,
        myvideo.menu.drastic.frame->clip_rect,
        myvideo.menu.drastic.frame->pitch
    );
    flip_lcd();
#endif

    memset(&myvideo.menu.drastic.item, 0, sizeof(myvideo.menu.drastic.item));

    return 0;
}

#if defined(UT)
TEST(sdl2_video, handle_drastic_menu)
{
    //TEST_ASSERT_EQUAL_INT(0, handle_drastic_menu());
}
#endif

static int process_screen(void)
{
    int idx = 0;
    int cur_ff_sel = 0;
    int cur_bg_sel = 0;
    int cur_mode_sel = 0;
    static int cur_ff = -1;
    static int cur_mic = -1;
    static int cur_hinge = -1;
    static int autostate = 15;
    static int show_info = -1;
    static int cur_filter = -1;
    static int cur_layout_bg = -1;
    static int cur_layout_mode = -1;
    static int col_fg = 0xe0e000;
    static int col_bg = 0x000000;
    static char buf[MAX_PATH] = { 0 };

    trace("call %s()\n", __func__);

    cur_ff_sel = (myvideo.lcd.status & NDS_STATE_FAST);
    cur_bg_sel = myconfig.layout.bg.sel;
    cur_mode_sel = myconfig.layout.mode.sel;

    if (myconfig.autostate.enable > 0) {
        if (autostate > 0) {
            autostate -= 1;
            if (autostate == 0) {
                load_state(myconfig.autostate.slot);
            }
        }
    }

    if (myvideo.menu.sdl2.enable) {
        myvideo.layout.redraw_bg = REDRAW_BG_CNT;
        return 0;
    }

    if (myvideo.menu.drastic.enable) {
        myvideo.menu.drastic.enable = 0;
        myvideo.layout.redraw_bg = REDRAW_BG_CNT;
    }

    if ((cur_filter != myconfig.filter) ||
        (cur_ff != cur_ff_sel) ||
        (cur_mic != myhook.use_mic) ||
        (cur_hinge != myhook.use_hinge) ||
        (cur_layout_bg != cur_bg_sel) ||
        (cur_layout_mode != cur_mode_sel) ||
        myvideo.lcd.status)
    {
        if (myvideo.lcd.status & NDS_STATE_SAVE) {
            show_info = 50;
            sprintf(buf, " %s ", l10n("QUICK SAVE"));
            myvideo.lcd.status &= ~NDS_STATE_SAVE;
        }
        else if (myvideo.lcd.status & NDS_STATE_LOAD) {
            show_info = 50;
            sprintf(buf, " %s ", l10n("QUICK LOAD"));
            myvideo.lcd.status &= ~NDS_STATE_LOAD;
        }
        else if (cur_ff != cur_ff_sel) {
            show_info = 50;
            sprintf(
                buf,
                " %s %s ",
                l10n("FAST FORWARD"),
                cur_ff_sel ? l10n("ON") : l10n("OFF")
            );
            cur_ff = cur_ff_sel;
        }
        else if (cur_layout_mode != cur_mode_sel) {
            show_info = 50;
            sprintf(
                buf,
                " %s %s ",
                l10n("LAYOUT"),
                LAYOUT_NAME_STR[cur_mode_sel]
            );
        }
        else if (cur_layout_bg != cur_bg_sel) {
            show_info = 50;
            if (myvideo.layout.mode[cur_mode_sel].bg[cur_bg_sel].path[0]) {
                sprintf(
                    buf,
                    " %s %d/%s ",
                    l10n("BG IMAGE"),
                    cur_bg_sel,
                    myvideo.layout.mode[cur_mode_sel].bg[cur_bg_sel].path
                );
            }
            else {
                sprintf(buf, " %s: %s ", l10n("BG IMAGE"), l10n("NONE"));
            }
        }
        else if (cur_mic != myhook.use_mic) {
            show_info = 50;
            sprintf(buf, " %s %s ", l10n("MICROPHONE"), l10n(myhook.use_mic ? "ON" : "OFF"));
        }
        else if (cur_hinge != myhook.use_hinge) {
            show_info = 50;
            sprintf(buf, " %s %s ", l10n("LCD HINGE"), l10n(myhook.use_hinge ? "CLOSE" : "OPEN"));
        }
        else if (cur_filter != myconfig.filter) {
            show_info = 50;
            sprintf(buf, " %s ", l10n((myconfig.filter == FILTER_PIXEL) ? "PIXEL" : "BLUR"));
        }

        cur_mic = myhook.use_mic;
        cur_hinge = myhook.use_hinge;
        cur_filter = myconfig.filter;
        cur_layout_bg = cur_bg_sel;
        cur_layout_mode = cur_mode_sel;
        myvideo.layout.redraw_bg = REDRAW_BG_CNT;
    }

    if (show_info == 0) {
        show_info = -1;
        col_fg = 0xe0e000;
        col_bg = 0x000000;
        myvideo.layout.redraw_bg = REDRAW_BG_CNT;
    }
        
    if (myvideo.layout.redraw_bg) {
        load_bg_image();
        myvideo.layout.redraw_bg -= 1;
    }

    for (idx = 0; idx < 2; idx++) {
        int pitch = 0;
        int show_pen = 0;
        int need_update = 1;
        void *pixels = NULL;
        SDL_Rect srt = { 0, 0, NDS_W, NDS_H };
        SDL_Rect drt = { 0, idx * 120, 160, 120 };

#if defined(PANDORA)
        break;
#endif

        if (*myhook.var.sdl.screen[idx].hires_mode) {
            srt.w = NDS_Wx2;
            srt.h = NDS_Hx2;
        }

        show_pen = *myhook.var.sdl.swap_screens == idx ? 0 : 1;
        pitch = *myhook.var.sdl.bytes_per_pixel * srt.w;
        pixels = myvideo.lcd.virt_addr[myvideo.lcd.cur_sel ^ 1][idx];
        drt.x = myvideo.layout.mode[cur_mode_sel].screen[idx].x;
        drt.y = myvideo.layout.mode[cur_mode_sel].screen[idx].y;
        drt.w = myvideo.layout.mode[cur_mode_sel].screen[idx].w;
        drt.h = myvideo.layout.mode[cur_mode_sel].screen[idx].h;
        trace(
            "layout mode=%d, drt=%d,%d,%d,%d\n",
            cur_mode_sel,
            drt.x,
            drt.y,
            drt.w,
            drt.h
        );

#if defined(MINI) || defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(XT894) || defined(XT897) || defined(QX1000)
        switch (cur_mode_sel) {
        case LAYOUT_MODE_N0:
        case LAYOUT_MODE_N1:
        case LAYOUT_MODE_N2:
        case LAYOUT_MODE_N3:
#if defined(XT894) || defined(XT897)
        case LAYOUT_MODE_C0:
#endif
            need_update = !!idx;
            break;
        }
#endif

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
        if ((cur_mode_sel == LAYOUT_MODE_B0) ||
            (cur_mode_sel == LAYOUT_MODE_B1) ||
            (cur_mode_sel == LAYOUT_MODE_B2) ||
            (cur_mode_sel == LAYOUT_MODE_B3))
        {
            drt.x = (drt.x == 0) ? 320 : 0;
        }
        else {
            drt.y = (SCREEN_H - drt.y) - drt.h;
            drt.x = (SCREEN_W - drt.x) - drt.w;
        }

#if defined(FLIP)
        if (show_pen && 
            ((myevent.mode == NDS_TOUCH_MODE) || 
            (myconfig.joy.show_cnt &&
            (myconfig.joy.mode == MYJOY_MODE_TOUCH))))
        {
#else
        if (show_pen && (myevent.mode == NDS_TOUCH_MODE)) {
#endif
#else
        if (show_pen && (myevent.mode == NDS_TOUCH_MODE)) {
#endif
            draw_touch_pen(pixels, srt.w, pitch);

#if defined(FLIP)
            if (myconfig.joy.show_cnt && (myconfig.joy.mode == MYJOY_MODE_TOUCH)) {
                myconfig.joy.show_cnt -= 1;
            }
#endif
        }

#if defined(FLIP) || defined(BRICK) || defined(GKD2) || defined(GKDMINI) || defined(XT894) || defined(XT897) || defined(QX1000)
        if ((idx == 0) &&
            myconfig.layout.swin.border &&
            ((cur_mode_sel == LAYOUT_MODE_N0) ||
            (cur_mode_sel == LAYOUT_MODE_N1)))
        {
            int c0 = 0;
            uint32_t *p0 = NULL;
            uint32_t *p1 = NULL;

            p0 = (uint32_t *)pixels;
            p1 = (uint32_t *)pixels + ((srt.h - 1) * srt.w);
            for (c0 = 0; c0 < srt.w; c0++) {
                *p0++ = 0;
                *p1++ = 0;
            }

            p0 = (uint32_t *)pixels;
            p1 = (uint32_t *)pixels + (srt.w - 1);
            for (c0 = 0; c0 < srt.h; c0++) {
                *p0 = 0;
                *p1 = 0;
                p0 += srt.w;
                p1 += srt.w;
            }
        }

#if !defined(BRICK) && !defined(GKD2) && !defined(GKDMINI)
        glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[idx]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        glTexImage2D(
            GL_TEXTURE_2D,
            0,
            GL_RGBA,
            srt.w,
            srt.h,
            0,
            GL_RGBA,
            GL_UNSIGNED_BYTE,
            pixels
        );
#endif
#endif

        if (need_update) {
#if !defined(MINI) && !defined(TRIMUI_SMART)
            int screen_w = SCREEN_W;
            int screen_h = SCREEN_H;
#endif

#if defined(XT894) || defined(XT897) || defined(QX1000)
            screen_w = WL_WIN_H;
            screen_h = WL_WIN_W;
#endif

#if defined(MINI)
            MI_SYS_FlushInvCache(pixels, pitch * srt.h);
#endif

#if defined(XT894) || defined(XT897)
            switch (cur_mode_sel) {
            case LAYOUT_MODE_N0:
            case LAYOUT_MODE_N1:
                drt.x = (screen_w - myvideo.layout.mode[cur_mode_sel].screen[1].w) >> 1;
                break;
            case LAYOUT_MODE_C0:
                switch (myconfig.layout.swin.pos) {
                case 0:
                    drt.x = 0;
                    break;
                case 1:
                    drt.x = 240;
                    break;
                case 2:
                    drt.x = 240;
                    break;
                case 3:
                    drt.x = 0;
                    break;
                }
                break;
            }
#endif

            flush_lcd(idx, pixels, srt, drt, pitch);

#if defined(MINI) || defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(XT894) || defined(XT897) || defined(QX1000)
            switch (cur_mode_sel) {
            case LAYOUT_MODE_N0:
            case LAYOUT_MODE_N1:
#if defined(XT894) || defined(XT897)
            case LAYOUT_MODE_C0:
#endif
                drt.x = myvideo.layout.mode[cur_mode_sel].screen[0].x;
                drt.y = myvideo.layout.mode[cur_mode_sel].screen[0].y;
                drt.w = myvideo.layout.mode[cur_mode_sel].screen[0].w;
                drt.h = myvideo.layout.mode[cur_mode_sel].screen[0].h;
#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(XT894) || defined(XT897) || defined(QX1000)
                switch (myconfig.layout.swin.pos) {
                case 0:
#if defined(XT894) || defined(XT897)
                    drt.x = (screen_w - myvideo.layout.mode[cur_mode_sel].screen[1].w) >> 1;
                    drt.x = (screen_w - drt.x) - drt.w;
                    drt.y = 0;
#else
                    drt.x = screen_w - drt.w;
                    drt.y = 0;
#endif
                    break;
                case 1:
#if defined(XT894) || defined(XT897)
                    drt.x = (screen_w - myvideo.layout.mode[cur_mode_sel].screen[1].w) >> 1;
                    drt.y = 0;
#else
                    drt.x = 0;
                    drt.y = 0;
#endif
                    break;
                case 2:
#if defined(XT894) || defined(XT897)
                    drt.x = (screen_w - myvideo.layout.mode[cur_mode_sel].screen[1].w) >> 1;
                    drt.y = screen_h - drt.h;
#else
                    drt.x = 0;
                    drt.y = screen_h - drt.h;
#endif
                    break;
                case 3:
#if defined(XT894) || defined(XT897)
                    drt.x = (screen_w - myvideo.layout.mode[cur_mode_sel].screen[1].w) >> 1;
                    drt.x = (screen_w - drt.x) - drt.w;
                    drt.y = screen_h - drt.h;
#else
                    drt.x = screen_w - drt.w;
                    drt.y = screen_h - drt.h;
#endif
                    break;
                }
#endif

#if defined(XT894) || defined(XT897)
                if (cur_mode_sel == LAYOUT_MODE_C0) {
                    drt.x = screen_w - drt.w;
                    drt.y = screen_h - drt.h;
                }
#endif
                flush_lcd(
                    TEXTURE_LCD0,
                    (void *)(*((uintptr_t *)myhook.var.sdl.screen[0].pixels)),
                    srt,
                    drt,
                    pitch
                );

                break;
            }
#endif
        }

#if defined(TRIMUI_SMART)
        break;
#endif
    }

    if (show_info > 0) {
        switch (cur_mode_sel) {
        case LAYOUT_MODE_B0:
        case LAYOUT_MODE_B2:
            draw_info(NULL, buf, 0, 0, col_fg, col_bg);
            break;
        case LAYOUT_MODE_B1:
        case LAYOUT_MODE_B3:
            draw_info(
                NULL,
                buf,
                0,
                0,
                col_fg,
                col_bg
            );
            break;
        default:
#if defined(XT894) || defined(XT897) || defined(QX1000)
            draw_info(NULL, buf, 0, 0, col_fg, col_bg);
#else
            draw_info(NULL, buf, SCREEN_W - get_font_width(buf), 0, col_fg, col_bg);
#endif
            break;
        }
        show_info -= 1;
    }
    else if (myvideo.lcd.show_fps && myvideo.fps) {
        SDL_Rect rt = { 0 };

        rt.x = SCREEN_W - myvideo.fps->w;
        rt.y = 0;
        rt.w = myvideo.fps->w;
        rt.h = myvideo.fps->h;
        flush_lcd(
            TEXTURE_TMP,
            myvideo.fps->pixels,
            myvideo.fps->clip_rect,
            rt,
            myvideo.fps->pitch
        );
    }

#if defined(TRIMUI_SMART)
    if (myvideo.layout.restore) {
        myvideo.layout.restore = 0;
        myconfig.layout.mode.sel = myvideo.layout.pre_mode;
        resize_disp();
    }
#endif

    if (*myhook.var.sdl.needs_reinitializing) {
        nds_set_screen_menu_off _func =
            (nds_set_screen_menu_off)myhook.fun.set_screen_menu_off;
        _func();
    }
    flip_lcd();

    return 0;
}

#if defined(UT)
TEST(sdl2_video, process_screen)
{
}
#endif

static void* kill_handler(void *param)
{
    char buf[32] = { 0 };

    trace("call %s()\n", __func__);

    usleep(1000000);
    sprintf(buf, "kill -9 %d", (uint32_t)param);
    trace("killed by sdl2 library\n");
    system(buf);

    return NULL;
}

static void prehook_cb_select_quit(void *menu_state, void *menu_option)
{
    pthread_t id = 0;

    trace("call %s()\n", __func__);

    update_config(myvideo.home);
    pthread_create(&id, NULL, kill_handler, (void *)getpid());
    quit_drastic();
}

static void* prehook_cb_malloc(size_t size)
{
    void *r = NULL;
    uint32_t bpp = *myhook.var.sdl.bytes_per_pixel;

    trace("call %s(size=%d)\n", __func__, (int)size);

    if ((size == (NDS_W * NDS_H * bpp)) ||
        (size == (NDS_Wx2 * NDS_Hx2 * bpp)))
    {
        r = myvideo.lcd.virt_addr[0][0];
    }
    else {
        r = malloc(size);
    }
    return r;
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_malloc)
{
    //TEST_ASSERT_EQUAL_INT(0, prehook_cb_malloc());
}
#endif

static void prehook_cb_free(void *ptr)
{
    int c0 = 0;
    int c1 = 0;
    int found = 0;

    trace("call %s(ptr=%p)\n", __func__, ptr);

    for (c0 = 0; c0 < 2; c0++) {
        for (c1 = 0; c1 < 2; c1++) {
            if (ptr == myvideo.lcd.virt_addr[c0][c1]) {
                found = 1;
                break;
            }
        }
    }

    if (found == 0) {
        free(ptr);
    }
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_free)
{
    //TEST_ASSERT_EQUAL_INT(0, prehook_cb_free());
}
#endif

static void* prehook_cb_realloc(void *ptr, size_t size)
{
    void *r = NULL;
    uint32_t bpp = *myhook.var.sdl.bytes_per_pixel;

    trace("call %s(ptr=%p, size=%d)\n", __func__, ptr, (int)size);

    if ((size == (NDS_W * NDS_H * bpp)) ||
        (size == (NDS_Wx2 * NDS_Hx2 * bpp)))
    {
        r = prehook_cb_malloc(size);
    }
    else {
        r = realloc(ptr, size);
    }
    return r;
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_realloc)
{
    //TEST_ASSERT_EQUAL_INT(0, prehook_cb_realloc());
}
#endif

void prehook_cb_blit_screen_menu(uint16_t *src, uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
    trace("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_blit_screen_menu)
{
    prehook_cb_blit_screen_menu(NULL, 0, 0, 0, 0);
    TEST_PASS();
}
#endif

static void prehook_cb_update_screen(void)
{
    static int prepare_time = 30;

    trace("call %s(%d)\n", __func__, prepare_time);

    if (prepare_time) {
        prepare_time -= 1;
        myvideo.lcd.update = 0;
    }
    else if (myvideo.lcd.update == 0) {
        myvideo.lcd.cur_sel ^= 1;

#if defined(PANDORA)
        *((uint32_t *)myhook.var.sdl.screen[0].pixels) =
            (uintptr_t)myvideo.fb.pixels[FB_GAME][0];
        *((uint32_t *)myhook.var.sdl.screen[1].pixels) =
            (uintptr_t)myvideo.fb.pixels[FB_GAME][1];
#else
        *((uint32_t *)myhook.var.sdl.screen[0].pixels) =
            (uint32_t)myvideo.lcd.virt_addr[myvideo.lcd.cur_sel][0];

        *((uint32_t *)myhook.var.sdl.screen[1].pixels) =
            (uint32_t)myvideo.lcd.virt_addr[myvideo.lcd.cur_sel][1];
#endif

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
        myvideo.menu.drastic.enable = 0;
#endif
        trace("set lcd.update=1\n");
        myvideo.lcd.update = 1;
    }
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_update_screen)
{
    prehook_cb_update_screen();
    TEST_PASS();
}
#endif

#if defined(NDS_ARM64)
static void prehook_cb_print_string_ext(
    char *p,
    unsigned long fg,
    unsigned long bg,
    int x,
    int y,
    long screen_ptr,
    long p7,
    unsigned long screen_pitch,
    unsigned int p9)
{
    trace("call %s(p=\'%s\', fg=0x%08lx, bg=0x%08lx, x=%03d, y=%03d)\n", __func__, p, fg, bg, x, y);
}
#endif

static void prehook_cb_print_string(char *p, uint32_t fg, uint32_t bg, uint32_t x, uint32_t y)
{
    int w = 0, h = 0;
    SDL_Color col = { 0 };
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    static int fps_cnt = 0;

    trace("call %s(p=%p, fg=0x%08x, bg=0x%08x, x=%03d, y=%03d)\n", __func__, p, fg, bg, x, y);

    if (p && (strlen(p) > 0)) {
        if (myvideo.menu.drastic.item.cnt < MAX_MENU_LINE) {
            myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].x = x;
            myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].y = y;
            myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].fg = fg;
            myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].bg = bg;
            strcpy(myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].msg, p);
            myvideo.menu.drastic.item.cnt += 1;
            trace("added info => x=%03d, y=%03d, fg=0x%08x, bg=0x%08x, \'%s\'\n", x, y, fg, bg, p);
        }
    }

    if ((x == 0) && (y == 0) && (fg == 0xffff) && (bg == 0x0000)) {
        if (fps_cnt++ > 60) {
            fps_cnt = 0;

            w = strlen(p);
            for (h = w - 1; h >= 0; h--) {
                if (p[h] == ' ') {
                    p[h] = 0;
                    break;
                }
            }

            col.r = 0xcc;
            col.g = 0xcc;
            col.b = 0x00;
            // *myhook.var.system.video.realtime_speed_percentage
            // *myhook.var.system.video.rendered_frames_percentage
            TTF_SizeUTF8(myvideo.menu.font, p, &w, &h);
            t0 = TTF_RenderUTF8_Solid(myvideo.menu.font, p, col);
            if (t0) {
                t1 = SDL_CreateRGBSurface(SDL_SWSURFACE, t0->w, t0->h, 32, 0, 0, 0, 0);
                if (t1) {
                    SDL_FillRect(t1, &t1->clip_rect, 0x000000);
                    SDL_BlitSurface(t0, NULL, t1, NULL);

                    if (myvideo.fps) {
                        SDL_FreeSurface(myvideo.fps);
                        myvideo.fps = NULL;
                    }

                    myvideo.lcd.show_fps = 1;
                    myvideo.fps = SDL_ConvertSurface(t1, myvideo.cvt->format, 0);
                    SDL_FreeSurface(t1);
                }
                SDL_FreeSurface(t0);
            }
        }
    }
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_print_string)
{
    prehook_cb_print_string(NULL, 0, 0, 0, 0);
    TEST_PASS();
}
#endif

static void prehook_cb_savestate_pre(void)
{
#if !defined(UT) && !defined(QX1050)
    asm volatile (
        "mov r1, %0                 \n"
        "mov r2, #1                 \n"
        "str r2, [r1]               \n"
        "add sp, sp, #(0x20 + 0)    \n"
        "ldr pc, [sp], #4           \n"
        ::"r"(&myvideo.state_busy):
    );
#endif
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_savestate_pre)
{
    prehook_cb_savestate_pre();
    TEST_PASS();
}
#endif

static void prehook_cb_savestate_post(void)
{
#if !defined(UT) && !defined(QX1050)
    asm volatile (
        "mov r1, %0                 \n"
        "mov r2, #0                 \n"
        "str r2, [r1]               \n"
        "add sp, sp, #(0x18 + 0)    \n"
        "ldr pc, [sp], #4           \n"
        ::"r"(&myvideo.state_busy):
    );
#endif
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_savestate_post)
{
    prehook_cb_savestate_post();
    TEST_PASS();
}
#endif

static void sigterm_handler(int sig)
{
    static int running = 0;

    trace("call %s(sig=%d)\n", __func__, sig);

    if (!running) {
        running = 1;
        quit_drastic();
        running = 0;
    }
}

#if defined(UT)
TEST(sdl2_video, sigterm_handler)
{
    sigterm_handler(0);
    TEST_PASS();
}
#endif

static int strip_newline_char(char *p)
{
    int cc = 0;
    int len = 0;

    trace("call %s(p=%p)\n", __func__, p);

    if (!p) {
        error("p is null\n");
        return -1;
    }

    len = strlen(p);
    for (cc = 0; cc < len; cc++) {
        if ((p[cc] == '\r') || (p[cc] == '\n')) {
            p[cc] = 0;
            return 0;
        }
    }

    return -1;
}

#if defined(UT)
TEST(sdl2_video, strip_newline_char)
{
    char buf[] = { "123\r\n" };

    TEST_ASSERT_EQUAL_INT(-1, strip_newline_char(NULL));
    TEST_ASSERT_EQUAL_INT(0, strip_newline_char(buf));
    TEST_ASSERT_EQUAL_INT(3, strlen(buf));
}
#endif

static void* video_handler(void *param)
{
#if !defined(TRIMUI_SMART)
    int cur_shader = -1;
    char tmp[MAX_PATH] = { 0 };
#endif

#if defined(FLIP)
    EGLint surf_cfg[] = {
        EGL_SURFACE_TYPE,
        EGL_WINDOW_BIT,
        EGL_RENDERABLE_TYPE,
        EGL_OPENGL_ES2_BIT,
        EGL_RED_SIZE,   1,   
        EGL_GREEN_SIZE, 1,
        EGL_BLUE_SIZE,  1,   
        EGL_ALPHA_SIZE, 0,
        EGL_NONE
    };

    EGLint ctx_cfg[] = {
        EGL_CONTEXT_CLIENT_VERSION, 
        2,   
        EGL_NONE
    };

    EGLint cnt = 0;
    EGLint major = 0;
    EGLint minor = 0;
    EGLConfig cfg = 0;

    myvideo.drm.fd = open("/dev/dri/card0", O_RDWR | O_CLOEXEC);
    myvideo.drm.res = drmModeGetResources(myvideo.drm.fd);
    myvideo.drm.conn = drmModeGetConnector(myvideo.drm.fd, myvideo.drm.res->connectors[1]);
    myvideo.drm.enc = drmModeGetEncoder(myvideo.drm.fd, myvideo.drm.res->encoders[2]);
    myvideo.drm.crtc = drmModeGetCrtc(myvideo.drm.fd, myvideo.drm.res->crtcs[1]);

    myvideo.drm.gbm = gbm_create_device(myvideo.drm.fd);
    myvideo.drm.gs = gbm_surface_create(
        myvideo.drm.gbm,
        myvideo.drm.crtc->mode.hdisplay,
        myvideo.drm.crtc->mode.vdisplay, 
        GBM_FORMAT_XRGB8888,
        GBM_BO_USE_SCANOUT | GBM_BO_USE_RENDERING
    );

    myvideo.drm.pfn = (void *)eglGetProcAddress("eglGetPlatformDisplayEXT");
    myvideo.egl.display = myvideo.drm.pfn(EGL_PLATFORM_GBM_KHR, myvideo.drm.gbm, NULL);
    eglInitialize(myvideo.egl.display, &major, &minor);
    eglBindAPI(EGL_OPENGL_ES_API);
    eglGetConfigs(myvideo.egl.display, NULL, 0, &cnt);
    eglChooseConfig(myvideo.egl.display, surf_cfg, &cfg, 1, &cnt);

    myvideo.egl.surface = eglCreateWindowSurface(
        myvideo.egl.display,
        cfg,
        (EGLNativeWindowType)myvideo.drm.gs,
        NULL
    );
    myvideo.egl.context = eglCreateContext(
        myvideo.egl.display,
        cfg,
        EGL_NO_CONTEXT,
        ctx_cfg
    );

    eglMakeCurrent(
        myvideo.egl.display,
        myvideo.egl.surface,
        myvideo.egl.surface,
        myvideo.egl.context
    );

    load_shader_file(NULL);

    glGenTextures(TEXTURE_MAX, myvideo.egl.texture);

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[TEXTURE_LCD0]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[TEXTURE_MASK]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glViewport(0, 0, SCREEN_W, SCREEN_H);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnableVertexAttribArray(myvideo.egl.vert.tex_pos);
    glEnableVertexAttribArray(myvideo.egl.vert.tex_coord);

    glUniform1f(myvideo.egl.frag.alpha, 0.0);
    glUniform1i(myvideo.egl.frag.tex_sample, 0);
    glUniform4f(
        myvideo.egl.frag.screen,
        LAYOUT_BG_W,
        LAYOUT_BG_H,
        1.0 / LAYOUT_BG_W,
        1.0 / LAYOUT_BG_H
    );
#endif

#if defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
    EGLint cnt = 0;
    EGLint major = 0;
    EGLint minor = 0;
    EGLConfig cfg = 0;

    trace("call %s()\n", __func__);

    myvideo.wl.display = wl_display_connect(NULL);
    myvideo.wl.registry = wl_display_get_registry(myvideo.wl.display);

    wl_registry_add_listener(myvideo.wl.registry, &cb_global, NULL);
    wl_display_dispatch(myvideo.wl.display);
    wl_display_roundtrip(myvideo.wl.display);

    myvideo.wl.surface = wl_compositor_create_surface(myvideo.wl.compositor);
    myvideo.wl.shell_surface = wl_shell_get_shell_surface(
        myvideo.wl.shell, myvideo.wl.surface
    );

    wl_shell_surface_set_toplevel(myvideo.wl.shell_surface);
    wl_shell_surface_add_listener(myvideo.wl.shell_surface, &cb_shell_surf, NULL);
    
    myvideo.wl.region = wl_compositor_create_region(myvideo.wl.compositor);
    wl_region_add(myvideo.wl.region, 0, 0, WL_WIN_W, WL_WIN_H);
    wl_surface_set_opaque_region(myvideo.wl.surface, myvideo.wl.region);
    myvideo.wl.window = wl_egl_window_create(myvideo.wl.surface, WL_WIN_W, WL_WIN_H);

    myvideo.egl.display = eglGetDisplay((EGLNativeDisplayType)myvideo.wl.display);
    eglInitialize(myvideo.egl.display, &major, &minor);
    eglGetConfigs(myvideo.egl.display, NULL, 0, &cnt);
    eglChooseConfig(myvideo.egl.display, egl_cfg, &cfg, 1, &cnt);
    myvideo.egl.surface = eglCreateWindowSurface(
        myvideo.egl.display,
        cfg,
        (EGLNativeWindowType)myvideo.wl.window,
        NULL
    );
    myvideo.egl.context = eglCreateContext(
        myvideo.egl.display,
        cfg,
        EGL_NO_CONTEXT,
        ctx_attribs
    );

    eglMakeCurrent(
        myvideo.egl.display,
        myvideo.egl.surface,
        myvideo.egl.surface,
        myvideo.egl.context
    );

    load_shader_file(NULL);

    glGenTextures(TEXTURE_MAX, myvideo.egl.texture);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[TEXTURE_LCD0]);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    glViewport(0, 0, WL_WIN_W, WL_WIN_H);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnableVertexAttribArray(myvideo.egl.vert.tex_pos);
    glEnableVertexAttribArray(myvideo.egl.vert.tex_coord);

    glUniform1i(myvideo.egl.frag.tex_sample, 0);
    glUniform1f(myvideo.egl.frag.alpha, 0.0);
    glUniform4f(
        myvideo.egl.frag.screen,
        LAYOUT_BG_W,
        LAYOUT_BG_H,
        1.0 / LAYOUT_BG_W,
        1.0 / LAYOUT_BG_H
    );
#endif

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
    alloc_lcd_mem();
#endif

    trace("call %s()++\n", __func__);

#if !defined(UT)
    myvideo.thread.running = 1;
#endif

#if defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
    myvideo.wl.ready = 1;
#endif

    while (myvideo.thread.running) {
#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
        if ((myvideo.menu.sdl2.enable) || (myvideo.menu.drastic.enable)) {
#if !defined(BRICK) && !defined(GKD2) && !defined(GKDMINI)
            if (cur_shader != -1) {
                cur_shader = -1;
                load_shader_file(NULL);
            }
#endif
        }
        else if ((myvideo.shader >= 0) && (myvideo.shader != cur_shader)) {
#if !defined(BRICK) && !defined(GKD2) && !defined(GKDMINI)
            cur_shader = myvideo.shader;
            if (get_file_name_by_index(SHADER_PATH, myvideo.shader, tmp, 0) >= 0) {
                load_shader_file(tmp);
            }
#endif
        }

        if ((myvideo.menu.sdl2.enable) || (myvideo.menu.drastic.enable)) {
            if (myvideo.menu.update) {
                myvideo.menu.update = 0;
                if (myvideo.menu.sdl2.enable) {
                    trace("update sdl2 menu\n");

                    flush_lcd(
                        TEXTURE_TMP,
                        myvideo.cvt->pixels,
                        myvideo.cvt->clip_rect,
                        myvideo.cvt->clip_rect,
                        myvideo.cvt->pitch
                    );

                    flush_lcd(
                        TEXTURE_TMP,
                        myvideo.cvt->pixels,
                        myvideo.cvt->clip_rect,
                        myvideo.cvt->clip_rect,
                        myvideo.cvt->pitch
                    );
                }
                else {
                    trace("update drastic menu\n");

                    flush_lcd(
                        TEXTURE_TMP,
                        myvideo.menu.drastic.frame->pixels,
                        myvideo.menu.drastic.frame->clip_rect,
                        myvideo.menu.drastic.frame->clip_rect,
                        myvideo.menu.drastic.frame->pitch
                    );

                    flush_lcd(
                        TEXTURE_TMP,
                        myvideo.menu.drastic.frame->pixels,
                        myvideo.menu.drastic.frame->clip_rect,
                        myvideo.menu.drastic.frame->clip_rect,
                        myvideo.menu.drastic.frame->pitch
                    );
                }
                flip_lcd();
            }
        }
        else if (myvideo.lcd.update) {
#else
        if (myvideo.lcd.update) {
#endif
            trace("handle screen update\n");

            process_screen();
            myvideo.lcd.update = 0;
        }

        usleep(0);
    }

#if defined(FLIP)
    glDeleteTextures(TEXTURE_MAX, myvideo.egl.texture);
    eglMakeCurrent(myvideo.egl.display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroySurface(myvideo.egl.display, myvideo.egl.surface);
    eglDestroyContext(myvideo.egl.display, myvideo.egl.context);

    eglTerminate(myvideo.egl.display);
    glDeleteProgram(myvideo.egl.program);

    drmModeRmFB(myvideo.drm.fd, myvideo.drm.fb); 
    drmModeFreeCrtc(myvideo.drm.crtc);
    drmModeFreeEncoder(myvideo.drm.enc);
    drmModeFreeConnector(myvideo.drm.conn);
    drmModeFreeResources(myvideo.drm.res);
    close(myvideo.drm.fd);
#endif

#if defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
    myvideo.wl.ready = 0;

    eglSwapBuffers(myvideo.egl.display, myvideo.egl.surface);
    glDeleteTextures(TEXTURE_MAX, myvideo.egl.texture);
    eglMakeCurrent(myvideo.egl.display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);

    eglDestroySurface(myvideo.egl.display, myvideo.egl.surface);
    eglDestroyContext(myvideo.egl.display, myvideo.egl.context);
    eglTerminate(myvideo.egl.display);
    glDeleteProgram(myvideo.egl.program);

    wl_shell_surface_destroy(myvideo.wl.shell_surface);
    wl_shell_destroy(myvideo.wl.shell);
    wl_surface_destroy(myvideo.wl.surface);
    wl_compositor_destroy(myvideo.wl.compositor);
    wl_registry_destroy(myvideo.wl.registry);
    wl_egl_window_destroy(myvideo.wl.window);
    wl_display_disconnect(myvideo.wl.display);
#endif

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
    free_lcd_mem();
#endif

    trace("call %s()--\n", __func__);

#if !defined(UT)
    pthread_exit(NULL);
#endif

    return NULL;
}

#if defined(UT)
TEST(sdl2_video, video_handler)
{
    TEST_ASSERT_NULL(video_handler(NULL));
}
#endif

static int free_lang_res(void)
{
    int cc = 0;

    trace("call %s()\n", __func__);

    for (cc=0; myvideo.lang.trans[cc]; cc++) {
        if (myvideo.lang.trans[cc]) {
            free(myvideo.lang.trans[cc]);
        }
        myvideo.lang.trans[cc] = NULL;
    }
    memset(myvideo.lang.trans, 0, sizeof(myvideo.lang.trans));

    return 0;
}

#if defined(UT)
TEST(sdl2_video, free_lang_res)
{
    myconfig.lang = 0;
    TEST_ASSERT_EQUAL_INT(0, load_lang_file());
    TEST_ASSERT_EQUAL_INT(0, free_lang_res());
    TEST_ASSERT_NULL(myvideo.lang.trans[0]);
}
#endif

#if defined(MINI)
static int load_mask_file(const char *name)
{
    trace("call %s(name=%s)\n", __func__, name);

    return 0;
}
#endif

#if !defined(TRIMUI_SMART) && !defined(MINI) && !defined(BRICK) && !defined(GKD2) && !defined(GKDMINI)
static int load_shader_file(const char *name)
{
    long size = 0;
    FILE *f = NULL;
    char *content = NULL;
    const char *frag_src = def_frag_src;
    const char *vert_src = def_vert_src;
    char buf[MAX_PATH + 32] = { 0 };
    GLint success = 0;
    GLint frag_shader = 0;
    GLint vert_shader = 0;

    trace("call %s(name=%p)\n", __func__, name);

    if (name && name[0]) {
        sprintf(buf, "%s%s/%s", myvideo.home, SHADER_PATH, name);
        trace("shader path=\"%s\"\n", buf);

        f = fopen(buf, "r");
        if (f) {
            fseek(f, 0, SEEK_END);
            size = ftell(f);
            rewind(f);
            trace("shader file size=%ld\n", size);

            content = malloc(size + 1);
            if (content) {
                fread(content, 1, size, f);
                content[size] = '\0';

                frag_src = content;
                trace("apply new shader\n");
            }
            else {
                error("failed to allocate buffer for shader, fallback to default\n");
            }
            fclose(f);
        }
        else {
            error("failed to open shader file \"%s\"\n", buf);
        }
    }

    do {
        vert_shader = glCreateShader(GL_VERTEX_SHADER);
        glShaderSource(vert_shader, 1, (const char * const *)&vert_src, NULL);
        glCompileShader(vert_shader);
        trace("vert_shader id=%d\n", vert_shader);

        glGetShaderiv(vert_shader, GL_COMPILE_STATUS, &success);
        trace("vert_shader compile status (%s)\n", success ? "success" : "fail");
        if (!success) {
            break;
        }

        frag_shader = glCreateShader(GL_FRAGMENT_SHADER);
        glShaderSource(frag_shader, 1, (const char * const *)&frag_src, NULL);
        glCompileShader(frag_shader);
        trace("frag_shader id=%d\n", frag_shader);

        glGetShaderiv(frag_shader, GL_COMPILE_STATUS, &success);
        trace("frag_shader compile status (%s)\n", success ? "success" : "fail");
        if (!success) {
            break;
        }

        glUseProgram(0);
        if (myvideo.egl.program) {
            glDeleteProgram(myvideo.egl.program);
            if (glIsProgram(myvideo.egl.program)) {
                error("opengl es program still exists\n");
            }
            else {
                trace("opengl es program deleted\n");
            }
        }

        myvideo.egl.program = glCreateProgram();
        glAttachShader(myvideo.egl.program, vert_shader);
        glAttachShader(myvideo.egl.program, frag_shader);
        glLinkProgram(myvideo.egl.program);
        glDeleteShader(vert_shader);
        glDeleteShader(frag_shader);

        glGetProgramiv(myvideo.egl.program, GL_LINK_STATUS, &success);
        trace("opengl es program link status (%s)\n", success ? "success" : "fail");
        if (!success) {
            break;
        }

        glUseProgram(myvideo.egl.program);

        myvideo.egl.vert.tex_pos = glGetAttribLocation(myvideo.egl.program, "vert_tex_pos");
        myvideo.egl.vert.tex_coord = glGetAttribLocation(myvideo.egl.program, "vert_tex_coord");
        myvideo.egl.frag.alpha = glGetUniformLocation(myvideo.egl.program, "frag_alpha");
        myvideo.egl.frag.screen = glGetUniformLocation(myvideo.egl.program, "frag_screen");
        myvideo.egl.frag.tex_sample = glGetUniformLocation(myvideo.egl.program, "frag_tex_sample");
    } while(0);

    if (content) {
        free(content);
    }

    return 0;
}   

#if defined(UT)
TEST(sdl2_video, load_shader_file)
{
}
#endif
#endif

static int load_lang_file(void)
{
    int cc = 0;
    int len = 0;
    FILE *f = NULL;
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s(lang=%d)\n", __func__, myconfig.lang);

    if (myconfig.lang == 0) {
        return 0;
    }

    free_lang_res();

    sprintf(buf, "%s%s/%s", myvideo.home, LANG_PATH, lang_file_name[myconfig.lang]);
    f = fopen(buf, "r");
    if (!f) {
        error("failed to open lang file \"%s\"\n", buf);
        return -1;
    }

    memset(buf, 0, sizeof(buf));
    while (fgets(buf, sizeof(buf), f)) {
        strip_newline_char(buf);
        len = strlen(buf) + 2;

        myvideo.lang.trans[cc] = malloc(len);

        if (myvideo.lang.trans[cc] != NULL) {
            memcpy(myvideo.lang.trans[cc], buf, len);
            trace("lang=\"%s\", len=%d\n", myvideo.lang.trans[cc], len);
        }

        cc+= 1;
        if (cc >= MAX_LANG_LINE) {
            break;
        }
        memset(buf, 0, sizeof(buf));
    }
    fclose(f);

    return 0;
}

#if defined(UT)
TEST(sdl2_video, load_lang_file)
{
    //TEST_ASSERT_EQUAL_INT(-1, load_lang_file(NULL));
    //TEST_ASSERT_EQUAL_INT(0, load_lang_file(DEF_LANG));
}
#endif

static int get_file_name_by_index(const char *folder, int idx, char *buf, int full)
{
    int r = -1;
    int cnt = 0;
    DIR *d = NULL;
    char tmp[MAX_PATH + 32] = { 0 };
    struct dirent *dir = NULL;

    trace("call %s()\n", __func__);

    buf[0] = 0;
    sprintf(tmp, "%s%s", myvideo.home, folder);
    trace("enum folder=\"%s\"\n", tmp);

    d = opendir(tmp);
    if (!d) {
        error("failed to open dir \"%s\"\n", tmp);
        return r;
    }

    cnt = 0;
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_type == DT_DIR) {
            continue;
        }
        if (strcmp(dir->d_name, ".") == 0) {
            continue;
        }
        if (strcmp(dir->d_name, "..") == 0) {
            continue;
        }

        if (cnt == idx) {
            r = 0;
            if (full) {
                sprintf(buf, "%s/%s/%s", myvideo.home, folder, dir->d_name);
            }
            else {
                strcpy(buf, dir->d_name);
            }
            trace("found file \"%s\" by index (%d)\n", buf, idx);
            break;
        }
        cnt += 1;
    }
    closedir(d);

    return r;
}

#if 0 //defined(MINI)
static int load_mask_file(void)
{
    int cc = 0;
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s(sel=%d, max=%d)\n", __func__, myconfig.layout.overlay.sel, myvideo.layout.overlay.max);

    if (myvideo.layout.overlay.bg) {
        SDL_FreeSurface(myvideo.layout.overlay.bg);
        myvideo.layout.overlay.bg = NULL;
    }

    for (cc = 0; cc < 2; cc++) {
        if (myvideo.layout.overlay.mask[cc]) {
            SDL_FreeSurface(myvideo.layout.overlay.mask[cc]);
            myvideo.layout.overlay.mask[cc] = NULL;
        }
    }

    if (get_file_name_by_index(OVERLAY_PATH, myconfig.layout.overlay.sel, buf, 1) >= 0) {
        SDL_Surface *t = NULL;
        SDL_Surface *tmp = NULL;

        trace("load overlay from \"%s\"\n", buf);

#if defined(GKD2) || defined(GKDMINI) || defined(BRICK)
        strcpy(myvideo.shm.buf->overlay.image, buf);
        myvideo.layout.overlay.reload = 1;
#endif

        t = IMG_Load(buf);
        tmp = SDL_CreateRGBSurface(SDL_SWSURFACE, SCREEN_W, SCREEN_H, 32, 0xff0000, 0xff00, 0xff, 0xff000000);
        myvideo.layout.overlay.bg = SDL_ConvertSurface(t, tmp->format, 0);
        SDL_FreeSurface(t);

        for (cc = 0; cc < 2; cc++) {
            SDL_Rect srt = { 0 };
            SDL_Rect drt = { 0 };

            srt.w = myvideo.layout.mode[myconfig.layout.mode.sel].screen[cc].w;
            srt.h = myvideo.layout.mode[myconfig.layout.mode.sel].screen[cc].h;
            srt.x = myvideo.layout.mode[myconfig.layout.mode.sel].screen[cc].x;
            srt.y = myvideo.layout.mode[myconfig.layout.mode.sel].screen[cc].y;

            myvideo.layout.overlay.mask[cc] = SDL_CreateRGBSurface(
                SDL_SWSURFACE,
                srt.w,
                srt.h,
                32,
                0xff0000,
                0xff00,
                0xff,
                0xff000000
            );

            drt.x = 0;
            drt.y = 0;
            drt.w = srt.w;
            drt.h = srt.h;

            SDL_BlitSurface(
                myvideo.layout.overlay.bg,
                &srt,
                myvideo.layout.overlay.mask[cc],
                &drt
            );

            trace("overlay[%d]=(src:%d,%d,%d,%d) (drt:%d,%d,%d,%d)\n",
                cc,
                srt.x,
                srt.y,
                srt.w,
                srt.h,
                drt.x,
                drt.y,
                drt.w,
                drt.h
            );
        }
        SDL_FreeSurface(tmp);

        trace("overlay image=%p\n", myvideo.layout.overlay.bg);
    }
    else {
#if defined(GKD2) || defined(GKDMINI) || defined(BRICK)
        myvideo.shm.buf->overlay.image[0] = 0;
        myvideo.layout.overlay.reload = 1;
#endif

        myvideo.layout.overlay.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, SCREEN_W, SCREEN_H, 32, 0, 0, 0, 0);

        SDL_FillRect(myvideo.layout.overlay.bg, &myvideo.layout.overlay.bg->clip_rect, SDL_MapRGB(myvideo.layout.overlay.bg->format, 0x00, 0x00, 0x00));
        trace("loaded black overlay image\n");
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, load_mask_file)
{
}
#endif
#endif

static int enum_lang_file(void)
{
    int cnt = 0;
    DIR *d = NULL;
    struct dirent *dir = NULL;
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, LANG_PATH);
    trace("lang folder=\"%s\"\n", buf);

    memset(lang_file_name, 0, sizeof(lang_file_name));
    strcpy(lang_file_name[cnt], DEF_LANG);
    cnt += 1;

    d = opendir(buf);
    if (!d) {
        error("failed to open dir \"%s\"\n", buf);
        return -1;
    }

    while ((dir = readdir(d)) != NULL) {
        if (dir->d_type == DT_DIR) {
            continue;
        }
        if (strcmp(dir->d_name, ".") == 0) {
            continue;
        }
        if (strcmp(dir->d_name, "..") == 0) {
            continue;
        }

        trace("lang[%d]=\"%s\"\n", cnt, dir->d_name);
        strcpy(lang_file_name[cnt], dir->d_name);

        cnt += 1;
        if (cnt >= MAX_LANG_FILE) {
            break;
        }
    }
    closedir(d);

    return cnt;
}

#if defined(UT)
TEST(sdl2_video, enum_lang_file)
{
    TEST_ASSERT_EQUAL_INT(0, init_device());
    //TEST_ASSERT_EQUAL_INT(3, enum_lang_file());
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

static int get_mask_cnt(void)
{
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, MASK_PATH);
    trace("mask folder=\"%s\"\n", buf);

    return get_file_cnt(buf);
}

#if !defined(MINI)
static int get_shader_cnt(void)
{
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, SHADER_PATH);
    trace("shader folder=\"%s\"\n", buf);

    return get_file_cnt(buf);
}

#if defined(UT)
TEST(sdl2_video, get_shader_cnt)
{
}
#endif
#endif

static int get_bg_dir_cnt(void)
{
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, BG_PATH);
    trace("bg folder=\"%s\"\n", buf);

    return get_dir_cnt(buf);
}

#if defined(UT)
TEST(sdl2_video, get_bg_dir_cnt)
{
    TEST_ASSERT_EQUAL_INT(0, init_device());
    TEST_ASSERT_EQUAL_INT(9, get_bg_dir_cnt());
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

static int get_menu_cnt(void)
{
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, MENU_PATH);
    trace("menu folder=\"%s\"\n", buf);

    return get_dir_cnt(buf);
}

#if defined(UT)
TEST(sdl2_video, get_menu_cnt)
{
    TEST_ASSERT_EQUAL_INT(0, init_device());
    TEST_ASSERT_EQUAL_INT(3, get_menu_cnt());
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

static int get_pen_cnt(void)
{
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, PEN_PATH);
    trace("pen folder=\"%s\"\n", buf);

    return get_file_cnt(buf);
}

#if defined(UT)
TEST(sdl2_video, get_pen_cnt)
{
    TEST_ASSERT_EQUAL_INT(0, init_device());
    TEST_ASSERT_EQUAL_INT(6, get_pen_cnt());
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

#if defined(UT)
static int init_lcd(void)
{
    trace("call %s()\n", __func__);

    return 0;
}

TEST(sdl2_video, init_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, init_lcd());
}

static int quit_lcd(void)
{
    trace("call %s()\n", __func__);

    return 0;
}

TEST(sdl2_video, quit_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, quit_lcd());
}

int resize_disp(void)
{
    trace("call %s()\n", __func__);

    return 0;
}

TEST(sdl2_video, resize_disp)
{
    TEST_ASSERT_EQUAL_INT(0, resize_disp());
}
#endif

#if defined(GKD2) || defined(GKDMINI) || defined(BRICK)
static int init_lcd(void)
{
    trace("call %s()\n", __func__);

    myvideo.shm.fd = shm_open(SHM_NAME, O_RDWR, 0777);
    trace("shm fd=%d\n", myvideo.shm.fd);

    myvideo.shm.buf = (shm_buf_t *) mmap(NULL, sizeof(shm_buf_t), PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.shm.fd, 0);
    trace("shm buf=%p\n", myvideo.shm.buf);

    return 0;
}

static int quit_lcd(void)
{
    trace("call %s()\n", __func__);

    myvideo.shm.buf->valid = 1;
    myvideo.shm.buf->cmd = SHM_CMD_QUIT;
    trace("send SHM_CMD_QUIT\n");

    while (myvideo.shm.buf->valid) {
        usleep(10);
    }

    munmap(myvideo.shm.buf, sizeof(shm_buf_t));
    shm_unlink(SHM_NAME);

    return 0;
}
#endif

#if defined(FLIP)
static int init_lcd(void)
{
    trace("call %s()\n", __func__);

    return 0;
}

static int quit_lcd(void)
{
    trace("call %s()\n", __func__);

    return 0;
}
#endif

#if defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
static int init_lcd(void)
{
    trace("call %s()\n", __func__);

    myvideo.wl.ready = 0;
    return 0;
}

static int quit_lcd(void)
{
    trace("call %s()\n", __func__);

    myvideo.wl.thread.running = 0;
    pthread_join(myvideo.wl.thread.id, NULL);

    return 0;
}
#endif

#if defined(PANDORA)
int enable_fb_plane(int n)
{
    int cc = 0;
    struct omapfb_plane_info pi = { 0 };

    trace("call %s(n=%d)\n", __func__, n);

    for (cc = 0; cc < FB_NUM; cc++) {
        if (myvideo.fb.fd[cc] < 0) {
            continue;
        }

        ioctl(myvideo.fb.fd[cc], OMAPFB_QUERY_PLANE, &pi);

        pi.enabled = (cc == n) ? 1 : 0;
        ioctl(myvideo.fb.fd[cc], OMAPFB_SETUP_PLANE, &pi);
       trace("%s fb plane for /dev/fb%d\n", (cc == n) ? "enabled" : "disabled", cc + 1);
    }

    myvideo.fb.cur_idx = n;
    trace("set cur_idx=%d\n", n);

    return 0;
}

static int init_lcd(void)
{
    int w = 320;
    int h = 480;
    int op_w = 800;
    int op_h = 480;
    int cc = 0;
    struct omapfb_mem_info mi = { 0 };
    struct omapfb_plane_info pi = { 0 };
    const char *FB_PATH[] = {
        "/dev/fb1",
        "/dev/fb2",
    };

    trace("call %s()\n", __func__);

    myvideo.fb.cur_idx = FB_GAME;
    for (cc = 0; cc < FB_NUM; cc++) {
        myvideo.fb.fd[cc] = open(FB_PATH[cc], O_RDWR);
        if (myvideo.fb.fd[cc] < 0) {
            error("failed to open %s\n", FB_PATH[cc]);
            continue;
        }

        ioctl(myvideo.fb.fd[cc], OMAPFB_QUERY_MEM, &mi);
        ioctl(myvideo.fb.fd[cc], OMAPFB_QUERY_PLANE, &pi);
        ioctl(myvideo.fb.fd[cc], FBIOGET_VSCREENINFO, &myvideo.fb.var_info);
        ioctl(myvideo.fb.fd[cc], FBIOGET_FSCREENINFO, &myvideo.fb.fix_info);

        pi.enabled = 0;
        ioctl(myvideo.fb.fd[cc], OMAPFB_SETUP_PLANE, &pi);

        if (cc == FB_GAME) {
            mi.size = NDS_W * NDS_Hx2 * 4 * 2;
            pi.out_width = w;
            pi.out_height = h;
        }
        else {
            mi.size = MENU_W * MENU_H * 4 * 2;
            pi.out_width = MENU_W;
            pi.out_height = MENU_H;
        }
        ioctl(myvideo.fb.fd[cc], OMAPFB_SETUP_MEM, &mi);

        pi.enabled = (cc == FB_GAME) ? 1 : 0;
        pi.pos_x = (op_w - pi.out_width) >> 1;
        pi.pos_y = (op_h - pi.out_height) >> 1;
        ioctl(myvideo.fb.fd[cc], OMAPFB_SETUP_PLANE, &pi);

        myvideo.fb.var_info.xoffset = 0;
        myvideo.fb.var_info.yoffset = 0;
        if (cc == FB_GAME) {
            myvideo.fb.var_info.xres = NDS_W;
            myvideo.fb.var_info.yres = NDS_Hx2;
        }
        else {
            myvideo.fb.var_info.xres = MENU_W;
            myvideo.fb.var_info.yres = MENU_H;
        }
        myvideo.fb.var_info.xres_virtual = myvideo.fb.var_info.xres;
        myvideo.fb.var_info.yres_virtual = myvideo.fb.var_info.yres * 2;
        ioctl(myvideo.fb.fd[cc], FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);

        close(myvideo.fb.fd[cc]);
    }

    for (cc = 0; cc < FB_NUM; cc++) {
        myvideo.fb.fd[cc] = open(FB_PATH[cc], O_RDWR);
        if (myvideo.fb.fd[cc] < 0) {
            error("failed to open %s\n", FB_PATH[cc]);
            continue;
        }

        ioctl(myvideo.fb.fd[cc], OMAPFB_QUERY_MEM, &mi);
        ioctl(myvideo.fb.fd[cc], OMAPFB_QUERY_PLANE, &pi);
        ioctl(myvideo.fb.fd[cc], FBIOGET_VSCREENINFO, &myvideo.fb.var_info);
        ioctl(myvideo.fb.fd[cc], FBIOGET_FSCREENINFO, &myvideo.fb.fix_info);

        pi.enabled = 0;
        ioctl(myvideo.fb.fd[cc], OMAPFB_SETUP_PLANE, &pi);

        if (cc == FB_GAME) {
            mi.size = NDS_W * NDS_Hx2 * 4 * 2;
            pi.out_width = w;
            pi.out_height = h;
        }
        else {
            mi.size = w * h * 4 * 2;
            pi.out_width = MENU_W;
            pi.out_height = MENU_H;
        }
        ioctl(myvideo.fb.fd[cc], OMAPFB_SETUP_MEM, &mi);

        pi.enabled = (cc == FB_GAME) ? 1 : 0;
        pi.pos_x = (op_w - pi.out_width) >> 1;
        pi.pos_y = (op_h - pi.out_height) >> 1;
        ioctl(myvideo.fb.fd[cc], OMAPFB_SETUP_PLANE, &pi);

        myvideo.fb.mem[cc] = mmap(0, mi.size, PROT_WRITE | PROT_READ, MAP_SHARED, myvideo.fb.fd[cc], 0);
        myvideo.fb.pixels[cc][0] = myvideo.fb.mem[cc];
        myvideo.fb.pixels[cc][1] = myvideo.fb.mem[cc] + (NDS_W * NDS_H);
        memset(myvideo.fb.mem[cc], 0, mi.size);

        myvideo.fb.var_info.xoffset = 0;
        myvideo.fb.var_info.yoffset = 0;
        if (cc == FB_GAME) {
            myvideo.fb.var_info.xres = NDS_W;
            myvideo.fb.var_info.yres = NDS_Hx2;
        }
        else {
            myvideo.fb.var_info.xres = MENU_W;
            myvideo.fb.var_info.yres = MENU_H;
        }
        myvideo.fb.var_info.xres_virtual = myvideo.fb.var_info.xres;
        myvideo.fb.var_info.yres_virtual = myvideo.fb.var_info.yres * 2;
        ioctl(myvideo.fb.fd[cc], FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);
    }

    return 0;
}

static int quit_lcd(void)
{
    int cc = 0;
    struct omapfb_mem_info mi = { 0 };
    struct omapfb_plane_info pi = { 0 };

    trace("call %s()\n", __func__);

    for (cc = 0; cc < FB_NUM; cc++) {
        if (myvideo.fb.fd[cc] > 0) {
            ioctl(myvideo.fb.fd[cc], OMAPFB_QUERY_MEM, &mi);
            ioctl(myvideo.fb.fd[cc], OMAPFB_QUERY_PLANE, &pi);

            pi.enabled = 0;
            ioctl(myvideo.fb.fd[cc], OMAPFB_SETUP_PLANE, &pi);
            trace("disabled fb plane\n");

            munmap(myvideo.fb.mem[cc], mi.size);
            myvideo.fb.mem[cc] = NULL;

            mi.size = 0;
            ioctl(myvideo.fb.fd[cc], OMAPFB_SETUP_MEM, &mi);
            trace("freed fb mem\n");

            close(myvideo.fb.fd[cc]);
            myvideo.fb.fd[cc] = -1;
        }
    }

    return 0;
}
#endif

#if defined(TRIMUI_SMART)
static int ion_alloc(int ion_fd, ion_alloc_info_t* info)
{
    sunxi_phys_data spd = { 0 };
    struct ion_fd_data ifd = { 0 };
    struct ion_custom_data icd = { 0 };
    struct ion_allocation_data iad = { 0 };

    trace("call %s(ion_fd=%d, info=%p)\n", __func__, ion_fd, info);

    iad.len = info->size;
    iad.align = sysconf(_SC_PAGESIZE);
    iad.heap_id_mask = ION_HEAP_TYPE_DMA_MASK;
    iad.flags = 0;
    ioctl(ion_fd, ION_IOC_ALLOC, &iad);

    icd.cmd = ION_IOC_SUNXI_PHYS_ADDR;
    icd.arg = (uintptr_t)&spd;
    spd.handle = iad.handle;
    ioctl(ion_fd, ION_IOC_CUSTOM, &icd);

    ifd.handle = iad.handle;
    ioctl(ion_fd, ION_IOC_MAP, &ifd);

    info->handle = iad.handle;
    info->fd = ifd.fd;
    info->padd = (void*)spd.phys_addr;
    info->vadd = mmap(0, info->size, PROT_READ | PROT_WRITE, MAP_SHARED, info->fd, 0);
    trace("mmap padd=%p, vadd=%p, size=%d\n", info->padd, info->vadd, info->size);

    return 0;
}

static int ion_free(int ion_fd, ion_alloc_info_t* info)
{
    struct ion_handle_data ihd = { 0 };

    trace("call %s()\n", __func__);

    munmap(info->vadd, info->size);
    close(info->fd);

    info->vadd = NULL;
    info->fd = -1;

    ihd.handle = info->handle;
    ioctl(ion_fd, ION_IOC_FREE, &ihd);
    ion_fd = -1;

    return 0;
}

static int init_lcd(void)
{
    int r = 0;
    int x = 0;
    int y = 0;
    int cc = 0;
    int ox = 32;
    int oy = 24;
    uint32_t *dst = NULL;
    uint32_t args[4] = { 0, (uintptr_t)&myvideo.gfx.disp, 1, 0 };

    trace("call %s()\n", __func__);

    myvideo.fb.fd = open("/dev/fb0", O_RDWR);
    if (myvideo.fb.fd < 0) {
        error("failed to open /dev/fb0\n");
        return -1;
    }

    myvideo.gfx.ion_fd = open("/dev/ion", O_RDWR);
    if (myvideo.gfx.ion_fd < 0) {
        error("failed to open /dev/ion\n");
        return -1;
    }

    myvideo.gfx.mem_fd = open("/dev/mem", O_RDWR);
    if (myvideo.gfx.mem_fd < 0) {
        error("failed to open /dev/mem\n");
        return -1;
    }

    myvideo.gfx.disp_fd = open("/dev/disp", O_RDWR);
    if (myvideo.gfx.disp_fd < 0) {
        error("failed to open /dev/disp\n");
        return -1;
    }

    memset(&myvideo.gfx.disp, 0, sizeof(disp_layer_config));
    memset(&myvideo.gfx.buf, 0, sizeof(disp_layer_config));
    myvideo.gfx.mem = mmap(0, sysconf(_SC_PAGESIZE), PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.gfx.mem_fd, OVL_V);
    trace("map buffer=%p\n", myvideo.gfx.mem);

    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);

    myvideo.gfx.disp.channel = DEF_FB_CH;
    myvideo.gfx.disp.layer_id = DEF_FB_LAYER;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_GET_CONFIG, args);

    myvideo.gfx.disp.enable = 0;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);

    myvideo.gfx.ion.size = ION_W * ION_H * 4 * 2;
    ion_alloc(myvideo.gfx.ion_fd, &myvideo.gfx.ion);

    myvideo.gfx.buf.channel = SCALER_CH;
    myvideo.gfx.buf.layer_id = SCALER_LAYER;
    myvideo.gfx.buf.enable = 1;
    myvideo.gfx.buf.info.fb.format = DISP_FORMAT_ARGB_8888;
    myvideo.gfx.buf.info.fb.addr[0] = (uintptr_t)myvideo.gfx.ion.padd;
    myvideo.gfx.buf.info.fb.size[0].width = SCREEN_H;
    myvideo.gfx.buf.info.fb.size[0].height = SCREEN_W;
    myvideo.gfx.buf.info.mode = LAYER_MODE_BUFFER;
    myvideo.gfx.buf.info.zorder = SCALER_ZORDER;
    myvideo.gfx.buf.info.alpha_mode = 0;
    myvideo.gfx.buf.info.alpha_value = 0;
    myvideo.gfx.buf.info.screen_win.x = 0;
    myvideo.gfx.buf.info.screen_win.y = 0;
    myvideo.gfx.buf.info.screen_win.width  = SCREEN_H;
    myvideo.gfx.buf.info.screen_win.height = SCREEN_W;
    myvideo.gfx.buf.info.fb.pre_multiply = 0;
    myvideo.gfx.buf.info.fb.crop.x = (uint64_t)0 << 32;
    myvideo.gfx.buf.info.fb.crop.y = (uint64_t)0 << 32;
    myvideo.gfx.buf.info.fb.crop.width  = (uint64_t)SCREEN_H << 32;
    myvideo.gfx.buf.info.fb.crop.height = (uint64_t)SCREEN_W << 32;

    args[1] = (uintptr_t)&myvideo.gfx.buf;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);
    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);

    if ((myconfig.layout.mode.sel != LAYOUT_MODE_N2) && (myconfig.layout.mode.sel != LAYOUT_MODE_N3)) {
        myconfig.layout.mode.sel = LAYOUT_MODE_N2;
    }

    alloc_lcd_mem();

    cc = 0;
    for (y = 0; y < NDS_H; y++) {
        for (x = 0; x < NDS_W; x++) {
            dst = (uint32_t *)myvideo.gfx.ion.vadd;
            LUT_256x192_N20[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x) + ox) * SCREEN_H) + y + oy);
            LUT_256x192_N30[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x)) * SCREEN_H) + y);

            dst = ((uint32_t *)myvideo.gfx.ion.vadd) + (SCREEN_W * SCREEN_H);
            LUT_256x192_N21[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x) + ox) * SCREEN_H) + y + oy);
            LUT_256x192_N31[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x)) * SCREEN_H) + y);
            cc+= 1;
        }
    }

    resize_disp();
    return 0;
}

static int quit_lcd(void)
{
    uint32_t args[4] = { 0, (uintptr_t)&myvideo.gfx.disp, 1, 0 };

    trace("call %s()\n", __func__);

    myvideo.gfx.buf.enable = 0;
    myvideo.gfx.disp.enable = 0;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);

    args[1] = (uintptr_t)&myvideo.gfx.buf;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);

    myvideo.gfx.disp.enable = 1;
    myvideo.gfx.disp.channel = DEF_FB_CH;
    myvideo.gfx.disp.layer_id = DEF_FB_LAYER;
    args[1] = (uintptr_t)&myvideo.gfx.disp;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);

    ion_free(myvideo.gfx.ion_fd, &myvideo.gfx.ion);
    munmap(myvideo.gfx.mem, sysconf(_SC_PAGESIZE));
    myvideo.gfx.mem = NULL;

    close(myvideo.fb.fd);
    close(myvideo.gfx.ion_fd);
    close(myvideo.gfx.mem_fd);
    close(myvideo.gfx.disp_fd);

    myvideo.fb.fd = -1;
    myvideo.gfx.ion_fd = -1;
    myvideo.gfx.mem_fd = -1;
    myvideo.gfx.disp_fd = -1;

    free_lcd_mem();
    return 0;
}

int resize_disp(void)
{
    int r = 0;
    uint32_t args[4] = { 0, (uintptr_t)&myvideo.gfx.buf, 1, 0 };

    trace("call %s()\n", __func__);

    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);
    if (myconfig.layout.mode.sel == LAYOUT_MODE_N2) {
        myvideo.gfx.buf.info.fb.crop.width  = ((uint64_t)SCREEN_H) << 32;
        myvideo.gfx.buf.info.fb.crop.height = ((uint64_t)SCREEN_W) << 32;
    }
    else {
        myvideo.gfx.buf.info.fb.crop.width  = ((uint64_t)NDS_H) << 32;
        myvideo.gfx.buf.info.fb.crop.height = ((uint64_t)NDS_W) << 32;
    }
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);
    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);

    return 0;
}
#endif

#if defined(MINI)
static int init_lcd(void)
{
    MI_U32 r = 0;
    uint32_t size = 819200;

    trace("call %s()\n", __func__);

    MI_SYS_Init();
    MI_GFX_Open();

    myvideo.fb.fd = open("/dev/fb0", O_RDWR);
    if (myvideo.fb.fd < 0) {
        fatal("failed to open /dev/fb0\n");
    }

    ioctl(myvideo.fb.fd, FBIOGET_FSCREENINFO, &myvideo.fb.fix_info);
    ioctl(myvideo.fb.fd, FBIOGET_VSCREENINFO, &myvideo.fb.var_info);

    myvideo.fb.var_info.yoffset = 0;
    myvideo.fb.var_info.yres_virtual = myvideo.fb.var_info.yres * 2;
    ioctl(myvideo.fb.fd, FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);

    myvideo.fb.phy_addr = myvideo.fb.fix_info.smem_start;
    MI_SYS_MemsetPa(myvideo.fb.phy_addr, 0, SCREEN_BUF_SIZEx2);
    MI_SYS_Mmap(myvideo.fb.phy_addr, myvideo.fb.fix_info.smem_len, &myvideo.fb.virt_addr, TRUE);
    memset(&myvideo.gfx.opt, 0, sizeof(myvideo.gfx.opt));

    size = SCREEN_BUF_SIZE;
    r = MI_SYS_MMA_Alloc(NULL, size, &myvideo.tmp.phy_addr);
    if (r) {
        fatal("failed to allocate memory for tmp.phy_addr (size=%d)\n", size);
    }
    MI_SYS_Mmap(myvideo.tmp.phy_addr, size, &myvideo.tmp.virt_addr, TRUE);

    alloc_lcd_mem();

    myvideo.sar_fd = open("/dev/sar", O_RDWR);
    trace("sar handle=%d\n", myvideo.sar_fd);

    return 0;
}

static int quit_lcd(void)
{
    trace("call %s()\n", __func__);

    if (myvideo.fb.virt_addr) {
        MI_SYS_Munmap(myvideo.fb.virt_addr, SCREEN_BUF_SIZEx2);
        myvideo.fb.virt_addr = NULL;
    }

    if (myvideo.tmp.virt_addr) {
        MI_SYS_Munmap(myvideo.tmp.virt_addr, SCREEN_BUF_SIZEx2);
        MI_SYS_MMA_Free(myvideo.tmp.phy_addr);

        myvideo.tmp.virt_addr = NULL;
        myvideo.tmp.phy_addr = NULL;
    }

    free_lcd_mem();
    MI_GFX_Close();
    MI_SYS_Exit();

    if (myvideo.fb.fd) {
        myvideo.fb.var_info.yoffset = 0;
        ioctl(myvideo.fb.fd, FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);
        close(myvideo.fb.fd);
        myvideo.fb.fd = -1;
    }

    if (myvideo.sar_fd) {
        close(myvideo.sar_fd);
        myvideo.sar_fd = -1;
    }

    return 0;
}
#endif

static int draw_touch_pen(void *pixels, int width, int pitch)
{
    int w = 28;
    int h = 28;
    int c0 = 0;
    int c1 = 0;
    int x0 = 0;
    int y0 = 0;
    int x1 = 0;
    int y1 = 0;
    int x = 0;
    int y = 0;
    int sub = 0;
    int sw = NDS_W;
    int sh = NDS_H;
    int scale = 1;
    int is_565 = 0;
    uint32_t r = 0;
    uint32_t g = 0;
    uint32_t b = 0;
    uint32_t *s = hex_pen;
    uint16_t *d_565 = (uint16_t *)pixels;
    uint32_t *d_888 = (uint32_t *)pixels;

    trace("call %s(pixel=%p, width=%d, pitch=%d)\n", __func__, pixels, width, pitch);

    if (!pixels) {
        error("pixels is null\n");
        return -1;
    }

    if ((pitch / width) == 2) {
        is_565 = 1;
    }

    if (width == NDS_Wx2) {
        sw = NDS_Wx2;
        sh = NDS_Hx2;
        scale = 2;
    }

    x = (myevent.touch.x * sw) / myevent.touch.max_x;
    y = (myevent.touch.y * sh) / myevent.touch.max_y;

    if (myvideo.touch.pen) {
        w = myvideo.touch.pen->w;
        h = myvideo.touch.pen->h;
        s = myvideo.touch.pen->pixels;
    }

    switch(myconfig.pen.type) {
    case PEN_LT:
        break;
    case PEN_LB:
        y -= (h * scale);
        break;
    case PEN_RT:
        x -= (w * scale);
        break;
    case PEN_RB:
        x -= (w * scale);
        y -= (h * scale);
        break;
    case PEN_CP:
        x -= ((w * scale) >> 1);
        y -= ((h * scale) >> 1);
        break;
    }

#if !defined(UT) && !defined(QX1050)
    asm volatile ("PLD [%0, #128]"::"r" (s));
#endif

    for (c1 = 0; c1 < h; c1++) {

#if !defined(UT) && !defined(QX1050)
        asm volatile ("PLD [%0, #128]"::"r" (d_565));
        asm volatile ("PLD [%0, #128]"::"r" (d_888));
#endif

        for (c0 = 0; c0 < w; c0++) {
            x0 = x1 = (c0 * scale) + x;
            y0 = y1 = (c1 * scale) + (y - sub);

            if (scale == 2) {
                x0 += 1;
                y0 += 1;
            }
            if ((y0 >= 0) && (y0 < sh) && (x0 < sw) && (x0 >= 0)) {
                if (*s) {
                    if (is_565) {
                        r = (*s & 0xf80000) >> 8;
                        g = (*s & 0x00f800) >> 5;
                        b = (*s & 0x0000f8) >> 3;
                        d_565[(y1 * width) + x1] = r | g | b;
                        if (scale == 2) {
                            d_565[((y1 + 0) * width) + (x1 + 1)] = r | g | b;
                            d_565[((y1 + 1) * width) + (x1 + 0)] = r | g | b;
                            d_565[((y1 + 1) * width) + (x1 + 1)] = r | g | b;
                        }
                    }
                    else {
                        d_888[(y1 * width) + x1] = *s;
                        if (scale == 2) {
                            d_888[((y1 + 0) * width) + (x1 + 1)] = *s;
                            d_888[((y1 + 1) * width) + (x1 + 0)] = *s;
                            d_888[((y1 + 1) * width) + (x1 + 1)] = *s;
                        }
                    }
                }
            }
            s += 1;
        }
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_touch_pen)
{
    uint32_t *p = NULL;

    p = malloc(NDS_W * NDS_H * 4);
    TEST_ASSERT_NOT_NULL(p);
    TEST_ASSERT_EQUAL_INT(-1, draw_touch_pen(0, 0, 0));
    TEST_ASSERT_EQUAL_INT(0, draw_touch_pen(p, NDS_W, NDS_W * 4));
    free(p);
}
#endif

int flush_lcd(int id, const void *pixels, SDL_Rect srt, SDL_Rect drt, int pitch)
{
#if !defined(TRIMUI_SMART)
    int cur_filter = myconfig.filter;
#endif

    int cur_mode_sel = myconfig.layout.mode.sel;

#if defined(TRIMUI_SMART)
    int x = 0;
    int y = 0;
    int sw = srt.w;
    int sh = srt.h;
    uint32_t *dst = NULL;
    uint32_t *src = (uint32_t *)pixels;
#endif

#if defined(MINI)
    int copy_mem = 1;
    MI_U16 fence = 0;
    int rgb565 = (pitch / srt.w) == 2 ? 1 : 0;
#endif

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    int tex = (id >= 0) ? id : TEXTURE_TMP;
#endif

#if defined(FLIP)
    float w = SCREEN_W;
    float h = SCREEN_H;
#endif

#if defined(XT894) || defined(XT897) || defined(QX1000)
    const float max_w = WL_WIN_H;
    const float max_h = WL_WIN_W;
#if defined(XT894) || defined(XT897)
    const int scale_w = 720;
    const int scale_h = 540;
#else
    const int scale_w = 1440;
    const int scale_h = 1080;
#endif
    const int margin_w = (max_w - scale_w) / 2.0;
#endif

    trace(
        "call %s(mode=%d, tex=%d, pixels=%p, pitch=%d, srt(%d,%d,%d,%d), drt(%d,%d,%d,%d))\n",
        __func__,
        cur_mode_sel,
        id,
        pixels,
        pitch,
        srt.x,
        srt.y,
        srt.w,
        srt.h,
        drt.x,
        drt.y,
        drt.w,
        drt.h
    );

    if ((pixels == NULL) ||
        (srt.w == 0) ||
        (srt.h == 0) ||
        (drt.w == 0) ||
        (drt.h == 0))
    {
        error("invalid parameter\n");
        return -1;
    }

    if (myvideo.menu.sdl2.enable || myvideo.menu.drastic.enable) {
#if !defined(TRIMUI_SMART)
        cur_filter = FILTER_BLUR;
        cur_mode_sel = LAYOUT_MODE_N3;
#endif
    }

#if defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    trace("myvideo.shm.buf=%p\n", myvideo.shm.buf);

    if (myvideo.shm.buf == MAP_FAILED) {
        error("myvideo.shm.buf is NULL\n");
        return 0;
    }

    myvideo.shm.buf->srt.x = srt.x;
    myvideo.shm.buf->srt.y = srt.y;
    myvideo.shm.buf->srt.w = srt.w;
    myvideo.shm.buf->srt.h = srt.h;

    myvideo.shm.buf->drt.x = drt.x;
    myvideo.shm.buf->drt.y = drt.y;
    myvideo.shm.buf->drt.w = drt.w;
    myvideo.shm.buf->drt.h = drt.h;

    memcpy(myvideo.shm.buf->buf, pixels, srt.h * pitch);

    myvideo.shm.buf->cmd = SHM_CMD_FLUSH;
    myvideo.shm.buf->len = srt.h * pitch;
    myvideo.shm.buf->tex = tex;
    myvideo.shm.buf->pitch = pitch;
    myvideo.shm.buf->alpha = 0;
    if ((cur_mode_sel == LAYOUT_MODE_N0) ||
        (cur_mode_sel == LAYOUT_MODE_N1))
    {
        myvideo.shm.buf->alpha = myconfig.layout.swin.alpha;
    }
    myvideo.shm.buf->layout = cur_mode_sel;
    myvideo.shm.buf->filter = cur_filter;
    trace(
        "send SHM_CMD_FLUSH, tex=%d, layout=%d, pitch=%d, alpha=%d\n",
        tex,
        myconfig.layout.mode.sel,
        pitch,
        myconfig.layout.swin.alpha
    );

    myvideo.shm.buf->valid = 1;
    __clear_cache(
        (uint8_t *)myvideo.shm.buf,
        (uint8_t *)myvideo.shm.buf + sizeof(shm_buf_t)
    );

    while (myvideo.shm.buf->valid) {
        usleep(10);
    }
#endif

#if defined(FLIP)
    if ((id != -1) &&
        ((cur_mode_sel == LAYOUT_MODE_B1) ||
        (cur_mode_sel == LAYOUT_MODE_B3)))
    {
        fg_vertices[5] = (((float)drt.x / w) - 0.5) * 2.0;
        fg_vertices[6] = (((float)drt.y / h) - 0.5) * -2.0;

        fg_vertices[10] = fg_vertices[5];
        fg_vertices[11] = (((float)(drt.y + drt.w) / h) - 0.5) * -2.0;

        fg_vertices[15] = (((float)(drt.x + drt.h) / w) - 0.5) * 2.0;
        fg_vertices[16] = fg_vertices[11];

        fg_vertices[0] = fg_vertices[15];
        fg_vertices[1] = fg_vertices[6];
    }
    else if ((id != -1) &&
        ((cur_mode_sel == LAYOUT_MODE_B0) ||
        (cur_mode_sel == LAYOUT_MODE_B2)))
    {
        fg_vertices[15] = (((float)drt.x / w) - 0.5) * 2.0;
        fg_vertices[16] = (((float)drt.y / h) - 0.5) * -2.0;

        fg_vertices[0] = fg_vertices[15];
        fg_vertices[1] = (((float)(drt.y + drt.w) / h) - 0.5) * -2.0;

        fg_vertices[5] = (((float)(drt.x + drt.h) / w) - 0.5) * 2.0;
        fg_vertices[6] = fg_vertices[1];

        fg_vertices[10] = fg_vertices[5];
        fg_vertices[11] = fg_vertices[16];
    }
    else {
        fg_vertices[0] = (((float)drt.x / w) - 0.5) * 2.0;
        fg_vertices[1] = (((float)drt.y / h) - 0.5) * -2.0;

        fg_vertices[5] = fg_vertices[0];
        fg_vertices[6] = (((float)(drt.y + drt.h) / h) - 0.5) * -2.0;

        fg_vertices[10] = (((float)(drt.x + drt.w) / w) - 0.5) * 2.0;
        fg_vertices[11] = fg_vertices[6];

        fg_vertices[15] = fg_vertices[10];
        fg_vertices[16] = fg_vertices[1];
    }

    if (tex == TEXTURE_TMP) {
        glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[tex]);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexImage2D(
            GL_TEXTURE_2D,
            0,
            GL_RGBA,
            srt.w,
            srt.h,
            0,
            GL_RGBA,
            GL_UNSIGNED_BYTE,
            pixels
        );
    }

    if (((cur_mode_sel == LAYOUT_MODE_N0) || (cur_mode_sel == LAYOUT_MODE_N1)) &&
        (tex == TEXTURE_LCD0))
    {
        glUniform1f(
            myvideo.egl.frag.alpha,
            1.0 - ((float)myconfig.layout.swin.alpha / 10.0)
        );

        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);
    }
    else {
        glUniform1f(myvideo.egl.frag.alpha, 1.0);
    }

    if (cur_filter == FILTER_PIXEL) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    }
    else {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    }

    trace("texture id=%d\n", tex);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[tex]);
    glVertexAttribPointer(
        myvideo.egl.vert.tex_pos,
        3,
        GL_FLOAT,
        GL_FALSE,
        5 * sizeof(GLfloat),
        fg_vertices
    );

    glVertexAttribPointer(
        myvideo.egl.vert.tex_coord,
        2,
        GL_FLOAT,
        GL_FALSE,
        5 * sizeof(GLfloat),
        &fg_vertices[3]
    );

    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

    if (((cur_mode_sel == LAYOUT_MODE_N0) || (cur_mode_sel == LAYOUT_MODE_N1)) &&
        (tex == TEXTURE_LCD0))
    {
        glUniform1f(myvideo.egl.frag.alpha, 0.0);
        glDisable(GL_BLEND);
    }
    else {
        glUniform1f(myvideo.egl.frag.alpha, 1.0);
    }
#endif

#if defined(XT894) || defined(XT897) || defined(QX1000)
#if defined(XT894)
    if (id == TEXTURE_TMP) {
        int cc = 0;
        uint32_t *p = (uint32_t *)pixels;

        for (cc = 0; cc < (srt.w * srt.h); cc++) {
            p[cc] = (p[cc] | 0xff000000);
        }
    }
#endif

    if ((myvideo.menu.sdl2.enable) || (myvideo.menu.drastic.enable)) {
        if ((srt.w == LAYOUT_BG_W) && (srt.h == LAYOUT_BG_H)) {
            drt.x = margin_w;
            drt.y = 0;
            drt.w = scale_w;
            drt.h = scale_h;
        }
    }

    glUniform4f(myvideo.egl.frag.screen, drt.h, drt.w, 1.0 / drt.h, 1.0 / drt.w);

    if ((id != -1) &&
        ((cur_mode_sel == LAYOUT_MODE_B1) ||
        (cur_mode_sel == LAYOUT_MODE_B3)))
    {
        fg_vertices[5] = (((float)drt.x / max_w) - 0.5) * 2.0;
        fg_vertices[6] = (((float)drt.y / max_h) - 0.5) * -2.0;

        fg_vertices[10] = fg_vertices[5];
        fg_vertices[11] = (((float)(drt.y + drt.w) / max_h) - 0.5) * -2.0;

        fg_vertices[15] = (((float)(drt.x + drt.h) / max_w) - 0.5) * 2.0;
        fg_vertices[16] = fg_vertices[11];

        fg_vertices[0] = fg_vertices[15];
        fg_vertices[1] = fg_vertices[6];
    }
    else if ((id != -1) &&
        ((cur_mode_sel == LAYOUT_MODE_B0) ||
        (cur_mode_sel == LAYOUT_MODE_B2)))
    {
        fg_vertices[15] = (((float)drt.x / max_w) - 0.5) * 2.0;
        fg_vertices[16] = (((float)drt.y / max_h) - 0.5) * -2.0;

        fg_vertices[0] = fg_vertices[15];
        fg_vertices[1] = (((float)(drt.y + drt.w) / max_h) - 0.5) * -2.0;

        fg_vertices[5] = (((float)(drt.x + drt.h) / max_w) - 0.5) * 2.0;
        fg_vertices[6] = fg_vertices[1];

        fg_vertices[10] = fg_vertices[5];
        fg_vertices[11] = fg_vertices[16];
    }
    else {
        fg_vertices[0] = (((float)drt.x / max_w) - 0.5) * 2.0;
        fg_vertices[1] = (((float)drt.y / max_h) - 0.5) * -2.0;

        fg_vertices[5] = fg_vertices[0];
        fg_vertices[6] = (((float)(drt.y + drt.h) / max_h) - 0.5) * -2.0;

        fg_vertices[10] = (((float)(drt.x + drt.w) / max_w) - 0.5) * 2.0;
        fg_vertices[11] = fg_vertices[6];

        fg_vertices[15] = fg_vertices[10];
        fg_vertices[16] = fg_vertices[1];
    }

    if (cur_filter == FILTER_PIXEL) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    }
    else {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    }

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

    if (id == TEXTURE_TMP) {
        id = TEXTURE_LCD0;
    }

    if ((!myvideo.menu.sdl2.enable && !myvideo.menu.drastic.enable) &&
#if defined(XT894) || defined(XT897)
        ((cur_mode_sel == LAYOUT_MODE_N0) || (cur_mode_sel == LAYOUT_MODE_N1)) &&
#endif
        (id == TEXTURE_LCD0))
    {
        glUniform1f(
            myvideo.egl.frag.alpha,
            1.0 - ((float)myconfig.layout.swin.alpha / 10.0)
        );

        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);
    }
    else {
        glUniform1f(myvideo.egl.frag.alpha, 1.0);
    }

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[id]);
    glVertexAttribPointer(
        myvideo.egl.vert.tex_pos,
        3,
        GL_FLOAT,
        GL_FALSE,
        5 * sizeof(GLfloat),
        fg_vertices
    );

    glVertexAttribPointer(
        myvideo.egl.vert.tex_coord,
        2,
        GL_FLOAT,
        GL_FALSE,
        5 * sizeof(GLfloat),
        &fg_vertices[3]
    );

    glTexImage2D(
        GL_TEXTURE_2D,
        0,
        GL_RGBA,
        srt.w,
        srt.h,
        0,
        GL_RGBA,
        GL_UNSIGNED_BYTE,
        pixels
    );

    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

    if ((cur_mode_sel == LAYOUT_MODE_N3) && (id == TEXTURE_LCD1)) {
        glUniform1f(myvideo.egl.frag.alpha, 0.0);
        glDisable(GL_BLEND);
    }
    else {
        glUniform1f(myvideo.egl.frag.alpha, 1.0);
    }
#endif

#if defined(PANDORA)
    if ((srt.w == NDS_W) && (srt.h == NDS_H)) {
        uint32_t *dst = (uint32_t *)myvideo.fb.mem[!!myvideo.fb.var_info.yoffset];

        if (drt.y == 0) {
            dst += 16;
            dst += (((SCREEN_H - NDS_Hx2) >> 1) * SCREEN_W);
            asm volatile (
                "0:  add r8, %1, %2         ;"
                "1:  vldmia %0!, {q0-q3}    ;"
                "    vldmia %0!, {q8-q11}   ;"
                "    vdup.32 d15, d7[1]     ;"
                "    vdup.32 d14, d7[0]     ;"
                "    vdup.32 d13, d6[1]     ;"
                "    vdup.32 d12, d6[0]     ;"
                "    vdup.32 d11, d5[1]     ;"
                "    vdup.32 d10, d5[0]     ;"
                "    vdup.32 d9, d4[1]      ;"
                "    vdup.32 d8, d4[0]      ;"
                "    vdup.32 d7, d3[1]      ;"
                "    vdup.32 d6, d3[0]      ;"
                "    vdup.32 d5, d2[1]      ;"
                "    vdup.32 d4, d2[0]      ;"
                "    vdup.32 d3, d1[1]      ;"
                "    vdup.32 d2, d1[0]      ;"
                "    vdup.32 d1, d0[1]      ;"
                "    vdup.32 d0, d0[0]      ;"
                "    vdup.32 d31, d23[1]    ;"
                "    vdup.32 d30, d23[0]    ;"
                "    vdup.32 d29, d22[1]    ;"
                "    vdup.32 d28, d22[0]    ;"
                "    vdup.32 d27, d21[1]    ;"
                "    vdup.32 d26, d21[0]    ;"
                "    vdup.32 d25, d20[1]    ;"
                "    vdup.32 d24, d20[0]    ;"
                "    vdup.32 d23, d19[1]    ;"
                "    vdup.32 d22, d19[0]    ;"
                "    vdup.32 d21, d18[1]    ;"
                "    vdup.32 d20, d18[0]    ;"
                "    vdup.32 d19, d17[1]    ;"
                "    vdup.32 d18, d17[0]    ;"
                "    vdup.32 d17, d16[1]    ;"
                "    vdup.32 d16, d16[0]    ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "    vstmia r8!, {q0-q7}    ;"
                "    vstmia r8!, {q8-q15}   ;"
                "2:  vldmia %0!, {q0-q3}    ;"
                "    vldmia %0!, {q8-q11}   ;"
                "    vdup.32 d15, d7[1]     ;"
                "    vdup.32 d14, d7[0]     ;"
                "    vdup.32 d13, d6[1]     ;"
                "    vdup.32 d12, d6[0]     ;"
                "    vdup.32 d11, d5[1]     ;"
                "    vdup.32 d10, d5[0]     ;"
                "    vdup.32 d9, d4[1]      ;"
                "    vdup.32 d8, d4[0]      ;"
                "    vdup.32 d7, d3[1]      ;"
                "    vdup.32 d6, d3[0]      ;"
                "    vdup.32 d5, d2[1]      ;"
                "    vdup.32 d4, d2[0]      ;"
                "    vdup.32 d3, d1[1]      ;"
                "    vdup.32 d2, d1[0]      ;"
                "    vdup.32 d1, d0[1]      ;"
                "    vdup.32 d0, d0[0]      ;"
                "    vdup.32 d31, d23[1]    ;"
                "    vdup.32 d30, d23[0]    ;"
                "    vdup.32 d29, d22[1]    ;"
                "    vdup.32 d28, d22[0]    ;"
                "    vdup.32 d27, d21[1]    ;"
                "    vdup.32 d26, d21[0]    ;"
                "    vdup.32 d25, d20[1]    ;"
                "    vdup.32 d24, d20[0]    ;"
                "    vdup.32 d23, d19[1]    ;"
                "    vdup.32 d22, d19[0]    ;"
                "    vdup.32 d21, d18[1]    ;"
                "    vdup.32 d20, d18[0]    ;"
                "    vdup.32 d19, d17[1]    ;"
                "    vdup.32 d18, d17[0]    ;"
                "    vdup.32 d17, d16[1]    ;"
                "    vdup.32 d16, d16[0]    ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "    vstmia r8!, {q0-q7}    ;"
                "    vstmia r8!, {q8-q15}   ;"
                "3:  vldmia %0!, {q0-q3}    ;"
                "    vldmia %0!, {q8-q11}   ;"
                "    vdup.32 d15, d7[1]     ;"
                "    vdup.32 d14, d7[0]     ;"
                "    vdup.32 d13, d6[1]     ;"
                "    vdup.32 d12, d6[0]     ;"
                "    vdup.32 d11, d5[1]     ;"
                "    vdup.32 d10, d5[0]     ;"
                "    vdup.32 d9, d4[1]      ;"
                "    vdup.32 d8, d4[0]      ;"
                "    vdup.32 d7, d3[1]      ;"
                "    vdup.32 d6, d3[0]      ;"
                "    vdup.32 d5, d2[1]      ;"
                "    vdup.32 d4, d2[0]      ;"
                "    vdup.32 d3, d1[1]      ;"
                "    vdup.32 d2, d1[0]      ;"
                "    vdup.32 d1, d0[1]      ;"
                "    vdup.32 d0, d0[0]      ;"
                "    vdup.32 d31, d23[1]    ;"
                "    vdup.32 d30, d23[0]    ;"
                "    vdup.32 d29, d22[1]    ;"
                "    vdup.32 d28, d22[0]    ;"
                "    vdup.32 d27, d21[1]    ;"
                "    vdup.32 d26, d21[0]    ;"
                "    vdup.32 d25, d20[1]    ;"
                "    vdup.32 d24, d20[0]    ;"
                "    vdup.32 d23, d19[1]    ;"
                "    vdup.32 d22, d19[0]    ;"
                "    vdup.32 d21, d18[1]    ;"
                "    vdup.32 d20, d18[0]    ;"
                "    vdup.32 d19, d17[1]    ;"
                "    vdup.32 d18, d17[0]    ;"
                "    vdup.32 d17, d16[1]    ;"
                "    vdup.32 d16, d16[0]    ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "    vstmia r8!, {q0-q7}    ;"
                "    vstmia r8!, {q8-q15}   ;"
                "4:  vldmia %0!, {q0-q3}    ;"
                "    vldmia %0!, {q8-q11}   ;"
                "    vdup.32 d15, d7[1]     ;"
                "    vdup.32 d14, d7[0]     ;"
                "    vdup.32 d13, d6[1]     ;"
                "    vdup.32 d12, d6[0]     ;"
                "    vdup.32 d11, d5[1]     ;"
                "    vdup.32 d10, d5[0]     ;"
                "    vdup.32 d9, d4[1]      ;"
                "    vdup.32 d8, d4[0]      ;"
                "    vdup.32 d7, d3[1]      ;"
                "    vdup.32 d6, d3[0]      ;"
                "    vdup.32 d5, d2[1]      ;"
                "    vdup.32 d4, d2[0]      ;"
                "    vdup.32 d3, d1[1]      ;"
                "    vdup.32 d2, d1[0]      ;"
                "    vdup.32 d1, d0[1]      ;"
                "    vdup.32 d0, d0[0]      ;"
                "    vdup.32 d31, d23[1]    ;"
                "    vdup.32 d30, d23[0]    ;"
                "    vdup.32 d29, d22[1]    ;"
                "    vdup.32 d28, d22[0]    ;"
                "    vdup.32 d27, d21[1]    ;"
                "    vdup.32 d26, d21[0]    ;"
                "    vdup.32 d25, d20[1]    ;"
                "    vdup.32 d24, d20[0]    ;"
                "    vdup.32 d23, d19[1]    ;"
                "    vdup.32 d22, d19[0]    ;"
                "    vdup.32 d21, d18[1]    ;"
                "    vdup.32 d20, d18[0]    ;"
                "    vdup.32 d19, d17[1]    ;"
                "    vdup.32 d18, d17[0]    ;"
                "    vdup.32 d17, d16[1]    ;"
                "    vdup.32 d16, d16[0]    ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "    vstmia r8!, {q0-q7}    ;"
                "    vstmia r8!, {q8-q15}   ;"
                "5:  vldmia %0!, {q0-q3}    ;"
                "    vldmia %0!, {q8-q11}   ;"
                "    vdup.32 d15, d7[1]     ;"
                "    vdup.32 d14, d7[0]     ;"
                "    vdup.32 d13, d6[1]     ;"
                "    vdup.32 d12, d6[0]     ;"
                "    vdup.32 d11, d5[1]     ;"
                "    vdup.32 d10, d5[0]     ;"
                "    vdup.32 d9, d4[1]      ;"
                "    vdup.32 d8, d4[0]      ;"
                "    vdup.32 d7, d3[1]      ;"
                "    vdup.32 d6, d3[0]      ;"
                "    vdup.32 d5, d2[1]      ;"
                "    vdup.32 d4, d2[0]      ;"
                "    vdup.32 d3, d1[1]      ;"
                "    vdup.32 d2, d1[0]      ;"
                "    vdup.32 d1, d0[1]      ;"
                "    vdup.32 d0, d0[0]      ;"
                "    vdup.32 d31, d23[1]    ;"
                "    vdup.32 d30, d23[0]    ;"
                "    vdup.32 d29, d22[1]    ;"
                "    vdup.32 d28, d22[0]    ;"
                "    vdup.32 d27, d21[1]    ;"
                "    vdup.32 d26, d21[0]    ;"
                "    vdup.32 d25, d20[1]    ;"
                "    vdup.32 d24, d20[0]    ;"
                "    vdup.32 d23, d19[1]    ;"
                "    vdup.32 d22, d19[0]    ;"
                "    vdup.32 d21, d18[1]    ;"
                "    vdup.32 d20, d18[0]    ;"
                "    vdup.32 d19, d17[1]    ;"
                "    vdup.32 d18, d17[0]    ;"
                "    vdup.32 d17, d16[1]    ;"
                "    vdup.32 d16, d16[0]    ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "    vstmia r8!, {q0-q7}    ;"
                "    vstmia r8!, {q8-q15}   ;"
                "6:  vldmia %0!, {q0-q3}    ;"
                "    vldmia %0!, {q8-q11}   ;"
                "    vdup.32 d15, d7[1]     ;"
                "    vdup.32 d14, d7[0]     ;"
                "    vdup.32 d13, d6[1]     ;"
                "    vdup.32 d12, d6[0]     ;"
                "    vdup.32 d11, d5[1]     ;"
                "    vdup.32 d10, d5[0]     ;"
                "    vdup.32 d9, d4[1]      ;"
                "    vdup.32 d8, d4[0]      ;"
                "    vdup.32 d7, d3[1]      ;"
                "    vdup.32 d6, d3[0]      ;"
                "    vdup.32 d5, d2[1]      ;"
                "    vdup.32 d4, d2[0]      ;"
                "    vdup.32 d3, d1[1]      ;"
                "    vdup.32 d2, d1[0]      ;"
                "    vdup.32 d1, d0[1]      ;"
                "    vdup.32 d0, d0[0]      ;"
                "    vdup.32 d31, d23[1]    ;"
                "    vdup.32 d30, d23[0]    ;"
                "    vdup.32 d29, d22[1]    ;"
                "    vdup.32 d28, d22[0]    ;"
                "    vdup.32 d27, d21[1]    ;"
                "    vdup.32 d26, d21[0]    ;"
                "    vdup.32 d25, d20[1]    ;"
                "    vdup.32 d24, d20[0]    ;"
                "    vdup.32 d23, d19[1]    ;"
                "    vdup.32 d22, d19[0]    ;"
                "    vdup.32 d21, d18[1]    ;"
                "    vdup.32 d20, d18[0]    ;"
                "    vdup.32 d19, d17[1]    ;"
                "    vdup.32 d18, d17[0]    ;"
                "    vdup.32 d17, d16[1]    ;"
                "    vdup.32 d16, d16[0]    ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "    vstmia r8!, {q0-q7}    ;"
                "    vstmia r8!, {q8-q15}   ;"
                "7:  vldmia %0!, {q0-q3}    ;"
                "    vldmia %0!, {q8-q11}   ;"
                "    vdup.32 d15, d7[1]     ;"
                "    vdup.32 d14, d7[0]     ;"
                "    vdup.32 d13, d6[1]     ;"
                "    vdup.32 d12, d6[0]     ;"
                "    vdup.32 d11, d5[1]     ;"
                "    vdup.32 d10, d5[0]     ;"
                "    vdup.32 d9, d4[1]      ;"
                "    vdup.32 d8, d4[0]      ;"
                "    vdup.32 d7, d3[1]      ;"
                "    vdup.32 d6, d3[0]      ;"
                "    vdup.32 d5, d2[1]      ;"
                "    vdup.32 d4, d2[0]      ;"
                "    vdup.32 d3, d1[1]      ;"
                "    vdup.32 d2, d1[0]      ;"
                "    vdup.32 d1, d0[1]      ;"
                "    vdup.32 d0, d0[0]      ;"
                "    vdup.32 d31, d23[1]    ;"
                "    vdup.32 d30, d23[0]    ;"
                "    vdup.32 d29, d22[1]    ;"
                "    vdup.32 d28, d22[0]    ;"
                "    vdup.32 d27, d21[1]    ;"
                "    vdup.32 d26, d21[0]    ;"
                "    vdup.32 d25, d20[1]    ;"
                "    vdup.32 d24, d20[0]    ;"
                "    vdup.32 d23, d19[1]    ;"
                "    vdup.32 d22, d19[0]    ;"
                "    vdup.32 d21, d18[1]    ;"
                "    vdup.32 d20, d18[0]    ;"
                "    vdup.32 d19, d17[1]    ;"
                "    vdup.32 d18, d17[0]    ;"
                "    vdup.32 d17, d16[1]    ;"
                "    vdup.32 d16, d16[0]    ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "    vstmia r8!, {q0-q7}    ;"
                "    vstmia r8!, {q8-q15}   ;"
                "8:  vldmia %0!, {q0-q3}    ;"
                "    vldmia %0!, {q8-q11}   ;"
                "    vdup.32 d15, d7[1]     ;"
                "    vdup.32 d14, d7[0]     ;"
                "    vdup.32 d13, d6[1]     ;"
                "    vdup.32 d12, d6[0]     ;"
                "    vdup.32 d11, d5[1]     ;"
                "    vdup.32 d10, d5[0]     ;"
                "    vdup.32 d9, d4[1]      ;"
                "    vdup.32 d8, d4[0]      ;"
                "    vdup.32 d7, d3[1]      ;"
                "    vdup.32 d6, d3[0]      ;"
                "    vdup.32 d5, d2[1]      ;"
                "    vdup.32 d4, d2[0]      ;"
                "    vdup.32 d3, d1[1]      ;"
                "    vdup.32 d2, d1[0]      ;"
                "    vdup.32 d1, d0[1]      ;"
                "    vdup.32 d0, d0[0]      ;"
                "    vdup.32 d31, d23[1]    ;"
                "    vdup.32 d30, d23[0]    ;"
                "    vdup.32 d29, d22[1]    ;"
                "    vdup.32 d28, d22[0]    ;"
                "    vdup.32 d27, d21[1]    ;"
                "    vdup.32 d26, d21[0]    ;"
                "    vdup.32 d25, d20[1]    ;"
                "    vdup.32 d24, d20[0]    ;"
                "    vdup.32 d23, d19[1]    ;"
                "    vdup.32 d22, d19[0]    ;"
                "    vdup.32 d21, d18[1]    ;"
                "    vdup.32 d20, d18[0]    ;"
                "    vdup.32 d19, d17[1]    ;"
                "    vdup.32 d18, d17[0]    ;"
                "    vdup.32 d17, d16[1]    ;"
                "    vdup.32 d16, d16[0]    ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "    vstmia r8!, {q0-q7}    ;"
                "    vstmia r8!, {q8-q15}   ;"
                "    add %1, %1, #1152      ;"
                "    add %1, %1, %2         ;"
                "    subs %3, #1            ;"
                "    bne 0b                 ;"
                :
                : "r"(pixels), "r"(dst), "r"(800 * 4), "r"(NDS_H)
                : "r8", "q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9", "q10", "q11", "q12", "q13", "q14", "q15", "memory", "cc"
            );
        }
        else {
            dst += (((SCREEN_H - NDS_H) >> 1) * SCREEN_W) + 1;
            asm volatile (
                "0:  add %1, %1, #2112      ;"
                "1:  vldmia %0!, {q0-q7}    ;"
                "    vldmia %0!, {q8-q15}   ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "2:  vldmia %0!, {q0-q7}    ;"
                "    vldmia %0!, {q8-q15}   ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "3:  vldmia %0!, {q0-q7}    ;"
                "    vldmia %0!, {q8-q15}   ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "4:  vldmia %0!, {q0-q7}    ;"
                "    vldmia %0!, {q8-q15}   ;"
                "    vstmia %1!, {q0-q7}    ;"
                "    vstmia %1!, {q8-q15}   ;"
                "    add %1, %1, #64        ;"
                "    subs %2, #1            ;"
                "    bne 0b                 ;"
                :
                : "r"(pixels), "r"(dst), "r"(NDS_H)
                : "r8", "q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9", "q10", "q11", "q12", "q13", "q14", "q15", "memory", "cc"
            );
        }
    }
    else if ((srt.w == LAYOUT_BG_W) && (srt.h == LAYOUT_BG_H)) {
        memcpy(myvideo.fb.mem[myvideo.fb.cur_idx], pixels, srt.w * srt.h * 4);
        trace("copied menu pixels to /dev/fb%d\n", myvideo.fb.cur_idx + 1);
    }
#endif

#if defined(TRIMUI_SMART)
    if ((pitch / srt.w) != 4) {
        error("only support in ARGB8888 format\n");
        return -1;
    }

    if((srt.w == NDS_W) && (srt.h == NDS_H)) {
        trace("copy pixels by using LUT method for resolution of %dx%d\n", srt.w, srt.h);

        if (cur_mode_sel == LAYOUT_MODE_N2) {
            dst = myvideo.fb.flip ? LUT_256x192_N21 : LUT_256x192_N20;
        }
        else {
            dst = myvideo.fb.flip ? LUT_256x192_N31 : LUT_256x192_N30;
        }

        asm volatile (
            "1:  vldmia %0!, {q0-q7}   ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s0, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s1, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s2, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s3, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s4, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s5, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s6, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s7, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s8, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s9, [r8]         ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s10, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s11, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s12, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s13, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s14, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s15, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s16, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s17, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s18, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s19, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s20, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s21, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s22, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s23, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s24, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s25, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s26, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s27, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s28, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s29, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s30, [r8]        ;"
            "    ldr r8, [%1], #4      ;"
            "    vstr s31, [r8]        ;"
            "    subs %2, #1            ;"
            "    bne 1b                 ;"
            :
            : "r"(src), "r"(dst), "r"(8 * NDS_H)
            : "r8", "q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "memory", "cc"
        );
    }
    else if ((srt.w == SCREEN_W) && (srt.h == SCREEN_H)) {
        trace("copy pixels for resolution of %dx%d\n", srt.w, srt.h);

        dst = ((uint32_t *)myvideo.gfx.ion.vadd) + (SCREEN_W * SCREEN_H * myvideo.fb.flip);
        for (y = 0; y < sh; y++) {
            for (x = 0; x < sw; x++) {
                dst[(((sw - 1) - x) * SCREEN_H) + y] = *src++;
            }
        }
    }
    else if ((srt.w == LAYOUT_BG_W) && (srt.h == LAYOUT_BG_H)) {
        trace("copy layout pixels for resolution of %dx%d\n", srt.w, srt.h);

        sw = SCREEN_W;
        sh = SCREEN_H;
        dst = ((uint32_t *)myvideo.gfx.ion.vadd) + (SCREEN_W * SCREEN_H * myvideo.fb.flip);
        for (y = 0; y < sh; y++) {
            for (x = 0; x < sw; x++) {
                dst[(((sw - 1) - x) * SCREEN_H) + y] = *src;
                src += 2;
            }
            src += srt.w;
        }
    }
    else {
        error("not support in resolution (src:%xx%d, dst:%dx%d)\n", srt.w, srt.h, drt.w, drt.h);
        return -1;
    }
#endif

#if defined(MINI)
    myvideo.gfx.src.surf.phyAddr = NULL;
    if (pixels == myvideo.lcd.virt_addr[0][0]) {
        myvideo.gfx.src.surf.phyAddr = myvideo.lcd.phy_addr[0][0];
    }
    else if (pixels == myvideo.lcd.virt_addr[0][1]) {
        myvideo.gfx.src.surf.phyAddr = myvideo.lcd.phy_addr[0][1];
    }
    else if (pixels == myvideo.lcd.virt_addr[1][0]) {
        myvideo.gfx.src.surf.phyAddr = myvideo.lcd.phy_addr[1][0];
    }
    if (pixels == myvideo.lcd.virt_addr[1][1]) {
        myvideo.gfx.src.surf.phyAddr = myvideo.lcd.phy_addr[1][1];
    }
    trace("GFX PhyAddr=%p\n", myvideo.gfx.src.surf.phyAddr);

    if ((id == TEXTURE_LCD0) &&
        ((cur_mode_sel == LAYOUT_MODE_N0) ||
        (cur_mode_sel == LAYOUT_MODE_N1)))
    {
        if (myconfig.layout.swin.alpha > 0) {
            float m0 = (float)myconfig.layout.swin.alpha / 10;
            float m1 = 1.0 - m0;
            uint32_t *d = myvideo.tmp.virt_addr;
            int x = 0;
            int y = 0;
            int ax = 0;
            int ay = 0;
            int sw = 0;
            int sh = 0;
            uint32_t r0 = 0;
            uint32_t g0 = 0;
            uint32_t b0 = 0;
            uint32_t r1 = 0;
            uint32_t g1 = 0;
            uint32_t b1 = 0;
            const uint32_t *s0 = myvideo.fb.virt_addr + (SCREEN_W * myvideo.fb.var_info.yoffset * 4);
            const uint16_t *s1_565 = pixels;
            const uint32_t *s1_888 = pixels;

            switch (cur_mode_sel) {
            case LAYOUT_MODE_N0:
                sw = 170;
                sh = 128;
                break;
            case LAYOUT_MODE_N1:
                sw = srt.w;
                sh = srt.h;
                break;
            }

            ay = 0;
            for (y = 0; y < sh; y++) {
                switch (cur_mode_sel) {
                case LAYOUT_MODE_N0:
                    if (y && ((y % 2) == 0)) {
                        ay += 1;
                    }
                    break;
                }

                ax = 0;
                for (x = 0; x < sw; x++) {
                    asm ("PLD [%0, #128]"::"r" (s0));
                    if ((myconfig.layout.swin.border) &&
                        ((y == 0) || (y == (sh - 1)) || (x == 0) || (x == (sw - 1))))
                    {
                        *d++ = 0;
                    }
                    else {
                        switch (cur_mode_sel) {
                        case LAYOUT_MODE_N0:
                            if (x && ((x % 2) == 0)) {
                                ax += 1;
                            }
                            break;
                        }

                        if (rgb565) {
                            asm ("PLD [%0, #128]"::"r" (s1_565));
                            r1 = (s1_565[((y + ay) * srt.w) + x + ax] & 0xf800) >> 8;
                            g1 = (s1_565[((y + ay) * srt.w) + x + ax] & 0x07e0) >> 3;
                            b1 = (s1_565[((y + ay) * srt.w) + x + ax] & 0x001f) << 3;
                        }
                        else {
                            asm ("PLD [%0, #128]"::"r" (s1_888));
                            r1 = (s1_888[((y + ay) * srt.w) + x + ax] & 0xff0000) >> 16;
                            g1 = (s1_888[((y + ay) * srt.w) + x + ax] & 0x00ff00) >> 8;
                            b1 = (s1_888[((y + ay) * srt.w) + x + ax] & 0x0000ff) >> 0;
                        }

                        switch (myconfig.layout.swin.pos % 4) {
                        case 0:
                            r0 = (s0[((sh - y + (SCREEN_H - sh) - 1) * SCREEN_W) + (sw - x - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y + (SCREEN_H - sh) - 1) * SCREEN_W) + (sw - x - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y + (SCREEN_H - sh) - 1) * SCREEN_W) + (sw - x - 1)] & 0x0000ff) >> 0;
                            break;
                        case 1:
                            r0 = (s0[((sh - y + (SCREEN_H - sh) - 1) * SCREEN_W) + (sw - x + (SCREEN_W - sw) - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y + (SCREEN_H - sh) - 1) * SCREEN_W) + (sw - x + (SCREEN_W - sw) - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y + (SCREEN_H - sh) - 1) * SCREEN_W) + (sw - x + (SCREEN_W - sw) - 1)] & 0x0000ff) >> 0;
                            break;
                        case 2:
                            r0 = (s0[((sh - y - 1) * SCREEN_W) + (sw - x + (SCREEN_W - sw) - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y - 1) * SCREEN_W) + (sw - x + (SCREEN_W - sw) - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y - 1) * SCREEN_W) + (sw - x + (SCREEN_W - sw) - 1)] & 0x0000ff) >> 0;
                            break;
                        case 3:
                            r0 = (s0[((sh - y - 1) * SCREEN_W) + (sw - x - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y - 1) * SCREEN_W) + (sw - x - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y - 1) * SCREEN_W) + (sw - x - 1)] & 0x0000ff) >> 0;
                            break;
                        }

                        r0 = (uint8_t)((r0 * m0) + (r1 * m1));
                        g0 = (uint8_t)((g0 * m0) + (g1 * m1));
                        b0 = (uint8_t)((b0 * m0) + (b1 * m1));
                        *d++ = ((r0 << 16) | (g0 << 8) | b0);
                    }
                }

                copy_mem = 0;
            }
        }

        switch (cur_mode_sel) {
        case LAYOUT_MODE_N0:
            drt.w = 170;
            drt.h = 128;
            if (myconfig.layout.swin.alpha > 0) {
                srt.w = drt.w;
                srt.h = drt.h;
                pitch = srt.w * 4;
            }
            break;
        case LAYOUT_MODE_N1:
            drt.w = NDS_W;
            drt.h = NDS_H;
            if (myconfig.layout.swin.alpha > 0) {
                srt.w = drt.w;
                srt.h = drt.h;
                pitch = srt.w * 4;
            }
            break;
        }

        switch (myconfig.layout.swin.pos % 4) {
        case 0:
            drt.x = 0;
            drt.y = SCREEN_H - drt.h;
            break;
        case 1:
            drt.x = SCREEN_W - drt.w;
            drt.y = SCREEN_H - drt.h;
            break;
        case 2:
            drt.x = SCREEN_W - drt.w;
            drt.y = 0;
            break;
        case 3:
            drt.x = 0;
            drt.y = 0;
            break;
        }
    }

    if (copy_mem && (cur_filter == FILTER_PIXEL)) {
        do {
            if (*myhook.var.sdl.screen[0].hires_mode != 0) {
                break;
            }

            if ((srt.w != NDS_W) || (srt.h != NDS_H)) {
                break;
            }

            if (pitch == 1024) {
                asm volatile (
                    "0:  add r8, %1, %2         ;"
                    "1:  vldmia %0!, {q0-q3}    ;"
                    "    vldmia %0!, {q8-q11}   ;"
                    "    vdup.32 d15, d7[1]     ;"
                    "    vdup.32 d14, d7[0]     ;"
                    "    vdup.32 d13, d6[1]     ;"
                    "    vdup.32 d12, d6[0]     ;"
                    "    vdup.32 d11, d5[1]     ;"
                    "    vdup.32 d10, d5[0]     ;"
                    "    vdup.32 d9, d4[1]      ;"
                    "    vdup.32 d8, d4[0]      ;"
                    "    vdup.32 d7, d3[1]      ;"
                    "    vdup.32 d6, d3[0]      ;"
                    "    vdup.32 d5, d2[1]      ;"
                    "    vdup.32 d4, d2[0]      ;"
                    "    vdup.32 d3, d1[1]      ;"
                    "    vdup.32 d2, d1[0]      ;"
                    "    vdup.32 d1, d0[1]      ;"
                    "    vdup.32 d0, d0[0]      ;"
                    "    vdup.32 d31, d23[1]    ;"
                    "    vdup.32 d30, d23[0]    ;"
                    "    vdup.32 d29, d22[1]    ;"
                    "    vdup.32 d28, d22[0]    ;"
                    "    vdup.32 d27, d21[1]    ;"
                    "    vdup.32 d26, d21[0]    ;"
                    "    vdup.32 d25, d20[1]    ;"
                    "    vdup.32 d24, d20[0]    ;"
                    "    vdup.32 d23, d19[1]    ;"
                    "    vdup.32 d22, d19[0]    ;"
                    "    vdup.32 d21, d18[1]    ;"
                    "    vdup.32 d20, d18[0]    ;"
                    "    vdup.32 d19, d17[1]    ;"
                    "    vdup.32 d18, d17[0]    ;"
                    "    vdup.32 d17, d16[1]    ;"
                    "    vdup.32 d16, d16[0]    ;"
                    "    vstmia %1!, {q0-q7}    ;"
                    "    vstmia %1!, {q8-q15}   ;"
                    "    vstmia r8!, {q0-q7}    ;"
                    "    vstmia r8!, {q8-q15}   ;"
                    "2:  vldmia %0!, {q0-q3}    ;"
                    "    vldmia %0!, {q8-q11}   ;"
                    "    vdup.32 d15, d7[1]     ;"
                    "    vdup.32 d14, d7[0]     ;"
                    "    vdup.32 d13, d6[1]     ;"
                    "    vdup.32 d12, d6[0]     ;"
                    "    vdup.32 d11, d5[1]     ;"
                    "    vdup.32 d10, d5[0]     ;"
                    "    vdup.32 d9, d4[1]      ;"
                    "    vdup.32 d8, d4[0]      ;"
                    "    vdup.32 d7, d3[1]      ;"
                    "    vdup.32 d6, d3[0]      ;"
                    "    vdup.32 d5, d2[1]      ;"
                    "    vdup.32 d4, d2[0]      ;"
                    "    vdup.32 d3, d1[1]      ;"
                    "    vdup.32 d2, d1[0]      ;"
                    "    vdup.32 d1, d0[1]      ;"
                    "    vdup.32 d0, d0[0]      ;"
                    "    vdup.32 d31, d23[1]    ;"
                    "    vdup.32 d30, d23[0]    ;"
                    "    vdup.32 d29, d22[1]    ;"
                    "    vdup.32 d28, d22[0]    ;"
                    "    vdup.32 d27, d21[1]    ;"
                    "    vdup.32 d26, d21[0]    ;"
                    "    vdup.32 d25, d20[1]    ;"
                    "    vdup.32 d24, d20[0]    ;"
                    "    vdup.32 d23, d19[1]    ;"
                    "    vdup.32 d22, d19[0]    ;"
                    "    vdup.32 d21, d18[1]    ;"
                    "    vdup.32 d20, d18[0]    ;"
                    "    vdup.32 d19, d17[1]    ;"
                    "    vdup.32 d18, d17[0]    ;"
                    "    vdup.32 d17, d16[1]    ;"
                    "    vdup.32 d16, d16[0]    ;"
                    "    vstmia %1!, {q0-q7}    ;"
                    "    vstmia %1!, {q8-q15}   ;"
                    "    vstmia r8!, {q0-q7}    ;"
                    "    vstmia r8!, {q8-q15}   ;"
                    "3:  vldmia %0!, {q0-q3}    ;"
                    "    vldmia %0!, {q8-q11}   ;"
                    "    vdup.32 d15, d7[1]     ;"
                    "    vdup.32 d14, d7[0]     ;"
                    "    vdup.32 d13, d6[1]     ;"
                    "    vdup.32 d12, d6[0]     ;"
                    "    vdup.32 d11, d5[1]     ;"
                    "    vdup.32 d10, d5[0]     ;"
                    "    vdup.32 d9, d4[1]      ;"
                    "    vdup.32 d8, d4[0]      ;"
                    "    vdup.32 d7, d3[1]      ;"
                    "    vdup.32 d6, d3[0]      ;"
                    "    vdup.32 d5, d2[1]      ;"
                    "    vdup.32 d4, d2[0]      ;"
                    "    vdup.32 d3, d1[1]      ;"
                    "    vdup.32 d2, d1[0]      ;"
                    "    vdup.32 d1, d0[1]      ;"
                    "    vdup.32 d0, d0[0]      ;"
                    "    vdup.32 d31, d23[1]    ;"
                    "    vdup.32 d30, d23[0]    ;"
                    "    vdup.32 d29, d22[1]    ;"
                    "    vdup.32 d28, d22[0]    ;"
                    "    vdup.32 d27, d21[1]    ;"
                    "    vdup.32 d26, d21[0]    ;"
                    "    vdup.32 d25, d20[1]    ;"
                    "    vdup.32 d24, d20[0]    ;"
                    "    vdup.32 d23, d19[1]    ;"
                    "    vdup.32 d22, d19[0]    ;"
                    "    vdup.32 d21, d18[1]    ;"
                    "    vdup.32 d20, d18[0]    ;"
                    "    vdup.32 d19, d17[1]    ;"
                    "    vdup.32 d18, d17[0]    ;"
                    "    vdup.32 d17, d16[1]    ;"
                    "    vdup.32 d16, d16[0]    ;"
                    "    vstmia %1!, {q0-q7}    ;"
                    "    vstmia %1!, {q8-q15}   ;"
                    "    vstmia r8!, {q0-q7}    ;"
                    "    vstmia r8!, {q8-q15}   ;"
                    "4:  vldmia %0!, {q0-q3}    ;"
                    "    vldmia %0!, {q8-q11}   ;"
                    "    vdup.32 d15, d7[1]     ;"
                    "    vdup.32 d14, d7[0]     ;"
                    "    vdup.32 d13, d6[1]     ;"
                    "    vdup.32 d12, d6[0]     ;"
                    "    vdup.32 d11, d5[1]     ;"
                    "    vdup.32 d10, d5[0]     ;"
                    "    vdup.32 d9, d4[1]      ;"
                    "    vdup.32 d8, d4[0]      ;"
                    "    vdup.32 d7, d3[1]      ;"
                    "    vdup.32 d6, d3[0]      ;"
                    "    vdup.32 d5, d2[1]      ;"
                    "    vdup.32 d4, d2[0]      ;"
                    "    vdup.32 d3, d1[1]      ;"
                    "    vdup.32 d2, d1[0]      ;"
                    "    vdup.32 d1, d0[1]      ;"
                    "    vdup.32 d0, d0[0]      ;"
                    "    vdup.32 d31, d23[1]    ;"
                    "    vdup.32 d30, d23[0]    ;"
                    "    vdup.32 d29, d22[1]    ;"
                    "    vdup.32 d28, d22[0]    ;"
                    "    vdup.32 d27, d21[1]    ;"
                    "    vdup.32 d26, d21[0]    ;"
                    "    vdup.32 d25, d20[1]    ;"
                    "    vdup.32 d24, d20[0]    ;"
                    "    vdup.32 d23, d19[1]    ;"
                    "    vdup.32 d22, d19[0]    ;"
                    "    vdup.32 d21, d18[1]    ;"
                    "    vdup.32 d20, d18[0]    ;"
                    "    vdup.32 d19, d17[1]    ;"
                    "    vdup.32 d18, d17[0]    ;"
                    "    vdup.32 d17, d16[1]    ;"
                    "    vdup.32 d16, d16[0]    ;"
                    "    vstmia %1!, {q0-q7}    ;"
                    "    vstmia %1!, {q8-q15}   ;"
                    "    vstmia r8!, {q0-q7}    ;"
                    "    vstmia r8!, {q8-q15}   ;"
                    "5:  vldmia %0!, {q0-q3}    ;"
                    "    vldmia %0!, {q8-q11}   ;"
                    "    vdup.32 d15, d7[1]     ;"
                    "    vdup.32 d14, d7[0]     ;"
                    "    vdup.32 d13, d6[1]     ;"
                    "    vdup.32 d12, d6[0]     ;"
                    "    vdup.32 d11, d5[1]     ;"
                    "    vdup.32 d10, d5[0]     ;"
                    "    vdup.32 d9, d4[1]      ;"
                    "    vdup.32 d8, d4[0]      ;"
                    "    vdup.32 d7, d3[1]      ;"
                    "    vdup.32 d6, d3[0]      ;"
                    "    vdup.32 d5, d2[1]      ;"
                    "    vdup.32 d4, d2[0]      ;"
                    "    vdup.32 d3, d1[1]      ;"
                    "    vdup.32 d2, d1[0]      ;"
                    "    vdup.32 d1, d0[1]      ;"
                    "    vdup.32 d0, d0[0]      ;"
                    "    vdup.32 d31, d23[1]    ;"
                    "    vdup.32 d30, d23[0]    ;"
                    "    vdup.32 d29, d22[1]    ;"
                    "    vdup.32 d28, d22[0]    ;"
                    "    vdup.32 d27, d21[1]    ;"
                    "    vdup.32 d26, d21[0]    ;"
                    "    vdup.32 d25, d20[1]    ;"
                    "    vdup.32 d24, d20[0]    ;"
                    "    vdup.32 d23, d19[1]    ;"
                    "    vdup.32 d22, d19[0]    ;"
                    "    vdup.32 d21, d18[1]    ;"
                    "    vdup.32 d20, d18[0]    ;"
                    "    vdup.32 d19, d17[1]    ;"
                    "    vdup.32 d18, d17[0]    ;"
                    "    vdup.32 d17, d16[1]    ;"
                    "    vdup.32 d16, d16[0]    ;"
                    "    vstmia %1!, {q0-q7}    ;"
                    "    vstmia %1!, {q8-q15}   ;"
                    "    vstmia r8!, {q0-q7}    ;"
                    "    vstmia r8!, {q8-q15}   ;"
                    "6:  vldmia %0!, {q0-q3}    ;"
                    "    vldmia %0!, {q8-q11}   ;"
                    "    vdup.32 d15, d7[1]     ;"
                    "    vdup.32 d14, d7[0]     ;"
                    "    vdup.32 d13, d6[1]     ;"
                    "    vdup.32 d12, d6[0]     ;"
                    "    vdup.32 d11, d5[1]     ;"
                    "    vdup.32 d10, d5[0]     ;"
                    "    vdup.32 d9, d4[1]      ;"
                    "    vdup.32 d8, d4[0]      ;"
                    "    vdup.32 d7, d3[1]      ;"
                    "    vdup.32 d6, d3[0]      ;"
                    "    vdup.32 d5, d2[1]      ;"
                    "    vdup.32 d4, d2[0]      ;"
                    "    vdup.32 d3, d1[1]      ;"
                    "    vdup.32 d2, d1[0]      ;"
                    "    vdup.32 d1, d0[1]      ;"
                    "    vdup.32 d0, d0[0]      ;"
                    "    vdup.32 d31, d23[1]    ;"
                    "    vdup.32 d30, d23[0]    ;"
                    "    vdup.32 d29, d22[1]    ;"
                    "    vdup.32 d28, d22[0]    ;"
                    "    vdup.32 d27, d21[1]    ;"
                    "    vdup.32 d26, d21[0]    ;"
                    "    vdup.32 d25, d20[1]    ;"
                    "    vdup.32 d24, d20[0]    ;"
                    "    vdup.32 d23, d19[1]    ;"
                    "    vdup.32 d22, d19[0]    ;"
                    "    vdup.32 d21, d18[1]    ;"
                    "    vdup.32 d20, d18[0]    ;"
                    "    vdup.32 d19, d17[1]    ;"
                    "    vdup.32 d18, d17[0]    ;"
                    "    vdup.32 d17, d16[1]    ;"
                    "    vdup.32 d16, d16[0]    ;"
                    "    vstmia %1!, {q0-q7}    ;"
                    "    vstmia %1!, {q8-q15}   ;"
                    "    vstmia r8!, {q0-q7}    ;"
                    "    vstmia r8!, {q8-q15}   ;"
                    "7:  vldmia %0!, {q0-q3}    ;"
                    "    vldmia %0!, {q8-q11}   ;"
                    "    vdup.32 d15, d7[1]     ;"
                    "    vdup.32 d14, d7[0]     ;"
                    "    vdup.32 d13, d6[1]     ;"
                    "    vdup.32 d12, d6[0]     ;"
                    "    vdup.32 d11, d5[1]     ;"
                    "    vdup.32 d10, d5[0]     ;"
                    "    vdup.32 d9, d4[1]      ;"
                    "    vdup.32 d8, d4[0]      ;"
                    "    vdup.32 d7, d3[1]      ;"
                    "    vdup.32 d6, d3[0]      ;"
                    "    vdup.32 d5, d2[1]      ;"
                    "    vdup.32 d4, d2[0]      ;"
                    "    vdup.32 d3, d1[1]      ;"
                    "    vdup.32 d2, d1[0]      ;"
                    "    vdup.32 d1, d0[1]      ;"
                    "    vdup.32 d0, d0[0]      ;"
                    "    vdup.32 d31, d23[1]    ;"
                    "    vdup.32 d30, d23[0]    ;"
                    "    vdup.32 d29, d22[1]    ;"
                    "    vdup.32 d28, d22[0]    ;"
                    "    vdup.32 d27, d21[1]    ;"
                    "    vdup.32 d26, d21[0]    ;"
                    "    vdup.32 d25, d20[1]    ;"
                    "    vdup.32 d24, d20[0]    ;"
                    "    vdup.32 d23, d19[1]    ;"
                    "    vdup.32 d22, d19[0]    ;"
                    "    vdup.32 d21, d18[1]    ;"
                    "    vdup.32 d20, d18[0]    ;"
                    "    vdup.32 d19, d17[1]    ;"
                    "    vdup.32 d18, d17[0]    ;"
                    "    vdup.32 d17, d16[1]    ;"
                    "    vdup.32 d16, d16[0]    ;"
                    "    vstmia %1!, {q0-q7}    ;"
                    "    vstmia %1!, {q8-q15}   ;"
                    "    vstmia r8!, {q0-q7}    ;"
                    "    vstmia r8!, {q8-q15}   ;"
                    "8:  vldmia %0!, {q0-q3}    ;"
                    "    vldmia %0!, {q8-q11}   ;"
                    "    vdup.32 d15, d7[1]     ;"
                    "    vdup.32 d14, d7[0]     ;"
                    "    vdup.32 d13, d6[1]     ;"
                    "    vdup.32 d12, d6[0]     ;"
                    "    vdup.32 d11, d5[1]     ;"
                    "    vdup.32 d10, d5[0]     ;"
                    "    vdup.32 d9, d4[1]      ;"
                    "    vdup.32 d8, d4[0]      ;"
                    "    vdup.32 d7, d3[1]      ;"
                    "    vdup.32 d6, d3[0]      ;"
                    "    vdup.32 d5, d2[1]      ;"
                    "    vdup.32 d4, d2[0]      ;"
                    "    vdup.32 d3, d1[1]      ;"
                    "    vdup.32 d2, d1[0]      ;"
                    "    vdup.32 d1, d0[1]      ;"
                    "    vdup.32 d0, d0[0]      ;"
                    "    vdup.32 d31, d23[1]    ;"
                    "    vdup.32 d30, d23[0]    ;"
                    "    vdup.32 d29, d22[1]    ;"
                    "    vdup.32 d28, d22[0]    ;"
                    "    vdup.32 d27, d21[1]    ;"
                    "    vdup.32 d26, d21[0]    ;"
                    "    vdup.32 d25, d20[1]    ;"
                    "    vdup.32 d24, d20[0]    ;"
                    "    vdup.32 d23, d19[1]    ;"
                    "    vdup.32 d22, d19[0]    ;"
                    "    vdup.32 d21, d18[1]    ;"
                    "    vdup.32 d20, d18[0]    ;"
                    "    vdup.32 d19, d17[1]    ;"
                    "    vdup.32 d18, d17[0]    ;"
                    "    vdup.32 d17, d16[1]    ;"
                    "    vdup.32 d16, d16[0]    ;"
                    "    vstmia %1!, {q0-q7}    ;"
                    "    vstmia %1!, {q8-q15}   ;"
                    "    vstmia r8!, {q0-q7}    ;"
                    "    vstmia r8!, {q8-q15}   ;"
                    "    add %1, %1, %2         ;"
                    "    subs %3, #1            ;"
                    "    bne 0b                 ;"
                    :
                    : "r"(pixels), "r"(myvideo.tmp.virt_addr), "r"(NDS_Wx2 * 4), "r"(NDS_H)
                    : "r8", "q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9", "q10", "q11", "q12", "q13", "q14", "q15", "memory", "cc"
                );

                copy_mem = 0;
                srt.x = 0;
                srt.y = 0;
                srt.w = NDS_Wx2;
                srt.h = NDS_Hx2;
                pitch = srt.w * 4;
            }
            else {
                int x = 0, y = 0;
                uint16_t *s0 = NULL;
                uint16_t *s1 = (uint16_t*)pixels;
                uint16_t *d = (uint16_t*)myvideo.tmp.virt_addr;

                trace("Copy pixels from %p to %p\n", s1, d);
                for (y = 0; y < srt.h; y++) {
                    s0 = d;
                    for (x = 0; x < srt.w; x++) {
                        *d++ = *s1;
                        *d++ = *s1++;
                    }
                    neon_memcpy(d, s0, 1024);
                    d += NDS_Wx2;
                }

                copy_mem = 0;
                srt.x = 0;
                srt.y = 0;
                srt.w = NDS_Wx2;
                srt.h = NDS_Hx2;
                pitch = srt.w * 2;
            }
        } while(0);
    }

    if (copy_mem) {
        if (myvideo.gfx.src.surf.phyAddr == NULL) {
            trace("Copy pixles to temp buffer @%p\n", myvideo.tmp.virt_addr);
            neon_memcpy(myvideo.tmp.virt_addr, pixels, srt.h * pitch);
            myvideo.gfx.src.surf.phyAddr = myvideo.tmp.phy_addr;
            MI_SYS_FlushInvCache(myvideo.tmp.virt_addr, pitch * srt.h);
        }
    }
    else {
        trace("Pointer TempAddr@%p to PhyAddr\n", myvideo.tmp.phy_addr);
        myvideo.gfx.src.surf.phyAddr = myvideo.tmp.phy_addr;
        MI_SYS_FlushInvCache(myvideo.tmp.virt_addr, pitch * srt.h);
    }

    myvideo.gfx.opt.u32GlobalSrcConstColor = 0;
    switch (cur_mode_sel) {
    case LAYOUT_MODE_B0:
    case LAYOUT_MODE_B1:
        myvideo.gfx.opt.eRotate = ROTATE_90;
        break;
    case LAYOUT_MODE_B2:
    case LAYOUT_MODE_B3:
        myvideo.gfx.opt.eRotate = ROTATE_270;
        break;
    default:
        myvideo.gfx.opt.eRotate = ROTATE_180;
        break;
    }

    if ((drt.w == 640) && (drt.h == 480)) {
        myvideo.gfx.opt.eRotate = ROTATE_180;
    }
    myvideo.gfx.opt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
    myvideo.gfx.opt.eDstDfbBldOp = 0;
    myvideo.gfx.opt.eDFBBlendFlag = 0;

    myvideo.gfx.src.rt.s32Xpos = srt.x;
    myvideo.gfx.src.rt.s32Ypos = srt.y;
    myvideo.gfx.src.rt.u32Width = srt.w;
    myvideo.gfx.src.rt.u32Height = srt.h;
    myvideo.gfx.src.surf.u32Width = srt.w;
    myvideo.gfx.src.surf.u32Height = srt.h;
    myvideo.gfx.src.surf.u32Stride = pitch;
    myvideo.gfx.src.surf.eColorFmt = rgb565 ? E_MI_GFX_FMT_RGB565 : E_MI_GFX_FMT_ARGB8888;

    myvideo.gfx.dst.rt.s32Xpos = drt.x;
    myvideo.gfx.dst.rt.s32Ypos = drt.y;
    myvideo.gfx.dst.rt.u32Width = drt.w;
    myvideo.gfx.dst.rt.u32Height = drt.h;
    myvideo.gfx.dst.surf.u32Width = SCREEN_W;
    myvideo.gfx.dst.surf.u32Height = SCREEN_H;
    myvideo.gfx.dst.surf.u32Stride = SCREEN_W * 4;
    myvideo.gfx.dst.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    myvideo.gfx.dst.surf.phyAddr = myvideo.fb.phy_addr + (SCREEN_W * myvideo.fb.var_info.yoffset * 4);

    trace("do GFX Blit\n");
    MI_GFX_BitBlit(&myvideo.gfx.src.surf, &myvideo.gfx.src.rt, &myvideo.gfx.dst.surf, &myvideo.gfx.dst.rt, &myvideo.gfx.opt, &fence);

    trace("wait for all done...\n");
    MI_GFX_WaitAllDone(TRUE, fence);
    trace("finished flush LCD\n");

#if 0
    gfx.hw.overlay.surf.phyAddr = gfx.overlay.phyAddr;
    gfx.hw.overlay.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    gfx.hw.overlay.surf.u32Width = FB_W;
    gfx.hw.overlay.surf.u32Height = FB_H;
    gfx.hw.overlay.surf.u32Stride = FB_W * FB_BPP;
    gfx.hw.overlay.rt.s32Xpos = 0;
    gfx.hw.overlay.rt.s32Ypos = 0;
    gfx.hw.overlay.rt.u32Width = FB_W;
    gfx.hw.overlay.rt.u32Height = FB_H;

    gfx.hw.dst.rt.s32Xpos = 0;
    gfx.hw.dst.rt.s32Ypos = 0;
    gfx.hw.dst.rt.u32Width = FB_W;
    gfx.hw.dst.rt.u32Height = FB_H;
    gfx.hw.dst.surf.phyAddr = gfx.fb.phyAddr + (FB_W * gfx.vinfo.yoffset * FB_BPP);

    gfx.hw.opt.u32GlobalSrcConstColor = 0xff000000;
    gfx.hw.opt.eRotate = E_MI_GFX_ROTATE_180;
    gfx.hw.opt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
    gfx.hw.opt.eDstDfbBldOp = E_MI_GFX_DFB_BLD_INVSRCALPHA;
    gfx.hw.opt.eDFBBlendFlag = E_MI_GFX_DFB_BLEND_SRC_PREMULTIPLY | E_MI_GFX_DFB_BLEND_COLORALPHA | E_MI_GFX_DFB_BLEND_ALPHACHANNEL;
    MI_GFX_BitBlit(&gfx.hw.overlay.surf, &gfx.hw.overlay.rt, &gfx.hw.dst.surf, &gfx.hw.dst.rt, &gfx.hw.opt, &u16Fence);
    MI_GFX_WaitAllDone(FALSE, u16Fence);
#endif
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, flush_lcd)
{
    SDL_Rect rt = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, flush_lcd(TEXTURE_TMP, NULL, rt, rt, 0));
}
#endif

static int flip_lcd(void)
{
#if defined(TRIMUI_SMART) || defined(PANDORA)
    int r = 0;
#endif

    trace("call %s()\n", __func__);

#if defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    myvideo.shm.buf->cmd = SHM_CMD_FLIP;
    trace("send SHM_CMD_FLIP\n");

    myvideo.shm.buf->valid = 1;
    __clear_cache((uint8_t *)myvideo.shm.buf, (uint8_t *)myvideo.shm.buf + sizeof(shm_buf_t));
    while (myvideo.shm.buf->valid) {
        usleep(10);
    }
#endif

#if defined(PANDORA)
    trace("flip /dev/fb%d\n", myvideo.fb.cur_idx + 1);
    ioctl(myvideo.fb.fd[myvideo.fb.cur_idx], FBIOPAN_DISPLAY, &myvideo.fb.var_info);
    ioctl(myvideo.fb.fd[myvideo.fb.cur_idx], FBIO_WAITFORVSYNC, &r);
    myvideo.fb.var_info.yoffset ^= myvideo.fb.var_info.yres;
#endif

#if defined(FLIP) || defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
    eglSwapBuffers(myvideo.egl.display, myvideo.egl.surface);

#if defined(FLIP) 
    myvideo.drm.bo = gbm_surface_lock_front_buffer(myvideo.drm.gs);
    drmModeAddFB(myvideo.drm.fd, SCREEN_W, SCREEN_H, 24, 32, gbm_bo_get_stride(myvideo.drm.bo), gbm_bo_get_handle(myvideo.drm.bo).u32, (uint32_t *)&myvideo.drm.fb);
    drmModeSetCrtc(myvideo.drm.fd, myvideo.drm.crtc->crtc_id, myvideo.drm.fb, 0, 0, (uint32_t *)myvideo.drm.conn, 1, &myvideo.drm.crtc->mode);
    if (myvideo.drm.pre_bo) {
        drmModeRmFB(myvideo.drm.fd, myvideo.drm.pre_fb);
        gbm_surface_release_buffer(myvideo.drm.gs, myvideo.drm.pre_bo);
    }
    myvideo.drm.pre_bo = myvideo.drm.bo;
    myvideo.drm.pre_fb = myvideo.drm.fb;
#endif

    if (myvideo.layout.bg) {
        trace("draw bg image\n");

        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[TEXTURE_BG]);
        glVertexAttribPointer(
            myvideo.egl.vert.tex_pos,
            3,
            GL_FLOAT,
            GL_FALSE,
            5 * sizeof(GLfloat),
            bg_vertices
        );

        glVertexAttribPointer(
            myvideo.egl.vert.tex_coord,
            2,
            GL_FLOAT,
            GL_FALSE,
            5 * sizeof(GLfloat),
            &bg_vertices[3]
        );

        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);
    }
#endif

#if defined(MINI)
    ioctl(myvideo.fb.fd, FBIOPAN_DISPLAY, &myvideo.fb.var_info);
    myvideo.fb.var_info.yoffset ^= SCREEN_H;
#endif

#if defined(TRIMUI_SMART)
    myvideo.gfx.buf.info.fb.addr[0] = (uintptr_t)((uint32_t *)myvideo.gfx.ion.padd + (SCREEN_W * SCREEN_H * myvideo.fb.flip));
    myvideo.gfx.mem[OVL_V_TOP_LADD0 >> 2] = myvideo.gfx.buf.info.fb.addr[0];
    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);
    myvideo.fb.flip ^= 1;
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, flip_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, flip_lcd());
}
#endif

static int get_font_width(const char *info)
{
    int w = 0;
    int h = 0;

    trace("call %s(info=%p)\n", __func__, info);

    if (myvideo.menu.font && info) {
        TTF_SizeUTF8(myvideo.menu.font, info, &w, &h);
    }

    return w;
}

#if defined(UT)
TEST(sdl2_video, get_font_width)
{
    TEST_ASSERT_EQUAL_INT(0, get_font_width(0));
}
#endif

static int get_font_height(const char *info)
{
    int w = 0;
    int h = 0;

    trace("call %s(info=%p)\n", __func__, info);

    if (myvideo.menu.font && info) {
        TTF_SizeUTF8(myvideo.menu.font, info, &w, &h);
    }

    return h;
}

#if defined(UT)
TEST(sdl2_video, get_font_height)
{
    TEST_ASSERT_EQUAL_INT(0, get_font_height(0));
}
#endif

const char* l10n(const char *p)
{
    int cc = 0;
    int len = 0;
    char buf[MAX_PATH] = { 0 };

    trace("call %s(p=%p)\n", __func__, p);
    
    if (!p) {
        return p;
    }

    if (myconfig.lang == 0) {
        return p;
    }

    strcpy(buf, p);
    strcat(buf, "=");
    len = strlen(buf);
    if (len >= MAX_PATH) {
        return p;
    }

    for (cc = 0; myvideo.lang.trans[cc]; cc++) {
        if (memcmp(buf, myvideo.lang.trans[cc], len) == 0) {
            return &myvideo.lang.trans[cc][len];
        }
    }

    return p;
}

#if defined(UT)
TEST(sdl2_video, l10n)
{
    TEST_ASSERT_EQUAL_INT(0, l10n(0));
}
#endif

static int draw_info(
    SDL_Surface *dst,
    const char *info,
    int x,
    int y,
    uint32_t fgcolor,
    uint32_t bgcolor)
{
    int w = 0;
    int h = 0;
    int len = 0;
    SDL_Color fg = { 0 };
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    SDL_Surface *t2 = NULL;
    SDL_Rect rt = { 0, 0, 0, 0 };

    trace("call %s(info=%p, x=%d, y=%d)\n", __func__, info, x, y);

    if (!info) {
        error("info is null\n");
        return 0;
    }

    if (!myvideo.menu.font) {
        error("font is null\n");
        return -1;
    }

    len = strlen(info);
    if ((len == 0) || (len >= MAX_PATH)) {
        error("invalid len(%d)\n", len);
        return -1;
    }

    fg.r = (fgcolor >> 16) & 0xff;
    fg.g = (fgcolor >> 8) & 0xff;
    fg.b = (fgcolor >> 0) & 0xff;
    TTF_SizeUTF8(myvideo.menu.font, info, &w, &h);

    t0 = TTF_RenderUTF8_Solid(myvideo.menu.font, info, fg);
    if (!t0) {
        error("failed to render utf8\n");
        return -1;
    }

    if (dst == NULL) {
        t1 = SDL_CreateRGBSurface(SDL_SWSURFACE, t0->w, t0->h, 32, 0, 0, 0, 0);
        if (t1) {
            SDL_FillRect(t1, &t1->clip_rect, bgcolor);
            SDL_BlitSurface(t0, NULL, t1, NULL);

            t2 = SDL_ConvertSurface(t1, myvideo.cvt->format, 0);
            if (t2) {
                rt.x = x;
                rt.y = y;
                rt.w = t2->w;
                rt.h = t2->h;
                flush_lcd(TEXTURE_TMP, t2->pixels, t2->clip_rect, rt, t2->pitch);
                SDL_FreeSurface(t2);
            }
            SDL_FreeSurface(t1);
        }
    }
    else {
        rt.x = x;
        rt.y = y;
        SDL_BlitSurface(t0, NULL, dst, &rt);
    }
    SDL_FreeSurface(t0);

    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_info)
{
    TEST_ASSERT_EQUAL_INT(0, draw_info(0, 0, 0, 0, 0, 0));
}
#endif

static int free_touch_pen(void)
{
    trace("call %s()\n", __func__);

    if (myvideo.touch.pen) {
        SDL_FreeSurface(myvideo.touch.pen);
        myvideo.touch.pen = NULL;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, free_touch_pen)
{
    myvideo.touch.pen = SDL_CreateRGBSurface(SDL_SWSURFACE, 128, 128, 32, 0, 0, 0, 0);
    TEST_ASSERT_EQUAL_INT(0, free_touch_pen());
    TEST_ASSERT_NULL(myvideo.touch.pen);
}
#endif

int load_touch_pen(void)
{
    int r = -1;
    SDL_Surface *t = NULL;
    char path[MAX_PATH] = { 0 };
    char buf[MAX_PATH + 8] = { 0 };

    trace("call %s()\n", __func__);

    free_touch_pen();
    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, PEN_PATH);

    if (get_path_by_idx(buf, myconfig.pen.sel, path) != 0) {
        error("failed to get file path\n");
        return r;
    }
    trace("touch pen=\"%s\"\n", path);

    t = IMG_Load(path);
    if (!t) {
        error("failed to load touch pen (\"%s\")\n", path);
        return r;
    }

#if defined(FLIP)
    glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[TEXTURE_PEN]);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, t->w, t->h, 0, GL_RGBA, GL_UNSIGNED_BYTE, t->pixels);
#endif

    myvideo.touch.pen = SDL_ConvertSurface(t, myvideo.cvt->format, 0);
    SDL_FreeSurface(t);

    if (strstr(path, "left_top_")) {
        myconfig.pen.type = PEN_LT;
    }
    else if (strstr(path, "right_top_")) {
        myconfig.pen.type = PEN_RT;
    }
    else if (strstr(path, "right_bottom_")) {
        myconfig.pen.type = PEN_RB;
    }
    else if (strstr(path, "left_bottom_")) {
        myconfig.pen.type = PEN_LB;
    }
    else {
        myconfig.pen.type = PEN_CP;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, load_touch_pen)
{
    TEST_ASSERT_EQUAL_INT(0, init_device());
    myconfig.pen.sel = 0;
    TEST_ASSERT_EQUAL_INT(0, load_touch_pen());
    TEST_ASSERT_NOT_NULL(myvideo.touch.pen);
    TEST_ASSERT_EQUAL_INT(0, free_touch_pen());
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

static SDL_Surface* load_menu_img(const char *name, int raw_img)
{
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s(name=\"%s\")\n", __func__, name);

    snprintf(buf, sizeof(buf), "%s%s/%d/%s", myvideo.home, MENU_PATH, myconfig.menu.sel, name);
    t0 = IMG_Load(buf);
    if (!t0) {
        error("failed to load image from \"%s\"\n", buf);
        return NULL;
    }

    if (raw_img) {
        return t0;
    }

    if (myvideo.cvt) {
        t1 = SDL_ConvertSurface(t0, myvideo.cvt->format, 0);
        SDL_FreeSurface(t0);
    }

    return t1;
}

#if defined(UT)
TEST(sdl2_video, load_menu_img)
{
    SDL_Surface *r = NULL;

    TEST_ASSERT_EQUAL_INT(0, init_device());
    r = load_menu_img(SDL2_MENU_BG_FILE, 0);
    TEST_ASSERT_NOT_NULL(r);
    SDL_FreeSurface(r);
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

static int free_menu_res(void)
{
    trace("call %s()\n", __func__);

    if (myvideo.menu.sdl2.bg) {
        SDL_FreeSurface(myvideo.menu.sdl2.bg);
        myvideo.menu.sdl2.bg = NULL;
    }
    if (myvideo.menu.sdl2.cursor) {
        SDL_FreeSurface(myvideo.menu.sdl2.cursor);
        myvideo.menu.sdl2.cursor = NULL;
    }
    if (myvideo.menu.drastic.bg0) {
        SDL_FreeSurface(myvideo.menu.drastic.bg0);
        myvideo.menu.drastic.bg0 = NULL;
    }
    if (myvideo.menu.drastic.bg1) {
        SDL_FreeSurface(myvideo.menu.drastic.bg1);
        myvideo.menu.drastic.bg1 = NULL;
    }
    if (myvideo.menu.drastic.cursor) {
        SDL_FreeSurface(myvideo.menu.drastic.cursor);
        myvideo.menu.drastic.cursor = NULL;
    }
    if (myvideo.menu.drastic.yes) {
        SDL_FreeSurface(myvideo.menu.drastic.yes);
        myvideo.menu.drastic.yes = NULL;
    }
    if (myvideo.menu.drastic.no) {
        SDL_FreeSurface(myvideo.menu.drastic.no);
        myvideo.menu.drastic.no = NULL;
    }
    if (myvideo.menu.drastic.frame) {
        SDL_FreeSurface(myvideo.menu.drastic.frame);
        myvideo.menu.drastic.frame = NULL;
    }
    if (myvideo.menu.font) {
        TTF_CloseFont(myvideo.menu.font);
        myvideo.menu.font = NULL;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, free_menu_res)
{
    TEST_ASSERT_EQUAL_INT(0, free_menu_res());
}
#endif

int load_menu_res(void)
{
#if !defined(UT)
    char buf[MAX_PATH + 32] = { 0 };
#endif

    trace("call %s()\n", __func__);

    free_menu_res();

#if !defined(UT)
    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, FONT_FILE);
    myvideo.menu.font = TTF_OpenFont(buf, FONT_SIZE);
    myvideo.menu.line_h = (float)get_font_height("X") * 1.25;
#endif

#if defined(TRIMUI_SMART)
    myvideo.menu.line_h = 30;
#endif

    myvideo.menu.sdl2.bg = load_menu_img(SDL2_MENU_BG_FILE, 0);
    myvideo.menu.sdl2.cursor = load_menu_img(SDL2_MENU_CURSOR_FILE, 1);

    myvideo.menu.drastic.bg0 = load_menu_img(DRASTIC_MENU_BG0_FILE, 0);
    myvideo.menu.drastic.bg1 = load_menu_img(DRASTIC_MENU_BG1_FILE, 0);
    myvideo.menu.drastic.yes = load_menu_img(DRASTIC_MENU_YES_FILE, 1);
    myvideo.menu.drastic.no = load_menu_img(DRASTIC_MENU_NO_FILE, 1);
    myvideo.menu.drastic.cursor = load_menu_img(DRASTIC_MENU_CURSOR_FILE, 1);

    myvideo.menu.drastic.frame = SDL_CreateRGBSurface(SDL_SWSURFACE, MENU_W, MENU_H, 32, 0, 0, 0, 0);
    if (myvideo.menu.drastic.frame && myvideo.menu.drastic.bg0) {
        SDL_SoftStretch(myvideo.menu.drastic.bg0, NULL, myvideo.menu.drastic.frame, NULL);
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, load_menu_res)
{
    TEST_ASSERT_EQUAL_INT(0, init_device());
    TEST_ASSERT_EQUAL_INT(0, load_menu_res());
    TEST_ASSERT_NOT_NULL(myvideo.menu.sdl2.bg);
    TEST_ASSERT_EQUAL_INT(0, free_menu_res());
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

static int free_bg_image(void)
{
    trace("call %s()\n", __func__);

    if (myvideo.layout.bg) {
        SDL_FreeSurface(myvideo.layout.bg);
        myvideo.layout.bg = NULL;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, free_bg_image)
{
    myvideo.layout.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, 128, 128, 32, 0, 0, 0, 0);
    TEST_ASSERT_EQUAL_INT(0, free_bg_image());
    TEST_ASSERT_NULL(myvideo.layout.bg);
}
#endif

static int load_bg_image(void)
{
    int w = 0;
    int h = 0;
    int cur_bg_sel = -1;
    int cur_mode_sel = -1;
    static int pre_bg = -1;
    static int pre_mode = -1;
    SDL_Surface *t = NULL;
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s()\n", __func__);

    cur_bg_sel = myconfig.layout.bg.sel;
    cur_mode_sel = myconfig.layout.mode.sel;

    if ((pre_bg != cur_bg_sel) || (pre_mode != cur_mode_sel)) {
        pre_bg = cur_bg_sel;
        pre_mode = cur_mode_sel;

        free_bg_image();
        w = myvideo.layout.mode[cur_mode_sel].bg[cur_bg_sel].w;
        h = myvideo.layout.mode[cur_mode_sel].bg[cur_bg_sel].h;

#if defined(XT894) || defined(XT897) || defined(QX1000)
        w = WL_WIN_H;
        h = WL_WIN_W;
#endif

        if ((w == 0) || (h == 0)) {
            w = LAYOUT_BG_W;
            h = LAYOUT_BG_H;
        }

        myvideo.layout.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, w, h, 32, 0, 0, 0, 0);
        if (!myvideo.layout.bg) {
            error("failed to create bg surface\n");
            return -1;
        }
        trace("created background surface, size=%dx%d\n", w, h);

        SDL_FillRect(
            myvideo.layout.bg,
            &myvideo.layout.bg->clip_rect,
            SDL_MapRGB(myvideo.layout.bg->format, 0, 0, 0)
        );

        trace(
            "layout.mode[%d][%d], image=\"%s\"\n",
            cur_bg_sel,
            cur_mode_sel,
            myvideo.layout.mode[cur_mode_sel].bg[cur_bg_sel].path
        );

        if (myvideo.layout.mode[cur_mode_sel].bg[cur_bg_sel].path[0]) {
#if defined(XT894) || defined(XT897) || defined(QX1000)
            SDL_Rect srt = { 0, 0, LAYOUT_BG_W, LAYOUT_BG_H };
            SDL_Rect drt = { 0 };
            SDL_Surface *scale = NULL;
#if defined(XT894) || defined(XT897)
            const int scale_w = 720;
            const int scale_h = 540;
#else
            const int scale_w = 1440;
            const int scale_h = 1080;
#endif
#endif

            snprintf(
                buf,
                sizeof(buf),
                "%s%s/%d/%s",
                myvideo.home,
                BG_PATH,
                cur_bg_sel,
                myvideo.layout.mode[cur_mode_sel].bg[cur_bg_sel].path
            );

            t = IMG_Load(buf);
            if (!t) {
                error("failed to load bg image from \"%s\"\n", buf);
                return -1;
            }
            trace("loaded background image from \"%s\"\n", buf);

            SDL_BlitSurface(t, NULL, myvideo.layout.bg, NULL);
            SDL_FreeSurface(t);

#if defined(XT894) || defined(XT897) || defined(QX1000)
            if (myconfig.layout.mode.sel <= LAYOUT_MODE_B3) {
                scale = SDL_CreateRGBSurface(SDL_SWSURFACE, scale_w, scale_h, 32, 0, 0, 0, 0);
                if (scale) {
                    drt.w = scale_w;
                    drt.h = scale_h;
                    SDL_SoftStretch(myvideo.layout.bg, &srt, scale, &drt);

                    SDL_FillRect(
                        myvideo.layout.bg,
                        &myvideo.layout.bg->clip_rect,
                        SDL_MapRGB(myvideo.layout.bg->format, 0, 0, 0)
                    );

                    srt.w = scale_w;
                    srt.h = scale_h;

                    drt.x = (w - scale_w) >> 1;
                    drt.y = 0;
                    SDL_BlitSurface(scale, &srt, myvideo.layout.bg, &drt);
                    SDL_FreeSurface(scale);
                }
                else {
                    error("failed to create scale surface for background\n");

                    SDL_FillRect(
                        myvideo.layout.bg,
                        &myvideo.layout.bg->clip_rect,
                        SDL_MapRGB(myvideo.layout.bg->format, 0, 0, 0)
                    );
                }
            }
#endif
        }
    }
    else {
        trace("same as previous bg image, do nothing\n");
    }

#if defined(TRIMUI_SMART) || defined(UT)
    if (myconfig.layout.mode.sel == LAYOUT_MODE_N3) {
        return 0;
    }
#endif

#if defined(QX1050) || defined(PANDORA)
    return 0;
#endif

    if (myvideo.layout.bg) {
#if defined(XT894) || defined(XT897) || defined(QX1000) || defined(FLIP)
        glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[TEXTURE_BG]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        glTexImage2D(
            GL_TEXTURE_2D,
            0,
            GL_RGBA,
            myvideo.layout.bg->w,
            myvideo.layout.bg->h,
            0,
            GL_RGBA,
            GL_UNSIGNED_BYTE,
            myvideo.layout.bg->pixels
        );

#endif

#if defined(MINI) || defined(BRICK) || defined(GKD2) || defined(GKDMINI) || defined(PANDORA) || defined(FLIP)
        flush_lcd(
            TEXTURE_BG,
            myvideo.layout.bg->pixels,
            myvideo.layout.bg->clip_rect,
            myvideo.layout.bg->clip_rect,
            myvideo.layout.bg->pitch
        );
#endif

#if defined(TRIMUI_SMART)
        int x = 0;
        int y = 0;
        int z = 0;
        uint32_t *dst = NULL;
        uint32_t *src = NULL;

        ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &z);
        for (z = 0; z < 2; z++) {
            src = (uint32_t *)myvideo.layout.bg->pixels;
            dst = (uint32_t *)myvideo.gfx.ion.vadd + (SCREEN_W * SCREEN_H * z);
            for (y = 0; y < SCREEN_H; y++) {
                for (x = 0; x < SCREEN_W; x++) {
                    dst[(((SCREEN_W - 1) - x) * SCREEN_H) + y] = *src;
                    src += 2;
                }
                src += LAYOUT_BG_W;
            }
        }
        ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &z);
#endif
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, load_bg_image)
{
    TEST_ASSERT_EQUAL_INT(0, load_bg_image());
}
#endif

static void free_device(SDL_VideoDevice *d)
{
    trace("call %s(d=%p)\n", __func__, d);

    SDL_free(d);
}

#if defined(UT)
TEST(sdl2_video, free_device)
{
    free_device(0);
    TEST_PASS();
}
#endif

static int create_window(_THIS, SDL_Window *w)
{
    trace("call %s(w=%d, h=%d)\n", __func__, w->w, w->h);

    myvideo.win = w;
    SDL_SetMouseFocus(w);
    SDL_SetKeyboardFocus(w);
    return 0;
}

#if defined(UT)
TEST(sdl2_video, create_window)
{
    TEST_ASSERT_EQUAL_INT(0, create_window(0, 0));
}
#endif

static int create_window_from(_THIS, SDL_Window *w, const void *d)
{
    trace("call %s()\n", __func__);

    return -1;
}

#if defined(UT)
TEST(sdl2_video, create_window_from)
{
    TEST_ASSERT_EQUAL_INT(-1, create_window_from(0, 0, 0));
}
#endif

static SDL_VideoDevice *create_device(int idx)
{
    SDL_VideoDevice *d = NULL;

    update_debug_level(-1);

    trace("call %s(idx=%d)\n", __func__, idx);

    d = (SDL_VideoDevice *) SDL_calloc(1, sizeof(SDL_VideoDevice));
    if (!d) {
        return NULL;
    }

    d->VideoInit = init_video;
    d->VideoQuit = quit_video;
    d->SetDisplayMode = set_disp_mode;
    d->CreateSDLWindow = create_window;
    d->CreateSDLWindowFrom = create_window_from;
    d->free = free_device;
    d->PumpEvents = pump_event;

    return d;
}

#if defined(UT)
TEST(sdl2_video, create_device)
{
    SDL_VideoDevice *d = NULL;

    d = create_device(0);
    TEST_ASSERT_NOT_NULL(d);
    SDL_free(d);
}
#endif

VideoBootStrap NDS_bootstrap = {
    "NDS",
    "NDS Video Driver",
    create_device
};

static int add_layout_mode(int mode, int cur_bg, const char *fname, int w, int h)
{
#if defined(XT894) || defined(XT897)
    const float scale = 1.125;
    const int max_w = WL_WIN_H;
    const int max_h = WL_WIN_W;
    const int scale_w = 720;
    const int scale_h = 540;
    const int margin_w = (max_w - scale_w) >> 1;
    const int bm_h = 480;
#elif defined(QX1000)
    const float scale = 2.25;
    const int max_w = WL_WIN_H;
    const int max_h = WL_WIN_W;
    const int scale_w = 1440;
    const int scale_h = 1080;
    const int margin_w = (max_w - scale_w) >> 1;
    const int bm_h = 960;
#endif

    trace("call %s(mode=%d, cur_bg=%d, fname=%p, w=%d, h=%d)\n", __func__, mode, cur_bg, fname, w, h);

    memcpy(
        myvideo.layout.mode[mode].screen,
        def_layout_pos[mode],
        sizeof(SDL_Rect) * 2
    );

#if defined(TRIMUI_SMART)
    switch (mode) {
    case LAYOUT_MODE_N2:
        myvideo.layout.mode[mode].screen[0].x = 32;
        myvideo.layout.mode[mode].screen[0].y = 24;
        myvideo.layout.mode[mode].screen[0].w = NDS_W;
        myvideo.layout.mode[mode].screen[0].h = NDS_H;

        myvideo.layout.mode[mode].screen[1].x = 32;
        myvideo.layout.mode[mode].screen[1].y = 24;
        myvideo.layout.mode[mode].screen[1].w = NDS_W;
        myvideo.layout.mode[mode].screen[1].h = NDS_H;
        break;
    case LAYOUT_MODE_N3:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = NDS_W;
        myvideo.layout.mode[mode].screen[0].h = NDS_H;

        myvideo.layout.mode[mode].screen[1].x = 0;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = NDS_W;
        myvideo.layout.mode[mode].screen[1].h = NDS_H;
        break;
    }
#endif

#if defined(XT894) || defined(XT897) || defined(QX1000)
    myvideo.layout.mode[mode].screen[0].x *= scale;
    myvideo.layout.mode[mode].screen[0].y *= scale;
    myvideo.layout.mode[mode].screen[0].w *= scale;
    myvideo.layout.mode[mode].screen[0].h *= scale;

    myvideo.layout.mode[mode].screen[1].x *= scale;
    myvideo.layout.mode[mode].screen[1].y *= scale;
    myvideo.layout.mode[mode].screen[1].w *= scale;
    myvideo.layout.mode[mode].screen[1].h *= scale;

    switch (mode) {
    case LAYOUT_MODE_B0:
        myvideo.layout.mode[mode].screen[0].x = margin_w;
        myvideo.layout.mode[mode].screen[0].y = (scale_h - bm_h) >> 1;
        myvideo.layout.mode[mode].screen[0].w = bm_h;
        myvideo.layout.mode[mode].screen[0].h = scale_w >> 1;

        myvideo.layout.mode[mode].screen[1].x = margin_w + (scale_w >> 1);
        myvideo.layout.mode[mode].screen[1].y = (scale_h - bm_h) >> 1;
        myvideo.layout.mode[mode].screen[1].w = bm_h;
        myvideo.layout.mode[mode].screen[1].h = scale_w >> 1;
        break;
    case LAYOUT_MODE_B1:
        myvideo.layout.mode[mode].screen[0].x = margin_w + (scale_w >> 1);
        myvideo.layout.mode[mode].screen[0].y = (scale_h - bm_h) >> 1;
        myvideo.layout.mode[mode].screen[0].w = bm_h;
        myvideo.layout.mode[mode].screen[0].h = scale_w >> 1;

        myvideo.layout.mode[mode].screen[1].x = margin_w;
        myvideo.layout.mode[mode].screen[1].y = (scale_h - bm_h) >> 1;
        myvideo.layout.mode[mode].screen[1].w = bm_h;
        myvideo.layout.mode[mode].screen[1].h = scale_w >> 1;
        break;
    case LAYOUT_MODE_B2:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = max_h;
        myvideo.layout.mode[mode].screen[0].h = max_w >> 1;

        myvideo.layout.mode[mode].screen[1].x = max_w >> 1;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = max_h;
        myvideo.layout.mode[mode].screen[1].h = max_w >> 1;
        break;
    case LAYOUT_MODE_B3:
        myvideo.layout.mode[mode].screen[0].x = max_w >> 1;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = max_h;
        myvideo.layout.mode[mode].screen[0].h = max_w >> 1;

        myvideo.layout.mode[mode].screen[1].x = 0;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = max_h;
        myvideo.layout.mode[mode].screen[1].h = max_w >> 1;
        break;
    case LAYOUT_MODE_C0:
#if defined(XT894) || defined(XT897)
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].w = 240;
        myvideo.layout.mode[mode].screen[0].h = 180;

        myvideo.layout.mode[mode].screen[1].x = 0;
#else
        myvideo.layout.mode[mode].screen[0].x = margin_w;

        myvideo.layout.mode[mode].screen[1].x = margin_w;
#endif
        break;
    case LAYOUT_MODE_C1:
#if defined(XT894) || defined(XT897)
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 90;
        myvideo.layout.mode[mode].screen[0].w = 480;
        myvideo.layout.mode[mode].screen[0].h = 360;

        myvideo.layout.mode[mode].screen[1].x = 480;
        myvideo.layout.mode[mode].screen[1].y = 90;
        myvideo.layout.mode[mode].screen[1].w = 480;
        myvideo.layout.mode[mode].screen[1].h = 360;
#endif

#if defined(QX1000)
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 135;
        myvideo.layout.mode[mode].screen[0].w = 1080;
        myvideo.layout.mode[mode].screen[0].h = 810;

        myvideo.layout.mode[mode].screen[1].x = 1080;
        myvideo.layout.mode[mode].screen[1].y = 135;
        myvideo.layout.mode[mode].screen[1].w = 1080;
        myvideo.layout.mode[mode].screen[1].h = 810;
#endif
        break;
    case LAYOUT_MODE_C2:
#if defined(XT894) || defined(XT897)
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 78;
        myvideo.layout.mode[mode].screen[0].w = 512;
        myvideo.layout.mode[mode].screen[0].h = 384;

        myvideo.layout.mode[mode].screen[1].x = 512;
        myvideo.layout.mode[mode].screen[1].y = (540 - 336) >> 1;
        myvideo.layout.mode[mode].screen[1].w = 448;
        myvideo.layout.mode[mode].screen[1].h = 336;
#endif

#if defined(QX1000)
        myvideo.layout.mode[mode].screen[0].x = 56;
        myvideo.layout.mode[mode].screen[0].y = 156;
        myvideo.layout.mode[mode].screen[0].w = 256 << 2;
        myvideo.layout.mode[mode].screen[0].h = 192 << 2;

        myvideo.layout.mode[mode].screen[1].x = 56 + 1024;
        myvideo.layout.mode[mode].screen[1].y = 156;
        myvideo.layout.mode[mode].screen[1].w = 256 << 2;
        myvideo.layout.mode[mode].screen[1].h = 192 << 2;
#endif
        break;
    default:
        myvideo.layout.mode[mode].screen[0].x =
            ((max_w - scale_w) >> 1) +
            (scale_w -
            myvideo.layout.mode[mode].screen[0].x -
            myvideo.layout.mode[mode].screen[0].w);

        myvideo.layout.mode[mode].screen[0].y =
            scale_h -
            myvideo.layout.mode[mode].screen[0].y -
            myvideo.layout.mode[mode].screen[0].h;

        myvideo.layout.mode[mode].screen[1].x =
            ((max_w - scale_w) >> 1) +
            (scale_w -
            myvideo.layout.mode[mode].screen[1].x -
            myvideo.layout.mode[mode].screen[1].w);

        myvideo.layout.mode[mode].screen[1].y =
            scale_h -
            myvideo.layout.mode[mode].screen[1].y -
            myvideo.layout.mode[mode].screen[1].h;
        break;
    }
#endif

    if (mode > myvideo.layout.max_mode) {
        myvideo.layout.max_mode = mode;
    }

    myvideo.layout.mode[mode].bg[cur_bg].w = w;
    myvideo.layout.mode[mode].bg[cur_bg].h = h;

    if (fname && fname[0]) {
        strcpy(myvideo.layout.mode[mode].bg[cur_bg].path, fname);
        myvideo.layout.mode[mode].bg[cur_bg].w = LAYOUT_BG_W;
        myvideo.layout.mode[mode].bg[cur_bg].h = LAYOUT_BG_H;
        trace(
            "added bg img=\"%s\"(%dx%d)\n",
            fname,
            myvideo.layout.mode[mode].bg[cur_bg].w,
            myvideo.layout.mode[mode].bg[cur_bg].h
        );
    }
    else {
        myvideo.layout.mode[mode].bg[cur_bg].path[0] = 0;
    }

    trace(
        "layout.mode[%02d].bg[%02d]=\"%s\" %dx%d (%d,%d,%d,%d  %d,%d,%d,%d)\n",
        mode,
        cur_bg,
        myvideo.layout.mode[mode].bg[cur_bg].path,
        myvideo.layout.mode[mode].bg[cur_bg].w,
        myvideo.layout.mode[mode].bg[cur_bg].h,
        myvideo.layout.mode[mode].screen[0].x,
        myvideo.layout.mode[mode].screen[0].y,
        myvideo.layout.mode[mode].screen[0].w,
        myvideo.layout.mode[mode].screen[0].h,
        myvideo.layout.mode[mode].screen[1].x,
        myvideo.layout.mode[mode].screen[1].y,
        myvideo.layout.mode[mode].screen[1].w,
        myvideo.layout.mode[mode].screen[1].h
    );

    return 0;
}

#if defined(UT)
TEST(sdl2_video, add_layout_mode)
{
    TEST_ASSERT_EQUAL_INT(0, add_layout_mode(0, 0, NULL));
}
#endif

static int free_layout_mode(void)
{
    trace("call %s()\n", __func__);

    myvideo.layout.max_mode = 0;
    memset(myvideo.layout.mode, 0, sizeof(myvideo.layout.mode));

#if defined(TRIMUI_SMART)
    add_layout_mode(LAYOUT_MODE_N3, 0, NULL, 0, 0);
#endif

#if !defined(TRIMUI_SMART) && !defined(PANDORA)
    add_layout_mode(LAYOUT_MODE_N0, 0, NULL, 0, 0);
    add_layout_mode(LAYOUT_MODE_N1, 0, NULL, 0, 0);
    add_layout_mode(LAYOUT_MODE_N3, 0, NULL, 0, 0);
    add_layout_mode(LAYOUT_MODE_B2, 0, NULL, 0, 0);
    add_layout_mode(LAYOUT_MODE_B3, 0, NULL, 0, 0);
#endif

#if defined(XT894) || defined(XT897) || defined(QX1000)
    add_layout_mode(LAYOUT_MODE_C0, 0, NULL, 0, 0);
    add_layout_mode(LAYOUT_MODE_C1, 0, NULL, 0, 0);
    add_layout_mode(LAYOUT_MODE_C2, 0, NULL, 0, 0);
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, free_layout_mode)
{
}
#endif

static int enum_bg_file(void)
{
    int w = 0;
    int h = 0;
    int cc = 0;
    int mode = 0;
    int total = 0;
    DIR *d = NULL;
    struct dirent *dir = NULL;
    char buf[MAX_PATH + 32] = { 0 };

    trace("call %s()\n", __func__);

    free_layout_mode();

    total = get_bg_dir_cnt();
    for (cc = 0; cc < total; cc++) {
        snprintf(buf, sizeof(buf), "%s%s/%d", myvideo.home, BG_PATH, cc);
        trace("enum folder=\"%s\"\n", buf);

        d = opendir(buf);
        if (!d) {
            error("failed to open dir \"%s\"\n", buf);
            return -1;
        }

        while ((dir = readdir(d)) != NULL) {
            if (dir->d_type == DT_DIR) {
                continue;
            }
            if (strcmp(dir->d_name, ".") == 0) {
                continue;
            }
            if (strcmp(dir->d_name, "..") == 0) {
                continue;
            }

            w = SCREEN_W;
            h = SCREEN_H;
            if (dir->d_name[0] == 'n') {
                mode = atoi(&dir->d_name[1]) + LAYOUT_MODE_N0;
            }
            else if (dir->d_name[0] == 'b') {
                mode = atoi(&dir->d_name[1]) + LAYOUT_MODE_B0;
            }
            else {
#if defined(XT894)
                int len = strlen(CUSTOME_LAYOUT_XT894_C);
                if (!memcmp(dir->d_name, CUSTOME_LAYOUT_XT894_C, len)) {
                    w = WL_WIN_H;
                    h = WL_WIN_W;
                    mode = atoi(&dir->d_name[len]) + LAYOUT_MODE_C0;
                }
#elif defined(XT897)
                int len = strlen(CUSTOME_LAYOUT_XT897_C);
                if (!memcmp(dir->d_name, CUSTOME_LAYOUT_XT897_C, len)) {
                    w = WL_WIN_H;
                    h = WL_WIN_W;
                    mode = atoi(&dir->d_name[len]) + LAYOUT_MODE_C0;
                }
#else
                continue;
#endif
            }

            trace("layout mode=[%d][%d] (\"%s\") %dx%d\n", cc, mode, dir->d_name, w, h);
            add_layout_mode(mode, cc, dir->d_name, w, h);
        }
        closedir(d);
    }

    return myvideo.layout.max_mode;
}

#if defined(UT)
TEST(sdl2_video, enum_bg_file)
{
    TEST_ASSERT_EQUAL_INT(0, enum_bg_file());
}
#endif

static int init_device(void)
{
    int r = 0;
    char buf[MAX_PATH] = { 0 };

    trace("call %s()\n", __func__);

    getcwd(myvideo.home, sizeof(myvideo.home));
    strcat(myvideo.home, "/");
    trace("home=\"%s\"\n", myvideo.home);

    myvideo.cvt = SDL_CreateRGBSurface(
        SDL_SWSURFACE,
        LAYOUT_BG_W,
        LAYOUT_BG_H,
        32,
        0,
        0,
        0,
        0
    );

    myvideo.mask = -1;
    myvideo.shader = -1;

    load_config(myvideo.home);

    myconfig.pen.max = get_pen_cnt();
    trace("total pen images=%d\n", myconfig.pen.max);

    myconfig.menu.max = get_menu_cnt();
    trace("total menu images=%d\n", myconfig.menu.max);

    enum_lang_file();
    enum_bg_file();

    load_lang_file();
    load_menu_res();
    load_touch_pen();

    //add_layout_mode(LAYOUT_MODE_CUST, 0, NULL, 0, 0);
    //load_mask_file();

#if defined(MINI) || defined(TRIMUI_SMART) || defined(PANDORA)
    //set_autostate(myconfig.autostate.enable, myconfig.autostate.slot);
#endif

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    if (myconfig.cpu_core <= 0) {
        myconfig.cpu_core = INIT_CPU_CORE;
    }

    if (myconfig.cpu_core >= MAX_CPU_CORE) {
        myconfig.cpu_core = INIT_CPU_CORE;
    }

    set_cpu_core(myconfig.cpu_core);
#endif

    init_lcd();
    init_event();
    load_bg_image();
    init_hook(myvideo.home, sysconf(_SC_PAGESIZE), myconfig.state_path);

    r = 0;

#if !defined(NDS_ARM64)
    trace("hook prehook_cb_malloc\n");
    r |= add_prehook(myhook.fun.malloc,  prehook_cb_malloc);
    trace("hook prehook_cb_realloc\n");
    r |= add_prehook(myhook.fun.realloc, prehook_cb_realloc);
    trace("hook prehook_cb_free\n");
    r |= add_prehook(myhook.fun.free,    prehook_cb_free);
#endif

    trace("hook prehook_cb_select_quit\n");
    r |= add_prehook(myhook.fun.select_quit, prehook_cb_select_quit);
    trace("hook prehook_cb_print_string\n");
    r |= add_prehook(myhook.fun.print_string, prehook_cb_print_string);

#if defined(NDS_ARM64)
    trace("hook prehook_cb_print_string_ext\n");
    r |= add_prehook(myhook.fun.print_string_ext, prehook_cb_print_string_ext);
#endif

    trace("hook prehook_cb_update_screen\n");
    r |= add_prehook(myhook.fun.update_screen, prehook_cb_update_screen);
    trace("hook prehook_cb_blit_screen_menu\n");
    r |= add_prehook(myhook.fun.blit_screen_menu, prehook_cb_blit_screen_menu);
    trace("hook prehook_cb_platform_get_input\n");
    r |= add_prehook(myhook.fun.platform_get_input, prehook_platform_get_input);

#if !defined(NDS_ARM64)
    trace("hook prehook_cb_savestate_pre\n");
    r |= add_prehook(myhook.fun.savestate_pre, prehook_cb_savestate_pre);
    trace("hook prehook_cb_savestate_post\n");
    r |= add_prehook(myhook.fun.savestate_post, prehook_cb_savestate_post);
#endif

#if defined(NDS_ARM64)
    if (r) {
        system("touch rerun");
        error("must rerun drastic after patched\n");
        exit(-1);
    }
#endif

    pthread_create(&myvideo.thread.id, NULL, video_handler, NULL);

#if defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
    pthread_create(&myvideo.wl.thread.id, NULL, wl_disp_handler, NULL);
#endif

    strncpy(buf, myvideo.home, sizeof(buf));
    strcat(buf, BIOS_PATH);
    trace("drop bios files to \"%s\"\n", buf);
    if (drop_bios_files(buf) < 0) {
        r = -1;
    }

    if (myconfig.layout.mode.sel > myvideo.layout.max_mode) {
        myconfig.layout.mode.sel = 0;
    }

    return r;
}

#if defined(UT)
TEST(sdl2_video, init_device)
{
    TEST_ASSERT_EQUAL_INT(0, init_device());
    quit_video(0);
}
#endif

static int init_video(_THIS)
{
#if !defined(UT)
    SDL_DisplayMode mode = { 0 };
    SDL_VideoDisplay display = { 0 };
#endif

    trace("call %s()\n", __func__);

#if !defined(UT)
    signal(SIGTERM, sigterm_handler);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 800;
    mode.h = 480;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 800;
    mode.h = 480;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 800;
    mode.h = 600;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 800;
    mode.h = 600;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 480;
    mode.h = 272;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 480;
    mode.h = 272;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 320;
    mode.h = 240;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 320;
    mode.h = 240;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_AddVideoDisplay(&display, SDL_FALSE);
#endif

    TTF_Init();
    init_device();

    return 0;
}

#if defined(UT)
TEST(sdl2_video, init_video)
{
    TEST_ASSERT_EQUAL_INT(0, init_video(0));
    quit_video(0);
}
#endif

static int set_disp_mode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode)
{
    trace("call %s()\n", __func__);
    return 0;
}

#if defined(UT)
TEST(sdl2_video, set_disp_mode)
{
    TEST_ASSERT_EQUAL_INT(0, set_disp_mode(0, 0, 0));
}
#endif

static int quit_device(void)
{
    void *r = NULL;

    trace("call %s()\n", __func__);

    trace("wait for video_handler complete\n");
    myvideo.thread.running = 0;
    pthread_join(myvideo.thread.id, &r);
    trace("completed\n");

    trace("wait for savestate complete\n");
    while (myvideo.state_busy) {
        usleep(1000000);
    }
    trace("completed\n");

    quit_event();
    quit_hook();
    quit_lcd();

    update_config(myvideo.home);
    system("sync");

    free_lang_res();
    free_menu_res();
    free_touch_pen();
    free_bg_image();
    free_layout_mode();

    if (myvideo.fps) {
        SDL_FreeSurface(myvideo.fps);
        myvideo.fps = NULL;
    }

    if (myvideo.cvt) {
        SDL_FreeSurface(myvideo.cvt);
        myvideo.cvt = NULL;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, quit_device)
{
    TEST_ASSERT_EQUAL_INT(0, init_device());
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

static void quit_video(_THIS)
{
    trace("call%s()\n" , __func__);

    quit_device();
    TTF_Quit();
}

#if defined(UT)
TEST(sdl2_video, quit_video)
{
    TEST_ASSERT_EQUAL_INT(0, init_video(0));
    quit_video(0);
}
#endif

static const char* LAYOUT_MODE_STR0[] = {
    "640x480", // N0
    "640x480", // N1
    "512x384", // N2
    "640x480", // N3
    "256x192", // N4
    "320x240", // N5
    "256x192", // N6
    "320x240", // N7
    "480x360", // N8
    "384x288", // N9
    "384x288", // N10
    "512x384", // N11
    "512x384", // N12
    "512x384", // N13
    "384x288", // N14
    "384x288", // N15
    "427x320", // B0
    "427x320", // B1
    "480x320", // B2
    "480x320", // B3

#if defined(XT894) || defined(XT897)
    "640x480", // C1
    "480x360", // C2
    "512x384", // C3
#endif
};

static const char *LAYOUT_MODE_STR1[] = {
    "170x128", // N0
    "256x192", // N1
    "",        // N2
    "",        // N3
    "256x192", // N4
    "320x240", // N5
    "256x192", // N6
    "320x240", // N7
    "160x120", // N8
    "256x192", // N9
    "256x192", // N10
    "128x96",  // N11
    "128x96",  // N12
    "128x96",  // N13
    "256x192", // N14
    "256x192", // N15
    "427x320", // B0
    "427x320", // B1
    "480x320", // B2
    "480x320", // B3

#if defined(XT894) || defined(XT897)
    "240x180", // C0
    "480x360", // C1
    "448x336", // C2
#endif
};

static const char *SWIN_POS_STR[] = {
    "TOP-RIGHT",
    "TOP-LEFT",
    "BOTTOM-LEFT",
    "BOTTOM-RIGHT"
};

static const char *ROTATE_KEY_STR[] = {
    "0°",
    "90°",
    "270°"
};

static const char *BIND_HOTKEY_STR[] = {
    "MENU",
    "SELECT"
};

#if defined(FLIP)
static const char *JOY_MODE_STR[] = {
    "DISABLE",
    "D-PAD",
    "TOUCH",
    "CUSTOM KEY"
};

#if defined(FLIP)
static const char *RJOY_MODE_STR[] = {
    "DISABLE",
    "4-BTN",
    "TOUCH",
    "CUSTOM KEY"
};
#endif

static const char *JOY_CUST_KEY_STR[] = {
    "UP",
    "DOWN",
    "LEFT",
    "RIGHT",
    "A",
    "B",
    "X",
    "Y",
    "L1",
    "R1",
    "L2",
    "R2",
    "SELECT",
    "START"
};
#endif

static int lang_next(void)
{
    int cc = 0;

    trace("call %s()\n", __func__);

    for (cc = myconfig.lang + 1; cc < MAX_LANG_FILE; cc++) {
        if (lang_file_name[cc][0]) {
            myconfig.lang = cc;
            return 0;
        }
    }

    return -1;
}

#if defined(UT)
TEST(sdl2_video, lang_next)
{
    TEST_ASSERT_EQUAL_INT(0, lang_next());
}
#endif

static int lang_prev(void)
{
    int cc = 0;

    trace("call %s()\n", __func__);

    for (cc = myconfig.lang - 1; cc >= 0; cc--) {
        if (lang_file_name[cc][0]) {
            myconfig.lang = cc;
            return 0;
        }
    }

    return -1;
}

#if defined(UT)
TEST(sdl2_video, lang_prev)
{
    TEST_ASSERT_EQUAL_INT(0, lang_prev());
}
#endif

typedef enum {
    MENU_LANG = 0,

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    MENU_CPU,
#endif

#if 0 // defined(MINI)
    MENU_MASK,
#endif

#if defined(XT894) || defined(XT897) || defined(QX1000)
    MENU_SHADER,
#endif

    MENU_LAYOUT_MODE,
    MENU_SWIN_ALPHA,
    MENU_SWIN_BORDER,
    MENU_SWIN_POS,
    MENU_LAYOUT_ATL,

#if 0
    MENU_CUST_IMG,
    MENU_CUST_LCD,
    MENU_CUST_LCD_X,
    MENU_CUST_LCD_Y,
    MENU_CUST_LCD_W,
    MENU_CUST_LCD_H,
#endif

    MENU_ROTATE_KEY,
    MENU_BIND_HOTKEY,
    MENU_SWAP_L1L2,
    MENU_SWAP_R1R2,
    MENU_PEN_SPEED,
    MENU_SHOW_CURSOR,
    MENU_FAST_FORWARD,

#if defined(FLIP)
    MENU_JOY_MODE,
    MENU_JOY_CUST_KEY0,
    MENU_JOY_CUST_KEY1,
    MENU_JOY_CUST_KEY2,
    MENU_JOY_CUST_KEY3,
    MENU_JOY_DZONE,
#endif

#if defined(FLIP)
    MENU_RJOY_MODE,
    MENU_RJOY_CUST_KEY0,
    MENU_RJOY_CUST_KEY1,
    MENU_RJOY_CUST_KEY2,
    MENU_RJOY_CUST_KEY3,
    MENU_RJOY_DZONE,
#endif

    MENU_LOG_LEVEL,
    MENU_LAST,
} menu_list_t;

static const char *MENU_LIST_STR[] = {
    "LANGUAGE",

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    "CPU CORE",
#endif

#if 0 //defined(MINI)
    "MASK",
#endif

#if defined(XT894) || defined(XT897) || defined(QX1000)
    "SHADER",
#endif

    "LAYOUT",
    "ALPHA",
    "BORDER",
    "POSITION",
    "ALTERNATIVE",

#if 0
    "CUST. LAYOUT",
    "  IMAGE",
    "  LCD",
    "    X",
    "    Y",
    "    WIDTH",
    "    HEIGHT",
#endif

    "ROTATE KEY",
    "BIND HOTKEY",
    "SWAP L1-L2",
    "SWAP R1-R2",
    "PEN SPEED",
    "SHOW CURSOR",
    "FAST FORWARD",
#if defined(FLIP)
    "L JOY MODE",
    "  JOY UP",
    "  JOY DOWN",
    "  JOY LEFT",
    "  JOY RIGHT",
    "L JOY DEAD ZONE",
#endif
#if defined(FLIP)
    "R JOY MODE",
    "  JOY UP",
    "  JOY DOWN",
    "  JOY LEFT",
    "  JOY RIGHT",
    "R JOY DEAD ZONE",
#endif

    "DEBUG LOG"
};

static int draw_small_win(int sx, int sy, uint32_t mode, SDL_Surface *surf)
{
    SDL_Rect rt = { 0 };

    trace("call %s(sx=%d, sy=%d, mode=%d, surf=%p)\n", __func__, sx, sy, mode, surf);

    if (!surf) {
        error("d is null\n");
        return -1;
    }

    switch (mode) {
    case LAYOUT_MODE_N0:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
       
        rt.w = 34;
        rt.h = 26;
        switch (myconfig.layout.swin.pos) {
        case 0:
            rt.x = (sx + 128) - rt.w;
            rt.y = sy;
            break;
        case 1:
            rt.x = sx;
            rt.y = sy;
            break;
        case 2:
            rt.x = sx;
            rt.y = (sy + 96) - rt.h;
            break;
        case 3:
            rt.x = (sx + 128) - rt.w;
            rt.y = (sy + 96) - rt.h;
            break;
        }
        SDL_FillRect(
            surf,
            &rt,
            SDL_MapRGB(
                surf->format,
                0x00,
                0x00,
                (30 * myconfig.layout.swin.alpha)
            )
        );
        break;
    case LAYOUT_MODE_N1:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
       
        rt.w = 51;
        rt.h = 38;
        switch (myconfig.layout.swin.pos) {
        case 0:
            rt.x = (sx + 128) - rt.w;
            rt.y = sy;
            break;
        case 1:
            rt.x = sx;
            rt.y = sy;
            break;
        case 2:
            rt.x = sx;
            rt.y = (sy + 96) - rt.h;
            break;
        case 3:
            rt.x = (sx + 128) - rt.w;
            rt.y = (sy + 96) - rt.h;
            break;
        }
        SDL_FillRect(
            surf,
            &rt,
            SDL_MapRGB(
                surf->format,
                0x00,
                0x00,
                (30 * myconfig.layout.swin.alpha)
            )
        );
        break;
    case LAYOUT_MODE_N2:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 102;
        rt.h = 76;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        break;
    case LAYOUT_MODE_N3:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        break;
    case LAYOUT_MODE_N4:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - (rt.h * 2)) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - (rt.h * 2)) / 2) + rt.h;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N5:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 64;
        rt.h = 48;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - (rt.h * 2)) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 64;
        rt.h = 48;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - (rt.h * 2)) / 2) + rt.h;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N6:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - (rt.w * 2)) / 2);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - (rt.w * 2)) / 2) + rt.w;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N7:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 64;
        rt.h = 48;
        rt.x = sx + ((128 - (rt.w * 2)) / 2);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 64;
        rt.h = 48;
        rt.x = sx + ((128 - (rt.w * 2)) / 2) + rt.w;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N8:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 96;
        rt.h = 72;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 32;
        rt.h = 24;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N9:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 77;
        rt.h = 58;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N10:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 96;
        rt.h = 72;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 32;
        rt.h = 24;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N11:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 102;
        rt.h = 77;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 26;
        rt.h = 19;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N12:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 102;
        rt.h = 77;
        rt.x = sx + (128 - rt.w);
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 26;
        rt.h = 19;
        rt.x = sx;
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N13:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 102;
        rt.h = 77;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 26;
        rt.h = 19;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N14:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 77;
        rt.h = 58;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_N15:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 77;
        rt.h = 58;
        rt.x = sx;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_B0:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 64;
        rt.h = 85;
        rt.x = sx;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 64;
        rt.h = 85;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_B1:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));

        rt.w = 64;
        rt.h = 85;
        rt.x = sx;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));

        rt.w = 64;
        rt.h = 85;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        break;
    case LAYOUT_MODE_B2:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));

        rt.w = 64;
        rt.h = 96;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));

        rt.w = 64;
        rt.h = 96;
        rt.x = sx + (128 - rt.w);
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_B3:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));

        rt.w = 64;
        rt.h = 96;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));

        rt.w = 64;
        rt.h = 96;
        rt.x = sx + (128 - rt.w);
        rt.y = sy;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        break;
#if defined(XT894) || defined(XT897)
    case LAYOUT_MODE_C0:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
       
        rt.w = 34;
        rt.h = 26;
        switch (myconfig.layout.swin.pos) {
        case 0:
            rt.x = (sx + 128) - rt.w;
            rt.y = sy;
            break;
        case 1:
            rt.x = sx;
            rt.y = sy;
            break;
        case 2:
            rt.x = sx;
            rt.y = (sy + 96) - rt.h;
            break;
        case 3:
            rt.x = (sx + 128) - rt.w;
            rt.y = (sy + 96) - rt.h;
            break;
        }
        SDL_FillRect(
            surf,
            &rt,
            SDL_MapRGB(
                surf->format,
                0x00,
                0x00,
                (30 * myconfig.layout.swin.alpha)
            )
        );
        break;
    case LAYOUT_MODE_C1:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 64;
        rt.h = 64;
        rt.x = sx + ((128 - (rt.w * 2)) / 2);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 64;
        rt.h = 64;
        rt.x = sx + ((128 - (rt.w * 2)) / 2) + rt.w;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_C2:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x80, 0x00));
        
        rt.w = 68;
        rt.h = 68;
        rt.x = sx;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x80, 0x00, 0x00));
        
        rt.w = 60;
        rt.h = 60;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(surf, &rt, SDL_MapRGB(surf->format, 0x00, 0x00, 0x80));
        break;
#endif
    }
    
    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_small_win)
{
    TEST_ASSERT_EQUAL_INT(-1, draw_small_win(0, 0, 0, 0));
}
#endif

static int apply_sdl2_menu_setting(int cur_sel, int right_key, int is_lr)
{
    int max_mask_count = get_mask_cnt();

#if !defined(MINI)
    //int add = is_lr ? 50 : 1;
    int max_shader_count = get_shader_cnt();
#endif

    trace("call %s(cur_sel=%d, right_key=%d)\n", __func__, cur_sel, right_key);

    if (myvideo.mask >= max_mask_count) {
        myvideo.mask = 0;
    }

#if !defined(MINI)
    if (myvideo.shader >= max_shader_count) {
        myvideo.shader = 0;
    }
#endif

    switch(cur_sel) {
    case MENU_LANG:
        if (right_key) {
            lang_next();
        }
        else {
            lang_prev();
        }
        break;
#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    case MENU_CPU:
        if (right_key) {
            if (myconfig.cpu_core < MAX_CPU_CORE) {
                myconfig.cpu_core += 1;
            }
        }
        else {
            if (myconfig.cpu_core > 1) {
                myconfig.cpu_core -= 1;
            }
        }
        break;
#endif
    case MENU_BIND_HOTKEY:
        myconfig.hotkey = right_key ? HOTKEY_BIND_SELECT : HOTKEY_BIND_MENU;
        break;
    case MENU_SWAP_L1L2:
        myconfig.swap_l1_l2 = right_key;
        break;
    case MENU_SWAP_R1R2:
        myconfig.swap_r1_r2 = right_key;
        break;
    case MENU_LAYOUT_MODE:
        if (right_key) {
            if (myconfig.layout.mode.sel < myvideo.layout.max_mode) {
                myconfig.layout.mode.sel += 1;
            }
        }
        else {
            if (myconfig.layout.mode.sel > 0) {
                myconfig.layout.mode.sel -= 1;
            }
        }
        break;
    case MENU_SWIN_ALPHA:
        if (((myconfig.layout.mode.sel == LAYOUT_MODE_N0) ||
            (myconfig.layout.mode.sel == LAYOUT_MODE_N1)))
        {
            if (right_key) {
                if (myconfig.layout.swin.alpha < NDS_ALPHA_MAX) {
                    myconfig.layout.swin.alpha += 1;
                }
            }
            else {
                if (myconfig.layout.swin.alpha > 0) {
                    myconfig.layout.swin.alpha -= 1;
                }
            }
        }
        break;
    case MENU_SWIN_BORDER:
        if ((myconfig.layout.swin.alpha > 0) &&
            ((myconfig.layout.mode.sel == LAYOUT_MODE_N0) ||
            (myconfig.layout.mode.sel == LAYOUT_MODE_N1)))
        {
            myconfig.layout.swin.border = right_key;
        }
        break;
    case MENU_SWIN_POS:
        if (((myconfig.layout.mode.sel == LAYOUT_MODE_N0) ||
            (myconfig.layout.mode.sel == LAYOUT_MODE_N1)))
        {
            if (right_key) {
                if (myconfig.layout.swin.pos < 3) {
                    myconfig.layout.swin.pos += 1;
                }
            }
            else {
                if (myconfig.layout.swin.pos > 0) {
                    myconfig.layout.swin.pos -= 1;
                }
            }
        }
        break;
    case MENU_LAYOUT_ATL:
        if (right_key) {
            if (myconfig.layout.mode.alt < myvideo.layout.max_mode) {
                myconfig.layout.mode.alt += 1;
            }
        }
        else {
            if (myconfig.layout.mode.alt > 0) {
                myconfig.layout.mode.alt -= 1;
            }
        }
        break;
#if 0 // defined(MINI)
    case MENU_MASK:
        if (right_key) {
            myconfig.layout.overlay.enable = 1;
        }
        else {
            myconfig.layout.overlay.enable = 0;
        }
        break;
#endif

#if 0
    case MENU_CUST_LCD:
        if (right_key) {
            myvideo.layout.overlay.idx = 1;
        }
        else {
            myvideo.layout.overlay.idx = 0;
        }
        break;
    case MENU_CUST_LCD_X:
        if (right_key) {
            if (myconfig.layout.overlay.lcd[ov_idx].x < (SCREEN_W - add)) {
                myconfig.layout.overlay.lcd[ov_idx].x += add;
            }
            else {
                myconfig.layout.overlay.lcd[ov_idx].x = SCREEN_W - 1;
            }
        }
        else {
            if (myconfig.layout.overlay.lcd[ov_idx].x >= add) {
                myconfig.layout.overlay.lcd[ov_idx].x -= add;
            }
            else {
                myconfig.layout.overlay.lcd[ov_idx].x = 0;
            }
        }
        break;
    case MENU_CUST_LCD_Y:
        if (right_key) {
            if (myconfig.layout.overlay.lcd[ov_idx].y < (SCREEN_H - add)) {
                myconfig.layout.overlay.lcd[ov_idx].y += add;
            }
            else {
                myconfig.layout.overlay.lcd[ov_idx].y  = SCREEN_H - 1;
            }
        }
        else {
            if (myconfig.layout.overlay.lcd[ov_idx].y >= add) {
                myconfig.layout.overlay.lcd[ov_idx].y -= add;
            }
            else {
                myconfig.layout.overlay.lcd[ov_idx].y = 0;
            }
        }
        break;
    case MENU_CUST_LCD_W:
        if (right_key) {
            if (myconfig.layout.overlay.lcd[ov_idx].w <= (SCREEN_W - add)) {
                myconfig.layout.overlay.lcd[ov_idx].w += add;
            }
            else {
                myconfig.layout.overlay.lcd[ov_idx].w = SCREEN_W;
            }
        }
        else {
            if (myconfig.layout.overlay.lcd[ov_idx].w > add) {
                myconfig.layout.overlay.lcd[ov_idx].w -= add;
            }
            else {
                myconfig.layout.overlay.lcd[ov_idx].w = 1;
            }
        }
        break;
    case MENU_CUST_LCD_H:
        if (right_key) {
            if (myconfig.layout.overlay.lcd[ov_idx].h <= (SCREEN_H - add)) {
                myconfig.layout.overlay.lcd[ov_idx].h += add;
            }
            else {
                myconfig.layout.overlay.lcd[ov_idx].h = SCREEN_H;
            }
        }
        else {
            if (myconfig.layout.overlay.lcd[ov_idx].h > add) {
                myconfig.layout.overlay.lcd[ov_idx].h -= add;
            }
            else {
                myconfig.layout.overlay.lcd[ov_idx].h = 1;
            }
        }
        break;
#endif

#if 0 //defined(MINI)
    case MENU_MASK:
        if (right_key) {
            if (max_mask_count && (myvideo.mask < (max_mask_count - 1))) {
                myvideo.mask += 1;
            }
        }
        else {
            if (myvideo.mask >= 0) {
                myvideo.mask -= 1;
            }
        }
        break;
#endif

#if defined(XT894) || defined(XT897) || defined(QX1000)
    case MENU_SHADER:
        if (right_key) {
            if (max_shader_count && (myvideo.shader < (max_shader_count - 1))) {
                myvideo.shader += 1;
            }
        }
        else {
            if (myvideo.shader >= 0) {
                myvideo.shader -= 1;
            }
        }
        break;
#endif

    case MENU_ROTATE_KEY:
        if (right_key) {
            if (myconfig.key_rotate < 2) {
                myconfig.key_rotate += 1;
            }
        }
        else {
            if (myconfig.key_rotate > 0) {
                myconfig.key_rotate -= 1;
            }
        }
        break;
    case MENU_PEN_SPEED:
        if (right_key) {
            if (myconfig.pen.speed < 30) {
                myconfig.pen.speed += 1;
            }
        }
        else {
            if (myconfig.pen.speed > 1) {
                myconfig.pen.speed -= 1;
            }
        }
        break;
    case MENU_SHOW_CURSOR:
        myconfig.menu.show_cursor = right_key;
        break;
    case MENU_FAST_FORWARD:
        if (right_key) {
            if (myconfig.fast_forward < 32) {
                myconfig.fast_forward += 1;
            }
        }
        else {
            if (myconfig.fast_forward > 1) {
                myconfig.fast_forward -= 1;
            }
        }
        break;
#if defined(FLIP)
    case MENU_JOY_MODE:
        if (right_key) {
            if (myconfig.joy.mode < MYJOY_MODE_LAST) {
                myconfig.joy.mode += 1;
            }
        }
        else {
            if (myconfig.joy.mode > 0) {
                myconfig.joy.mode -= 1;
            }
        }

        if (myconfig.joy.mode == MYJOY_MODE_TOUCH) {
            if (myevent.mode == NDS_TOUCH_MODE) {
                myevent.mode = NDS_KEY_MODE;
            }
        }
        break;
    case MENU_JOY_CUST_KEY0:
    case MENU_JOY_CUST_KEY1:
    case MENU_JOY_CUST_KEY2:
    case MENU_JOY_CUST_KEY3:
        if (myconfig.joy.mode == MYJOY_MODE_CUST_KEY) {
            if (right_key) {
                if (myconfig.joy.cust_key[cur_sel - MENU_JOY_CUST_KEY0] < 13) {
                    myconfig.joy.cust_key[cur_sel - MENU_JOY_CUST_KEY0] += 1;
                }
            }
            else {
                if (myconfig.joy.cust_key[cur_sel - MENU_JOY_CUST_KEY0] > 0) {
                    myconfig.joy.cust_key[cur_sel - MENU_JOY_CUST_KEY0] -= 1;
                }
            }
        }
        break;
    case MENU_JOY_DZONE:
        if (right_key) {
            if (myconfig.joy.dzone < 255) {
                myconfig.joy.dzone += 1;
            }
        }
        else {
            if (myconfig.joy.dzone > 0) {
                myconfig.joy.dzone -= 1;
            }
        }
        break;
#endif
#if defined(FLIP)
    case MENU_RJOY_MODE:
        if (right_key) {
            if (myconfig.rjoy.mode < MYJOY_MODE_LAST) {
                myconfig.rjoy.mode += 1;
            }
        }
        else {
            if (myconfig.rjoy.mode > 0) {
                myconfig.rjoy.mode -= 1;
            }
        }
        if (myconfig.rjoy.mode == MYJOY_MODE_TOUCH) {
            if (myevent.mode == NDS_TOUCH_MODE) {
                myevent.mode = NDS_KEY_MODE;
            }
        }
        break;
    case MENU_RJOY_CUST_KEY0:
    case MENU_RJOY_CUST_KEY1:
    case MENU_RJOY_CUST_KEY2:
    case MENU_RJOY_CUST_KEY3:
        if (myconfig.rjoy.mode == MYJOY_MODE_CUST_KEY) {
            if (right_key) {
                if (myconfig.rjoy.cust_key[cur_sel - MENU_RJOY_CUST_KEY0] < 13) {
                    myconfig.rjoy.cust_key[cur_sel - MENU_RJOY_CUST_KEY0] += 1;
                }
            }
            else {
                if (myconfig.rjoy.cust_key[cur_sel - MENU_RJOY_CUST_KEY0] > 0) {
                    myconfig.rjoy.cust_key[cur_sel - MENU_RJOY_CUST_KEY0] -= 1;
                }
            }

            if (myconfig.rjoy.mode == MYJOY_MODE_TOUCH) {
                if (myevent.mode == NDS_TOUCH_MODE) {
                    myevent.mode = NDS_KEY_MODE;
                }
            }
        }
        break;
    case MENU_RJOY_DZONE:
        if (right_key) {
            if (myconfig.rjoy.dzone < 255) {
                myconfig.rjoy.dzone += 1;
            }
        }
        else {
            if (myconfig.rjoy.dzone > 0) {
                myconfig.rjoy.dzone -= 1;
            }
        }
        break;
#endif
    case MENU_LOG_LEVEL:
        if (right_key) {
            update_debug_level(TRACE_LEVEL);
        }
        else {
            update_debug_level(ERROR_LEVEL);
        }
        break;
    default:
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, apply_sdl2_menu_setting)
{
    myconfig.layout.mode.alt = 0;
    TEST_ASSERT_EQUAL_INT(0, apply_sdl2_menu_setting(0, MENU_LAYOUT_ATL, 1));
    TEST_ASSERT_EQUAL_INT(1, myconfig.layout.mode.alt);
    TEST_ASSERT_EQUAL_INT(0, apply_sdl2_menu_setting(0, MENU_LAYOUT_ATL, 0));
    TEST_ASSERT_EQUAL_INT(0, myconfig.layout.mode.alt);
}
#endif

static int draw_sdl2_menu_setting(
    int cur_sel,
    int cc,
    int idx,
    int sx,
    int col0,
    int col1)
{
    int cur_mode_sel = 0;
    const int SX = 150;
    const int SY = 107;
    const int SSX = 385;
    char buf[MAX_PATH] = { 0 };

#if !defined(MINI) && !defined(TRIMUI_SMART)
    char tmp[MAX_PATH] = { 0 };
#endif

    trace("call %s(cur_sel=%d, cc=%d, idx=%d, sx=%d)\n", __func__, cur_sel, cc, idx, sx);

    cur_mode_sel = myconfig.layout.mode.sel;

    draw_info(
        myvideo.cvt,
        l10n(MENU_LIST_STR[cc]),
        SX + sx,
        SY + (myvideo.menu.line_h * idx),
        col0,
        0
    );

    sx = 0;
    switch (cc) {
    case MENU_LANG:
        sprintf(buf, "%s", l10n(lang_file_name[myconfig.lang]));
        break;

#if 0 //defined(MINI)
    case MENU_MASK:
        if (get_file_name_by_index(MASK_PATH, myvideo.mask, tmp, 0) >= 0) {
            sprintf(buf, "%s", upper_string(tmp));
        }
        else {
            strcpy(buf, l10n("NONE"));
        }
        break;
#endif

#if defined(XT894) || defined(XT897) || defined(QX1000)
    case MENU_SHADER:
        if (get_file_name_by_index(SHADER_PATH, myvideo.shader, tmp, 0) >= 0) {
            sprintf(buf, "%s", upper_string(tmp));
        }
        else {
            strcpy(buf, l10n("NONE"));
        }
        break;
#endif

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    case MENU_CPU:
        sprintf(buf, "%d", myconfig.cpu_core);
        break;
#endif
    case MENU_BIND_HOTKEY:
        sprintf(buf, "%s", l10n(BIND_HOTKEY_STR[myconfig.hotkey]));
        break;
    case MENU_SWAP_L1L2:
        sprintf(buf, "%s", l10n(myconfig.swap_l1_l2 ? "Yes" : "No"));
        break;
    case MENU_SWAP_R1R2:
        sprintf(buf, "%s", l10n(myconfig.swap_r1_r2 ? "Yes" : "No"));
        break;
    case MENU_LAYOUT_MODE:
        sprintf(
            buf,
            "%s    %s",
            LAYOUT_NAME_STR[cur_mode_sel],
            LAYOUT_MODE_STR0[cur_mode_sel]
        );
        break;
    case MENU_SWIN_ALPHA:
        sprintf(buf, "%s    ", LAYOUT_NAME_STR[cur_mode_sel]);
        sx = get_font_width(buf);
        sprintf(buf, "%s", LAYOUT_MODE_STR1[cur_mode_sel]);
        draw_info(
            myvideo.cvt,
            buf,
            SSX + sx,
            SY + (myvideo.menu.line_h * idx),
            (cur_sel == MENU_LAYOUT_MODE) ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
            0
        );

        sx = 0;
        sprintf(buf, "%d", myconfig.layout.swin.alpha);
        break;
    case MENU_SWIN_BORDER:
        sprintf(buf, "%s", l10n(myconfig.layout.swin.border ? "Yes" : "No"));
        break;
    case MENU_SWIN_POS:
        sprintf(buf, "%s", l10n(SWIN_POS_STR[myconfig.layout.swin.pos]));
        break;
    case MENU_LAYOUT_ATL:
        sprintf(
            buf,
            "%s    %s",
            LAYOUT_NAME_STR[myconfig.layout.mode.alt],
            LAYOUT_MODE_STR0[myconfig.layout.mode.alt]
        );
        break;

#if 0 // defined(MINI)
    case MENU_MASK:
        sx = 0;
        sprintf(buf, "%s", l10n((myconfig.layout.overlay.enable > 0 )? "Yes" : "No"));
        break;
#endif

#if 0
    case MENU_CUST_LCD:
        sprintf(buf, "%d", myvideo.layout.overlay.idx);
        break;
    case MENU_CUST_LCD_X:
        sprintf(buf, "%d", myconfig.layout.overlay.lcd[myvideo.layout.overlay.idx].x);
        break;
    case MENU_CUST_LCD_Y:
        sprintf(buf, "%d", myconfig.layout.overlay.lcd[myvideo.layout.overlay.idx].y);
        break;
    case MENU_CUST_LCD_W:
        sprintf(buf, "%d", myconfig.layout.overlay.lcd[myvideo.layout.overlay.idx].w);
        break;
    case MENU_CUST_LCD_H:
        sprintf(buf, "%d", myconfig.layout.overlay.lcd[myvideo.layout.overlay.idx].h);
        break;
#endif

    case MENU_ROTATE_KEY:
        sprintf(buf, "%s    ", LAYOUT_NAME_STR[myconfig.layout.mode.alt]);
        sx = get_font_width(buf);
        sprintf(buf, "%s", LAYOUT_MODE_STR1[myconfig.layout.mode.alt]);
        draw_info(
            myvideo.cvt,
            buf,
            SSX + sx,
            SY + (myvideo.menu.line_h * idx),
            (cur_sel == MENU_LAYOUT_ATL) ? MENU_COLOR_SEL : MENU_COLOR_UNSEL,
            0
        );

        sx = 0;
        sprintf(buf, "%s", ROTATE_KEY_STR[myconfig.key_rotate % 3]);
        break;
    case MENU_PEN_SPEED:
        sprintf(buf, "%.1fx", ((float)myconfig.pen.speed) / 10);
        break;
    case MENU_SHOW_CURSOR:
        sprintf(buf, "%s", l10n(myconfig.menu.show_cursor ? "Show" : "Hide"));
        break;
    case MENU_FAST_FORWARD:
        sprintf(buf, "%d", myconfig.fast_forward);
        break;
#if defined(FLIP)
    case MENU_JOY_MODE:
        sprintf(buf, "%s", l10n(JOY_MODE_STR[myconfig.joy.mode]));
        break;
    case MENU_JOY_CUST_KEY0:
        sprintf(buf, "MIYOO %s", l10n(JOY_CUST_KEY_STR[myconfig.joy.cust_key[0]]));
        break;
    case MENU_JOY_CUST_KEY1:
        sprintf(buf, "MIYOO %s", l10n(JOY_CUST_KEY_STR[myconfig.joy.cust_key[1]]));
        break;
    case MENU_JOY_CUST_KEY2:
        sprintf(buf, "MIYOO %s", l10n(JOY_CUST_KEY_STR[myconfig.joy.cust_key[2]]));
        break;
    case MENU_JOY_CUST_KEY3:
        sprintf(buf, "MIYOO %s", l10n(JOY_CUST_KEY_STR[myconfig.joy.cust_key[3]]));
        break;
    case MENU_JOY_DZONE:
        sprintf(buf, "%d", myconfig.joy.dzone);
        break;
#endif
#if defined(FLIP)
    case MENU_RJOY_MODE:
        sprintf(buf, "%s", l10n(RJOY_MODE_STR[myconfig.rjoy.mode]));
        break;
    case MENU_RJOY_CUST_KEY0:
        sprintf(buf, "MIYOO %s", l10n(JOY_CUST_KEY_STR[myconfig.rjoy.cust_key[0]]));
        break;
    case MENU_RJOY_CUST_KEY1:
        sprintf(buf, "MIYOO %s", l10n(JOY_CUST_KEY_STR[myconfig.rjoy.cust_key[1]]));
        break;
    case MENU_RJOY_CUST_KEY2:
        sprintf(buf, "MIYOO %s", l10n(JOY_CUST_KEY_STR[myconfig.rjoy.cust_key[2]]));
        break;
    case MENU_RJOY_CUST_KEY3:
        sprintf(buf, "MIYOO %s", l10n(JOY_CUST_KEY_STR[myconfig.rjoy.cust_key[3]]));
        break;
    case MENU_RJOY_DZONE:
        sprintf(buf, "%d", myconfig.rjoy.dzone);
        break;
#endif
    case MENU_LOG_LEVEL:
        sprintf(buf, "%s", l10n((get_debug_level(1) == TRACE_LEVEL) ? "ON" : "OFF"));
        break;
    }
    draw_info(myvideo.cvt, buf, SSX + sx, SY + (myvideo.menu.line_h * idx), col1, 0);

    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_sdl2_menu_setting)
{
    TEST_ASSERT_EQUAL_INT(0, draw_sdl2_menu_setting(0, 0, 0, 0, 0, 0));
}
#endif

static int process_sdl2_setting(int key)
{
    static int cur_sel = 0;
    static int pre_fast = 0;
    static int pre_lang = 0;
#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    static int pre_cpu_core = 0;
#endif

    int cc = 0;
    int sx = 0;
    int s0 = 0;
    int s1 = 0;
    int idx = 0;
    int mode = -1;
    uint32_t col0 = 0;
    uint32_t col1 = 0;
    SDL_Rect rt = { 0 };

    trace("call %s(key=%d)\n", __func__, key);

    switch (key) {
    case KEY_BIT_UP:
        if (cur_sel > 0) {
            cur_sel-= 1;
        }
        break;
    case KEY_BIT_DOWN:
        if (cur_sel < (MENU_LAST - 1)) {
            cur_sel+= 1;
        }
        break;
    case KEY_BIT_LEFT:
        apply_sdl2_menu_setting(cur_sel, 0, 0);
        break;
    case KEY_BIT_RIGHT:
        apply_sdl2_menu_setting(cur_sel, 1, 0);
        break;
    case KEY_BIT_L1:
        apply_sdl2_menu_setting(cur_sel, 0, 1);
        break;
    case KEY_BIT_R1:
        apply_sdl2_menu_setting(cur_sel, 1, 1);
        break;
    case KEY_BIT_B:
        if (pre_lang != myconfig.lang) {
            load_lang_file();
            pre_lang = myconfig.lang;
        }

        if (pre_fast != myconfig.fast_forward) {
            set_fast_forward(myconfig.fast_forward);
            pre_fast = myconfig.fast_forward;
        }

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
        if (pre_cpu_core != myconfig.cpu_core) {
            set_cpu_core(myconfig.cpu_core);
            pre_cpu_core = myconfig.cpu_core;
        }
#endif

        //add_layout_mode(LAYOUT_MODE_CUST, 0, NULL, 0, 0);
        //load_mask_file();

        myvideo.menu.sdl2.enable = 0;

#if defined(PANDORA)
        enable_fb_plane(FB_GAME);
#endif
        return 0;
    default:
        break;
    }

    if (myvideo.menu.sdl2.bg && myvideo.cvt) {
        SDL_SoftStretch(myvideo.menu.sdl2.bg, NULL, myvideo.cvt, NULL);
    }

    if (cur_sel < 3) {
        s0 = 0;
        s1 = 7;
    }
    else if (cur_sel >= (MENU_LAST - 4)) {
        s0 = MENU_LAST - 8;
        s1 = MENU_LAST - 1;
    }
    else {
        s0 = cur_sel - 3;
        s1 = cur_sel + 4;
    }

    for (cc = 0, idx = 0; cc < MENU_LAST; cc++) {
        if ((cc < s0) || (cc > s1)) {
            continue;
        }

        sx = 0;
        col1 = col0 = (cur_sel == cc) ? MENU_COLOR_SEL : MENU_COLOR_UNSEL;
        switch (cc) {
        case MENU_SWIN_ALPHA:
            if ((cur_sel == MENU_SWIN_ALPHA) &&
                ((myconfig.layout.mode.sel == LAYOUT_MODE_N0) ||
                (myconfig.layout.mode.sel == LAYOUT_MODE_N1)))
            {
                col1 = MENU_COLOR_SEL;
            }
            else {
                if ((myconfig.layout.mode.sel == LAYOUT_MODE_N0) ||
                    (myconfig.layout.mode.sel == LAYOUT_MODE_N1))
                {
                    col1 = MENU_COLOR_UNSEL;
                }
                else {
                    col1 = MENU_COLOR_DIS;
                }
            }
            sx += get_font_width("XX");
            break;
        case MENU_SWIN_BORDER:
            if ((cur_sel == MENU_SWIN_BORDER) &&
                (myconfig.layout.swin.alpha > 0) &&
                ((myconfig.layout.mode.sel == LAYOUT_MODE_N0) ||
                (myconfig.layout.mode.sel == LAYOUT_MODE_N1)))
            {
                col1 = MENU_COLOR_SEL;
            }
            else {
                if ((myconfig.layout.swin.alpha > 0) &&
                    ((myconfig.layout.mode.sel == LAYOUT_MODE_N0) ||
                    (myconfig.layout.mode.sel == LAYOUT_MODE_N1)))
                {
                    col1 = MENU_COLOR_UNSEL;
                }
                else {
                    col1 = MENU_COLOR_DIS;
                }
            }
            sx += get_font_width("XX");
            break;
        case MENU_SWIN_POS:
            if ((cur_sel == MENU_SWIN_POS) &&
                ((myconfig.layout.mode.sel == LAYOUT_MODE_N0) ||
                (myconfig.layout.mode.sel == LAYOUT_MODE_N1)))
            {
                col1 = MENU_COLOR_SEL;
            }
            else {
                if ((myconfig.layout.mode.sel == LAYOUT_MODE_N0) ||
                    (myconfig.layout.mode.sel == LAYOUT_MODE_N1))
                {
                    col1 = MENU_COLOR_UNSEL;
                }
                else {
                    col1 = MENU_COLOR_DIS;
                }
            }
            sx += get_font_width("XX");
            break;
        case MENU_LAYOUT_ATL:
            if (*myhook.var.sdl.screen[0].hires_mode == 0) {
                col1 = (cur_sel == cc) ? MENU_COLOR_SEL : MENU_COLOR_UNSEL;
            }
            else {
                col1 = MENU_COLOR_UNSEL;
            }
            sx += get_font_width("XX");
            break;
#if defined(FLIP)
        case MENU_JOY_CUST_KEY0:
        case MENU_JOY_CUST_KEY1:
        case MENU_JOY_CUST_KEY2:
        case MENU_JOY_CUST_KEY3:
            if (myconfig.joy.mode == MYJOY_MODE_CUST_KEY) {
                col1 = (cur_sel == cc) ? MENU_COLOR_SEL : MENU_COLOR_UNSEL;
            }
            else {
                col1 = MENU_COLOR_DIS;
            }
            break;
#endif
#if defined(FLIP)
        case MENU_RJOY_CUST_KEY0:
        case MENU_RJOY_CUST_KEY1:
        case MENU_RJOY_CUST_KEY2:
        case MENU_RJOY_CUST_KEY3:
            if (myconfig.rjoy.mode == MYJOY_MODE_CUST_KEY) {
                col1 = (cur_sel == cc) ? MENU_COLOR_SEL : MENU_COLOR_UNSEL;
            }
            else {
                col1 = MENU_COLOR_DIS;
            }
            break;
#endif
        default:
            break;
        }

        if (col0 == MENU_COLOR_SEL) {
            const int SX = 150;
            const int SY = 107;

            if (myconfig.menu.show_cursor) {
                rt.x = SX - 10;
                rt.w = 461 - 40;
            }
            else {
                rt.x = SX - 50;
                rt.w = 461 + 0;
            }
            rt.y = SY + (myvideo.menu.line_h * idx) - 2;
            rt.h = FONT_SIZE + 3;

            if ((cc == MENU_SWIN_ALPHA) || (cc == MENU_ROTATE_KEY)) {
                rt.w -= 121;
            }
            if (col1 == MENU_COLOR_DIS) {
                col1 = MENU_COLOR_SEL;
                SDL_FillRect(
                    myvideo.cvt,
                    &rt,
                    SDL_MapRGB(myvideo.menu.drastic.frame->format, 0x80, 0x80, 0x80)
                );
            }
            else {
                SDL_FillRect(
                    myvideo.cvt,
                    &rt,
                    SDL_MapRGB(myvideo.menu.drastic.frame->format,
                        (MENU_COLOR_DRASTIC >> 16) & 0xff,
                        (MENU_COLOR_DRASTIC >> 8) & 0xff,
                        MENU_COLOR_DRASTIC & 0xff
                    )
                );
            }

            if (myconfig.menu.show_cursor && myvideo.menu.sdl2.cursor) {
                rt.x -= (myvideo.menu.sdl2.cursor->w + 5);
                rt.y -= ((myvideo.menu.sdl2.cursor->h - myvideo.menu.line_h) / 2);
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface(myvideo.menu.sdl2.cursor, NULL, myvideo.cvt, &rt);
            }

            if ((cc == MENU_LAYOUT_MODE) || (cc == MENU_LAYOUT_ATL)) {
                rt.x = 440;
                rt.y = SY + (myvideo.menu.line_h * (idx + 1)) - 7;
                rt.w = 121;
                rt.h = FONT_SIZE + 8;
                SDL_FillRect(
                    myvideo.cvt,
                    &rt,
                    SDL_MapRGB(myvideo.menu.drastic.frame->format,
                        (MENU_COLOR_DRASTIC >> 16) & 0xff,
                        (MENU_COLOR_DRASTIC >> 8) & 0xff,
                        MENU_COLOR_DRASTIC & 0xff
                    )
                );
            }
        }

        draw_sdl2_menu_setting(cur_sel, cc, idx, sx, col0, col1);
        idx+= 1;
    }

    if (cur_sel == MENU_LAYOUT_MODE) {
        mode = myconfig.layout.mode.sel;
    }
    else if (cur_sel == MENU_LAYOUT_ATL) {
        mode = myconfig.layout.mode.alt;
    }
    draw_small_win(450, 360, mode, myvideo.cvt);

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK) || defined(QX1050) || defined(QX1000) || defined(XT894) || defined(XT897)
    myvideo.menu.update = 1;
#else
    flush_lcd(
        TEXTURE_TMP,
        myvideo.cvt->pixels,
        myvideo.cvt->clip_rect,
        myvideo.cvt->clip_rect,
        myvideo.cvt->pitch
    );

    flip_lcd();
#endif
    myvideo.layout.redraw_bg = REDRAW_BG_CNT;

    return 0;
}

#if defined(UT)
TEST(sdl2_video, process_sdl2_setting)
{
    //TEST_ASSERT_EQUAL_INT(0, process_sdl2_setting(0));
}
#endif

#if defined(MINI) || defined(FLIP) || defined(BRICK) || defined(GKD2) || defined(GKDMINI) || defined(TRIMUI_SMART)
static int show_hotkey(int key)
{
    int is_cn = 0;
    int src_size = 0;
    void *src_ptr = NULL;
    SDL_RWops *rw = NULL;
    SDL_Surface *png = NULL;
    static int cur_lang = -1;

    trace("call %s(key=%d)\n", __func__, key);

    switch (key) {
    case KEY_BIT_B:
        myvideo.menu.sdl2.enable = 0;
        return 0;
    default:
        cur_lang = -1;
        break;
    }

    if (cur_lang != myconfig.lang) {
        cur_lang = myconfig.lang;

        if (!strcmp(lang_file_name[cur_lang], "zh_CN") ||
            !strcmp(lang_file_name[cur_lang], "zh_TW"))
        {
            is_cn = 1;
        }

#if defined(FLIP)
        src_ptr = is_cn ? hex_flip_hotkey_cn : hex_flip_hotkey_en;
        src_size = is_cn ? sizeof(hex_flip_hotkey_cn) : sizeof(hex_flip_hotkey_en);
#endif

#if defined(BRICK)
        src_ptr = is_cn ? hex_brick_hotkey_cn : hex_brick_hotkey_en;
        src_size = is_cn ? sizeof(hex_brick_hotkey_cn) : sizeof(hex_brick_hotkey_en);
#endif

#if defined(GKD2)
        src_ptr = is_cn ? hex_gkd2_hotkey_cn : hex_gkd2_hotkey_en;
        src_size = is_cn ? sizeof(hex_gkd2_hotkey_cn) : sizeof(hex_gkd2_hotkey_en);
#endif

#if defined(GKDMINI)
        src_ptr = is_cn ? hex_gkdmini_hotkey_cn : hex_gkdmini_hotkey_en;
        src_size = is_cn ? sizeof(hex_gkdmini_hotkey_cn) : sizeof(hex_gkdmini_hotkey_en);
#endif

#if defined(MINI)
        src_ptr = is_cn ? hex_mini_hotkey_cn : hex_mini_hotkey_en;
        src_size = is_cn ? sizeof(hex_mini_hotkey_cn) : sizeof(hex_mini_hotkey_en);
#endif

#if defined(TRIMUI_SMART)
        src_ptr = is_cn ? hex_trimui_hotkey_cn : hex_trimui_hotkey_en;
        src_size = is_cn ? sizeof(hex_trimui_hotkey_cn) : sizeof(hex_trimui_hotkey_en);
#endif

        rw = SDL_RWFromMem(src_ptr, src_size);
        png = IMG_Load_RW(rw, 1);
        SDL_BlitSurface(png, NULL, myvideo.cvt, NULL);
        SDL_FreeSurface(png);
    }

#if defined(FLIP) || defined(GKD2) || defined(GKDMINI) || defined(BRICK)
    myvideo.menu.update = 1;
#else
    flush_lcd(
        TEXTURE_TMP,
        myvideo.cvt->pixels,
        myvideo.cvt->clip_rect,
        myvideo.cvt->clip_rect,
        myvideo.cvt->pitch
    );

    flip_lcd();
#endif
    myvideo.layout.redraw_bg = REDRAW_BG_CNT;

    return 0;
}
#endif

int handle_sdl2_menu(int key)
{
    trace("call %skey=%d()\n", __func__, key);

    switch (myvideo.menu.sdl2.type) {
    case MENU_TYPE_SDL2:
        return process_sdl2_setting(key);
#if defined(MINI) || defined(FLIP) || defined(BRICK) || defined(GKD2) || defined(GKDMINI) || defined(TRIMUI_SMART)
    case MENU_TYPE_SHOW_HOTKEY:
        return show_hotkey(key);
#endif
    default:
        return 0;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, handle_sdl2_menu)
{
    uint8_t hires = 0;

    //TEST_ASSERT_EQUAL_INT(0, init_video(NULL));
    myhook.var.sdl.screen[0].hires_mode = &hires;
    myhook.var.sdl.screen[1].hires_mode = &hires;
    //TEST_ASSERT_EQUAL_INT(0, handle_sdl2_menu(0));
    quit_video(0);
}
#endif

