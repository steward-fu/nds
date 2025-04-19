// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include "../../SDL_internal.h"

#if SDL_VIDEO_DRIVER_NDS

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <dirent.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <pthread.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <json-c/json.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#if defined(SFOS_EGL)
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#endif

#include "../SDL_sysvideo.h"
#include "../SDL_pixels_c.h"
#include "../../events/SDL_events_c.h"
#include "SDL_image.h"
#include "SDL_syswm.h"
#include "SDL_version.h"
#include "SDL_loadso.h"
#include "SDL_events.h"
#include "SDL_video.h"
#include "SDL_mouse.h"

#include "menu_nds.h"
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

nds_video myvid = { 0 };

#if defined(MIYOO_EGL) || defined(SFOS_EGL)
static GLfloat bg_vertices[] = {
   -1.0f,  1.0f,  0.0f,  0.0f,  0.0f,
   -1.0f, -1.0f,  0.0f,  0.0f,  1.0f,
    1.0f, -1.0f,  0.0f,  1.0f,  1.0f,
    1.0f,  1.0f,  0.0f,  1.0f,  0.0f
};

static GLfloat fg_vertices[] = {
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
    int size = 0;
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

    size = w * h * 4;
    c0 = SCREEN_H / w;
    c1 = SCREEN_W / h;
    scale = (c0 > c1) ? c1 : c0;
    scale = (scale <= 0) ? 1 : scale;

#if !defined(UT)
    y0 = ((float)(w * scale) / SCREEN_H);
    x0 = ((float)(h * scale) / SCREEN_W);

    fg_vertices[0] = -x0;
    fg_vertices[1] = y0;
    fg_vertices[5] = -x0;
    fg_vertices[6] = -y0;
    fg_vertices[10] =  x0;
    fg_vertices[11] = -y0;
    fg_vertices[15] =  x0;
    fg_vertices[16] =  y0;
#endif

    memset(myvid.wl.data, 0, size);
    myvid.wl.pixels[0] = (void *)myvid.wl.data;
    myvid.wl.pixels[1] = (void *)(myvid.wl.data + size);

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

static void wl_cb_popup_done(void *dat, struct wl_shell_surface *shell_surf)
{
    debug(SDL"call %s()\n", __func__);
}

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
    debug(SDL"call %s()\n", __func__);

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

#if defined(UT)
TEST(sdl2_video, quit_wl)
{
    TEST_ASSERT_EQUAL_INT(0, quit_wl());
}
#endif

static int init_wl(void)
{
    debug(SDL"call %s()\n", __func__);

#if !defined(UT)
    myvid.wl.display = wl_display_connect(NULL);
    myvid.wl.registry = wl_display_get_registry(myvid.wl.display);

    wl_registry_add_listener(myvid.wl.registry, &cb_global, NULL);
    wl_display_dispatch(myvid.wl.display);
    wl_display_roundtrip(myvid.wl.display);

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

    eglTerminate(myvid.egl.display);
    glDeleteShader(myvid.egl.vert_shader);
    glDeleteShader(myvid.egl.frag_shader);
    glDeleteProgram(myvid.egl.prog);

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

#if defined(MIYOO_EGL)
    myvid.egl.display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
#endif

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

#if defined(SFOS_EGL)
    myvid.egl.surface = eglCreateWindowSurface(myvid.egl.display, cfg, (EGLNativeWindowType)myvid.wl.window, NULL);
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

    glGetShaderiv(myvid.egl.vert_shader, GL_COMPILE_STATUS, &compiled);
    if (!compiled) {
        GLint len = 0;
        glGetShaderiv(myvid.egl.vert_shader, GL_INFO_LOG_LENGTH, &len);
        if (len > 1) {
            char* info = malloc(sizeof(char) * len);
            glGetShaderInfoLog(myvid.egl.vert_shader, len, NULL, info);
            error(SDL"%s, failed to compile vert_shader: %s\n", __func__, info);
            free(info);
        }
    }

    myvid.egl.frag_shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(myvid.egl.frag_shader, 1, &frag_shader_code, NULL);
    glCompileShader(myvid.egl.frag_shader);
    
    glGetShaderiv(myvid.egl.frag_shader, GL_COMPILE_STATUS, &compiled);
    if (!compiled) {
        GLint len = 0;
        glGetShaderiv(myvid.egl.frag_shader, GL_INFO_LOG_LENGTH, &len);
        if (len > 1) {
            char* info = malloc(sizeof(char) * len);
            glGetShaderInfoLog(myvid.egl.frag_shader, len, NULL, info);
            error(SDL"%s, failed to compile frag_shader: %s\n", __func__, info);
            free(info);
        }
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

    glGenTextures(TEXTURE_MAX, myvid.egl.tex);
    glBindTexture(GL_TEXTURE_2D, myvid.egl.tex[TEXTURE_LCD0]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glViewport(0, 0, SCREEN_W, SCREEN_H);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

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

#if defined(SFOS_EGL) || defined(UT)
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

    myvid.wl.flip = 0;
    myvid.wl.ready = 0;
    myvid.wl.data = SDL_malloc(size);
    memset(myvid.wl.data, 0, size);

#if !defined(UT)
    pthread_create(&myvid.wl.thread.id, NULL, wl_display_handler, NULL);
    while (myvid.wl.init == 0) {
        usleep(100000);
    }
#endif

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

#if defined(MIYOO_MINI) || defined(UT)
static int init_mini_lcd(void)
{
    debug(SDL"call %s()\n", __func__);

    myvid.fb.fd = open(FB_DEV, O_RDWR);
    if (myvid.fb.fd < 0) {
        error(SDL"failed to open "FB_DEV"\n");
        return -1;
    }
    debug(SDL"fb handle=%d\n", myvid.fb.fd);

#if !defined(UT)
    MI_SYS_Init();
    MI_GFX_Open();

    ioctl(myvid.fb.fd, FBIOGET_FSCREENINFO, &myvid.fb.fix_info);
    ioctl(myvid.fb.fd, FBIOGET_VSCREENINFO, &myvid.fb.var_info);

    myvid.fb.var_info.yoffset = 0;
    myvid.fb.var_info.yres_virtual = myvid.fb.var_info.yres * 2;
    ioctl(myvid.fb.fd, FBIOPUT_VSCREENINFO, &myvid.fb.var_info);

    myvid.gfx.dst.phy = myvid.fb.fix_info.smem_start;
    MI_SYS_MemsetPa(myvid.gfx.dst.phy, 0, FB_SIZE);
    MI_SYS_Mmap(myvid.gfx.dst.phy, myvid.fb.fix_info.smem_len, &myvid.gfx.dst.virt, TRUE);

    MI_SYS_MMA_Alloc(NULL, FB_SIZE, &myvid.gfx.src.phy);
    MI_SYS_Mmap(myvid.gfx.src.phy, FB_SIZE, &myvid.gfx.src.virt, TRUE);
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, init_mini_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, init_mini_lcd());
}
#endif

static int quit_mini_lcd(void)
{
    debug(SDL"call %s()\n", __func__);

#if !defined(UT)
    MI_SYS_Munmap(myvid.gfx.dst.virt, FB_SIZE);
    MI_SYS_Munmap(myvid.gfx.src.virt, FB_SIZE);
    MI_SYS_MMA_Free(myvid.gfx.src.phy);

    MI_GFX_Close();
    MI_SYS_Exit();
#endif

    if (myvid.fb.fd > 0) {
        myvid.fb.var_info.yoffset = 0;
        ioctl(myvid.fb.fd, FBIOPUT_VSCREENINFO, &myvid.fb.var_info);
        close(myvid.fb.fd);
        myvid.fb.fd = -1;
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_video, quit_mini_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, quit_mini_lcd());
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

#if defined(MIYOO_MINI)
    if (ioctl(myvid.fb.fd, FBIOPAN_DISPLAY, &myvid.fb.var_info) < 0) {
        error(SDL"failed to flip fb through ioctl()\n");
    }
    myvid.fb.var_info.yoffset ^= SCREEN_H;
    debug(SDL"fb yoffset=%d\n", myvid.fb.var_info.yoffset);
#endif
    return 0;
}

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

        flush_lcd_screen(-1, pixels, lcd, lcd, lcd.w * bpp, 0, 0);
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
    static int running = 0;

    debug(SDL"%s()++\n", __func__);

    if (running == 0) {
        running = 1;
        emu_quit();
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

    debug(SDL"call %s()--\n", __func__);

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

#if defined(MIYOO_MINI)
    MI_U16 fence = 0;
    MI_GFX_Opt_t opt = { 0 };
    int fmt = (pitch / srt.w) == 2 ? E_MI_GFX_FMT_RGB565 : E_MI_GFX_FMT_ARGB8888;
#endif

    debug(SDL"call %s()\n", __func__);
    debug(SDL"tex_id=%d, pixels=%p, pitch=%d, alpha=%d, rotate=%d\n", tex_id, pixels, pitch, alpha, rotate);
    debug(SDL"src(%d, %d, %d, %d)\n", srt.x, srt.y, srt.w, srt.h);
    debug(SDL"dst(%d, %d, %d, %d)\n", drt.x, drt.y, drt.w, drt.h);

    if (!pixels) {
        error(SDL"pixels is null\n");
        return -1;
    }

#if defined(SFOS_EGL) || defined(MIYOO_EGL)
#if defined(MIYOO_EGL)
    if (tex_id >= TEXTURE_MAX) {
        error(SDL"invalid tex_id(%d)\n", tex_id);
        return -1;
    }
#endif

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

    if ((pitch / srt.w) == 2) {
        fmt = GL_RGB;
        type = GL_UNSIGNED_SHORT_5_6_5;
        debug(SDL"format=GL_UNSIGNED_SHORT_5_6_5\n");
    }
    else {
        fmt = GL_RGBA;
        type = GL_UNSIGNED_BYTE;
        debug(SDL"format=GL_UNSIGNED_BYTE\n");
    }

    debug(SDL"use TEXTURE=%d\n", tex);
    if (tex == TEXTURE_BUF) {
        glBindTexture(GL_TEXTURE_2D, myvid.egl.tex[tex]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexImage2D(GL_TEXTURE_2D, 0, fmt, srt.w, srt.h, 0, fmt, type, pixels);
    }

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myvid.egl.tex[tex]);
    glVertexAttribPointer(myvid.egl.pos, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
    glVertexAttribPointer(myvid.egl.coord, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
    glEnableVertexAttribArray(myvid.egl.pos);
    glEnableVertexAttribArray(myvid.egl.coord);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);
#endif

#if defined(MIYOO_MINI)
    neon_memcpy(myvid.gfx.src.virt, pixels, srt.h * pitch);
    MI_SYS_FlushInvCache(myvid.gfx.src.virt, FB_SIZE);

    opt.u32GlobalSrcConstColor = 0;
    opt.eRotate = rotate;
    opt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
    opt.eDstDfbBldOp = 0;
    opt.eDFBBlendFlag = 0;

    myvid.gfx.src.rt.s32Xpos = srt.x;
    myvid.gfx.src.rt.s32Ypos = srt.y;
    myvid.gfx.src.rt.u32Width = srt.w;
    myvid.gfx.src.rt.u32Height = srt.h;
    myvid.gfx.src.surf.u32Width = srt.w;
    myvid.gfx.src.surf.u32Height = srt.h;
    myvid.gfx.src.surf.u32Stride = pitch;
    myvid.gfx.src.surf.eColorFmt = fmt;
    myvid.gfx.src.surf.phyAddr = myvid.gfx.src.phy;

    myvid.gfx.dst.rt.s32Xpos = drt.x;
    myvid.gfx.dst.rt.s32Ypos = drt.y;
    myvid.gfx.dst.rt.u32Width = drt.w;
    myvid.gfx.dst.rt.u32Height = drt.h;
    myvid.gfx.dst.surf.u32Width = SCREEN_W;
    myvid.gfx.dst.surf.u32Height = SCREEN_H;
    myvid.gfx.dst.surf.u32Stride = SCREEN_W * 4;
    myvid.gfx.dst.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    myvid.gfx.dst.surf.phyAddr = myvid.gfx.dst.phy + (myvid.fb.var_info.yoffset * SCREEN_W * 4);

    MI_GFX_BitBlit(&myvid.gfx.src.surf, &myvid.gfx.src.rt, &myvid.gfx.dst.surf, &myvid.gfx.dst.rt, &opt, &fence);
    MI_GFX_WaitAllDone(TRUE, fence);
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
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_savestate_post)
{
    prehook_cb_savestate_post();
    TEST_PASS();
}
#endif

void prehook_cb_update_screen(void)
{
    static int prepare_time = 30;

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

void* prehook_cb_malloc(size_t size)
{
    void *p = NULL;

    debug(SDL"call %s()\n", __func__);
    p = malloc(size);
    debug(SDL"ptr=%p, size=%d\n", __func__, p, size);

    return p;
}

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
    debug(SDL"call %s(ptr=%p)\n", __func__, ptr);

    free(ptr);
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

void* prehook_cb_realloc(void *ptr, size_t size)
{
    void *p = NULL;

    debug(SDL"call %s(ptr=%p, size=%d)\n", __func__, ptr, size);

    p = realloc(ptr, size);
    debug(SDL"ptr=%p, size=%d\n", __func__, p, size);

    return p;
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

void prehook_cb_blit_screen_menu(uint16_t *src, uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
    debug(SDL"call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_blit_screen_menu)
{
    prehook_cb_blit_screen_menu(NULL, 0, 0, 0, 0);
    TEST_PASS();
}
#endif

void prehook_cb_print_string(char *p, uint32_t fg, uint32_t bg, uint32_t x, uint32_t y)
{
    debug(SDL"call %s()\n", __func__);
}

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

    debug(SDL"call %s()\n", __func__);

#if !defined(UT)
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

#if defined(MIYOO_MINI) || defined(UT)
    init_mini_lcd();
#endif

    init_event();

#if defined(SFOS_EGL) || defined(MIYOO_EGL) || defined(MIYOO_MINI)
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

#if defined(MIYOO_MINI) || defined(UT)
    quit_mini_lcd();
#endif

    quit_hook();
    TTF_Quit();

    debug(SDL"update cfg to \"%s\"\n", path);
    update_cfg(path);
    quit_cfg();
}

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

    debug(SDL"call %s()\n", __func__);

    dev = (SDL_VideoDevice *)SDL_calloc(1, sizeof(SDL_VideoDevice));
    if (!dev) {
        error(SDL"failed to allocate buffer for SDL_VideoDevice\n");
        SDL_OutOfMemory();
        return NULL;
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
    SDL_VideoDevice * r = create_device(0);

    TEST_ASSERT_NOT_NULL(r);
    delete_device(r);
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

