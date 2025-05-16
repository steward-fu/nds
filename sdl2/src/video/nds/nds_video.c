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

#if defined(GKD2) || defined(BRICK)
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
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

nds_video myvideo = { 0 };

extern nds_hook myhook;
extern nds_event myevent;
extern nds_config myconfig;
        
static char lang_file_name[MAX_LANG_FILE][MAX_LANG_NAME] = { 0 };

#if defined(TRIMUI)
static uint32_t LUT_256x192_S00[NDS_W * NDS_H] = { 0 };
static uint32_t LUT_256x192_S01[NDS_W * NDS_H] = { 0 };
static uint32_t LUT_256x192_S10[NDS_W * NDS_H] = { 0 };
static uint32_t LUT_256x192_S11[NDS_W * NDS_H] = { 0 };
#endif

static void quit_video(_THIS);
static int flip_lcd(void);
static int init_device(void);
static int quit_device(void);
static int init_video(_THIS);
static int free_menu_res(void);
static int load_lang_file(void);
static int load_layout_bg(void);
static int get_font_width(const char *);
static int get_font_height(const char *);
static int draw_touch_pen(void *, int, int);
static int draw_info(SDL_Surface *, const char *, int, int, uint32_t, uint32_t);
static int set_disp_mode(_THIS, SDL_VideoDisplay *, SDL_DisplayMode *);

#if defined(TRIMUI)
static void disp_resize(void);
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(QX1000) || defined(XT897)
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

#if defined(QX1000) || defined(XT897)
const char *vert_shader_src =
    "attribute vec4 vert_pos;                                   \n"
    "attribute vec2 vert_coord;                                 \n"
    "varying vec2 frag_coord;                                   \n"
    "void main()                                                \n"
    "{                                                          \n"
    "    gl_Position = vert_pos;                                \n"
    "    frag_coord = vert_coord;                               \n"
    "}                                                          \n";

const char *frag_shader_src =
    "#ifdef GL_ES                                               \n"
    "precision mediump float;                                   \n"
    "#endif                                                     \n"
    "varying vec2 frag_coord;                                   \n"
    "uniform float frag_angle;                                  \n"
    "uniform float frag_aspect;                                 \n"
    "uniform sampler2D frag_sampler;                            \n"
    "const vec2 HALF = vec2(0.5);                               \n"
    "void main()                                                \n"
    "{                                                          \n"
    "    float aSin = sin(frag_angle);                          \n"
    "    float aCos = cos(frag_angle);                          \n"
    "    vec2 tc = frag_coord;                                  \n"
    "    mat2 rotMat = mat2(                                    \n"
    "        aCos, -aSin, aSin, aCos);                          \n"
    "    mat2 scaleMat = mat2(                                  \n"
    "        frag_aspect, 0.0, 0.0, 1.0);                       \n"
    "    mat2 scaleMatInv = mat2(                               \n"
    "        1.0 / frag_aspect, 0.0, 0.0, 1.0);                 \n"
    "    tc -= HALF.xy;                                         \n"
    "    tc = scaleMatInv * rotMat * scaleMat * tc;             \n"
    "    tc += HALF.xy;                                         \n"
    "    vec3 tex = texture2D(frag_sampler, tc).bgr;            \n"
    "    gl_FragColor = vec4(tex, 1.0);                         \n"
    "}                                                          \n";
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP)
const char *vert_shader_src =
    "attribute vec4 vert_pos;                                   \n"
    "attribute vec2 vert_coord;                                 \n"
    "attribute float vert_alpha;                                \n"
    "varying vec2 frag_coord;                                   \n"
    "void main()                                                \n"
    "{                                                          \n"
#if !defined(FLIP)
    "    const float frag_angle = 0.0;                          \n"
    "    frag_angle = 90.0 * (3.1415 * 2.0);                    \n"
    "    frag_angle = frag_angle / 360.0;                       \n"
    "    mat4 rot = mat4(                                       \n"
    "        cos(frag_angle), -sin(frag_angle), 0.0, 0.0,       \n"
    "        sin(frag_angle),  cos(frag_angle), 0.0, 0.0,       \n"
    "               0.0,         0.0, 1.0, 0.0,                 \n"
    "               0.0,         0.0, 0.0, 1.0                  \n"
    "    );                                                     \n"
    "    gl_Position = vert_pos * rot;                          \n"
    "    frag_coord = vert_coord;                               \n"
#else
    "    gl_Position = vert_pos;                                \n"
    "    frag_coord = vert_coord;                               \n"
#endif
    "}                                                          \n";
    
const char *frag_shader_src =
    "precision mediump float;                                   \n"
    "varying vec2 frag_coord;                                   \n"
    "uniform float s_alpha;                                     \n"
    "uniform sampler2D frag_sampler;                            \n"
    "void main()                                                \n"
    "{                                                          \n"
    "    vec3 tex = texture2D(frag_sampler, frag_coord).bgr;    \n"
    "    gl_FragColor = vec4(tex, s_alpha);                     \n"
    "}                                                          \n";
#endif

#if defined(QX1000) || defined(XT897)
static volatile int is_wl_thread_running = 0;

static pthread_t thread_id[2] = { 0 };

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

#if defined(QX1000) || defined(XT897)
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

#if defined(QX1000) || defined(XT897) || defined(UT)
void update_wayland_res(int w, int h)
{
    float c0 = 0;
    float c1 = 0;
    float x0 = 0;
    float y0 = 0;
    float scale = 0;

    debug("call %s()\n", __func__);

    myvideo.cur_w = w;
    myvideo.cur_h = h;
    myvideo.wl.info.w = myvideo.cur_w;
    myvideo.wl.info.h = myvideo.cur_h;
    myvideo.wl.info.size = myvideo.wl.info.w * myvideo.wl.info.h * 4;

    c0 = ((float)WL_WIN_H) / myvideo.wl.info.w;
    c1 = ((float)WL_WIN_W) / myvideo.wl.info.h;
    scale = c0 > c1 ? c1 : c0;
    if (scale <= 0) {
        scale = 1.0;
    }

    y0 = ((float)(myvideo.wl.info.w * scale) / WL_WIN_H);
    x0 = ((float)(myvideo.wl.info.h * scale) / WL_WIN_W);

    fg_vertices[0] = -x0;
    fg_vertices[1] = y0;
    fg_vertices[5] = -x0;
    fg_vertices[6] = -y0;
    fg_vertices[10] =  x0;
    fg_vertices[11] = -y0;
    fg_vertices[15] =  x0;
    fg_vertices[16] =  y0;

    memset(myvideo.wl.data, 0, WL_WIN_W * WL_WIN_H * 4);
    debug("new wayland width=%d, height=%d, scale=%.2f\n", w, h, scale);
}

#if defined(UT)
TEST(sdl2_video, update_wayland_res)
{
    TEST_ASSERT_EQUAL_INT(0, update_wayland_res());
}
#endif

static void* wl_disp_handler(void* pParam)
{
    while (is_wl_thread_running) {
        if (myvideo.wl.init && myvideo.wl.ready) {
            wl_display_dispatch(myvideo.wl.display);
        }
        else {
            usleep(1000);
        }
    }

    return NULL;
}

#if defined(UT)
TEST(sdl2_video, wl_disp_handler)
{
    TEST_ASSERT_EQUAL_INT(0, wl_disp_handler());
}
#endif

static void cb_ping(void *dat, struct wl_shell_surface *shell_surf, uint32_t serial)
{
    debug("call %s()\n", __func__);

    wl_shell_surface_pong(shell_surf, serial);
}

#if defined(UT)
TEST(sdl2_video, cb_ping)
{
    TEST_ASSERT_EQUAL_INT(0, cb_ping());
}
#endif

static void cb_config(void *dat, struct wl_shell_surface *shell_surf, uint32_t edges, int32_t w, int32_t h)
{
    debug("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, cb_config)
{
    TEST_ASSERT_EQUAL_INT(0, cb_config());
}
#endif

static void cb_popup_done(void *dat, struct wl_shell_surface *shell_surf)
{
    debug("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, cb_popup_done)
{
    TEST_ASSERT_EQUAL_INT(0, cb_popup_done());
}
#endif

static const struct wl_shell_surface_listener cb_shell_surf = {
    cb_ping,
    cb_config,
    cb_popup_done
};

static void cb_handle(void *dat, struct wl_registry *reg, uint32_t id, const char *intf, uint32_t ver)
{
    debug("call %s()\n", __func__);

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
    TEST_ASSERT_EQUAL_INT(0, cb_handle());
}
#endif

static void cb_remove(void *dat, struct wl_registry *reg, uint32_t id)
{
    debug("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_video, cb_remove)
{
    TEST_ASSERT_EQUAL_INT(0, cb_remove());
}
#endif

static int quit_egl(void)
{
    debug("call %s()\n", __func__);

    myvideo.wl.init = 0;
    myvideo.wl.ready = 0;

    eglDestroySurface(myvideo.wl.egl.display, myvideo.wl.egl.surface);
    eglDestroyContext(myvideo.wl.egl.display, myvideo.wl.egl.context);
    wl_egl_window_destroy(myvideo.wl.egl.window);
    eglTerminate(myvideo.wl.egl.display);
    glDeleteShader(myvideo.wl.egl.vShader);
    glDeleteShader(myvideo.wl.egl.fShader);
    glDeleteProgram(myvideo.wl.egl.pObject);

    return 0;
}

#if defined(UT)
TEST(sdl2_video, quit_egl)
{
    TEST_ASSERT_EQUAL_INT(0, quit_egl());
}
#endif

static int quit_wl(void)
{
    debug("call %s()\n", __func__);

    myvideo.wl.init = 0;
    myvideo.wl.ready = 0;

    wl_shell_surface_destroy(myvideo.wl.shell_surface);
    wl_shell_destroy(myvideo.wl.shell);
    wl_surface_destroy(myvideo.wl.surface);
    wl_compositor_destroy(myvideo.wl.compositor);
    wl_registry_destroy(myvideo.wl.registry);
    wl_display_disconnect(myvideo.wl.display);

    SDL_free(myvideo.wl.bg);
    myvideo.wl.bg = NULL;

    SDL_free(myvideo.wl.data);
    myvideo.wl.data = NULL;

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
    debug("call %s()\n", __func__);

    myvideo.wl.display = wl_display_connect(NULL);
    myvideo.wl.registry = wl_display_get_registry(myvideo.wl.display);

    wl_registry_add_listener(myvideo.wl.registry, &cb_global, NULL);
    wl_display_dispatch(myvideo.wl.display);
    wl_display_roundtrip(myvideo.wl.display);

    myvideo.wl.surface = wl_compositor_create_surface(myvideo.wl.compositor);
    myvideo.wl.shell_surface = wl_shell_get_shell_surface(myvideo.wl.shell, myvideo.wl.surface);
    wl_shell_surface_set_toplevel(myvideo.wl.shell_surface);
    wl_shell_surface_add_listener(myvideo.wl.shell_surface, &cb_shell_surf, NULL);
    
    myvideo.wl.region = wl_compositor_create_region(myvideo.wl.compositor);
    wl_region_add(myvideo.wl.region, 0, 0, WL_WIN_W, WL_WIN_H);
    wl_surface_set_opaque_region(myvideo.wl.surface, myvideo.wl.region);
    myvideo.wl.egl.window = wl_egl_window_create(myvideo.wl.surface, WL_WIN_W, WL_WIN_H);

    return 0;
}

#if defined(UT)
TEST(sdl2_video, init_wl)
{
    TEST_ASSERT_EQUAL_INT(0, init_wl());
}
#endif

static int init_egl(void)
{
    EGLint cnt = 0;
    EGLint major = 0;
    EGLint minor = 0;
    EGLConfig cfg = 0;

    debug("call %s()\n", __func__);

    myvideo.wl.egl.display = eglGetDisplay((EGLNativeDisplayType)myvideo.wl.display);
    eglInitialize(myvideo.wl.egl.display, &major, &minor);
    eglGetConfigs(myvideo.wl.egl.display, NULL, 0, &cnt);
    eglChooseConfig(myvideo.wl.egl.display, egl_cfg, &cfg, 1, &cnt);
    myvideo.wl.egl.surface = eglCreateWindowSurface(myvideo.wl.egl.display, cfg, (EGLNativeWindowType)myvideo.wl.egl.window, NULL);
    myvideo.wl.egl.context = eglCreateContext(myvideo.wl.egl.display, cfg, EGL_NO_CONTEXT, ctx_attribs);
    eglMakeCurrent(myvideo.wl.egl.display, myvideo.wl.egl.surface, myvideo.wl.egl.surface, myvideo.wl.egl.context);

    myvideo.wl.egl.vShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(myvideo.wl.egl.vShader, 1, &vert_shader_src, NULL);
    glCompileShader(myvideo.wl.egl.vShader);

    myvideo.wl.egl.fShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(myvideo.wl.egl.fShader, 1, &frag_shader_src, NULL);
    glCompileShader(myvideo.wl.egl.fShader);
    
    myvideo.wl.egl.pObject = glCreateProgram();
    glAttachShader(myvideo.wl.egl.pObject, myvideo.wl.egl.vShader);
    glAttachShader(myvideo.wl.egl.pObject, myvideo.wl.egl.fShader);
    glLinkProgram(myvideo.wl.egl.pObject);
    glUseProgram(myvideo.wl.egl.pObject);

    myvideo.wl.egl.positionLoc = glGetAttribLocation(myvideo.wl.egl.pObject, "vert_pos");
    myvideo.wl.egl.texCoordLoc = glGetAttribLocation(myvideo.wl.egl.pObject, "vert_coord");
    myvideo.wl.egl.samplerLoc = glGetUniformLocation(myvideo.wl.egl.pObject, "frag_sampler");
    glUniform1f(glGetUniformLocation(myvideo.wl.egl.pObject, "frag_angle"), 90 * (3.1415 * 2.0) / 360.0);
    glUniform1f(glGetUniformLocation(myvideo.wl.egl.pObject, "frag_aspect"), 1);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    glGenTextures(1, &myvideo.wl.egl.textureId);
    glBindTexture(GL_TEXTURE_2D, myvideo.wl.egl.textureId);

    glViewport(0, 0, WL_WIN_W, WL_WIN_H);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glVertexAttribPointer(myvideo.wl.egl.positionLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bg_vertices);
    glVertexAttribPointer(myvideo.wl.egl.texCoordLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bg_vertices[3]);
    glEnableVertexAttribArray(myvideo.wl.egl.positionLoc);
    glEnableVertexAttribArray(myvideo.wl.egl.texCoordLoc);
    glActiveTexture(GL_TEXTURE0);
    glUniform1i(myvideo.wl.egl.samplerLoc, 0);

    return 0;
}

#if defined(UT)
TEST(sdl2_video, init_egl)
{
    TEST_ASSERT_EQUAL_INT(0, init_egl());
}
#endif

static void* wl_draw_handler(void *param)
{
    init_wl();
    init_egl();

    debug("call %s()\n", __func__);

#if !defined(UT)
    myvideo.wl.init = 1;
#endif

    while (is_wl_thread_running) {
        if (myvideo.wl.ready) {
            if (myconfig.filter == FILTER_PIXEL) {
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            }
            else {
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            }
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

            glVertexAttribPointer(myvideo.wl.egl.positionLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bg_vertices);
            glVertexAttribPointer(myvideo.wl.egl.texCoordLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bg_vertices[3]);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, myvideo.wl.info.w, myvideo.wl.info.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, myvideo.wl.bg);
            glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);


            glVertexAttribPointer(myvideo.wl.egl.positionLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
            glVertexAttribPointer(myvideo.wl.egl.texCoordLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, myvideo.wl.info.w, myvideo.wl.info.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, myvideo.wl.pixels[myvideo.wl.flip ^ 1]);
            glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

            eglSwapBuffers(myvideo.wl.egl.display, myvideo.wl.egl.surface);
        }
        else {
            usleep(1000);
        }
    }
    return NULL;
}

#if defined(UT)
TEST(sdl2_video, wl_draw_handler)
{
    TEST_ASSERT_EQUAL_INT(0, wl_draw_handler());
}
#endif
#endif

#if defined(MINI)
static int get_bat_val(void)
{
    int r = 0;
    uint32_t v[2] = { 0 };
    struct stat st = { 0 };
    char buf[MAX_PATH] = { 0 };
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

    if (myvideo.sar_fd < 0) {
        return 0;
    }

    ioctl(myvideo.sar_fd, 0x6100, 0);
    ioctl(myvideo.sar_fd, 0x6101, v);
    r = 100 - (((BAT_MAX_VAL - v[1]) * 100) / (BAT_MAX_VAL - BAT_MIN_VAL));
    if (r > 100) {
        r = 100;
    }
    if (r < 0) {
        r = 0;
    }
    return r;
}
#endif

#if defined(A30)
static int get_bat_val(void)
{
    static int maxv = 0;

    int r = 0;
    int curv = 0;
    FILE *fd = NULL;
    char buf[32] = { 0 };

    if (maxv == 0) {
        fd = popen(BAT_MAX_CMD, "r");
        if (fd) {
            fgets(buf, sizeof(buf), fd);
            pclose(fd);
            maxv = atoi(buf);
        }
    }

    fd = popen(BAT_CUR_CMD, "r");
    if (fd) {
        fgets(buf, sizeof(buf), fd);
        pclose(fd);
        curv = atoi(buf);
    }

    r = 100 - (((maxv - curv) * 100) / 1200000);
    if (r > 100) {
        r = 100;
    }
    if (r < 0) {
        r = 0;
    }
    return r;
}
#endif

#if defined(FLIP)
static int get_bat_val(void)
{
    int r = 0;
    int curp = 0;
    FILE *fd = NULL;
    char buf[32] = { 0 };

    fd = popen(BAT_CUR_CMD, "r");
    if (fd) {
        fgets(buf, sizeof(buf), fd);
        pclose(fd);
        curp = atoi(buf);
    }

    r = curp;
    return r;
}
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

    debug("call %s()\n", __func__);

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

    debug("call %s()\n", __func__);

#if defined(TRIMUI)
    div = 2;
#endif

    for (cc = 0; cc < myvideo.menu.drastic.item.cnt; cc++) {
        draw = 0;
        x = 90 / div;
        w = myvideo.menu.line_h / div;
        h = 100 / div;

#if defined(TRIMUI)
        x = 30 / div;
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
                rt.w = myvideo.cur_w - (10 / div);
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
                    SDL_BlitSurface(myvideo.menu.drastic.cursor, NULL, myvideo.menu.drastic.frame, &rt);
                }
            }
            draw_info(myvideo.menu.drastic.frame, buf, x, y, p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL, 0);
        }
    }

    y = 10;
    sprintf(buf, "%s", __DATE__);
    x = myvideo.cur_w - get_font_width(buf) - 10;
    draw_info(myvideo.menu.drastic.frame, buf, x, y / div, MENU_COLOR_UNSEL, 0);

    if (draw_shot) {
        const uint32_t len = NDS_W * NDS_H * 2;
        uint16_t *top = malloc(len);
        uint16_t *bottom = malloc(len);

        if (top && bottom) {
            SDL_Surface *t = NULL;
#if defined(TRIMUI)
            SDL_Surface *sm = NULL;
#endif

#if defined(TRIMUI)
            const int SM_W = (float)NDS_W / 1.35;
            const int SM_H = (float)NDS_H / 1.35;
#endif
            uint32_t slot = *((uint32_t *)myhook.var.system.savestate_num);
            nds_load_state_index pfn = (nds_load_state_index)myhook.fun.load_state_index;

#if defined(TRIMUI)
            sm = SDL_CreateRGBSurface(0, SM_W, SM_H, 16, 0, 0, 0, 0);
#endif

            memset(top, 0, len);
            memset(bottom, 0, len);
            pfn((void*)myhook.var.system.base, slot, top, bottom, 1);
            t = SDL_CreateRGBSurfaceFrom(top, NDS_W, NDS_H, 16, NDS_W * 2, 0, 0, 0, 0);
            if (t) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
                rt.x = myvideo.cur_w - (NDS_W + 10);
                rt.y = 50;
                rt.w = NDS_W;
                rt.h = NDS_H;
                SDL_BlitSurface(t, NULL, myvideo.menu.drastic.frame, &rt);
#endif
                SDL_FreeSurface(t);
            }

            t = SDL_CreateRGBSurfaceFrom(bottom, NDS_W, NDS_H, 16, NDS_W * 2, 0, 0, 0, 0);
            if (t) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
                rt.x = myvideo.cur_w - (NDS_W + 10);
                rt.y = 50 + NDS_H;
                rt.w = NDS_W;
                rt.h = NDS_H;
                SDL_BlitSurface(t, NULL, myvideo.menu.drastic.frame, &rt);
#endif

#if defined(TRIMUI)
                SDL_SoftStretch(t, NULL, sm, NULL);

                rt.x = myvideo.cur_w - (SM_W + 5);
                rt.y = (myvideo.cur_h - SM_H) >> 1;
                rt.w = SM_W;
                rt.h = SM_H;
                SDL_BlitSurface(sm, NULL, myvideo.menu.drastic.frame, &rt);
#endif
                SDL_FreeSurface(t);
            }

#if defined(TRIMUI)
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

    debug("call %s()\n", __func__);

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
    TEST_ASSERT_EQUAL_INT(0, mark_double_spaces());
}
#endif

static char* find_menu_string_tail(char *p)
{
    int cc = 0;

    debug("call %s()\n", __func__);

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
    TEST_ASSERT_EQUAL_INT(0, find_menu_string_tail());
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

    debug("call %s()\n", __func__);

#if defined(TRIMUI)
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
                rt.w = myvideo.cur_w - (10 / div);
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
                    myvideo.cur_w - w - (ww / div),
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

    debug("call %s()\n", __func__);

#if defined(TRIMUI)
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
                    rt.w = myvideo.cur_w - (10 / div);
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
                    rt.w = myvideo.cur_w - (10 / div);
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

    debug("call %s()\n", __func__);

#if defined(TRIMUI)
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
                    rt.w = myvideo.cur_w - (10 / div);
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
                    rt.w = myvideo.cur_w - (10 / div);
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

    debug("call %s()\n", __func__);

#if defined(TRIMUI)
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
                rt.w = myvideo.cur_w - (10 / div);
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
                    myvideo.cur_w - w - (ww / div),
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
                    myvideo.cur_w - w - (ww / div),
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
                    myvideo.cur_w - w - (ww / div),
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

    debug("call %s()\n", __func__);

#if defined(TRIMUI)
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
                rt.w = myvideo.cur_w - (10 / div);
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
                rt.x = myvideo.cur_w - myvideo.menu.drastic.yes->w - (w / div);
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

    debug("call %s()\n", __func__);

#if defined(TRIMUI)
    div = 2;
#endif

    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
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
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        if (myvideo.menu.drastic.item.idx[cc].x == chk) {
            if (myvideo.menu.drastic.item.idx[cc].bg > 0) {
                break;
            }
            cursor+= 1;
        }
    }

    all = 0;
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
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
    rt.w = myvideo.cur_w - (10 / div);
    rt.h = w;
    SDL_FillRect(
        myvideo.menu.drastic.frame,
        &rt,
        SDL_MapRGB(myvideo.menu.drastic.frame->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff)
    );
    draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, 25 / div, 0xa0cb93, 0);

    cnt = 0;
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        w = myvideo.menu.line_h / div;
        p = &myvideo.menu.drastic.item.idx[cc];
        if (p->x == chk) {
            y = (25 / div) + (((cnt - s0) + 1) * w);
            if ((cnt >= s0) && (cnt < s1)) {
                if (p->bg) {
                    rt.x = 5 / div;
                    rt.y = y - (4 / div);
                    rt.w = myvideo.cur_w - (10 / div);
                    rt.h = w;
                    SDL_FillRect(
                        myvideo.menu.drastic.frame,
                        &rt,
                        SDL_MapRGB(myvideo.menu.drastic.frame->format,
                        (MENU_COLOR_DRASTIC >> 16) & 0xff, (MENU_COLOR_DRASTIC >> 8) & 0xff, MENU_COLOR_DRASTIC & 0xff));
                }
                draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, y, p->bg ? MENU_COLOR_SEL : MENU_COLOR_UNSEL, 0);
            }
            cnt+= 1;
        }
    }
    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_drastic_menu_rom)
{
    TEST_ASSERT_EQUAL_INT(0, draw_drastic_menu_rom());
}
#endif

int handle_drastic_menu(void)
{
    int layer = 0;

    debug("call %s()\n", __func__);

    layer = get_current_menu_layer();
    SDL_SoftStretch(
        (layer == MENU_MAIN) ? myvideo.menu.drastic.bg0 : myvideo.menu.drastic.bg1,
        NULL,
        myvideo.menu.drastic.frame, NULL
    );

    debug("cur layer=%d\n", layer);
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
        exit(-1);
        return 0;
    }
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    myvideo.menu.update = 1;
#else
    flush_lcd(
        -1,
        myvideo.menu.drastic.frame->pixels,
        myvideo.menu.drastic.frame->clip_rect,
        myvideo.menu.drastic.frame->clip_rect,
        myvideo.menu.drastic.frame->pitch
    );
    flip_lcd();

    flush_lcd(
        -1,
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
    TEST_ASSERT_EQUAL_INT(0, handle_drastic_menu());
}
#endif

static int process_screen(void)
{
    int idx = 0;
    static int autostate = 15;
    static int show_info = -1;
    static int cur_filter = -1;
    static int cur_layout_bg = -1;
    static int cur_layout_mode = -1;
    static int col_fg = 0xe0e000;
    static int col_bg = 0x000000;
    static char buf[MAX_PATH] = { 0 };

#if defined(MINI) || defined(A30) || defined(FLIP)
    static int chk_bat = BAT_CHK_CNT;
#endif

    debug("call %s()\n", __func__);

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

#if defined(QX1000) || defined(XT897)
        update_wayland_res(NDS_Wx2, NDS_H);
#endif
    }

    if ((cur_filter != myconfig.filter) ||
        (cur_layout_bg != myconfig.layout.bg.sel) ||
        (cur_layout_mode != myconfig.layout.mode.sel) ||
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
        else if (myvideo.lcd.status & NDS_STATE_FAST) {
            show_info = 50;
            sprintf(buf, " %s ", l10n("FAST FORWARD"));
            myvideo.lcd.status &= ~NDS_STATE_FAST;
        }
        else if (cur_layout_mode != myconfig.layout.mode.sel) {
            show_info = 50;
            sprintf(buf, " %s: T%d", l10n("LAYOUT MODE"), myconfig.layout.mode.sel);
        }
        else if (cur_layout_bg != myconfig.layout.bg.sel) {
            show_info = 50;
            if (myvideo.layout.mode[myconfig.layout.mode.sel].bg[myconfig.layout.bg.sel]) {
                sprintf(
                    buf,
                    " %s: %d/%s ",
                    l10n("LAYOUT BG"),
                    myconfig.layout.bg.sel,
                    myvideo.layout.mode[myconfig.layout.mode.sel].bg[myconfig.layout.bg.sel]
                );
            }
            else {
                sprintf(buf, " %s: %s ", l10n("LAYOUT BG"), l10n("NONE"));
            }
        }
        else if (cur_filter != myconfig.filter) {
            show_info = 50;
            sprintf(buf, " %s ", l10n((myconfig.filter == FILTER_PIXEL) ? "PIXEL" : "BLUR"));
        }

        cur_filter = myconfig.filter;
        cur_layout_bg = myconfig.layout.bg.sel;
        cur_layout_mode = myconfig.layout.mode.sel;
        myvideo.layout.redraw_bg = REDRAW_BG_CNT;
    }

    if (show_info == 0) {
        show_info = -1;
        col_fg = 0xe0e000;
        col_bg = 0x000000;
        myvideo.layout.redraw_bg = REDRAW_BG_CNT;
    }
        
    if (myconfig.show_low_battery) {
#if defined(MINI) || defined(A30) || defined(FLIP)
        chk_bat -= 1;
        if (chk_bat <= 0) {
            int v = get_bat_val();

            if (v <= 10) {
                show_info = 50;
                col_fg = 0xffffff;
                col_bg = 0xff0000;
                sprintf(buf, " %s %d%% ", l10n("BAT"), v);
            }

            chk_bat = BAT_CHK_CNT;
            if (v <= 5) {
                chk_bat >>= 1;
            }
        }
#endif
    }

    if (myvideo.layout.redraw_bg) {
        load_layout_bg();
        myvideo.layout.redraw_bg -= 1;
    }

    for (idx = 0; idx < 2; idx++) {
        int pitch = 0;
        int show_pen = 0;
        int need_update = 1;
        void *pixels = NULL;
        SDL_Rect srt = { 0, 0, NDS_W, NDS_H };
        SDL_Rect drt = { 0, idx * 120, 160, 120 };

        if (*myhook.var.sdl.screen[idx].hires_mode) {
            srt.w = NDS_Wx2;
            srt.h = NDS_Hx2;
        }

        show_pen = *myhook.var.sdl.swap_screens == idx ? 0 : 1;
        pitch = *myhook.var.sdl.bytes_per_pixel * srt.w;
        pixels = (void *)(*((uintptr_t *)myhook.var.sdl.screen[idx].pixels));
        drt.x = myvideo.layout.mode[myconfig.layout.mode.sel].screen[idx].x;
        drt.y = myvideo.layout.mode[myconfig.layout.mode.sel].screen[idx].y;
        drt.w = myvideo.layout.mode[myconfig.layout.mode.sel].screen[idx].w;
        drt.h = myvideo.layout.mode[myconfig.layout.mode.sel].screen[idx].h;

#if defined(QX1000)
#elif defined(XT897)
#elif defined(TRIMUI)
#elif defined(PANDORA)
#elif defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        pixels = myvideo.lcd.virt_addr[myvideo.lcd.cur_sel ^ 1][idx];

        switch (myconfig.layout.mode.sel) {
        case LAYOUT_MODE_T0:
        case LAYOUT_MODE_T1:
        case LAYOUT_MODE_T2:
        case LAYOUT_MODE_T3:
            need_update = idx;
            break;
        }
#else
        exit(-1);
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if ((myconfig.layout.mode.sel == LAYOUT_MODE_T16) ||
            (myconfig.layout.mode.sel == LAYOUT_MODE_T17) ||
            (myconfig.layout.mode.sel == LAYOUT_MODE_T18) ||
            (myconfig.layout.mode.sel == LAYOUT_MODE_T19))
        {
            drt.x = (drt.x == 0) ? 320 : 0;
        }
        else {
            drt.y = (SCREEN_H - drt.y) - drt.h;
            drt.x = (SCREEN_W - drt.x) - drt.w;
        }

#if defined(A30) || defined(FLIP)
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

#if defined(A30) || defined(FLIP)
            if (myconfig.joy.show_cnt && (myconfig.joy.mode == MYJOY_MODE_TOUCH)) {
                myconfig.joy.show_cnt -= 1;
            }
#endif
        }

#if defined(A30) || defined(RG28XX) || defined(FLIP)
        if ((idx == 0) &&
            myconfig.layout.swin.border &&
            ((myconfig.layout.mode.sel == LAYOUT_MODE_T0) ||
            (myconfig.layout.mode.sel == LAYOUT_MODE_T1)))
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

        glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[idx]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        if (myconfig.filter == FILTER_PIXEL) {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        }
        else {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        }

        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, srt.w, srt.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
#endif

        if (need_update) {
#if defined(MINI)
            MI_SYS_FlushInvCache(myconfig.screen.pixels[idx], pitch * srt.h);
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
            flush_lcd(idx, pixels, srt, drt, pitch);
#else
            flush_lcd(-1, pixels, srt, drt, pitch);
#endif

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
            switch (myconfig.layout.mode.sel) {
            case LAYOUT_MODE_T0:
            case LAYOUT_MODE_T1:
                drt.x = myvideo.layout.mode[myconfig.layout.mode.sel].screen[0].x;
                drt.y = myvideo.layout.mode[myconfig.layout.mode.sel].screen[0].y;
                drt.w = myvideo.layout.mode[myconfig.layout.mode.sel].screen[0].w;
                drt.h = myvideo.layout.mode[myconfig.layout.mode.sel].screen[0].h;
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
                switch (myconfig.layout.swin.pos) {
                case 0:
                    drt.x = SCREEN_W - drt.w;
                    drt.y = 0;
                    break;
                case 1:
                    drt.x = 0;
                    drt.y = 0;
                    break;
                case 2:
                    drt.x = 0;
                    drt.y = SCREEN_H - drt.h;
                    break;
                case 3:
                    drt.x = SCREEN_W - drt.w;
                    drt.y = SCREEN_H - drt.h;
                    break;
                }
                flush_lcd(TEXTURE_LCD0, (void *)(*((uintptr_t *)myhook.var.sdl.screen[0].pixels)), srt, drt, pitch);
#else
                flush_lcd(-1, (void *)(*((uintptr_t *)myhook.var.sdl.screen[0].pixels)), srt, drt, pitch);
#endif
                break;
            }
#endif
        }

#if defined(TRIMUI)
        break;
#endif
    }

    if (show_info > 0) {
        switch (myconfig.layout.mode.sel) {
        case LAYOUT_MODE_T16:
        case LAYOUT_MODE_T18:
            draw_info(NULL, buf, 0, 0, col_fg, col_bg);
            break;
        case LAYOUT_MODE_T17:
        case LAYOUT_MODE_T19:
            draw_info(
                NULL,
                buf,
                myvideo.cur_w - get_font_height(buf),
                myvideo.cur_h - get_font_width(buf),
                col_fg,
                col_bg
            );
            break;
        default:
            draw_info(NULL, buf, myvideo.cur_w - get_font_width(buf), 0, col_fg, col_bg);
            break;
        }
        show_info -= 1;
    }
    else if (myvideo.lcd.show_fps && myvideo.fps) {
        SDL_Rect rt = { 0 };

        rt.x = myvideo.cur_w - myvideo.fps->w;
        rt.y = 0;
        rt.w = myvideo.fps->w;
        rt.h = myvideo.fps->h;
        flush_lcd(-1, myvideo.fps->pixels, myvideo.fps->clip_rect, rt, myvideo.fps->pitch);
    }

#if defined(TRIMUI)
    if (need_restore) {
        need_restore = 0;
        myconfig.layout.mode.sel = pre_dismode;
        disp_resize();
    }
#endif

    if (*myhook.var.sdl.needs_reinitializing) {
        nds_set_screen_menu_off _func = (nds_set_screen_menu_off)myhook.fun.set_screen_menu_off;
        _func();
    }
    flip_lcd();

    return 0;
}

#if defined(UT)
TEST(sdl2_video, process_screen)
{
    TEST_ASSERT_EQUAL_INT(0, process_screen());
}
#endif

static void* prehook_cb_malloc(size_t size)
{
    static int idx = 0;

    void *r = NULL;
    uint32_t bpp = *myhook.var.sdl.bytes_per_pixel;

    debug("call %s(size=%d)\n", __func__, size);

    if ((size == (NDS_W * NDS_H * bpp)) ||
        (size == (NDS_Wx2 * NDS_Hx2 * bpp)))
    {
        r = myvideo.lcd.virt_addr[0][idx];
        idx += 1;
        idx %= 2;
    }
    else {
        r = malloc(size);
    }
    return r;
}

#if defined(UT)
TEST(sdl2_video, prehook_cb_malloc)
{
    TEST_ASSERT_EQUAL_INT(0, prehook_cb_malloc());
}
#endif

static void prehook_cb_free(void *ptr)
{
    int c0 = 0;
    int c1 = 0;
    int found = 0;

    debug("call %s(ptr=%p)\n", __func__, ptr);

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
TEST(sdl2_video, prehook_cb_realloc)
{
    TEST_ASSERT_EQUAL_INT(0, prehook_cb_free());
}
#endif

static void* prehook_cb_realloc(void *ptr, size_t size)
{
    void *r = NULL;
    uint32_t bpp = *myhook.var.sdl.bytes_per_pixel;

    debug("call %s(ptr=%p, size=%d)\n", __func__, ptr, size);

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
    TEST_ASSERT_EQUAL_INT(0, prehook_cb_realloc());
}
#endif

void prehook_cb_blit_screen_menu(uint16_t *src, uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
    debug("call %s()\n", __func__);
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

    debug("call %s(prepare_time=%d)\n", __func__, prepare_time);

    if (prepare_time) {
        prepare_time -= 1;
    }
    else if (myvideo.lcd.update == 0) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        myvideo.lcd.cur_sel ^= 1;
        *((uint32_t *)myhook.var.sdl.screen[0].pixels) = (uint32_t)myvideo.lcd.virt_addr[myvideo.lcd.cur_sel][0];
        *((uint32_t *)myhook.var.sdl.screen[1].pixels) = (uint32_t)myvideo.lcd.virt_addr[myvideo.lcd.cur_sel][1];
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        myvideo.menu.drastic.enable = 0;
#endif
#endif
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

static void prehook_cb_print_string(char *p, uint32_t fg, uint32_t bg, uint32_t x, uint32_t y)
{
    int w = 0, h = 0;
    SDL_Color col = { 0 };
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    static int fps_cnt = 0;

    debug("call %s(p=\"%s\", fg=0x%x, bg=0x%x, x=%d, y=%d)\n", __func__, p, fg, bg, x, y);

    if (p && (strlen(p) > 0)) {
        if (myvideo.menu.drastic.item.cnt < MAX_MENU_LINE) {
            myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].x = x;
            myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].y = y;
            myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].fg = fg;
            myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].bg = bg;
            strcpy(myvideo.menu.drastic.item.idx[myvideo.menu.drastic.item.cnt].msg, p);
            myvideo.menu.drastic.item.cnt += 1;
        }
        debug("x=%d, y=%d, fg=0x%x, bg=0x%x, \'%s\'\n", x, y, fg, bg, p);
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
#if !defined(UT) && !defined(PANDORA)
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
#if !defined(UT) && !defined(PANDORA)
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

    debug("call %s(sig=%d)\n", __func__, sig);

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

    debug("call %s(p=%p)\n", __func__, p);

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

    myvideo.egl.surface = eglCreateWindowSurface(myvideo.egl.display, cfg, (EGLNativeWindowType)myvideo.drm.gs, NULL);
    myvideo.egl.context = eglCreateContext(myvideo.egl.display, cfg, EGL_NO_CONTEXT, ctx_cfg);
    eglMakeCurrent(myvideo.egl.display, myvideo.egl.surface, myvideo.egl.surface, myvideo.egl.context);

    myvideo.egl.vShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(myvideo.egl.vShader, 1, &vert_shader_src, NULL);
    glCompileShader(myvideo.egl.vShader);

    myvideo.egl.fShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(myvideo.egl.fShader, 1, &frag_shader_src, NULL);
    glCompileShader(myvideo.egl.fShader);
    
    myvideo.egl.pObject = glCreateProgram();
    glAttachShader(myvideo.egl.pObject, myvideo.egl.vShader);
    glAttachShader(myvideo.egl.pObject, myvideo.egl.fShader);
    glLinkProgram(myvideo.egl.pObject);
    glUseProgram(myvideo.egl.pObject);

    myvideo.egl.posLoc = glGetAttribLocation(myvideo.egl.pObject, "vert_pos");
    myvideo.egl.texLoc = glGetAttribLocation(myvideo.egl.pObject, "vert_coord");
    myvideo.egl.samLoc = glGetUniformLocation(myvideo.egl.pObject, "frag_sampler");
    myvideo.egl.alphaLoc = glGetUniformLocation(myvideo.egl.pObject, "s_alpha");

    glUniform1i(myvideo.egl.samLoc, 0);
    glUniform1f(myvideo.egl.alphaLoc, 0.0);

    glGenTextures(TEXTURE_MAX, myvideo.egl.texture);
    glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[TEXTURE_LCD0]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glViewport(0, 0, SCREEN_W, SCREEN_H);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnableVertexAttribArray(myvideo.egl.posLoc);
    glEnableVertexAttribArray(myvideo.egl.texLoc);
    glUniform1i(myvideo.egl.samLoc, 0);
    glUniform1f(myvideo.egl.alphaLoc, 0.0);

    myvideo.lcd.virt_addr[0][0] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    myvideo.lcd.virt_addr[0][1] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    myvideo.lcd.virt_addr[1][0] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    myvideo.lcd.virt_addr[1][1] = malloc(NDS_Wx2 * NDS_Hx2 * 4);

    debug("lcd[0] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[0][0]);
    debug("lcd[0] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[0][1]);
    debug("lcd[1] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[1][0]);
    debug("lcd[1] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[1][1]);
#endif

#if defined(A30) || defined(RG28XX)
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
  
    myvideo.egl.display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    eglInitialize(myvideo.egl.display, &egl_major, &egl_minor);
    eglChooseConfig(myvideo.egl.display, config_attribs, &myvideo.eglConfig, 1, &num_configs);
    myvideo.egl.surface = eglCreateWindowSurface(myvideo.egl.display, myvideo.eglConfig, 0, window_attributes);
    myvideo.egl.context = eglCreateContext(myvideo.egl.display, myvideo.eglConfig, EGL_NO_CONTEXT, context_attributes);
    eglMakeCurrent(myvideo.egl.display, myvideo.egl.surface, myvideo.egl.surface, myvideo.egl.context);
  
    myvideo.egl.vShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(myvideo.egl.vShader, 1, &vert_shader_src, NULL);
    glCompileShader(myvideo.egl.vShader);
  
    myvideo.egl.fShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(myvideo.egl.fShader, 1, &frag_shader_src, NULL);
    glCompileShader(myvideo.egl.fShader);
   
    myvideo.egl.pObject = glCreateProgram();
    glAttachShader(myvideo.egl.pObject, myvideo.egl.vShader);
    glAttachShader(myvideo.egl.pObject, myvideo.egl.fShader);
    glLinkProgram(myvideo.egl.pObject);
    glUseProgram(myvideo.egl.pObject);

    eglSwapInterval(myvideo.egl.display, 1);
    myvideo.egl.posLoc = glGetAttribLocation(myvideo.egl.pObject, "vert_pos");
    myvideo.egl.texLoc = glGetAttribLocation(myvideo.egl.pObject, "vert_coord");
    myvideo.egl.samLoc = glGetUniformLocation(myvideo.egl.pObject, "frag_sampler");
    myvideo.egl.alphaLoc = glGetUniformLocation(myvideo.egl.pObject, "s_alpha");

    glGenTextures(TEXTURE_MAX, myvideo.egl.texture);

    glViewport(0, 0, SCREEN_H, SCREEN_W);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnableVertexAttribArray(myvideo.egl.posLoc);
    glEnableVertexAttribArray(myvideo.egl.texLoc);
    glUniform1i(myvideo.egl.samLoc, 0);
    glUniform1f(myvideo.egl.alphaLoc, 0.0);

    myvideo.lcd.virt_addr[0][0] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    myvideo.lcd.virt_addr[0][1] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    myvideo.lcd.virt_addr[1][0] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    myvideo.lcd.virt_addr[1][1] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    debug("lcd[0] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[0][0]);
    debug("lcd[0] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[0][1]);
    debug("lcd[1] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[1][0]);
    debug("lcd[1] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[1][1]);
#endif

#if defined(GKD2) || defined(BRICK)
    myvideo.lcd.virt_addr[0][0] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    myvideo.lcd.virt_addr[0][1] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    myvideo.lcd.virt_addr[1][0] = malloc(NDS_Wx2 * NDS_Hx2 * 4);
    myvideo.lcd.virt_addr[1][1] = malloc(NDS_Wx2 * NDS_Hx2 * 4);

    debug("lcd[0] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[0][0]);
    debug("lcd[0] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[0][1]);
    debug("lcd[1] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[1][0]);
    debug("lcd[1] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[1][1]);
#endif

    debug("call %s()++\n", __func__);

#if !defined(UT)
    myvideo.thread.running = 1;
#endif

    while (myvideo.thread.running) {
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (myvideo.menu.sdl2.enable) {
            if (myvideo.menu.update) {
                int pre_mode = myconfig.layout.mode.sel;
                int pre_filter = myconfig.filter;

                myvideo.menu.update = 0;
                debug("update sdl2 menu\n");

                myconfig.filter = FILTER_BLUR;
                myconfig.layout.mode.sel = 0;
                flush_lcd(
                    -1,
                    myvideo.cvt->pixels,
                    myvideo.cvt->clip_rect,
                    myvideo.cvt->clip_rect,
                    myvideo.cvt->pitch
                );
                flip_lcd();
                myconfig.filter = pre_filter;
                myconfig.layout.mode.sel = pre_mode;
            }
        }
        else if (myvideo.menu.drastic.enable) {
            if (myvideo.menu.update) {
                int pre_mode = myconfig.layout.mode.sel;
                int pre_filter = myconfig.filter;

                myvideo.menu.update = 0;
                debug("update drastic menu\n");

                myconfig.filter = FILTER_BLUR;
                myconfig.layout.mode.sel = 0;
                flush_lcd(
                    -1,
                    myvideo.menu.drastic.frame->pixels,
                    myvideo.menu.drastic.frame->clip_rect,
                    myvideo.menu.drastic.frame->clip_rect,
                    myvideo.menu.drastic.frame->pitch
                );
                flip_lcd();
                myconfig.filter = pre_filter;
                myconfig.layout.mode.sel = pre_mode;
            }
        }
        else if (myvideo.lcd.update) {
#else
        if (myvideo.lcd.update) {
#endif

            process_screen();
            myvideo.lcd.update = 0;
        }
        else {
            usleep(0);
        }
    }

#if defined(FLIP)
    glDeleteTextures(TEXTURE_MAX, myvideo.egl.texture);
    eglMakeCurrent(myvideo.egl.display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroySurface(myvideo.egl.display, myvideo.egl.surface);
    eglDestroyContext(myvideo.egl.display, myvideo.egl.context);

    eglTerminate(myvideo.egl.display);
    glDeleteShader(myvideo.egl.vShader);
    glDeleteShader(myvideo.egl.fShader);
    glDeleteProgram(myvideo.egl.pObject);

    drmModeRmFB(myvideo.drm.fd, myvideo.drm.fb); 
    drmModeFreeCrtc(myvideo.drm.crtc);
    drmModeFreeEncoder(myvideo.drm.enc);
    drmModeFreeConnector(myvideo.drm.conn);
    drmModeFreeResources(myvideo.drm.res);
    close(myvideo.drm.fd);
#endif

#if defined(A30) || defined(RG28XX)
    glDeleteTextures(TEXTURE_MAX, myvideo.egl.texture);
    eglMakeCurrent(myvideo.egl.display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroyContext(myvideo.egl.display, myvideo.egl.context);
    eglDestroySurface(myvideo.egl.display, myvideo.egl.surface);
    eglTerminate(myvideo.egl.display);

    free(myvideo.lcd.virt_addr[0][0]);
    free(myvideo.lcd.virt_addr[0][1]);
    free(myvideo.lcd.virt_addr[1][0]);
    free(myvideo.lcd.virt_addr[1][1]);
#endif

#if defined(GKD2) || defined(BRICK)
    free(myvideo.lcd.virt_addr[0][0]);
    free(myvideo.lcd.virt_addr[0][1]);
    free(myvideo.lcd.virt_addr[1][0]);
    free(myvideo.lcd.virt_addr[1][1]);
#endif

    debug("call %s()--\n", __func__);

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

    debug("call %s()\n", __func__);

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

static int load_lang_file(void)
{
    int cc = 0;
    int len = 0;
    FILE *f = NULL;
    char buf[MAX_PATH + 32] = { 0 };

    debug("call %s(lang=%d)\n", __func__, myconfig.lang);

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
            debug("lang=\"%s\", len=%d\n", myvideo.lang.trans[cc], len);
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
    TEST_ASSERT_EQUAL_INT(-1, load_lang_file(NULL));
    TEST_ASSERT_EQUAL_INT(0, load_lang_file(DEF_LANG));
}
#endif

static int enum_lang_file(void)
{
    int cnt = 0;
    DIR *d = NULL;
    struct dirent *dir = NULL;
    char buf[MAX_PATH + 32] = { 0 };

    debug("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, LANG_PATH);
    debug("lang folder=\"%s\"\n", buf);

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

        debug("lang[%d]=\"%s\"\n", cnt, dir->d_name);
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
    TEST_ASSERT_EQUAL_INT(3, enum_lang_file());
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

static int get_bg_cnt(void)
{
    char buf[MAX_PATH + 32] = { 0 };

    debug("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, BG_PATH);
    debug("bg folder=\"%s\"\n", buf);

    return get_dir_cnt(buf);
}

#if defined(UT)
TEST(sdl2_video, get_bg_cnt)
{
    TEST_ASSERT_EQUAL_INT(0, init_device());
    TEST_ASSERT_EQUAL_INT(9, get_bg_cnt());
    TEST_ASSERT_EQUAL_INT(0, quit_device());
}
#endif

static int get_menu_cnt(void)
{
    char buf[MAX_PATH + 32] = { 0 };

    debug("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, MENU_PATH);
    debug("menu folder=\"%s\"\n", buf);

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

    debug("call %s()\n", __func__);

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, PEN_PATH);
    debug("pen folder=\"%s\"\n", buf);

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
    debug("call %s()\n", __func__);

    return 0;
}

TEST(sdl2_video, init_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, init_lcd());
}

static int quit_lcd(void)
{
    debug("call %s()\n", __func__);

    return 0;
}

TEST(sdl2_video, quit_lcd)
{
    TEST_ASSERT_EQUAL_INT(0, quit_lcd());
}

static int disp_resize(void)
{
    debug("call %s()\n", __func__);

    return 0;
}

TEST(sdl2_video, disp_resize)
{
    TEST_ASSERT_EQUAL_INT(0, disp_resize());
}
#endif

#if defined(GKD2) || defined(BRICK)
static int init_lcd(void)
{
    debug("call %s()\n", __func__);

    myvideo.shm.fd = shm_open(SHM_NAME, O_RDWR, 0777);
    debug("shm fd=%d\n", myvideo.shm.fd);

    myvideo.shm.buf = (shm_buf_t *) mmap(NULL, sizeof(shm_buf_t), PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.shm.fd, 0);
    debug("shm buf=%p\n", myvideo.shm.buf);

    return 0;
}

static int quit_lcd(void)
{
    debug("call %s()\n", __func__);

    myvideo.shm.buf->valid = 1;
    myvideo.shm.buf->cmd = SHM_CMD_QUIT;
    debug("send SHM_CMD_QUIT\n");

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
    debug("call %s()\n", __func__);

    return 0;
}

static int quit_lcd(void)
{
    debug("call %s()\n", __func__);

    return 0;
}
#endif

#if defined(QX1000) || defined(XT897)
static int init_lcd(void)
{
    debug("call %s()\n", __func__);

    is_wl_thread_running = 1;
    myvideo.wl.bg = SDL_malloc(WL_WIN_W * WL_WIN_H * 4);
    memset(myvideo.wl.bg, 0, WL_WIN_W * WL_WIN_H * 2);
    pthread_create(&thread_id[0], NULL, wl_disp_handler, NULL);
    pthread_create(&thread_id[1], NULL, wl_draw_handler, NULL);
    while (myvideo.wl.init == 0) {
        usleep(100000);
    }

    myvideo.wl.flip = 0;
    myvideo.wl.ready = 0;
    myvideo.wl.data = SDL_malloc(WL_WIN_W * WL_WIN_H * 4 * 2);
    memset(myvideo.wl.data, 0, WL_WIN_W * WL_WIN_H * 4 * 2);
    myvideo.wl.pixels[0] = (uint16_t *)myvideo.wl.data;
    myvideo.wl.pixels[1] = (uint16_t *)(myvideo.wl.data + (WL_WIN_W * WL_WIN_H * 4));
    update_wayland_res(NDS_W * 2, NDS_H);
    myvideo.wl.ready = 1;

    return 0;
}

static int quit_lcd(void)
{
    debug("call %s()\n", __func__);

    is_wl_thread_running = 0;
    pthread_join(thread_id[0], NULL);
    pthread_join(thread_id[1], NULL);

    SDL_free(myvideo.wl.data);
    myvideo.wl.data = NULL;

    return 0;
}
#endif

#if defined(PANDORA)
static int init_lcd(void)
{
    debug("call %s()\n", __func__);

    myvideo.fb.fd[0] = open("/dev/fb0", O_RDWR);
    if (myvideo.fb.fd[0] < 0) {
        error("failed to open /dev/fb0\n");
        return -1;
    }

    myvideo.fb.fd[1] = open("/dev/fb1", O_RDWR);
    if (myvideo.fb.fd[1] < 0) {
        error("failed to open /dev/fb1\n");
        return -1;
    }

    ioctl(myvideo.fb.fd[1], OMAPFB_QUERY_PLANE, &gfx.pi);
    ioctl(myvideo.fb.fd[1], OMAPFB_QUERY_MEM, &gfx.mi);
    if(gfx.pi.enabled){
        gfx.pi.enabled = 0;
        ioctl(myvideo.fb.fd[1], OMAPFB_SETUP_PLANE, &gfx.pi);
    }
    gfx.mi.size = myvideo.cur_buf_size;
    ioctl(myvideo.fb.fd[1], OMAPFB_SETUP_MEM, &gfx.mi);

    gfx.pi.enabled = 1;
    gfx.pi.pos_x = 0;
    gfx.pi.pos_y = 0;
    gfx.pi.out_width = myvideo.cur_w;
    gfx.pi.out_height = myvideo.cur_h;
    ioctl(myvideo.fb.fd[1], OMAPFB_SETUP_PLANE, &gfx.pi);

    ioctl(myvideo.fb.fd[0], FBIOGET_VSCREENINFO, &myvideo.fb.var_info);
    ioctl(myvideo.fb.fd[0], FBIOGET_FSCREENINFO, &myvideo.fb.fix_info);
    myvideo.gfx.mem[0] = mmap(0, myvideo.cur_buf_size, PROT_WRITE | PROT_READ, MAP_SHARED, myvideo.fb.fd[0], 0);
    memset(myvideo.gfx.mem[0], 0, myvideo.cur_buf_size);

    ioctl(myvideo.fb.fd[1], FBIOGET_VSCREENINFO, &myvideo.fb.var_info);
    ioctl(myvideo.fb.fd[1], FBIOGET_FSCREENINFO, &myvideo.fb.fix_info);
    myvideo.gfx.mem[1] = mmap(0, myvideo.cur_buf_size, PROT_WRITE | PROT_READ, MAP_SHARED, myvideo.fb.fd[1], 0);
    memset(myvideo.gfx.mem[1], 0, myvideo.cur_buf_size);

    return 0;
}

static int quit_lcd(void)
{
    debug("call %s()\n", __func__);

    ioctl(myvideo.fb.fd[1], OMAPFB_QUERY_PLANE, &gfx.pi);
    gfx.pi.enabled = 0;
    ioctl(myvideo.fb.fd[1], OMAPFB_SETUP_PLANE, &gfx.pi);

    munmap(myvideo.gfx.mem[0], myvideo.cur_buf_size);
    munmap(myvideo.gfx.mem[1], myvideo.cur_buf_size);
    myvideo.gfx.mem[0] = NULL;
    myvideo.gfx.mem[1] = NULL;

    close(myvideo.fb.fd[0]);
    close(myvideo.fb.fd[1]);

    myvideo.fb.fd[0] = -1;
    myvideo.fb.fd[1] = -1;

    return 0;
}
#endif

#if defined(TRIMUI)
static int ion_alloc(int ion_fd, ion_alloc_info_t* info)
{
    sunxi_phys_data spd = { 0 };
    struct ion_fd_data ifd = { 0 };
    struct ion_custom_data icd = { 0 };
    struct ion_allocation_data iad = { 0 };

    debug("call %s(ion_fd=%d, info=%p)\n", __func__, ion_fd, info);

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
    debug("mmap padd=%p, vadd=%p, size=%d\n", info->padd, info->vadd, info->size);

    return 0;
}

static int ion_free(int ion_fd, ion_alloc_info_t* info)
{
    struct ion_handle_data ihd = { 0 };

    debug("call %s()\n", __func__);

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
    uint32_t args[4] = { 0, (uintptr_t)&myvideo.gfx.disp, 1, 0 };

    debug("call %s()\n", __func__);

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
    debug("map buffer=%p\n", myvideo.gfx.mem);

    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);

    myvideo.gfx.disp.channel = SCREEN_CH;
    myvideo.gfx.disp.layer_id = SCREEN_LAYER;
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
    myvideo.gfx.buf.info.fb.size[0].width = myvideo.cur_h;
    myvideo.gfx.buf.info.fb.size[0].height = myvideo.cur_w;
    myvideo.gfx.buf.info.mode = LAYER_MODE_BUFFER;
    myvideo.gfx.buf.info.zorder = SCALER_ZORDER;
    myvideo.gfx.buf.info.alpha_mode = 0;
    myvideo.gfx.buf.info.alpha_value = 0;
    myvideo.gfx.buf.info.screen_win.x = 0;
    myvideo.gfx.buf.info.screen_win.y = 0;
    myvideo.gfx.buf.info.screen_win.width  = myvideo.cur_h;
    myvideo.gfx.buf.info.screen_win.height = myvideo.cur_w;
    myvideo.gfx.buf.info.fb.pre_multiply = 0;
    myvideo.gfx.buf.info.fb.crop.x = (uint64_t)0 << 32;
    myvideo.gfx.buf.info.fb.crop.y = (uint64_t)0 << 32;
    myvideo.gfx.buf.info.fb.crop.width  = (uint64_t)myvideo.cur_h << 32;
    myvideo.gfx.buf.info.fb.crop.height = (uint64_t)myvideo.cur_w << 32;

    args[1] = (uintptr_t)&myvideo.gfx.buf;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);
    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);

    return 0;
}

static int quit_lcd(void)
{
    uint32_t args[4] = { 0, (uintptr_t)&myvideo.gfx.disp, 1, 0 };

    debug("call %s()\n", __func__);

    myvideo.gfx.buf.enable = 0;
    myvideo.gfx.disp.enable = 0;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);

    args[1] = (uintptr_t)&myvideo.gfx.buf;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);

    myvideo.gfx.disp.enable = 1;
    myvideo.gfx.disp.channel = SCREEN_CH;
    myvideo.gfx.disp.layer_id = SCREEN_LAYER;
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

    return 0;
}

static int disp_resize(void)
{
    int r = 0;
    uint32_t args[4] = { 0, (uintptr_t)&myvideo.gfx.buf, 1, 0 };

    debug("call %s()\n", __func__);

    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);
    if (myconfig.layout.mode.sel == LAYOUT_MODE_T2) {
        myvideo.gfx.buf.info.fb.crop.width  = ((uint64_t)myvideo.cur_h) << 32;
        myvideo.gfx.buf.info.fb.crop.height = ((uint64_t)myvideo.cur_w) << 32;
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

#if defined(RG28XX)
static int init_lcd(void)
{
    debug("call %s()\n", __func__);

    myvideo.fb.fd = open("/dev/fb0", O_RDWR, 0);
    if (myvideo.fb.fd < 0) {
        error("failed to open /dev/fb0\n");
        return -1;
    }
    ioctl(myvideo.fb.fd, FBIOGET_VSCREENINFO, &myvideo.fb.var_info);

    myvideo.fb.virt_addr = mmap(NULL, myvideo.cur_buf_size, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.fb.fd, 0);
    if (myvideo.fb.virt_addr == (void *)-1) {
        error("failed to map fb buffer\n");
        return -1;
    }
    debug("fb virAddr %p (size:%d)\n", myvideo.fb.virt_addr, myvideo.cur_buf_size);
    memset(myvideo.fb.virt_addr, 0 , myvideo.cur_buf_size);

    myvideo.fb.var_info.yres_virtual = myvideo.fb.var_info.yres * 2;
    ioctl(myvideo.fb.fd, FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);

    return 0;
}

static int quit_lcd(void)
{
    debug("call %s()\n", __func__);

    if (myvideo.fb.virt_addr) {
        munmap(myvideo.fb.virt_addr, myvideo.cur_buf_size);
        myvideo.fb.virt_addr = NULL;
    }

    if (myvideo.fb.fd > 0) {
        close(myvideo.fb.fd);
        myvideo.fb.fd = -1;
    }

    if (myvideo.mem_fd > 0) {
        close(myvideo.mem_fd);
        myvideo.mem_fd = -1;
    }

    return 0;
}
#endif

#if defined(A30)
static int init_lcd(void)
{
    debug("call %s()\n", __func__);

    myvideo.fb.fd = open("/dev/fb0", O_RDWR, 0);
    if (myvideo.fb.fd < 0) {
        error("failed to open /dev/fb0\n");
        return -1;
    }
    ioctl(myvideo.fb.fd, FBIOGET_VSCREENINFO, &myvideo.fb.var_info);

    myvideo.fb.virt_addr = mmap(NULL, myvideo.cur_buf_size, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.fb.fd, 0);
    if (myvideo.fb.virt_addr == (void *)-1) {
        error("failed to map fb buffer\n");
        return -1;
    }
    debug("fb addr=%p, size=%d\n", myvideo.fb.virt_addr, myvideo.cur_buf_size);
    memset(myvideo.fb.virt_addr, 0 , myvideo.cur_buf_size);

    myvideo.fb.var_info.yres_virtual = myvideo.fb.var_info.yres * 2;
    ioctl(myvideo.fb.fd, FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);

    myvideo.mem_fd = open("/dev/mem", O_RDWR);
    if (myvideo.mem_fd < 0) { 
        error("failed to open /dev/mem\n");
        return -1;
    }

    myvideo.ccu_mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.mem_fd, CCU_BASE);
    if (myvideo.ccu_mem == MAP_FAILED) {
        error("failed to map ccu memory\n");
        return -1;
    }
    debug("ccp mem=%p\n", myvideo.ccu_mem);
    myvideo.cpu_ptr = (uint32_t *)&myvideo.ccu_mem[0x00];

    myvideo.dac_mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.mem_fd, DAC_BASE);
    if (myvideo.dac_mem == MAP_FAILED) {
        debug("failed to map idac memory\n");
        return -1;
    }

    debug("dac mem=%p\n", myvideo.dac_mem);
    myvideo.vol_ptr = (uint32_t *)(&myvideo.dac_mem[0xc00 + 0x258]);

    return 0;
}

static int quit_lcd(void)
{
    debug("call %s()\n", __func__);

    if (myvideo.fb.virt_addr) {
        munmap(myvideo.fb.virt_addr, myvideo.cur_buf_size);
        myvideo.fb.virt_addr = NULL;
    }

    if (myvideo.fb.fd > 0) {
        close(myvideo.fb.fd);
        myvideo.fb.fd = -1;
    }

    if (myvideo.ccu_mem != MAP_FAILED) {
        munmap(myvideo.ccu_mem, 4096);
        myvideo.ccu_mem = NULL;
    }

    if (myvideo.dac_mem != MAP_FAILED) {
        munmap(myvideo.dac_mem, 4096);
        myvideo.dac_mem = NULL;
    }

    if (myvideo.mem_fd > 0) {
        close(myvideo.mem_fd);
        myvideo.mem_fd = -1;
    }

    return 0;
}
#endif

#if defined(MINI)
static int init_lcd(void)
{
    debug("call %s()\n", __func__);

    MI_SYS_Init();
    MI_GFX_Open();

    myvideo.fb.fd = open("/dev/fb0", O_RDWR);
    if (myvideo.fb.fd < 0) {
        error("failed to open /dev/fb0\n");
        return -1;
    }

    ioctl(myvideo.fb.fd, FBIOGET_FSCREENINFO, &myvideo.fb.fix_info);
    ioctl(myvideo.fb.fd, FBIOGET_VSCREENINFO, &myvideo.fb.var_info);

    myvideo.fb.var_info.yoffset = 0;
    myvideo.fb.var_info.yres_virtual = myvideo.fb.var_info.yres * 2;
    ioctl(myvideo.fb.fd, FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);

    myvideo.fb.phy_addr = myvideo.fb.fix_info.smem_start;
    MI_SYS_MemsetPa(myvideo.fb.phy_addr, 0, myvideo.cur_buf_size);
    MI_SYS_Mmap(myvideo.fb.phy_addr, myvideo.fb.fix_info.smem_len, &myvideo.fb.virt_addr, TRUE);
    memset(&myvideo.gfx.opt, 0, sizeof(myvideo.gfx.opt));

    MI_SYS_MMA_Alloc(NULL, myvideo.cur_buf_size, &myvideo.tmp.phy_addr);
    MI_SYS_Mmap(myvideo.tmp.phy_addr, myvideo.cur_buf_size, &myvideo.tmp.virt_addr, TRUE);

    MI_SYS_MMA_Alloc(NULL, NDS_Wx2 * NDS_Hx2 * 4, &myvideo.lcd.phy_addr[0][0]);
    MI_SYS_MMA_Alloc(NULL, NDS_Wx2 * NDS_Hx2 * 4, &myvideo.lcd.phy_addr[0][1]);
    MI_SYS_MMA_Alloc(NULL, NDS_Wx2 * NDS_Hx2 * 4, &myvideo.lcd.phy_addr[1][0]);
    MI_SYS_MMA_Alloc(NULL, NDS_Wx2 * NDS_Hx2 * 4, &myvideo.lcd.phy_addr[1][1]);

    MI_SYS_Mmap(myvideo.lcd.phy_addr[0][0], NDS_Wx2 * NDS_Hx2 * 4, &myvideo.lcd.virt_addr[0][0], TRUE);
    MI_SYS_Mmap(myvideo.lcd.phy_addr[0][1], NDS_Wx2 * NDS_Hx2 * 4, &myvideo.lcd.virt_addr[0][1], TRUE);
    MI_SYS_Mmap(myvideo.lcd.phy_addr[1][0], NDS_Wx2 * NDS_Hx2 * 4, &myvideo.lcd.virt_addr[1][0], TRUE);
    MI_SYS_Mmap(myvideo.lcd.phy_addr[1][1], NDS_Wx2 * NDS_Hx2 * 4, &myvideo.lcd.virt_addr[1][1], TRUE);

    debug("lcd[0] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[0][0]);
    debug("lcd[0] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[0][1]);
    debug("lcd[1] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[1][0]);
    debug("lcd[1] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[1][1]);

    myvideo.sar_fd = open("/dev/sar", O_RDWR);
    debug("sar handle=%d\n", myvideo.sar_fd);

    return 0;
}

static int quit_lcd(void)
{
    debug("call %s()\n", __func__);

    if (myvideo.fb.virt_addr) {
        MI_SYS_Munmap(myvideo.fb.virt_addr, myvideo.cur_buf_size);
        myvideo.fb.virt_addr = NULL;
    }

    if (myvideo.tmp.virt_addr) {
        MI_SYS_Munmap(myvideo.tmp.virt_addr, myvideo.cur_buf_size);
        MI_SYS_MMA_Free(myvideo.tmp.phy_addr);

        myvideo.tmp.virt_addr = NULL;
        myvideo.tmp.phy_addr = NULL;
    }

    if (myvideo.lcd.virt_addr[0][0]) {
        MI_SYS_Munmap(myvideo.lcd.virt_addr[0][0], NDS_Wx2 * NDS_Hx2 * 4);
        MI_SYS_Munmap(myvideo.lcd.virt_addr[0][1], NDS_Wx2 * NDS_Hx2 * 4);
        MI_SYS_Munmap(myvideo.lcd.virt_addr[1][0], NDS_Wx2 * NDS_Hx2 * 4);
        MI_SYS_Munmap(myvideo.lcd.virt_addr[1][1], NDS_Wx2 * NDS_Hx2 * 4);

        MI_SYS_MMA_Free(myvideo.lcd.phy_addr[0][0]);
        MI_SYS_MMA_Free(myvideo.lcd.phy_addr[0][1]);
        MI_SYS_MMA_Free(myvideo.lcd.phy_addr[1][0]);
        MI_SYS_MMA_Free(myvideo.lcd.phy_addr[1][1]);

        myvideo.lcd.virt_addr[0][0] = NULL;
        myvideo.lcd.virt_addr[0][1] = NULL;
        myvideo.lcd.virt_addr[1][0] = NULL;
        myvideo.lcd.virt_addr[1][1] = NULL;

        myvideo.lcd.phy_addr[0][0] = NULL;
        myvideo.lcd.phy_addr[0][1] = NULL;
        myvideo.lcd.phy_addr[1][0] = NULL;
        myvideo.lcd.phy_addr[1][1] = NULL;
    }

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

    debug("call %s(pixel=%p, width=%d, pitch=%d)\n", __func__, pixels, width, pitch);

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

#if !defined(UT)
    asm volatile ("PLD [%0, #128]"::"r" (s));
#endif

    for (c1 = 0; c1 < h; c1++) {

#if !defined(UT)
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
#if defined(TRIMUI)
    int x = 0;
    int y = 0;
    int ox = 0;
    int oy = 0;
    int sw = srt.w;
    int sh = srt.h;
    uint32_t *dst = NULL;
    uint32_t *src = (uint32_t *)pixels;
#endif

#if defined(MINI)
    int cc = 0;
    int copy_it = 1;
    int dma_found = 0;
    MI_U16 fence = 0;
    int is_rgb565 = (pitch / srt.w) == 2 ? 1 : 0;
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    int tex = (id >= 0) ? id : TEXTURE_TMP;
#endif

#if defined(QX1000) || defined(XT897)
    int x = 0;
    int y = 0;
    const uint32_t *src = pixels;
    uint32_t *dst = (uint32_t *)myvideo.wl.pixels[myvideo.wl.flip];
#endif

    debug("call %s(tex=%d, pixels=%p, pitch=%d, srt(%d,%d,%d,%d), drt(%d,%d,%d,%d))\n",
        __func__, id, pixels, pitch, srt.x, srt.y, srt.w, srt.h, drt.x, drt.y, drt.w, drt.h);

    if (pixels == NULL) {
        error("pixel is null\n");
        return -1;
    }

#if defined(GKD2) || defined(BRICK)
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
    myvideo.shm.buf->alpha = myconfig.layout.swin.alpha;
    myvideo.shm.buf->layout = myconfig.layout.mode.sel;
    myvideo.shm.buf->filter = myconfig.filter;
    debug(
        "send SHM_CMD_FLUSH, tex=%d, layout=%d, pitch=%d, alpha=%d\n",
        tex,
        myconfig.layout.mode.sel,
        pitch,
        myconfig.layout.swin.alpha
    );

    myvideo.shm.buf->valid = 1;
    __clear_cache((uint8_t *)myvideo.shm.buf, (uint8_t *)myvideo.shm.buf + sizeof(shm_buf_t));
    while (myvideo.shm.buf->valid) {
        usleep(10);
    }
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP)
    if ((id != -1) && ((myconfig.layout.mode.sel == LAYOUT_MODE_T17) || (myconfig.layout.mode.sel == LAYOUT_MODE_T19))) {
        fg_vertices[5] = (((float)drt.x / SCREEN_W) - 0.5) * 2.0;
        fg_vertices[6] = (((float)drt.y / SCREEN_H) - 0.5) * -2.0;

        fg_vertices[10] = fg_vertices[5];
        fg_vertices[11] = (((float)(drt.y + drt.w) / SCREEN_H) - 0.5) * -2.0;

        fg_vertices[15] = (((float)(drt.x + drt.h) / SCREEN_W) - 0.5) * 2.0;
        fg_vertices[16] = fg_vertices[11];

        fg_vertices[0] = fg_vertices[15];
        fg_vertices[1] = fg_vertices[6];
    }
    else if ((id != -1) && ((myconfig.layout.mode.sel == LAYOUT_MODE_T16) || (myconfig.layout.mode.sel == LAYOUT_MODE_T18))) {
        fg_vertices[15] = (((float)drt.x / SCREEN_W) - 0.5) * 2.0;
        fg_vertices[16] = (((float)drt.y / SCREEN_H) - 0.5) * -2.0;

        fg_vertices[0] = fg_vertices[15];
        fg_vertices[1] = (((float)(drt.y + drt.w) / SCREEN_H) - 0.5) * -2.0;

        fg_vertices[5] = (((float)(drt.x + drt.h) / SCREEN_W) - 0.5) * 2.0;
        fg_vertices[6] = fg_vertices[1];

        fg_vertices[10] = fg_vertices[5];
        fg_vertices[11] = fg_vertices[16];
    }
    else {
        fg_vertices[0] = (((float)drt.x / SCREEN_W) - 0.5) * 2.0;
        fg_vertices[1] = (((float)drt.y / SCREEN_H) - 0.5) * -2.0;

        fg_vertices[5] = fg_vertices[0];
        fg_vertices[6] = (((float)(drt.y + drt.h) / SCREEN_H) - 0.5) * -2.0;

        fg_vertices[10] = (((float)(drt.x + drt.w) / SCREEN_W) - 0.5) * 2.0;
        fg_vertices[11] = fg_vertices[6];

        fg_vertices[15] = fg_vertices[10];
        fg_vertices[16] = fg_vertices[1];
    }

    if (tex == TEXTURE_TMP) {
        glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[tex]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        if (myconfig.filter == FILTER_PIXEL) {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        }
        else {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        }
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, srt.w, srt.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
    }

    if (((myconfig.layout.mode.sel == LAYOUT_MODE_T0) || (myconfig.layout.mode.sel == LAYOUT_MODE_T1)) && (tex == TEXTURE_LCD0)) {
        glUniform1f(myvideo.egl.alphaLoc, 1.0 - ((float)myconfig.layout.swin.alpha / 10.0));
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);
    }
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[tex]);
    glVertexAttribPointer(myvideo.egl.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
    glVertexAttribPointer(myvideo.egl.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

    if (((myconfig.layout.mode.sel == LAYOUT_MODE_T0) || (myconfig.layout.mode.sel == LAYOUT_MODE_T1)) && (tex == TEXTURE_LCD0)) {
        glUniform1f(myvideo.egl.alphaLoc, 0.0);
        glDisable(GL_BLEND);
    }
#endif

#if defined(QX1000) || defined(XT897)
    if (srt.w == NDS_W) {
        dst += (drt.y ? 0 : NDS_W);
        asm volatile (
            "0:  vldmia %0!, {q0-q7}    ;"
            "    vldmia %0!, {q8-q15}   ;"
            "    vstmia %1!, {q0-q7}    ;"
            "    vstmia %1!, {q8-q15}   ;"
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
            "    add %1, %1, %2         ;"
            "    subs %3, #1            ;"
            "    bne 0b                 ;"
            :
            : "r"(pixels), "r"(dst), "r"((myvideo.cur_w - srt.w) * 4), "r"(NDS_H)
            : "q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9", "q10", "q11", "q12", "q13", "q14", "q15", "memory", "cc"
        );
    }
    else {
        for (y = 0; y < srt.h; y++) {
            for (x = 0; x < srt.w; x++) {
                *dst++ = *src++;
            }
            dst+= (myvideo.cur_w - srt.w);
        }
    }
#endif

#if defined(PANDORA)
    if ((pitch == 1024) && (srt.w == NDS_W) && (srt.h == NDS_H)) {
        uint32_t *dst = (uint32_t *)myvideo.gfx.mem[(myvideo.fb.var_info.yoffset == 0) ? 0 : 1];

        if (drt.y == 0) {
            dst += 16;
            dst += (((myvideo.cur_h - NDS_Hx2) >> 1) * myvideo.cur_w);
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
            dst += (((myvideo.cur_h - NDS_H) >> 1) * myvideo.cur_w) + 1;
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
    else {
        int x = 0;
        int y = 0;
        const uint32_t *src = pixels;
        uint32_t *dst = (uint32_t *)myvideo.gfx.mem[(myvideo.fb.var_info.yoffset == 0) ? 0 : 1];

        for (y = 0; y < srt.h; y++) {
            for (x = 0; x < srt.w; x++) {
                *dst++ = *src++;
            }
            dst += (myvideo.cur_w - srt.w);
        }
    }
#endif

#if defined(TRIMUI)
    if ((pitch / srt.w) != 4) {
        return -1;
    }

    if (myconfig.layout.mode.sel == LAYOUT_MODE_T2) {
        ox = 32;
        oy = 24;
    }

    if((srt.w == NDS_W) && (srt.h == NDS_H)) {
        if (myconfig.layout.mode.sel == LAYOUT_MODE_T2) {
            dst = myvideo.fb.flip ? LUT_256x192_S01 : LUT_256x192_S00;
        }
        else {
            dst = myvideo.fb.flip ? LUT_256x192_S11 : LUT_256x192_S10;
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
    else {
        if ((srt.w >= 320) || (srt.h >= 240)) {
            ox = 0;
            oy = 0;
            sw = myvideo.cur_w;
            sh = myvideo.cur_h;
        }

        dst = (uint32_t *)myvideo.gfx.ion.vadd + (myvideo.cur_w * myvideo.cur_h * myvideo.fb.flip);
        for (y = 0; y < sh; y++) {
            for (x = 0; x < sw; x++) {
                dst[((((sw - 1) - x) + ox) * myvideo.cur_h) + y + oy] = *src++;
            }
        }
    }
#endif

#if defined(MINI)
    for (cc = 0; cc < 2; cc++) {
        if (pixels == myvideo.lcd.virt_addr[cc][0]) {
            dma_found = 1;
            myvideo.gfx.src.surf.phyAddr = myvideo.lcd.phy_addr[cc][0];
            break;
        }
        if (pixels == myvideo.lcd.virt_addr[cc][1]) {
            dma_found = 1;
            myvideo.gfx.src.surf.phyAddr = myvideo.lcd.phy_addr[cc][1];
            break;
        }
    }

    if (alpha != 0) {
        if (myconfig.layout.swin.alpha > NDS_ALPHA_MAX) {
            myconfig.layout.swin.alpha = 0;
        }

        if (myconfig.layout.swin.alpha > 0) {
            float m0 = (float)myconfig.layout.swin.alpha / 10;
            float m1 = 1.0 - m0;
            uint32_t *d = myvideo.tmp.virt_addr;
            uint32_t r0 = 0, g0 = 0, b0 = 0;
            uint32_t r1 = 0, g1 = 0, b1 = 0;
            int x = 0, y = 0, ax = 0, ay = 0, sw = 0, sh = 0;
            const uint32_t *s0 = myvideo.fb.virt_addr + (myvideo.cur_w * myvideo.fb.var_info.yoffset * 4);
            const uint16_t *s1_565 = pixels;
            const uint32_t *s1_888 = pixels;
            uint32_t col[] = {
                0x000000, 0xa0a0a0, 0x400000, 0x004000, 0x000040, 0x000000, 0xa0a000, 0x00a0a0
            };

            switch (myconfig.layout.mode.sel) {
            case LAYOUT_MODE_T0:
                sw = 170;
                sh = 128;
                break;
            case LAYOUT_MODE_T1:
                sw = srt.w;
                sh = srt.h;
                break;
            }

            ay = 0;
            for (y=0; y<sh; y++) {
                switch (myconfig.layout.mode.sel) {
                case LAYOUT_MODE_T0:
                    if (y && ((y % 2) == 0)) {
                        ay+= 1;
                    }
                    break;
                }

                ax = 0;
                for (x=0; x<sw; x++) {
                    asm ("PLD [%0, #128]"::"r" (s0));
                    if ((myconfig.layout.swin.border > 0) && ((y == 0) || (y == (sh - 1)) || (x == 0) || (x == (sw - 1)))) {
                        *d++ = col[myconfig.layout.swin.border];
                    }
                    else {
                        switch (myconfig.layout.mode.sel) {
                        case LAYOUT_MODE_T0:
                            if (x && ((x % 2) == 0)) {
                                ax+= 1;
                            }
                            break;
                        }

                        if (is_rgb565) {
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
                            r0 = (s0[((sh - y + (myvideo.cur_h - sh) - 1) * myvideo.cur_w) + (sw - x - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y + (myvideo.cur_h - sh) - 1) * myvideo.cur_w) + (sw - x - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y + (myvideo.cur_h - sh) - 1) * myvideo.cur_w) + (sw - x - 1)] & 0x0000ff) >> 0;
                            break;
                        case 1:
                            r0 = (s0[((sh - y + (myvideo.cur_h - sh) - 1) * myvideo.cur_w) + (sw - x + (myvideo.cur_w - sw) - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y + (myvideo.cur_h - sh) - 1) * myvideo.cur_w) + (sw - x + (myvideo.cur_w - sw) - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y + (myvideo.cur_h - sh) - 1) * myvideo.cur_w) + (sw - x + (myvideo.cur_w - sw) - 1)] & 0x0000ff) >> 0;
                            break;
                        case 2:
                            r0 = (s0[((sh - y - 1) * myvideo.cur_w) + (sw - x + (myvideo.cur_w - sw) - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y - 1) * myvideo.cur_w) + (sw - x + (myvideo.cur_w - sw) - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y - 1) * myvideo.cur_w) + (sw - x + (myvideo.cur_w - sw) - 1)] & 0x0000ff) >> 0;
                            break;
                        case 3:
                            r0 = (s0[((sh - y - 1) * myvideo.cur_w) + (sw - x - 1)] & 0xff0000) >> 16;
                            g0 = (s0[((sh - y - 1) * myvideo.cur_w) + (sw - x - 1)] & 0x00ff00) >> 8;
                            b0 = (s0[((sh - y - 1) * myvideo.cur_w) + (sw - x - 1)] & 0x0000ff) >> 0;
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

        switch (myconfig.layout.mode.sel) {
        case LAYOUT_MODE_T0:
            drt.w = 170;
            drt.h = 128;
            if (myconfig.layout.swin.alpha > 0) {
                srt.w = drt.w;
                srt.h = drt.h;
                pitch = srt.w * 4;
            }
            break;
        case LAYOUT_MODE_T1:
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
            drt.y = myvideo.cur_h - drt.h;
            break;
        case 1:
            drt.x = myvideo.cur_w - drt.w;
            drt.y = myvideo.cur_h - drt.h;
            break;
        case 2:
            drt.x = myvideo.cur_w - drt.w;
            drt.y = 0;
            break;
        case 3:
            drt.x = 0;
            drt.y = 0;
            break;
        }
    }

    if (copy_it && (myconfig.filter == FILTER_PIXEL)) {
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

                copy_it = 0;
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

                for (y=0; y<srt.h; y++) {
                    s0 = d;
                    for (x=0; x<srt.w; x++) {
                        *d++ = *s1;
                        *d++ = *s1++;
                    }
                    neon_memcpy(d, s0, 1024);
                    d+= NDS_Wx2;
                }

                copy_it = 0;
                srt.x = 0;
                srt.y = 0;
                srt.w = NDS_Wx2;
                srt.h = NDS_Hx2;
                pitch = srt.w * 2;
            }
        } while(0);
    }

    if (copy_it) {
        if (dma_found == 0) {
            neon_memcpy(myvideo.tmp.virt_addr, pixels, srt.h * pitch);
            myvideo.gfx.src.surf.phyAddr = myvideo.tmp.phy_addr;
            MI_SYS_FlushInvCache(myvideo.tmp.virt_addr, pitch * srt.h);
        }
    }
    else {
        myvideo.gfx.src.surf.phyAddr = myvideo.tmp.phy_addr;
        MI_SYS_FlushInvCache(myvideo.tmp.virt_addr, pitch * srt.h);
    }

    myvideo.gfx.opt.u32GlobalSrcConstColor = 0;
    myvideo.gfx.opt.eRotate = rotate;
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
    myvideo.gfx.src.surf.eColorFmt = is_rgb565 ? E_MI_GFX_FMT_RGB565 : E_MI_GFX_FMT_ARGB8888;

    myvideo.gfx.dst.rt.s32Xpos = drt.x;
    myvideo.gfx.dst.rt.s32Ypos = drt.y;
    myvideo.gfx.dst.rt.u32Width = drt.w;
    myvideo.gfx.dst.rt.u32Height = drt.h;
    myvideo.gfx.dst.surf.u32Width = myvideo.cur_w;
    myvideo.gfx.dst.surf.u32Height = myvideo.cur_h;
    myvideo.gfx.dst.surf.u32Stride = myvideo.cur_w * 4;
    myvideo.gfx.dst.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    myvideo.gfx.dst.surf.phyAddr = myvideo.fb.phy_addr + (myvideo.cur_w * myvideo.fb.var_info.yoffset * 4);

    MI_GFX_BitBlit(&myvideo.gfx.src.surf, &myvideo.gfx.src.rt, &myvideo.gfx.dst.surf, &myvideo.gfx.dst.rt, &myvideo.gfx.opt, &fence);
    MI_GFX_WaitAllDone(FALSE, fence);
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, flush_lcd)
{
    SDL_Rect rt = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, flush_lcd(-1, NULL, rt, rt, 0));
}
#endif

static int flip_lcd(void)
{
#if defined(TRIMUI) || defined(PANDORA)
    int r = 0;
#endif

#if defined(GKD2) || defined(BRICK)
    myvideo.shm.buf->cmd = SHM_CMD_FLIP;
    debug("send SHM_CMD_FLIP\n");

    myvideo.shm.buf->valid = 1;
    __clear_cache((uint8_t *)myvideo.shm.buf, (uint8_t *)myvideo.shm.buf + sizeof(shm_buf_t));
    while (myvideo.shm.buf->valid) {
        usleep(10);
    }
#endif

    debug("call %s()\n", __func__);

#if defined(QX1000) || defined(XT897)
    myvideo.wl.flip ^= 1;
#endif

#if defined(PANDORA)
    ioctl(myvideo.fb.fd[1], FBIOPAN_DISPLAY, &myvideo.fb.var_info);
    ioctl(myvideo.fb.fd[1], FBIO_WAITFORVSYNC, &r);
    myvideo.fb.var_info.yoffset ^= myvideo.cur_h;
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP)
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
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[TEXTURE_BG]);
        glVertexAttribPointer(myvideo.egl.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bg_vertices);
        glVertexAttribPointer(myvideo.egl.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bg_vertices[3]);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);
    }

#endif

#if defined(MINI)
    ioctl(myvideo.fb.fd, FBIOPAN_DISPLAY, &myvideo.fb.var_info);
    myvideo.fb.var_info.yoffset ^= myvideo.cur_h;
#endif

#if defined(TRIMUI)
    myvideo.gfx.buf.info.fb.addr[0] = (uintptr_t)((uint32_t *)myvideo.gfx.ion.padd + (myvideo.cur_w * myvideo.cur_h * myvideo.fb.flip));
    myvideo.gfx.mem[OVL_V_TOP_LADD0 / 4] = myvideo.gfx.buf.info.fb.addr[0];
    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);
    myvideo.fb.flip^= 1;
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

    debug("call %s(info=%p)\n", __func__, info);

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

    debug("call %s(info=%p)\n", __func__, info);

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

    debug("call %s(p=%p)\n", __func__, p);
    
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

static int draw_info(SDL_Surface *dst, const char *info, int x, int y, uint32_t fgcolor, uint32_t bgcolor)
{
    int w = 0;
    int h = 0;
    int len = 0;
    SDL_Color fg = { 0 };
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    SDL_Surface *t2 = NULL;
    SDL_Rect rt = { 0, 0, 0, 0 };

    debug("call %s(info=\"%s\", x=%d, y=%d)\n", __func__, info, x, y);

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
                flush_lcd(-1, t2->pixels, t2->clip_rect, rt, t2->pitch);
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
    debug("call %s()\n", __func__);

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

    debug("call %s()\n", __func__);

    free_touch_pen();
    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, PEN_PATH);

    if (get_path_by_idx(buf, myconfig.pen.sel, path) != 0) {
        error("failed to get file path\n");
        return r;
    }
    debug("touch pen=\"%s\"\n", path);

    t = IMG_Load(path);
    if (!t) {
        error("failed to load touch pen (\"%s\")\n", path);
        return r;
    }

#if defined(A30) || defined(RG28XX) || defined(FLIP)
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

    debug("call %s(name=\"%s\")\n", __func__, name);

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
    debug("call %s()\n", __func__);

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

    debug("call %s()\n", __func__);

    free_menu_res();

#if !defined(UT)
    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, FONT_FILE);
    myvideo.menu.font = TTF_OpenFont(buf, FONT_SIZE);
    myvideo.menu.line_h = (float)get_font_height("X") * 1.25;
#endif

    myvideo.menu.sdl2.bg = load_menu_img(SDL2_MENU_BG_FILE, 0);
    myvideo.menu.sdl2.cursor = load_menu_img(SDL2_MENU_CURSOR_FILE, 1);

    myvideo.menu.drastic.bg0 = load_menu_img(DRASTIC_MENU_BG0_FILE, 0);
    myvideo.menu.drastic.bg1 = load_menu_img(DRASTIC_MENU_BG1_FILE, 0);
    myvideo.menu.drastic.yes = load_menu_img(DRASTIC_MENU_YES_FILE, 1);
    myvideo.menu.drastic.no = load_menu_img(DRASTIC_MENU_NO_FILE, 1);
    myvideo.menu.drastic.cursor = load_menu_img(DRASTIC_MENU_CURSOR_FILE, 1);

#if defined(QX1000) || defined(XT897) || defined(UT)
    myvideo.menu.drastic.frame = SDL_CreateRGBSurface(SDL_SWSURFACE, LAYOUT_BG_W, LAYOUT_BG_H, 32, 0, 0, 0, 0);
#else
    myvideo.menu.drastic.frame = SDL_CreateRGBSurface(SDL_SWSURFACE, myvideo.cur_w, myvideo.cur_h, 32, 0, 0, 0, 0);
#endif

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

static int free_layout_bg(void)
{
    debug("call %s()\n", __func__);

    if (myvideo.layout.bg) {
        SDL_FreeSurface(myvideo.layout.bg);
        myvideo.layout.bg = NULL;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, free_layout_bg)
{
    myvideo.layout.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, 128, 128, 32, 0, 0, 0, 0);
    TEST_ASSERT_EQUAL_INT(0, free_layout_bg());
    TEST_ASSERT_NULL(myvideo.layout.bg);
}
#endif

static int load_layout_bg(void)
{
    static int pre_sel = -1;
    static int pre_mode = -1;
    SDL_Surface *t = NULL;
    char buf[MAX_PATH + 32] = { 0 };

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK) || defined(UT)
    SDL_Rect srt = { 0, 0, LAYOUT_BG_W, LAYOUT_BG_H };
#endif
#if !defined(A30) && !defined(RG28XX) && !defined(FLIP)
    SDL_Rect drt = { 0, 0, myvideo.cur_w, myvideo.cur_h };
#endif

    debug("call %s()\n", __func__);

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK) || defined(UT)
    if ((pre_sel != myconfig.layout.bg.sel) || (pre_mode != myconfig.layout.mode.sel)) {
        pre_mode = myconfig.layout.mode.sel;
        pre_sel = myconfig.layout.bg.sel;

        free_layout_bg();
        myvideo.layout.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, srt.w, srt.h, 32, 0, 0, 0, 0);
        if (!myvideo.layout.bg) {
            error("failed to create surface for bg\n");
            return -1;
        }
        SDL_FillRect(myvideo.layout.bg, &myvideo.layout.bg->clip_rect, SDL_MapRGB(myvideo.layout.bg->format, 0x00, 0x00, 0x00));

        if (myvideo.layout.mode[myconfig.layout.mode.sel].bg[myconfig.layout.bg.sel] == NULL) {
            return 0;
        }

        snprintf(buf, sizeof(buf), "%s%s/%d/%s", myvideo.home, BG_PATH, myconfig.layout.bg.sel, myvideo.layout.mode[myconfig.layout.mode.sel].bg[myconfig.layout.bg.sel]);
        t = IMG_Load(buf);
        if (!t) {
            error("failed to load bg from \"%s\"\n", buf);
            return -1;
        }

        SDL_BlitSurface(t, NULL, myvideo.layout.bg, NULL);
        SDL_FreeSurface(t);

#if !defined(A30) && !defined(RG28XX) && !defined(FLIP)
#if defined(GKD2) || defined(BRICK) || defined(UT)
        flush_lcd(TEXTURE_BG, myvideo.layout.bg->pixels, myvideo.layout.bg->clip_rect, drt, myvideo.layout.bg->pitch);
#else
        flush_lcd(-1, myvideo.layout.bg->pixels, myvideo.layout.bg->clip_rect, drt, myvideo.layout.bg->pitch);
#endif
#endif
    }
    else if (myvideo.layout.bg) {
#if !defined(A30) && !defined(RG28XX) && !defined(FLIP)
#if defined(GKD2) || defined(BRICK) || defined(UT)
        flush_lcd(TEXTURE_BG, myvideo.layout.bg->pixels, myvideo.layout.bg->clip_rect, drt, myvideo.layout.bg->pitch);
#else
        flush_lcd(-1, myvideo.layout.bg->pixels, myvideo.layout.bg->clip_rect, drt, myvideo.layout.bg->pitch);
#endif
#else
        glBindTexture(GL_TEXTURE_2D, myvideo.egl.texture[TEXTURE_BG]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, myvideo.layout.bg->w, myvideo.layout.bg->h, 0, GL_RGBA, GL_UNSIGNED_BYTE, myvideo.layout.bg->pixels);
#endif
    }
#endif

#if defined(TRIMUI) || defined(UT)
    if (myconfig.layout.mode.sel == LAYOUT_MODE_T3) {
        return 0;
    }

    if (pre_mode != myconfig.layout.mode.sel) {
        pre_mode = myconfig.layout.mode.sel;
        disp_resize();
    }

    if (pre_sel != myconfig.layout.bg.sel) {
        pre_sel = myconfig.layout.bg.sel;

        if (myvideo.layout.bg) {
            SDL_FreeSurface(myvideo.layout.bg);
            myvideo.layout.bg = NULL;
        }

        myvideo.layout.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, LAYOUT_BG_W, LAYOUT_BG_H, 32, 0, 0, 0, 0);
        if (!myvideo.layout.bg) {
            error("failed to create surface for bg\n");
            return -1;
        }

        SDL_FillRect(myvideo.layout.bg, &myvideo.layout.bg->clip_rect, SDL_MapRGB(myvideo.layout.bg->format, 0x00, 0x00, 0x00));

        snprintf(buf, sizeof(buf), "%s%s/%d/r0,0,0,160,120,160,120,480,360.png", myvideo.home, BG_PATH, myconfig.layout.bg.sel);
        t = IMG_Load(buf);
        if (!t) {
            error("failed to load bg from \"%s\"\n", buf);
            return -1;
        }
        SDL_BlitSurface(t, NULL, myvideo.layout.bg, NULL);
        SDL_FreeSurface(t);
    }

#if !defined(UT)
    if (myvideo.layout.bg) {
        int x = 0;
        int y = 0;
        int z = 0;
        uint32_t *dst = NULL;
        uint32_t *src = NULL;

        ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &z);
        for (z = 0; z < 2; z++) {
            src = (uint32_t *)myvideo.layout.bg->pixels;
            dst = (uint32_t *)myvideo.gfx.ion.vadd + (myvideo.cur_w * myvideo.cur_h * z);
            for (y = 0; y < myvideo.cur_h; y++) {
                for (x = 0; x < myvideo.cur_w; x++) {
                    dst[(((myvideo.cur_w - 1) - x) * myvideo.cur_h) + y] = *src;
                    src += 2;
                }
                src += LAYOUT_BG_W;
            }
        }
        ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &z);
    }
#endif
#endif

#if defined(PANDORA) || defined(UT)
    if (pre_sel != myconfig.layout.bg.sel) {
        SDL_Rect r0 = { 0 };

        pre_sel = myconfig.layout.bg.sel;

        if (myvideo.layout.bg) {
            SDL_FreeSurface(myvideo.layout.bg);
            myvideo.layout.bg = NULL;
        }

        myvideo.layout.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, LAYOUT_BG_W, LAYOUT_BG_H, 32, 0, 0, 0, 0);
        if (!myvideo.layout.bg) {
            error("failed to create surface for bg\n");
            return -1;
        }

        SDL_FillRect(myvideo.layout.bg, &myvideo.layout.bg->clip_rect, SDL_MapRGB(myvideo.layout.bg->format, 0x00, 0x00, 0x00));

        snprintf(buf, sizeof(buf), "%s%s/%d/r0,0,0,160,120,160,120,480,360.png", myvideo.home, BG_PATH, myconfig.layout.bg.sel);
        t = IMG_Load(buf);
        if (!t) {
            error("failed to load bg from \"%s\"\b", buf);
            return -1;
        }

        SDL_BlitSurface(t, NULL, myvideo.layout.bg, NULL);
        SDL_FreeSurface(t);

        r0.x = 16 - 1;
        r0.y = 48 - 1;
        r0.w = NDS_Wx2 + 2;
        r0.h = NDS_Hx2 + 2;
        SDL_FillRect(myvideo.layout.bg, &r0, SDL_MapRGB(myvideo.layout.bg->format, 0, 0, 0));

        r0.x = (NDS_Wx2 + 16) - 0;
        r0.y = ((myvideo.cur_h - NDS_H) >> 1) - 1;
        r0.w = NDS_W + 2;
        r0.h = NDS_H + 2;
        SDL_FillRect(myvideo.layout.bg, &r0, SDL_MapRGB(myvideo.layout.bg->format, 0, 0, 0));
    }

    if (myvideo.layout.bg) {
#if !defined(UT)
        neon_memcpy(
            myvideo.gfx.mem[(myvideo.fb.var_info.yoffset == 0) ? 0 : 1],
            myvideo.layout.bg->pixels,
            myvideo.cur_w * myvideo.cur_h * 4
        );
#endif
    }
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_video, load_layout_bg)
{
    TEST_ASSERT_EQUAL_INT(0, load_layout_bg());
}
#endif

static void free_device(SDL_VideoDevice *d)
{
    debug("call %s(d=%p)\n", __func__, d);

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
    debug("call %s(w=%d, h=%d)\n", __func__, w->w, w->h);

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
    debug("call %s()\n", __func__);

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

    debug("call %s(idx=%d)\n", __func__, idx);

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

static int add_layout_mode(int mode, const char *fname)
{
    debug("call %s(mode=%d, bg=%d, fname=%p)\n", mode, gb, fname);

    switch (mode) {
    case 0:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 160;
        myvideo.layout.mode[mode].screen[0].h = 120;
        myvideo.layout.mode[mode].screen[1].x = 0;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = 640;
        myvideo.layout.mode[mode].screen[1].h = 480;
        break;
    case 1:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 256;
        myvideo.layout.mode[mode].screen[0].h = 192;
        myvideo.layout.mode[mode].screen[1].x = 0;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = 640;
        myvideo.layout.mode[mode].screen[1].h = 480;
        break;
    case 2:
        myvideo.layout.mode[mode].screen[1].x = 64;
        myvideo.layout.mode[mode].screen[1].y = 48;
        myvideo.layout.mode[mode].screen[1].w = 512;
        myvideo.layout.mode[mode].screen[1].h = 384;
        break;
    case 3:
        myvideo.layout.mode[mode].screen[1].x = 0;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = 640;
        myvideo.layout.mode[mode].screen[1].h = 480;
        break;
    case 4:
        myvideo.layout.mode[mode].screen[0].x = 192;
        myvideo.layout.mode[mode].screen[0].y = 48;
        myvideo.layout.mode[mode].screen[0].w = 256;
        myvideo.layout.mode[mode].screen[0].h = 192;
        myvideo.layout.mode[mode].screen[1].x = 192;
        myvideo.layout.mode[mode].screen[1].y = 240;
        myvideo.layout.mode[mode].screen[1].w = 256;
        myvideo.layout.mode[mode].screen[1].h = 192;
        break;
    case 5:
        myvideo.layout.mode[mode].screen[0].x = 160;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 320;
        myvideo.layout.mode[mode].screen[0].h = 240;
        myvideo.layout.mode[mode].screen[1].x = 160;
        myvideo.layout.mode[mode].screen[1].y = 240;
        myvideo.layout.mode[mode].screen[1].w = 320;
        myvideo.layout.mode[mode].screen[1].h = 240;
        break;
    case 6:
        myvideo.layout.mode[mode].screen[0].x = 64;
        myvideo.layout.mode[mode].screen[0].y = 144;
        myvideo.layout.mode[mode].screen[0].w = 256;
        myvideo.layout.mode[mode].screen[0].h = 192;
        myvideo.layout.mode[mode].screen[1].x = 320;
        myvideo.layout.mode[mode].screen[1].y = 144;
        myvideo.layout.mode[mode].screen[1].w = 256;
        myvideo.layout.mode[mode].screen[1].h = 192;
        break;
    case 7:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 120;
        myvideo.layout.mode[mode].screen[0].w = 320;
        myvideo.layout.mode[mode].screen[0].h = 240;
        myvideo.layout.mode[mode].screen[1].x = 320;
        myvideo.layout.mode[mode].screen[1].y = 120;
        myvideo.layout.mode[mode].screen[1].w = 320;
        myvideo.layout.mode[mode].screen[1].h = 240;
        break;
    case 8:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 160;
        myvideo.layout.mode[mode].screen[0].h = 120;
        myvideo.layout.mode[mode].screen[1].x = 160;
        myvideo.layout.mode[mode].screen[1].y = 120;
        myvideo.layout.mode[mode].screen[1].w = 480;
        myvideo.layout.mode[mode].screen[1].h = 360;
        break;
    case 9:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 256;
        myvideo.layout.mode[mode].screen[0].h = 192;
        myvideo.layout.mode[mode].screen[1].x = 256;
        myvideo.layout.mode[mode].screen[1].y = 192;
        myvideo.layout.mode[mode].screen[1].w = 384;
        myvideo.layout.mode[mode].screen[1].h = 288;
        break;
    case 10:
        myvideo.layout.mode[mode].screen[0].x = 240;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 160;
        myvideo.layout.mode[mode].screen[0].h = 120;
        myvideo.layout.mode[mode].screen[1].x = 80;
        myvideo.layout.mode[mode].screen[1].y = 120;
        myvideo.layout.mode[mode].screen[1].w = 480;
        myvideo.layout.mode[mode].screen[1].h = 360;
        break;
    case 11:
        myvideo.layout.mode[mode].screen[0].x = 64;
        myvideo.layout.mode[mode].screen[0].y = 96;
        myvideo.layout.mode[mode].screen[0].w = 512;
        myvideo.layout.mode[mode].screen[0].h = 384;
        myvideo.layout.mode[mode].screen[1].x = 256;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = 128;
        myvideo.layout.mode[mode].screen[1].h = 96;
        break;
    case 12:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 96;
        myvideo.layout.mode[mode].screen[0].w = 512;
        myvideo.layout.mode[mode].screen[0].h = 384;
        myvideo.layout.mode[mode].screen[1].x = 512;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = 128;
        myvideo.layout.mode[mode].screen[1].h = 96;
        break;
    case 13:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 128;
        myvideo.layout.mode[mode].screen[0].h = 96;
        myvideo.layout.mode[mode].screen[1].x = 128;
        myvideo.layout.mode[mode].screen[1].y = 96;
        myvideo.layout.mode[mode].screen[1].w = 512;
        myvideo.layout.mode[mode].screen[1].h = 384;
        break;
    case 14:
        myvideo.layout.mode[mode].screen[0].x = 192;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 256;
        myvideo.layout.mode[mode].screen[0].h = 192;
        myvideo.layout.mode[mode].screen[1].x = 128;
        myvideo.layout.mode[mode].screen[1].y = 192;
        myvideo.layout.mode[mode].screen[1].w = 384;
        myvideo.layout.mode[mode].screen[1].h = 288;
        break;
    case 15:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 144;
        myvideo.layout.mode[mode].screen[0].w = 256;
        myvideo.layout.mode[mode].screen[0].h = 192;
        myvideo.layout.mode[mode].screen[1].x = 256;
        myvideo.layout.mode[mode].screen[1].y = 96;
        myvideo.layout.mode[mode].screen[1].w = 384;
        myvideo.layout.mode[mode].screen[1].h = 288;
        break;
    case 16:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 26;
        myvideo.layout.mode[mode].screen[0].w = 427;
        myvideo.layout.mode[mode].screen[0].h = 320;
        myvideo.layout.mode[mode].screen[1].x = 320;
        myvideo.layout.mode[mode].screen[1].y = 26;
        myvideo.layout.mode[mode].screen[1].w = 427;
        myvideo.layout.mode[mode].screen[1].h = 320;
        break;
    case 17:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 26;
        myvideo.layout.mode[mode].screen[0].w = 427;
        myvideo.layout.mode[mode].screen[0].h = 320;
        myvideo.layout.mode[mode].screen[1].x = 320;
        myvideo.layout.mode[mode].screen[1].y = 26;
        myvideo.layout.mode[mode].screen[1].w = 427;
        myvideo.layout.mode[mode].screen[1].h = 320;
        break;
    case 18:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 480;
        myvideo.layout.mode[mode].screen[0].h = 320;
        myvideo.layout.mode[mode].screen[1].x = 320;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = 480;
        myvideo.layout.mode[mode].screen[1].h = 320;
        break;
    case 19:
        myvideo.layout.mode[mode].screen[0].x = 0;
        myvideo.layout.mode[mode].screen[0].y = 0;
        myvideo.layout.mode[mode].screen[0].w = 480;
        myvideo.layout.mode[mode].screen[0].h = 320;
        myvideo.layout.mode[mode].screen[1].x = 320;
        myvideo.layout.mode[mode].screen[1].y = 0;
        myvideo.layout.mode[mode].screen[1].w = 480;
        myvideo.layout.mode[mode].screen[1].h = 320;
        break;
    }

    if (fname && fname[0]) {
        myvideo.layout.mode[mode].bg[myvideo.layout.mode[mode].max_bg] = strdup(fname);
        myvideo.layout.mode[mode].max_bg += 1;
    }

    if (mode > myvideo.layout.max_mode) {
        myvideo.layout.max_mode = mode;
    }

    debug(
        "layout.mode[%d].bg[%d]=(%d,%d,%d,%d)(%d,%d,%d,%d)(\"%s\")\n",
        mode,
        myvideo.layout.mode[mode].max_bg ? myvideo.layout.mode[mode].max_bg - 1 : 0,
        myvideo.layout.mode[mode].screen[0].x,
        myvideo.layout.mode[mode].screen[0].y,
        myvideo.layout.mode[mode].screen[0].w,
        myvideo.layout.mode[mode].screen[0].h,
        myvideo.layout.mode[mode].screen[1].x,
        myvideo.layout.mode[mode].screen[1].y,
        myvideo.layout.mode[mode].screen[1].w,
        myvideo.layout.mode[mode].screen[1].h,
        fname
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
    int c0 = 0;
    int c1 = 0;

    debug("call %s()\n", __func__);

    for (c0 = 0; c0 < myvideo.layout.max_mode; c0++) {
        for (c1 = 0; c1 < myvideo.layout.mode[c0].max_bg; c1++) {
            if (myvideo.layout.mode[c0].bg[c1]) {
                free(myvideo.layout.mode[c0].bg[c1]);
                myvideo.layout.mode[c0].bg[c1] = NULL;
            }
        }
    }

    myvideo.layout.max_mode = 0;
    memset(myvideo.layout.mode, 0, sizeof(myvideo.layout.mode));
    add_layout_mode(LAYOUT_MODE_T0, NULL);
    add_layout_mode(LAYOUT_MODE_T1, NULL);
    add_layout_mode(LAYOUT_MODE_T18, NULL);
    add_layout_mode(LAYOUT_MODE_T19, NULL);

    return 0;
}

#if defined(UT)
TEST(sdl2_video, free_layout_mode)
{
    myvideo.layout.mode = malloc(layout_mode_t);
    TEST_ASSERT_EQUAL_INT(0, free_layout_mode());
    TEST_ASSERT_NULL(myvideo.layout.mode);
}
#endif

static int add_layout_black_bg(void)
{
    int cc = 0;

    debug("call %s()\n", __func__);

    for (cc = 0; cc < myvideo.layout.max_mode; cc++) {
        add_layout_mode(cc, NULL);
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, add_layout_black_bg)
{
    TEST_ASSERT_EQAUAL_INT(0, add_layout_black_bg());
}
#endif

static int enum_layout_bg_file(void)
{
    int cc = 0;
    int mode = 0;
    int total = 0;
    DIR *d = NULL;
    struct dirent *dir = NULL;
    char buf[MAX_PATH + 32] = { 0 };

    debug("call %s()\n", __func__);

    free_layout_mode();

    total = get_bg_cnt();
    for (cc = 0; cc < total; cc++) {
        snprintf(buf, sizeof(buf), "%s%s/%d", myvideo.home, BG_PATH, cc);
        debug("enum folder=\"%s\"\n", buf);

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

            if (dir->d_name[0] != 't') {
                error("invalid layout bg file (\"%s\")\n", dir->d_name);
                continue;
            }

            mode = atoi(&dir->d_name[1]);
            add_layout_mode(mode, dir->d_name);
        }
        closedir(d);
    }

    add_layout_black_bg();

    return myvideo.layout.max_mode;
}

#if defined(UT)
TEST(sdl2_video, enum_layout_bg_file)
{
    TEST_ASSERT_EQUAL_INT(0, enum_layout_bg_file());
}
#endif

static int init_device(void)
{
    int r = 0;
    char buf[MAX_PATH] = { 0 };

#if defined(TRIMUI)
    int x = 0;
    int y = 0;
    int ox = 32;
    int oy = 24;
    int cc = 0;
    uint32_t *dst = NULL;
#endif

    debug("call %s()\n", __func__);

    getcwd(myvideo.home, sizeof(myvideo.home));
    strcat(myvideo.home, "/");
    debug("home=\"%s\"\n", myvideo.home);

    myvideo.cur_w = SCREEN_W;
    myvideo.cur_h = SCREEN_H;
    myvideo.cur_buf_size = myvideo.cur_w * myvideo.cur_h * 4 * 2;
    myvideo.cvt = SDL_CreateRGBSurface(SDL_SWSURFACE, SCREEN_W, SCREEN_H, 32, 0, 0, 0, 0);

#if defined(TRIMUI)
    cc = 0;
    for (y = 0; y < NDS_H; y++) {
        for (x = 0; x < NDS_W; x++) {
            dst = (uint32_t *)myvideo.gfx.ion.vadd;
            LUT_256x192_S00[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x) + ox) * myvideo.cur_h) + y + oy);
            LUT_256x192_S10[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x)) * myvideo.cur_h) + y);

            dst = (uint32_t *)myvideo.gfx.ion.vadd + (myvideo.cur_w * myvideo.cur_h);
            LUT_256x192_S01[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x) + ox) * myvideo.cur_h) + y + oy);
            LUT_256x192_S11[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x)) * myvideo.cur_h) + y);
            cc+= 1;
        }
    }
#endif

    load_config(myvideo.home);

    myconfig.pen.max = get_pen_cnt();
    debug("total pen images=%d\n", myconfig.pen.max);

    myconfig.menu.max = get_menu_cnt();
    debug("total menu images=%d\n", myconfig.menu.max);

    enum_lang_file();
    enum_layout_bg_file();

    load_lang_file();
    load_menu_res();
    load_touch_pen();

#if defined(MINI) || defined(TRIMUI) || defined(A30) || defined(PANDORA)
    set_auto_state(myconfig.autostate.enable, myconfig.autostate.slot);
    set_half_vol(myconfig.half_vol);
#endif

#if defined(TRIMUI)
    if ((myconfig.layout.mode.sel != LAYOUT_MODE_T2) && (myconfig.layout.mode.sel != LAYOUT_MODE_T3)) {
        myconfig.layout.mode.sel = LAYOUT_MODE_T2;
    }
    disp_resize();
#endif

#if defined(QX1000) || defined(XT897)
    myconfig.layout.mode.sel = LAYOUT_MODE_T6;
#endif

    init_lcd();
    init_event();
    init_hook(sysconf(_SC_PAGESIZE), myconfig.state_path);

    add_prehook_cb(myhook.fun.malloc,  prehook_cb_malloc);
    add_prehook_cb(myhook.fun.realloc, prehook_cb_realloc);
    add_prehook_cb(myhook.fun.free,    prehook_cb_free);
    add_prehook_cb(myhook.fun.print_string, prehook_cb_print_string);
    add_prehook_cb(myhook.fun.update_screen, prehook_cb_update_screen);
    add_prehook_cb(myhook.fun.savestate_pre, prehook_cb_savestate_pre);
    add_prehook_cb(myhook.fun.savestate_post, prehook_cb_savestate_post);
    add_prehook_cb(myhook.fun.blit_screen_menu, prehook_cb_blit_screen_menu);
    add_prehook_cb(myhook.fun.platform_get_input, prehook_cb_platform_get_input);

    pthread_create(&myvideo.thread.id, NULL, video_handler, NULL);

    strncpy(buf, myvideo.home, sizeof(buf));
    strcat(buf, BIOS_PATH);
    debug("drop bios files to \"%s\"\n", buf);
    if (drop_bios_files(buf) < 0) {
        r = -1;
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

    debug("call %s()\n", __func__);

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
    debug("call %s()\n", __func__);
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

    debug("call %s()\n", __func__);

    debug("wait for video_handler complete\n");
    myvideo.thread.running = 0;
    pthread_join(myvideo.thread.id, &r);
    debug("completed\n");

    debug("wait for savestate complete\n");
    while (myvideo.state_busy) {
        usleep(1000000);
    }
    debug("completed\n");

    quit_hook();
    quit_lcd();
    quit_event();
    free_lang_res();
    free_menu_res();
    free_touch_pen();
    free_layout_bg();
    free_layout_mode();

    if (myvideo.fps) {
        SDL_FreeSurface(myvideo.fps);
        myvideo.fps = NULL;
    }

    if (myvideo.cvt) {
        SDL_FreeSurface(myvideo.cvt);
        myvideo.cvt = NULL;
    }

    update_config(myvideo.home);
    system("sync");

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
    debug("call%s()\n" , __func__);

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

static const char *LAYOUT_MODE_STR0[] = {
    "640*480",
    "640*480",
    "512*384",
    "640*480",
    "256*192",
    "320*240",
    "256*192",
    "320*240",
    "480*360",
    "384*288",
    "384*288",
    "512x384",
    "512x384",
    "512x384",
    "384*288",
    "384*288",
    "427*320",
    "427*320",
    "480*320",
    "480*320",
};

static const char *LAYOUT_MODE_STR1[] = {
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
    "128*96",
    "128*96",
    "128*96",
    "256*192",
    "256*192",
    "427*320",
    "427*320",
    "480*320",
    "480*320",
};

static const char *SWIN_POS_STR[] = {
    "Top-Right",
    "Top-Left",
    "Bottom-Left",
    "Bottom-Right"
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

#if defined(A30) || defined(FLIP)
static const char *JOY_MODE_STR[] = {
    "Disable",
    "D-Pad",
    "Stylus",
    "Customized Key"
};

static const char *RJOY_MODE_STR[] = {
    "Disable",
    "4-Btn",
    "Stylus",
    "Customized Key"
};

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

    debug("call %s()\n", __func__);

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

    debug("call %s()\n", __func__);

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
    MENU_LAYOUT_MODE,
    MENU_SWIN_ALPHA,
    MENU_SWIN_BORDER,
    MENU_SWIN_POS,
    MENU_LAYOUT_ATL,
    MENU_ROTATE_KEY,
    MENU_BIND_HOTKEY,
    MENU_SWAP_L1L2,
    MENU_SWAP_R1R2,
    MENU_PEN_SPEED,
    MENU_SHOW_CURSOR,
    MENU_FAST_FORWARD,
#if defined(A30) || defined(FLIP)
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
#if defined(MINI) || defined(A30) || defined(FLIP)
    MENU_CHK_BAT,
#endif
    MENU_LAST,
} menu_list_t;

static const char *MENU_LIST_STR[] = {
    "Language",
    "Layout Mode",
    "  Alpha",
    "  Border",
    "  Position",
    "Layout Alt.",
    "Rotate Key",
    "Bind Hotkey",
    "Swap L1-L2",
    "Swap R1-R2",
    "Pen Speed",
    "Show Cursor",
    "Fast Forward",
#if defined(A30) || defined(FLIP)
    "L Joy Mode",
    "  Joy Up",
    "  Joy Down",
    "  Joy Left",
    "  Joy Right",
    "L Joy Dead Zone",
#endif
#if defined(FLIP)
    "R Joy Mode",
    "  Joy Up",
    "  Joy Down",
    "  Joy Left",
    "  Joy Right",
    "R Joy Dead Zone",
#endif
#if defined(MINI) || defined(A30) || defined(FLIP)
    "Low Battery Status",
#endif
};

static int draw_small_block_win(int sx, int sy, uint32_t mode, SDL_Surface *d)
{
    SDL_Rect rt = { 0 };

    debug("call %s(sx=%d, sy=%d, mode=%d)\n", __func__, sx, sy, mode);

    if (!d) {
        error("d is null\n");
        return -1;
    }

    switch (mode) {
    case LAYOUT_MODE_T0:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
       
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
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, (30 * myconfig.layout.swin.alpha)));
        break;
    case LAYOUT_MODE_T1:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
       
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
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, (30 * myconfig.layout.swin.alpha)));
        break;
    case LAYOUT_MODE_T2:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 102;
        rt.h = 76;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        break;
    case LAYOUT_MODE_T3:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        break;
    case LAYOUT_MODE_T4:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - (rt.h * 2)) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - (rt.h * 2)) / 2) + rt.h;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T5:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 64;
        rt.h = 48;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - (rt.h * 2)) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 64;
        rt.h = 48;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + ((96 - (rt.h * 2)) / 2) + rt.h;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T6:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - (rt.w * 2)) / 2);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - (rt.w * 2)) / 2) + rt.w;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T7:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 64;
        rt.h = 48;
        rt.x = sx + ((128 - (rt.w * 2)) / 2);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 64;
        rt.h = 48;
        rt.x = sx + ((128 - (rt.w * 2)) / 2) + rt.w;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T8:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 96;
        rt.h = 72;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 32;
        rt.h = 24;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T9:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 77;
        rt.h = 58;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T10:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 96;
        rt.h = 72;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 32;
        rt.h = 24;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T11:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 102;
        rt.h = 77;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 26;
        rt.h = 19;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T12:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 102;
        rt.h = 77;
        rt.x = sx + (128 - rt.w);
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 26;
        rt.h = 19;
        rt.x = sx;
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T13:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 102;
        rt.h = 77;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 26;
        rt.h = 19;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T14:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 77;
        rt.h = 58;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + ((128 - rt.w) / 2);
        rt.y = sy + (96 - rt.h);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T15:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 77;
        rt.h = 58;
        rt.x = sx;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 51;
        rt.h = 38;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T16:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));
        
        rt.w = 64;
        rt.h = 85;
        rt.x = sx;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        
        rt.w = 64;
        rt.h = 85;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T17:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));

        rt.w = 64;
        rt.h = 85;
        rt.x = sx;
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));

        rt.w = 64;
        rt.h = 85;
        rt.x = sx + (128 - rt.w);
        rt.y = sy + ((96 - rt.h) / 2);
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        break;
    case LAYOUT_MODE_T18:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));

        rt.w = 64;
        rt.h = 96;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));

        rt.w = 64;
        rt.h = 96;
        rt.x = sx + (128 - rt.w);
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));
        break;
    case LAYOUT_MODE_T19:
        rt.x = sx;
        rt.y = sy;
        rt.w = 128;
        rt.h = 96;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x80, 0x00));

        rt.w = 64;
        rt.h = 96;
        rt.x = sx;
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x00, 0x00, 0x80));

        rt.w = 64;
        rt.h = 96;
        rt.x = sx + (128 - rt.w);
        rt.y = sy;
        SDL_FillRect(d, &rt, SDL_MapRGB(d->format, 0x80, 0x00, 0x00));
        break;
    }
    
    return 0;
}

#if defined(UT)
TEST(sdl2_video, draw_small_block_win)
{
    TEST_ASSERT_EQUAL_INT(-1, draw_small_block_win(0, 0, 0, 0));
}
#endif

static int apply_sdl2_menu_setting(int cur_sel, int right_key)
{
    debug("call %s(cur_sel=%d, right_key=%d)\n", __func__, cur_sel, right_key);

    switch(cur_sel) {
    case MENU_LANG:
        if (right_key) {
            lang_next();
        }
        else {
            lang_prev();
        }
        break;
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
        if (((myconfig.layout.mode.sel == LAYOUT_MODE_T0) || 
            (myconfig.layout.mode.sel == LAYOUT_MODE_T1)))
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
            ((myconfig.layout.mode.sel == LAYOUT_MODE_T0) ||
            (myconfig.layout.mode.sel == LAYOUT_MODE_T1)))
        {
            myconfig.layout.swin.border = right_key;
        }
        break;
    case MENU_SWIN_POS:
        if (((myconfig.layout.mode.sel == LAYOUT_MODE_T0) ||
            (myconfig.layout.mode.sel == LAYOUT_MODE_T1)))
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
    case MENU_ROTATE_KEY:
        if (right_key) {
            if (myconfig.keys_rotate < 2) {
                myconfig.keys_rotate += 1;
            }
        }
        else {
            if (myconfig.keys_rotate > 0) {
                myconfig.keys_rotate -= 1;
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
#if defined(A30) || defined(FLIP)
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
        if (myconfig.joy.dzone > 0) {
            myconfig.joy.dzone -= 1;
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
#if defined(MINI) || defined(A30) || defined(FLIP)
    case MENU_CHK_BAT:
        myconfig.show_low_battery = right_key;
        break;
#endif
    default:
        return -1;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_video, apply_sdl2_menu_setting)
{
    myconfig.layout.mode.alt = 0;
    TEST_ASSERT_EQUAL_INT(0, apply_sdl2_menu_setting(MENU_LAYOUT_ATL, 1));
    TEST_ASSERT_EQUAL_INT(1, myconfig.layout.mode.alt);
    TEST_ASSERT_EQUAL_INT(0, apply_sdl2_menu_setting(MENU_LAYOUT_ATL, 0));
    TEST_ASSERT_EQUAL_INT(0, myconfig.layout.mode.alt);
}
#endif

static int draw_sdl2_menu_setting(int cur_sel, int cc, int idx, int sx, int col0, int col1)
{
    const int SX = 150;
    const int SY = 107;
    const int SSX = 385;
    char buf[MAX_PATH] = { 0 };

    debug("call %s(cur_sel=%d, cc=%d, idx=%d, sx=%d)\n", __func__, cur_sel, cc, idx, sx);

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
        sprintf(buf, "[%d]   %s", myconfig.layout.mode.sel, LAYOUT_MODE_STR0[myconfig.layout.mode.sel]);
        break;
    case MENU_SWIN_ALPHA:
        sprintf(buf, "[%d]   ", myconfig.layout.mode.sel);
        sx = get_font_width(buf);
        sprintf(buf, "%s", LAYOUT_MODE_STR1[myconfig.layout.mode.sel]);
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
        sprintf(buf, "[%d]   %s", myconfig.layout.mode.alt, LAYOUT_MODE_STR0[myconfig.layout.mode.alt]);
        break;
    case MENU_ROTATE_KEY:
        sprintf(buf, "[%d]   ", myconfig.layout.mode.alt);
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
        sprintf(buf, "%s", ROTATE_KEY_STR[myconfig.keys_rotate % 3]);
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
#if defined(A30) || defined(FLIP)
    case MENU_JOY_MODE:
        sprintf(buf, "%s", l10n(JOY_MODE_STR[myconfig.joy.mode]));
        break;
    case MENU_JOY_CUST_KEY0:
        sprintf(buf, "Miyoo %s", l10n(JOY_CUST_KEY_STR[myconfig.joy.cust_key[0]]));
        break;
    case MENU_JOY_CUST_KEY1:
        sprintf(buf, "Miyoo %s", l10n(JOY_CUST_KEY_STR[myconfig.joy.cust_key[1]]));
        break;
    case MENU_JOY_CUST_KEY2:
        sprintf(buf, "Miyoo %s", l10n(JOY_CUST_KEY_STR[myconfig.joy.cust_key[2]]));
        break;
    case MENU_JOY_CUST_KEY3:
        sprintf(buf, "Miyoo %s", l10n(JOY_CUST_KEY_STR[myconfig.joy.cust_key[3]]));
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
        sprintf(buf, "Miyoo %s", l10n(JOY_CUST_KEY_STR[myconfig.rjoy.cust_key[0]]));
        break;
    case MENU_RJOY_CUST_KEY1:
        sprintf(buf, "Miyoo %s", l10n(JOY_CUST_KEY_STR[myconfig.rjoy.cust_key[1]]));
        break;
    case MENU_RJOY_CUST_KEY2:
        sprintf(buf, "Miyoo %s", l10n(JOY_CUST_KEY_STR[myconfig.rjoy.cust_key[2]]));
        break;
    case MENU_RJOY_CUST_KEY3:
        sprintf(buf, "Miyoo %s", l10n(JOY_CUST_KEY_STR[myconfig.rjoy.cust_key[3]]));
        break;
    case MENU_RJOY_DZONE:
        sprintf(buf, "%d", myconfig.rjoy.dzone);
        break;
#endif
#if defined(MINI) || defined(A30) || defined(FLIP)
    case MENU_CHK_BAT:
        sprintf(buf, "%s", l10n(myconfig.show_low_battery ? "Yes" : "No"));
        break;
#endif
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

int handle_sdl2_menu(int key)
{
    static int cur_sel = 0;
    static int pre_fast = 0;
    static int pre_lang = 0;

    int cc = 0;
    int sx = 0;
    int s0 = 0;
    int s1 = 0;
    int idx = 0;
    int mode = -1;
    uint32_t col0 = 0;
    uint32_t col1 = 0;
    SDL_Rect rt = { 0 };

    debug("call %s(key=%d)\n", __func__, key);

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
        apply_sdl2_menu_setting(cur_sel, 0);
        break;
    case KEY_BIT_RIGHT:
        apply_sdl2_menu_setting(cur_sel, 1);
        break;
    case KEY_BIT_B:
        if (pre_lang != myconfig.lang) {
            load_lang_file();
            pre_lang = myconfig.lang;
        }

        if (pre_fast != myconfig.fast_forward) {
            fast_forward(myconfig.fast_forward);
            pre_fast = myconfig.fast_forward;
        }

        myvideo.menu.sdl2.enable = 0;

    #if defined(QX1000) || defined(XT897)
        update_wayland_res(NDS_W * 2, NDS_H);
    #endif
        return 0;
    default:
        break;
    }

    if (cur_sel == MENU_LAYOUT_MODE) {
        mode = myconfig.layout.mode.sel;
    }
    else if (cur_sel == MENU_LAYOUT_ATL) {
        mode = myconfig.layout.mode.alt;
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
            sx = 20;
            if ((cur_sel == MENU_SWIN_ALPHA) &&
                ((myconfig.layout.mode.sel == LAYOUT_MODE_T0) ||
                (myconfig.layout.mode.sel == LAYOUT_MODE_T1)))
            {
                col1 = MENU_COLOR_SEL;
            }
            else {
                if ((myconfig.layout.mode.sel == LAYOUT_MODE_T0) ||
                    (myconfig.layout.mode.sel == LAYOUT_MODE_T1))
                {
                    col1 = MENU_COLOR_UNSEL;
                }
                else {
                    col1 = MENU_COLOR_DIS;
                }
            }
            break;
        case MENU_SWIN_BORDER:
            sx = 20;
            if ((cur_sel == MENU_SWIN_BORDER) &&
                (myconfig.layout.swin.alpha > 0) &&
                ((myconfig.layout.mode.sel == LAYOUT_MODE_T0) ||
                (myconfig.layout.mode.sel == LAYOUT_MODE_T1)))
            {
                col1 = MENU_COLOR_SEL;
            }
            else {
                if ((myconfig.layout.swin.alpha > 0) &&
                    ((myconfig.layout.mode.sel == LAYOUT_MODE_T0) ||
                    (myconfig.layout.mode.sel == LAYOUT_MODE_T1)))
                {
                    col1 = MENU_COLOR_UNSEL;
                }
                else {
                    col1 = MENU_COLOR_DIS;
                }
            }
            break;
        case MENU_SWIN_POS:
            sx = 20;
            if ((cur_sel == MENU_SWIN_POS) &&
                ((myconfig.layout.mode.sel == LAYOUT_MODE_T0) ||
                (myconfig.layout.mode.sel == LAYOUT_MODE_T1)))
            {
                col1 = MENU_COLOR_SEL;
            }
            else {
                if ((myconfig.layout.mode.sel == LAYOUT_MODE_T0) ||
                    (myconfig.layout.mode.sel == LAYOUT_MODE_T1))
                {
                    col1 = MENU_COLOR_UNSEL;
                }
                else {
                    col1 = MENU_COLOR_DIS;
                }
            }
            break;
        case MENU_LAYOUT_ATL:
            if (*myhook.var.sdl.screen[0].hires_mode == 0) {
                col1 = (cur_sel == cc) ? MENU_COLOR_SEL : MENU_COLOR_UNSEL;
            }
            else {
                col1 = MENU_COLOR_UNSEL;
            }
            break;
#if defined(A30) || defined(FLIP)
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
                SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, 0x80, 0x80, 0x80));
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

    draw_small_block_win(450, 360, mode, myvideo.cvt);

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    myvideo.menu.update = 1;
#else
    flush_lcd(-1, myvideo.cvt->pixels, myvideo.cvt->clip_rect, myvideo.cvt->clip_rect, myvideo.cvt->pitch);
    flip_lcd();
#endif
    myvideo.layout.redraw_bg = REDRAW_BG_CNT;

    return 0;
}

#if defined(UT)
TEST(sdl2_video, handle_sdl2_menu)
{
    uint8_t hires = 0;

    TEST_ASSERT_EQUAL_INT(0, init_video(NULL));
    myhook.var.sdl.screen[0].hires_mode = &hires;
    myhook.var.sdl.screen[1].hires_mode = &hires;
    TEST_ASSERT_EQUAL_INT(0, handle_sdl2_menu(0));
    quit_video(0);
}
#endif

