// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include "../../SDL_internal.h"

#if SDL_VIDEO_DRIVER_NDS

#include <time.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <pthread.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <time.h>
#include <json-c/json.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#if defined(SFOS_EGL)
#include <EGL/egl.h>
#include <GLES2/gl2.h>

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
#include "video_nds.h"
#include "event_nds.h"

#include "log.h"
#include "cfg.h"
#include "pen.h"
#include "file.h"
#include "hook.h"
#include "cfg.pb.h"

extern nds_hook myhook;
extern nds_event myevt;
extern nds_pb_cfg mycfg;

extern miyoo_event myevent;
extern miyoo_settings mycfg;

int FB_W = 0;
int FB_H = 0;
int FB_SIZE = 0;
int LINE_H = 0;
int TMP_SIZE = 0;
int FONT_SIZE = 0;
int show_fps = 0;
int pixel_filter = 1;
int savestate_busy = 0;
SDL_Surface *fps_info = NULL;

static volatile int is_video_thread_running = 0;

static pthread_t thread;
static int need_reload_bg = RELOAD_BG_COUNT;
static SDL_Surface *cvt = NULL;

static int MiyooVideoInit(_THIS);
static int MiyooSetDisplayMode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode);
static void MiyooVideoQuit(_THIS);

static CUST_MENU drastic_menu = {0};
static char *translate[MAX_LANG_LINE] = {0};

#if defined(A30)
GLfloat bgVertices[] = {
   -1.0f,  1.0f,  0.0f,  0.0f,  0.0f,
   -1.0f, -1.0f,  0.0f,  0.0f,  1.0f,
    1.0f, -1.0f,  0.0f,  1.0f,  1.0f,
    1.0f,  1.0f,  0.0f,  1.0f,  0.0f
};

GLfloat vVertices[] = {
   -1.0f,  1.0f,  0.0f,  0.0f,  0.0f,
   -1.0f, -1.0f,  0.0f,  0.0f,  1.0f,
    1.0f, -1.0f,  0.0f,  1.0f,  1.0f,
    1.0f,  1.0f,  0.0f,  1.0f,  0.0f
};

static GLushort vert_indices[] = {
    0, 1, 2, 0, 2, 3
};

static const char *vert_shader_code =
    "attribute vec4 vert_pos;                                           \n"
    "attribute vec2 vert_coord;                                         \n"
    "varying vec2 frag_coord;                                           \n"
    "void main()                                                        \n"
    "{                                                                  \n"

#if defined(SFOS_EGL) || defined(MIYOO_FLIP)
    "    gl_Position = vert_pos;                                        \n"
#endif

#if defined(MIYOO_A30)
    "    const float angle = 90.0 * (3.1415 * 2.0) / 360.0;             \n"
    "    mat4 rot = mat4(                                               \n"
    "        cos(angle), -sin(angle), 0.0, 0.0,                         \n"
    "        sin(angle),  cos(angle), 0.0, 0.0,                         \n"
    "        0.0,         0.0,        1.0, 0.0,                         \n"
    "        0.0,         0.0,        0.0, 1.0                          \n"
    "    );                                                             \n"
    "    gl_Position = vert_pos * rot;                                  \n"
#endif

    "    frag_coord = vert_coord;                                       \n"
    "}                                                                  \n";

static const char *frag_shader_code =
    "precision mediump float;                                           \n"
    "varying vec2 frag_coord;                                           \n"
    "uniform int frag_swap_color;                                       \n"
    "uniform float frag_aspect;                                         \n"
    "uniform float frag_angle;                                          \n"
    "uniform sampler2D frag_sampler;                                    \n"
    "const vec2 HALF = vec2(0.5);                                       \n"
    "void main()                                                        \n"
    "{                                                                  \n"

#if defined(SFOS_EGL)
    "    vec3 tex;                                                      \n"
    "    float aSin = sin(frag_angle);                                  \n"
    "    float aCos = cos(frag_angle);                                  \n"
    "    vec2 tc = frag_coord;                                          \n"
    "    mat2 rotMat = mat2(aCos, -aSin, aSin, aCos);                   \n"
    "    mat2 scaleMat = mat2(frag_aspect, 0.0, 0.0, 1.0);              \n"
    "    mat2 scaleMatInv = mat2(1.0 / frag_aspect, 0.0, 0.0, 1.0);     \n"
    "    tc -= HALF.xy;                                                 \n"
    "    tc = scaleMatInv * rotMat * scaleMat * tc;                     \n"
    "    tc += HALF.xy;                                                 \n"
    "    if (frag_swap_color >= 1) {                                    \n"
    "        tex = texture2D(frag_sampler, tc).bgr;                     \n"
    "    }                                                              \n"
    "    else {                                                         \n"
    "        tex = texture2D(frag_sampler, tc).rgb;                     \n"
    "    }                                                              \n"
#endif

#if defined(MIYOO_EGL)
    "    vec3 tex = texture2D(frag_sampler, frag_coord).rgb;            \n"
#endif

    "    gl_FragColor = vec4(tex, 1.0);                                 \n"
    "}                                                                  \n";
#endif

#if defined(MIYOO_A30)
EGLint win_cfg[] = { 
    EGL_RENDER_BUFFER,
    EGL_BACK_BUFFER,
    EGL_NONE
};
#endif

#if defined(MIYOO_A30) || defined(SFOS_EGL)
static EGLint surf_cfg[] = {
    EGL_SURFACE_TYPE,
    EGL_WINDOW_BIT,
    EGL_RENDERABLE_TYPE,
    EGL_OPENGL_ES2_BIT,
    EGL_RED_SIZE,   8,
    EGL_GREEN_SIZE, 8,
    EGL_BLUE_SIZE,  8,
    EGL_ALPHA_SIZE, 8,
    EGL_NONE
};
#endif

#if defined(MIYOO_FLIP)
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
#endif

#if defined(MIYOO_EGL) || defined(SFOS_EGL)
static EGLint ctx_cfg[] = {
    EGL_CONTEXT_CLIENT_VERSION, 
    2, 
    EGL_NONE
};
#endif

#if defined(UT)
TEST_GROUP(sdl2_video);

TEST_SETUP(sdl2_video)
{
    debug(SDL"call %s()\n", __func__);

    reset_cfg();
}

TEST_TEAR_DOWN(sdl2_video)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

#if defined(SFOS_EGL) || defined(UT)
static void wl_cb_remove(void *dat, struct wl_registry *reg, uint32_t id)
{
    debug(SDL"call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, wl_cb_remove)
{
    wl_cb_remove(NULL, NULL, 0);
    TEST_PASS();
}
#endif

static void wl_cb_handle(void *dat, struct wl_registry *reg, uint32_t id, const char *intf, uint32_t ver)
{
    debug(SDL"call %s()\n", __func__);

    do {
        if (!intf) {
            error(SDL"intf is null\n");
            break;
        }

        if (strcmp(intf, "wl_compositor") == 0) {
#if !defined(UT)
            myvid.wl.compositor = wl_registry_bind(reg, id, &wl_compositor_interface, 1);
#endif
        }
        else if (strcmp(intf, "wl_shell") == 0) {
#if !defined(UT)
            myvid.wl.shell = wl_registry_bind(reg, id, &wl_shell_interface, 1);
#endif
        }
    } while (0);
}

#if defined(UT)
TEST(sdl2_video, wl_cb_handle)
{
    wl_cb_handle(NULL, NULL, 0, NULL, 0);
    TEST_PASS();
}
#endif

#if !defined(UT)
static struct wl_registry_listener cb_global = {
    .global = wl_cb_handle,
    .global_remove = wl_cb_remove
};
#endif

int update_wayland_client_size(int w, int h)
{
    int c0 = 0;
    int c1 = 0;
    int scale = 0;

#if !defined(UT)
    float x0 = 0;
    float y0 = 0;
#endif

    debug(SDL"call %s(w=%d, h=%d)\n", __func__, w, h);

    if (!w || !h) {
        error(SDL"invalid client size\n");
        return -1;
    }

    if (!myvid.wl.data) {
        error(SDL"wl.data has not been initialized yet\n");
        return -1;
    }

    myvid.info.w = w;
    myvid.info.h = h;
    myvid.info.bpp = 32;
    myvid.info.size = myvid.info.w * (myvid.info.bpp / 8) * myvid.info.h;

    c0 = SCREEN_H / myvid.info.w;
    c1 = SCREEN_W / myvid.info.h;
    scale = (c0 > c1) ? c1 : c0;
    scale = (scale <= 0) ? 1 : scale;

#if !defined(UT)
    y0 = ((float)(myvid.info.w * scale) / SCREEN_H);
    x0 = ((float)(myvid.info.h * scale) / SCREEN_W);

    fg_vertices[0] = -x0;
    fg_vertices[1] = y0;
    fg_vertices[5] = -x0;
    fg_vertices[6] = -y0;
    fg_vertices[10] =  x0;
    fg_vertices[11] = -y0;
    fg_vertices[15] =  x0;
    fg_vertices[16] =  y0;
#endif

    memset(myvid.wl.data, 0, myvid.info.size);
    myvid.wl.pixels[0] = (void *)myvid.wl.data;
    myvid.wl.pixels[1] = (void *)(myvid.wl.data + myvid.info.size);

    debug(SDL"new wayland client(w=%d, h=%d, scale=%d)\n", w, h, scale);
    return 0;
}

#if defined(UT)
TEST(sdl2_video, update_wayland_client_size)
{
    const int w = 3;
    const int h = 3;
    const int bpp = 32;
    uint8_t buf[3 * 3 * 32] = { 0 };

    myvid.wl.data = buf;
    TEST_ASSERT_EQUAL_INT(-1, update_wayland_client_size(0, 0));
    TEST_ASSERT_EQUAL_INT(0, update_wayland_client_size(w, h));
    TEST_ASSERT_EQUAL_INT(w, myvid.info.w);
    TEST_ASSERT_EQUAL_INT(h, myvid.info.h);
    TEST_ASSERT_EQUAL_INT(bpp, myvid.info.bpp);
    TEST_ASSERT_NOT_NULL(myvid.wl.pixels[0]);
    TEST_ASSERT_NOT_NULL(myvid.wl.pixels[1]);
}
#endif

static void* wl_display_handler(void* pParam)
{
    debug(SDL"call %s()++\n", __func__);

#if !defined(UT)
    while (myvid.wl.thread.running) {
        if (myvid.wl.init && myvid.wl.ready) {
            wl_display_dispatch(myvid.wl.display);
        }
        else {
            usleep(1000);
        }
    }
#endif

    debug(SDL"call %s()--\n", __func__);
    return NULL;
}

#if defined(UT)
TEST(sdl2_video, wl_display_handler)
{
    TEST_ASSERT_NULL(wl_display_handler(NULL));
}
#endif

static void wl_cb_ping(void *dat, struct wl_shell_surface *shell_surf, uint32_t serial)
{
    debug(SDL"call %s()\n", __func__);

#if !defined(UT)
    wl_shell_surface_pong(shell_surf, serial);
#endif
}
#endif

#if defined(UT)
TEST(sdl2_video, wl_cb_ping)
{
    wl_cb_ping(NULL, NULL, 0);
    TEST_PASS();
}
#endif

static void wl_cb_config(void *dat, struct wl_shell_surface *shell_surf, uint32_t edges, int32_t w, int32_t h)
{
    debug(SDL"call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, wl_cb_config)
{
    wl_cb_config(NULL, NULL, 0, 0, 0);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, wl_cb_popup_done)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

#if defined(UT)
TEST(sdl2_video, wl_cb_popup_done)
{
    wl_cb_popup_done(NULL, NULL);
    TEST_PASS();
}
#endif

static const struct wl_shell_surface_listener cb_shell_surf = {
    wl_cb_ping,
    wl_cb_config,
    wl_cb_popup_done
};

static int quit_wl(void)
{
    int r = 0;
    char buf[255] = {0};
    uint32_t v[2] = {0};
    struct stat st = {0};
    const char *AXP = "/customer/app/axp_test";

    if (stat (AXP, &st) == 0) {
        // {"battery":99, "voltage":4254, "charging":3}
        FILE *fd = popen(AXP, "r");

        if (fd) {
            fgets(buf, sizeof(buf), fd);
            pclose(fd);
            return (atoi(&buf[11]));
        }
        return 0;
    }

    myvid.wl.init = 0;
    myvid.wl.ready = 0;

#if !defined(UT)
    pthread_join(myvid.wl.thread.id, NULL);
    wl_shell_surface_destroy(myvid.wl.shell_surface);
    wl_shell_destroy(myvid.wl.shell);
    wl_surface_destroy(myvid.wl.surface);
    wl_compositor_destroy(myvid.wl.compositor);
    wl_registry_destroy(myvid.wl.registry);
    wl_display_disconnect(myvid.wl.display);
    free(myvid.wl.data);
#endif

    return 0;
}
#endif

#if defined(UT)
TEST(sdl2_video, quit_wl)
{
    TEST_ASSERT_EQUAL_INT(0, quit_wl());
}
#endif

static int init_wl(void)
{
    TEST_ASSERT_EQUAL_INT(0, quit_wl());
}
#endif

#if !defined(UT)
    myvid.wl.display = wl_display_connect(NULL);
    myvid.wl.registry = wl_display_get_registry(myvid.wl.display);

    fd = popen(BAT_CUR_CMD, "r");
    if (fd) {
        fgets(buf, sizeof(buf), fd);
        pclose(fd);
        curv = atoi(buf);
    }

    myvid.wl.surface = wl_compositor_create_surface(myvid.wl.compositor);
    myvid.wl.shell_surface = wl_shell_get_shell_surface(myvid.wl.shell, myvid.wl.surface);
    wl_shell_surface_set_toplevel(myvid.wl.shell_surface);
    wl_shell_surface_add_listener(myvid.wl.shell_surface, &cb_shell_surf, NULL);
    
    myvid.wl.region = wl_compositor_create_region(myvid.wl.compositor);
    wl_region_add(myvid.wl.region, 0, 0, SCREEN_W, SCREEN_H);
    wl_surface_set_opaque_region(myvid.wl.surface, myvid.wl.region);
    myvid.wl.window = wl_egl_window_create(myvid.wl.surface, SCREEN_W, SCREEN_H);
#endif

    return 0;
}
#endif

#if defined(UT)
TEST(sdl2_video, init_wl)
{
    TEST_ASSERT_EQUAL_INT(0, init_wl());
}
#endif

#if defined(MIYOO_FLIP) || defined(UT)
static void drm_flip_handler(int fd, unsigned int frame, unsigned int sec, unsigned int usec, void *data)
{
    debug(SDL"call %s()\n", __func__);

    *((int *)data) = 0;
}
 
#if defined(UT)
TEST(sdl2_video, drm_flip_handler)
{
    int v = 1;

    drm_flip_handler(0, 0, 0, 0, &v);
    TEST_ASSERT_EQUAL_INT(0, v);
}
#endif

drmEventContext drm_evctx = {
    .version = DRM_EVENT_CONTEXT_VERSION,
    .page_flip_handler = drm_flip_handler,
};
#endif

#if defined(SFOS_EGL) || defined(MIYOO_EGL) || defined(UT)
static int quit_egl(void)
{
    debug(SDL"call %s()\n", __func__);

#if defined(SFOS_EGL)
    myvid.wl.init = 0;
    myvid.wl.ready = 0;
#endif

#if !defined(UT)
    glDeleteTextures(TEXTURE_MAX, myvid.egl.tex);
    eglMakeCurrent(myvid.egl.display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroySurface(myvid.egl.display, myvid.egl.surface);
    eglDestroyContext(myvid.egl.display, myvid.egl.context);

#if defined(SFOS_EGL)
    wl_egl_window_destroy(myvid.wl.window);
#endif

    if (stat(buf, &st) == -1) {
        fd = open(fname, O_WRONLY | O_CREAT, 0755);
    }
    else {
        fd = open(fname, O_WRONLY);
    }

#if defined(MIYOO_FLIP)
    drmModeRmFB(myvid.drm.fd, myvid.drm.fb); 
    drmModeFreeCrtc(myvid.drm.crtc);
    drmModeFreeEncoder(myvid.drm.enc);
    drmModeFreeConnector(myvid.drm.conn);
    drmModeFreeResources(myvid.drm.res);
    close(myvid.drm.fd);
#endif
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, quit_egl)
{
    TEST_ASSERT_EQUAL_INT(0, quit_egl());
}
#endif

static int init_egl(void)
{
#if !defined(UT)
    EGLint cnt = 0;
    EGLint major = 0;
    EGLint minor = 0;
    EGLConfig cfg = 0;
    GLint compiled = 0;
#endif

    debug(SDL"call %s()\n", __func__);

#if !defined(UT)
#if defined(SFOS_EGL)
    myvid.egl.display = eglGetDisplay((EGLNativeDisplayType)myvid.wl.display);
#endif

static int draw_drastic_menu_main(void)
{
    int cc = 0;
    int div = 1;
    int w = 30;
    int h = 100;
    int draw = 0;
    int draw_shot = 0;
    int x = 0, y = 0;
    SDL_Rect rt = {0};
    CUST_MENU_SUB *p = NULL;
    char buf[MAX_PATH << 1] = {0};

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        draw = 0;
        x = 90 / div;
        w = LINE_H / div;
        h = nds.enable_752x560 ? (115 / div) : (100 / div);

        memset(buf, 0, sizeof(buf));
        p = &drastic_menu.item[cc];
        if (p->y == 201) {
            draw = 1;
            snprintf(buf, sizeof(buf), "NDS %s", &p->msg[8]);
            x = FB_W - get_font_width(buf) - 10;
            y = 10 / div;
        }
        else if (p->y == 280) {
            draw = 1;
            y = h + (0 * w);
            strcpy(buf, to_lang("Change Options"));
        }
        else if (p->y == 288) {
            draw = 1;
            y = h + (1 * w);
            strcpy(buf, to_lang("Configure Controls"));
        }
        else if (p->y == 296) {
            draw = 1;
            y = h + (2 * w);
            strcpy(buf, to_lang("Configure Firmware"));
        }
        else if (p->y == 304) {
            draw = 1;
            y = h + (3 * w);
            strcpy(buf, to_lang("Configure Cheats"));
        }
        else if (p->y == 320) {
            draw = 1;
            y = h + (4 * w);
            snprintf(buf, sizeof(buf), "%s %s", to_lang("Load state"), &p->msg[13]);
        }
        else if (p->y == 328) {
            draw = 1;
            y = h + (5 * w);
            snprintf(buf, sizeof(buf), "%s %s", to_lang("Save state"), &p->msg[13]);
        }
        else if (p->y == 344) {
            draw = 1;
            y = h + (6 * w);
            strcpy(buf, to_lang("Load new game"));
        }
        else if (p->y == 352) {
            draw = 1;
            y = h + (7 * w);
            strcpy(buf, to_lang("Restart game"));
        }
        else if (p->y == 368) {
            draw = 1;
            y = h + (8 * w);
            strcpy(buf, to_lang("Return to game"));
        }
        else if (p->y == NDS_Hx2) {
            draw = 1;
            y = h + (9 * w);
            strcpy(buf, to_lang("Exit DraStic"));
        }

        if (draw) {
            if (p->bg) {
                rt.x = 5 / div;
                rt.y = y - (3 / div);
                rt.w = FB_W - (10 / div);
                rt.h = w;
                SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                    (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
                if ((p->y == 320) || (p->y == 328)) {
                    draw_shot = 1;
                }

                if (nds.menu.show_cursor && nds.menu.drastic.cursor) {
                    rt.x = (5 / div) + (x - nds.menu.drastic.cursor->w) / 2;
                    rt.y -= ((nds.menu.drastic.cursor->h - LINE_H) / 2);
                    rt.w = 0;
                    rt.h = 0;
                    SDL_BlitSurface(nds.menu.drastic.cursor, NULL, nds.menu.drastic.main, &rt);
                }
            }
            draw_info(nds.menu.drastic.main, buf, x, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
        }
    }

#if defined(MIYOO_FLIP)
    myvid.drm.fd = open("/dev/dri/card0", O_RDWR | O_CLOEXEC);
    myvid.drm.res = drmModeGetResources(myvid.drm.fd);
    myvid.drm.conn = drmModeGetConnector(myvid.drm.fd, myvid.drm.res->connectors[1]);
    myvid.drm.enc = drmModeGetEncoder(myvid.drm.fd, myvid.drm.res->encoders[2]);
    myvid.drm.crtc = drmModeGetCrtc(myvid.drm.fd, myvid.drm.res->crtcs[1]);
    myvid.drm.gbm = gbm_create_device(myvid.drm.fd);
    myvid.drm.gs = gbm_surface_create(
        myvid.drm.gbm,
        myvid.drm.crtc->mode.hdisplay,
        myvid.drm.crtc->mode.vdisplay, 
        GBM_FORMAT_XRGB8888,
        GBM_BO_USE_SCANOUT | GBM_BO_USE_RENDERING
    );
    myvid.drm.pfn = (void *)eglGetProcAddress("eglGetPlatformDisplayEXT");
    myvid.egl.display = myvid.drm.pfn(EGL_PLATFORM_GBM_KHR, myvid.drm.gbm, NULL);
#endif

    eglInitialize(myvid.egl.display, &major, &minor);
#if defined(MIYOO_FLIP)
    eglBindAPI(EGL_OPENGL_ES_API);
#endif
    eglGetConfigs(myvid.egl.display, NULL, 0, &cnt);
    eglChooseConfig(myvid.egl.display, surf_cfg, &cfg, 1, &cnt);

#if defined(A30)
    if (nds.chk_bat) {
        snprintf(buf, sizeof(buf), "Rel "NDS_VER", Res %s, BAT %d%%", "640*480", get_bat_val());
    }
    else {
        snprintf(buf, sizeof(buf), "Rel "NDS_VER", Res %s", "640*480");
    }
#endif

#if defined(MIYOO_A30)
    myvid.egl.surface = eglCreateWindowSurface(myvid.egl.display, cfg, 0, win_cfg);
#endif

#if defined(MIYOO_FLIP)
    myvid.egl.surface = eglCreateWindowSurface(myvid.egl.display, cfg, (EGLNativeWindowType)myvid.drm.gs, NULL);
#endif

    myvid.egl.context = eglCreateContext(myvid.egl.display, cfg, EGL_NO_CONTEXT, ctx_cfg);
    eglMakeCurrent(myvid.egl.display, myvid.egl.surface, myvid.egl.surface, myvid.egl.context);

    myvid.egl.vert_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(myvid.egl.vert_shader, 1, &vert_shader_code, NULL);
    glCompileShader(myvid.egl.vert_shader);

        if (top) {
            free(top);
        }

        if (bottom) {
            free(bottom);
        }
    }
    return 0;
}

    myvid.egl.prog = glCreateProgram();
    glAttachShader(myvid.egl.prog, myvid.egl.vert_shader);
    glAttachShader(myvid.egl.prog, myvid.egl.frag_shader);
    glLinkProgram(myvid.egl.prog);
    glUseProgram(myvid.egl.prog);

    myvid.egl.pos = glGetAttribLocation(myvid.egl.prog, "vert_pos");
    myvid.egl.coord = glGetAttribLocation(myvid.egl.prog, "vert_coord");
    myvid.egl.sampler = glGetUniformLocation(myvid.egl.prog, "frag_sampler");
    glUniform1f(glGetUniformLocation(myvid.egl.prog, "frag_aspect"), 1.0);

#if defined(MIYOO_A30)
    glUniform1f(glGetUniformLocation(myvid.egl.prog, "frag_angle"), 0);
#else
    glUniform1f(glGetUniformLocation(myvid.egl.prog, "frag_angle"), 90 * (3.1415 * 2.0) / 360.0);
#endif

#if defined(SFOS_XT897) || defined(MIYOO_A30)
    glUniform1i(glGetUniformLocation(myvid.egl.prog, "frag_swap_color"), 0);
#else
    glUniform1i(glGetUniformLocation(myvid.egl.prog, "frag_swap_color"), 1);
#endif

    for (cc=0; cc<len - 1; cc++) {
        if ((p[cc] == ' ') && (p[cc + 1] == ' ')) {
            p[cc] = 0;
            return 0;
        }
    }
    return -1;
}

static char* find_menu_string_tail(char *p)
{
    int cc = 0;

    glVertexAttribPointer(myvid.egl.pos, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bg_vertices);
    glVertexAttribPointer(myvid.egl.coord, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bg_vertices[3]);
    glEnableVertexAttribArray(myvid.egl.pos);
    glEnableVertexAttribArray(myvid.egl.coord);
    glActiveTexture(GL_TEXTURE0);
    glUniform1i(myvid.egl.sampler, 0);
#endif

    return 0;
}
#endif

#if defined(UT)
TEST(sdl2_video, init_egl)
{
    TEST_ASSERT_EQUAL_INT(0, init_egl());
}
#endif

static int quit_sfos_lcd(void)
{
    debug(SDL"call %s()\n", __func__);

    debug(SDL"wait for wl_display_handler complete\n");
#if !defined(UT)
    myvid.wl.thread.running = 0;
    pthread_join(myvid.wl.thread.id, NULL);
#endif
    debug(SDL"wl_display_handler completed\n");

    quit_wl();
    quit_egl();

    if (myvid.wl.bg) {
        SDL_free(myvid.wl.bg);
        myvid.wl.bg = NULL;
    }
    if (myvid.wl.data) {
        SDL_free(myvid.wl.data);
        myvid.wl.data = NULL;
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_video, quit_sfos_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, quit_sfos_lcd());
}
#endif

#if defined(SFOS_EGL) || defined(UT)
static int init_sfos_lcd(void)
{
    const uint32_t size = SCREEN_W * SCREEN_H * 4 * 2;

    debug(SDL"call %s()\n", __func__);

    init_wl();
    init_egl();
    myvid.wl.init = 1;
    myvid.wl.thread.running = 1;
    myvid.wl.bg = SDL_malloc(size);
    memset(myvid.wl.bg, 0, size);

#if !defined(UT)
    pthread_create(&myvid.wl.thread.id, NULL, wl_display_handler, NULL);
    while (myvid.wl.init == 0) {
        usleep(100000);
    }
#endif

    myvid.wl.flip = 0;
    myvid.wl.ready = 0;
    myvid.wl.data = SDL_malloc(size);
    memset(myvid.wl.data, 0, size);
    update_wayland_client_size(NDS_W * 2, NDS_H);
    myvid.wl.ready = 1;

    return 0;
}

#if defined(UT)
TEST(sdl2_video, init_sfos_lcd)
{
    myvid.wl.flip = 1;
    myvid.wl.ready = 0;
    TEST_ASSERT_EQUAL_INT(0, init_sfos_lcd());
    TEST_ASSERT_EQUAL_INT(0, myvid.wl.flip);
    TEST_ASSERT_EQUAL_INT(1, myvid.wl.ready);
    TEST_ASSERT_NOT_NULL(myvid.wl.data);
    TEST_ASSERT_EQUAL_INT(0, quit_sfos_lcd());
}

#if defined(UT)
TEST(sdl2_video, quit_miyoo_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, quit_miyoo_lcd());
}
#endif
#endif
#endif

#if defined(MIYOO_EGL) || defined(UT)
static int init_miyoo_lcd(void)
{
    debug(SDL"call %s()\n", __func__);

    init_egl();
    return 0;
}

#if defined(UT)
TEST(sdl2_video, init_miyoo_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, init_miyoo_lcd());
}
#endif

static int quit_miyoo_lcd(void)
{
    debug(SDL"call %s()\n", __func__);

    quit_egl();
    return 0;
}

#if defined(UT)
TEST(sdl2_video, quit_miyoo_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, quit_miyoo_lcd());
}
#endif
#endif

int flip_lcd_screen(void)
{
    debug(SDL"call %s()\n", __func__);

#if defined(SFOS_EGL) || defined(MIYOO_EGL)
    eglSwapBuffers(myvid.egl.display, myvid.egl.surface);
#endif

#if defined(MIYOO_FLIP) 
    myvid.drm.wait_for_flip = 1;
    myvid.drm.bo = gbm_surface_lock_front_buffer(myvid.drm.gs);
    drmModeAddFB(myvid.drm.fd, SCREEN_W, SCREEN_H, 24, 32, gbm_bo_get_stride(myvid.drm.bo), gbm_bo_get_handle(myvid.drm.bo).u32, (uint32_t *)&myvid.drm.fb);
    drmModeSetCrtc(myvid.drm.fd, myvid.drm.crtc->crtc_id, myvid.drm.fb, 0, 0, (uint32_t *)myvid.drm.conn, 1, &myvid.drm.crtc->mode);
    drmModePageFlip(myvid.drm.fd, myvid.drm.crtc->crtc_id, myvid.drm.fb, DRM_MODE_PAGE_FLIP_EVENT, (void *)&myvid.drm.wait_for_flip);
    while (myvid.drm.wait_for_flip) {
        drmHandleEvent(myvid.drm.fd, &drm_evctx);
    }
    gbm_surface_release_buffer(myvid.drm.gs, myvid.drm.bo);
#endif

    return 0;
}
#endif

#if defined(UT)
TEST(sdl2_video, flip_lcd_screen)
{
    TEST_ASSERT_EQUAL_INT(0, flip_lcd_screen());
}
#endif

static int update_nds_screen(void)
{
    int cc = 0;
    int bpp = 0;
    int hires = { 0 };
    SDL_Rect lcd = { 0 };
    uint32_t *pixels = { 0 };

    debug(SDL"call %s()\n", __func__);

    if (!myhook.var.system.base) {
        error(SDL"system is null\n");
        return -1;
    }

    bpp = *((uint32_t *)myhook.var.sdl.bytes_per_pixel);
    for (cc = 0; cc < NDS_LCD_NUM; cc++) {
        hires = *((uint8_t *)myhook.var.sdl.screen[cc].hires_mode);
        pixels = (uint32_t *)(uintptr_t)(*((uint32_t *)myhook.var.sdl.screen[cc].pixels));

        lcd.x = *((uint32_t *)myhook.var.sdl.screen[cc].x);
        lcd.y = *((uint32_t *)myhook.var.sdl.screen[cc].y);
        lcd.w = hires ? NDS_Wx2 : NDS_W;
        lcd.h = hires ? NDS_Hx2 : NDS_H;

        flush_lcd_screen(TEXTURE_BUF, pixels, lcd, lcd, lcd.w * bpp, 0, 0);
    }

    flip_lcd_screen();

    return 0;
}

#if defined(UT)
TEST(sdl2_video, update_nds_screen)
{
    TEST_ASSERT_EQUAL_INT(-1, update_nds_screen());
}
#endif

static void sigterm_handler(int sig)
{
    int y = 0;
    int w = 30;
    int cc = 0;
    int div = 1;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = {0};
    int s0 = 0, s1 = 0;
    CUST_MENU_SUB *p = NULL;
    char buf[MAX_PATH] = {0};

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        p = &drastic_menu.item[cc];
        if (p->x == 650) {
            for (s0=0; s0<drastic_menu.cnt; s0++) {
                if ((drastic_menu.item[s0].x == 10) && (drastic_menu.item[s0].y == p->y)) {
                    drastic_menu.item[s0].cheat = 1;
                    drastic_menu.item[s0].enable = strcmp(p->msg, "enabled") == 0 ? 1 : 0;
                    break;
                }
            }
        }
    }

    debug(SDL"%s()++\n", __func__);

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].bg > 0) {
            cursor = cc;
        }
    }

    debug(SDL"%s()--\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, sigterm_handler)
{
    sigterm_handler(0);
    TEST_PASS();
}
#endif

static void* screen_handler(void *thread_id)
{
    debug(SDL"call %s()++\n", __func__);

#if !defined(UT)
    while (myvid.thread.running) {
        if (myvid.nds.async_update) {
            myvid.nds.async_update = 0;
            update_nds_screen();
        }
        else {
            usleep(10);
        }
    }
#endif

    cnt = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        w = LINE_H / div;
        memset(buf, 0, sizeof(buf));
        p = &drastic_menu.item[cc];

#if !defined(UT)
    pthread_exit(NULL);
#endif

    return NULL;
}

#if defined(UT)
TEST(sdl2_video, screen_handler)
{
    TEST_ASSERT_NULL(screen_handler(NULL));
}
#endif

int flush_lcd_screen(int tex_id, const void *pixels, SDL_Rect srt, SDL_Rect drt, int pitch, int alpha, int rotate)
{
#if defined(SFOS_EGL) || defined(MIYOO_EGL)
    uint32_t fmt = GL_RGB;
    uint32_t type = GL_UNSIGNED_SHORT_5_6_5;
    int tex = (tex_id >= 0) ? tex_id : TEXTURE_BUF;
#endif

    debug(SDL"call %s()\n", __func__);
    debug(SDL"tex_id=%d, pixels=%p, pitch=%d, alpha=%d, rotate=%d\n", tex_id, pixels, pitch, alpha, rotate);
    debug(SDL"src(%d, %d, %d, %d)\n", srt.x, srt.y, srt.w, srt.h);
    debug(SDL"dst(%d, %d, %d, %d)\n", drt.x, drt.y, drt.w, drt.h);

    if (tex_id >= TEXTURE_MAX) {
        error(SDL"invalid is tex_id(%d)\n", tex_id);
        return -1;
    }

    if (!pixels) {
        error(SDL"pixels is null\n");
        return -1;
    }

#if defined(SFOS_EGL) || defined(MIYOO_EGL)
#if defined(SFOS_EGL)
    fg_vertices[0] = ((((float)drt.x) / SCREEN_H) - 0.5) * 2.0;
    fg_vertices[1] = ((((float)drt.y) / SCREEN_W) - 0.5) * -2.0;

    fg_vertices[5] = fg_vertices[0];
    fg_vertices[6] = ((((float)(drt.y + drt.h)) / SCREEN_W) - 0.5) * -2.0;

    fg_vertices[10] = ((((float)(drt.x + drt.w)) / SCREEN_H) - 0.5) * 2.0;
    fg_vertices[11] = fg_vertices[6];

    fg_vertices[15] = fg_vertices[10];
    fg_vertices[16] = fg_vertices[1];
#endif

#if defined(MIYOO_A30)
    fg_vertices[0] = ((((float)drt.x) / SCREEN_H) - 0.5) * 2.0;
    fg_vertices[1] = ((((float)drt.y) / SCREEN_W) - 0.5) * -2.0;

    fg_vertices[5] = fg_vertices[0];
    fg_vertices[6] = ((((float)(drt.y + drt.h)) / SCREEN_W) - 0.5) * -2.0;

    fg_vertices[10] = ((((float)(drt.x + drt.w)) / SCREEN_H) - 0.5) * 2.0;
    fg_vertices[11] = fg_vertices[6];

    fg_vertices[15] = fg_vertices[10];
    fg_vertices[16] = fg_vertices[1];
#endif

#if defined(MIYOO_FLIP)
    fg_vertices[0] = ((((float)drt.x) / SCREEN_W) - 0.5) * 2.0;
    fg_vertices[1] = ((((float)drt.y) / SCREEN_H) - 0.5) * -2.0;

    fg_vertices[5] = fg_vertices[0];
    fg_vertices[6] = ((((float)(drt.y + drt.h)) / SCREEN_H) - 0.5) * -2.0;

    fg_vertices[10] = ((((float)(drt.x + drt.w)) / SCREEN_W) - 0.5) * 2.0;
    fg_vertices[11] = fg_vertices[6];

    fg_vertices[15] = fg_vertices[10];
    fg_vertices[16] = fg_vertices[1];
#endif

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

    {
        uint32_t c = 0x335445;

        w = LINE_H / div;
        p = &drastic_menu.item[0];
        rt.x = 5 / div;
        rt.y = (25 / div) - (4 / div);
        rt.w = FB_W - (10 / div);
        rt.h = w;
        SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
        draw_info(nds.menu.drastic.main, p->msg, 20 / div, 25 / div, 0xa0cb93, 0);
    }

    cnt = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        w = LINE_H / div;
        p = &drastic_menu.item[cc];
        if (p->x == chk) {
            y = (25 / div) + (((cnt - s0) + 1) * w);
            if ((cnt >= s0) && (cnt < s1)) {
                if (p->bg) {
                    rt.x = 5 / div;
                    rt.y = y - (4 / div);
                    rt.w = FB_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format,
                        (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
                }
                draw_info(nds.menu.drastic.main, p->msg, 20 / div, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
            cnt+= 1;
        }
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_video, flush_lcd_screen)
{
    SDL_Rect  rt = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, flush_lcd_screen(TEXTURE_MAX, NULL, rt, rt, 0, 0, 0));
    TEST_ASSERT_EQUAL_INT(-1, flush_lcd_screen(0, NULL, rt, rt, 0, 0, 0));
    TEST_ASSERT_EQUAL_INT( 0, flush_lcd_screen(0, &rt, rt, rt, 0, 0, 0));
}
#endif

static void delete_device(SDL_VideoDevice *device)
{
    debug(SDL"call %s\n", __func__);

    if (device) {
        SDL_free(device);
    }
}

#if defined(UT)
TEST(sdl2_video, delete_device)
{
    delete_device(NULL);
    TEST_PASS();
}
#endif

int create_window(_THIS, SDL_Window *w)
{
    debug(SDL"call %s(win=%p)\n", __func__, w);

    if (!w) {
        error(SDL"invalid window\n");
        return -1;
    }

    debug(SDL"window w=%d, h=%d\n", w->w, w->h);

    myvid.window = w;

#if !defined(UT)
    SDL_SetMouseFocus(w);
    SDL_SetKeyboardFocus(w);
#endif

    return 0;
#endif

#if defined(UT)
TEST(sdl2_video, create_window)
{
    const int w = 320;
    const int h  =240;
    SDL_Window win = { 0 };

    win.w = w;
    win.h = h;
    TEST_ASSERT_EQUAL_INT(-1, create_window(NULL, NULL));
    TEST_ASSERT_EQUAL_INT( 0, create_window(NULL, &win));
    TEST_ASSERT_EQUAL_INT(w, myvid.window->w);
    TEST_ASSERT_EQUAL_INT(h, myvid.window->h);
}
#endif

void prehook_cb_savestate_pre(void)
{
#if !defined(UT) && !defined(MIYOO_FLIP)
    asm volatile (
        "mov r1, %0                 \n"
        "mov r2, #1                 \n"
        "str r2, [r1]               \n"
        "add sp, sp, #(0x20 + 0)    \n"
        "ldr pc, [sp], #4           \n"
        ::"r"(&myvid.nds.busy_wait):
    );
#endif
    memset(&drastic_menu, 0, sizeof(drastic_menu));
    return 0;
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_savestate_pre)
{
    prehook_cb_savestate_pre();
    TEST_PASS();
}
#endif

void prehook_cb_savestate_post(void)
{
    static int need_loadstate = 15;
    static int show_info_cnt = 0;
    static int cur_fb_w = 0;
    static int cur_volume = 0;
    static int cur_dis_mode = 0;
    static int cur_touchpad = 0;
    static int cur_theme_sel = 0;
    static int cur_pixel_filter = 0;
    static int pre_dis_mode = NDS_SCREEN_LAYOUT_8;
    static int pre_hres_mode = NDS_SCREEN_LAYOUT_17;
    static char show_info_buf[MAX_PATH << 1] = {0};
    static int bat_chk_cnt = BAT_CHK_CNT;
    static int col_fg = 0xe0e000;
    static int col_bg = 0x000000;

    int idx = 0;
    int screen_cnt = 0;
    char buf[MAX_PATH] = {0};
    int cur_sel = gfx.lcd.cur_sel ^ 1;

    screen_cnt = 2;
    if (nds.auto_state > 0) {
        if (need_loadstate > 0) {
            need_loadstate-= 1;
            if (need_loadstate == 0) {
                invoke_drastic_load_state(nds.auto_slot);
            }
        }
    }

    if (nds.menu.enable) {
        need_reload_bg = RELOAD_BG_COUNT;
        return 0;
    }

    if (nds.menu.drastic.enable) {
        nds.menu.drastic.enable = 0;
        need_reload_bg = RELOAD_BG_COUNT;
    }

    if ((cur_fb_w != FB_W) ||
        (nds.shot.take) ||
        (cur_touchpad != nds.pen.pos) ||
        (cur_dis_mode != nds.dis_mode) ||
        (cur_theme_sel != nds.theme.sel) ||
        (cur_pixel_filter != pixel_filter) ||
        (cur_volume != nds.volume))
    {
        if (cur_fb_w != FB_W) {
            show_info_cnt = 150;
            snprintf(show_info_buf, sizeof(show_info_buf), " %d x %d ", FB_W, FB_H);
        }
        else if (cur_volume != nds.volume) {
            show_info_cnt = 50;
            snprintf(show_info_buf, sizeof(show_info_buf), " %s %d ", to_lang("Volume"), nds.volume);
        }
        else if (cur_touchpad != nds.pen.pos) {
            show_info_cnt = 50;
            snprintf(show_info_buf, sizeof(show_info_buf), " %s %d ", to_lang("Touchpad"), nds.pen.pos);
        }
        else if (cur_theme_sel != nds.theme.sel) {
            show_info_cnt = 50;
            if ((nds.theme.max > 0) && (nds.theme.sel < nds.theme.max)) {
                if (get_dir_path(nds.theme.path, nds.theme.sel, buf) == 0) {
                    int off = strlen(nds.theme.path);
                    snprintf(show_info_buf, sizeof(show_info_buf), " %s %s ", to_lang("Wallpaper"), &buf[off + 1]);
                }
                else {
                    snprintf(show_info_buf, sizeof(show_info_buf), " %s %d ", to_lang("Wallpaper"), nds.theme.sel);
                }
            }
            else {
                snprintf(show_info_buf, sizeof(show_info_buf), " %s %s ", to_lang("Wallpaper"), to_lang("None"));
            }
        }
        else if (cur_pixel_filter != pixel_filter) {
            show_info_cnt = 50;
            snprintf(show_info_buf, sizeof(show_info_buf), " %s ", to_lang(pixel_filter ? "Pixel" : "Blur"));
        }
        else if (nds.shot.take) {
            show_info_cnt = 50;
            nds.shot.take = 0;
            snprintf(show_info_buf, sizeof(show_info_buf), " %s ", to_lang("Take Screenshot"));
        }

        cur_fb_w = FB_W;
        cur_theme_sel = nds.theme.sel;
        cur_volume = nds.volume;
        cur_dis_mode = nds.dis_mode;
        cur_touchpad = nds.pen.pos;
        cur_pixel_filter = pixel_filter;
        need_reload_bg = RELOAD_BG_COUNT;
    }

    if (show_info_cnt == 0) {
        need_reload_bg = RELOAD_BG_COUNT;
        show_info_cnt = -1;
        col_fg = 0xe0e000;
        col_bg = 0x000000;
    }
        
    if (nds.defer_update_bg > 0) {
        nds.defer_update_bg-= 1;
    }
    else if (nds.defer_update_bg == 0) {
        nds.defer_update_bg = -1;
        need_reload_bg = RELOAD_BG_COUNT;
    }

    if (nds.state) {
        if (nds.state & NDS_STATE_QSAVE) {
            show_info_cnt = 50;
            snprintf(show_info_buf, sizeof(show_info_buf), " %s ", to_lang("Quick Save"));
            nds.state&= ~NDS_STATE_QSAVE;
        }
        else if (nds.state & NDS_STATE_QLOAD) {
            show_info_cnt = 50;
            snprintf(show_info_buf, sizeof(show_info_buf), " %s ", to_lang("Quick Load"));
            nds.state&= ~NDS_STATE_QLOAD;
        }
        else if (nds.state & NDS_STATE_FF) {
            show_info_cnt = 50;
            snprintf(show_info_buf, sizeof(show_info_buf), " %s ", to_lang("Fast Forward"));
            nds.state&= ~NDS_STATE_FF;
        }
    }

    if (nds.chk_bat) {
        bat_chk_cnt -= 1;
        if (bat_chk_cnt <= 0) {
            int v = get_bat_val();

            if (v <= 10) {
                show_info_cnt = 50;
                col_fg = 0xffffff;
                col_bg = 0xff0000;
                snprintf(show_info_buf, sizeof(show_info_buf), " %s %d%% ", to_lang("Battery"), v);
            }

            bat_chk_cnt = BAT_CHK_CNT;
            if (v <= 5) {
                bat_chk_cnt /= 2;
            }
        }
    }

//    nds.screen.bpp = *((uint32_t *)VAR_SDL_SCREEN_BPP);
//    nds.screen.init = *((uint32_t *)VAR_SDL_SCREEN_NEED_INIT);

    if (need_reload_bg) {
        reload_bg();
        need_reload_bg -= 1;
    }

    for (idx = 0; idx < screen_cnt; idx++) {
        int screen0 = 0;
        int screen1 = 0;
        int show_pen = 1;
        int need_update = 1;
        int rotate = E_MI_GFX_ROTATE_180;
        SDL_Rect srt = {0, 0, NDS_W, NDS_H};
        SDL_Rect drt = {0, 0, 160, 120};

//        nds.screen.hres_mode[idx] = idx ?
//            *((uint8_t *)VAR_SDL_SCREEN1_HRES_MODE):
//            *((uint8_t *)VAR_SDL_SCREEN0_HRES_MODE);

        nds.screen.pixels[idx] = gfx.lcd.virAddr[cur_sel][idx];
        if (nds.screen.hres_mode[idx]) {
            srt.w = NDS_Wx2;
            srt.h = NDS_Hx2;
            nds.screen.pitch[idx] = nds.screen.bpp * srt.w;
            if (nds.hres_mode == 0) {
                nds.pen.pos = 0;
                nds.hres_mode = 1;
                pre_dis_mode = nds.dis_mode;
                nds.dis_mode = pre_hres_mode;
            }
        }
        else {
            srt.w = NDS_W;
            srt.h = NDS_H;
            nds.screen.pitch[idx] = nds.screen.bpp * srt.w;

            drt.y = idx * 120;
            screen0 = (idx == 0);
            screen1 = (idx != 0);
            show_pen = nds.pen.pos ? screen1 : screen0;
            if (nds.hres_mode == 1) {
                nds.hres_mode = 0;
                pre_hres_mode = nds.dis_mode;
                nds.dis_mode = pre_dis_mode;
            }
        }

        switch (nds.dis_mode) {
        case NDS_SCREEN_LAYOUT_0:
            if (screen1) {
                drt.x = 0;
                drt.y = 0;
                drt.w = FB_W;
                drt.h = FB_H;
                show_pen = 1;
                nds.pen.pos = 1;
            }
            else {
                show_pen = 0;
                need_update = 0;
            }
            break;
        case NDS_SCREEN_LAYOUT_1:
            if (screen1) {
                drt.x = 0;
                drt.y = 0;
                drt.w = FB_W;
                drt.h = FB_H;
                show_pen = 1;
                nds.pen.pos = 1;
            }
            else {
                show_pen = 0;
                need_update = 0;
            }
            break;
        case NDS_SCREEN_LAYOUT_2:
            if (screen1) {
                drt.w = NDS_W * 2;
                drt.h = NDS_H * 2;
                drt.x = (FB_W - drt.w) / 2;
                drt.y = (FB_H - drt.h) / 2;
                show_pen = 1;
                nds.pen.pos = 1;
            }
            else {
                show_pen = 0;
                need_update = 0;
            }
            break;
        case NDS_SCREEN_LAYOUT_3:
            if (screen1) {
                drt.x = 0;
                drt.y = 0;
                drt.w = FB_W;
                drt.h = FB_H;
                show_pen = 1;
                nds.pen.pos = 1;
            }
            else {
                show_pen = 0;
                need_update = 0;
            }
            break;
        case NDS_SCREEN_LAYOUT_4:
            drt.w = NDS_W;
            drt.h = NDS_H;
            drt.x = (FB_W - drt.w) / 2;
            if (nds.enable_752x560 == 0) {
                drt.y = screen0 ? 48 : 48 + drt.h;
            }
            else {
                drt.y = screen0 ? 88 : 88 + drt.h;
            }
            break;
        case NDS_SCREEN_LAYOUT_5:
            if (nds.enable_752x560 == 0) {
                drt.w = 320;
                drt.h = 240;
            }
            else {
                drt.w = 373;
                drt.h = 280;
            }
            drt.x = (FB_W - drt.w) / 2;
            drt.y = screen0 ? 0 : drt.h;
            break;
        case NDS_SCREEN_LAYOUT_6:
            drt.w = NDS_W;
            drt.h = NDS_H;
            if (nds.enable_752x560 == 0) {
                drt.x = screen0 ? 64 : 64 + drt.w;
            }
            else {
                drt.x = screen0 ? 120 : 120 + drt.w;
            }
            drt.y = (FB_H - drt.h) / 2;
            break;
        case NDS_SCREEN_LAYOUT_7:
            if (nds.enable_752x560 == 0) {
                drt.w = 320;
                drt.h = 240;
                drt.x = screen0 ? 0 : drt.w;
            }
            else {
                drt.w = 373;
                drt.h = 280;
                drt.x = screen0 ? 3 : (drt.w + 3);
            }
            drt.y = (FB_H - drt.h) / 2;
            break;
        case NDS_SCREEN_LAYOUT_8:
            drt.x = screen1 ? 160 : 0;
            drt.y = screen1 ? 120 : 0;
            drt.w = screen1 ? (FB_W - 160) : 160;
            drt.h = screen1 ? (FB_H - 120) : 120;
            break;
        case NDS_SCREEN_LAYOUT_9:
            drt.x = screen1 ? NDS_W : 0;
            drt.y = screen1 ? NDS_H : 0;
            drt.w = screen1 ? (FB_W - NDS_W) : NDS_W;
            drt.h = screen1 ? (FB_H - NDS_H) : NDS_H;
            break;
        case NDS_SCREEN_LAYOUT_16:
            drt.w = screen1 ? (FB_W - 160) : 160;
            drt.h = screen1 ? (FB_H - 120) : 120;
            drt.x = screen1 ? ((FB_W - drt.w) / 2) : ((FB_W - drt.w) / 2);
            drt.y = screen1 ? 120 : 0;
            break;
        case NDS_SCREEN_LAYOUT_10:
            drt.w = screen0 ? NDS_W : (FB_W - NDS_W);
            drt.h = screen0 ? NDS_H : (FB_H - NDS_H);
            drt.x = screen0 ? ((FB_W - drt.w) / 2) : ((FB_W - drt.w) / 2);
            drt.y = screen0 ? 0 : NDS_H;
            break;
        case NDS_SCREEN_LAYOUT_11:
            drt.w = screen0 ? NDS_W : (FB_W - NDS_W);
            drt.h = screen0 ? NDS_H : (FB_H - NDS_H);
            drt.x = screen0 ? 0 : NDS_W;
            drt.y = screen0 ? ((FB_H - drt.h) / 2) : ((FB_H - drt.h) / 2);
            break;
        case NDS_SCREEN_LAYOUT_12:
        case NDS_SCREEN_LAYOUT_13:
            if (nds.enable_752x560 == 0) {
                drt.x = screen0 ? 0 : 320;
                drt.y = 26;
                drt.w = 427;
                drt.h = 320;
            }
            else {
                drt.x = screen0 ? 0 : 376;
                drt.y = 29;
                drt.w = 501;
                drt.h = 376;
            }
            rotate = (nds.dis_mode == NDS_SCREEN_LAYOUT_12) ? E_MI_GFX_ROTATE_90 : E_MI_GFX_ROTATE_270;
            break;
        case NDS_SCREEN_LAYOUT_14:
        case NDS_SCREEN_LAYOUT_15:
            if (nds.enable_752x560 == 0) {
                drt.x = screen0 ? 0 : 320;
                drt.y = 0;
                drt.w = 480;
                drt.h = 320;
            }
            else {
                drt.x = screen0 ? 0 : 376;
                drt.y = 0;
                drt.w = 560;
                drt.h = 376;
            }
            rotate = (nds.dis_mode == NDS_SCREEN_LAYOUT_14) ? E_MI_GFX_ROTATE_90 : E_MI_GFX_ROTATE_270;
            break;
        case NDS_SCREEN_LAYOUT_17:
            drt.w = NDS_Wx2;
            drt.h = NDS_Hx2;
            drt.x = (FB_W - drt.w) / 2;
            drt.y = (FB_H - drt.h) / 2;
            break;
        case NDS_SCREEN_LAYOUT_18:
            drt.x = 0;
            drt.y = 0;
            drt.w = FB_W;
            drt.h = FB_H;
            break;
        }

#if defined(A30)
        if (rotate == E_MI_GFX_ROTATE_180) {
            drt.y = (DEF_FB_H - drt.y) - drt.h;
            drt.x = (DEF_FB_W - drt.x) - drt.w;
        }
        else if (rotate == E_MI_GFX_ROTATE_90) {
            drt.x = (drt.x == 0) ? 320 : 0;
        }

#if defined(A30)
        if (show_pen &&
            ((myevent.dev.mode == DEV_MODE_PEN) ||
            (mycfg.pen.show.count &&
            (mycfg.joy.left.mode == JOY_MODE_PEN))))
        {
#else
        if (show_pen && (myevent.dev.mode == DEV_MODE_PEN)) {
#endif
#else
        if (show_pen && (myevent.dev.mode == DEV_MODE_PEN)) {
#endif
            draw_pen(nds.screen.pixels[idx], srt.w, nds.screen.pitch[idx]);

#if defined(A30)
            if (nds.joy.show_cnt && (nds.joy.mode == MYJOY_MODE_STYLUS)) {
                nds.joy.show_cnt -= 1;
            }
#endif
        }

#if defined(A30)
        if ((idx == 0) && (nds.alpha.border > 0) && ((nds.dis_mode == NDS_SCREEN_LAYOUT_0) || (nds.dis_mode == NDS_SCREEN_LAYOUT_1))) {
            int c0 = 0;
            uint32_t *p0 = NULL;
            uint32_t *p1 = NULL;
            uint32_t col[] = { 0, 0xffffff, 0xff0000, 0x00ff00, 0x0000ff, 0x000000, 0xffff00, 0x00ffff };

            p0 = (uint32_t *)nds.screen.pixels[idx];
            p1 = (uint32_t *)nds.screen.pixels[idx] + ((srt.h - 1) * srt.w);
            for (c0 = 0; c0 < srt.w; c0++) {
                *p0++ = col[nds.alpha.border];
                *p1++ = col[nds.alpha.border];
            }

            p0 = (uint32_t *)nds.screen.pixels[idx];
            p1 = (uint32_t *)nds.screen.pixels[idx] + (srt.w - 1);
            for (c0 = 0; c0 < srt.h; c0++) {
                *p0 = col[nds.alpha.border];
                *p1 = col[nds.alpha.border];
                p0 += srt.w;
                p1 += srt.w;
            }
        }
        glBindTexture(GL_TEXTURE_2D, vid.texID[idx]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        if (pixel_filter) {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        }
        else {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        }
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, srt.w, srt.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, nds.screen.pixels[idx]);
#endif

        if (need_update) {
#if defined(MINI)
            MI_SYS_FlushInvCache(nds.screen.pixels[idx], nds.screen.pitch[idx] * srt.h);
#endif

#if defined(A30)
            GFX_Copy(idx, nds.screen.pixels[idx], srt, drt, nds.screen.pitch[idx], 0, rotate);
#else
            GFX_Copy(-1, nds.screen.pixels[idx], srt, drt, nds.screen.pitch[idx], 0, rotate);
#endif

#if defined(MINI) || defined(A30)
            switch (nds.dis_mode) {
            case NDS_SCREEN_LAYOUT_0:
                drt.x = 0;
                drt.y = 0;
                drt.w = 160;
                drt.h = 120;
#if defined(A30)
                switch (nds.alpha.pos) {
                case 0:
                    drt.x = DEF_FB_W - drt.w;
                    drt.y = 0;
                    break;
                case 1:
                    drt.x = 0;
                    drt.y = 0;
                    break;
                case 2:
                    drt.x = 0;
                    drt.y = DEF_FB_H - drt.h;
                    break;
                case 3:
                    drt.x = DEF_FB_W - drt.w;
                    drt.y = DEF_FB_H - drt.h;
                    break;
                }
                GFX_Copy(TEX_SCR0, nds.screen.pixels[0], srt, drt, nds.screen.pitch[0], 1, rotate);
#else
                GFX_Copy(-1, nds.screen.pixels[0], srt, drt, nds.screen.pitch[0], 1, rotate);
#endif
                break;
            case NDS_SCREEN_LAYOUT_1:
                drt.x = 0;
                drt.y = 0;
                drt.w = NDS_W;
                drt.h = NDS_H;
#if defined(A30)
                switch (nds.alpha.pos) {
                case 0:
                    drt.x = DEF_FB_W - drt.w;
                    drt.y = 0;
                    break;
                case 1:
                    drt.x = 0;
                    drt.y = 0;
                    break;
                case 2:
                    drt.x = 0;
                    drt.y = DEF_FB_H - drt.h;
                    break;
                case 3:
                    drt.x = DEF_FB_W - drt.w;
                    drt.y = DEF_FB_H - drt.h;
                    break;
                }
                GFX_Copy(TEX_SCR0, nds.screen.pixels[0], srt, drt, nds.screen.pitch[0], 1, rotate);
#else 
                GFX_Copy(-1, nds.screen.pixels[0], srt, drt, nds.screen.pitch[0], 1, rotate);
#endif
                break;
            }
#endif
        }

        if (nds.screen.hres_mode[idx]) {
            break;
        }
    }

    if (show_info_cnt > 0) {
        draw_info(NULL, show_info_buf, FB_W - get_font_width(show_info_buf), 0, col_fg, col_bg);
        show_info_cnt-= 1;
    }
    else if (show_fps && fps_info) {
        SDL_Rect rt = {0};

        rt.x = FB_W - fps_info->w;
        rt.y = 0;
        rt.w = fps_info->w;
        rt.h = fps_info->h;
        GFX_Copy(-1, fps_info->pixels, fps_info->clip_rect, rt, fps_info->pitch, 0, E_MI_GFX_ROTATE_180);
    }

    if (nds.screen.init) {
        //nds_set_screen_menu_off _func = (nds_set_screen_menu_off)FUN_SET_SCREEN_MENU_OFF;
        //_func();
    }
    GFX_Flip();
    return 0;
}

void prehook_cb_savestate_pre(void)
{
#if !defined(UT) && !defined(MIYOO_FLIP)
    asm volatile (
        "mov r1, %0                 \n"
        "mov r2, #1                 \n"
        "str r2, [r1]               \n"
        "add sp, sp, #(0x20 + 0)    \n"
        "ldr pc, [sp], #4           \n"
        ::"r"(&savestate_busy):
    );
#endif
}

void sdl_savestate_post(void)
{
#ifndef UT
    asm volatile (
        "mov r1, %0                 \n"
        "mov r2, #0                 \n"
        "str r2, [r1]               \n"
        "add sp, sp, #(0x18 + 0)    \n"
        "ldr pc, [sp], #4           \n"
        ::"r"(&savestate_busy):
    );
#endif
}

void sigterm_handler(int sig)
{
    static int ran = 0;

    if (ran == 0) {
        ran = 1;
        printf(PREFIX"Oops sigterm !\n");
        invoke_drastic_quit();
    }
}

static void strip_newline(char *p)
{
    int cc = 0, len = strlen(p);

    for(cc=0; cc<len; cc++) {
        if ((p[cc] == '\r') || (p[cc] == '\n')) {
            p[cc] = 0;
            break;
        }
    }
}

static void *video_handler(void *threadid)
{
#if defined(A30)
    EGLint egl_major = 0;
    EGLint egl_minor = 0;
    EGLint num_configs = 0;
    EGLint config_attribs[] = {
        EGL_SURFACE_TYPE,    EGL_WINDOW_BIT,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
        EGL_RED_SIZE,   8,  
        EGL_GREEN_SIZE, 8,
        EGL_BLUE_SIZE,  8,  
        EGL_ALPHA_SIZE, 8,
        EGL_NONE
    };
    EGLint window_attributes[] = { 
        EGL_RENDER_BUFFER, EGL_BACK_BUFFER,
        EGL_NONE
    };
    EGLint const context_attributes[] = {
        EGL_CONTEXT_CLIENT_VERSION, 2,
        EGL_NONE,
    };
  
    vid.eglDisplay = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    eglInitialize(vid.eglDisplay, &egl_major, &egl_minor);
    eglChooseConfig(vid.eglDisplay, config_attribs, &vid.eglConfig, 1, &num_configs);
    vid.eglSurface = eglCreateWindowSurface(vid.eglDisplay, vid.eglConfig, 0, window_attributes);
    vid.eglContext = eglCreateContext(vid.eglDisplay, vid.eglConfig, EGL_NO_CONTEXT, context_attributes);
    eglMakeCurrent(vid.eglDisplay, vid.eglSurface, vid.eglSurface, vid.eglContext);
  
    vid.vShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vid.vShader, 1, &vShaderSrc, NULL);
    glCompileShader(vid.vShader);
  
    vid.fShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(vid.fShader, 1, &fShaderSrc, NULL);
    glCompileShader(vid.fShader);
   
    vid.pObject = glCreateProgram();
    glAttachShader(vid.pObject, vid.vShader);
    glAttachShader(vid.pObject, vid.fShader);
    glLinkProgram(vid.pObject);
    glUseProgram(vid.pObject);

    eglSwapInterval(vid.eglDisplay, 1);
    vid.posLoc = glGetAttribLocation(vid.pObject, "a_position");
    vid.texLoc = glGetAttribLocation(vid.pObject, "a_texCoord");
    vid.samLoc = glGetUniformLocation(vid.pObject, "s_texture");
    vid.alphaLoc = glGetUniformLocation(vid.pObject, "s_alpha");

    glGenTextures(TEX_MAX, vid.texID);

    glViewport(0, 0, DEF_FB_H, DEF_FB_W);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnableVertexAttribArray(vid.posLoc);
    glEnableVertexAttribArray(vid.texLoc);
    glUniform1i(vid.samLoc, 0);
    glUniform1f(vid.alphaLoc, 0.0);

    pixel_filter = 0;
    gfx.lcd.virAddr[0][0] = malloc(SCREEN_DMA_SIZE);
    gfx.lcd.virAddr[0][1] = malloc(SCREEN_DMA_SIZE);
    gfx.lcd.virAddr[1][0] = malloc(SCREEN_DMA_SIZE);
    gfx.lcd.virAddr[1][1] = malloc(SCREEN_DMA_SIZE);
    printf(PREFIX"Ping-pong Buffer %p\n", gfx.lcd.virAddr[0][0]);
    printf(PREFIX"Ping-pong Buffer %p\n", gfx.lcd.virAddr[0][1]);
    printf(PREFIX"Ping-pong Buffer %p\n", gfx.lcd.virAddr[1][0]);
    printf(PREFIX"Ping-pong Buffer %p\n", gfx.lcd.virAddr[1][1]);
#endif

    while (is_video_thread_running) {
#if defined(A30)
        if (nds.menu.enable) {
            if (nds.update_menu) {
                nds.update_menu = 0;
                GFX_Copy(-1, cvt->pixels, cvt->clip_rect, cvt->clip_rect, cvt->pitch, 0, E_MI_GFX_ROTATE_180);
                GFX_Flip();
            }
        }
        else if (nds.menu.drastic.enable) {
            if (nds.update_menu) {
                nds.update_menu = 0;
                GFX_Copy(-1, nds.menu.drastic.main->pixels, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->pitch, 0, 0);
                GFX_Flip();
            }
        }
        else if (nds.update_screen) {
#else
        if (nds.update_screen) {
#endif

            process_screen();
            nds.update_screen = 0;
        }
        else {
            usleep(0);
        }
    }

#if defined(A30)
    glDeleteTextures(TEX_MAX, vid.texID);
    eglMakeCurrent(vid.eglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroyContext(vid.eglDisplay, vid.eglContext);
    eglDestroySurface(vid.eglDisplay, vid.eglSurface);
    eglTerminate(vid.eglDisplay);

    free(gfx.lcd.virAddr[0][0]);
    free(gfx.lcd.virAddr[0][1]);
    free(gfx.lcd.virAddr[1][0]);
    free(gfx.lcd.virAddr[1][1]);
#endif
    pthread_exit(NULL);
}

static int lang_unload(void)
{
    int cc = 0;

    for (cc=0; translate[cc]; cc++) {
        if (translate[cc]) {
            free(translate[cc]);
        }
        translate[cc] = NULL;
    }
    memset(translate, 0, sizeof(translate));
    return 0;
}

static int lang_load(const char *lang)
{
    FILE *f = NULL;
    char buf[MAX_PATH << 1] = {0};

    if (strcasecmp(nds.lang.trans[DEF_LANG_SLOT], DEF_LANG_LANG)) {
        snprintf(buf, sizeof(buf), "%s/%s", nds.lang.path, lang);
        f = fopen(buf, "r");

        if (f != NULL) {
            int cc = 0, len = 0;

            memset(buf, 0, sizeof(buf));
            while (fgets(buf, sizeof(buf), f)) {
                strip_newline(buf);
                len = strlen(buf) + 2;
                if (len == 0) {
                    continue;
                }

                if (translate[cc] != NULL) {
                    free(translate[cc]);
                }
                translate[cc] = malloc(len);
                if (translate[cc] != NULL) {
                    memcpy(translate[cc], buf, len);
                    //printf(PREFIX"Translate: \'%s\'(len=%d)\n", translate[cc], len);
                }
                cc+= 1;
                if (cc >= MAX_LANG_LINE) {
                    break;
                }
                memset(buf, 0, sizeof(buf));
            }
            fclose(f);
        }
        else {
            printf(PREFIX"Failed to open lang folder \'%s\'\n", nds.lang.path);
        }
    }
    return 0;
}

static void lang_enum(void)
{
    int idx = 2;
    DIR *d = NULL;
    struct dirent *dir = NULL;

    strcpy(nds.lang.trans[DEF_LANG_SLOT], DEF_LANG_LANG);
    strcpy(nds.lang.trans[DEF_LANG_SLOT + 1], DEF_LANG_LANG);
    d = opendir(nds.lang.path);
    if (d) {
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

            //printf(PREFIX"found lang \'lang[%d]=%s\'\n", idx, dir->d_name);
            strcpy(nds.lang.trans[idx], dir->d_name);
            idx+= 1;
            if (idx >= MAX_LANG_FILE) {
                break;
            }
        }
        closedir(d);
    }
}

static int read_config(void)
{
//    struct json_object *jval = NULL;
//    struct json_object *jfile = NULL;
//
//    jfile = json_object_from_file(nds.cfg.path);
//    if (jfile == NULL) {
//        printf(PREFIX"Failed to read settings from json file (%s)\n", nds.cfg.path);
//        return -1;
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_PEN_SEL, &jval);
//    if (jval) {
//        nds.pen.sel = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_PEN_POS, &jval);
//    if (jval) {
//        nds.pen.pos = json_object_get_int(jval) == 0 ? 0 : 1;
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_THEME_SEL, &jval);
//    if (jval) {
//        nds.theme.sel = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_DIS_MODE, &jval);
//    if (jval) {
//        nds.dis_mode = json_object_get_int(jval);
//    }
//    
//    json_object_object_get_ex(jfile, JSON_NDS_ALT_MODE, &jval);
//    if (jval) {
//        nds.alt_mode = json_object_get_int(jval);
//    }
//    
//    json_object_object_get_ex(jfile, JSON_NDS_PEN_XV, &jval);
//    if (jval) {
//        nds.pen.xv = json_object_get_int(jval);
//    }
//    
//    json_object_object_get_ex(jfile, JSON_NDS_PEN_YV, &jval);
//    if (jval) {
//        nds.pen.yv = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_VALUE, &jval);
//    if (jval) {
//        nds.alpha.val = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_POSITION, &jval);
//    if (jval) {
//        nds.alpha.pos = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_BORDER, &jval);
//    if (jval) {
//        nds.alpha.border = json_object_get_int(jval);
//        nds.alpha.border%= NDS_BORDER_MAX;
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_MAX_CPU, &jval);
//    if (jval) {
//        nds.maxcpu = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_MIN_CPU, &jval);
//    if (jval) {
//        nds.mincpu = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_MAX_CORE, &jval);
//    if (jval) {
//        nds.maxcore = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_MIN_CORE, &jval);
//    if (jval) {
//        nds.mincore = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_OVERLAY, &jval);
//    if (jval) {
//        nds.overlay.sel = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_SWAP_L1L2, &jval);
//    if (jval) {
//        nds.swap_l1l2 = json_object_get_int(jval) ? 1 : 0;
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_SWAP_R1R2, &jval);
//    if (jval) {
//        nds.swap_r1r2 = json_object_get_int(jval) ? 1 : 0;
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_KEYS_ROTATE, &jval);
//    if (jval) {
//        nds.keys_rotate = json_object_get_int(jval) % 3;
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_CHK_BAT, &jval);
//    if (jval) {
//        nds.chk_bat = json_object_get_int(jval) ? 1: 0;
//    }
//
//#if defined(A30)
//    json_object_object_get_ex(jfile, JSON_NDS_JOY_MODE, &jval);
//    if (jval) {
//        nds.joy.mode = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_JOY_DZONE, &jval);
//    if (jval) {
//        nds.joy.dzone = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_JOY_CUSKEY0, &jval);
//    if (jval) {
//        nds.joy.cuskey[0] = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_JOY_CUSKEY1, &jval);
//    if (jval) {
//        nds.joy.cuskey[1] = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_JOY_CUSKEY2, &jval);
//    if (jval) {
//        nds.joy.cuskey[2] = json_object_get_int(jval);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_JOY_CUSKEY3, &jval);
//    if (jval) {
//        nds.joy.cuskey[3] = json_object_get_int(jval);
//    }
//#endif
//
//    nds.menu.c0 = 0xffffff;
//    json_object_object_get_ex(jfile, JSON_NDS_MENU_C0, &jval);
//    if (jval) {
//        const char *p = json_object_get_string(jval);
//        nds.menu.c0 = strtol(p, NULL, 16);
//    }
//
//    nds.menu.c1 = 0x000000;
//    json_object_object_get_ex(jfile, JSON_NDS_MENU_C1, &jval);
//    if (jval) {
//        const char *p = json_object_get_string(jval);
//        nds.menu.c1 = strtol(p, NULL, 16);
//    }
//
//    nds.menu.c2 = 0x289a35;
//    json_object_object_get_ex(jfile, JSON_NDS_MENU_C2, &jval);
//    if (jval) {
//        const char *p = json_object_get_string(jval);
//        nds.menu.c2 = strtol(p, NULL, 16);
//    }
//
//    nds.auto_state = 1;
//    json_object_object_get_ex(jfile, JSON_NDS_AUTO_STATE, &jval);
//    if (jval) {
//        nds.auto_state = json_object_get_int(jval) ? 1 : 0;
//    }
//
//    nds.auto_slot = 1;
//    json_object_object_get_ex(jfile, JSON_NDS_AUTO_SLOT, &jval);
//    if (jval) {
//        nds.auto_slot = json_object_get_int(jval);
//    }
//
//    lang_enum();
//    json_object_object_get_ex(jfile, JSON_NDS_LANG, &jval);
//    if (jval) {
//        const char *lang = json_object_get_string(jval);
//
//        strcpy(nds.lang.trans[DEF_LANG_SLOT], lang);
//        lang_load(lang);
//    }
//
//    json_object_object_get_ex(jfile, JSON_NDS_HOTKEY, &jval);
//    if (jval) {
//        nds.hotkey = json_object_get_int(jval);
//    }
//
//    nds.menu.show_cursor = 0;
//    json_object_object_get_ex(jfile, JSON_NDS_MENU_CURSOR, &jval);
//    if (jval) {
//        nds.menu.show_cursor = json_object_get_int(jval);
//    }
//
//    nds.fast_forward = 6;
//    json_object_object_get_ex(jfile, JSON_NDS_FAST_FORWARD, &jval);
//    if (jval) {
//        nds.fast_forward = json_object_get_int(jval);
//    }
//
//#if defined(MINI) || defined(A30)
//    json_object_object_get_ex(jfile, JSON_NDS_STATES, &jval);
//    if (jval) {
//        struct stat st = {0};
//        const char *path = json_object_get_string(jval);
//
//        if ((path != NULL) && (path[0] != 0)) {
//            strcpy(nds.states.path, path);
//
//            if (stat(nds.states.path, &st) == -1) {
//                mkdir(nds.states.path, 0755);
//                printf(PREFIX"Create states folder in \'%s\'\n", nds.states.path);
//            }
//        }
//    }
//#endif
//
//    if (nds.dis_mode > NDS_SCREEN_LAYOUT_LAST) {
//        nds.dis_mode = NDS_SCREEN_LAYOUT_8;
//        nds.alt_mode = NDS_SCREEN_LAYOUT_2;
//    }
//
//    nds.menu.sel = 0;
//    json_object_object_get_ex(jfile, JSON_NDS_MENU_BG, &jval);
//    if (jval) {
//        nds.menu.sel = json_object_get_int(jval);
//        if (nds.menu.sel >= nds.menu.max) {
//            nds.menu.sel = 0;
//        }
//    }
//    reload_menu();
//
//    reload_pen();
//#if defined(MINI) || defined(A30)
//    reload_overlay();
//#endif
//    json_object_put(jfile);
//
//#if defined(A30)
//    nds.joy.max_x = 200;
//    nds.joy.zero_x = 135;
//    nds.joy.min_x = 75;
//    nds.joy.max_y = 200;
//    nds.joy.zero_y = 135;
//    nds.joy.min_y = 75;
//#endif
    return 0;
}

static int write_config(void)
{
//    struct json_object *jfile = NULL;
//
//    jfile = json_object_from_file(nds.cfg.path);
//    if (jfile == NULL) {
//        printf(PREFIX"Failed to write settings to json file (%s)\n", nds.cfg.path);
//        return -1;
//    }
//
//    if (nds.dis_mode > NDS_SCREEN_LAYOUT_LAST) {
//        nds.dis_mode = NDS_SCREEN_LAYOUT_8;
//        nds.alt_mode = NDS_SCREEN_LAYOUT_2;
//    }
//
//    json_object_object_add(jfile, JSON_NDS_PEN_SEL, json_object_new_int(nds.pen.sel));
//    json_object_object_add(jfile, JSON_NDS_THEME_SEL, json_object_new_int(nds.theme.sel));
//    json_object_object_add(jfile, JSON_NDS_DIS_MODE, json_object_new_int(nds.dis_mode));
//    json_object_object_add(jfile, JSON_NDS_ALPHA_VALUE, json_object_new_int(nds.alpha.val));
//    json_object_object_add(jfile, JSON_NDS_ALPHA_POSITION, json_object_new_int(nds.alpha.pos));
//    json_object_object_add(jfile, JSON_NDS_ALPHA_BORDER, json_object_new_int(nds.alpha.border));
//    json_object_object_add(jfile, JSON_NDS_OVERLAY, json_object_new_int(nds.overlay.sel));
//    json_object_object_add(jfile, JSON_NDS_ALT_MODE, json_object_new_int(nds.alt_mode));
//    json_object_object_add(jfile, JSON_NDS_KEYS_ROTATE, json_object_new_int(nds.keys_rotate));
//    json_object_object_add(jfile, JSON_NDS_LANG, json_object_new_string(nds.lang.trans[DEF_LANG_SLOT]));
//    json_object_object_add(jfile, JSON_NDS_HOTKEY, json_object_new_int(nds.hotkey));
//    json_object_object_add(jfile, JSON_NDS_SWAP_L1L2, json_object_new_int(nds.swap_l1l2));
//    json_object_object_add(jfile, JSON_NDS_SWAP_R1R2, json_object_new_int(nds.swap_r1r2));
//    json_object_object_add(jfile, JSON_NDS_PEN_XV, json_object_new_int(nds.pen.xv));
//    json_object_object_add(jfile, JSON_NDS_PEN_YV, json_object_new_int(nds.pen.yv));
//    json_object_object_add(jfile, JSON_NDS_MENU_BG, json_object_new_int(nds.menu.sel));
//    json_object_object_add(jfile, JSON_NDS_MENU_CURSOR, json_object_new_int(nds.menu.show_cursor));
//    json_object_object_add(jfile, JSON_NDS_FAST_FORWARD, json_object_new_int(nds.fast_forward));
//    json_object_object_add(jfile, JSON_NDS_CHK_BAT, json_object_new_int(nds.chk_bat));
//
//#if defined(A30)
//    json_object_object_add(jfile, JSON_NDS_JOY_MODE, json_object_new_int(nds.joy.mode));
//    json_object_object_add(jfile, JSON_NDS_JOY_DZONE, json_object_new_int(nds.joy.dzone));
//    json_object_object_add(jfile, JSON_NDS_JOY_CUSKEY0, json_object_new_int(nds.joy.cuskey[0]));
//    json_object_object_add(jfile, JSON_NDS_JOY_CUSKEY1, json_object_new_int(nds.joy.cuskey[1]));
//    json_object_object_add(jfile, JSON_NDS_JOY_CUSKEY2, json_object_new_int(nds.joy.cuskey[2]));
//    json_object_object_add(jfile, JSON_NDS_JOY_CUSKEY3, json_object_new_int(nds.joy.cuskey[3]));
//#endif
//    json_object_object_add(jfile, JSON_NDS_CHK_BAT, json_object_new_int(nds.chk_bat));
//
//    json_object_to_file_ext(nds.cfg.path, jfile, JSON_C_TO_STRING_PRETTY);
//    json_object_put(jfile);
//    printf(PREFIX"Wrote changed settings back !\n");
    return 0;
}

#if defined(MINI)
static int get_cpuclock(void)
{
    static const uint64_t divsrc = 432000000llu * 524288;

    int fd_mem = -1;
    void *pll_map = NULL;
    uint32_t rate = 0;
    uint32_t lpf_value = 0;
    uint32_t post_div = 0;

    fd_mem = open("/dev/mem", O_RDWR);
    if (fd_mem < 0) {
        return 0;
    }

    pll_map = mmap(0, PLL_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd_mem, BASE_REG_MPLL_PA);
    if (pll_map) {
        volatile uint8_t* p8 = (uint8_t*)pll_map;
        volatile uint16_t* p16 = (uint16_t*)pll_map;

        lpf_value = p16[0x2a4] + (p16[0x2a6] << 16);
        post_div = p16[0x232] + 1;
        if (lpf_value == 0) {
            lpf_value = (p8[0x2c2 << 1] << 16) + (p8[0x2c1 << 1] << 8) + p8[0x2c0 << 1];
        }

        if (lpf_value && post_div) {
            rate = (divsrc / lpf_value * 2 / post_div * 16);
        }
        printf(PREFIX"Current cpuclock=%u (lpf=%u, post_div=%u)\n", rate, lpf_value, post_div);
        munmap(pll_map, PLL_SIZE);
    }
    close(fd_mem);
    return rate / 1000000;
}

static int set_cpuclock(uint32_t newclock)
{
    int fd_mem = -1;
    void *pll_map = NULL;
    uint32_t post_div = 0;
    char clockstr[16] = {0};
    const char fn_governor[] = "/sys/devices/system/cpu/cpufreq/policy0/scaling_governor";
    const char fn_setspeed[] = "/sys/devices/system/cpu/cpufreq/policy0/scaling_setspeed";

    if ((newclock < nds.mincpu) || (newclock > nds.maxcpu)) {
        return -1;
    }

    fd_mem = open("/dev/mem", O_RDWR);
    if (fd_mem < 0) {
        return -1;
    }

    pll_map = mmap(0, PLL_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd_mem, BASE_REG_MPLL_PA);
    if (pll_map) {
        printf(PREFIX"Set CPU %dMHz\n", newclock);

        newclock*= 1000;
        snprintf(clockstr, sizeof(clockstr), "%d", newclock);
        write_file(fn_governor, "userspace", strlen("userspace"));
        write_file(fn_setspeed, clockstr, strlen(clockstr));

        if (newclock >= 800000) {
            post_div = 2;
        }
        else if (newclock >= 400000) {
            post_div = 4;
        }
        else if (newclock >= 200000) {
            post_div = 8;
        }
        else {
            post_div = 16;
        }

        if (1) {
            static const uint64_t divsrc = 432000000llu * 524288;
            uint32_t rate = (newclock * 1000) / 16 * post_div / 2;
            uint32_t lpf = (uint32_t)(divsrc / rate);
            volatile uint16_t* p16 = (uint16_t*)pll_map;
            uint32_t cur_post_div = (p16[0x232] & 0x0f) + 1;
            uint32_t tmp_post_div = cur_post_div;

            if (post_div > cur_post_div) {
                while (tmp_post_div != post_div) {
                    tmp_post_div <<= 1;
                    p16[0x232] = (p16[0x232] & 0xf0) | ((tmp_post_div - 1) & 0x0f);
                }
            }

            p16[0x2A8] = 0x0000;        // reg_lpf_enable = 0
            p16[0x2AE] = 0x000f;        // reg_lpf_update_cnt = 32
            p16[0x2A4] = lpf & 0xffff;  // set target freq to LPF high
            p16[0x2A6] = lpf >> 16;     // set target freq to LPF high
            p16[0x2B0] = 0x0001;        // switch to LPF control
            p16[0x2B2]|= 0x1000;        // from low to high
            p16[0x2A8] = 0x0001;        // reg_lpf_enable = 1
            while(!(p16[0x2ba] & 1));   // polling done
            p16[0x2A0] = lpf & 0xffff;  // store freq to LPF low
            p16[0x2A2] = lpf >> 16;     // store freq to LPF low

            if (post_div < cur_post_div) {
                while (tmp_post_div != post_div) {
                    tmp_post_div >>= 1;
                    p16[0x232] = (p16[0x232] & 0xf0) | ((tmp_post_div - 1) & 0x0f);
                }
            }
        }
        munmap(pll_map, PLL_SIZE);
    }
    close(fd_mem);
    return 0;
}
#endif

int get_dir_path(const char *path, int desire, char *buf)
{
    DIR *d = NULL;
    int count = 0, r = -1;
    struct dirent *dir = NULL;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (strcmp(dir->d_name, ".") == 0) {
                continue;
            }

            if (strcmp(dir->d_name, "..") == 0) {
                continue;
            }

            if (dir->d_type != DT_DIR) {
                continue;
            }

            if (count == desire) {
                r = snprintf(buf, MAX_PATH, "%s/%s", path, dir->d_name) ? 0 : 1;
                break;
            }
            count+= 1;
        }
        closedir(d);
    }
    return r;
}

static int get_file_path(const char *path, int desire, char *buf, int add_path)
{
    DIR *d = NULL;
    int count = 0, r = -1;
    struct dirent *dir = NULL;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (strcmp(dir->d_name, ".") == 0) {
                continue;
            }

            if (strcmp(dir->d_name, "..") == 0) {
                continue;
            }

            if (dir->d_type == DT_DIR) {
                continue;
            }

            if (count == desire) {
                if (add_path) {
                    r = snprintf(buf, MAX_PATH, "%s/%s", path, dir->d_name) ? 0 : 1;
                }
                else {
                    r = snprintf(buf, MAX_PATH, "%s", dir->d_name) ? 0 : 1;
                }
                break;
            }
            count+= 1;
        }
        closedir(d);
    }
    return r;
}

static int get_dir_count(const char *path)
{
    DIR *d = NULL;
    int count = 0;
    struct dirent *dir = NULL;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (dir->d_type != DT_DIR) {
                continue;
            }
            if (strcmp(dir->d_name, ".") == 0) {
                continue;
            }
            if (strcmp(dir->d_name, "..") == 0) {
                continue;
            }
            count+= 1;
        }
        closedir(d);
    }
    return count;
}

static int get_file_count(const char *path)
{
    DIR *d = NULL;
    int count = 0;
    struct dirent *dir = NULL;

    d = opendir(path);
    if (d) {
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
            count+= 1;
        }
        closedir(d);
    }
    return count;
}

static int get_theme_count(void)
{
    return get_dir_count(nds.theme.path);
}

static int get_menu_count(void)
{
    return get_dir_count(MENU_PATH);
}

static int get_pen_count(void)
{
    return get_file_count(nds.pen.path);
}

static int get_overlay_count(void)
{
    return get_file_count(nds.overlay.path);
}

#if defined(UT)
int fb_init(void)
{
    return 0;
}

int fb_quit(void)
{
    return 0;
}
#endif

#if defined(A30)
static int get_core(int index)
{
    FILE *fd = NULL;
    char buf[255] = {0};

    snprintf(buf, sizeof(buf), "cat /sys/devices/system/cpu/cpu%d/online", index % 4); 
    fd = popen(buf, "r");
    if (fd == NULL) {
        return -1;
    }       
    fgets(buf, sizeof(buf), fd);
    pclose(fd);
    return atoi(buf);
}

static void check_before_set(int num, int v)
{
    char buf[255] = {0};

    if (get_core(num) != v) {
        snprintf(buf, sizeof(buf), "echo %d > /sys/devices/system/cpu/cpu%d/online", v ? 1 : 0, num);
        system(buf);
    }       
}   

static void set_core(int n)
{           
    if (n <= 1) {
        printf(PREFIX"New CPU Core: 1\n");
        check_before_set(0, 1);
        check_before_set(1, 0);
        check_before_set(2, 0);
        check_before_set(3, 0);
    }       
    else if (n == 2) {
        printf(PREFIX"New CPU Core: 2\n");
        check_before_set(0, 1);
        check_before_set(1, 1);
        check_before_set(2, 0);
        check_before_set(3, 0);
    }       
    else if (n == 3) {
        printf(PREFIX"New CPU Core: 3\n");
        check_before_set(0, 1);
        check_before_set(1, 1);
        check_before_set(2, 1);
        check_before_set(3, 0);
    }
    else {
        printf(PREFIX"New CPU Core: 4\n");
        check_before_set(0, 1);
        check_before_set(1, 1);
        check_before_set(2, 1);
        check_before_set(3, 1);
    }
}

static int set_best_match_cpu_clock(int clk)
{
    int cc = 0;

    system("echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
    for (cc = 0; cc < max_cpu_item; cc++) {
        if (cpu_clock[cc].clk >= clk) {
            printf(PREFIX"Set Best Match CPU %dMHz (0x%08x)\n", cpu_clock[cc].clk, cpu_clock[cc].reg);
            *vid.cpu_ptr = cpu_clock[cc].reg;
            return cc;
        }
    }
    return -1;
}

int fb_init(void)
{
    gfx.fb_dev = open("/dev/fb0", O_RDWR, 0);
    if (gfx.fb_dev < 0) {
        printf(PREFIX"Failed to open /dev/fb0\n");
        return -1;
    }

    if (ioctl(gfx.fb_dev, FBIOGET_VSCREENINFO, &gfx.vinfo) < 0) {
        printf(PREFIX"Failed to get fb info\n");
        return -1;
    }

    gfx.fb.virAddr = mmap(NULL, FB_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, gfx.fb_dev, 0);
    if (gfx.fb.virAddr == (void *)-1) {
        close(gfx.fb_dev);
        gfx.fb_dev = -1;
        printf(PREFIX"Failed to mmap fb\n");
        return -1;
    }
    printf(PREFIX"FB virAddr %p (size:%d)\n", gfx.fb.virAddr, FB_SIZE);
    memset(gfx.fb.virAddr, 0 , FB_SIZE);

    gfx.vinfo.yres_virtual = gfx.vinfo.yres * 2;
    ioctl(gfx.fb_dev, FBIOPUT_VSCREENINFO, &gfx.vinfo);

    vid.mem_fd = open("/dev/mem", O_RDWR);
    if (vid.mem_fd < 0) { 
        printf("Failed to open /dev/mem\n");
        return -1;
    }    
    vid.ccu_mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, vid.mem_fd, CCU_BASE);
    if (vid.ccu_mem == MAP_FAILED) {
        printf("Failed to map memory\n");
        return -1;
    }    
    printf(PREFIX"CCU MMap %p\n", vid.ccu_mem);
    vid.cpu_ptr = (uint32_t *)&vid.ccu_mem[0x00];

    vid.dac_mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, vid.mem_fd, DAC_BASE);
    if (vid.dac_mem == MAP_FAILED) {
        printf("Failed to map memory\n");
        return -1;
    }    
    printf(PREFIX"DAC MMap %p\n", vid.dac_mem);
    vid.vol_ptr = (uint32_t *)(&vid.dac_mem[0xc00 + 0x258]);

    set_best_match_cpu_clock(INIT_CPU_CLOCK);
    set_core(INIT_CPU_CORE);
    return 0;
}

int fb_quit(void)
{
    set_best_match_cpu_clock(DEINIT_CPU_CLOCK);
    set_core(DEINIT_CPU_CORE);
    system("echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");

    if (gfx.fb.virAddr) {
        munmap(gfx.fb.virAddr, FB_SIZE);
        gfx.fb.virAddr = NULL;
    }

    if (gfx.fb_dev > 0) {
        close(gfx.fb_dev);
        gfx.fb_dev = -1;
    }

    if (vid.ccu_mem != MAP_FAILED) {
        munmap(vid.ccu_mem, 4096);
        vid.ccu_mem = NULL;
    }

    if (vid.dac_mem != MAP_FAILED) {
        munmap(vid.dac_mem, 4096);
        vid.dac_mem = NULL;
    }

    if (vid.mem_fd > 0) {
        close(vid.mem_fd);
        vid.mem_fd = -1;
    }
    return 0;
}
#endif

#if defined(MINI)
int fb_init(void)
{
#if USE_MASK
    int c0 = 0;
    int c1 = 0;
    uint32_t *p = NULL;
#endif

    MI_SYS_Init();
    MI_GFX_Open();

    gfx.fb_dev = open("/dev/fb0", O_RDWR);
    if (gfx.fb_dev < 0) {
        printf(PREFIX"Failed to open /dev/fb0\n");
        return -1;
    }
    ioctl(gfx.fb_dev, FBIOGET_FSCREENINFO, &gfx.finfo);
    ioctl(gfx.fb_dev, FBIOGET_VSCREENINFO, &gfx.vinfo);
    gfx.vinfo.yoffset = 0;
    gfx.vinfo.yres_virtual = gfx.vinfo.yres * 2;
    ioctl(gfx.fb_dev, FBIOPUT_VSCREENINFO, &gfx.vinfo);

    gfx.fb.phyAddr = gfx.finfo.smem_start;
    MI_SYS_MemsetPa(gfx.fb.phyAddr, 0, FB_SIZE);
    MI_SYS_Mmap(gfx.fb.phyAddr, gfx.finfo.smem_len, &gfx.fb.virAddr, TRUE);
    memset(&gfx.hw.opt, 0, sizeof(gfx.hw.opt));

    MI_SYS_MMA_Alloc(NULL, TMP_SIZE, &gfx.tmp.phyAddr);
    MI_SYS_Mmap(gfx.tmp.phyAddr, TMP_SIZE, &gfx.tmp.virAddr, TRUE);

    MI_SYS_MMA_Alloc(NULL, TMP_SIZE, &gfx.overlay.phyAddr);
    MI_SYS_Mmap(gfx.overlay.phyAddr, TMP_SIZE, &gfx.overlay.virAddr, TRUE);

    MI_SYS_MMA_Alloc(NULL, SCREEN_DMA_SIZE, &gfx.lcd.phyAddr[0][0]);
    MI_SYS_MMA_Alloc(NULL, SCREEN_DMA_SIZE, &gfx.lcd.phyAddr[0][1]);
    MI_SYS_MMA_Alloc(NULL, SCREEN_DMA_SIZE, &gfx.lcd.phyAddr[1][0]);
    MI_SYS_MMA_Alloc(NULL, SCREEN_DMA_SIZE, &gfx.lcd.phyAddr[1][1]);
    MI_SYS_Mmap(gfx.lcd.phyAddr[0][0], SCREEN_DMA_SIZE, &gfx.lcd.virAddr[0][0], TRUE);
    MI_SYS_Mmap(gfx.lcd.phyAddr[0][1], SCREEN_DMA_SIZE, &gfx.lcd.virAddr[0][1], TRUE);
    MI_SYS_Mmap(gfx.lcd.phyAddr[1][0], SCREEN_DMA_SIZE, &gfx.lcd.virAddr[1][0], TRUE);
    MI_SYS_Mmap(gfx.lcd.phyAddr[1][1], SCREEN_DMA_SIZE, &gfx.lcd.virAddr[1][1], TRUE);
    printf(PREFIX"Ping-pong Buffer %p\n", gfx.lcd.virAddr[0][0]);
    printf(PREFIX"Ping-pong Buffer %p\n", gfx.lcd.virAddr[0][1]);
    printf(PREFIX"Ping-pong Buffer %p\n", gfx.lcd.virAddr[1][0]);
    printf(PREFIX"Ping-pong Buffer %p\n", gfx.lcd.virAddr[1][1]);

#if USE_MASK
    MI_SYS_MMA_Alloc(NULL, MASK_SIZE, &gfx.mask.phyAddr[0]);
    MI_SYS_MMA_Alloc(NULL, MASK_SIZE, &gfx.mask.phyAddr[1]);
    MI_SYS_Mmap(gfx.mask.phyAddr[0], MASK_SIZE, &gfx.mask.virAddr[0], TRUE);
    MI_SYS_Mmap(gfx.mask.phyAddr[1], MASK_SIZE, &gfx.mask.virAddr[1], TRUE);

    p = (uint32_t *)gfx.mask.virAddr[0];
    for (c0 = 0; c0 < NDS_Hx3; c0++) {
        for (c1 = 0; c1 < NDS_Wx3; c1++) {
            if (((c0 % 3) == 0) || (c1 % 3) == 0) {
                *p++ = 0xff000000;
            }
            else {
                *p++ = 0x00000000;
            }
        }
    }
    MI_SYS_FlushInvCache(gfx.mask.virAddr[0], MASK_SIZE);
#endif

    vid.sar_fd = open("/dev/sar", O_RDWR);
    return 0;
}

int fb_quit(void)
{
    MI_SYS_Munmap(gfx.fb.virAddr, TMP_SIZE);

    MI_SYS_Munmap(gfx.tmp.virAddr, TMP_SIZE);
    MI_SYS_MMA_Free(gfx.tmp.phyAddr);

    MI_SYS_Munmap(gfx.overlay.virAddr, TMP_SIZE);
    MI_SYS_MMA_Free(gfx.overlay.phyAddr);

#if USE_MASK
    MI_SYS_Munmap(gfx.mask.virAddr[0], MASK_SIZE);
    MI_SYS_Munmap(gfx.mask.virAddr[1], MASK_SIZE);
    MI_SYS_MMA_Free(gfx.mask.phyAddr[0]);
    MI_SYS_MMA_Free(gfx.mask.phyAddr[1]);
#endif

    MI_SYS_Munmap(gfx.lcd.virAddr[0][0], SCREEN_DMA_SIZE);
    MI_SYS_Munmap(gfx.lcd.virAddr[0][1], SCREEN_DMA_SIZE);
    MI_SYS_Munmap(gfx.lcd.virAddr[1][0], SCREEN_DMA_SIZE);
    MI_SYS_Munmap(gfx.lcd.virAddr[1][1], SCREEN_DMA_SIZE);
    MI_SYS_MMA_Free(gfx.lcd.phyAddr[0][0]);
    MI_SYS_MMA_Free(gfx.lcd.phyAddr[0][1]);
    MI_SYS_MMA_Free(gfx.lcd.phyAddr[1][0]);
    MI_SYS_MMA_Free(gfx.lcd.phyAddr[1][1]);

    MI_GFX_Close();
    MI_SYS_Exit();

    gfx.vinfo.yoffset = 0;
    ioctl(gfx.fb_dev, FBIOPUT_VSCREENINFO, &gfx.vinfo);
    close(gfx.fb_dev);
    gfx.fb_dev = -1;

    close(vid.sar_fd);
    vid.sar_fd = -1;
    return 0;
}
#endif

void GFX_Init(void)
{
    struct stat st = {0};
    char buf[MAX_PATH << 1] = {0};

    fb_init();
    memset(nds.pen.path, 0, sizeof(nds.pen.path));
    if (getcwd(nds.pen.path, sizeof(nds.pen.path))) {
        strcat(nds.pen.path, "/");
        strcat(nds.pen.path, PEN_PATH);
    }

    strcpy(nds.shot.path, SHOT_PATH);
    if (stat(nds.shot.path, &st) == -1) {
        mkdir(nds.shot.path, 0755);
    }

    memset(nds.theme.path, 0, sizeof(nds.theme.path));
    if (getcwd(nds.theme.path, sizeof(nds.theme.path))) {
        strcat(nds.theme.path, "/");
        strcat(nds.theme.path, THEME_PATH);
        strcat(nds.theme.path, nds.enable_752x560 ? "_752" : "_640");
    }

    memset(nds.overlay.path, 0, sizeof(nds.overlay.path));
    if (getcwd(nds.overlay.path, sizeof(nds.overlay.path))) {
        strcat(nds.overlay.path, "/");
        strcat(nds.overlay.path, OVERLAY_PATH);
    }

    memset(nds.lang.path, 0, sizeof(nds.lang.path));
    if (getcwd(nds.lang.path, sizeof(nds.lang.path))) {
        strcat(nds.lang.path, "/");
        strcat(nds.lang.path, LANG_PATH);
    }

    memset(nds.menu.path, 0, sizeof(nds.menu.path));
    if (getcwd(nds.menu.path, sizeof(nds.menu.path))) {
        strcat(nds.menu.path, "/");
        strcat(nds.menu.path, MENU_PATH);
    }

    memset(nds.bios.path, 0, sizeof(nds.bios.path));
    if (getcwd(nds.bios.path, sizeof(nds.bios.path))) {
        strcat(nds.bios.path, "/");
        strcat(nds.bios.path, BIOS_PATH);
//
//        snprintf(buf, sizeof(buf), "%s/drastic_bios_arm7.bin", nds.bios.path);
//        write_file(buf, drastic_bios_arm7, sizeof(drastic_bios_arm7));
//
//        snprintf(buf, sizeof(buf), "%s/drastic_bios_arm9.bin", nds.bios.path);
//        write_file(buf, drastic_bios_arm9, sizeof(drastic_bios_arm9));
//
//        snprintf(buf, sizeof(buf), "%s/nds_bios_arm7.bin", nds.bios.path);
//        write_file(buf, nds_bios_arm7, sizeof(nds_bios_arm7));
//
//        snprintf(buf, sizeof(buf), "%s/nds_bios_arm9.bin", nds.bios.path);
//        write_file(buf, nds_bios_arm9, sizeof(nds_bios_arm9));
//
//        snprintf(buf, sizeof(buf), "%s/nds_firmware.bin", nds.bios.path);
//        write_file(buf, nds_firmware, sizeof(nds_firmware));
    }

    cvt = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);

    nds.pen.sel = 0;
    nds.pen.max = get_pen_count();

    nds.theme.sel = 0;
    nds.theme.max = get_theme_count();

    nds.overlay.sel = nds.overlay.max = get_overlay_count();

    nds.menu.sel = 0;
    nds.menu.max = get_menu_count();

    nds.menu.drastic.main = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
    if (nds.menu.drastic.main) {
        if (nds.menu.drastic.bg0) {
            SDL_SoftStretch(nds.menu.drastic.bg0, NULL, nds.menu.drastic.main, NULL);
        }
    }

    if (NULL == getcwd(nds.cfg.path, sizeof(nds.cfg.path))) {
        printf("Failed to get current directory\n");
    }
    strcat(nds.cfg.path, "/");
    strcat(nds.cfg.path, CFG_PATH);

    TTF_Init();
    nds.font = TTF_OpenFont(FONT_PATH, FONT_SIZE);
    if (nds.enable_752x560) {
        //TTF_SetFontStyle(nds.font, TTF_STYLE_BOLD);
    }

    is_video_thread_running = 1;
    pthread_create(&thread, NULL, video_handler, (void *)NULL);
}

void GFX_Quit(void)
{
    void *ret = NULL;

    printf(PREFIX"Wait for video_handler exit\n");
    is_video_thread_running = 0;
    pthread_join(thread, &ret);

    GFX_Clear();
    printf(PREFIX"Free FB resources\n");
    fb_quit();

    if (cvt) {
        SDL_FreeSurface(cvt);
        cvt = NULL;
    }
}

void GFX_Clear(void)
{
#if defined(MINI)
    MI_SYS_MemsetPa(gfx.fb.phyAddr, 0, FB_SIZE);
    MI_SYS_MemsetPa(gfx.tmp.phyAddr, 0, TMP_SIZE);
    MI_SYS_MemsetPa(gfx.lcd.phyAddr[0][0], 0, SCREEN_DMA_SIZE);
    MI_SYS_MemsetPa(gfx.lcd.phyAddr[0][1], 0, SCREEN_DMA_SIZE);
    MI_SYS_MemsetPa(gfx.lcd.phyAddr[1][0], 0, SCREEN_DMA_SIZE);
    MI_SYS_MemsetPa(gfx.lcd.phyAddr[1][1], 0, SCREEN_DMA_SIZE);
#endif
}

int draw_pen(void *pixels, int width, int pitch)
{
#ifndef UT
    int c0 = 0;
    int c1 = 0;
    int w = 28;
    int h = 28;
    int sub = 0;
    int sw = NDS_W;
    int sh = NDS_H;
    int x0 = 0, y0 = 0;
    int x1 = 0, y1 = 0;
    int x = 0, y = 0, is_565 = 0, scale = 1;
    uint32_t r = 0, g = 0, b = 0;
    uint32_t *s = hex_pen;
    uint16_t *d_565 = (uint16_t*)pixels;
    uint32_t *d_888 = (uint32_t*)pixels;

    if ((pitch / width) == 2) {
        is_565 = 1;
    }

    if (width == NDS_Wx2) {
        sw = NDS_Wx2;
        sh = NDS_Hx2;
        scale = 2;
    }

    x = (myevent.pen.x * sw) / myevent.pen.max_x;
    y = (myevent.pen.y * sh) / myevent.pen.max_y;

    if (nds.pen.img) {
        w = nds.pen.img->w;
        h = nds.pen.img->h;
        s = nds.pen.img->pixels;
    }

    switch(nds.pen.type) {
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

#if 0
    vVertices[0] = ((((float)x) / NDS_W) - 0.5) * 2.0;
    vVertices[1] = ((((float)y) / NDS_H) - 0.5) * -2.0;

    vVertices[5] = vVertices[0];
    vVertices[6] = ((((float)(y + nds.pen.img->h)) / NDS_H) - 0.5) * -2.0;

    vVertices[10] = ((((float)(x + nds.pen.img->w)) / NDS_W) - 0.5) * 2.0;
    vVertices[11] = vVertices[6];

    vVertices[15] = vVertices[10];
    vVertices[16] = vVertices[1];

    glUniform1f(vid.alphaLoc, 1.0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, vid.texID[TEX_PEN]);
    glVertexAttribPointer(vid.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), vVertices);
    glVertexAttribPointer(vid.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &vVertices[3]);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, indices);
    glDisable(GL_BLEND);
    glUniform1f(vid.alphaLoc, 0.0);
#endif

    asm ("PLD [%0, #128]"::"r" (s));
    for (c1=0; c1<h; c1++) {
        asm ("PLD [%0, #128]"::"r" (d_565));
        asm ("PLD [%0, #128]"::"r" (d_888));
        for (c0=0; c0<w; c0++) {
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
            s+= 1;
        }
    }
#endif
    return 0;
}

int GFX_Copy(int id, const void *pixels, SDL_Rect srcrect, SDL_Rect dstrect, int pitch, int alpha, int rotate)
{
#if defined(A30)
    int tex = (id >= 0) ? id : TEX_TMP;

    if ((id != -1) && ((nds.dis_mode == NDS_SCREEN_LAYOUT_13) || (nds.dis_mode == NDS_SCREEN_LAYOUT_15))) {
        vVertices[5] = ((((float)dstrect.x) / 640.0) - 0.5) * 2.0;
        vVertices[6] = ((((float)dstrect.y) / 480.0) - 0.5) * -2.0;

        vVertices[10] = vVertices[5];
        vVertices[11] = ((((float)(dstrect.y + dstrect.w)) / 480.0) - 0.5) * -2.0;

        vVertices[15] = ((((float)(dstrect.x + dstrect.h)) / 640.0) - 0.5) * 2.0;
        vVertices[16] = vVertices[11];

        vVertices[0] = vVertices[15];
        vVertices[1] = vVertices[6];
    }
    else if ((id != -1) && ((nds.dis_mode == NDS_SCREEN_LAYOUT_12) || (nds.dis_mode == NDS_SCREEN_LAYOUT_14))) {
        vVertices[15] = ((((float)dstrect.x) / 640.0) - 0.5) * 2.0;
        vVertices[16] = ((((float)dstrect.y) / 480.0) - 0.5) * -2.0;

        vVertices[0] = vVertices[15];
        vVertices[1] = ((((float)(dstrect.y + dstrect.w)) / 480.0) - 0.5) * -2.0;

        vVertices[5] = ((((float)(dstrect.x + dstrect.h)) / 640.0) - 0.5) * 2.0;
        vVertices[6] = vVertices[1];

        vVertices[10] = vVertices[5];
        vVertices[11] = vVertices[16];
    }
    else {
        vVertices[0] = ((((float)dstrect.x) / 640.0) - 0.5) * 2.0;
        vVertices[1] = ((((float)dstrect.y) / 480.0) - 0.5) * -2.0;

        vVertices[5] = vVertices[0];
        vVertices[6] = ((((float)(dstrect.y + dstrect.h)) / 480.0) - 0.5) * -2.0;

        vVertices[10] = ((((float)(dstrect.x + dstrect.w)) / 640.0) - 0.5) * 2.0;
        vVertices[11] = vVertices[6];

        vVertices[15] = vVertices[10];
        vVertices[16] = vVertices[1];
    }

    if (tex == TEX_TMP) {
        glBindTexture(GL_TEXTURE_2D, vid.texID[tex]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        if (pixel_filter) {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        }
        else {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        }
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, srcrect.w, srcrect.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
    }

    if (((nds.dis_mode == NDS_SCREEN_LAYOUT_0) || (nds.dis_mode == NDS_SCREEN_LAYOUT_1)) && (tex == TEX_SCR0)) {
        glUniform1f(vid.alphaLoc, 1.0 - ((float)nds.alpha.val / 10.0));
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);
    }
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, vid.texID[tex]);
    glVertexAttribPointer(vid.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), vVertices);
    glVertexAttribPointer(vid.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &vVertices[3]);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, indices);

    if (((nds.dis_mode == NDS_SCREEN_LAYOUT_0) || (nds.dis_mode == NDS_SCREEN_LAYOUT_1)) && (tex == TEX_SCR0)) {
        glUniform1f(vid.alphaLoc, 0.0);
        glDisable(GL_BLEND);
    }
#endif

#if defined(MINI)
    int cc = 0;
    int copy_it = 1;
    int dma_found = 0;
    MI_U16 u16Fence = 0;
    int is_rgb565 = (pitch / srcrect.w) == 2 ? 1 : 0;

    if (pixels == NULL) {
        return -1;
    }

    for (cc = 0; cc < 2; cc++) {
        if (pixels == gfx.lcd.virAddr[cc][0]) {
            dma_found = 1;
            gfx.hw.src.surf.phyAddr = gfx.lcd.phyAddr[cc][0];
            break;
        }
        if (pixels == gfx.lcd.virAddr[cc][1]) {
            dma_found = 1;
            gfx.hw.src.surf.phyAddr = gfx.lcd.phyAddr[cc][1];
            break;
        }
    }

    if (alpha != 0) {
        if (nds.alpha.val > NDS_ALPHA_MAX) {
            nds.alpha.val = 0;
        }

        if (nds.alpha.val > 0) {
            float m0 = (float)nds.alpha.val / 10;
            float m1 = 1.0 - m0;
            uint32_t *d = gfx.tmp.virAddr;
            uint32_t r0 = 0, g0 = 0, b0 = 0;
            uint32_t r1 = 0, g1 = 0, b1 = 0;
            int x = 0, y = 0, ax = 0, ay = 0, sw = 0, sh = 0;
            const uint32_t *s0 = gfx.fb.virAddr + (FB_W * gfx.vinfo.yoffset * FB_BPP);
            const uint16_t *s1_565 = pixels;
            const uint32_t *s1_888 = pixels;
            uint32_t col[] = {
                0x000000, 0xa0a0a0, 0x400000, 0x004000, 0x000040, 0x000000, 0xa0a000, 0x00a0a0
            };

            switch (nds.dis_mode) {
            case NDS_SCREEN_LAYOUT_0:
                sw = 170;
                sh = 128;
                break;
            case NDS_SCREEN_LAYOUT_1:
                sw = srcrect.w;
                sh = srcrect.h;
                break;
            }

            ay = 0;
            for (y=0; y<sh; y++) {
                switch (nds.dis_mode) {
                case NDS_SCREEN_LAYOUT_0:
                    if (y && ((y % 2) == 0)) {
                        ay+= 1;
                    }
                    break;
                }

                ax = 0;
                for (x=0; x<sw; x++) {
                    asm ("PLD [%0, #128]"::"r" (s0));
                    if ((nds.alpha.border > 0) && ((y == 0) || (y == (sh - 1)) || (x == 0) || (x == (sw - 1)))) {
                        *d++ = col[nds.alpha.border];
                    }
                    else {
                        switch (nds.dis_mode) {
                        case NDS_SCREEN_LAYOUT_0:
                            if (x && ((x % 2) == 0)) {
                                ax+= 1;
                            }
                            break;
                        }

                        if (is_rgb565) {
                            asm ("PLD [%0, #128]"::"r" (s1_565));
                            r1 = (s1_565[((y + ay) * srcrect.w) + x + ax] & 0xf800) >> 8;
                            g1 = (s1_565[((y + ay) * srcrect.w) + x + ax] & 0x07e0) >> 3;
                            b1 = (s1_565[((y + ay) * srcrect.w) + x + ax] & 0x001f) << 3;
                        }
                        else {
                            asm ("PLD [%0, #128]"::"r" (s1_888));
                            r1 = (s1_888[((y + ay) * srcrect.w) + x + ax] & 0xff0000) >> 16;
                            g1 = (s1_888[((y + ay) * srcrect.w) + x + ax] & 0x00ff00) >> 8;
                            b1 = (s1_888[((y + ay) * srcrect.w) + x + ax] & 0x0000ff) >> 0;
                        }

                        switch (nds.alpha.pos % 4) {
                        case 0:
                            r0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x - 1)] & 0x0000ff) >> 0;
                            break;
                        case 1:
                            r0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y + (FB_H - sh) - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0x0000ff) >> 0;
                            break;
                        case 2:
                            r0 = (s0[((sh - y - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y - 1) * FB_W) + (sw - x + (FB_W - sw) - 1)] & 0x0000ff) >> 0;
                            break;
                        case 3:
                            r0 = (s0[((sh - y - 1) * FB_W) + (sw - x - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y - 1) * FB_W) + (sw - x - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y - 1) * FB_W) + (sw - x - 1)] & 0x0000ff) >> 0;
                            break;
                        }

                        r0 = (uint8_t)((r0 * m0) + (r1 * m1));
                        g0 = (uint8_t)((g0 * m0) + (g1 * m1));
                        b0 = (uint8_t)((b0 * m0) + (b1 * m1));
                        *d++ = ((r0 << 16) | (g0 << 8) | b0);
                    }
                }
            }
            copy_it = 0;
        }

        switch (nds.dis_mode) {
        case NDS_SCREEN_LAYOUT_0:
            dstrect.w = 170;
            dstrect.h = 128;
            if (nds.alpha.val > 0) {
                srcrect.w = dstrect.w;
                srcrect.h = dstrect.h;
                pitch = srcrect.w * 4;
            }
            break;
        case NDS_SCREEN_LAYOUT_1:
            dstrect.w = NDS_W;
            dstrect.h = NDS_H;
            if (nds.alpha.val > 0) {
                srcrect.w = dstrect.w;
                srcrect.h = dstrect.h;
                pitch = srcrect.w * 4;
            }
            break;
        }

        switch (nds.alpha.pos % 4) {
        case 0:
            dstrect.x = 0;
            dstrect.y = FB_H - dstrect.h;
            break;
        case 1:
            dstrect.x = FB_W - dstrect.w;
            dstrect.y = FB_H - dstrect.h;
            break;
        case 2:
            dstrect.x = FB_W - dstrect.w;
            dstrect.y = 0;
            break;
        case 3:
            dstrect.x = 0;
            dstrect.y = 0;
            break;
        }
    }

    if (copy_it && pixel_filter) {
        do {
            if (nds.hres_mode != 0) {
                break;
            }

            if ((srcrect.w != NDS_W) || (srcrect.h != NDS_H)) {
                break;
            }

            if (pitch == 1024) {
#if USE_MASK
                if (dma_found) {
                    gfx.hw.opt.u32GlobalSrcConstColor = 0;
                    gfx.hw.opt.eRotate = 0;
                    gfx.hw.opt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
                    gfx.hw.opt.eDstDfbBldOp = 0;
                    gfx.hw.opt.eDFBBlendFlag = 0;

                    gfx.hw.src.rt.s32Xpos = 0;
                    gfx.hw.src.rt.s32Ypos = 0;
                    gfx.hw.src.rt.u32Width = NDS_W;
                    gfx.hw.src.rt.u32Height = NDS_H;
                    gfx.hw.src.surf.u32Width = NDS_W;
                    gfx.hw.src.surf.u32Height = NDS_H;
                    gfx.hw.src.surf.u32Stride = pitch;
                    gfx.hw.src.surf.eColorFmt = is_rgb565 ? E_MI_GFX_FMT_RGB565 : E_MI_GFX_FMT_ARGB8888;

                    gfx.hw.dst.rt.s32Xpos = 0;
                    gfx.hw.dst.rt.s32Ypos = 0;
                    gfx.hw.dst.rt.u32Width = NDS_Wx3;
                    gfx.hw.dst.rt.u32Height = NDS_Hx3;
                    gfx.hw.dst.surf.u32Width = NDS_Wx3;
                    gfx.hw.dst.surf.u32Height = NDS_Hx3;
                    gfx.hw.dst.surf.u32Stride = NDS_Wx3 * FB_BPP;
                    gfx.hw.dst.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
                    gfx.hw.dst.surf.phyAddr = gfx.mask.phyAddr[1];

                    MI_GFX_BitBlit(&gfx.hw.src.surf, &gfx.hw.src.rt, &gfx.hw.dst.surf, &gfx.hw.dst.rt, &gfx.hw.opt, &u16Fence);
                    MI_GFX_WaitAllDone(FALSE, u16Fence);

                    gfx.hw.overlay.surf.phyAddr = gfx.mask.phyAddr[0];
                    gfx.hw.overlay.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
                    gfx.hw.overlay.surf.u32Width = NDS_Wx3;
                    gfx.hw.overlay.surf.u32Height = NDS_Hx3;
                    gfx.hw.overlay.surf.u32Stride = NDS_Wx3 * FB_BPP;
                    gfx.hw.overlay.rt.s32Xpos = 0;
                    gfx.hw.overlay.rt.s32Ypos = 0;
                    gfx.hw.overlay.rt.u32Width = NDS_Wx3;
                    gfx.hw.overlay.rt.u32Height = NDS_Hx3;

                    gfx.hw.dst.rt.s32Xpos = 0;
                    gfx.hw.dst.rt.s32Ypos = 0;
                    gfx.hw.dst.rt.u32Width = NDS_Wx3;
                    gfx.hw.dst.rt.u32Height = NDS_Hx3;
                    gfx.hw.dst.surf.phyAddr = gfx.mask.phyAddr[1];

                    gfx.hw.opt.u32GlobalSrcConstColor = 0xff000000;
                    gfx.hw.opt.eRotate = 0;
                    gfx.hw.opt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
                    gfx.hw.opt.eDstDfbBldOp = E_MI_GFX_DFB_BLD_INVSRCALPHA;
                    gfx.hw.opt.eDFBBlendFlag = E_MI_GFX_DFB_BLEND_SRC_PREMULTIPLY | E_MI_GFX_DFB_BLEND_COLORALPHA | E_MI_GFX_DFB_BLEND_ALPHACHANNEL;
                    MI_GFX_BitBlit(&gfx.hw.overlay.surf, &gfx.hw.overlay.rt, &gfx.hw.dst.surf, &gfx.hw.dst.rt, &gfx.hw.opt, &u16Fence);
                    MI_GFX_WaitAllDone(FALSE, u16Fence);

                    copy_it = 0;
                    srcrect.x = 0;
                    srcrect.y = 0;
                    srcrect.w = NDS_Wx3;
                    srcrect.h = NDS_Hx3;
                    pitch = srcrect.w * 4;
                }
                else
#endif
                {
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
                        : "r"(pixels), "r"(gfx.tmp.virAddr), "r"(NDS_Wx2 * 4), "r"(NDS_H)
                        : "r8", "q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9", "q10", "q11", "q12", "q13", "q14", "q15", "memory", "cc"
                    );

                    copy_it = 0;
                    srcrect.x = 0;
                    srcrect.y = 0;
                    srcrect.w = NDS_Wx2;
                    srcrect.h = NDS_Hx2;
                    pitch = srcrect.w * 4;
                }
            }
            else {
                int x = 0, y = 0;
                uint16_t *s0 = NULL;
                uint16_t *s1 = (uint16_t*)pixels;
                uint16_t *d = (uint16_t*)gfx.tmp.virAddr;

                for (y=0; y<srcrect.h; y++) {
                    s0 = d;
                    for (x=0; x<srcrect.w; x++) {
                        *d++ = *s1;
                        *d++ = *s1++;
                    }
                    neon_memcpy(d, s0, 1024);
                    d+= NDS_Wx2;
                }

                copy_it = 0;
                srcrect.x = 0;
                srcrect.y = 0;
                srcrect.w = NDS_Wx2;
                srcrect.h = NDS_Hx2;
                pitch = srcrect.w * 2;
            }
        } while(0);
    }

    if (copy_it) {
        if (dma_found == 0) {
            neon_memcpy(gfx.tmp.virAddr, pixels, srcrect.h * pitch);
            gfx.hw.src.surf.phyAddr = gfx.tmp.phyAddr;
            MI_SYS_FlushInvCache(gfx.tmp.virAddr, pitch * srcrect.h);
        }
    }
    else {
#if USE_MASK
        gfx.hw.src.surf.phyAddr = gfx.mask.phyAddr[1];
        MI_SYS_FlushInvCache(gfx.tmp.virAddr, pitch * srcrect.h);
#else
        gfx.hw.src.surf.phyAddr = gfx.tmp.phyAddr;
        MI_SYS_FlushInvCache(gfx.tmp.virAddr, pitch * srcrect.h);
#endif
    }

    gfx.hw.opt.u32GlobalSrcConstColor = 0;
    gfx.hw.opt.eRotate = rotate;
    gfx.hw.opt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
    gfx.hw.opt.eDstDfbBldOp = 0;
    gfx.hw.opt.eDFBBlendFlag = 0;

    gfx.hw.src.rt.s32Xpos = srcrect.x;
    gfx.hw.src.rt.s32Ypos = srcrect.y;
    gfx.hw.src.rt.u32Width = srcrect.w;
    gfx.hw.src.rt.u32Height = srcrect.h;
    gfx.hw.src.surf.u32Width = srcrect.w;
    gfx.hw.src.surf.u32Height = srcrect.h;
    gfx.hw.src.surf.u32Stride = pitch;
    gfx.hw.src.surf.eColorFmt = is_rgb565 ? E_MI_GFX_FMT_RGB565 : E_MI_GFX_FMT_ARGB8888;

    gfx.hw.dst.rt.s32Xpos = dstrect.x;
    gfx.hw.dst.rt.s32Ypos = dstrect.y;
    gfx.hw.dst.rt.u32Width = dstrect.w;
    gfx.hw.dst.rt.u32Height = dstrect.h;
    gfx.hw.dst.surf.u32Width = FB_W;
    gfx.hw.dst.surf.u32Height = FB_H;
    gfx.hw.dst.surf.u32Stride = FB_W * FB_BPP;
    gfx.hw.dst.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    gfx.hw.dst.surf.phyAddr = gfx.fb.phyAddr + (FB_W * gfx.vinfo.yoffset * FB_BPP);

    MI_GFX_BitBlit(&gfx.hw.src.surf, &gfx.hw.src.rt, &gfx.hw.dst.surf, &gfx.hw.dst.rt, &gfx.hw.opt, &u16Fence);
    MI_GFX_WaitAllDone(FALSE, u16Fence);

    if ((nds.menu.enable == 0) && (srcrect.w != 800) && ((srcrect.w == NDS_W) || (srcrect.w == NDS_Wx2)) && (nds.overlay.sel < nds.overlay.max)) {
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
    }
#endif
    return 0;
}

void GFX_Flip(void)
{
#if defined(A30)
    eglSwapBuffers(vid.eglDisplay, vid.eglSurface);

    if (nds.theme.img) {
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, vid.texID[TEX_BG]);
        glVertexAttribPointer(vid.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bgVertices);
        glVertexAttribPointer(vid.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bgVertices[3]);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, indices);
    }
#endif

#if defined(MINI)
    ioctl(gfx.fb_dev, FBIOPAN_DISPLAY, &gfx.vinfo);
    gfx.vinfo.yoffset ^= FB_H;
#endif
}

#if defined(UT)
TEST(sdl2_video, flush_lcd_screen)
{
    SDL_Rect  rt = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, flush_lcd_screen(TEXTURE_MAX, NULL, rt, rt, 0, 0, 0));
    TEST_ASSERT_EQUAL_INT(-1, flush_lcd_screen(0, NULL, rt, rt, 0, 0, 0));
    TEST_ASSERT_EQUAL_INT( 0, flush_lcd_screen(0, &rt, rt, rt, 0, 0, 0));
}
#endif

static void delete_device(SDL_VideoDevice *device)
{
    debug(SDL"call %s\n", __func__);

    if (device) {
        SDL_free(device);
    }
}

#if defined(UT)
TEST(sdl2_video, delete_device)
{
    delete_device(NULL);
    TEST_PASS();
}
#endif

int create_window(_THIS, SDL_Window *w)
{
    debug(SDL"call %s(win=%p)\n", __func__, w);

    if (!w) {
        error(SDL"invalid window\n");
        return -1;
    }

    debug(SDL"window w=%d, h=%d\n", w->w, w->h);

    myvid.window = w;

#if !defined(UT)
    SDL_SetMouseFocus(w);
    SDL_SetKeyboardFocus(w);
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, flush_lcd_screen)
{
    SDL_Rect  rt = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, flush_lcd_screen(TEXTURE_MAX, NULL, rt, rt, 0, 0, 0));
    TEST_ASSERT_EQUAL_INT(-1, flush_lcd_screen(0, NULL, rt, rt, 0, 0, 0));
    TEST_ASSERT_EQUAL_INT( 0, flush_lcd_screen(0, &rt, rt, rt, 0, 0, 0));
}
#endif

static void delete_device(SDL_VideoDevice *device)
{
    debug(SDL"call %s\n", __func__);

    if (device) {
        SDL_free(device);
    }
}

#if defined(UT)
TEST(sdl2_video, delete_device)
{
    delete_device(NULL);
    TEST_PASS();
}
#endif

int create_window(_THIS, SDL_Window *w)
{
    debug(SDL"call %s(win=%p)\n", __func__, w);

    if (!w) {
        error(SDL"invalid window\n");
        return -1;
    }

    debug(SDL"window w=%d, h=%d\n", w->w, w->h);

    myvid.window = w;

#if !defined(UT)
    SDL_SetMouseFocus(w);
    SDL_SetKeyboardFocus(w);
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, create_window)
{
    const int w = 320;
    const int h  =240;
    SDL_Window win = { 0 };

    win.w = w;
    win.h = h;
    TEST_ASSERT_EQUAL_INT(-1, create_window(NULL, NULL));
    TEST_ASSERT_EQUAL_INT( 0, create_window(NULL, &win));
    TEST_ASSERT_EQUAL_INT(w, myvid.window->w);
    TEST_ASSERT_EQUAL_INT(h, myvid.window->h);
}
#endif

void prehook_cb_savestate_pre(void)
{
    prehook_cb_savestate_pre();
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_savestate_pre)
{
    prehook_cb_savestate_pre();
    TEST_PASS();
}
#endif

void prehook_cb_savestate_post(void)
{
#if !defined(UT) && !defined(MIYOO_FLIP)
    asm volatile (
        "mov r1, %0                 \n"
        "mov r2, #0                 \n"
        "str r2, [r1]               \n"
        "add sp, sp, #(0x18 + 0)    \n"
        "ldr pc, [sp], #4           \n"
        ::"r"(&myvid.nds.busy_wait):
    );
#endif
                nds.pen.img = SDL_ConvertSurface(t, cvt->format, 0);
                SDL_FreeSurface(t);

                if (strstr(buf, "_lt")) {
                    nds.pen.type = PEN_LT;
                }
                else if (strstr(buf, "_rt")) {
                    nds.pen.type = PEN_RT;
                }
                else if (strstr(buf, "_rb")) {
                    nds.pen.type = PEN_RB;
                }
                else if (strstr(buf, "_lb")) {
                    nds.pen.type = PEN_LB;
                }
                else {
                    nds.pen.type = PEN_CP;
                }
            }
            else {
                printf(PREFIX"Failed to load pen (%s)\n", buf);
            }
        }
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_savestate_post)
{
    prehook_cb_savestate_post();
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_savestate_post)
{
    prehook_cb_savestate_post();
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_savestate_post)
{
    prehook_cb_savestate_post();
    TEST_PASS();
}
#endif

void prehook_cb_update_screen(void)
{
    SDL_Surface *t = NULL;
    char folder[MAX_PATH] = {0};
    char buf[MAX_PATH << 1] = {0};

    if (get_dir_path(nds.menu.path, nds.menu.sel, folder) != 0) {
        return -1;
    }

    debug(SDL"call %s()\n", __func__);

    if (prepare_time) {
        update_nds_screen();
        //prepare_time -= 1;
    }
    else {
        myvid.nds.async_update = 1;
    }
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_update_screen)
{
    prehook_cb_update_screen();
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_malloc)
{
    void *buf = prehook_cb_malloc(32);

    TEST_ASSERT_NOT_NULL(buf);
    free(buf);
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_malloc)
{
    void *buf = prehook_cb_malloc(32);

    TEST_ASSERT_NOT_NULL(buf);
    free(buf);
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_malloc)
{
    void *buf = prehook_cb_malloc(32);

    TEST_ASSERT_NOT_NULL(buf);
    free(buf);
}
#endif

void prehook_cb_free(void *ptr)
{
    static int pre_sel = -1;

    char buf[MAX_PATH] = {0};
    SDL_Surface *t = NULL;

    if ((nds.overlay.sel < nds.overlay.max) && (pre_sel != nds.overlay.sel)) {
        pre_sel = nds.overlay.sel;

        if (nds.overlay.img) {
            SDL_FreeSurface(nds.overlay.img);
            nds.overlay.img = NULL;
        }

        nds.overlay.img = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
        if (nds.overlay.img) {
            SDL_FillRect(nds.overlay.img, &nds.overlay.img->clip_rect, SDL_MapRGB(nds.overlay.img->format, 0x00, 0x00, 0x00));

            if (get_file_path(nds.overlay.path, nds.overlay.sel, buf, 1) == 0) {
                t = IMG_Load(buf);
                if (t) {
                    SDL_BlitSurface(t, NULL, nds.overlay.img, NULL);
                    SDL_FreeSurface(t);

#if defined(MINI)
                    neon_memcpy(gfx.overlay.virAddr, nds.overlay.img->pixels, FB_W * FB_H * 4);
                    MI_SYS_FlushInvCache(gfx.overlay.virAddr, FB_W * FB_H * FB_BPP);
#endif
                }
                else {
                    printf(PREFIX"Failed to load overlay (%s)\n", buf);
                }
            }
        }
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_free)
{
    void *buf = malloc(32);

    TEST_ASSERT_NOT_NULL(buf);
    prehook_cb_free(buf);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_free)
{
    void *buf = malloc(32);

    TEST_ASSERT_NOT_NULL(buf);
    prehook_cb_free(buf);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_free)
{
    void *buf = malloc(32);

    TEST_ASSERT_NOT_NULL(buf);
    prehook_cb_free(buf);
    TEST_PASS();
}
#endif

void* prehook_cb_realloc(void *ptr, size_t size)
{
    void *p = NULL;

    debug(SDL"call %s(ptr=%p, size=%d)\n", __func__, ptr, size);

    p = realloc(ptr, size);
    debug(SDL"ptr=%p, size=%d\n", __func__, p, size);

int MiyooCreateWindow(_THIS, SDL_Window *window)
{
    vid.window = window;
    SDL_SetMouseFocus(window);
    SDL_SetKeyboardFocus(window);
    printf(PREFIX"Window:%p, Width:%d, Height:%d\n", window, window->w, window->h);
    return 0;
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_realloc)
{
    void *buf = malloc(32);

    buf = prehook_cb_realloc(buf, 128);
    TEST_ASSERT_NOT_NULL(buf);
    free(buf);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_realloc)
{
    void *buf = malloc(32);

    buf = prehook_cb_realloc(buf, 128);
    TEST_ASSERT_NOT_NULL(buf);
    free(buf);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_realloc)
{
    void *buf = malloc(32);

    buf = prehook_cb_realloc(buf, 128);
    TEST_ASSERT_NOT_NULL(buf);
    free(buf);
    TEST_PASS();
}
#endif

void prehook_cb_blit_screen_menu(uint16_t *src, uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
    return SDL_Unsupported();
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_blit_screen_menu)
{
    prehook_cb_blit_screen_menu(NULL, 0, 0, 0, 0);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_blit_screen_menu)
{
    prehook_cb_blit_screen_menu(NULL, 0, 0, 0, 0);
    TEST_PASS();
}
#endif

void prehook_cb_print_string(char *p, uint32_t fg, uint32_t bg, uint32_t x, uint32_t y)
{
    SDL_VideoDevice *device = NULL;

    device = (SDL_VideoDevice *)SDL_calloc(1, sizeof(SDL_VideoDevice));
    if(!device) {
        SDL_OutOfMemory();
        return NULL;
    }
    device->is_dummy = SDL_TRUE;

    device->VideoInit = MiyooVideoInit;
    device->VideoQuit = MiyooVideoQuit;
    device->SetDisplayMode = MiyooSetDisplayMode;
    device->CreateSDLWindow = MiyooCreateWindow;
    device->CreateSDLWindowFrom = MiyooCreateWindowFrom;
    device->free = MiyooDeleteDevice;
    device->PumpEvents = PumpEvents;

    init_config_settings();
    return device;
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_print_string)
{
    prehook_cb_print_string(NULL, 0, 0, 0, 0);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_print_string)
{
    prehook_cb_print_string(NULL, 0, 0, 0, 0);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, prehook_cb_print_string)
{
    prehook_cb_print_string(NULL, 0, 0, 0, 0);
    TEST_PASS();
}
#endif

int init_video(_THIS)
{
#if defined(MIYOO_FLIP)
    int r = 0;
#endif

#if !defined(UT)
    SDL_DisplayMode mode = { 0 };
    SDL_VideoDisplay display = { 0 };
#endif

    SDL_DisplayMode mode = {0};
    SDL_VideoDisplay display = {0};

    printf(PREFIX"MiyooVideoInit\n");
#ifndef UT
    signal(SIGTERM, sigterm_handler);
    debug(SDL"installed sigterm handler\n");

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

    myvid.info.w = SCREEN_W;
    myvid.info.h = SCREEN_H;
    myvid.info.size = myvid.info.w * myvid.info.h * (myvid.info.bpp / 8) * 2;
    debug(SDL"framebuffer w=%d, h=%d\n", myvid.info.w, myvid.info.h);

    TTF_Init();
#endif

    init_cfg();
    init_hook();
    create_bios_files();
    set_page_size(sysconf(_SC_PAGESIZE));

#if defined(MIYOO_FLIP)
    r = 0;
    r |= patch_elf(0x00093460, (uint64_t)prehook_cb_menu);
    r |= patch_elf(0x0009a350, (uint64_t)prehook_cb_update_screen);
    if (r) {
        system("touch rerun");
        error(SDL"must rerun after drastic is patched\n");
        exit(-1);
    }
#endif

#if !defined(MIYOO_FLIP) && !defined(UT)
    install_prehook_cb(myhook.fun.menu, prehook_cb_menu);
    install_prehook_cb(myhook.fun.print_string, prehook_cb_print_string);
    install_prehook_cb(myhook.fun.savestate_pre, prehook_cb_savestate_pre);
    install_prehook_cb(myhook.fun.savestate_post, prehook_cb_savestate_post);
    install_prehook_cb(myhook.fun.blit_screen_menu, prehook_cb_blit_screen_menu);
    install_prehook_cb(myhook.fun.update_screen, prehook_cb_update_screen);
    install_prehook_cb(myhook.fun.malloc, prehook_cb_malloc);
    install_prehook_cb(myhook.fun.realloc, prehook_cb_realloc);
    install_prehook_cb(myhook.fun.free, prehook_cb_free);
    install_render_handler();
#endif

#if defined(SFOS_EGL) || defined(UT)
    init_sfos_lcd();
#endif

#if defined(MIYOO_EGL) || defined(UT)
    init_miyoo_lcd();
#endif

    init_event();

#if defined(SFOS_EGL) || defined(MIYOO_EGL)
    myvid.thread.running = 1;
    pthread_create(&myvid.thread.id, NULL, screen_handler, (void *)NULL);
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, init_video)
{
    TEST_ASSERT_EQUAL_INT(0, init_video(NULL));
}
#endif

static int set_disp_mode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode)
{
    debug(SDL"call %s()\n", __func__);

    if (!mode) {
        error(SDL"mode is null\n");
        return -1;
    }

    debug(SDL"mode w=%d, h=%d, fmt=0x%x\n", mode->w, mode->h, mode->format);

    return 0;
}

#if defined(UT)
TEST(sdl2_video, set_disp_mode)
{
    TEST_ASSERT_EQUAL_INT(-1, set_disp_mode(NULL, NULL, NULL));
}
#endif

void quit_video(_THIS)
{
    char path[320] = { 0 };

    debug(SDL"%s\n", __func__);

    getcwd(mycfg.home, sizeof(mycfg.home));
    snprintf(path, sizeof(path), "%s/%s", mycfg.home, CFG_PATH);

    debug(SDL"wait for savestate complete\n");
    while (myvid.nds.busy_wait) {
        usleep(1000000);
    }
    system("sync");
    debug(SDL"savestate completed\n");

    if (myvid.thread.running) {
        debug(SDL"wait for screen_handler complete\n");
        myvid.thread.running = 0;
        pthread_join(myvid.thread.id, NULL);
        debug(SDL"screen_handler completed\n");
    }

    quit_event();

#if defined(SFOS_EGL) || defined(UT)
    quit_sfos_lcd();
#endif

#if defined(MIYOO_EGL) || defined(UT)
    quit_miyoo_lcd();
#endif

    quit_hook();
    TTF_Quit();

    debug(SDL"update cfg to \"%s\"\n", path);
    update_cfg(path);
}
#endif

#if defined(UT)
TEST(sdl2_video, quit_video)
{
    quit_video(NULL);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(sdl2_video, quit_video)
{
    quit_video(NULL);
    TEST_PASS();
}
#endif

static SDL_VideoDevice *create_device(int devindex)
{
    SDL_VideoDevice *dev = NULL;

static const char *DIS_MODE1_640[] = {
    "170*128",
    "256*192",
    "",
    "",
    "256*192",
    "320*240",
    "256*192",
    "320*240",
    "160*120",
    "256*192",
    "256*192",
    "256*192",
    "256*192",
    "427*320",
    "427*320",
    "480*320",
    "480*320",
};

static const char *DIS_MODE0_752[] = {
    "752*560",
    "752*560",
    "512*384",
    "752*560",
    "256*192",
    "373*280",
    "256*192",
    "373*280",
    "592*440",
    "496*368",
    "496*368",
    "496*368",
    "496*368",
    "501*376",
    "501*376",
    "560*376",
    "560*376",
};

static const char *DIS_MODE1_752[] = {
    "170*128",
    "256*192",
    "",
    "",
    "256*192",
    "373*280",
    "256*192",
    "373*280",
    "160*120",
    "256*192",
    "256*192",
    "256*192",
    "256*192",
    "501*376",
    "501*376",
    "560*376",
    "560*376",
};

static const char *POS[] = {
    "Top-Right", "Top-Left", "Bottom-Left", "Bottom-Right"
};

static const char *BORDER[] = {
    "None", "White", "Red", "Green", "Blue", "Black", "Yellow", "Cyan"
};

static const char *DPAD[] = {
    "0°", "90°", "270°"
};

static const char *HOTKEY[] = {
    "MENU", "SELECT"
};

#if defined(A30)
static const char *JOY_MODE[] = {
    "Disable", "D-Pad", "Stylus", "Customized Key"
};

static const char *JOY_CUSKEY[] = {
    "UP", "DOWN", "LEFT", "RIGHT", "A", "B", "X", "Y", "L1", "R1", "L2", "R2", "SELECT", "START"
};
#endif

static int lang_next(void)
{
    int cc = 0;

    for (cc=1; cc<(MAX_LANG_FILE-1); cc++) {
        if (!strcmp(nds.lang.trans[DEF_LANG_SLOT], nds.lang.trans[cc])) {
            if (strcmp(nds.lang.trans[cc + 1], "")) {
                strcpy(nds.lang.trans[DEF_LANG_SLOT], nds.lang.trans[cc + 1]);
                return 0;
            }
        }
    }
    return -1;
}

    dev->VideoInit = init_video;
    dev->VideoQuit = quit_video;
    dev->SetDisplayMode = set_disp_mode;
    dev->CreateSDLWindow = create_window;
    dev->free = delete_device;
    dev->PumpEvents = pump_event;
    return dev;
}

#if defined(UT)
TEST(sdl2_video, create_device)
{
    TEST_ASSERT_NOT_NULL(create_device(0));
}
#endif

VideoBootStrap NDS_VideoDriver = {
    "NDS",
    "NDS Video Driver",
    create_device
};

#if defined(UT)
TEST_GROUP_RUNNER(sdl2_video)
{
    RUN_TEST_CASE(sdl2_video, wl_cb_remove)
    RUN_TEST_CASE(sdl2_video, wl_cb_handle)
    RUN_TEST_CASE(sdl2_video, update_wayland_client_size)
    RUN_TEST_CASE(sdl2_video, wl_display_handler)
    RUN_TEST_CASE(sdl2_video, wl_cb_ping)
    RUN_TEST_CASE(sdl2_video, wl_cb_config)
    RUN_TEST_CASE(sdl2_video, wl_cb_popup_done)
    RUN_TEST_CASE(sdl2_video, quit_wl)
    RUN_TEST_CASE(sdl2_video, init_wl)
    RUN_TEST_CASE(sdl2_video, drm_flip_handler)
    RUN_TEST_CASE(sdl2_video, quit_egl)
    RUN_TEST_CASE(sdl2_video, init_egl)
    RUN_TEST_CASE(sdl2_video, init_sfos_lcd)
    RUN_TEST_CASE(sdl2_video, quit_sfos_lcd)
    RUN_TEST_CASE(sdl2_video, init_miyoo_lcd)
    RUN_TEST_CASE(sdl2_video, quit_miyoo_lcd)
    RUN_TEST_CASE(sdl2_video, flip_lcd_screen)
    RUN_TEST_CASE(sdl2_video, update_nds_screen)
    RUN_TEST_CASE(sdl2_video, sigterm_handler)
    RUN_TEST_CASE(sdl2_video, screen_handler)
    RUN_TEST_CASE(sdl2_video, flush_lcd_screen)
    RUN_TEST_CASE(sdl2_video, delete_device)
    RUN_TEST_CASE(sdl2_video, create_window)
    RUN_TEST_CASE(sdl2_video, prehook_cb_savestate_pre)
    RUN_TEST_CASE(sdl2_video, prehook_cb_savestate_post)
    RUN_TEST_CASE(sdl2_video, prehook_cb_update_screen)
    RUN_TEST_CASE(sdl2_video, prehook_cb_malloc)
    RUN_TEST_CASE(sdl2_video, prehook_cb_free)
    RUN_TEST_CASE(sdl2_video, prehook_cb_realloc)
    RUN_TEST_CASE(sdl2_video, prehook_cb_blit_screen_menu)
    RUN_TEST_CASE(sdl2_video, prehook_cb_print_string)
    RUN_TEST_CASE(sdl2_video, init_video)
    RUN_TEST_CASE(sdl2_video, set_disp_mode)
    RUN_TEST_CASE(sdl2_video, quit_video)
    RUN_TEST_CASE(sdl2_video, create_device)
}
#endif

#endif

