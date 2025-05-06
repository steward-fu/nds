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

NDS nds = { 0 };
nds_video myvideo = { 0 };

extern nds_hook myhook;
extern nds_event myevent;

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

static pthread_t thread = { 0 };
static int need_reload_bg = RELOAD_BG_COUNT;
static SDL_Surface *cvt = NULL;

static int init_video(_THIS);
static int set_disp_mode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode);
static void quit_video(_THIS);

static cust_menu_t drastic_menu = { 0 };
static char *translate[MAX_LANG_LINE] = { 0 };

#if defined(TRIMUI)
static uint32_t LUT_256x192_S00[NDS_W * NDS_H] = { 0 };
static uint32_t LUT_256x192_S01[NDS_W * NDS_H] = { 0 };
static uint32_t LUT_256x192_S10[NDS_W * NDS_H] = { 0 };
static uint32_t LUT_256x192_S11[NDS_W * NDS_H] = { 0 };

int need_restore = 0;
int pre_dismode = 0;
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
    "attribute vec4 vert_pos;                               \n"
    "attribute vec2 vert_coord;                             \n"
    "varying vec2 frag_coord;                               \n"
    "void main()                                            \n"
    "{                                                      \n"
    "    gl_Position = vert_pos;                            \n"
    "    frag_coord = vert_coord;                           \n"
    "}                                                      \n";

const char *frag_shader_src =
    "#ifdef GL_ES                                           \n"
    "precision mediump float;                               \n"
    "#endif                                                 \n"
    "varying vec2 frag_coord;                               \n"
    "uniform float frag_angle;                              \n"
    "uniform float frag_aspect;                             \n"
    "uniform sampler2D frag_sampler;                        \n"
    "const vec2 HALF = vec2(0.5);                           \n"
    "void main()                                            \n"
    "{                                                      \n"
    "    float aSin = sin(frag_angle);                      \n"
    "    float aCos = cos(frag_angle);                      \n"
    "    vec2 tc = frag_coord;                              \n"
    "    mat2 rotMat = mat2(                                \n"
    "        aCos, -aSin, aSin, aCos);                      \n"
    "    mat2 scaleMat = mat2(                              \n"
    "        frag_aspect, 0.0, 0.0, 1.0);                   \n"
    "    mat2 scaleMatInv = mat2(                           \n"
    "        1.0 / frag_aspect, 0.0, 0.0, 1.0);             \n"
    "    tc -= HALF.xy;                                     \n"
    "    tc = scaleMatInv * rotMat * scaleMat * tc;         \n"
    "    tc += HALF.xy;                                     \n"
    "    vec3 tex = texture2D(frag_sampler, tc).bgr;        \n"
    "    gl_FragColor = vec4(tex, 1.0);                     \n"
    "}                                                      \n";
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP)
const char *vert_shader_src =
    "attribute vec4 vert_pos;                               \n"
    "attribute vec2 vert_coord;                             \n"
    "attribute float vert_alpha;                            \n"
    "varying vec2 frag_coord;                               \n"
    "void main()                                            \n"
    "{                                                      \n"
#if !defined(FLIP)
    "    const float frag_angle = 0.0;                      \n"
    "    frag_angle = 90.0 * (3.1415 * 2.0);                \n"
    "    frag_angle = frag_angle / 360.0;                   \n"
    "    mat4 rot = mat4(                                   \n"
    "        cos(frag_angle), -sin(frag_angle), 0.0, 0.0,   \n"
    "        sin(frag_angle),  cos(frag_angle), 0.0, 0.0,   \n"
    "               0.0,         0.0, 1.0, 0.0,             \n"
    "               0.0,         0.0, 0.0, 1.0              \n"
    "    );                                                 \n"
    "    gl_Position = vert_pos * rot;                      \n"
    "    frag_coord = vert_coord;                           \n"
#else
    "    gl_Position = vert_pos;                            \n"
    "    frag_coord = vert_coord;                           \n"
#endif
    "}                                                      \n";
    
const char *frag_shader_src =
    "precision mediump float;                               \n"
    "varying vec2 frag_coord;                               \n"
    "uniform float s_alpha;                                 \n"
    "uniform sampler2D frag_sampler;                        \n"
    "void main()                                            \n"
    "{                                                      \n"
    "    if (s_alpha >= 2.0) {                              \n"
    "        gl_FragColor = texture2D(                      \n"
    "            frag_sampler, frag_coord);                 \n"
    "    }                                                  \n"
    "    else if (s_alpha > 0.0) {                          \n"
    "        vec3 tex = texture2D(                          \n"
    "            frag_sampler, frag_coord).bgr;             \n"
    "        gl_FragColor = vec4(tex, s_alpha);             \n"
    "    }                                                  \n"
    "    else {                                             \n"
    "        vec3 tex = texture2D(                          \n"
    "            frag_sampler, frag_coord).bgr;             \n"
    "        gl_FragColor = vec4(tex, 1.0);                 \n"
    "    }                                                  \n"
    "}                                                      \n";

#if defined(A30)
static cpu_clk_t cpu_clk[] = {
    {  96, 0x80000110 },
    { 144, 0x80000120 },
    { 192, 0x80000130 },
    { 216, 0x80000220 },
    { 240, 0x80000410 },
    { 288, 0x80000230 },
    { 336, 0x80000610 },
    { 360, 0x80000420 },
    { 384, 0x80000330 },
    { 432, 0x80000520 },
    { 480, 0x80000430 },
    { 504, 0x80000620 },
    { 528, 0x80000a10 },
    { 576, 0x80000530 },
    { 624, 0x80000c10 },
    { 648, 0x80000820 },
    { 672, 0x80000630 },
    { 720, 0x80000920 },
    { 768, 0x80000730 },
    { 792, 0x80000a20 },
    { 816, 0x80001010 },
    { 864, 0x80000830 },
    { 864, 0x80001110 },
    { 912, 0x80001210 },
    { 936, 0x80000c20 },
    { 960, 0x80000930 },
    { 1008, 0x80000d20 },
    { 1056, 0x80000a30 },
    { 1080, 0x80000e20 },
    { 1104, 0x80001610 },
    { 1152, 0x80000b30 },
    { 1200, 0x80001810 },
    { 1224, 0x80001020 },
    { 1248, 0x80000c30 },
    { 1296, 0x80001120 },
    { 1344, 0x80000d30 },
    { 1368, 0x80001220 },
    { 1392, 0x80001c10 },
    { 1440, 0x80000e30 },
    { 1488, 0x80001e10 },
    { 1512, 0x80001420 },
    { 1536, 0x80000f30 },
    { 1584, 0x80001520 },
    { 1632, 0x80001030 },
    { 1656, 0x80001620 },
    { 1728, 0x80001130 },
    { 1800, 0x80001820 },
    { 1824, 0x80001230 },
    { 1872, 0x80001920 },
    { 1920, 0x80001330 },
    { 1944, 0x80001a20 },
    { 2016, 0x80001430 },
    { 2088, 0x80001c20 },
    { 2112, 0x80001530 },
    { 2160, 0x80001d20 },
    { 2208, 0x80001630 },
    { 2232, 0x80001e20 },
    { 2304, 0x80001730 },
    { 2400, 0x80001830 },
    { 2496, 0x80001930 },
    { 2592, 0x80001a30 },
    { 2688, 0x80001b30 },
    { 2784, 0x80001c30 },
    { 2880, 0x80001d30 },
    { 2976, 0x80001e30 },
    { 3072, 0x80001f30 },
};

static int max_cpu_item = sizeof(cpu_clk) / sizeof(cpu_clk_t);
#endif
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

#if defined(QX1000) || defined(XT897)
void update_wayland_res(int w, int h)
{
    float c0 = 0;
    float c1 = 0;
    float x0 = 0;
    float y0 = 0;
    float scale = 0;

    debug("call %s()\n", __func__);

    FB_W = w;
    FB_H = h;
    myvideo.wl.info.w = FB_W;
    myvideo.wl.info.h = FB_H;
    myvideo.wl.info.size = myvideo.wl.info.w * myvideo.wl.info.h * 4;

    c0 = ((float)LCD_H) / myvideo.wl.info.w;
    c1 = ((float)LCD_W) / myvideo.wl.info.h;
    scale = c0 > c1 ? c1 : c0;
    if (scale <= 0) {
        scale = 1.0;
    }

    y0 = ((float)(myvideo.wl.info.w * scale) / LCD_H);
    x0 = ((float)(myvideo.wl.info.h * scale) / LCD_W);

    fg_vertices[0] = -x0;
    fg_vertices[1] = y0;
    fg_vertices[5] = -x0;
    fg_vertices[6] = -y0;
    fg_vertices[10] =  x0;
    fg_vertices[11] = -y0;
    fg_vertices[15] =  x0;
    fg_vertices[16] =  y0;

    memset(myvideo.wl.data, 0, LCD_W * LCD_H * 4);
    debug("new wayland width=%d, height=%d, scale=%.2f\n", w, h, scale);
}

static void* wl_thread(void* pParam)
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

static void cb_ping(void *dat, struct wl_shell_surface *shell_surf, uint32_t serial)
{
    wl_shell_surface_pong(shell_surf, serial);
}

static void cb_config(void *dat, struct wl_shell_surface *shell_surf, uint32_t edges, int32_t w, int32_t h)
{
}

static void cb_popup_done(void *dat, struct wl_shell_surface *shell_surf)
{
}

static const struct wl_shell_surface_listener cb_shell_surf = {
    cb_ping,
    cb_config,
    cb_popup_done
};

static void cb_handle(void *dat, struct wl_registry *reg, uint32_t id, const char *intf, uint32_t ver)
{
    if (strcmp(intf, "wl_compositor") == 0) {
        myvideo.wl.compositor = wl_registry_bind(reg, id, &wl_compositor_interface, 1);
    }
    else if (strcmp(intf, "wl_shell") == 0) {
        myvideo.wl.shell = wl_registry_bind(reg, id, &wl_shell_interface, 1);
    }
}

static void cb_remove(void *dat, struct wl_registry *reg, uint32_t id)
{
}

void quit_egl(void)
{
    myvideo.wl.init = 0;
    myvideo.wl.ready = 0;

    eglDestroySurface(myvideo.wl.egl.display, myvideo.wl.egl.surface);
    eglDestroyContext(myvideo.wl.egl.display, myvideo.wl.egl.context);
    wl_egl_window_destroy(myvideo.wl.egl.window);
    eglTerminate(myvideo.wl.egl.display);
    glDeleteShader(myvideo.wl.egl.vShader);
    glDeleteShader(myvideo.wl.egl.fShader);
    glDeleteProgram(myvideo.wl.egl.pObject);
}

void quit_wl(void)
{
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
}

void init_wl(void)
{
    pixel_filter = 0;

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
    wl_region_add(myvideo.wl.region, 0, 0, LCD_W, LCD_H);
    wl_surface_set_opaque_region(myvideo.wl.surface, myvideo.wl.region);
    myvideo.wl.egl.window = wl_egl_window_create(myvideo.wl.surface, LCD_W, LCD_H);
}

void init_egl(void)
{
    EGLint cnt = 0;
    EGLint major = 0;
    EGLint minor = 0;
    EGLConfig cfg = 0;

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

    glViewport(0, 0, LCD_W, LCD_H);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glVertexAttribPointer(myvideo.wl.egl.positionLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bg_vertices);
    glVertexAttribPointer(myvideo.wl.egl.texCoordLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bg_vertices[3]);
    glEnableVertexAttribArray(myvideo.wl.egl.positionLoc);
    glEnableVertexAttribArray(myvideo.wl.egl.texCoordLoc);
    glActiveTexture(GL_TEXTURE0);
    glUniform1i(myvideo.wl.egl.samplerLoc, 0);
}

static void* draw_thread(void *pParam)
{
    int pre_filter = -1;

    init_wl();
    init_egl();

    debug("call %s()\n", __func__);

    myvideo.wl.init = 1;
    while (is_wl_thread_running) {
        if (myvideo.wl.ready) {
            if (pre_filter != pixel_filter) {
                pre_filter = pixel_filter;
                if (pixel_filter) {
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
                }
                else {
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
                }
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            }

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
#endif

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(UT) || defined(GKD2) || defined(BRICK)
static void* prehook_cb_malloc(size_t size)
{
    static int idx = 0;

    void *r = NULL;
    uint32_t bpp = *((uint32_t *)myhook.var.sdl.bytes_per_pixel);

    debug("call %s()\n", __func__);

    if ((size == (NDS_W * NDS_H * bpp)) || (size == (NDS_Wx2 * NDS_Hx2 * bpp))) {
        r = myvideo.lcd.virt_addr[0][idx];
        idx += 1;
        idx %= 2;
    }
    else {
        r = malloc(size);
    }
    return r;
}

static void prehook_cb_free(void *ptr)
{
    int c0 = 0;
    int c1 = 0;
    int found = 0;

    debug("call %s()\n", __func__);

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

static void* prehook_cb_realloc(void *ptr, size_t size)
{
    void *r = NULL;
    uint32_t bpp = *((uint32_t *)myhook.var.sdl.bytes_per_pixel);

    debug("call %s()\n", __func__);

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
#endif

#if defined(MINI)
static int get_bat_val(void)
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

    FILE *fd = NULL;
    char buf[32] = {0};
    int r = 0;
    int curv = 0;

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

    FILE *fd = NULL;
    char buf[32] = {0};
    int r = 0;
    int curp = 0;

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

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (!memcmp(drastic_menu.item[cc].msg, P0, strlen(P0))) {
            return NDS_DRASTIC_MENU_MAIN;
        }
        else if (!memcmp(drastic_menu.item[cc].msg, P1, strlen(P1))) {
            return NDS_DRASTIC_MENU_OPTION;
        }
        else if (!memcmp(drastic_menu.item[cc].msg, P2, strlen(P2))) {
            return NDS_DRASTIC_MENU_CONTROLLER;
        }
        else if (!memcmp(drastic_menu.item[cc].msg, P3, strlen(P3))) {
            return NDS_DRASTIC_MENU_CONTROLLER2;
        }
        else if (!memcmp(drastic_menu.item[cc].msg, P4, strlen(P4))) {
            return NDS_DRASTIC_MENU_FIRMWARE;
        }
        else if (!memcmp(drastic_menu.item[cc].msg, P5, strlen(P5))) {
            return NDS_DRASTIC_MENU_CHEAT;
        }
        else if (!memcmp(drastic_menu.item[cc].msg, P6, strlen(P6))) {
            return NDS_DRASTIC_MENU_ROM;
        }
    }
    return -1;
}

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
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH << 1] = {0};

#if defined(TRIMUI)
    div = 2;
#endif

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        draw = 0;
        x = 90 / div;
        w = LINE_H / div;
        h = nds.enable_752x560 ? (115 / div) : (100 / div);

#if defined(TRIMUI)
        x = 30 / div;
#endif

        memset(buf, 0, sizeof(buf));
        p = &drastic_menu.item[cc];
        if (p->y == 201) {
            draw = 1;
#if defined(MINI) || defined(TRIMUI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
            sprintf(buf, "NDS %s", &p->msg[8]);
#else
            sprintf(buf, "%s", &p->msg[8]);
#endif
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
            sprintf(buf, "%s %s", to_lang("Load state"), &p->msg[13]);
        }
        else if (p->y == 328) {
            draw = 1;
            y = h + (5 * w);
            sprintf(buf, "%s %s", to_lang("Save state"), &p->msg[13]);
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

    y = 10;
#if defined(RG28XX) || defined(GKD2)
    sprintf(buf, "Rel "NDS_VER", Res %s", "640*480");
#endif

#if defined(BRICK)
    sprintf(buf, "Rel "NDS_VER", Res %s", "1024*768");
#endif

#if defined(A30) || defined(FLIP)
    if (nds.chk_bat) {
        sprintf(buf, "Rel "NDS_VER", Res %s, BAT %d%%", "640*480", get_bat_val());
    }
    else {
        sprintf(buf, "Rel "NDS_VER", Res %s", "640*480");
    }
#endif

#if defined(MINI)
    if (nds.chk_bat) {
        sprintf(buf, "Rel "NDS_VER", Res %s, BAT %d%%", nds.enable_752x560 ? "752*560" : "640*480", get_bat_val());
    }
    else {
        sprintf(buf, "Rel "NDS_VER", Res %s", nds.enable_752x560 ? "752*560" : "640*480");
    }
#endif

#if defined(TRIMUI)
    sprintf(buf, "Rel "NDS_VER", Res %s", "320*240");
#endif

#if defined(PANDORA)
    sprintf(buf, "Rel "NDS_VER", Res %s", "800*480");
#endif

#if defined(QX1000) || defined(XT897)
    sprintf(buf, "Rel "NDS_VER);
#endif

    draw_info(nds.menu.drastic.main, buf, 10, y / div, nds.menu.c1, 0);

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
            nds_load_state_index _func = (nds_load_state_index)myhook.fun.load_state_index;

#if defined(TRIMUI)
            sm = SDL_CreateRGBSurface(0, SM_W, SM_H, 16, 0, 0, 0, 0);
#endif

            memset(top, 0, len);
            memset(bottom, 0, len);
            _func((void*)myhook.var.system.base, slot, top, bottom, 1);
            t = SDL_CreateRGBSurfaceFrom(top, NDS_W, NDS_H, 16, NDS_W * 2, 0, 0, 0, 0);
            if (t) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
                rt.x = FB_W - (NDS_W + (nds.enable_752x560 ? 30 : 10));
                rt.y = nds.enable_752x560 ? h - 20 : 50;
                rt.w = NDS_W;
                rt.h = NDS_H;
                SDL_BlitSurface(t, NULL, nds.menu.drastic.main, &rt);
#endif
                SDL_FreeSurface(t);
            }

            t = SDL_CreateRGBSurfaceFrom(bottom, NDS_W, NDS_H, 16, NDS_W * 2, 0, 0, 0, 0);
            if (t) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
                rt.x = FB_W - (NDS_W + (nds.enable_752x560 ? 30 : 10));
                rt.y = nds.enable_752x560 ? (h + NDS_H) - 20 : 50 + NDS_H;
                rt.w = NDS_W;
                rt.h = NDS_H;
                SDL_BlitSurface(t, NULL, nds.menu.drastic.main, &rt);
#endif

#if defined(TRIMUI)
                SDL_SoftStretch(t, NULL, sm, NULL);

                rt.x = FB_W - (SM_W + 5);
                rt.y = (FB_H - SM_H) >> 1;
                rt.w = SM_W;
                rt.h = SM_H;
                SDL_BlitSurface(sm, NULL, nds.menu.drastic.main, &rt);
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

static int mark_double_spaces(char *p)
{
    int cc = 0;
    int len = strlen(p);

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

    for (cc=strlen(p) - 1; cc>=0; cc--) {
        if (p[cc] == ' ') {
            return &p[cc + 1];
        }
    }
    return NULL;
}

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
    SDL_Rect rt = {0};
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH] = {0};

#if defined(TRIMUI)
    div = 2;
#endif

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].bg > 0) {
            cursor = cc;
        }
    }

    if (cursor <= 6) {
        s0 = 1;
        s1 = 14;
    }
    else if (cursor >= (drastic_menu.cnt - 7)) {
        s0 = drastic_menu.cnt - 14;
        s1 = drastic_menu.cnt - 1;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        ww = LINE_H / div;

        if ((cc >= s0) && (cc < s1)) {
            y = (25 / div) + (cnt * ww);
            memset(buf, 0, sizeof(buf));
            p = &drastic_menu.item[cc];
        
            cnt+= 1;            
            if (p->bg) {
                rt.x = 5 / div;
                rt.y = y - (3 / div);
                rt.w = FB_W - (10 / div);
                rt.h = ww;
                SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                    (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
            }

            if (p->y <= NDS_Hx2) {
                strcpy(buf, to_lang(find_menu_string_tail(p->msg)));
                w = get_font_width(buf);
                draw_info(nds.menu.drastic.main, buf, FB_W - w - (ww / div), y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);

                mark_double_spaces(p->msg);
                strcpy(buf, to_lang(p->msg));
            }
            else {
                strcpy(buf, to_lang(p->msg));
            }
            draw_info(nds.menu.drastic.main, buf, ww / div, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
        }
    }
    return 0;
}

static int draw_drastic_menu_controller(void)
{
    int y = 0;
    int w = 0;
    int cc = 0;
    int div = 1;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = {0};
    int s0 = 0, s1 = 0;
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH] = {0};

#if defined(TRIMUI)
    div = 2;
#endif

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt;) {
        if ((drastic_menu.item[cc].y >= 240) && (drastic_menu.item[cc].y <= 376)) {
            if ((drastic_menu.item[cc + 1].bg > 0) || (drastic_menu.item[cc + 2].bg > 0)) {
                break;
            }
            cc+= 3;
        }
        else {
            if (drastic_menu.item[cc].bg > 0) {
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
    else if (cursor >= (24 - 7)) {
        s0 = 24 - 13;
        s1 = 24;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    cnt = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        w = LINE_H / div;
        p = &drastic_menu.item[cc];

        if ((p->y == 224) || (p->y == 232) || (p->y == 201)) {
            continue;
        }

        memset(buf, 0, sizeof(buf));
        if ((cnt >= s0) && (cnt < s1)) {
            y = (25 / div) + ((cnt - s0) * w);

            if ((p->y >= 240) && (p->y <= 376)) {
                if (drastic_menu.item[cc + 1].bg || drastic_menu.item[cc + 2].bg) {
                    int sum = drastic_menu.item[cc + 1].bg + drastic_menu.item[cc + 2].bg;
                    uint32_t c = sum > 500 ? 0xff0000 : nds.menu.c2;

                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = FB_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
                }
                draw_info(nds.menu.drastic.main, p->msg, 20 / div, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
                if ((p->y >= 240) && (p->y <= 376)) {
                    if (nds.enable_752x560) {
                        draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 1].msg), 320 / div, y, drastic_menu.item[cc + 1].bg ? nds.menu.c0 : nds.menu.c1, 0);
                        draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 2].msg), 550 / div, y, drastic_menu.item[cc + 2].bg ? nds.menu.c0 : nds.menu.c1, 0);
                    }
                    else {
                        draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 1].msg), 300 / div, y, drastic_menu.item[cc + 1].bg ? nds.menu.c0 : nds.menu.c1, 0);
                        draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 2].msg), 480 / div, y, drastic_menu.item[cc + 2].bg ? nds.menu.c0 : nds.menu.c1, 0);
                    }
                }
            }
            else {
                if (p->bg) {
                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = FB_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                        (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
                }
                draw_info(nds.menu.drastic.main, to_lang(p->msg), 20 / div, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
        }

        cnt+= 1;
        if ((p->y >= 240) && (p->y <= 376)) {
            cc+= 2;
        }
    }
    return 0;
}

static int draw_drastic_menu_controller2(void)
{
    int y = 0;
    int w = 0;
    int cc = 0;
    int cnt = 0;
    int div = 1;
    int cursor = 0;
    SDL_Rect rt = {0};
    int s0 = 0, s1 = 0;
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH] = {0};

#if defined(TRIMUI)
    div = 2;
#endif

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt;) {
        if ((drastic_menu.item[cc].y >= 240) && (drastic_menu.item[cc].y <= NDS_Hx2)) {
            if ((drastic_menu.item[cc + 1].bg > 0) || (drastic_menu.item[cc + 2].bg > 0)) {
                break;
            }
            cc+= 3;
        }
        else {
            if (drastic_menu.item[cc].bg > 0) {
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
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        w = LINE_H / div;
        p = &drastic_menu.item[cc];

        if ((p->y == 224) || (p->y == 232) || (p->y == 201)) {
            continue;
        }

        memset(buf, 0, sizeof(buf));
        if ((cnt >= s0) && (cnt < s1)) {
            y = (25 / div) + ((cnt - s0) * w);

            if ((p->y >= 240) && (p->y <= NDS_Hx2)) {
                if (drastic_menu.item[cc + 1].bg || drastic_menu.item[cc + 2].bg) {
                    int sum = drastic_menu.item[cc + 1].bg + drastic_menu.item[cc + 2].bg;
                    uint32_t c = sum > 500 ? 0xff0000 : nds.menu.c2;

                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = FB_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
                }
                draw_info(nds.menu.drastic.main, p->msg, 20 / div, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
                if ((p->y >= 240) && (p->y <= NDS_Hx2)) {
                    if (nds.enable_752x560) {
                        draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 1].msg), 320 / div, y, drastic_menu.item[cc + 1].bg ? nds.menu.c0 : nds.menu.c1, 0);
                        draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 2].msg), 550 / div, y, drastic_menu.item[cc + 2].bg ? nds.menu.c0 : nds.menu.c1, 0);
                    }
                    else {
                        draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 1].msg), 300 / div, y, drastic_menu.item[cc + 1].bg ? nds.menu.c0 : nds.menu.c1, 0);
                        draw_info(nds.menu.drastic.main, to_lang(drastic_menu.item[cc + 2].msg), 480 / div, y, drastic_menu.item[cc + 2].bg ? nds.menu.c0 : nds.menu.c1, 0);
                    }
                }
            }
            else {
                if (p->bg) {
                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = FB_W - (10 / div);
                    rt.h = w;
                    SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                        (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
                }
                draw_info(nds.menu.drastic.main, to_lang(p->msg), 20 / div, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            }
        }

        cnt+= 1;
        if ((p->y >= 240) && (p->y <= NDS_Hx2)) {
            cc+= 2;
        }
    }
    return 0;
}

static int draw_drastic_menu_firmware(void)
{
    int t = 0;
    int w = 0;
    int y = 0;
    int ww = 30;
    int cc = 0;
    int div = 1;
    int cnt = 0;
    SDL_Rect rt = {0};
    cust_menu_sub_t *p = NULL;
    char buf[MAX_PATH] = {0};
    char name[MAX_PATH] = {0};

#if defined(TRIMUI)
    div = 2;
#endif

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        ww = LINE_H / div;
        p = &drastic_menu.item[cc];
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
                rt.w = FB_W - (10 / div);
                rt.h = ww;
                SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 
                    (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
            }

            cnt+= 1;
            if (p->y == 280) {
                mark_double_spaces(p->msg);
                strcpy(buf, to_lang(p->msg));
            }
            else if (p->y == 296) {
                w = get_font_width(name);
                draw_info(nds.menu.drastic.main, name, FB_W - w - (ww / div), 25 / div, nds.menu.c1, 0);

                w = strlen(p->msg);
                p->msg[w - 3] = 0;
                for (t=14; t<w; t++) {
                    if (p->msg[t] != ' ') {
                        strcpy(buf, &p->msg[t]);
                        break;
                    }
                }
                w = get_font_width(buf);
                draw_info(nds.menu.drastic.main, buf, FB_W - w - (ww / div), y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);

                strcpy(buf, to_lang("Favorite Color"));
            }
            else if (p->y <= 312) {
                strcpy(buf, to_lang(find_menu_string_tail(p->msg)));
                w = get_font_width(buf);
                draw_info(nds.menu.drastic.main, buf, FB_W - w - (ww / div), y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);

                mark_double_spaces(p->msg);
                strcpy(buf, to_lang(p->msg));
            }
            else {
                strcpy(buf, to_lang(p->msg));
            }
            draw_info(nds.menu.drastic.main, buf, ww / div, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
        }
    }
    return 0;
}

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
    char buf[MAX_PATH] = {0};

#if defined(TRIMUI)
    div = 2;
#endif
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

    s0 = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].x == 10) {
            memcpy(&drastic_menu.item[s0], &drastic_menu.item[cc], sizeof(drastic_menu.item[cc]));
            s0+= 1;
        }
        memset(&drastic_menu.item[cc], 0, sizeof(drastic_menu.item[cc]));
    }
    drastic_menu.cnt = s0;

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].bg > 0) {
            cursor = cc;
        }
    }

    if (drastic_menu.cnt == 0) {
        return 0;
    }

    if (drastic_menu.cnt < 13) {
        s0 = 0;
        s1 = drastic_menu.cnt;
    }
    else if (cursor <= 6) {
        s0 = 0;
        s1 = 13;
    }
    else if (cursor >= (drastic_menu.cnt - 7)) {
        s0 = drastic_menu.cnt - 13;
        s1 = drastic_menu.cnt;
    }
    else {
        s0 = cursor - 6;
        s1 = cursor + 7;
    }

    cnt = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        w = LINE_H / div;
        memset(buf, 0, sizeof(buf));
        p = &drastic_menu.item[cc];

        if (p->x != 10) {
            continue;
        }

        if ((cc >= s0) && (cc < s1)) {
            y = (25 / div) + (cnt * w);

            if (p->bg) {
                rt.x = 5 / div;
                rt.y = y - (3 / div);
                rt.w = FB_W - (10 / div);
                rt.h = w;
                SDL_FillRect(nds.menu.drastic.main, &rt, SDL_MapRGB(nds.menu.drastic.main->format,
                    (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
            }

            cnt+= 1;
            draw_info(nds.menu.drastic.main, p->msg, w / div, y, p->bg ? nds.menu.c0 : nds.menu.c1, 0);
            if (p->cheat && nds.menu.drastic.yes && nds.menu.drastic.no) {
                rt.x = FB_W - nds.menu.drastic.yes->w - (w / div);
                rt.y = y - 1;
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface((p->enable > 0 ) ? nds.menu.drastic.yes : nds.menu.drastic.no, NULL, nds.menu.drastic.main, &rt);
            }
        }
    }
    return 0;
}

static int draw_drastic_menu_rom(void)
{
    int y = 0;
    int w = 0;
    int cc = 0;
    int div = 1;
    int chk = 0;
    int all = 0;
    int cnt = 0;
    int cursor = 0;
    SDL_Rect rt = {0};
    int s0 = 0, s1 = 0;
    cust_menu_sub_t *p = NULL;

#if defined(TRIMUI)
    div = 2;
#endif

    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].x == 10) {
            if (drastic_menu.item[cc].bg > 0) {
                chk = 10;
                break;
            }
        }
        if (drastic_menu.item[cc].x == 587) {
            if (drastic_menu.item[cc].bg > 0) {
                chk = 587;
                break;
            }
        }
    }

    cursor = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].x == chk) {
            if (drastic_menu.item[cc].bg > 0) {
                break;
            }
            cursor+= 1;
        }
    }

    all = 0;
    for (cc=0; cc<drastic_menu.cnt; cc++) {
        if (drastic_menu.item[cc].x == chk) {
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

int process_drastic_menu(void)
{
    int layer = 0;

    debug("call %s()\n", __func__);

    layer = get_current_menu_layer();
    if (layer == NDS_DRASTIC_MENU_MAIN) {
        SDL_SoftStretch(nds.menu.drastic.bg0, NULL, nds.menu.drastic.main, NULL);
    }
    else {
        SDL_SoftStretch(nds.menu.drastic.bg1, NULL, nds.menu.drastic.main, NULL);
    }

    debug("cur layer=%d\n", layer);
    switch (layer) {
    case NDS_DRASTIC_MENU_MAIN:
        draw_drastic_menu_main();
        break;
    case NDS_DRASTIC_MENU_OPTION:
        draw_drastic_menu_option();
        break;
    case NDS_DRASTIC_MENU_CONTROLLER:
        draw_drastic_menu_controller();
        break;
    case NDS_DRASTIC_MENU_CONTROLLER2:
        draw_drastic_menu_controller2();
        break;
    case NDS_DRASTIC_MENU_FIRMWARE:
        draw_drastic_menu_firmware();
        break;
    case NDS_DRASTIC_MENU_CHEAT:
        draw_drastic_menu_cheat();
        break;
    case NDS_DRASTIC_MENU_ROM:
        draw_drastic_menu_rom();
        break;
    default:
        exit(-1);
        return 0;
    }
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    nds.update_menu = 1;
#else
    flush_lcd(-1, nds.menu.drastic.main->pixels, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->pitch, 0, E_MI_GFX_ROTATE_180);
    flip_lcd();
    flush_lcd(-1, nds.menu.drastic.main->pixels, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->pitch, 0, E_MI_GFX_ROTATE_180);
    flip_lcd();
#endif

    memset(&drastic_menu, 0, sizeof(drastic_menu));
    return 0;
}

static int process_screen(void)
{
    static int need_loadstate = 15;
    static int show_info_cnt = 0;
    static int cur_fb_w = 0;
    static int cur_volume = 0;
    static int cur_dis_mode = 0;
    static int cur_touchpad = 0;
    static int cur_theme_sel = 0;
    static int cur_pixel_filter = 0;
    static int pre_dis_mode = NDS_DIS_MODE_VH_S0;
    static int pre_hres_mode = NDS_DIS_MODE_HRES0;
    static char show_info_buf[MAX_PATH << 1] = {0};
#if defined(MINI) || defined(A30) || defined(FLIP)
    static int bat_chk_cnt = BAT_CHK_CNT;
#endif
    static int col_fg = 0xe0e000;
    static int col_bg = 0x000000;

    int idx = 0;
    int screen_cnt = 0;
    char buf[MAX_PATH] = {0};

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    int cur_sel = myvideo.lcd.cur_sel ^ 1;
#endif

    debug("call %s()\n", __func__);

#if defined(MINI) || defined(PANDORA) || defined(QX1000) || defined(XT897) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    screen_cnt = 2;
#else
    screen_cnt = 1;
#endif

    if (nds.auto_state > 0) {
        if (need_loadstate > 0) {
            need_loadstate-= 1;
            if (need_loadstate == 0) {
                load_state(nds.auto_slot);
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
#if defined(QX1000) || defined(XT897)
        update_wayland_res(NDS_W * 2, NDS_H);
#endif
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
            sprintf(show_info_buf, " %d x %d ", FB_W, FB_H);
        }
        else if (cur_volume != nds.volume) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s %d ", to_lang("Volume"), nds.volume);
        }
        else if (cur_touchpad != nds.pen.pos) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s %d ", to_lang("Touchpad"), nds.pen.pos);
        }
        else if (cur_theme_sel != nds.theme.sel) {
            show_info_cnt = 50;
            if ((nds.theme.max > 0) && (nds.theme.sel < nds.theme.max)) {
                if (get_dir_path(nds.theme.path, nds.theme.sel, buf) == 0) {
                    int off = strlen(nds.theme.path);
                    sprintf(show_info_buf, " %s %s ", to_lang("Wallpaper"), &buf[off + 1]);
                }
                else {
                    sprintf(show_info_buf, " %s %d ", to_lang("Wallpaper"), nds.theme.sel);
                }
            }
            else {
                sprintf(show_info_buf, " %s %s ", to_lang("Wallpaper"), to_lang("None"));
            }
        }
        else if (cur_pixel_filter != pixel_filter) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s ", to_lang(pixel_filter ? "Pixel" : "Blur"));
        }
        else if (nds.shot.take) {
            show_info_cnt = 50;
            nds.shot.take = 0;
            sprintf(show_info_buf, " %s ", to_lang("Take Screenshot"));
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
            sprintf(show_info_buf, " %s ", to_lang("Quick Save"));
            nds.state&= ~NDS_STATE_QSAVE;
        }
        else if (nds.state & NDS_STATE_QLOAD) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s ", to_lang("Quick Load"));
            nds.state&= ~NDS_STATE_QLOAD;
        }
        else if (nds.state & NDS_STATE_FF) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s ", to_lang("Fast Forward"));
            nds.state&= ~NDS_STATE_FF;
        }
    }

    if (nds.chk_bat) {
#if defined(MINI) || defined(A30) || defined(FLIP)
        bat_chk_cnt -= 1;
        if (bat_chk_cnt <= 0) {
            int v = get_bat_val();

            if (v <= 10) {
                show_info_cnt = 50;
                col_fg = 0xffffff;
                col_bg = 0xff0000;
                sprintf(show_info_buf, " %s %d%% ", to_lang("Battery"), v);
            }

            bat_chk_cnt = BAT_CHK_CNT;
            if (v <= 5) {
                bat_chk_cnt /= 2;
            }
        }
#endif
    }

    nds.screen.bpp = *((uint32_t *)myhook.var.sdl.bytes_per_pixel);
    nds.screen.init = *((uint32_t *)myhook.var.sdl.needs_reinitializing);

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

        nds.screen.hres_mode[idx] = idx ?
            *((uint8_t *)myhook.var.sdl.screen[1].hires_mode):
            *((uint8_t *)myhook.var.sdl.screen[0].hires_mode);

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        nds.screen.pixels[idx] = myvideo.lcd.virt_addr[cur_sel][idx];
#else
        nds.screen.pixels[idx] = (idx == 0) ?
            (uint32_t *)(*((uint32_t *)myhook.var.sdl.screen[0].pixels)):
            (uint32_t *)(*((uint32_t *)myhook.var.sdl.screen[1].pixels));
#endif

        if (nds.screen.hres_mode[idx]) {
            srt.w = NDS_Wx2;
            srt.h = NDS_Hx2;
            nds.screen.pitch[idx] = nds.screen.bpp * srt.w;
            if (nds.hres_mode == 0) {
                nds.pen.pos = 0;
                nds.hres_mode = 1;
                pre_dis_mode = nds.dis_mode;
                nds.dis_mode = pre_hres_mode;
#if defined(QX1000) || defined(XT897)
                update_wayland_res(NDS_Wx2, NDS_Hx2);
#endif
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
#if defined(QX1000) || defined(XT897)
                update_wayland_res(NDS_W * 2, NDS_H);
#endif
            }
        }

#if defined(QX1000)
#elif defined(XT897)
#elif defined(TRIMUI)
#elif defined(PANDORA)
#elif defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        switch (nds.dis_mode) {
        case NDS_DIS_MODE_VH_T0:
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
        case NDS_DIS_MODE_VH_T1:
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
        case NDS_DIS_MODE_S0:
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
        case NDS_DIS_MODE_S1:
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
        case NDS_DIS_MODE_V0:
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
        case NDS_DIS_MODE_V1:
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
        case NDS_DIS_MODE_H0:
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
        case NDS_DIS_MODE_H1:
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
        case NDS_DIS_MODE_VH_S0:
            drt.x = screen1 ? 160 : 0;
            drt.y = screen1 ? 120 : 0;
            drt.w = screen1 ? (FB_W - 160) : 160;
            drt.h = screen1 ? (FB_H - 120) : 120;
            break;
        case NDS_DIS_MODE_VH_S1:
            drt.x = screen1 ? NDS_W : 0;
            drt.y = screen1 ? NDS_H : 0;
            drt.w = screen1 ? (FB_W - NDS_W) : NDS_W;
            drt.h = screen1 ? (FB_H - NDS_H) : NDS_H;
            break;
        case NDS_DIS_MODE_VH_S2:
            drt.w = screen1 ? (FB_W - 160) : 160;
            drt.h = screen1 ? (FB_H - 120) : 120;
            drt.x = screen1 ? ((FB_W - drt.w) / 2) : ((FB_W - drt.w) / 2);
            drt.y = screen1 ? 120 : 0;
            break;
        case NDS_DIS_MODE_VH_S3:
            drt.w = screen1 ? (FB_W - 512) : 512;
            drt.h = screen1 ? (FB_H - 384) : 384;
            drt.x = screen1 ? ((FB_W - drt.w) / 2) : ((FB_W - drt.w) / 2);
            drt.y = screen1 ? 0 : FB_H - 384;
            break;
        case NDS_DIS_MODE_VH_S4:
            drt.w = screen1 ? (FB_W - 512) : 512;
            drt.h = screen1 ? (FB_H - 384) : 384;
            drt.x = screen1 ? (FB_W - drt.w) : 0;
            drt.y = screen1 ? 0 : FB_H - 384;
            break;
        case NDS_DIS_MODE_VH_S5:
            drt.w = screen1 ? (FB_W - 512) : 512;
            drt.h = screen1 ? (FB_H - 384) : 384;
            drt.x = screen1 ? 0 : (FB_W - drt.w);
            drt.y = screen1 ? 0 : FB_H - 384;
            break;
        case NDS_DIS_MODE_VH_C0:
            drt.w = screen0 ? NDS_W : (FB_W - NDS_W);
            drt.h = screen0 ? NDS_H : (FB_H - NDS_H);
            drt.x = screen0 ? ((FB_W - drt.w) / 2) : ((FB_W - drt.w) / 2);
            drt.y = screen0 ? 0 : NDS_H;
            break;
        case NDS_DIS_MODE_VH_C1:
            drt.w = screen0 ? NDS_W : (FB_W - NDS_W);
            drt.h = screen0 ? NDS_H : (FB_H - NDS_H);
            drt.x = screen0 ? 0 : NDS_W;
            drt.y = screen0 ? ((FB_H - drt.h) / 2) : ((FB_H - drt.h) / 2);
            break;
        case NDS_DIS_MODE_HH0:
        case NDS_DIS_MODE_HH1:
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
            rotate = (nds.dis_mode == NDS_DIS_MODE_HH0) ? E_MI_GFX_ROTATE_90 : E_MI_GFX_ROTATE_270;
            break;
        case NDS_DIS_MODE_HH2:
        case NDS_DIS_MODE_HH3:
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
            rotate = (nds.dis_mode == NDS_DIS_MODE_HH2) ? E_MI_GFX_ROTATE_90 : E_MI_GFX_ROTATE_270;
            break;
        case NDS_DIS_MODE_HRES0:
            drt.w = NDS_Wx2;
            drt.h = NDS_Hx2;
            drt.x = (FB_W - drt.w) / 2;
            drt.y = (FB_H - drt.h) / 2;
            break;
        case NDS_DIS_MODE_HRES1:
            drt.x = 0;
            drt.y = 0;
            drt.w = FB_W;
            drt.h = FB_H;
            break;
        }
#else
        debug("unsupported platform\n");
        return 0;
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (rotate == E_MI_GFX_ROTATE_180) {
            drt.y = (DEF_FB_H - drt.y) - drt.h;
            drt.x = (DEF_FB_W - drt.x) - drt.w;
        }
        else if (rotate == E_MI_GFX_ROTATE_90) {
            drt.x = (drt.x == 0) ? 320 : 0;
        }

#if defined(A30) || defined(FLIP)
        if (show_pen && ((myevent.mode == NDS_TOUCH_MODE) || (nds.joy.show_cnt && (nds.joy.mode == MYJOY_MODE_STYLUS)))) {
#else
        if (show_pen && (myevent.mode == NDS_TOUCH_MODE)) {
#endif
#else
        if (show_pen && (myevent.mode == NDS_TOUCH_MODE)) {
#endif
            draw_pen(nds.screen.pixels[idx], srt.w, nds.screen.pitch[idx]);

#if defined(A30) || defined(FLIP)
            if (nds.joy.show_cnt && (nds.joy.mode == MYJOY_MODE_STYLUS)) {
                nds.joy.show_cnt -= 1;
            }
#endif
        }

#if defined(A30) || defined(RG28XX) || defined(FLIP)
        if ((idx == 0) && (nds.alpha.border > 0) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
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

        glBindTexture(GL_TEXTURE_2D, myvideo.texID[idx]);
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

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
            flush_lcd(idx, nds.screen.pixels[idx], srt, drt, nds.screen.pitch[idx], 0, rotate);
#else
            flush_lcd(-1, nds.screen.pixels[idx], srt, drt, nds.screen.pitch[idx], 0, rotate);
#endif

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
            switch (nds.dis_mode) {
            case NDS_DIS_MODE_VH_T0:
                drt.x = 0;
                drt.y = 0;
                drt.w = 160;
                drt.h = 120;
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
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
                flush_lcd(TEXTURE_LCD0, nds.screen.pixels[0], srt, drt, nds.screen.pitch[0], 1, rotate);
#else
                flush_lcd(-1, nds.screen.pixels[0], srt, drt, nds.screen.pitch[0], 1, rotate);
#endif
                break;
            case NDS_DIS_MODE_VH_T1:
                drt.x = 0;
                drt.y = 0;
                drt.w = NDS_W;
                drt.h = NDS_H;
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
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
                flush_lcd(TEXTURE_LCD0, nds.screen.pixels[0], srt, drt, nds.screen.pitch[0], 1, rotate);
#else 
                flush_lcd(-1, nds.screen.pixels[0], srt, drt, nds.screen.pitch[0], 1, rotate);
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
        flush_lcd(-1, fps_info->pixels, fps_info->clip_rect, rt, fps_info->pitch, 0, E_MI_GFX_ROTATE_180);
    }

#if defined(TRIMUI)
    if (need_restore) {
        need_restore = 0;
        nds.dis_mode = pre_dismode;
        disp_resize();
    }
#endif

    if (nds.screen.init) {
        nds_set_screen_menu_off _func = (nds_set_screen_menu_off)myhook.fun.set_screen_menu_off;
        _func();
    }
    flip_lcd();
    return 0;
}

void prehook_cb_blit_screen_menu(uint16_t *src, uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
}

void prehook_cb_update_screen(void)
{
    static int prepare_time = 30;

    debug("call %s(%d)\n", __func__, prepare_time);

    if (prepare_time) {
        prepare_time -= 1;
    }
    else if (nds.update_screen == 0) {
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        myvideo.lcd.cur_sel ^= 1;
        *((uint32_t *)myhook.var.sdl.screen[0].pixels) = (uint32_t)myvideo.lcd.virt_addr[myvideo.lcd.cur_sel][0];
        *((uint32_t *)myhook.var.sdl.screen[1].pixels) = (uint32_t)myvideo.lcd.virt_addr[myvideo.lcd.cur_sel][1];
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        nds.menu.drastic.enable = 0;
#endif
#endif
        nds.update_screen = 1;
    }
}

void prehook_cb_print_string(char *p, uint32_t fg, uint32_t bg, uint32_t x, uint32_t y)
{
    int w = 0, h = 0;
    SDL_Color col = {0};
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    static int fps_cnt = 0;

    debug("call %s(p=\"%s\", fg=0x%x, bg=0x%x, x=%d, y=%d)\n", __func__, p, fg, bg, x, y);

    if (p && (strlen(p) > 0)) {
        if (drastic_menu.cnt < MAX_MENU_LINE) {
            drastic_menu.item[drastic_menu.cnt].x = x;
            drastic_menu.item[drastic_menu.cnt].y = y;
            drastic_menu.item[drastic_menu.cnt].fg = fg;
            drastic_menu.item[drastic_menu.cnt].bg = bg;
            strcpy(drastic_menu.item[drastic_menu.cnt].msg, p);
            drastic_menu.cnt+= 1;
        }
        debug("x=%d, y=%d, fg=0x%x, bg=0x%x, \'%s\'\n", x, y, fg, bg, p);
    }

    if ((x == 0) && (y == 0) && (fg == 0xffff) && (bg == 0x0000)) {
        if (fps_cnt++ > 60) {
            fps_cnt = 0;

            w = strlen(p);
            for (h=w-1; h>=0; h--) {
                if (p[h] == ' ') {
                    p[h] = 0;
                    break;
                }
            }

            col.r = 0xcc;
            col.g = 0xcc;
            col.b = 0x00;
            TTF_SizeUTF8(nds.font, p, &w, &h);
            t0 = TTF_RenderUTF8_Solid(nds.font, p, col);
            if (t0) {
                t1 = SDL_CreateRGBSurface(SDL_SWSURFACE, t0->w, t0->h, 32, 0, 0, 0, 0);
                if (t1) {
                    SDL_FillRect(t1, &t1->clip_rect, 0x000000);
                    SDL_BlitSurface(t0, NULL, t1, NULL);

                    if (fps_info) {
                        SDL_FreeSurface(fps_info);
                    }
                    fps_info = SDL_ConvertSurface(t1, cvt->format, 0);
                    SDL_FreeSurface(t1);
                }
                SDL_FreeSurface(t0);
            }
            show_fps = 1;
        }
    }
}

void prehook_cb_savestate_pre(void)
{
#if !defined(UT) && !defined(PANDORA)
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

void prehook_cb_savestate_post(void)
{
#if !defined(UT) && !defined(PANDORA)
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
    static int running = 0;

    debug("call %s(sig=%d)\n", __func__, sig);

    if (!running) {
        running = 1;
        quit_drastic();
    }
}

#if defined(UT)
TEST(sdl2_video, sigterm_handler)
{
    sigterm_handler(0);
    TEST_PASS();
}
#endif

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
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    int pre_filter = 0;
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

    debug("call %s()\n", __func__);

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
    myvideo.eglDisplay = myvideo.drm.pfn(EGL_PLATFORM_GBM_KHR, myvideo.drm.gbm, NULL);
    eglInitialize(myvideo.eglDisplay, &major, &minor);
    eglBindAPI(EGL_OPENGL_ES_API);
    eglGetConfigs(myvideo.eglDisplay, NULL, 0, &cnt);
    eglChooseConfig(myvideo.eglDisplay, surf_cfg, &cfg, 1, &cnt);

    myvideo.eglSurface = eglCreateWindowSurface(myvideo.eglDisplay, cfg, (EGLNativeWindowType)myvideo.drm.gs, NULL);
    myvideo.eglContext = eglCreateContext(myvideo.eglDisplay, cfg, EGL_NO_CONTEXT, ctx_cfg);
    eglMakeCurrent(myvideo.eglDisplay, myvideo.eglSurface, myvideo.eglSurface, myvideo.eglContext);

    myvideo.vShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(myvideo.vShader, 1, &vert_shader_src, NULL);
    glCompileShader(myvideo.vShader);

    myvideo.fShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(myvideo.fShader, 1, &frag_shader_src, NULL);
    glCompileShader(myvideo.fShader);
    
    myvideo.pObject = glCreateProgram();
    glAttachShader(myvideo.pObject, myvideo.vShader);
    glAttachShader(myvideo.pObject, myvideo.fShader);
    glLinkProgram(myvideo.pObject);
    glUseProgram(myvideo.pObject);

    myvideo.posLoc = glGetAttribLocation(myvideo.pObject, "vert_pos");
    myvideo.texLoc = glGetAttribLocation(myvideo.pObject, "vert_coord");
    myvideo.samLoc = glGetUniformLocation(myvideo.pObject, "frag_sampler");
    myvideo.alphaLoc = glGetUniformLocation(myvideo.pObject, "s_alpha");

    glUniform1i(myvideo.samLoc, 0);
    glUniform1f(myvideo.alphaLoc, 0.0);

    glGenTextures(TEXTURE_MAX, myvideo.texID);
    glBindTexture(GL_TEXTURE_2D, myvideo.texID[TEXTURE_LCD0]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glViewport(0, 0, DEF_FB_W, DEF_FB_H);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnableVertexAttribArray(myvideo.posLoc);
    glEnableVertexAttribArray(myvideo.texLoc);
    glUniform1i(myvideo.samLoc, 0);
    glUniform1f(myvideo.alphaLoc, 0.0);

    pixel_filter = 0;
    myvideo.lcd.virt_addr[0][0] = malloc(SCREEN_DMA_SIZE);
    myvideo.lcd.virt_addr[0][1] = malloc(SCREEN_DMA_SIZE);
    myvideo.lcd.virt_addr[1][0] = malloc(SCREEN_DMA_SIZE);
    myvideo.lcd.virt_addr[1][1] = malloc(SCREEN_DMA_SIZE);
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
  
    myvideo.eglDisplay = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    eglInitialize(myvideo.eglDisplay, &egl_major, &egl_minor);
    eglChooseConfig(myvideo.eglDisplay, config_attribs, &myvideo.eglConfig, 1, &num_configs);
    myvideo.eglSurface = eglCreateWindowSurface(myvideo.eglDisplay, myvideo.eglConfig, 0, window_attributes);
    myvideo.eglContext = eglCreateContext(myvideo.eglDisplay, myvideo.eglConfig, EGL_NO_CONTEXT, context_attributes);
    eglMakeCurrent(myvideo.eglDisplay, myvideo.eglSurface, myvideo.eglSurface, myvideo.eglContext);
  
    myvideo.vShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(myvideo.vShader, 1, &vert_shader_src, NULL);
    glCompileShader(myvideo.vShader);
  
    myvideo.fShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(myvideo.fShader, 1, &frag_shader_src, NULL);
    glCompileShader(myvideo.fShader);
   
    myvideo.pObject = glCreateProgram();
    glAttachShader(myvideo.pObject, myvideo.vShader);
    glAttachShader(myvideo.pObject, myvideo.fShader);
    glLinkProgram(myvideo.pObject);
    glUseProgram(myvideo.pObject);

    eglSwapInterval(myvideo.eglDisplay, 1);
    myvideo.posLoc = glGetAttribLocation(myvideo.pObject, "vert_pos");
    myvideo.texLoc = glGetAttribLocation(myvideo.pObject, "vert_coord");
    myvideo.samLoc = glGetUniformLocation(myvideo.pObject, "frag_sampler");
    myvideo.alphaLoc = glGetUniformLocation(myvideo.pObject, "s_alpha");

    glGenTextures(TEXTURE_MAX, myvideo.texID);

    glViewport(0, 0, DEF_FB_H, DEF_FB_W);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnableVertexAttribArray(myvideo.posLoc);
    glEnableVertexAttribArray(myvideo.texLoc);
    glUniform1i(myvideo.samLoc, 0);
    glUniform1f(myvideo.alphaLoc, 0.0);

    pixel_filter = 0;
    myvideo.lcd.virt_addr[0][0] = malloc(SCREEN_DMA_SIZE);
    myvideo.lcd.virt_addr[0][1] = malloc(SCREEN_DMA_SIZE);
    myvideo.lcd.virt_addr[1][0] = malloc(SCREEN_DMA_SIZE);
    myvideo.lcd.virt_addr[1][1] = malloc(SCREEN_DMA_SIZE);
    debug("lcd[0] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[0][0]);
    debug("lcd[0] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[0][1]);
    debug("lcd[1] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[1][0]);
    debug("lcd[1] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[1][1]);
#endif

#if defined(GKD2) || defined(BRICK)
    myvideo.lcd.virt_addr[0][0] = malloc(SCREEN_DMA_SIZE);
    myvideo.lcd.virt_addr[0][1] = malloc(SCREEN_DMA_SIZE);
    myvideo.lcd.virt_addr[1][0] = malloc(SCREEN_DMA_SIZE);
    myvideo.lcd.virt_addr[1][1] = malloc(SCREEN_DMA_SIZE);

    debug("lcd[0] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[0][0]);
    debug("lcd[0] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[0][1]);
    debug("lcd[1] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[1][0]);
    debug("lcd[1] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[1][1]);
#endif

    while (is_video_thread_running) {
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (nds.menu.enable) {
            if (nds.update_menu) {
                debug("update sdl2 menu\n");

                nds.update_menu = 0;
                pre_filter = pixel_filter;
                pixel_filter = 0;
                flush_lcd(-1, cvt->pixels, cvt->clip_rect, cvt->clip_rect, cvt->pitch, 0, E_MI_GFX_ROTATE_180);
                flip_lcd();
                pixel_filter = pre_filter;
            }
        }
        else if (nds.menu.drastic.enable) {
            if (nds.update_menu) {
                debug("update drastic menu\n");

                nds.update_menu = 0;
                pre_filter = pixel_filter;
                pixel_filter = 0;
                flush_lcd(-1, nds.menu.drastic.main->pixels, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->clip_rect, nds.menu.drastic.main->pitch, 0, 0);
                flip_lcd();
                pixel_filter = pre_filter;
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

#if defined(FLIP)
    glDeleteTextures(TEXTURE_MAX, myvideo.texID);
    eglMakeCurrent(myvideo.eglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroySurface(myvideo.eglDisplay, myvideo.eglSurface);
    eglDestroyContext(myvideo.eglDisplay, myvideo.eglContext);

    eglTerminate(myvideo.eglDisplay);
    glDeleteShader(myvideo.vShader);
    glDeleteShader(myvideo.fShader);
    glDeleteProgram(myvideo.pObject);

    drmModeRmFB(myvideo.drm.fd, myvideo.drm.fb); 
    drmModeFreeCrtc(myvideo.drm.crtc);
    drmModeFreeEncoder(myvideo.drm.enc);
    drmModeFreeConnector(myvideo.drm.conn);
    drmModeFreeResources(myvideo.drm.res);
    close(myvideo.drm.fd);
#endif

#if defined(A30) || defined(RG28XX)
    glDeleteTextures(TEXTURE_MAX, myvideo.texID);
    eglMakeCurrent(myvideo.eglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroyContext(myvideo.eglDisplay, myvideo.eglContext);
    eglDestroySurface(myvideo.eglDisplay, myvideo.eglSurface);
    eglTerminate(myvideo.eglDisplay);

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
        sprintf(buf, "%s/%s", nds.lang.path, lang);
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
                    debug("lang=\"%s\", len=%d\n", translate[cc], len);
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
            debug("failed to open lang folder \'%s\'\n", nds.lang.path);
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

            debug("found lang \'lang[%d]=%s\'\n", idx, dir->d_name);
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
#if defined(TRIMUI) || defined(PANDORA)
    int fd = -1;
#endif

    struct json_object *jval = NULL;
    struct json_object *jfile = NULL;

    jfile = json_object_from_file(nds.cfg.path);
    if (jfile == NULL) {
        debug("Failed to read settings from json file (%s)\n", nds.cfg.path);
        return -1;
    }

    json_object_object_get_ex(jfile, JSON_NDS_PEN_SEL, &jval);
    if (jval) {
        nds.pen.sel = json_object_get_int(jval);
    }

    json_object_object_get_ex(jfile, JSON_NDS_PEN_POS, &jval);
    if (jval) {
        nds.pen.pos = json_object_get_int(jval) == 0 ? 0 : 1;
    }

    json_object_object_get_ex(jfile, JSON_NDS_THEME_SEL, &jval);
    if (jval) {
        nds.theme.sel = json_object_get_int(jval);
    }

    json_object_object_get_ex(jfile, JSON_NDS_DIS_MODE, &jval);
    if (jval) {
        nds.dis_mode = json_object_get_int(jval);
    }
    
    json_object_object_get_ex(jfile, JSON_NDS_ALT_MODE, &jval);
    if (jval) {
        nds.alt_mode = json_object_get_int(jval);
    }
    
    json_object_object_get_ex(jfile, JSON_NDS_PEN_XV, &jval);
    if (jval) {
        nds.pen.xv = json_object_get_int(jval);
    }
    
    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_VALUE, &jval);
    if (jval) {
        nds.alpha.val = json_object_get_int(jval);
    }

    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_POSITION, &jval);
    if (jval) {
        nds.alpha.pos = json_object_get_int(jval);
    }

    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_BORDER, &jval);
    if (jval) {
        nds.alpha.border = json_object_get_int(jval);
        nds.alpha.border%= NDS_BORDER_MAX;
    }

    json_object_object_get_ex(jfile, JSON_NDS_MAX_CPU, &jval);
    if (jval) {
        nds.maxcpu = json_object_get_int(jval);
    }

    json_object_object_get_ex(jfile, JSON_NDS_MIN_CPU, &jval);
    if (jval) {
        nds.mincpu = json_object_get_int(jval);
    }

    json_object_object_get_ex(jfile, JSON_NDS_MAX_CORE, &jval);
    if (jval) {
        nds.maxcore = json_object_get_int(jval);
    }

    json_object_object_get_ex(jfile, JSON_NDS_MIN_CORE, &jval);
    if (jval) {
        nds.mincore = json_object_get_int(jval);
    }

    json_object_object_get_ex(jfile, JSON_NDS_SWAP_L1L2, &jval);
    if (jval) {
        nds.swap_l1l2 = json_object_get_int(jval) ? 1 : 0;
    }

    json_object_object_get_ex(jfile, JSON_NDS_SWAP_R1R2, &jval);
    if (jval) {
        nds.swap_r1r2 = json_object_get_int(jval) ? 1 : 0;
    }

    json_object_object_get_ex(jfile, JSON_NDS_KEYS_ROTATE, &jval);
    if (jval) {
        nds.keys_rotate = json_object_get_int(jval) % 3;
    }

    json_object_object_get_ex(jfile, JSON_NDS_CHK_BAT, &jval);
    if (jval) {
        nds.chk_bat = json_object_get_int(jval) ? 1: 0;
    }

#if defined(A30) || defined(FLIP)
    json_object_object_get_ex(jfile, JSON_NDS_JOY_MODE, &jval);
    nds.joy.mode = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_JOY_DZONE, &jval);
    nds.joy.dzone = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_JOY_CUSKEY0, &jval);
    nds.joy.cuskey[0] = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_JOY_CUSKEY1, &jval);
    nds.joy.cuskey[1] = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_JOY_CUSKEY2, &jval);
    nds.joy.cuskey[2] = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_JOY_CUSKEY3, &jval);
    nds.joy.cuskey[3] = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_RJOY_MODE, &jval);
    nds.rjoy.mode = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_RJOY_DZONE, &jval);
    nds.rjoy.dzone = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_RJOY_CUSKEY0, &jval);
    nds.rjoy.cuskey[0] = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_RJOY_CUSKEY1, &jval);
    nds.rjoy.cuskey[1] = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_RJOY_CUSKEY2, &jval);
    nds.rjoy.cuskey[2] = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_RJOY_CUSKEY3, &jval);
    nds.rjoy.cuskey[3] = json_object_get_int(jval);
#endif

    nds.menu.c0 = 0xffffff;
    json_object_object_get_ex(jfile, JSON_NDS_MENU_C0, &jval);
    if (jval) {
        const char *p = json_object_get_string(jval);
        nds.menu.c0 = strtol(p, NULL, 16);
    }

    nds.menu.c1 = 0x000000;
    json_object_object_get_ex(jfile, JSON_NDS_MENU_C1, &jval);
    if (jval) {
        const char *p = json_object_get_string(jval);
        nds.menu.c1 = strtol(p, NULL, 16);
    }

    nds.menu.c2 = 0x289a35;
    json_object_object_get_ex(jfile, JSON_NDS_MENU_C2, &jval);
    if (jval) {
        const char *p = json_object_get_string(jval);
        nds.menu.c2 = strtol(p, NULL, 16);
    }

    nds.auto_state = 1;
    json_object_object_get_ex(jfile, JSON_NDS_AUTO_STATE, &jval);
    if (jval) {
        nds.auto_state = json_object_get_int(jval) ? 1 : 0;
    }

    nds.auto_slot = 1;
    json_object_object_get_ex(jfile, JSON_NDS_AUTO_SLOT, &jval);
    if (jval) {
        nds.auto_slot = json_object_get_int(jval);
    }

    lang_enum();
    json_object_object_get_ex(jfile, JSON_NDS_LANG, &jval);
    if (jval) {
        const char *lang = json_object_get_string(jval);

        strcpy(nds.lang.trans[DEF_LANG_SLOT], lang);
        lang_load(lang);
    }

    json_object_object_get_ex(jfile, JSON_NDS_HOTKEY, &jval);
    if (jval) {
        nds.hotkey = json_object_get_int(jval);
    }

    nds.menu.show_cursor = 0;
    json_object_object_get_ex(jfile, JSON_NDS_MENU_CURSOR, &jval);
    if (jval) {
        nds.menu.show_cursor = json_object_get_int(jval);
    }

    nds.fast_forward = 6;
    json_object_object_get_ex(jfile, JSON_NDS_FAST_FORWARD, &jval);
    if (jval) {
        nds.fast_forward = json_object_get_int(jval);
    }

    json_object_object_get_ex(jfile, JSON_NDS_AUTO_STATE, &jval);
    nds.auto_state = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_AUTO_SLOT, &jval);
    nds.auto_slot = json_object_get_int(jval);

    json_object_object_get_ex(jfile, JSON_NDS_HALF_VOL, &jval);
    nds.half_vol = json_object_get_int(jval) ? 1 : 0;

#if defined(MINI) || defined(A30) || defined(QX1000) || defined(XT897) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    json_object_object_get_ex(jfile, JSON_NDS_STATES, &jval);
    if (jval) {
        struct stat st = {0};
        const char *path = json_object_get_string(jval);

        if ((path != NULL) && (path[0] != 0)) {
            strcpy(nds.states.path, path);

            if (stat(nds.states.path, &st) == -1) {
                mkdir(nds.states.path, 0755);
                debug("Create states folder in \'%s\'\n", nds.states.path);
            }
        }
    }
#endif

    if (nds.dis_mode > NDS_DIS_MODE_LAST) {
        nds.dis_mode = NDS_DIS_MODE_VH_S0;
        nds.alt_mode = NDS_DIS_MODE_S0;
    }

    nds.menu.sel = 0;
    json_object_object_get_ex(jfile, JSON_NDS_MENU_BG, &jval);
    if (jval) {
        nds.menu.sel = json_object_get_int(jval);
        if (nds.menu.sel >= nds.menu.max) {
            nds.menu.sel = 0;
        }
    }
    json_object_put(jfile);

    reload_menu();
    reload_pen();

#if defined(TRIMUI) || defined(PANDORA)
    fd = open("/dev/dsp", O_RDWR);
    if (fd > 0) {
        close(fd);
#endif

#if defined(MINI) || defined(TRIMUI) || defined(A30) || defined(PANDORA)
    //set_auto_state(nds.auto_state, nds.auto_slot);
    //set_half_vol(nds.half_vol);
#endif

#if defined(TRIMUI) || defined(PANDORA)
    }
#endif

#if defined(TRIMUI)
    if ((nds.dis_mode != NDS_DIS_MODE_S0) && (nds.dis_mode != NDS_DIS_MODE_S1)) {
        nds.dis_mode = NDS_DIS_MODE_S0;
    }
    disp_resize();
#endif

#if defined(QX1000) || defined(XT897)
    nds.dis_mode = NDS_DIS_MODE_H0;
#endif

#if defined(A30)
    nds.joy.max_x = 200;
    nds.joy.zero_x = 135;
    nds.joy.min_x = 75;
    nds.joy.max_y = 200;
    nds.joy.zero_y = 135;
    nds.joy.min_y = 75;
#endif
    return 0;
}

static int write_config(void)
{
    struct json_object *jfile = NULL;

    jfile = json_object_from_file(nds.cfg.path);
    if (jfile == NULL) {
        debug("failed to write settings to json file (%s)\n", nds.cfg.path);
        return -1;
    }

#if defined(TRIMUI)
    if (need_restore) {
        nds.dis_mode = pre_dismode;
    }
#endif

    if (nds.dis_mode > NDS_DIS_MODE_LAST) {
        nds.dis_mode = NDS_DIS_MODE_VH_S0;
        nds.alt_mode = NDS_DIS_MODE_S0;
    }

    json_object_object_add(jfile, JSON_NDS_PEN_SEL, json_object_new_int(nds.pen.sel));
    json_object_object_add(jfile, JSON_NDS_THEME_SEL, json_object_new_int(nds.theme.sel));
    json_object_object_add(jfile, JSON_NDS_DIS_MODE, json_object_new_int(nds.dis_mode));
    json_object_object_add(jfile, JSON_NDS_ALPHA_VALUE, json_object_new_int(nds.alpha.val));
    json_object_object_add(jfile, JSON_NDS_ALPHA_POSITION, json_object_new_int(nds.alpha.pos));
    json_object_object_add(jfile, JSON_NDS_ALPHA_BORDER, json_object_new_int(nds.alpha.border));
    json_object_object_add(jfile, JSON_NDS_ALT_MODE, json_object_new_int(nds.alt_mode));
    json_object_object_add(jfile, JSON_NDS_KEYS_ROTATE, json_object_new_int(nds.keys_rotate));
    json_object_object_add(jfile, JSON_NDS_LANG, json_object_new_string(nds.lang.trans[DEF_LANG_SLOT]));
    json_object_object_add(jfile, JSON_NDS_HOTKEY, json_object_new_int(nds.hotkey));
    json_object_object_add(jfile, JSON_NDS_SWAP_L1L2, json_object_new_int(nds.swap_l1l2));
    json_object_object_add(jfile, JSON_NDS_SWAP_R1R2, json_object_new_int(nds.swap_r1r2));
    json_object_object_add(jfile, JSON_NDS_PEN_XV, json_object_new_int(nds.pen.xv));
    json_object_object_add(jfile, JSON_NDS_MENU_BG, json_object_new_int(nds.menu.sel));
    json_object_object_add(jfile, JSON_NDS_MENU_CURSOR, json_object_new_int(nds.menu.show_cursor));
    json_object_object_add(jfile, JSON_NDS_FAST_FORWARD, json_object_new_int(nds.fast_forward));
    json_object_object_add(jfile, JSON_NDS_CHK_BAT, json_object_new_int(nds.chk_bat));

#if defined(A30) || defined(FLIP)
    json_object_object_add(jfile, JSON_NDS_JOY_MODE, json_object_new_int(nds.joy.mode));
    json_object_object_add(jfile, JSON_NDS_JOY_DZONE, json_object_new_int(nds.joy.dzone));
    json_object_object_add(jfile, JSON_NDS_JOY_CUSKEY0, json_object_new_int(nds.joy.cuskey[0]));
    json_object_object_add(jfile, JSON_NDS_JOY_CUSKEY1, json_object_new_int(nds.joy.cuskey[1]));
    json_object_object_add(jfile, JSON_NDS_JOY_CUSKEY2, json_object_new_int(nds.joy.cuskey[2]));
    json_object_object_add(jfile, JSON_NDS_JOY_CUSKEY3, json_object_new_int(nds.joy.cuskey[3]));

    json_object_object_add(jfile, JSON_NDS_RJOY_MODE, json_object_new_int(nds.rjoy.mode));
    json_object_object_add(jfile, JSON_NDS_RJOY_DZONE, json_object_new_int(nds.rjoy.dzone));
    json_object_object_add(jfile, JSON_NDS_RJOY_CUSKEY0, json_object_new_int(nds.rjoy.cuskey[0]));
    json_object_object_add(jfile, JSON_NDS_RJOY_CUSKEY1, json_object_new_int(nds.rjoy.cuskey[1]));
    json_object_object_add(jfile, JSON_NDS_RJOY_CUSKEY2, json_object_new_int(nds.rjoy.cuskey[2]));
    json_object_object_add(jfile, JSON_NDS_RJOY_CUSKEY3, json_object_new_int(nds.rjoy.cuskey[3]));
#endif
    json_object_object_add(jfile, JSON_NDS_CHK_BAT, json_object_new_int(nds.chk_bat));

    json_object_to_file_ext(nds.cfg.path, jfile, JSON_C_TO_STRING_PRETTY);
    json_object_put(jfile);
    debug("updated config !\n");
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
        debug("Current cpuclock=%u (lpf=%u, post_div=%u)\n", rate, lpf_value, post_div);
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
        debug("Set CPU %dMHz\n", newclock);

        newclock*= 1000;
        sprintf(clockstr, "%d", newclock);
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

#if defined(UT)
int init_lcd(void)
{
    return 0;
}

int quit_lcd(void)
{
    return 0;
}
#endif

#if defined(GKD2) || defined(BRICK)
int init_lcd(void)
{
    myvideo.shm.fd = shm_open(SHM_NAME, O_RDWR, 0777);
    debug("shm fd=%d\n", myvideo.shm.fd);

    myvideo.shm.buf = (shm_buf_t *) mmap(NULL, sizeof(shm_buf_t), PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.shm.fd, 0);
    debug("shm buf=%p\n", myvideo.shm.buf);

    return 0;
}

int quit_lcd(void)
{
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
static int get_core(int index)
{
    FILE *fd = NULL;
    char buf[255] = {0};

    sprintf(buf, "cat /sys/devices/system/cpu/cpu%d/online", index % 4); 
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
        sprintf(buf, "echo %d > /sys/devices/system/cpu/cpu%d/online", v ? 1 : 0, num);
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

int init_lcd(void)
{
   set_core(INIT_CPU_CORE); 
   return 0;
}

int quit_lcd(void)
{
   set_core(DEINIT_CPU_CORE); 
   return 0;
}
#endif

#if defined(QX1000) || defined(XT897)
int init_lcd(void)
{
    is_wl_thread_running = 1;
    myvideo.wl.bg = SDL_malloc(LCD_W * LCD_H * 4);
    memset(myvideo.wl.bg, 0, LCD_W * LCD_H * 2);
    pthread_create(&thread_id[0], NULL, wl_thread, NULL);
    pthread_create(&thread_id[1], NULL, draw_thread, NULL);
    while (myvideo.wl.init == 0) {
        usleep(100000);
    }

    myvideo.wl.flip = 0;
    myvideo.wl.ready = 0;
    myvideo.wl.data = SDL_malloc(LCD_W * LCD_H * 4 * 2);
    memset(myvideo.wl.data, 0, LCD_W * LCD_H * 4 * 2);
    myvideo.wl.pixels[0] = (uint16_t *)myvideo.wl.data;
    myvideo.wl.pixels[1] = (uint16_t *)(myvideo.wl.data + (LCD_W * LCD_H * 4));
    update_wayland_res(NDS_W * 2, NDS_H);
    myvideo.wl.ready = 1;
    return 0;
}

int quit_lcd(void)
{
    return 0;
}
#endif

#if defined(PANDORA)
int init_lcd(void)
{
    myvideo.fb.fd[0] = open("/dev/fb0", O_RDWR);
    myvideo.fb.fd[1] = open("/dev/fb1", O_RDWR);
    ioctl(myvideo.fb.fd[1], OMAPFB_QUERY_PLANE, &gfx.pi);
    ioctl(myvideo.fb.fd[1], OMAPFB_QUERY_MEM, &gfx.mi);
    if(gfx.pi.enabled){
        gfx.pi.enabled = 0;
        ioctl(myvideo.fb.fd[1], OMAPFB_SETUP_PLANE, &gfx.pi);
    }
    gfx.mi.size = FB_SIZE;
    ioctl(myvideo.fb.fd[1], OMAPFB_SETUP_MEM, &gfx.mi);

    gfx.pi.enabled = 1;
    gfx.pi.pos_x = 0;
    gfx.pi.pos_y = 0;
    gfx.pi.out_width = FB_W;
    gfx.pi.out_height = FB_H;
    ioctl(myvideo.fb.fd[1], OMAPFB_SETUP_PLANE, &gfx.pi);

    ioctl(myvideo.fb.fd[0], FBIOGET_VSCREENINFO, &myvideo.fb.var_info);
    ioctl(myvideo.fb.fd[0], FBIOGET_FSCREENINFO, &myvideo.fb.fix_info);
    myvideo.gfx.mem[0] = mmap(0, FB_SIZE, PROT_WRITE | PROT_READ, MAP_SHARED, myvideo.fb.fd[0], 0);
    memset(myvideo.gfx.mem[0], 0, FB_SIZE);

    ioctl(myvideo.fb.fd[1], FBIOGET_VSCREENINFO, &myvideo.fb.var_info);
    ioctl(myvideo.fb.fd[1], FBIOGET_FSCREENINFO, &myvideo.fb.fix_info);
    myvideo.gfx.mem[1] = mmap(0, FB_SIZE, PROT_WRITE | PROT_READ, MAP_SHARED, myvideo.fb.fd[1], 0);
    memset(myvideo.gfx.mem[1], 0, FB_SIZE);
    return 0;
}

int quit_lcd(void)
{
    ioctl(myvideo.fb.fd[1], OMAPFB_QUERY_PLANE, &gfx.pi);
    gfx.pi.enabled = 0;
    ioctl(myvideo.fb.fd[1], OMAPFB_SETUP_PLANE, &gfx.pi);
    munmap(myvideo.gfx.mem[0], FB_SIZE);
    munmap(myvideo.gfx.mem[1], FB_SIZE);
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
    struct ion_allocation_data iad;
    struct ion_fd_data ifd;
    struct ion_custom_data icd;
    sunxi_phys_data spd;

    iad.len = info->size;
    iad.align = sysconf(_SC_PAGESIZE);
    iad.heap_id_mask = ION_HEAP_TYPE_DMA_MASK;
    iad.flags = 0;
    if (ioctl(ion_fd, ION_IOC_ALLOC, &iad) < 0) {
        debug("failed to call ION_IOC_ALLOC\n");
        return -1;
    }

    icd.cmd = ION_IOC_SUNXI_PHYS_ADDR;
    icd.arg = (uintptr_t)&spd;
    spd.handle = iad.handle;
    if (ioctl(ion_fd, ION_IOC_CUSTOM, &icd) < 0) {
        debug("failed to call ION_IOC_CUSTOM\n");
        return -1;
    }
    ifd.handle = iad.handle;
    if (ioctl(ion_fd, ION_IOC_MAP, &ifd) < 0) {
        debug("failed to call ION_IOC_MAP\n");
    }

    info->handle = iad.handle;
    info->fd = ifd.fd;
    info->padd = (void*)spd.phys_addr;
    info->vadd = mmap(0, info->size, PROT_READ | PROT_WRITE, MAP_SHARED, info->fd, 0);
    debug("mmap padd:0x%x, vadd:0x%x, size:%d\n", (uintptr_t)info->padd, (uintptr_t)info->vadd, info->size);
    return 0;
}

static void ion_free(int ion_fd, ion_alloc_info_t* info)
{
    struct ion_handle_data ihd;

    munmap(info->vadd, info->size);
    close(info->fd);
    ihd.handle = info->handle;
    if (ioctl(ion_fd, ION_IOC_FREE, &ihd) < 0) {
        debug("failed to call ION_ION_FREE\n");
    }
}

int init_lcd(void)
{
    int r = 0;
    uint32_t args[4] = {0, (uintptr_t)&myvideo.gfx.disp, 1, 0};

    myvideo.fb.fd = open("/dev/fb0", O_RDWR);
    myvideo.gfx.ion_fd = open("/dev/ion", O_RDWR);
    myvideo.gfx.mem_fd = open("/dev/mem", O_RDWR);
    myvideo.gfx.disp_fd = open("/dev/disp", O_RDWR);
    if (myvideo.fb.fd < 0) {
        debug("failed to open /dev/fb0\n");
        return -1;
    }

    memset(&myvideo.gfx.disp, 0, sizeof(disp_layer_config));
    memset(&myvideo.gfx.buf, 0, sizeof(disp_layer_config));
    myvideo.gfx.mem = mmap(0, sysconf(_SC_PAGESIZE), PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.gfx.mem_fd, OVL_V);

    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);

    myvideo.gfx.disp.channel = DEF_FB_CH;
    myvideo.gfx.disp.layer_id = DEF_FB_LAYER;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_GET_CONFIG, args);

    myvideo.gfx.disp.enable = 0;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);

    myvideo.gfx.ion.size = ION_W * ION_H * FB_BPP * 2;
    ion_alloc(myvideo.gfx.ion_fd, &myvideo.gfx.ion);

    myvideo.gfx.buf.channel = SCALER_CH;
    myvideo.gfx.buf.layer_id = SCALER_LAYER;
    myvideo.gfx.buf.enable = 1;
    myvideo.gfx.buf.info.fb.format = DISP_FORMAT_ARGB_8888;
    myvideo.gfx.buf.info.fb.addr[0] = (uintptr_t)myvideo.gfx.ion.padd;
    myvideo.gfx.buf.info.fb.size[0].width = FB_H;
    myvideo.gfx.buf.info.fb.size[0].height = FB_W;
    myvideo.gfx.buf.info.mode = LAYER_MODE_BUFFER;
    myvideo.gfx.buf.info.zorder = SCALER_ZORDER;
    myvideo.gfx.buf.info.alpha_mode = 0;
    myvideo.gfx.buf.info.alpha_value = 0;
    myvideo.gfx.buf.info.screen_win.x = 0;
    myvideo.gfx.buf.info.screen_win.y = 0;
    myvideo.gfx.buf.info.screen_win.width  = FB_H;
    myvideo.gfx.buf.info.screen_win.height = FB_W;
    myvideo.gfx.buf.info.fb.pre_multiply = 0;
    myvideo.gfx.buf.info.fb.crop.x = (uint64_t)0 << 32;
    myvideo.gfx.buf.info.fb.crop.y = (uint64_t)0 << 32;
    myvideo.gfx.buf.info.fb.crop.width  = (uint64_t)FB_H << 32;
    myvideo.gfx.buf.info.fb.crop.height = (uint64_t)FB_W << 32;
    args[1] = (uintptr_t)&myvideo.gfx.buf;
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);
    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);
    return 0;
}

int quit_lcd(void)
{
    uint32_t args[4] = {0, (uintptr_t)&myvideo.gfx.disp, 1, 0};

    myvideo.gfx.disp.enable = myvideo.gfx.buf.enable = 0;
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

void disp_resize(void)
{
    int r = 0;
    uint32_t args[4] = {0, (uintptr_t)&myvideo.gfx.buf, 1, 0};

    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);
    if (nds.dis_mode == NDS_DIS_MODE_S0) {
        myvideo.gfx.buf.info.fb.crop.width  = ((uint64_t)FB_H) << 32;
        myvideo.gfx.buf.info.fb.crop.height = ((uint64_t)FB_W) << 32;
    }
    else {
        myvideo.gfx.buf.info.fb.crop.width  = ((uint64_t)NDS_H) << 32;
        myvideo.gfx.buf.info.fb.crop.height = ((uint64_t)NDS_W) << 32;
    }
    ioctl(myvideo.gfx.disp_fd, DISP_LAYER_SET_CONFIG, args);
    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);
}
#endif

#if defined(RG28XX)
static int get_core(int index)
{
    FILE *fd = NULL;
    char buf[255] = {0};

    sprintf(buf, "cat /sys/devices/system/cpu/cpu%d/online", index % 4);
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
        sprintf(buf, "echo %d > /sys/devices/system/cpu/cpu%d/online", v ? 1 : 0, num);
        system(buf);
    }
}

static void set_core(int n)
{
    if (n <= 1) {
        debug("new CPU Core: 1\n");
        check_before_set(0, 1);
        check_before_set(1, 0);
        check_before_set(2, 0);
        check_before_set(3, 0);
    }
    else if (n == 2) {
        debug("new CPU Core: 2\n");
        check_before_set(0, 1);
        check_before_set(1, 1);
        check_before_set(2, 0);
        check_before_set(3, 0);
    }
    else if (n == 3) {
        debug("new CPU Core: 3\n");
        check_before_set(0, 1);
        check_before_set(1, 1);
        check_before_set(2, 1);
        check_before_set(3, 0);
    }
    else {
        debug("new CPU Core: 4\n");
        check_before_set(0, 1);
        check_before_set(1, 1);
        check_before_set(2, 1);
        check_before_set(3, 1);
    }
}

int init_lcd(void)
{
    myvideo.fb.fd = open("/dev/fb0", O_RDWR, 0);
    if (myvideo.fb.fd < 0) {
        debug("failed to open /dev/fb0\n");
        return -1;
    }

    if (ioctl(myvideo.fb.fd, FBIOGET_VSCREENINFO, &myvideo.fb.var_info) < 0) {
        debg("failed to get fb info\n");
        return -1;
    }

    myvideo.fb.virt_addr = mmap(NULL, FB_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.fb.fd, 0);
    if (myvideo.fb.virt_addr == (void *)-1) {
        close(myvideo.fb.fd);
        myvideo.fb.fd = -1;
        debug("failed to mmap fb\n");
        return -1;
    }
    debug("fb virAddr %p (size:%d)\n", myvideo.fb.virt_addr, FB_SIZE);
    memset(myvideo.fb.virt_addr, 0 , FB_SIZE);

    myvideo.fb.var_info.yres_virtual = myvideo.fb.var_info.yres * 2;
    ioctl(myvideo.fb.fd, FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);

    set_core(INIT_CPU_CORE);
    system("echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
    return 0;
}

int quit_lcd(void)
{
    set_core(DEINIT_CPU_CORE);
    system("echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");

    if (myvideo.fb.virt_addr) {
        munmap(myvideo.fb.virt_addr, FB_SIZE);
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
static int get_core(int index)
{
    FILE *fd = NULL;
    char buf[255] = {0};

    sprintf(buf, "cat /sys/devices/system/cpu/cpu%d/online", index % 4); 
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
        sprintf(buf, "echo %d > /sys/devices/system/cpu/cpu%d/online", v ? 1 : 0, num);
        system(buf);
    }       
}   

static void set_core(int n)
{           
    if (n <= 1) {
        debug("cpu core=1\n");
        check_before_set(0, 1);
        check_before_set(1, 0);
        check_before_set(2, 0);
        check_before_set(3, 0);
    }       
    else if (n == 2) {
        debug("cpu core=2\n");
        check_before_set(0, 1);
        check_before_set(1, 1);
        check_before_set(2, 0);
        check_before_set(3, 0);
    }       
    else if (n == 3) {
        debug("cpu core=3\n");
        check_before_set(0, 1);
        check_before_set(1, 1);
        check_before_set(2, 1);
        check_before_set(3, 0);
    }
    else {
        debug("cpu core=4\n");
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
        if (cpu_clk[cc].clk >= clk) {
            debug("set cpu %dMHz (0x%08x)\n", cpu_clk[cc].clk, cpu_clk[cc].reg);
            *myvideo.cpu_ptr = cpu_clk[cc].reg;
            return cc;
        }
    }
    return -1;
}

int init_lcd(void)
{
    myvideo.fb.fd = open("/dev/fb0", O_RDWR, 0);
    if (myvideo.fb.fd < 0) {
        debug("failed to open /dev/fb0\n");
        return -1;
    }

    if (ioctl(myvideo.fb.fd, FBIOGET_VSCREENINFO, &myvideo.fb.var_info) < 0) {
        debug("failed to get fb info\n");
        return -1;
    }

    myvideo.fb.virt_addr = mmap(NULL, FB_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.fb.fd, 0);
    if (myvideo.fb.virt_addr == (void *)-1) {
        close(myvideo.fb.fd);
        myvideo.fb.fd = -1;
        debug("failed to mmap fb\n");
        return -1;
    }
    debug("fb addr=%p, size=%d\n", myvideo.fb.virt_addr, FB_SIZE);
    memset(myvideo.fb.virt_addr, 0 , FB_SIZE);

    myvideo.fb.var_info.yres_virtual = myvideo.fb.var_info.yres * 2;
    ioctl(myvideo.fb.fd, FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);

    myvideo.mem_fd = open("/dev/mem", O_RDWR);
    if (myvideo.mem_fd < 0) { 
        debug("failed to open /dev/mem\n");
        return -1;
    }    
    myvideo.ccu_mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.mem_fd, CCU_BASE);
    if (myvideo.ccu_mem == MAP_FAILED) {
        debug("failed to map memory\n");
        return -1;
    }    
    debug("ccp mem=%p\n", myvideo.ccu_mem);
    myvideo.cpu_ptr = (uint32_t *)&myvideo.ccu_mem[0x00];

    myvideo.dac_mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.mem_fd, DAC_BASE);
    if (myvideo.dac_mem == MAP_FAILED) {
        debug("failed to map memory\n");
        return -1;
    }    
    debug("dac mem=%p\n", myvideo.dac_mem);
    myvideo.vol_ptr = (uint32_t *)(&myvideo.dac_mem[0xc00 + 0x258]);

    set_best_match_cpu_clock(INIT_CPU_CLOCK);
    set_core(INIT_CPU_CORE);
    return 0;
}

int quit_lcd(void)
{
    set_best_match_cpu_clock(DEINIT_CPU_CLOCK);
    set_core(DEINIT_CPU_CORE);
    system("echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");

    if (myvideo.fb.virt_addr) {
        munmap(myvideo.fb.virt_addr, FB_SIZE);
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
int init_lcd(void)
{
    MI_SYS_Init();
    MI_GFX_Open();

    myvideo.fb.fd = open("/dev/fb0", O_RDWR);
    if (myvideo.fb.fd < 0) {
        debug("failed to open /dev/fb0\n");
        return -1;
    }
    ioctl(myvideo.fb.fd, FBIOGET_FSCREENINFO, &myvideo.fb.fix_info);
    ioctl(myvideo.fb.fd, FBIOGET_VSCREENINFO, &myvideo.fb.var_info);
    myvideo.fb.var_info.yoffset = 0;
    myvideo.fb.var_info.yres_virtual = myvideo.fb.var_info.yres * 2;
    ioctl(myvideo.fb.fd, FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);

    myvideo.fb.phy_addr = myvideo.fb.fix_info.smem_start;
    MI_SYS_MemsetPa(myvideo.fb.phy_addr, 0, FB_SIZE);
    MI_SYS_Mmap(myvideo.fb.phy_addr, myvideo.fb.fix_info.smem_len, &myvideo.fb.virt_addr, TRUE);
    memset(&myvideo.gfx.opt, 0, sizeof(myvideo.gfx.opt));

    MI_SYS_MMA_Alloc(NULL, TMP_SIZE, &myvideo.tmp.phy_addr);
    MI_SYS_Mmap(myvideo.tmp.phy_addr, TMP_SIZE, &myvideo.tmp.virt_addr, TRUE);

    MI_SYS_MMA_Alloc(NULL, SCREEN_DMA_SIZE, &myvideo.lcd.phy_addr[0][0]);
    MI_SYS_MMA_Alloc(NULL, SCREEN_DMA_SIZE, &myvideo.lcd.phy_addr[0][1]);
    MI_SYS_MMA_Alloc(NULL, SCREEN_DMA_SIZE, &myvideo.lcd.phy_addr[1][0]);
    MI_SYS_MMA_Alloc(NULL, SCREEN_DMA_SIZE, &myvideo.lcd.phy_addr[1][1]);
    MI_SYS_Mmap(myvideo.lcd.phy_addr[0][0], SCREEN_DMA_SIZE, &myvideo.lcd.virt_addr[0][0], TRUE);
    MI_SYS_Mmap(myvideo.lcd.phy_addr[0][1], SCREEN_DMA_SIZE, &myvideo.lcd.virt_addr[0][1], TRUE);
    MI_SYS_Mmap(myvideo.lcd.phy_addr[1][0], SCREEN_DMA_SIZE, &myvideo.lcd.virt_addr[1][0], TRUE);
    MI_SYS_Mmap(myvideo.lcd.phy_addr[1][1], SCREEN_DMA_SIZE, &myvideo.lcd.virt_addr[1][1], TRUE);
    debug("lcd[0] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[0][0]);
    debug("lcd[0] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[0][1]);
    debug("lcd[1] virt_addr[0]=%p\n", myvideo.lcd.virt_addr[1][0]);
    debug("lcd[1] virt_addr[1]=%p\n", myvideo.lcd.virt_addr[1][1]);

    myvideo.sar_fd = open("/dev/sar", O_RDWR);
    return 0;
}

int quit_lcd(void)
{
    MI_SYS_Munmap(myvideo.fb.virt_addr, TMP_SIZE);

    MI_SYS_Munmap(myvideo.tmp.virt_addr, TMP_SIZE);
    MI_SYS_MMA_Free(myvideo.tmp.phy_addr);

    MI_SYS_Munmap(myvideo.lcd.virt_addr[0][0], SCREEN_DMA_SIZE);
    MI_SYS_Munmap(myvideo.lcd.virt_addr[0][1], SCREEN_DMA_SIZE);
    MI_SYS_Munmap(myvideo.lcd.virt_addr[1][0], SCREEN_DMA_SIZE);
    MI_SYS_Munmap(myvideo.lcd.virt_addr[1][1], SCREEN_DMA_SIZE);
    MI_SYS_MMA_Free(myvideo.lcd.phy_addr[0][0]);
    MI_SYS_MMA_Free(myvideo.lcd.phy_addr[0][1]);
    MI_SYS_MMA_Free(myvideo.lcd.phy_addr[1][0]);
    MI_SYS_MMA_Free(myvideo.lcd.phy_addr[1][1]);

    MI_GFX_Close();
    MI_SYS_Exit();

    myvideo.fb.var_info.yoffset = 0;
    ioctl(myvideo.fb.fd, FBIOPUT_VSCREENINFO, &myvideo.fb.var_info);
    close(myvideo.fb.fd);
    myvideo.fb.fd = -1;

    close(myvideo.sar_fd);
    myvideo.sar_fd = -1;
    return 0;
}
#endif

void init_gfx(void)
{
    struct stat st = {0};

#if defined(TRIMUI)
    int x = 0;
    int y = 0;
    int ox = 32;
    int oy = 24;
    int cc = 0;
    uint32_t *dst = NULL;
#endif

    init_lcd();
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
        drop_bios_files(nds.bios.path);
    }

#if defined(QX1000) || defined(XT897)
    cvt = SDL_CreateRGBSurface(SDL_SWSURFACE, IMG_W, IMG_H, 32, 0, 0, 0, 0);
#else
    cvt = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
#endif

    nds.pen.sel = 0;
    nds.pen.max = get_pen_count();

    nds.theme.sel = 0;
    nds.theme.max = get_theme_count();

    nds.menu.sel = 0;
    nds.menu.max = get_menu_count();

#if defined(QX1000) || defined(XT897)
    nds.menu.drastic.main = SDL_CreateRGBSurface(SDL_SWSURFACE, IMG_W, IMG_H, 32, 0, 0, 0, 0);
#else
    nds.menu.drastic.main = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
#endif
    if (nds.menu.drastic.main) {
        if (nds.menu.drastic.bg0) {
            SDL_SoftStretch(nds.menu.drastic.bg0, NULL, nds.menu.drastic.main, NULL);
        }
    }

    getcwd(nds.cfg.path, sizeof(nds.cfg.path));
    strcat(nds.cfg.path, "/");
    strcat(nds.cfg.path, CFG_PATH);

    TTF_Init();
    nds.font = TTF_OpenFont(FONT_PATH, FONT_SIZE);
    if (nds.enable_752x560) {
        //TTF_SetFontStyle(nds.font, TTF_STYLE_BOLD);
    }

#if defined(TRIMUI)
    cc = 0;
    for (y = 0; y < NDS_H; y++) {
        for (x = 0; x < NDS_W; x++) {
            dst = (uint32_t *)myvideo.gfx.ion.vadd;
            LUT_256x192_S00[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x) + ox) * FB_H) + y + oy);
            LUT_256x192_S10[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x)) * FB_H) + y);

            dst = (uint32_t *)myvideo.gfx.ion.vadd + (FB_W * FB_H);
            LUT_256x192_S01[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x) + ox) * FB_H) + y + oy);
            LUT_256x192_S11[cc] = (uint32_t)(dst + ((((NDS_W - 1) - x)) * FB_H) + y);
            cc+= 1;
        }
    }
#endif

    is_video_thread_running = 1;
    pthread_create(&thread, NULL, video_handler, (void *)NULL);
}

void GFX_Quit(void)
{
    void *ret = NULL;

    printf(PREFIX"Wait for video_handler exit\n");
    is_video_thread_running = 0;
    pthread_join(thread, &ret);

    clear_lcd();
    printf(PREFIX"Free FB resources\n");
    quit_lcd();

    if (cvt) {
        SDL_FreeSurface(cvt);
        cvt = NULL;
    }
}

void clear_lcd(void)
{
#if defined(MINI)
    MI_SYS_MemsetPa(myvideo.fb.phy_addr, 0, FB_SIZE);
    MI_SYS_MemsetPa(myvideo.tmp.phy_addr, 0, TMP_SIZE);
    MI_SYS_MemsetPa(myvideo.lcd.phy_addr[0][0], 0, SCREEN_DMA_SIZE);
    MI_SYS_MemsetPa(myvideo.lcd.phy_addr[0][1], 0, SCREEN_DMA_SIZE);
    MI_SYS_MemsetPa(myvideo.lcd.phy_addr[1][0], 0, SCREEN_DMA_SIZE);
    MI_SYS_MemsetPa(myvideo.lcd.phy_addr[1][1], 0, SCREEN_DMA_SIZE);
#endif
}

int draw_pen(void *pixels, int width, int pitch)
{
#if !defined(UT)
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

    x = (myevent.touch.x * sw) / myevent.touch.max_x;
    y = (myevent.touch.y * sh) / myevent.touch.max_y;

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
    fg_vertices[0] = ((((float)x) / NDS_W) - 0.5) * 2.0;
    fg_vertices[1] = ((((float)y) / NDS_H) - 0.5) * -2.0;

    fg_vertices[5] = fg_vertices[0];
    fg_vertices[6] = ((((float)(y + nds.pen.img->h)) / NDS_H) - 0.5) * -2.0;

    fg_vertices[10] = ((((float)(x + nds.pen.img->w)) / NDS_W) - 0.5) * 2.0;
    fg_vertices[11] = fg_vertices[6];

    fg_vertices[15] = fg_vertices[10];
    fg_vertices[16] = fg_vertices[1];

    glUniform1f(myvideo.alphaLoc, 1.0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myvideo.texID[TEXTURE_PEN]);
    glVertexAttribPointer(myvideo.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
    glVertexAttribPointer(myvideo.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);
    glDisable(GL_BLEND);
    glUniform1f(myvideo.alphaLoc, 0.0);
#endif

#if !defined(UT)
    asm ("PLD [%0, #128]"::"r" (s));
#endif

    for (c1=0; c1<h; c1++) {

#if !defined(UT)
        asm ("PLD [%0, #128]"::"r" (d_565));
        asm ("PLD [%0, #128]"::"r" (d_888));
#endif

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

int flush_lcd(int id, const void *pixels, SDL_Rect srcrect, SDL_Rect dstrect, int pitch, int alpha, int rotate)
{
#if defined(TRIMUI)
    int x = 0;
    int y = 0;
    int ox = 0;
    int oy = 0;
    int sw = srcrect.w;
    int sh = srcrect.h;
    uint32_t *dst = NULL;
    uint32_t *src = (uint32_t *)pixels;
#endif

#if defined(MINI)
    int cc = 0;
    int copy_it = 1;
    int dma_found = 0;
    MI_U16 u16Fence = 0;
    int is_rgb565 = (pitch / srcrect.w) == 2 ? 1 : 0;
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    int tex = (id >= 0) ? id : TEXTURE_TMP;
#endif

    debug("call %s(tex=%d, pixels=%p, pitch=%d, alpha=%d, rotate=%d)\n", __func__, id, pixels, pitch, alpha, rotate);

#if defined(GKD2) || defined(BRICK)
    myvideo.shm.buf->srt.x = srcrect.x;
    myvideo.shm.buf->srt.y = srcrect.y;
    myvideo.shm.buf->srt.w = srcrect.w;
    myvideo.shm.buf->srt.h = srcrect.h;

    myvideo.shm.buf->drt.x = dstrect.x;
    myvideo.shm.buf->drt.y = dstrect.y;
    myvideo.shm.buf->drt.w = dstrect.w;
    myvideo.shm.buf->drt.h = dstrect.h;

    memcpy(myvideo.shm.buf->buf, pixels, srcrect.h * pitch);

    myvideo.shm.buf->cmd = SHM_CMD_FLUSH;
    myvideo.shm.buf->tex_id = tex;
    myvideo.shm.buf->pitch = pitch;
    myvideo.shm.buf->alpha = alpha;
    myvideo.shm.buf->rotate = rotate;
    myvideo.shm.buf->dis_mode = nds.dis_mode;
    myvideo.shm.buf->len = srcrect.h * pitch;
    myvideo.shm.buf->pixel_filter = pixel_filter;
    debug("send SHM_CMD_FLUSH, pitch=%d, alpha=%d, rotate=%d\n", pitch, alpha, rotate);

    myvideo.shm.buf->valid = 1;
    __clear_cache((uint8_t *)myvideo.shm.buf, (uint8_t *)myvideo.shm.buf + sizeof(shm_buf_t));
    while (myvideo.shm.buf->valid) {
        usleep(10);
    }
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP)
    if ((id != -1) && ((nds.dis_mode == NDS_DIS_MODE_HH1) || (nds.dis_mode == NDS_DIS_MODE_HH3))) {
        fg_vertices[5] = ((((float)dstrect.x) / 640.0) - 0.5) * 2.0;
        fg_vertices[6] = ((((float)dstrect.y) / 480.0) - 0.5) * -2.0;

        fg_vertices[10] = fg_vertices[5];
        fg_vertices[11] = ((((float)(dstrect.y + dstrect.w)) / 480.0) - 0.5) * -2.0;

        fg_vertices[15] = ((((float)(dstrect.x + dstrect.h)) / 640.0) - 0.5) * 2.0;
        fg_vertices[16] = fg_vertices[11];

        fg_vertices[0] = fg_vertices[15];
        fg_vertices[1] = fg_vertices[6];
    }
    else if ((id != -1) && ((nds.dis_mode == NDS_DIS_MODE_HH0) || (nds.dis_mode == NDS_DIS_MODE_HH2))) {
        fg_vertices[15] = ((((float)dstrect.x) / 640.0) - 0.5) * 2.0;
        fg_vertices[16] = ((((float)dstrect.y) / 480.0) - 0.5) * -2.0;

        fg_vertices[0] = fg_vertices[15];
        fg_vertices[1] = ((((float)(dstrect.y + dstrect.w)) / 480.0) - 0.5) * -2.0;

        fg_vertices[5] = ((((float)(dstrect.x + dstrect.h)) / 640.0) - 0.5) * 2.0;
        fg_vertices[6] = fg_vertices[1];

        fg_vertices[10] = fg_vertices[5];
        fg_vertices[11] = fg_vertices[16];
    }
    else {
        fg_vertices[0] = ((((float)dstrect.x) / 640.0) - 0.5) * 2.0;
        fg_vertices[1] = ((((float)dstrect.y) / 480.0) - 0.5) * -2.0;

        fg_vertices[5] = fg_vertices[0];
        fg_vertices[6] = ((((float)(dstrect.y + dstrect.h)) / 480.0) - 0.5) * -2.0;

        fg_vertices[10] = ((((float)(dstrect.x + dstrect.w)) / 640.0) - 0.5) * 2.0;
        fg_vertices[11] = fg_vertices[6];

        fg_vertices[15] = fg_vertices[10];
        fg_vertices[16] = fg_vertices[1];
    }

    if (tex == TEXTURE_TMP) {
        glBindTexture(GL_TEXTURE_2D, myvideo.texID[tex]);
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

    if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1)) && (tex == TEXTURE_LCD0)) {
        glUniform1f(myvideo.alphaLoc, 1.0 - ((float)nds.alpha.val / 10.0));
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);
    }
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myvideo.texID[tex]);
    glVertexAttribPointer(myvideo.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
    glVertexAttribPointer(myvideo.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

    if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1)) && (tex == TEXTURE_LCD0)) {
        glUniform1f(myvideo.alphaLoc, 0.0);
        glDisable(GL_BLEND);
    }
#endif

#if defined(QX1000) || defined(XT897)
{
    int x = 0;
    int y = 0;
    const uint32_t *src = pixels;
    uint32_t *dst = (uint32_t *)myvideo.wl.pixels[myvideo.wl.flip];

    if (srcrect.w == NDS_W) {
        dst += (dstrect.y ? 0 : NDS_W);
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
            : "r"(pixels), "r"(dst), "r"((FB_W - srcrect.w) * 4), "r"(NDS_H)
            : "q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9", "q10", "q11", "q12", "q13", "q14", "q15", "memory", "cc"
        );
    }
    else {
        for (y = 0; y < srcrect.h; y++) {
            for (x = 0; x < srcrect.w; x++) {
                *dst++ = *src++;
            }
            dst+= (FB_W - srcrect.w);
        }
    }
}
#endif

#if defined(PANDORA)
    if ((pitch == 1024) && (srcrect.w == NDS_W) && (srcrect.h == NDS_H)) {
        uint32_t *dst = (uint32_t *)myvideo.gfx.mem[(myvideo.fb.var_info.yoffset == 0) ? 0 : 1];

        if (dstrect.y == 0) {
            dst += 16;
            dst += (((FB_H - NDS_Hx2) >> 1) * FB_W);
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
            dst += (((FB_H - NDS_H) >> 1) * FB_W) + 1;
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

        for (y = 0; y < srcrect.h; y++) {
            for (x = 0; x < srcrect.w; x++) {
                *dst++ = *src++;
            }
            dst+= (FB_W - srcrect.w);
        }
    }
#endif

#if defined(TRIMUI)
    if (pixels == NULL) {
        return -1;
    }

    if ((pitch / srcrect.w) != 4) {
        printf(PREFIX"Only support 32bits (%dx%dx%d)\n", srcrect.w, srcrect.h, (pitch / srcrect.w));
        return -1;
    }

    if (nds.dis_mode == NDS_DIS_MODE_S0) {
        ox = 32;
        oy = 24;
    }

    if((srcrect.w == NDS_W) && (srcrect.h == NDS_H)) {
        if (nds.dis_mode == NDS_DIS_MODE_S0) {
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
        if ((srcrect.w >= 320) || (srcrect.h >= 240)) {
            ox = 0;
            oy = 0;
            sw = FB_W;
            sh = FB_H;
        }

        dst = (uint32_t *)myvideo.gfx.ion.vadd + (FB_W * FB_H * myvideo.fb.flip);
        for (y = 0; y < sh; y++) {
            for (x = 0; x < sw; x++) {
                dst[((((sw - 1) - x) + ox) * FB_H) + y + oy] = *src++;
            }
        }
    }
#endif

#if defined(MINI)
    if (pixels == NULL) {
        return -1;
    }

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
        if (nds.alpha.val > NDS_ALPHA_MAX) {
            nds.alpha.val = 0;
        }

        if (nds.alpha.val > 0) {
            float m0 = (float)nds.alpha.val / 10;
            float m1 = 1.0 - m0;
            uint32_t *d = myvideo.tmp.virt_addr;
            uint32_t r0 = 0, g0 = 0, b0 = 0;
            uint32_t r1 = 0, g1 = 0, b1 = 0;
            int x = 0, y = 0, ax = 0, ay = 0, sw = 0, sh = 0;
            const uint32_t *s0 = myvideo.fb.virt_addr + (FB_W * myvideo.fb.var_info.yoffset * FB_BPP);
            const uint16_t *s1_565 = pixels;
            const uint32_t *s1_888 = pixels;
            uint32_t col[] = {
                0x000000, 0xa0a0a0, 0x400000, 0x004000, 0x000040, 0x000000, 0xa0a000, 0x00a0a0
            };

            switch (nds.dis_mode) {
            case NDS_DIS_MODE_VH_T0:
                sw = 170;
                sh = 128;
                break;
            case NDS_DIS_MODE_VH_T1:
                sw = srcrect.w;
                sh = srcrect.h;
                break;
            }

            ay = 0;
            for (y=0; y<sh; y++) {
                switch (nds.dis_mode) {
                case NDS_DIS_MODE_VH_T0:
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
                        case NDS_DIS_MODE_VH_T0:
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
        case NDS_DIS_MODE_VH_T0:
            dstrect.w = 170;
            dstrect.h = 128;
            if (nds.alpha.val > 0) {
                srcrect.w = dstrect.w;
                srcrect.h = dstrect.h;
                pitch = srcrect.w * 4;
            }
            break;
        case NDS_DIS_MODE_VH_T1:
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
                srcrect.x = 0;
                srcrect.y = 0;
                srcrect.w = NDS_Wx2;
                srcrect.h = NDS_Hx2;
                pitch = srcrect.w * 4;
            }
            else {
                int x = 0, y = 0;
                uint16_t *s0 = NULL;
                uint16_t *s1 = (uint16_t*)pixels;
                uint16_t *d = (uint16_t*)myvideo.tmp.virt_addr;

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
            neon_memcpy(myvideo.tmp.virt_addr, pixels, srcrect.h * pitch);
            myvideo.gfx.src.surf.phyAddr = myvideo.tmp.phy_addr;
            MI_SYS_FlushInvCache(myvideo.tmp.virt_addr, pitch * srcrect.h);
        }
    }
    else {
        myvideo.gfx.src.surf.phyAddr = myvideo.tmp.phy_addr;
        MI_SYS_FlushInvCache(myvideo.tmp.virt_addr, pitch * srcrect.h);
    }

    myvideo.gfx.opt.u32GlobalSrcConstColor = 0;
    myvideo.gfx.opt.eRotate = rotate;
    myvideo.gfx.opt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
    myvideo.gfx.opt.eDstDfbBldOp = 0;
    myvideo.gfx.opt.eDFBBlendFlag = 0;

    myvideo.gfx.src.rt.s32Xpos = srcrect.x;
    myvideo.gfx.src.rt.s32Ypos = srcrect.y;
    myvideo.gfx.src.rt.u32Width = srcrect.w;
    myvideo.gfx.src.rt.u32Height = srcrect.h;
    myvideo.gfx.src.surf.u32Width = srcrect.w;
    myvideo.gfx.src.surf.u32Height = srcrect.h;
    myvideo.gfx.src.surf.u32Stride = pitch;
    myvideo.gfx.src.surf.eColorFmt = is_rgb565 ? E_MI_GFX_FMT_RGB565 : E_MI_GFX_FMT_ARGB8888;

    myvideo.gfx.dst.rt.s32Xpos = dstrect.x;
    myvideo.gfx.dst.rt.s32Ypos = dstrect.y;
    myvideo.gfx.dst.rt.u32Width = dstrect.w;
    myvideo.gfx.dst.rt.u32Height = dstrect.h;
    myvideo.gfx.dst.surf.u32Width = FB_W;
    myvideo.gfx.dst.surf.u32Height = FB_H;
    myvideo.gfx.dst.surf.u32Stride = FB_W * FB_BPP;
    myvideo.gfx.dst.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    myvideo.gfx.dst.surf.phyAddr = myvideo.fb.phy_addr + (FB_W * myvideo.fb.var_info.yoffset * FB_BPP);

    MI_GFX_BitBlit(&myvideo.gfx.src.surf, &myvideo.gfx.src.rt, &myvideo.gfx.dst.surf, &myvideo.gfx.dst.rt, &myvideo.gfx.opt, &u16Fence);
    MI_GFX_WaitAllDone(FALSE, u16Fence);
#endif

    return 0;
}

#if defined(FLIP)
static void drm_flip_handler(int fd, unsigned int frame, unsigned int sec, unsigned int usec, void *data)
{
    debug("call %s()\n", __func__);

    *((int *)data) = 0;
}
 
drmEventContext drm_evctx = {
    .version = DRM_EVENT_CONTEXT_VERSION,
    .page_flip_handler = drm_flip_handler,
};
#endif

void flip_lcd(void)
{
#if defined(TRIMUI)
    int r = 0;
#endif

#if defined(PANDORA)
    int arg = 0;
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

#if defined(FLIP)
    int wait_cnt = 0;
#endif

    debug("call %s()\n", __func__);

#if defined(QX1000) || defined(XT897)
    myvideo.wl.flip ^= 1;
#endif

#if defined(PANDORA)
    ioctl(myvideo.fb.fd[1], FBIOPAN_DISPLAY, &myvideo.fb.var_info);
    ioctl(myvideo.fb.fd[1], FBIO_WAITFORVSYNC, &arg);
    myvideo.fb.var_info.yoffset ^= FB_H;
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP)
    eglSwapBuffers(myvideo.eglDisplay, myvideo.eglSurface);

#if defined(FLIP) 
    myvideo.drm.wait_for_flip = 1;
    myvideo.drm.bo = gbm_surface_lock_front_buffer(myvideo.drm.gs);
    drmModeAddFB(myvideo.drm.fd, DEF_FB_W, DEF_FB_H, 24, 32, gbm_bo_get_stride(myvideo.drm.bo), gbm_bo_get_handle(myvideo.drm.bo).u32, (uint32_t *)&myvideo.drm.fb);
    drmModeSetCrtc(myvideo.drm.fd, myvideo.drm.crtc->crtc_id, myvideo.drm.fb, 0, 0, (uint32_t *)myvideo.drm.conn, 1, &myvideo.drm.crtc->mode);
    drmModePageFlip(myvideo.drm.fd, myvideo.drm.crtc->crtc_id, myvideo.drm.fb, DRM_MODE_PAGE_FLIP_EVENT, (void *)&myvideo.drm.wait_for_flip);

    //wait_cnt = 10;
    //while (wait_cnt-- && myvideo.drm.wait_for_flip) {
        //usleep(10);
        //drmHandleEvent(myvideo.drm.fd, &drm_evctx);
    //}

    gbm_surface_release_buffer(myvideo.drm.gs, myvideo.drm.bo);
#endif

    if (nds.theme.img) {
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, myvideo.texID[TEXTURE_BG]);
        glVertexAttribPointer(myvideo.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bg_vertices);
        glVertexAttribPointer(myvideo.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bg_vertices[3]);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);
    }

#endif

#if defined(MINI)
    ioctl(myvideo.fb.fd, FBIOPAN_DISPLAY, &myvideo.fb.var_info);
    myvideo.fb.var_info.yoffset ^= FB_H;
#endif

#if defined(TRIMUI)
    myvideo.gfx.buf.info.fb.addr[0] = (uintptr_t)((uint32_t *)myvideo.gfx.ion.padd + (FB_W * FB_H * myvideo.fb.flip));
    myvideo.gfx.mem[OVL_V_TOP_LADD0 / 4] = myvideo.gfx.buf.info.fb.addr[0];
    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);
    myvideo.fb.flip^= 1;
#endif
}

int get_font_width(const char *info)
{
    int w = 0, h = 0;

    if (nds.font && info) {
        TTF_SizeUTF8(nds.font, info, &w, &h);
    }
    return w;
}

int get_font_height(const char *info)
{
    int w = 0, h = 0;

    if (nds.font && info) {
        TTF_SizeUTF8(nds.font, info, &w, &h);
    }
    return h;
}

const char *to_lang(const char *p)
{
    const char *info = p;
    char buf[MAX_PATH] = {0};
    int cc = 0, r = 0, len = 0;
    
    if (!strcmp(nds.lang.trans[DEF_LANG_SLOT], DEF_LANG_LANG) || (p == NULL)) {
        return p;
    }

    strcpy(buf, p);
    strcat(buf, "=");
    len = strlen(buf);
    if ((len == 0) || (len >= MAX_PATH)) {
        return 0;
    }

    for (cc=0; translate[cc]; cc++) {
        if (memcmp(buf, translate[cc], len) == 0) {
            r = 1;
            info = &translate[cc][len];
            //printf(PREFIX"Translate \'%s\' as \'%s\'\n", p, info);
            break;
        }
    }

    if (r == 0) {
        //printf(PREFIX"Failed to find the translation: \'%s\'(len=%d)\n", p, len);
        info = p;
    }
    return info;
}

int draw_info(SDL_Surface *dst, const char *info, int x, int y, uint32_t fgcolor, uint32_t bgcolor)
{
    int w = 0, h = 0;
    SDL_Color fg = {0};
    SDL_Rect rt = {0, 0, 0, 0};
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    SDL_Surface *t2 = NULL;

    h = strlen(info);
    if ((nds.font == NULL) || (h == 0) || (h >= MAX_PATH)) {
        return -1;
    }

    fg.r = (fgcolor >> 16) & 0xff;
    fg.g = (fgcolor >> 8) & 0xff;
    fg.b = (fgcolor >> 0) & 0xff;
    TTF_SizeUTF8(nds.font, info, &w, &h);
    t0 = TTF_RenderUTF8_Solid(nds.font, info, fg);
    if (t0) {
        if (dst == NULL) {
            t1 = SDL_CreateRGBSurface(SDL_SWSURFACE, t0->w, t0->h, 32, 0, 0, 0, 0);
            if (t1) {
                SDL_FillRect(t1, &t1->clip_rect, bgcolor);
                SDL_BlitSurface(t0, NULL, t1, NULL);

                t2 = SDL_ConvertSurface(t1, cvt->format, 0);
                if (t2) {
                    rt.x = x;
                    rt.y = y;
                    rt.w = t2->w;
                    rt.h = t2->h;
                    flush_lcd(-1, t2->pixels, t2->clip_rect, rt, t2->pitch, 0, E_MI_GFX_ROTATE_180);
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
    }
    return 0;
}

int reload_pen(void)
{
    static int pre_sel = -1;

    char buf[MAX_PATH] = {0};
    SDL_Surface *t = NULL;

    if (pre_sel != nds.pen.sel) {
        pre_sel = nds.pen.sel;

        if (nds.pen.img) {
            SDL_FreeSurface(nds.pen.img);
            nds.pen.img = NULL;
        }

        nds.pen.type = PEN_LB;
        if (get_file_path(nds.pen.path, nds.pen.sel, buf, 1) == 0) {
            t = IMG_Load(buf);
            if (t) {
#if defined(A30) || defined(RG28XX) || defined(FLIP)
                int x = 0;
                int y = 0;
                uint32_t *p = malloc(t->pitch * t->h);
                uint32_t *src = t->pixels;
                uint32_t *dst = p;

                for (y = 0; y < t->h; y++) {
                    for (x = 0; x < t->w; x++) {
                        *dst++ = *src++;
                    }
                }
                glBindTexture(GL_TEXTURE_2D, myvideo.texID[TEXTURE_PEN]);
                glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
                glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, t->w, t->h, 0, GL_RGBA, GL_UNSIGNED_BYTE, p);
                free(p);
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
                error("failed to load pen (%s)\n", buf);
            }
        }
    }
    return 0;
}

int reload_menu(void)
{
    SDL_Surface *t = NULL;
    char folder[MAX_PATH] = {0};
    char buf[MAX_PATH << 1] = {0};

    if (get_dir_path(nds.menu.path, nds.menu.sel, folder) != 0) {
        return -1;
    }

    sprintf(buf, "%s/%s", folder, MENU_BG_FILE);
    t = IMG_Load(buf);
    if (t) {
        if (nds.menu.bg) {
            SDL_FreeSurface(nds.menu.bg);
        }
        nds.menu.bg = SDL_ConvertSurface(t, cvt->format, 0);
        SDL_FreeSurface(t);
    }

    sprintf(buf, "%s/%s", folder, MENU_CURSOR_FILE);
    nds.menu.cursor = IMG_Load(buf);

    sprintf(buf, "%s/%s", folder, DRASTIC_MENU_BG0_FILE);
    t = IMG_Load(buf);
    if (t) {
        if (nds.menu.drastic.bg0) {
            SDL_FreeSurface(nds.menu.drastic.bg0);
        }
        nds.menu.drastic.bg0 = SDL_ConvertSurface(t, cvt->format, 0);
        SDL_FreeSurface(t);
    }

    sprintf(buf, "%s/%s", folder, DRASTIC_MENU_BG1_FILE);
    t = IMG_Load(buf);
    if (t) {
        if (nds.menu.drastic.bg1) {
            SDL_FreeSurface(nds.menu.drastic.bg1);
        }
        nds.menu.drastic.bg1 = SDL_ConvertSurface(t, cvt->format, 0);
        SDL_FreeSurface(t);
    }

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(UT) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    sprintf(buf, "%s/%s", folder, DRASTIC_MENU_CURSOR_FILE);
    nds.menu.drastic.cursor = IMG_Load(buf);
#endif

#if defined(TRIMUI)
    nds.menu.drastic.cursor = NULL;
#endif

    sprintf(buf, "%s/%s", folder, DRASTIC_MENU_YES_FILE);
    t = IMG_Load(buf);
    if (t) {
        SDL_Rect nrt = { 0 };

#if defined(MINI) || defined(QX1000) || defined(XT897) || defined(A30) || defined(RG28XX) || defined(UT) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        nrt.w = LINE_H - 2;
        nrt.h = LINE_H - 2;
#endif
#if defined(TRIMUI) || defined(PANDORA)
        nrt.w = t->w >> 1;
        nrt.h = t->h >> 1;
#endif
        if (nds.menu.drastic.yes) {
            SDL_FreeSurface(nds.menu.drastic.yes);
        }
        nds.menu.drastic.yes = SDL_CreateRGBSurface(SDL_SWSURFACE, nrt.w, nrt.h, 32, t->format->Rmask, t->format->Gmask, t->format->Bmask, t->format->Amask);
        if (nds.menu.drastic.yes) {
            SDL_SoftStretch(t, NULL, nds.menu.drastic.yes, NULL);
        }
        SDL_FreeSurface(t);
    }

    sprintf(buf, "%s/%s", folder, DRASTIC_MENU_NO_FILE);
    t = IMG_Load(buf);
    if (t) {
        SDL_Rect nrt = { 0 };

#if defined(MINI) || defined(QX1000) || defined(XT897) || defined(A30) || defined(RG28XX) || defined(UT) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        nrt.w = LINE_H - 2;
        nrt.h = LINE_H - 2;
#endif
#if defined(TRIMUI) || defined(PANDORA)
        nrt.w = t->w >> 1;
        nrt.h = t->h >> 1;
#endif
        if (nds.menu.drastic.no) {
            SDL_FreeSurface(nds.menu.drastic.no);
        }
        nds.menu.drastic.no = SDL_CreateRGBSurface(SDL_SWSURFACE, nrt.w, nrt.h, 32, t->format->Rmask, t->format->Gmask, t->format->Bmask, t->format->Amask);
        if (nds.menu.drastic.no) {
            SDL_SoftStretch(t, NULL, nds.menu.drastic.no, NULL);
        }
        SDL_FreeSurface(t);
    }

    return 0;
}

int reload_bg(void)
{
#if !defined(QX1000) && !defined(XT897) && !defined(UT)
    static int pre_sel = -1;
#endif

#if !defined(QX1000) && !defined(XT897) && !defined(UT)
    static int pre_mode = -1;
#endif

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    char buf[MAX_PATH] = {0};
    SDL_Surface *t = NULL;
    SDL_Rect srt = {0, 0, IMG_W, IMG_H};
    SDL_Rect drt = {0, 0, FB_W, FB_H};

    if (nds.enable_752x560) {
        srt.w = FB_W;
        srt.h = FB_H;
    }

    if ((pre_sel != nds.theme.sel) || (pre_mode != nds.dis_mode)) {
        pre_mode = nds.dis_mode;
        pre_sel = nds.theme.sel;

        if (nds.theme.img) {
            SDL_FreeSurface(nds.theme.img);
            nds.theme.img = NULL;
        }

        nds.theme.img = SDL_CreateRGBSurface(SDL_SWSURFACE, srt.w, srt.h, 32, 0, 0, 0, 0);
        if (nds.theme.img) {
            SDL_FillRect(nds.theme.img, &nds.theme.img->clip_rect, SDL_MapRGB(nds.theme.img->format, 0x00, 0x00, 0x00));

            if (get_dir_path(nds.theme.path, nds.theme.sel, buf) == 0) {
                switch (nds.dis_mode) {
                case NDS_DIS_MODE_VH_T0:
                case NDS_DIS_MODE_VH_T1:
                    return 0;
                case NDS_DIS_MODE_S0:
                    strcat(buf, "/bg_s0.png");
                    break;
                case NDS_DIS_MODE_S1:
                    return 0;
                case NDS_DIS_MODE_V0:
                    strcat(buf, "/bg_v0.png");
                    break;
                case NDS_DIS_MODE_V1:
                    strcat(buf, "/bg_v1.png");
                    break;
                case NDS_DIS_MODE_H0:
                    strcat(buf, "/bg_h0.png");
                    break;
                case NDS_DIS_MODE_H1:
                    strcat(buf, "/bg_h1.png");
                    break;
                case NDS_DIS_MODE_VH_S0:
                    strcat(buf, "/bg_vh_s0.png");
                    break;
                case NDS_DIS_MODE_VH_S1:
                    strcat(buf, "/bg_vh_s1.png");
                    break;
                case NDS_DIS_MODE_VH_S2:
                    strcat(buf, "/bg_vh_s2.png");
                    break;
                case NDS_DIS_MODE_VH_S3:
                    strcat(buf, "/bg_vh_s3.png");
                    break;
                case NDS_DIS_MODE_VH_S4:
                    strcat(buf, "/bg_vh_s4.png");
                    break;
                case NDS_DIS_MODE_VH_S5:
                    strcat(buf, "/bg_vh_s5.png");
                    break;
                case NDS_DIS_MODE_VH_C0:
                    strcat(buf, "/bg_vh_c0.png");
                    break;
                case NDS_DIS_MODE_VH_C1:
                    strcat(buf, "/bg_vh_c1.png");
                    break;
                case NDS_DIS_MODE_HH0:
                case NDS_DIS_MODE_HH1:
                    strcat(buf, "/bg_hh0.png");
                    break;
                case NDS_DIS_MODE_HRES0:
                    strcat(buf, "/bg_hres0.png");
                    break;
                case NDS_DIS_MODE_HRES1:
                    return 0;
                }
                
                t = IMG_Load(buf);
                if (t) {
#if defined(GKD2) || defined(BRICK)
                    strcpy(myvideo.shm.buf->bg_path, buf);
#endif

                    SDL_BlitSurface(t, NULL, nds.theme.img, NULL);
                    SDL_FreeSurface(t);
#if !defined(A30) && !defined(RG28XX) && !defined(FLIP)
#if defined(GKD2) || defined(BRICK)
                    flush_lcd(TEXTURE_BG, nds.theme.img->pixels, nds.theme.img->clip_rect, drt, nds.theme.img->pitch, 0, 0);
#else
                    flush_lcd(-1, nds.theme.img->pixels, nds.theme.img->clip_rect, drt, nds.theme.img->pitch, 0, E_MI_GFX_ROTATE_180);
#endif
#endif
                }
                else {
                    printf(PREFIX"Failed to load wallpaper (%s)\n", buf);
                }
            }
        }
    }
    else {
        if (nds.theme.img) {
#if !defined(A30) && !defined(RG28XX) && !defined(FLIP)
#if defined(GKD2) || defined(BRICK)
            flush_lcd(TEXTURE_BG, nds.theme.img->pixels, nds.theme.img->clip_rect, drt, nds.theme.img->pitch, 0, 0);
#else
            flush_lcd(-1, nds.theme.img->pixels, nds.theme.img->clip_rect, drt, nds.theme.img->pitch, 0, E_MI_GFX_ROTATE_180);
#endif
#else
            glBindTexture(GL_TEXTURE_2D, myvideo.texID[TEXTURE_BG]);
            glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, nds.theme.img->w, nds.theme.img->h, 0, GL_RGBA, GL_UNSIGNED_BYTE, nds.theme.img->pixels);
#endif
        }
    }
#endif

#if defined(TRIMUI)
    char buf[MAX_PATH] = {0};
    SDL_Surface *t = NULL;

    if (nds.dis_mode == NDS_DIS_MODE_S1) {
        return 0;
    }

    if (pre_mode != nds.dis_mode) {
        pre_mode = nds.dis_mode;
        disp_resize();
    }

    if (pre_sel != nds.theme.sel) {
        pre_sel = nds.theme.sel;

        if (nds.theme.img) {
            SDL_FreeSurface(nds.theme.img);
            nds.theme.img = NULL;
        }

        nds.theme.img = SDL_CreateRGBSurface(SDL_SWSURFACE, IMG_W, IMG_H, 32, 0, 0, 0, 0);
        if (nds.theme.img) {
            SDL_FillRect(nds.theme.img, &nds.theme.img->clip_rect, SDL_MapRGB(nds.theme.img->format, 0x00, 0x00, 0x00));

            if (get_dir_path(nds.theme.path, nds.theme.sel, buf) == 0) {
                strcat(buf, "/bg_s0.png");
                t = IMG_Load(buf);
                if (t) {
                    SDL_BlitSurface(t, NULL, nds.theme.img, NULL);
                    SDL_FreeSurface(t);
                }
                else {
                    printf(PREFIX"Failed to load wallpaper (%s)\n", buf);
                }
            }
        }
    }
    
    if (nds.theme.img) {
        int x = 0;
        int y = 0;
        int z = 0;
        uint32_t *dst = NULL;
        uint32_t *src = NULL;

        ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &z);
        for (z=0; z<2; z++) {
            src = (uint32_t *)nds.theme.img->pixels;
            dst = (uint32_t *)myvideo.gfx.ion.vadd + (FB_W * FB_H * z);
            for (y = 0; y < FB_H; y++) {
                for (x = 0; x < FB_W; x++) {
                    dst[(((FB_W - 1) - x) * FB_H) + y] = *src;
                    src+= 2;
                }
                src+= IMG_W;
            }
        }
        ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &z);
    }
#endif

#if defined(PANDORA)
    SDL_Surface *t = NULL;
    char buf[MAX_PATH] = {0};

    if (pre_sel != nds.theme.sel) {
        pre_sel = nds.theme.sel;

        if (nds.theme.img) {
            SDL_FreeSurface(nds.theme.img);
            nds.theme.img = NULL;
        }

        nds.theme.img = SDL_CreateRGBSurface(SDL_SWSURFACE, IMG_W, IMG_H, 32, 0, 0, 0, 0);
        if (nds.theme.img) {
            SDL_FillRect(nds.theme.img, &nds.theme.img->clip_rect, SDL_MapRGB(nds.theme.img->format, 0x00, 0x00, 0x00));

            if (get_dir_path(nds.theme.path, nds.theme.sel, buf) == 0) {
                strcat(buf, "/bg.png");
                t = IMG_Load(buf);
                if (t) {
                    SDL_Rect r0 = {0};

                    SDL_BlitSurface(t, NULL, nds.theme.img, NULL);
                    SDL_FreeSurface(t);

                    r0.x = 16 - 1;
                    r0.y = 48 - 1;
                    r0.w = NDS_Wx2 + 2;
                    r0.h = NDS_Hx2 + 2;
                    SDL_FillRect(nds.theme.img, &r0, SDL_MapRGB(nds.theme.img->format, 0, 0, 0));

                    r0.x = (NDS_Wx2 + 16) - 0;
                    r0.y = ((FB_H - NDS_H) >> 1) - 1;
                    r0.w = NDS_W + 2;
                    r0.h = NDS_H + 2;
                    SDL_FillRect(nds.theme.img, &r0, SDL_MapRGB(nds.theme.img->format, 0, 0, 0));
                }
                else {
                    printf(PREFIX"Failed to load wallpaper (%s)\n", buf);
                }
            }
        }
    }

    if (nds.theme.img) {
        neon_memcpy(myvideo.gfx.mem[(myvideo.fb.var_info.yoffset == 0) ? 0 : 1], nds.theme.img->pixels, FB_W * FB_H * 4);
    }
#endif
    return 0;
}

static void quit_device(SDL_VideoDevice *d)
{
    SDL_free(d);
}

int create_window(_THIS, SDL_Window *w)
{
    debug("call %s(w=%d, h=%d)\n", __func__, w->w, w->h);

    myvideo.win = w;
    SDL_SetMouseFocus(w);
    SDL_SetKeyboardFocus(w);
    return 0;
}

int create_window_from(_THIS, SDL_Window *w, const void *d)
{
    return SDL_Unsupported();
}

static SDL_VideoDevice *create_device(int idx)
{
    SDL_VideoDevice *d = NULL;

    d = (SDL_VideoDevice *) SDL_calloc(1, sizeof(SDL_VideoDevice));

    if (!d) {
        SDL_OutOfMemory();
        return 0;
    }

    d->VideoInit = init_video;
    d->VideoQuit = quit_video;
    d->SetDisplayMode = set_disp_mode;
    d->CreateSDLWindow = create_window;
    d->CreateSDLWindowFrom = create_window_from;
    d->free = quit_device;
    d->PumpEvents = pump_event;

    return d;
}

VideoBootStrap NDS_bootstrap = {
    "NDS",
    "NDS Video Driver",
    create_device
};

int init_video(_THIS)
{
    SDL_DisplayMode mode = { 0 };
    SDL_VideoDisplay display = { 0 };

    debug("call %s()\n", __func__);

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

    LINE_H = 30;
    FONT_SIZE = DEF_FONT_SIZE;

    FB_W = DEF_FB_W;
    FB_H = DEF_FB_H;
    FB_SIZE = FB_W * FB_H * FB_BPP * 2;
    TMP_SIZE = FB_W * FB_H * FB_BPP;

    init_gfx();
    read_config();
    init_event();

    init_hook(sysconf(_SC_PAGESIZE), nds.states.path);

    add_prehook_cb(myhook.fun.platform_get_input, prehook_cb_platform_get_input);
    add_prehook_cb(myhook.fun.print_string,     prehook_cb_print_string);
#if !defined(PANDORA)
    add_prehook_cb(myhook.fun.savestate_pre,    prehook_cb_savestate_pre);
    add_prehook_cb(myhook.fun.savestate_post,   prehook_cb_savestate_post);
#endif
    add_prehook_cb(myhook.fun.blit_screen_menu, prehook_cb_blit_screen_menu);
    add_prehook_cb(myhook.fun.update_screen,    prehook_cb_update_screen);

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(UT) || defined(GKD2) || defined(BRICK)
    add_prehook_cb(myhook.fun.malloc,  prehook_cb_malloc);
    add_prehook_cb(myhook.fun.realloc, prehook_cb_realloc);
    add_prehook_cb(myhook.fun.free,    prehook_cb_free);
#endif
    return 0;
}

static int set_disp_mode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode)
{
    return 0;
}

void quit_video(_THIS)
{
    printf(PREFIX"quit_video\n");
    printf(PREFIX"Wait for savestate complete\n");
    while (savestate_busy) {
        usleep(1000000);
    }
    system("sync");
    quit_hook();
    write_config();

    if (fps_info) {
        SDL_FreeSurface(fps_info);
        fps_info = NULL;
    }

    if (nds.pen.img) {
        SDL_FreeSurface(nds.pen.img);
        nds.pen.img = NULL;
    }

    if (nds.theme.img) {
        SDL_FreeSurface(nds.theme.img);
        nds.theme.img = NULL;
    }

    if (nds.menu.bg) {
        SDL_FreeSurface(nds.menu.bg);
        nds.menu.bg = NULL;
    }

    if (nds.menu.cursor) {
        SDL_FreeSurface(nds.menu.cursor);
        nds.menu.cursor = NULL;
    }

    if (nds.menu.drastic.bg0) {
        SDL_FreeSurface(nds.menu.drastic.bg0);
        nds.menu.drastic.bg0 = NULL;
    }

    if (nds.menu.drastic.bg1) {
        SDL_FreeSurface(nds.menu.drastic.bg1);
        nds.menu.drastic.bg1 = NULL;
    }

    if (nds.menu.drastic.cursor) {
        SDL_FreeSurface(nds.menu.drastic.cursor);
        nds.menu.drastic.cursor = NULL;
    }

    if (nds.menu.drastic.main) {
        SDL_FreeSurface(nds.menu.drastic.main);
        nds.menu.drastic.main = NULL;
    }

    if (nds.menu.drastic.yes) {
        SDL_FreeSurface(nds.menu.drastic.yes);
        nds.menu.drastic.yes = NULL;
    }

    if (nds.menu.drastic.no) {
        SDL_FreeSurface(nds.menu.drastic.no);
        nds.menu.drastic.no = NULL;
    }

    if (nds.font) {
        TTF_CloseFont(nds.font);
        nds.font = NULL;
    }

    printf(PREFIX"Free TTF resources\n");
    TTF_Quit();

    printf(PREFIX"Free GFX resources\n");
    GFX_Quit();

    printf(PREFIX"Free Event resources\n");
    quit_event();

    printf(PREFIX"Free Lang resources\n");
    lang_unload();
}

#if defined(MINI) || defined(QX1000) || defined(XT897) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(UT) || defined(GKD2) || defined(BRICK) || defined(XT897) || defined(TRIMUI)
static const char *DIS_MODE0_640[] = {
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

    "512*384",
    "512*384",
    "512*384",

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

    "240*176",
    "240*176",
    "240*176",

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

#if defined(A30) || defined(FLIP)
static const char *JOY_MODE[] = {
    "Disable", "D-Pad", "Stylus", "Customized Key"
};

static const char *RJOY_MODE[] = {
    "Disable", "4-Btn", "Stylus", "Customized Key"
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

static int lang_prev(void)
{
    int cc = 0;

    for (cc=(MAX_LANG_FILE-1); cc>1; cc--) {
        if (!strcmp(nds.lang.trans[DEF_LANG_SLOT], nds.lang.trans[cc])) {
            if (strcmp(nds.lang.trans[cc - 1], "")) {
                strcpy(nds.lang.trans[DEF_LANG_SLOT], nds.lang.trans[cc - 1]);
                return 0;
            }
        }
    }
    return -1;
}

enum {
    MENU_LANG = 0,
#if defined(A30) || defined(RG28XX) || defined(FLIP)
    MENU_CPU_CORE,
#if defined(A30)
    MENU_CPU_CLOCK,
#endif
#else
    MENU_CPU,
#endif
    MENU_DIS,
    MENU_DIS_ALPHA,
    MENU_DIS_BORDER,
    MENU_DIS_POSITION,
    MENU_ALT,
    MENU_KEYS,
    MENU_HOTKEY,
    MENU_SWAP_L1L2,
    MENU_SWAP_R1R2,
    MENU_PEN_XV,
    MENU_CURSOR,
    MENU_FAST_FORWARD,
#if defined(A30) || defined(FLIP)
    MENU_JOY_MODE,
    MENU_JOY_CUSKEY0,
    MENU_JOY_CUSKEY1,
    MENU_JOY_CUSKEY2,
    MENU_JOY_CUSKEY3,
    MENU_JOY_DZONE,
#endif
#if defined(FLIP)
    MENU_RJOY_MODE,
    MENU_RJOY_CUSKEY0,
    MENU_RJOY_CUSKEY1,
    MENU_RJOY_CUSKEY2,
    MENU_RJOY_CUSKEY3,
    MENU_RJOY_DZONE,
#endif

#if defined(MINI) || defined(A30) || defined(FLIP)
    MENU_CHK_BAT,
#endif
    MENU_LAST,
};

static const char *MENU_ITEM[] = {
    "Language",
#if defined(A30) || defined(RG28XX) || defined(FLIP)
    "CPU Core",
#if defined(A30)
    "CPU Clock",
#endif
#else
    "CPU",
#endif
    "Overlay",
    "Display",
    "Alpha",
    "Border",
    "Position",
    "Alt. Display",
    "Keys",
    "Hotkey",
    "Swap L1-L2",
    "Swap R1-R2",
    "Pen Speed",
    "Cursor",
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
    "Check Battery",
};

int handle_menu(int key)
{
    static int pre_ff = 0;
    static int cur_sel = 0;
#if defined(A30) || defined(RG28XX) || defined(FLIP)
    static uint32_t cur_cpucore = INIT_CPU_CORE;
    static uint32_t pre_cpucore = INIT_CPU_CORE;
#if defined(A30)
    static uint32_t cur_cpuclock = INIT_CPU_CLOCK;
    static uint32_t pre_cpuclock = INIT_CPU_CLOCK;
#endif
#else
    static uint32_t cur_cpuclock = 0;
    static uint32_t pre_cpuclock = 0;
#endif
    static char pre_lang[LANG_FILE_LEN] = {0};

    const int SX = nds.enable_752x560 ? 200 : 150;
    const int SY = nds.enable_752x560 ? 120 : 107;
    const int SSX = nds.enable_752x560 ? 410 : 385;

    int cc = 0;
    int sx = 0;
    int sy = 0;
    int s0 = 0;
    int s1 = 0;
    int idx = 0;
    int h = LINE_H;
    int dis_mode = -1;
    SDL_Rect rt = {0};
    char buf[MAX_PATH] = {0};
    uint32_t sel_col = nds.menu.c0;
    uint32_t unsel_col = nds.menu.c1;
    uint32_t dis_col = 0x808080;
    uint32_t val_col = nds.menu.c0;
    uint32_t col0 = 0, col1 = 0;

    if (pre_lang[0] == 0) {
        strcpy(pre_lang, nds.lang.trans[DEF_LANG_SLOT]);
    }

#if !defined(RG28XX) && !defined(FLIP)
    if (pre_cpuclock == 0) {
#if defined(MINI)
        cur_cpuclock = pre_cpuclock = get_cpuclock();
#endif
    }
#endif

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
        switch(cur_sel) {
        case MENU_LANG:
            lang_prev();
            break;
#if defined(A30) || defined(RG28XX) || defined(FLIP)
        case MENU_CPU_CORE:
            if (cur_cpucore > nds.mincore) {
                cur_cpucore-= 1;
            }
            break;
#if defined(A30)
        case MENU_CPU_CLOCK:
            if (cur_cpuclock > nds.mincpu) {
                cur_cpuclock-= 50;
            }
            break;
#endif
#else
        case MENU_CPU:
            if (cur_cpuclock > nds.mincpu) {
                cur_cpuclock-= 50;
            }
            break;
#endif
        case MENU_HOTKEY:
            nds.hotkey = HOTKEY_BIND_MENU;
            break;
        case MENU_SWAP_L1L2:
            nds.swap_l1l2 = 0;
            break;
        case MENU_SWAP_R1R2:
            nds.swap_r1r2 = 0;
            break;
        case MENU_DIS:
            if (nds.hres_mode == 0) {
                if (nds.dis_mode > 0) {
                    nds.dis_mode-= 1;
                }
            }
            else {
                nds.dis_mode = NDS_DIS_MODE_HRES0;
            }
            break;
        case MENU_DIS_ALPHA:
            if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.val > 0) {
                    nds.alpha.val-= 1;
                }
            }
            break;
        case MENU_DIS_BORDER:
            if ((nds.alpha.val > 0) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.border > 0) {
                    nds.alpha.border-= 1;
                }
            }
            break;
        case MENU_DIS_POSITION:
            if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.pos > 0) {
                    nds.alpha.pos-= 1;
                }
            }
            break;
        case MENU_ALT:
            if ((nds.hres_mode == 0) && (nds.alt_mode > 0)) {
                nds.alt_mode-= 1;
            }
            break;
        case MENU_KEYS:
            if (nds.keys_rotate > 0) {
                nds.keys_rotate-= 1;
            }
            break;
        case MENU_PEN_XV:
            if (nds.pen.xv > 1) {
                nds.pen.xv-= 1;
            }
            break;
        case MENU_CURSOR:
            nds.menu.show_cursor = 0;
            break;
        case MENU_FAST_FORWARD:
            if (nds.fast_forward > 1) {
                nds.fast_forward -= 1;
            }
            break;
#if defined(A30) || defined(FLIP)
        case MENU_JOY_MODE:
            if (nds.joy.mode > 0) {
                nds.joy.mode -= 1;
            }
            break;
        case MENU_JOY_CUSKEY0:
            if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.joy.cuskey[0] > 0) {
                    nds.joy.cuskey[0] -= 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY1:
            if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.joy.cuskey[1] > 0) {
                    nds.joy.cuskey[1] -= 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY2:
            if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.joy.cuskey[2] > 0) {
                    nds.joy.cuskey[2] -= 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY3:
            if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.joy.cuskey[3] > 0) {
                    nds.joy.cuskey[3] -= 1;
                }
            }
            break;
        case MENU_JOY_DZONE:
            if (nds.joy.dzone > 0) {
                nds.joy.dzone -= 1;
            }
            break;
#endif
#if defined(FLIP)
        case MENU_RJOY_MODE:
            if (nds.rjoy.mode > 0) {
                nds.rjoy.mode -= 1;
            }
            break;
        case MENU_RJOY_CUSKEY0:
            if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.rjoy.cuskey[0] > 0) {
                    nds.rjoy.cuskey[0] -= 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY1:
            if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.rjoy.cuskey[1] > 0) {
                    nds.rjoy.cuskey[1] -= 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY2:
            if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.rjoy.cuskey[2] > 0) {
                    nds.rjoy.cuskey[2] -= 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY3:
            if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.rjoy.cuskey[3] > 0) {
                    nds.rjoy.cuskey[3] -= 1;
                }
            }
            break;
        case MENU_RJOY_DZONE:
            if (nds.rjoy.dzone > 0) {
                nds.rjoy.dzone -= 1;
            }
            break;
#endif
#if defined(MINI) || defined(A30) || defined(FLIP)
        case MENU_CHK_BAT:
            nds.chk_bat = 0;
            break;
#endif
        default:
            break;
        }
        break;
    case KEY_BIT_RIGHT:
        switch(cur_sel) {
        case MENU_LANG:
            lang_next();
            break;
#if defined(A30) || defined(RG28XX) || defined(FLIP)
        case MENU_CPU_CORE:
            if (cur_cpucore < nds.maxcore) {
                cur_cpucore+= 1;
            }
            break;
#if defined(A30)
        case MENU_CPU_CLOCK:
            if (cur_cpuclock < nds.maxcpu) {
                cur_cpuclock+= 50;
            }
            break;
#endif
#else
        case MENU_CPU:
            if (cur_cpuclock < nds.maxcpu) {
                cur_cpuclock+= 50;
            }
            break;
#endif
        case MENU_HOTKEY:
            nds.hotkey = HOTKEY_BIND_SELECT;
            break;
        case MENU_SWAP_L1L2:
            nds.swap_l1l2 = 1;
            break;
        case MENU_SWAP_R1R2:
            nds.swap_r1r2 = 1;
            break;
        case MENU_DIS:
            if (nds.hres_mode == 0) {
                if (nds.dis_mode < NDS_DIS_MODE_LAST) {
                    nds.dis_mode+= 1;
                }
            }
            else {
                nds.dis_mode = NDS_DIS_MODE_HRES1;
            }
            break;
        case MENU_DIS_ALPHA:
            if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.val < NDS_ALPHA_MAX) {
                    nds.alpha.val+= 1;
                }
            }
            break;
        case MENU_DIS_BORDER:
            if ((nds.alpha.val > 0) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.border < NDS_BORDER_MAX) {
                    nds.alpha.border+= 1;
                }
            }
            break;
        case MENU_DIS_POSITION:
            if (((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                if (nds.alpha.pos < 3) {
                    nds.alpha.pos+= 1;
                }
            }
            break;
        case MENU_ALT:
            if ((nds.hres_mode == 0) && (nds.alt_mode < NDS_DIS_MODE_LAST)) {
                nds.alt_mode+= 1;
            }
            break;
        case MENU_KEYS:
            if (nds.keys_rotate < 2) {
                nds.keys_rotate+= 1;
            }
            break;
        case MENU_PEN_XV:
            if (nds.pen.xv < 30) {
                nds.pen.xv+= 1;
            }
            break;
        case MENU_CURSOR:
            nds.menu.show_cursor = 1;
            break;
        case MENU_FAST_FORWARD:
            if (nds.fast_forward < 255) {
                nds.fast_forward += 1;
            }
            break;
#if defined(A30) || defined(FLIP)
        case MENU_JOY_MODE:
            if (nds.joy.mode < MYJOY_MODE_LAST) {
                nds.joy.mode += 1;
            }
            if (nds.joy.mode == MYJOY_MODE_STYLUS) {
                if (myevent.mode == NDS_TOUCH_MODE) {
                    myevent.mode = NDS_KEY_MODE;
                }
            }
            break;
        case MENU_JOY_CUSKEY0:
            if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.joy.cuskey[0] < 13) {
                    nds.joy.cuskey[0] += 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY1:
            if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.joy.cuskey[1] < 13) {
                    nds.joy.cuskey[1] += 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY2:
            if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.joy.cuskey[2] < 13) {
                    nds.joy.cuskey[2] += 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY3:
            if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.joy.cuskey[3] < 13) {
                    nds.joy.cuskey[3] += 1;
                }
            }
            break;
        case MENU_JOY_DZONE:
            if (nds.joy.dzone < 255) {
                nds.joy.dzone += 1;
            }
            break;
#endif
#if defined(FLIP)
        case MENU_RJOY_MODE:
            if (nds.rjoy.mode < MYJOY_MODE_LAST) {
                nds.rjoy.mode += 1;
            }
            if (nds.rjoy.mode == MYJOY_MODE_STYLUS) {
                if (myevent.mode == NDS_TOUCH_MODE) {
                    myevent.mode = NDS_KEY_MODE;
                }
            }
            break;
        case MENU_RJOY_CUSKEY0:
            if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.rjoy.cuskey[0] < 13) {
                    nds.rjoy.cuskey[0] += 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY1:
            if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.rjoy.cuskey[1] < 13) {
                    nds.rjoy.cuskey[1] += 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY2:
            if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.rjoy.cuskey[2] < 13) {
                    nds.rjoy.cuskey[2] += 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY3:
            if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (nds.rjoy.cuskey[3] < 13) {
                    nds.rjoy.cuskey[3] += 1;
                }
            }
            break;
        case MENU_RJOY_DZONE:
            if (nds.rjoy.dzone < 255) {
                nds.rjoy.dzone += 1;
            }
            break;
#endif
#if defined(MINI) || defined(A30) || defined(FLIP)
        case MENU_CHK_BAT:
            nds.chk_bat = 1;
            break;
#endif
        default:
            break;
        }
        break;
    case KEY_BIT_B:
#if !defined(RG28XX) && !defined(FLIP)
        if (cur_cpuclock != pre_cpuclock) {
#if defined(MINI)
            set_cpuclock(cur_cpuclock);
#endif

#if defined(A30)
            set_best_match_cpu_clock(cur_cpuclock);
#endif
            pre_cpuclock = cur_cpuclock;
        }
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP)
        if (cur_cpucore != pre_cpucore) {
            set_core(cur_cpucore);
            pre_cpucore = cur_cpucore;
        }
#endif

        if (strcmp(pre_lang, nds.lang.trans[DEF_LANG_SLOT])) {
            lang_unload();
            lang_load(nds.lang.trans[DEF_LANG_SLOT]);
            memset(pre_lang, 0, sizeof(pre_lang));
        }

        if (pre_ff != nds.fast_forward) {
            fast_forward(nds.fast_forward);
            pre_ff = nds.fast_forward;
        }
        nds.menu.enable = 0;
#if defined(QX1000) || defined(XT897)
        update_wayland_res(NDS_W * 2, NDS_H);
#endif
        return 0;
    default:
        break;
    }

    if (cur_sel == MENU_DIS) {
        dis_mode = nds.dis_mode;
    }
    if (cur_sel == MENU_ALT) {
        dis_mode = nds.alt_mode;
    }
    SDL_SoftStretch(nds.menu.bg, NULL, cvt, NULL);

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

    for (cc=0, idx=0; cc<MENU_LAST; cc++) {
        if ((cc < s0) || (cc > s1)) {
            continue;
        }

        sx = 0;
        col0 = (cur_sel == cc) ? sel_col : unsel_col;
        col1 = (cur_sel == cc) ? val_col : unsel_col;
        switch (cc) {
        case MENU_DIS_ALPHA:
            sx = 20;
            if ((cur_sel == MENU_DIS_ALPHA) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                col1 = val_col;
            }
            else {
                if ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1)) {
                    col1 = unsel_col;
                }
                else {
                    col1 = dis_col;
                }
            }
            break;
        case MENU_DIS_BORDER:
            sx = 20;
            if ((cur_sel == MENU_DIS_BORDER) && (nds.alpha.val > 0) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                col1 = val_col;
            }
            else {
                if ((nds.alpha.val > 0) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                    col1 = unsel_col;
                }
                else {
                    col1 = dis_col;
                }
            }
            break;
        case MENU_DIS_POSITION:
            sx = 20;
            if ((cur_sel == MENU_DIS_POSITION) && ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1))) {
                col1 = val_col;
            }
            else {
                if ((nds.dis_mode == NDS_DIS_MODE_VH_T0) || (nds.dis_mode == NDS_DIS_MODE_VH_T1)) {
                    col1 = unsel_col;
                }
                else {
                    col1 = dis_col;
                }
            }
            break;
        case MENU_ALT:
            if (nds.hres_mode == 0) {
                col1 = (cur_sel == cc) ? val_col : unsel_col;
            }
            else {
                col1 = unsel_col;
            }
            break;
#if defined(A30) || defined(FLIP)
        case MENU_JOY_CUSKEY0:
        case MENU_JOY_CUSKEY1:
        case MENU_JOY_CUSKEY2:
        case MENU_JOY_CUSKEY3:
            if (nds.joy.mode == MYJOY_MODE_CUSKEY) {
                col1 = (cur_sel == cc) ? val_col : unsel_col;
            }
            else {
                col1 = dis_col;
            }
            break;
#endif
#if defined(FLIP)
        case MENU_RJOY_CUSKEY0:
        case MENU_RJOY_CUSKEY1:
        case MENU_RJOY_CUSKEY2:
        case MENU_RJOY_CUSKEY3:
            if (nds.rjoy.mode == MYJOY_MODE_CUSKEY) {
                col1 = (cur_sel == cc) ? val_col : unsel_col;
            }
            else {
                col1 = dis_col;
            }
            break;
#endif
        default:
            break;
        }

        if (col0 == sel_col) {
            if (nds.menu.show_cursor) {
                rt.x = SX - (nds.enable_752x560 ? 43 : 10);
                rt.w = 461 + (nds.enable_752x560 ? 41 : -40);
            }
            else {
                rt.x = SX - (nds.enable_752x560 ? 83 : 50);
                rt.w = 461 + (nds.enable_752x560 ? 81 : 0);
            }
            rt.y = SY + (h * idx) - 2;
            rt.h = FONT_SIZE + 3;

            if ((cc == MENU_DIS_ALPHA) || (cc == MENU_KEYS)) {
                rt.w-= (nds.enable_752x560 ? 179 : 121);
            }
            if (col1 == dis_col) {
                col1 = val_col;
                SDL_FillRect(cvt, &rt, SDL_MapRGB(nds.menu.drastic.main->format, 0x80, 0x80, 0x80));
            }
            else {
                SDL_FillRect(cvt, &rt, SDL_MapRGB(nds.menu.drastic.main->format, (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
            }

            if (nds.menu.show_cursor && nds.menu.cursor) {
                rt.x -= (nds.menu.cursor->w + 5);
                rt.y -= ((nds.menu.cursor->h - LINE_H) / 2);
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface(nds.menu.cursor, NULL, cvt, &rt);
            }

            if ((cc == MENU_DIS) || (cc == MENU_ALT)) {
                rt.x = nds.enable_752x560 ? 480 : 440;
                rt.y = SY + (h * (idx + 1)) - 7;
                rt.w = nds.enable_752x560 ? 179 : 121;
                rt.h = FONT_SIZE + 8;
                SDL_FillRect(cvt, &rt, SDL_MapRGB(nds.menu.drastic.main->format, (nds.menu.c2 >> 16) & 0xff, (nds.menu.c2 >> 8) & 0xff, nds.menu.c2 & 0xff));
            }
        }
        draw_info(cvt, to_lang(MENU_ITEM[cc]), SX + sx, SY + (h * idx), col0, 0);

        sx = 0;
        switch (cc) {
        case MENU_LANG:
            sprintf(buf, "%s", nds.lang.trans[DEF_LANG_SLOT]);
            break;
#if defined(A30) || defined(RG28XX) || defined(FLIP)
        case MENU_CPU_CORE:
            sprintf(buf, "%d", cur_cpucore);
            break;
#if defined(A30)
        case MENU_CPU_CLOCK:
            sprintf(buf, "%dMHz", cur_cpuclock);
            break;
#endif
#else
        case MENU_CPU:
            sprintf(buf, "%dMHz", cur_cpuclock);
            break;
#endif
        case MENU_HOTKEY:
            sprintf(buf, "%s", to_lang(HOTKEY[nds.hotkey]));
            break;
        case MENU_SWAP_L1L2:
            sprintf(buf, "%s", to_lang(nds.swap_l1l2 ? "Yes" : "No"));
            break;
        case MENU_SWAP_R1R2:
            sprintf(buf, "%s", to_lang(nds.swap_r1r2 ? "Yes" : "No"));
            break;
        case MENU_DIS:
            if (nds.hres_mode == 0) {
                sprintf(buf, "[%d]   %s", nds.dis_mode, nds.enable_752x560 ? DIS_MODE0_752[nds.dis_mode] : DIS_MODE0_640[nds.dis_mode]);
            }
            else {
                if (nds.enable_752x560) {
                    sprintf(buf, "[%d]   %s", nds.dis_mode, nds.dis_mode == NDS_DIS_MODE_HRES0 ? "512*384" : "752*560");
                }
                else {
                    sprintf(buf, "[%d]   %s", nds.dis_mode, nds.dis_mode == NDS_DIS_MODE_HRES0 ? "512*384" : "640*480");
                }
            }
            break;
        case MENU_DIS_ALPHA:
            if (nds.hres_mode == 0) {
                sprintf(buf, "[%d]   ", nds.dis_mode);
                sx = get_font_width(buf);
                sprintf(buf, "%s", nds.enable_752x560 ? DIS_MODE1_752[nds.dis_mode] : DIS_MODE1_640[nds.dis_mode]);
                draw_info(cvt, buf, SSX + sx, SY + (h * idx), (cur_sel == MENU_DIS) ? nds.menu.c0 : nds.menu.c1, 0);
            }

            sx = 0;
            sprintf(buf, "%d", nds.alpha.val);
            break;
        case MENU_DIS_BORDER:
            sprintf(buf, "%s", to_lang(BORDER[nds.alpha.border]));
            break;
        case MENU_DIS_POSITION:
            sprintf(buf, "%s", to_lang(POS[nds.alpha.pos]));
            break;
        case MENU_ALT:
            sprintf(buf, "[%d]   %s", nds.alt_mode, nds.enable_752x560 ? DIS_MODE0_752[nds.alt_mode] : DIS_MODE0_640[nds.alt_mode]);
            break;
        case MENU_KEYS:
            sprintf(buf, "[%d]   ", nds.alt_mode);
            sx = get_font_width(buf);
            sprintf(buf, "%s", nds.enable_752x560 ? DIS_MODE1_752[nds.alt_mode] : DIS_MODE1_640[nds.alt_mode]);
            draw_info(cvt, buf, SSX + sx, SY + (h * idx), (nds.hres_mode == 0) && (cur_sel == MENU_ALT) ? val_col : unsel_col, 0);

            sx = 0;
            sprintf(buf, "%s", DPAD[nds.keys_rotate % 3]);
            break;
        case MENU_PEN_XV:
            sprintf(buf, "%.1fx", ((float)nds.pen.xv) / 10);
            break;
        case MENU_CURSOR:
            sprintf(buf, "%s", to_lang(nds.menu.show_cursor ? "Show" : "Hide"));
            break;
        case MENU_FAST_FORWARD:
            sprintf(buf, "%d (6)", nds.fast_forward);
            break;
#if defined(A30) || defined(FLIP)
        case MENU_JOY_MODE:
            sprintf(buf, "%s", to_lang(JOY_MODE[nds.joy.mode]));
            break;
        case MENU_JOY_CUSKEY0:
            sprintf(buf, "Miyoo %s", to_lang(JOY_CUSKEY[nds.joy.cuskey[0]]));
            break;
        case MENU_JOY_CUSKEY1:
            sprintf(buf, "Miyoo %s", to_lang(JOY_CUSKEY[nds.joy.cuskey[1]]));
            break;
        case MENU_JOY_CUSKEY2:
            sprintf(buf, "Miyoo %s", to_lang(JOY_CUSKEY[nds.joy.cuskey[2]]));
            break;
        case MENU_JOY_CUSKEY3:
            sprintf(buf, "Miyoo %s", to_lang(JOY_CUSKEY[nds.joy.cuskey[3]]));
            break;
        case MENU_JOY_DZONE:
            sprintf(buf, "%d (15)", nds.joy.dzone);
            break;
#endif
#if defined(FLIP)
        case MENU_RJOY_MODE:
            sprintf(buf, "%s", to_lang(RJOY_MODE[nds.rjoy.mode]));
            break;
        case MENU_RJOY_CUSKEY0:
            sprintf(buf, "Miyoo %s", to_lang(JOY_CUSKEY[nds.rjoy.cuskey[0]]));
            break;
        case MENU_RJOY_CUSKEY1:
            sprintf(buf, "Miyoo %s", to_lang(JOY_CUSKEY[nds.rjoy.cuskey[1]]));
            break;
        case MENU_RJOY_CUSKEY2:
            sprintf(buf, "Miyoo %s", to_lang(JOY_CUSKEY[nds.rjoy.cuskey[2]]));
            break;
        case MENU_RJOY_CUSKEY3:
            sprintf(buf, "Miyoo %s", to_lang(JOY_CUSKEY[nds.rjoy.cuskey[3]]));
            break;
        case MENU_RJOY_DZONE:
            sprintf(buf, "%d (15)", nds.rjoy.dzone);
            break;
#endif
#if defined(MINI) || defined(A30) || defined(FLIP)
        case MENU_CHK_BAT:
            sprintf(buf, "%s", to_lang(nds.chk_bat ? "Yes" : "No"));
            break;
#endif
        }
        draw_info(cvt, buf, SSX + sx, SY + (h * idx), col1, 0);
        idx+= 1;
    }

    sx = nds.enable_752x560 ? 540 : 450;
    sy = nds.enable_752x560 ? 430 : 360;
    if(dis_mode >= 0) {
        switch (dis_mode) {
        case NDS_DIS_MODE_VH_T0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
           
            rt.w = 34;
            rt.h = 26;
            switch (nds.alpha.pos) {
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
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, (30 * nds.alpha.val)));
            break;
        case NDS_DIS_MODE_VH_T1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
           
            rt.w = 51;
            rt.h = 38;
            switch (nds.alpha.pos) {
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
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, (30 * nds.alpha.val)));
            break;
        case NDS_DIS_MODE_S0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 76;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_S1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_V0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - (rt.h * 2)) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - (rt.h * 2)) / 2) + rt.h;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_V1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - (rt.h * 2)) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - (rt.h * 2)) / 2) + rt.h;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_H0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - (rt.w * 2)) / 2);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - (rt.w * 2)) / 2) + rt.w;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_H1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = sx + ((128 - (rt.w * 2)) / 2);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = sx + ((128 - (rt.w * 2)) / 2) + rt.w;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 96;
            rt.h = 72;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 32;
            rt.h = 24;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 77;
            rt.h = 58;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S2:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 96;
            rt.h = 72;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 32;
            rt.h = 24;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S3:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 77;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 26;
            rt.h = 19;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S4:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 77;
            rt.x = sx + (128 - rt.w);
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 26;
            rt.h = 19;
            rt.x = sx;
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S5:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 77;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 26;
            rt.h = 19;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_C0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 77;
            rt.h = 58;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_C1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 77;
            rt.h = 58;
            rt.x = sx;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_HH0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 64;
            rt.h = 85;
            rt.x = sx;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 64;
            rt.h = 85;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_HH1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));

            rt.w = 64;
            rt.h = 85;
            rt.x = sx;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));

            rt.w = 64;
            rt.h = 85;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_HH2:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));

            rt.w = 64;
            rt.h = 96;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));

            rt.w = 64;
            rt.h = 96;
            rt.x = sx + (128 - rt.w);
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_HH3:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));

            rt.w = 64;
            rt.h = 96;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x00, 0x80));

            rt.w = 64;
            rt.h = 96;
            rt.x = sx + (128 - rt.w);
            rt.y = sy;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_HRES0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 76;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_HRES1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(cvt, &rt, SDL_MapRGB(cvt->format, 0x80, 0x00, 0x00));
            break;
        }
    }

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    nds.update_menu = 1;
#else
    flush_lcd(-1, cvt->pixels, cvt->clip_rect, cvt->clip_rect, cvt->pitch, 0, E_MI_GFX_ROTATE_180);
    flip_lcd();
#endif
    need_reload_bg = RELOAD_BG_COUNT;
    return 0;
}
#endif
