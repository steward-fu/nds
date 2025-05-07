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
static int init_video(_THIS);
static int set_disp_mode(_THIS, SDL_VideoDisplay *, SDL_DisplayMode *);
static int draw_pen(void *, int, int);
static int draw_info(SDL_Surface *, const char *, int, int, uint32_t, uint32_t);
static int get_font_width(const char *);
static int get_font_height(const char *);
static int load_layout_bg(void);

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

    myvideo.cur_w = w;
    myvideo.cur_h = h;
    myvideo.wl.info.w = myvideo.cur_w;
    myvideo.wl.info.h = myvideo.cur_h;
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
    myconfig.filter = 0;

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
            if (pre_filter != myconfig.filter) {
                pre_filter = myconfig.filter;
                if (myconfig.filter) {
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

    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P0, strlen(P0))) {
            return NDS_DRASTIC_MENU_MAIN;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P1, strlen(P1))) {
            return NDS_DRASTIC_MENU_OPTION;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P2, strlen(P2))) {
            return NDS_DRASTIC_MENU_CONTROLLER;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P3, strlen(P3))) {
            return NDS_DRASTIC_MENU_CONTROLLER2;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P4, strlen(P4))) {
            return NDS_DRASTIC_MENU_FIRMWARE;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P5, strlen(P5))) {
            return NDS_DRASTIC_MENU_CHEAT;
        }
        else if (!memcmp(myvideo.menu.drastic.item.idx[cc].msg, P6, strlen(P6))) {
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

    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
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
#if defined(MINI) || defined(TRIMUI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
            sprintf(buf, "NDS %s", &p->msg[8]);
#else
            sprintf(buf, "%s", &p->msg[8]);
#endif
            x = myvideo.cur_w - get_font_width(buf) - 10;
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
                SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, 
                    (MENU_COLOR2 >> 16) & 0xff, (MENU_COLOR2 >> 8) & 0xff, MENU_COLOR2 & 0xff));
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
            draw_info(myvideo.menu.drastic.frame, buf, x, y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);
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
    if (myconfig.chk_bat) {
        sprintf(buf, "Rel "NDS_VER", Res %s, BAT %d%%", "640*480", get_bat_val());
    }
    else {
        sprintf(buf, "Rel "NDS_VER", Res %s", "640*480");
    }
#endif

#if defined(MINI)
    if (myconfig.chk_bat) {
        sprintf(buf, "Rel "NDS_VER", Res %s, BAT %d%%", "640*480", get_bat_val());
    }
    else {
        sprintf(buf, "Rel "NDS_VER", Res %s", "640*480");
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

    draw_info(myvideo.menu.drastic.frame, buf, 10, y / div, MENU_COLOR1, 0);

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
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
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

    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
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
                SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, 
                    (MENU_COLOR2 >> 16) & 0xff, (MENU_COLOR2 >> 8) & 0xff, MENU_COLOR2 & 0xff));
            }

            if (p->y <= NDS_Hx2) {
                strcpy(buf, l10n(find_menu_string_tail(p->msg)));
                w = get_font_width(buf);
                draw_info(myvideo.menu.drastic.frame, buf, myvideo.cur_w - w - (ww / div), y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);

                mark_double_spaces(p->msg);
                strcpy(buf, l10n(p->msg));
            }
            else {
                strcpy(buf, l10n(p->msg));
            }
            draw_info(myvideo.menu.drastic.frame, buf, ww / div, y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);
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
    for (cc=0; cc<myvideo.menu.drastic.item.cnt;) {
        if ((myvideo.menu.drastic.item.idx[cc].y >= 240) && (myvideo.menu.drastic.item.idx[cc].y <= 376)) {
            if ((myvideo.menu.drastic.item.idx[cc + 1].bg > 0) || (myvideo.menu.drastic.item.idx[cc + 2].bg > 0)) {
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
                    uint32_t c = sum > 500 ? 0xff0000 : MENU_COLOR2;

                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = myvideo.cur_w - (10 / div);
                    rt.h = w;
                    SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
                }
                draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);
                if ((p->y >= 240) && (p->y <= 376)) {
                    draw_info(myvideo.menu.drastic.frame, l10n(myvideo.menu.drastic.item.idx[cc + 1].msg), 300 / div, y, myvideo.menu.drastic.item.idx[cc + 1].bg ? MENU_COLOR0 : MENU_COLOR1, 0);
                    draw_info(myvideo.menu.drastic.frame, l10n(myvideo.menu.drastic.item.idx[cc + 2].msg), 480 / div, y, myvideo.menu.drastic.item.idx[cc + 2].bg ? MENU_COLOR0 : MENU_COLOR1, 0);
                }
            }
            else {
                if (p->bg) {
                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = myvideo.cur_w - (10 / div);
                    rt.h = w;
                    SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, 
                        (MENU_COLOR2 >> 16) & 0xff, (MENU_COLOR2 >> 8) & 0xff, MENU_COLOR2 & 0xff));
                }
                draw_info(myvideo.menu.drastic.frame, l10n(p->msg), 20 / div, y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);
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
    for (cc=0; cc<myvideo.menu.drastic.item.cnt;) {
        if ((myvideo.menu.drastic.item.idx[cc].y >= 240) && (myvideo.menu.drastic.item.idx[cc].y <= NDS_Hx2)) {
            if ((myvideo.menu.drastic.item.idx[cc + 1].bg > 0) || (myvideo.menu.drastic.item.idx[cc + 2].bg > 0)) {
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
                if (myvideo.menu.drastic.item.idx[cc + 1].bg || myvideo.menu.drastic.item.idx[cc + 2].bg) {
                    int sum = myvideo.menu.drastic.item.idx[cc + 1].bg + myvideo.menu.drastic.item.idx[cc + 2].bg;
                    uint32_t c = sum > 500 ? 0xff0000 : MENU_COLOR2;

                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = myvideo.cur_w - (10 / div);
                    rt.h = w;
                    SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
                }
                draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);
                if ((p->y >= 240) && (p->y <= NDS_Hx2)) {
                    draw_info(myvideo.menu.drastic.frame, l10n(myvideo.menu.drastic.item.idx[cc + 1].msg), 300 / div, y, myvideo.menu.drastic.item.idx[cc + 1].bg ? MENU_COLOR0 : MENU_COLOR1, 0);
                    draw_info(myvideo.menu.drastic.frame, l10n(myvideo.menu.drastic.item.idx[cc + 2].msg), 480 / div, y, myvideo.menu.drastic.item.idx[cc + 2].bg ? MENU_COLOR0 : MENU_COLOR1, 0);
                }
            }
            else {
                if (p->bg) {
                    rt.x = 5 / div;
                    rt.y = y - (3 / div);
                    rt.w = myvideo.cur_w - (10 / div);
                    rt.h = w;
                    SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, 
                        (MENU_COLOR2 >> 16) & 0xff, (MENU_COLOR2 >> 8) & 0xff, MENU_COLOR2 & 0xff));
                }
                draw_info(myvideo.menu.drastic.frame, l10n(p->msg), 20 / div, y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);
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
                SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, 
                    (MENU_COLOR2 >> 16) & 0xff, (MENU_COLOR2 >> 8) & 0xff, MENU_COLOR2 & 0xff));
            }

            cnt+= 1;
            if (p->y == 280) {
                mark_double_spaces(p->msg);
                strcpy(buf, l10n(p->msg));
            }
            else if (p->y == 296) {
                w = get_font_width(name);
                draw_info(myvideo.menu.drastic.frame, name, myvideo.cur_w - w - (ww / div), 25 / div, MENU_COLOR1, 0);

                w = strlen(p->msg);
                p->msg[w - 3] = 0;
                for (t=14; t<w; t++) {
                    if (p->msg[t] != ' ') {
                        strcpy(buf, &p->msg[t]);
                        break;
                    }
                }
                w = get_font_width(buf);
                draw_info(myvideo.menu.drastic.frame, buf, myvideo.cur_w - w - (ww / div), y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);

                strcpy(buf, l10n("Favorite Color"));
            }
            else if (p->y <= 312) {
                strcpy(buf, l10n(find_menu_string_tail(p->msg)));
                w = get_font_width(buf);
                draw_info(myvideo.menu.drastic.frame, buf, myvideo.cur_w - w - (ww / div), y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);

                mark_double_spaces(p->msg);
                strcpy(buf, l10n(p->msg));
            }
            else {
                strcpy(buf, l10n(p->msg));
            }
            draw_info(myvideo.menu.drastic.frame, buf, ww / div, y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);
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
    for (cc=0; cc<myvideo.menu.drastic.item.cnt; cc++) {
        p = &myvideo.menu.drastic.item.idx[cc];
        if (p->x == 650) {
            for (s0=0; s0<myvideo.menu.drastic.item.cnt; s0++) {
                if ((myvideo.menu.drastic.item.idx[s0].x == 10) && (myvideo.menu.drastic.item.idx[s0].y == p->y)) {
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
            memcpy(&myvideo.menu.drastic.item.idx[s0], &myvideo.menu.drastic.item.idx[cc], sizeof(myvideo.menu.drastic.item.idx[cc]));
            s0+= 1;
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
                SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format,
                    (MENU_COLOR2 >> 16) & 0xff, (MENU_COLOR2 >> 8) & 0xff, MENU_COLOR2 & 0xff));
            }

            cnt+= 1;
            draw_info(myvideo.menu.drastic.frame, p->msg, w / div, y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);
            if (p->cheat && myvideo.menu.drastic.yes && myvideo.menu.drastic.no) {
                rt.x = myvideo.cur_w - myvideo.menu.drastic.yes->w - (w / div);
                rt.y = y - 1;
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface((p->enable > 0 ) ? myvideo.menu.drastic.yes : myvideo.menu.drastic.no, NULL, myvideo.menu.drastic.frame, &rt);
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

    {
        uint32_t c = 0x335445;

        w = myvideo.menu.line_h / div;
        p = &myvideo.menu.drastic.item.idx[0];
        rt.x = 5 / div;
        rt.y = (25 / div) - (4 / div);
        rt.w = myvideo.cur_w - (10 / div);
        rt.h = w;
        SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff));
        draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, 25 / div, 0xa0cb93, 0);
    }

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
                    SDL_FillRect(myvideo.menu.drastic.frame, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format,
                        (MENU_COLOR2 >> 16) & 0xff, (MENU_COLOR2 >> 8) & 0xff, MENU_COLOR2 & 0xff));
                }
                draw_info(myvideo.menu.drastic.frame, p->msg, 20 / div, y, p->bg ? MENU_COLOR0 : MENU_COLOR1, 0);
            }
            cnt+= 1;
        }
    }
    return 0;
}

int handle_drastic_menu(void)
{
    int layer = 0;

    debug("call %s()\n", __func__);

    layer = get_current_menu_layer();
    if (layer == NDS_DRASTIC_MENU_MAIN) {
        SDL_SoftStretch(myvideo.menu.drastic.bg0, NULL, myvideo.menu.drastic.frame, NULL);
    }
    else {
        SDL_SoftStretch(myvideo.menu.drastic.bg1, NULL, myvideo.menu.drastic.frame, NULL);
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
    myvide.menu.update = 1;
#else
    flush_lcd(-1, myvideo.menu.drastic.frame->pixels, myvideo.menu.drastic.frame->clip_rect, myvideo.menu.drastic.frame->clip_rect, myvideo.menu.drastic.frame->pitch, 0, ROTATE_180);
    flip_lcd();
    flush_lcd(-1, myvideo.menu.drastic.frame->pixels, myvideo.menu.drastic.frame->clip_rect, myvideo.menu.drastic.frame->clip_rect, myvideo.menu.drastic.frame->pitch, 0, ROTATE_180);
    flip_lcd();
#endif

    memset(&myvideo.menu.drastic.item, 0, sizeof(myvideo.menu.drastic.item));
    return 0;
}

static int process_screen(void)
{
    static int need_loadstate = 15;
    static int show_info_cnt = 0;
    static int cur_fb_w = 0;
    static int cur_dis_mode = 0;
    static int cur_bg_sel = 0;
    static int cur_filter = 0;
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

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    int cur_sel = myvideo.lcd.cur_sel ^ 1;
#endif

    debug("call %s()\n", __func__);

#if defined(MINI) || defined(PANDORA) || defined(QX1000) || defined(XT897) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    screen_cnt = 2;
#else
    screen_cnt = 1;
#endif

    if (myconfig.autostate.enable > 0) {
        if (need_loadstate > 0) {
            need_loadstate-= 1;
            if (need_loadstate == 0) {
                load_state(myconfig.autostate.slot);
            }
        }
    }

    if (myvideo.menu.sdl2.enable) {
        myvideo.layout.reload_bg = RELOAD_BG_COUNT;
        return 0;
    }

    if (myvideo.menu.drastic.enable) {
        myvideo.menu.drastic.enable = 0;
        myvideo.layout.reload_bg = RELOAD_BG_COUNT;
#if defined(QX1000) || defined(XT897)
        update_wayland_res(NDS_W * 2, NDS_H);
#endif
    }

    if ((cur_fb_w != myvideo.cur_w) ||
        (cur_dis_mode != myconfig.layout.mode) ||
        (cur_bg_sel != myconfig.layout.bg.sel) ||
        (cur_filter != myconfig.filter))
    {
        if (cur_fb_w != myvideo.cur_w) {
            show_info_cnt = 150;
            sprintf(show_info_buf, " %d x %d ", myvideo.cur_w, myvideo.cur_h);
        }
        else if (cur_bg_sel != myconfig.layout.bg.sel) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s %d ", l10n("Wallpaper"), myconfig.layout.bg.sel);
        }
        else if (cur_filter != myconfig.filter) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s ", l10n((myconfig.filter == FILTER_PIXEL) ? "Pixel" : "Blur"));
        }

        cur_fb_w = myvideo.cur_w;
        cur_bg_sel = myconfig.layout.bg.sel;
        cur_dis_mode = myconfig.layout.mode;
        cur_filter = myconfig.filter;
        myvideo.layout.reload_bg = RELOAD_BG_COUNT;
    }

    if (show_info_cnt == 0) {
        myvideo.layout.reload_bg = RELOAD_BG_COUNT;
        show_info_cnt = -1;
        col_fg = 0xe0e000;
        col_bg = 0x000000;
    }
        
    if (myvideo.lcd.load_bg > 0) {
        myvideo.lcd.load_bg-= 1;
    }
    else if (myvideo.lcd.load_bg == 0) {
        myvideo.lcd.load_bg = -1;
        myvideo.layout.reload_bg = RELOAD_BG_COUNT;
    }

    if (myvideo.lcd.status) {
        if (myvideo.lcd.status & NDS_STATE_SAVE) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s ", l10n("Quick Save"));
            myvideo.lcd.status&= ~NDS_STATE_SAVE;
        }
        else if (myvideo.lcd.status & NDS_STATE_LOAD) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s ", l10n("Quick Load"));
            myvideo.lcd.status&= ~NDS_STATE_LOAD;
        }
        else if (myvideo.lcd.status & NDS_STATE_FAST) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s ", l10n("Fast Forward"));
            myvideo.lcd.status&= ~NDS_STATE_FAST;
        }
    }

    if (myconfig.check_battery) {
#if defined(MINI) || defined(A30) || defined(FLIP)
        bat_chk_cnt -= 1;
        if (bat_chk_cnt <= 0) {
            int v = get_bat_val();

            if (v <= 10) {
                show_info_cnt = 50;
                col_fg = 0xffffff;
                col_bg = 0xff0000;
                sprintf(show_info_buf, " %s %d%% ", l10n("Battery"), v);
            }

            bat_chk_cnt = BAT_CHK_CNT;
            if (v <= 5) {
                bat_chk_cnt /= 2;
            }
        }
#endif
    }

    if (myvideo.layout.reload_bg) {
        load_layout_bg();
        myvideo.layout.reload_bg -= 1;
    }

    for (idx = 0; idx < screen_cnt; idx++) {
        int screen0 = 0;
        int screen1 = 0;
        int show_pen = 1;
        int need_update = 1;
        int rotate = ROTATE_180;
        int pitch = 0;
        void *pixels = NULL;
        SDL_Rect srt = {0, 0, NDS_W, NDS_H};
        SDL_Rect drt = {0, 0, 160, 120};

        pitch = *myhook.var.sdl.bytes_per_pixel * srt.w;
#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        pixels = myvideo.lcd.virt_addr[cur_sel][idx];
#else
        if (idx == 0) {
            pixels = (void *)(*((uintptr_t *)myhook.var.sdl.screen[0].pixels));
        }
        else {
            pixels = (void *)(*((uintptr_t *)myhook.var.sdl.screen[1].pixels));
        }
#endif

        if (*myhook.var.sdl.screen[idx].hires_mode) {
            srt.w = NDS_Wx2;
            srt.h = NDS_Hx2;
            if (*myhook.var.sdl.screen[0].hires_mode == 0) {
                *myhook.var.sdl.screen[0].hires_mode = 1;
                pre_dis_mode = myconfig.layout.mode;
                myconfig.layout.mode = pre_hres_mode;
#if defined(QX1000) || defined(XT897)
                update_wayland_res(NDS_Wx2, NDS_Hx2);
#endif
            }
        }
        else {
            srt.w = NDS_W;
            srt.h = NDS_H;

            drt.y = idx * 120;
            screen0 = (idx == 0);
            screen1 = (idx != 0);
            show_pen = *myhook.var.sdl.swap_screens ? screen1 : screen0;
            if (*myhook.var.sdl.screen[0].hires_mode == 1) {
                *myhook.var.sdl.screen[0].hires_mode = 0;
                pre_hres_mode = myconfig.layout.mode;
                myconfig.layout.mode = pre_dis_mode;
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
        switch (myconfig.layout.mode) {
        case NDS_DIS_MODE_VH_T0:
            if (screen1) {
                drt.x = 0;
                drt.y = 0;
                drt.w = myvideo.cur_w;
                drt.h = myvideo.cur_h;
                show_pen = 1;
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
                drt.w = myvideo.cur_w;
                drt.h = myvideo.cur_h;
                show_pen = 1;
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
                drt.x = (myvideo.cur_w - drt.w) / 2;
                drt.y = (myvideo.cur_h - drt.h) / 2;
                show_pen = 1;
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
                drt.w = myvideo.cur_w;
                drt.h = myvideo.cur_h;
                show_pen = 1;
            }
            else {
                show_pen = 0;
                need_update = 0;
            }
            break;
        case NDS_DIS_MODE_V0:
            drt.w = NDS_W;
            drt.h = NDS_H;
            drt.x = (myvideo.cur_w - drt.w) / 2;
            drt.y = screen0 ? 48 : 48 + drt.h;
            break;
        case NDS_DIS_MODE_V1:
            drt.w = 373;
            drt.h = 280;
            drt.x = (myvideo.cur_w - drt.w) / 2;
            drt.y = screen0 ? 0 : drt.h;
            break;
        case NDS_DIS_MODE_H0:
            drt.w = NDS_W;
            drt.h = NDS_H;
            drt.x = screen0 ? 64 : 64 + drt.w;
            drt.y = (myvideo.cur_h - drt.h) / 2;
            break;
        case NDS_DIS_MODE_H1:
            drt.w = 320;
            drt.h = 240;
            drt.x = screen0 ? 0 : drt.w;
            drt.y = (myvideo.cur_h - drt.h) / 2;
            break;
        case NDS_DIS_MODE_VH_S0:
            drt.x = screen1 ? 160 : 0;
            drt.y = screen1 ? 120 : 0;
            drt.w = screen1 ? (myvideo.cur_w - 160) : 160;
            drt.h = screen1 ? (myvideo.cur_h - 120) : 120;
            break;
        case NDS_DIS_MODE_VH_S1:
            drt.x = screen1 ? NDS_W : 0;
            drt.y = screen1 ? NDS_H : 0;
            drt.w = screen1 ? (myvideo.cur_w - NDS_W) : NDS_W;
            drt.h = screen1 ? (myvideo.cur_h - NDS_H) : NDS_H;
            break;
        case NDS_DIS_MODE_VH_S2:
            drt.w = screen1 ? (myvideo.cur_w - 160) : 160;
            drt.h = screen1 ? (myvideo.cur_h - 120) : 120;
            drt.x = screen1 ? ((myvideo.cur_w - drt.w) / 2) : ((myvideo.cur_w - drt.w) / 2);
            drt.y = screen1 ? 120 : 0;
            break;
        case NDS_DIS_MODE_VH_S3:
            drt.w = screen1 ? (myvideo.cur_w - 512) : 512;
            drt.h = screen1 ? (myvideo.cur_h - 384) : 384;
            drt.x = screen1 ? ((myvideo.cur_w - drt.w) / 2) : ((myvideo.cur_w - drt.w) / 2);
            drt.y = screen1 ? 0 : myvideo.cur_h - 384;
            break;
        case NDS_DIS_MODE_VH_S4:
            drt.w = screen1 ? (myvideo.cur_w - 512) : 512;
            drt.h = screen1 ? (myvideo.cur_h - 384) : 384;
            drt.x = screen1 ? (myvideo.cur_w - drt.w) : 0;
            drt.y = screen1 ? 0 : myvideo.cur_h - 384;
            break;
        case NDS_DIS_MODE_VH_S5:
            drt.w = screen1 ? (myvideo.cur_w - 512) : 512;
            drt.h = screen1 ? (myvideo.cur_h - 384) : 384;
            drt.x = screen1 ? 0 : (myvideo.cur_w - drt.w);
            drt.y = screen1 ? 0 : myvideo.cur_h - 384;
            break;
        case NDS_DIS_MODE_VH_C0:
            drt.w = screen0 ? NDS_W : (myvideo.cur_w - NDS_W);
            drt.h = screen0 ? NDS_H : (myvideo.cur_h - NDS_H);
            drt.x = screen0 ? ((myvideo.cur_w - drt.w) / 2) : ((myvideo.cur_w - drt.w) / 2);
            drt.y = screen0 ? 0 : NDS_H;
            break;
        case NDS_DIS_MODE_VH_C1:
            drt.w = screen0 ? NDS_W : (myvideo.cur_w - NDS_W);
            drt.h = screen0 ? NDS_H : (myvideo.cur_h - NDS_H);
            drt.x = screen0 ? 0 : NDS_W;
            drt.y = screen0 ? ((myvideo.cur_h - drt.h) / 2) : ((myvideo.cur_h - drt.h) / 2);
            break;
        case NDS_DIS_MODE_HH0:
        case NDS_DIS_MODE_HH1:
            drt.x = screen0 ? 0 : 320;
            drt.y = 26;
            drt.w = 427;
            drt.h = 320;
            rotate = (myconfig.layout.mode == NDS_DIS_MODE_HH0) ? ROTATE_90 : ROTATE_270;
            break;
        case NDS_DIS_MODE_HH2:
        case NDS_DIS_MODE_HH3:
            drt.x = screen0 ? 0 : 320;
            drt.y = 0;
            drt.w = 480;
            drt.h = 320;
            rotate = (myconfig.layout.mode == NDS_DIS_MODE_HH2) ? ROTATE_90 : ROTATE_270;
            break;
        case NDS_DIS_MODE_HRES0:
            drt.w = NDS_Wx2;
            drt.h = NDS_Hx2;
            drt.x = (myvideo.cur_w - drt.w) / 2;
            drt.y = (myvideo.cur_h - drt.h) / 2;
            break;
        case NDS_DIS_MODE_HRES1:
            drt.x = 0;
            drt.y = 0;
            drt.w = myvideo.cur_w;
            drt.h = myvideo.cur_h;
            break;
        }
#else
        debug("unsupported platform\n");
        return 0;
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (rotate == ROTATE_180) {
            drt.y = (DEF_FB_H - drt.y) - drt.h;
            drt.x = (DEF_FB_W - drt.x) - drt.w;
        }
        else if (rotate == ROTATE_90) {
            drt.x = (drt.x == 0) ? 320 : 0;
        }

#if defined(A30) || defined(FLIP)
        if (show_pen && ((myevent.mode == NDS_TOUCH_MODE) || (myconfig.joy.show_cnt && (myconfig.joy.mode == MYJOY_MODE_STYLUS)))) {
#else
        if (show_pen && (myevent.mode == NDS_TOUCH_MODE)) {
#endif
#else
        if (show_pen && (myevent.mode == NDS_TOUCH_MODE)) {
#endif
            draw_pen(pixels, srt.w, pitch);

#if defined(A30) || defined(FLIP)
            if (myconfig.joy.show_cnt && (myconfig.joy.mode == MYJOY_MODE_STYLUS)) {
                myconfig.joy.show_cnt -= 1;
            }
#endif
        }

#if defined(A30) || defined(RG28XX) || defined(FLIP)
        if ((idx == 0) && (myconfig.layout.alpha.border > 0) && ((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
            int c0 = 0;
            uint32_t *p0 = NULL;
            uint32_t *p1 = NULL;
            uint32_t col[] = { 0, 0xffffff, 0xff0000, 0x00ff00, 0x0000ff, 0x000000, 0xffff00, 0x00ffff };

            p0 = (uint32_t *)myconfig.screen.pixels[idx];
            p1 = (uint32_t *)myconfig.screen.pixels[idx] + ((srt.h - 1) * srt.w);
            for (c0 = 0; c0 < srt.w; c0++) {
                *p0++ = col[myconfig.layout.alpha.border];
                *p1++ = col[myconfig.layout.alpha.border];
            }

            p0 = (uint32_t *)myconfig.screen.pixels[idx];
            p1 = (uint32_t *)myconfig.screen.pixels[idx] + (srt.w - 1);
            for (c0 = 0; c0 < srt.h; c0++) {
                *p0 = col[myconfig.layout.alpha.border];
                *p1 = col[myconfig.layout.alpha.border];
                p0 += srt.w;
                p1 += srt.w;
            }
        }

        glBindTexture(GL_TEXTURE_2D, myvideo.texID[idx]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        if (myconfig.filter) {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        }
        else {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        }

        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, srt.w, srt.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, myconfig.screen.pixels[idx]);
#endif

        if (need_update) {
#if defined(MINI)
            MI_SYS_FlushInvCache(myconfig.screen.pixels[idx], pitch * srt.h);
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
            flush_lcd(idx, pixels, srt, drt, pitch, 0, rotate);
#else
            flush_lcd(-1, pixels, srt, drt, pitch, 0, rotate);
#endif

#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
            switch (myconfig.layout.mode) {
            case NDS_DIS_MODE_VH_T0:
                drt.x = 0;
                drt.y = 0;
                drt.w = 160;
                drt.h = 120;
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
                switch (myconfig.layout.alpha.pos) {
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
                flush_lcd(TEXTURE_LCD0, (const void *)*myhook.var.sdl.screen[0].pixels, srt, drt, pitch, 1, rotate);
#else
                flush_lcd(-1, (const void *)*myhook.var.sdl.screen[0].pixels, srt, drt, pitch, 1, rotate);
#endif
                break;
            case NDS_DIS_MODE_VH_T1:
                drt.x = 0;
                drt.y = 0;
                drt.w = NDS_W;
                drt.h = NDS_H;
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
                switch (myconfig.layout.alpha.pos) {
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
                flush_lcd(TEXTURE_LCD0, (const void *)*myhook.var.sdl.screen[0].pixels, srt, drt, pitch, 1, rotate);
#else 
                flush_lcd(-1, (const void *)*myhook.var.sdl.screen[0].pixels, srt, drt, pitch, 1, rotate);
#endif
                break;
            }
#endif
        }

        if (*myhook.var.sdl.screen[idx].hires_mode) {
            break;
        }
    }

    if (show_info_cnt > 0) {
        draw_info(NULL, show_info_buf, myvideo.cur_w - get_font_width(show_info_buf), 0, col_fg, col_bg);
        show_info_cnt-= 1;
    }
    else if (myvideo.lcd.show_fps && myvideo.fps) {
        SDL_Rect rt = {0};

        rt.x = myvideo.cur_w - myvideo.fps->w;
        rt.y = 0;
        rt.w = myvideo.fps->w;
        rt.h = myvideo.fps->h;
        flush_lcd(-1, myvideo.fps->pixels, myvideo.fps->clip_rect, rt, myvideo.fps->pitch, 0, ROTATE_180);
    }

#if defined(TRIMUI)
    if (need_restore) {
        need_restore = 0;
        myconfig.layout.mode = pre_dismode;
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

void prehook_cb_print_string(char *p, uint32_t fg, uint32_t bg, uint32_t x, uint32_t y)
{
    int w = 0, h = 0;
    SDL_Color col = {0};
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
            myvideo.menu.drastic.item.cnt+= 1;
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
            TTF_SizeUTF8(myvideo.menu.font, p, &w, &h);
            t0 = TTF_RenderUTF8_Solid(myvideo.menu.font, p, col);
            if (t0) {
                t1 = SDL_CreateRGBSurface(SDL_SWSURFACE, t0->w, t0->h, 32, 0, 0, 0, 0);
                if (t1) {
                    SDL_FillRect(t1, &t1->clip_rect, 0x000000);
                    SDL_BlitSurface(t0, NULL, t1, NULL);

                    if (myvideo.fps) {
                        SDL_FreeSurface(myvideo.fps);
                    }
                    myvideo.fps = SDL_ConvertSurface(t1, myvideo.cvt->format, 0);
                    SDL_FreeSurface(t1);
                }
                SDL_FreeSurface(t0);
            }
            myvideo.lcd.show_fps = 1;
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
        ::"r"(&myvideo.state_busy):
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
        ::"r"(&myvideo.state_busy):
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

    myconfig.filter = 0;
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

    myconfig.filter = 0;
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

    while (myvideo.thread.running) {
#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        if (myvideo.menu.sdl2.enable) {
            if (myvide.menu.update) {
                debug("update sdl2 menu\n");

                myvide.menu.update = 0;
                pre_filter = myconfig.filter;
                myconfig.filter = 0;
                flush_lcd(-1, myvideo.cvt->pixels, myvideo.cvt->clip_rect, myvideo.cvt->clip_rect, myvideo.cvt->pitch, 0, ROTATE_180);
                flip_lcd();
                myconfig.filter = pre_filter;
            }
        }
        else if (myvideo.menu.drastic.enable) {
            if (myvide.menu.update) {
                debug("update drastic menu\n");

                myvide.menu.update = 0;
                pre_filter = myconfig.filter;
                myconfig.filter = 0;
                flush_lcd(-1, myvideo.menu.drastic.frame->pixels, myvideo.menu.drastic.frame->clip_rect, myvideo.menu.drastic.frame->clip_rect, myvideo.menu.drastic.frame->pitch, 0, 0);
                flip_lcd();
                myconfig.filter = pre_filter;
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

static int quit_lang(void)
{
    int cc = 0;

    for (cc=0; myvideo.lang.trans[cc]; cc++) {
        if (myvideo.lang.trans[cc]) {
            free(myvideo.lang.trans[cc]);
        }
        myvideo.lang.trans[cc] = NULL;
    }
    memset(myvideo.lang.trans, 0, sizeof(myvideo.lang.trans));
    return 0;
}

static int load_lang_file(const char *lang)
{
    FILE *f = NULL;
    char buf[MAX_PATH << 1] = {0};

    if (strcasecmp(lang_file_name[DEF_LANG_SLOT], DEF_LANG_LANG)) {
        sprintf(buf, "%s%s/%s", myvideo.home, LANG_PATH, lang);
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

                if (myvideo.lang.trans[cc] != NULL) {
                    free(myvideo.lang.trans[cc]);
                }
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
        }
        else {
            debug("failed to open lang folder \'%s\'\n", myconfig.lang.path);
        }
    }
    return 0;
}

static void enum_lang_file(void)
{
    int idx = 2;
    DIR *d = NULL;
    struct dirent *dir = NULL;
    char buf[MAX_PATH] = { 0 };

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, LANG_PATH);

    strcpy(lang_file_name[DEF_LANG_SLOT], DEF_LANG_LANG);
    strcpy(lang_file_name[DEF_LANG_SLOT + 1], DEF_LANG_LANG);

    d = opendir(buf);
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
            strcpy(lang_file_name[idx], dir->d_name);
            idx+= 1;
            if (idx >= MAX_LANG_FILE) {
                break;
            }
        }
        closedir(d);
    }
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

    if ((newclock < myconfig.cpu.freq.min) || (newclock > myconfig.cpu.freq.max)) {
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

static int get_layout_bg_cnt(void)
{
    char buf[MAX_PATH] = { 0 };

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, BG_PATH);
    return get_dir_count(buf);
}

static int get_menu_cnt(void)
{
    char buf[MAX_PATH] = { 0 };

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, MENU_PATH);
    return get_dir_count(buf);
}

static int get_pen_cnt(void)
{
    char buf[MAX_PATH] = { 0 };

    snprintf(buf, sizeof(buf), "%s%s", myvideo.home, PEN_PATH);
    return get_file_count(buf);
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

int quit_lcd(void)
{
    ioctl(myvideo.fb.fd[1], OMAPFB_QUERY_PLANE, &gfx.pi);
    gfx.pi.enabled = 0;
    ioctl(myvideo.fb.fd[1], OMAPFB_SETUP_PLANE, &gfx.pi);
    munmap(myvideo.gfx.mem[0], myvideo.cur_buf_size);
    munmap(myvideo.gfx.mem[1], myvideo.cur_buf_size);
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

static void disp_resize(void)
{
    int r = 0;
    uint32_t args[4] = {0, (uintptr_t)&myvideo.gfx.buf, 1, 0};

    ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &r);
    if (myconfig.layout.mode == NDS_DIS_MODE_S0) {
        myvideo.gfx.buf.info.fb.crop.width  = ((uint64_t)myvideo.cur_h) << 32;
        myvideo.gfx.buf.info.fb.crop.height = ((uint64_t)myvideo.cur_w) << 32;
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

    myvideo.fb.virt_addr = mmap(NULL, myvideo.cur_buf_size, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.fb.fd, 0);
    if (myvideo.fb.virt_addr == (void *)-1) {
        close(myvideo.fb.fd);
        myvideo.fb.fd = -1;
        debug("failed to mmap fb\n");
        return -1;
    }
    debug("fb virAddr %p (size:%d)\n", myvideo.fb.virt_addr, myvideo.cur_buf_size);
    memset(myvideo.fb.virt_addr, 0 , myvideo.cur_buf_size);

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

    myvideo.fb.virt_addr = mmap(NULL, myvideo.cur_buf_size, PROT_READ | PROT_WRITE, MAP_SHARED, myvideo.fb.fd, 0);
    if (myvideo.fb.virt_addr == (void *)-1) {
        close(myvideo.fb.fd);
        myvideo.fb.fd = -1;
        debug("failed to mmap fb\n");
        return -1;
    }
    debug("fb addr=%p, size=%d\n", myvideo.fb.virt_addr, myvideo.cur_buf_size);
    memset(myvideo.fb.virt_addr, 0 , myvideo.cur_buf_size);

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
    MI_SYS_MemsetPa(myvideo.fb.phy_addr, 0, myvideo.cur_buf_size);
    MI_SYS_Mmap(myvideo.fb.phy_addr, myvideo.fb.fix_info.smem_len, &myvideo.fb.virt_addr, TRUE);
    memset(&myvideo.gfx.opt, 0, sizeof(myvideo.gfx.opt));

    MI_SYS_MMA_Alloc(NULL, myvideo.cur_buf_size, &myvideo.tmp.phy_addr);
    MI_SYS_Mmap(myvideo.tmp.phy_addr, myvideo.cur_buf_size, &myvideo.tmp.virt_addr, TRUE);

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
    MI_SYS_Munmap(myvideo.fb.virt_addr, myvideo.cur_buf_size);

    MI_SYS_Munmap(myvideo.tmp.virt_addr, myvideo.cur_buf_size);
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

void clear_lcd(void)
{
#if defined(MINI)
    MI_SYS_MemsetPa(myvideo.fb.phy_addr, 0, myvideo.cur_buf_size);
    MI_SYS_MemsetPa(myvideo.tmp.phy_addr, 0, myvideo.cur_buf_size);
    MI_SYS_MemsetPa(myvideo.lcd.phy_addr[0][0], 0, SCREEN_DMA_SIZE);
    MI_SYS_MemsetPa(myvideo.lcd.phy_addr[0][1], 0, SCREEN_DMA_SIZE);
    MI_SYS_MemsetPa(myvideo.lcd.phy_addr[1][0], 0, SCREEN_DMA_SIZE);
    MI_SYS_MemsetPa(myvideo.lcd.phy_addr[1][1], 0, SCREEN_DMA_SIZE);
#endif
}

static int draw_pen(void *pixels, int width, int pitch)
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

#if 0
    fg_vertices[0] = ((((float)x) / NDS_W) - 0.5) * 2.0;
    fg_vertices[1] = ((((float)y) / NDS_H) - 0.5) * -2.0;

    fg_vertices[5] = fg_vertices[0];
    fg_vertices[6] = ((((float)(y + myvideo.touch.pen->h)) / NDS_H) - 0.5) * -2.0;

    fg_vertices[10] = ((((float)(x + myvideo.touch.pen->w)) / NDS_W) - 0.5) * 2.0;
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
    myvideo.shm.buf->dis_mode = myconfig.layout.mode;
    myvideo.shm.buf->len = srcrect.h * pitch;
    myvideo.shm.buf->pixel_filter = myconfig.filter;
    debug("send SHM_CMD_FLUSH, pitch=%d, alpha=%d, rotate=%d\n", pitch, alpha, rotate);

    myvideo.shm.buf->valid = 1;
    __clear_cache((uint8_t *)myvideo.shm.buf, (uint8_t *)myvideo.shm.buf + sizeof(shm_buf_t));
    while (myvideo.shm.buf->valid) {
        usleep(10);
    }
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP)
    if ((id != -1) && ((myconfig.layout.mode == NDS_DIS_MODE_HH1) || (myconfig.layout.mode == NDS_DIS_MODE_HH3))) {
        fg_vertices[5] = ((((float)dstrect.x) / 640.0) - 0.5) * 2.0;
        fg_vertices[6] = ((((float)dstrect.y) / 480.0) - 0.5) * -2.0;

        fg_vertices[10] = fg_vertices[5];
        fg_vertices[11] = ((((float)(dstrect.y + dstrect.w)) / 480.0) - 0.5) * -2.0;

        fg_vertices[15] = ((((float)(dstrect.x + dstrect.h)) / 640.0) - 0.5) * 2.0;
        fg_vertices[16] = fg_vertices[11];

        fg_vertices[0] = fg_vertices[15];
        fg_vertices[1] = fg_vertices[6];
    }
    else if ((id != -1) && ((myconfig.layout.mode == NDS_DIS_MODE_HH0) || (myconfig.layout.mode == NDS_DIS_MODE_HH2))) {
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
        if (myconfig.filter) {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        }
        else {
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        }
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, srcrect.w, srcrect.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
    }

    if (((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1)) && (tex == TEXTURE_LCD0)) {
        glUniform1f(myvideo.alphaLoc, 1.0 - ((float)myconfig.layout.alpha.val / 10.0));
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);
    }
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myvideo.texID[tex]);
    glVertexAttribPointer(myvideo.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
    glVertexAttribPointer(myvideo.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

    if (((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1)) && (tex == TEXTURE_LCD0)) {
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
            : "r"(pixels), "r"(dst), "r"((myvideo.cur_w - srcrect.w) * 4), "r"(NDS_H)
            : "q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9", "q10", "q11", "q12", "q13", "q14", "q15", "memory", "cc"
        );
    }
    else {
        for (y = 0; y < srcrect.h; y++) {
            for (x = 0; x < srcrect.w; x++) {
                *dst++ = *src++;
            }
            dst+= (myvideo.cur_w - srcrect.w);
        }
    }
}
#endif

#if defined(PANDORA)
    if ((pitch == 1024) && (srcrect.w == NDS_W) && (srcrect.h == NDS_H)) {
        uint32_t *dst = (uint32_t *)myvideo.gfx.mem[(myvideo.fb.var_info.yoffset == 0) ? 0 : 1];

        if (dstrect.y == 0) {
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

        for (y = 0; y < srcrect.h; y++) {
            for (x = 0; x < srcrect.w; x++) {
                *dst++ = *src++;
            }
            dst+= (myvideo.cur_w - srcrect.w);
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

    if (myconfig.layout.mode == NDS_DIS_MODE_S0) {
        ox = 32;
        oy = 24;
    }

    if((srcrect.w == NDS_W) && (srcrect.h == NDS_H)) {
        if (myconfig.layout.mode == NDS_DIS_MODE_S0) {
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
        if (myconfig.layout.alpha.val > NDS_ALPHA_MAX) {
            myconfig.layout.alpha.val = 0;
        }

        if (myconfig.layout.alpha.val > 0) {
            float m0 = (float)myconfig.layout.alpha.val / 10;
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

            switch (myconfig.layout.mode) {
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
                switch (myconfig.layout.mode) {
                case NDS_DIS_MODE_VH_T0:
                    if (y && ((y % 2) == 0)) {
                        ay+= 1;
                    }
                    break;
                }

                ax = 0;
                for (x=0; x<sw; x++) {
                    asm ("PLD [%0, #128]"::"r" (s0));
                    if ((myconfig.layout.alpha.border > 0) && ((y == 0) || (y == (sh - 1)) || (x == 0) || (x == (sw - 1)))) {
                        *d++ = col[myconfig.layout.alpha.border];
                    }
                    else {
                        switch (myconfig.layout.mode) {
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

                        switch (myconfig.layout.alpha.pos % 4) {
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

        switch (myconfig.layout.mode) {
        case NDS_DIS_MODE_VH_T0:
            dstrect.w = 170;
            dstrect.h = 128;
            if (myconfig.layout.alpha.val > 0) {
                srcrect.w = dstrect.w;
                srcrect.h = dstrect.h;
                pitch = srcrect.w * 4;
            }
            break;
        case NDS_DIS_MODE_VH_T1:
            dstrect.w = NDS_W;
            dstrect.h = NDS_H;
            if (myconfig.layout.alpha.val > 0) {
                srcrect.w = dstrect.w;
                srcrect.h = dstrect.h;
                pitch = srcrect.w * 4;
            }
            break;
        }

        switch (myconfig.layout.alpha.pos % 4) {
        case 0:
            dstrect.x = 0;
            dstrect.y = myvideo.cur_h - dstrect.h;
            break;
        case 1:
            dstrect.x = myvideo.cur_w - dstrect.w;
            dstrect.y = myvideo.cur_h - dstrect.h;
            break;
        case 2:
            dstrect.x = myvideo.cur_w - dstrect.w;
            dstrect.y = 0;
            break;
        case 3:
            dstrect.x = 0;
            dstrect.y = 0;
            break;
        }
    }

    if (copy_it && myconfig.filter) {
        do {
            if (*myhook.var.sdl.screen[0].hires_mode != 0) {
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
    myvideo.gfx.dst.surf.u32Width = myvideo.cur_w;
    myvideo.gfx.dst.surf.u32Height = myvideo.cur_h;
    myvideo.gfx.dst.surf.u32Stride = myvideo.cur_w * 4;
    myvideo.gfx.dst.surf.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    myvideo.gfx.dst.surf.phyAddr = myvideo.fb.phy_addr + (myvideo.cur_w * myvideo.fb.var_info.yoffset * 4);

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
    myvideo.fb.var_info.yoffset ^= myvideo.cur_h;
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

    if (myvideo.layout.bg) {
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, myvideo.texID[TEXTURE_BG]);
        glVertexAttribPointer(myvideo.posLoc, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bg_vertices);
        glVertexAttribPointer(myvideo.texLoc, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bg_vertices[3]);
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
}

static int get_font_width(const char *info)
{
    int w = 0, h = 0;

    if (myvideo.menu.font && info) {
        TTF_SizeUTF8(myvideo.menu.font, info, &w, &h);
    }
    return w;
}

static int get_font_height(const char *info)
{
    int w = 0, h = 0;

    if (myvideo.menu.font && info) {
        TTF_SizeUTF8(myvideo.menu.font, info, &w, &h);
    }
    return h;
}

const char *l10n(const char *p)
{
    const char *info = p;
    char buf[MAX_PATH] = {0};
    int cc = 0, r = 0, len = 0;
    
    if (!strcmp(lang_file_name[DEF_LANG_SLOT], DEF_LANG_LANG) || (p == NULL)) {
        return p;
    }

    strcpy(buf, p);
    strcat(buf, "=");
    len = strlen(buf);
    if ((len == 0) || (len >= MAX_PATH)) {
        return 0;
    }

    for (cc=0; myvideo.lang.trans[cc]; cc++) {
        if (memcmp(buf, myvideo.lang.trans[cc], len) == 0) {
            r = 1;
            info = &myvideo.lang.trans[cc][len];
            break;
        }
    }

    if (r == 0) {
        info = p;
    }
    return info;
}

static int draw_info(SDL_Surface *dst, const char *info, int x, int y, uint32_t fgcolor, uint32_t bgcolor)
{
    int w = 0, h = 0;
    SDL_Color fg = {0};
    SDL_Rect rt = {0, 0, 0, 0};
    SDL_Surface *t0 = NULL;
    SDL_Surface *t1 = NULL;
    SDL_Surface *t2 = NULL;

    h = strlen(info);
    if ((myvideo.menu.font == NULL) || (h == 0) || (h >= MAX_PATH)) {
        return -1;
    }

    fg.r = (fgcolor >> 16) & 0xff;
    fg.g = (fgcolor >> 8) & 0xff;
    fg.b = (fgcolor >> 0) & 0xff;
    TTF_SizeUTF8(myvideo.menu.font, info, &w, &h);
    t0 = TTF_RenderUTF8_Solid(myvideo.menu.font, info, fg);
    if (t0) {
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
                    flush_lcd(-1, t2->pixels, t2->clip_rect, rt, t2->pitch, 0, ROTATE_180);
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

int load_touch_pen(void)
{
    static int pre_sel = -1;

    char buf[MAX_PATH] = { 0 };
    char path[MAX_PATH] = { 0 };
    SDL_Surface *t = NULL;

    if (pre_sel != myconfig.pen.sel) {
        pre_sel = myconfig.pen.sel;

        if (myvideo.touch.pen) {
            SDL_FreeSurface(myvideo.touch.pen);
            myvideo.touch.pen = NULL;
        }

        myconfig.pen.type = PEN_LB;
        snprintf(buf, sizeof(buf), "%s%s", myvideo.home, PEN_PATH);
        if (get_file_path(buf, myconfig.pen.sel, path, 1) == 0) {
            t = IMG_Load(path);
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
                myvideo.touch.pen = SDL_ConvertSurface(t, myvideo.cvt->format, 0);
                SDL_FreeSurface(t);

                if (strstr(path, "_lt")) {
                    myconfig.pen.type = PEN_LT;
                }
                else if (strstr(path, "_rt")) {
                    myconfig.pen.type = PEN_RT;
                }
                else if (strstr(path, "_rb")) {
                    myconfig.pen.type = PEN_RB;
                }
                else if (strstr(path, "_lb")) {
                    myconfig.pen.type = PEN_LB;
                }
                else {
                    myconfig.pen.type = PEN_CP;
                }
            }
            else {
                error("failed to load \"%s\"\n", path);
            }
        }
    }
    return 0;
}

SDL_Surface* load_menu_img(const char *name)
{
    char buf[MAX_PATH] = { 0 };

    debug("call %s(name=\"%s\")\n", __func__, name);

    snprintf(buf, sizeof(buf), "%s%s/%d/%s", myvideo.home, MENU_PATH, myconfig.menu.sel, name);
    return IMG_Load(buf);
}

int free_menu_img(void)
{
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

    return 0;
}

int load_menu_res(void)
{
    SDL_Rect rt = { 0 };
    SDL_Surface *t = NULL;

    free_menu_img();

    myvideo.menu.sdl2.bg = load_menu_img(SDL2_MENU_BG_FILE);
    myvideo.menu.sdl2.cursor = load_menu_img(SDL2_MENU_CURSOR_FILE);
    myvideo.menu.drastic.bg0 = load_menu_img(DRASTIC_MENU_BG0_FILE);
    myvideo.menu.drastic.bg1 = load_menu_img(DRASTIC_MENU_BG1_FILE);
    myvideo.menu.drastic.cursor = load_menu_img(DRASTIC_MENU_CURSOR_FILE);

    t = load_menu_img(DRASTIC_MENU_YES_FILE);
    if (t) {
        rt.w = myvideo.menu.line_h - 2;
        rt.h = myvideo.menu.line_h - 2;

#if defined(TRIMUI) || defined(PANDORA)
        rt.w = t->w >> 1;
        rt.h = t->h >> 1;
#endif
        myvideo.menu.drastic.yes = SDL_CreateRGBSurface(
            SDL_SWSURFACE,
            rt.w,
            rt.h,
            32,
            t->format->Rmask,
            t->format->Gmask,
            t->format->Bmask,
            t->format->Amask
        );

        SDL_SoftStretch(t, NULL, myvideo.menu.drastic.yes, NULL);
        SDL_FreeSurface(t);
    }

    t = load_menu_img(DRASTIC_MENU_NO_FILE);
    if (t) {
        rt.w = myvideo.menu.line_h - 2;
        rt.h = myvideo.menu.line_h - 2;

#if defined(TRIMUI) || defined(PANDORA)
        rt.w = t->w >> 1;
        rt.h = t->h >> 1;
#endif
        myvideo.menu.drastic.no = SDL_CreateRGBSurface(
            SDL_SWSURFACE,
            rt.w,
            rt.h,
            32,
            t->format->Rmask,
            t->format->Gmask,
            t->format->Bmask,
            t->format->Amask
        );

        SDL_SoftStretch(t, NULL, myvideo.menu.drastic.no, NULL);
        SDL_FreeSurface(t);
    }

    return 0;
}

static int load_layout_bg(void)
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
    SDL_Rect drt = {0, 0, myvideo.cur_w, myvideo.cur_h};

    if ((pre_sel != myconfig.layout.bg.sel) || (pre_mode != myconfig.layout.mode)) {
        pre_mode = myconfig.layout.mode;
        pre_sel = myconfig.layout.bg.sel;

        if (myvideo.layout.bg) {
            SDL_FreeSurface(myvideo.layout.bg);
            myvideo.layout.bg = NULL;
        }

        myvideo.layout.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, srt.w, srt.h, 32, 0, 0, 0, 0);
        if (myvideo.layout.bg) {
            SDL_FillRect(myvideo.layout.bg, &myvideo.layout.bg->clip_rect, SDL_MapRGB(myvideo.layout.bg->format, 0x00, 0x00, 0x00));

            if (get_dir_path(myconfig.layout.path, myconfig.layout.bg.sel, buf) == 0) {
                switch (myconfig.layout.mode) {
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

                    SDL_BlitSurface(t, NULL, myvideo.layout.bg, NULL);
                    SDL_FreeSurface(t);
#if !defined(A30) && !defined(RG28XX) && !defined(FLIP)
#if defined(GKD2) || defined(BRICK)
                    flush_lcd(TEXTURE_BG, myvideo.layout.bg->pixels, myvideo.layout.bg->clip_rect, drt, myvideo.layout.bg->pitch, 0, 0);
#else
                    flush_lcd(-1, myvideo.layout.bg->pixels, myvideo.layout.bg->clip_rect, drt, myvideo.layout.bg->pitch, 0, ROTATE_180);
#endif
#endif
                }
                else {
                    debug("failed to load \"%s\"\n", buf);
                }
            }
        }
    }
    else {
        if (myvideo.layout.bg) {
#if !defined(A30) && !defined(RG28XX) && !defined(FLIP)
#if defined(GKD2) || defined(BRICK)
            flush_lcd(TEXTURE_BG, myvideo.layout.bg->pixels, myvideo.layout.bg->clip_rect, drt, myvideo.layout.bg->pitch, 0, 0);
#else
            flush_lcd(-1, myvideo.layout.bg->pixels, myvideo.layout.bg->clip_rect, drt, myvideo.layout.bg->pitch, 0, ROTATE_180);
#endif
#else
            glBindTexture(GL_TEXTURE_2D, myvideo.texID[TEXTURE_BG]);
            glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, myvideo.layout.bg->w, myvideo.layout.bg->h, 0, GL_RGBA, GL_UNSIGNED_BYTE, myvideo.layout.bg->pixels);
#endif
        }
    }
#endif

#if defined(TRIMUI)
    char buf[MAX_PATH] = {0};
    SDL_Surface *t = NULL;

    if (myconfig.layout.mode == NDS_DIS_MODE_S1) {
        return 0;
    }

    if (pre_mode != myconfig.layout.mode) {
        pre_mode = myconfig.layout.mode;
        disp_resize();
    }

    if (pre_sel != myconfig.layout.bg.sel) {
        pre_sel = myconfig.layout.bg.sel;

        if (myvideo.layout.bg) {
            SDL_FreeSurface(myvideo.layout.bg);
            myvideo.layout.bg = NULL;
        }

        myvideo.layout.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, IMG_W, IMG_H, 32, 0, 0, 0, 0);
        if (myvideo.layout.bg) {
            SDL_FillRect(myvideo.layout.bg, &myvideo.layout.bg->clip_rect, SDL_MapRGB(myvideo.layout.bg->format, 0x00, 0x00, 0x00));

            if (get_dir_path(myconfig.layout.path, myconfig.layout.bg.sel, buf) == 0) {
                strcat(buf, "/bg_s0.png");
                t = IMG_Load(buf);
                if (t) {
                    SDL_BlitSurface(t, NULL, myvideo.layout.bg, NULL);
                    SDL_FreeSurface(t);
                }
                else {
                    printf(PREFIX"Failed to load wallpaper (%s)\n", buf);
                }
            }
        }
    }
    
    if (myvideo.layout.bg) {
        int x = 0;
        int y = 0;
        int z = 0;
        uint32_t *dst = NULL;
        uint32_t *src = NULL;

        ioctl(myvideo.fb.fd, FBIO_WAITFORVSYNC, &z);
        for (z=0; z<2; z++) {
            src = (uint32_t *)myvideo.layout.bg->pixels;
            dst = (uint32_t *)myvideo.gfx.ion.vadd + (myvideo.cur_w * myvideo.cur_h * z);
            for (y = 0; y < myvideo.cur_h; y++) {
                for (x = 0; x < myvideo.cur_w; x++) {
                    dst[(((myvideo.cur_w - 1) - x) * myvideo.cur_h) + y] = *src;
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

    if (pre_sel != myconfig.layout.bg.sel) {
        pre_sel = myconfig.layout.bg.sel;

        if (myvideo.layout.bg) {
            SDL_FreeSurface(myvideo.layout.bg);
            myvideo.layout.bg = NULL;
        }

        myvideo.layout.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, IMG_W, IMG_H, 32, 0, 0, 0, 0);
        if (myvideo.layout.bg) {
            SDL_FillRect(myvideo.layout.bg, &myvideo.layout.bg->clip_rect, SDL_MapRGB(myvideo.layout.bg->format, 0x00, 0x00, 0x00));

            if (get_dir_path(myconfig.layout.path, myconfig.layout.bg.sel, buf) == 0) {
                strcat(buf, "/bg.png");
                t = IMG_Load(buf);
                if (t) {
                    SDL_Rect r0 = {0};

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
                else {
                    printf(PREFIX"Failed to load wallpaper (%s)\n", buf);
                }
            }
        }
    }

    if (myvideo.layout.bg) {
        neon_memcpy(myvideo.gfx.mem[(myvideo.fb.var_info.yoffset == 0) ? 0 : 1], myvideo.layout.bg->pixels, myvideo.cur_w * myvideo.cur_h * 4);
    }
#endif
    return 0;
}

static void free_device(SDL_VideoDevice *d)
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
    d->free = free_device;
    d->PumpEvents = pump_event;

    return d;
}

VideoBootStrap NDS_bootstrap = {
    "NDS",
    "NDS Video Driver",
    create_device
};

static int init_device(void)
{
#if defined(TRIMUI)
    int x = 0;
    int y = 0;
    int ox = 32;
    int oy = 24;
    int cc = 0;
    uint32_t *dst = NULL;
#endif

    debug("call %s()\n", __func__);

    myvideo.menu.line_h = 30;
    myvideo.cur_w = DEF_FB_W;
    myvideo.cur_h = DEF_FB_H;
    myvideo.cur_buf_size = myvideo.cur_w * myvideo.cur_h * 4 * 2;

    getcwd(myvideo.home, sizeof(myvideo.home));
    strcat(myvideo.home, "/");
    debug("home=\"%s\"\n", myvideo.home);

    load_config(myvideo.home);
    enum_lang_file();
    load_lang_file(myconfig.lang);
    load_menu_res();
    load_touch_pen();

#if defined(MINI) || defined(TRIMUI) || defined(A30) || defined(PANDORA)
    //set_auto_state(myconfig.autostate.enable, myconfig.autostate.slot);
    //set_half_vol(myconfig.half_vol);
#endif

#if defined(TRIMUI)
    if ((myconfig.layout.mode != NDS_DIS_MODE_S0) && (myconfig.layout.mode != NDS_DIS_MODE_S1)) {
        myconfig.layout.mode = NDS_DIS_MODE_S0;
    }
    disp_resize();
#endif

#if defined(QX1000) || defined(XT897)
    myconfig.layout.mode = NDS_DIS_MODE_H0;
#endif

    init_lcd();
    
    myvideo.cvt = SDL_CreateRGBSurface(SDL_SWSURFACE, myvideo.cur_w, myvideo.cur_h, 32, 0, 0, 0, 0);

    myconfig.pen.sel = 0;
    myconfig.pen.max = get_pen_cnt();

    myconfig.layout.bg.sel = 0;
    myconfig.layout.bg.max = get_layout_bg_cnt();

    myconfig.menu.sel = 0;
    myconfig.menu.max = get_menu_cnt();

#if defined(QX1000) || defined(XT897)
    myvideo.menu.drastic.frame = SDL_CreateRGBSurface(SDL_SWSURFACE, IMG_W, IMG_H, 32, 0, 0, 0, 0);
#else
    myvideo.menu.drastic.frame = SDL_CreateRGBSurface(SDL_SWSURFACE, myvideo.cur_w, myvideo.cur_h, 32, 0, 0, 0, 0);
#endif
    if (myvideo.menu.drastic.frame) {
        if (myvideo.menu.drastic.bg0) {
            SDL_SoftStretch(myvideo.menu.drastic.bg0, NULL, myvideo.menu.drastic.frame, NULL);
        }
    }

    myvideo.menu.font = TTF_OpenFont(FONT_FILE, FONT_SIZE);

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

    init_event();
    init_hook(sysconf(_SC_PAGESIZE), myconfig.state_path);
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

    myvideo.thread.running = 1;
    pthread_create(&myvideo.thread.id, NULL, video_handler, (void *)NULL);

    return 0;
}

int init_video(_THIS)
{
    SDL_DisplayMode mode = { 0 };
    SDL_VideoDisplay display = { 0 };

    debug("call %s()\n", __func__);

#if !defined(UT)
    signal(SIGTERM, sigterm_handler);
#endif

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

    TTF_Init();
    init_device();
    return 0;
}

static int set_disp_mode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode)
{
    return 0;
}

static int quit_device(void)
{
    void *r = NULL;

    debug("call %s()\n", __func__);

    debug("wait for savestate complete\n");
    while (myvideo.state_busy) {
        usleep(1000000);
    }
    debug("completed\n");

    system("sync");
    quit_hook();
    update_config(myvideo.home);

    if (myvideo.fps) {
        SDL_FreeSurface(myvideo.fps);
        myvideo.fps = NULL;
    }

    if (myvideo.touch.pen) {
        SDL_FreeSurface(myvideo.touch.pen);
        myvideo.touch.pen = NULL;
    }

    if (myvideo.layout.bg) {
        SDL_FreeSurface(myvideo.layout.bg);
        myvideo.layout.bg = NULL;
    }


    free_menu_img();
    if (myvideo.menu.drastic.frame) {
        SDL_FreeSurface(myvideo.menu.drastic.frame);
        myvideo.menu.drastic.frame = NULL;
    }

    if (myvideo.menu.font) {
        TTF_CloseFont(myvideo.menu.font);
        myvideo.menu.font = NULL;
    }


    debug("wait for video_handler complete\n");
    myvideo.thread.running = 0;
    pthread_join(myvideo.thread.id, &r);
    debug("completed\n");

    clear_lcd();
    quit_lcd();

    if (myvideo.cvt) {
        SDL_FreeSurface(myvideo.cvt);
        myvideo.cvt = NULL;
    }
    quit_event();
    quit_lang();

    return 0;
}

void quit_video(_THIS)
{
    debug("call%s()\n" , __func__);

    TTF_Quit();
    quit_device();
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
        if (!strcmp(lang_file_name[DEF_LANG_SLOT], lang_file_name[cc])) {
            if (strcmp(lang_file_name[cc + 1], "")) {
                strcpy(lang_file_name[DEF_LANG_SLOT], lang_file_name[cc + 1]);
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
        if (!strcmp(lang_file_name[DEF_LANG_SLOT], lang_file_name[cc])) {
            if (strcmp(lang_file_name[cc - 1], "")) {
                strcpy(lang_file_name[DEF_LANG_SLOT], lang_file_name[cc - 1]);
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
    MENU_PEN_SPEED,
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

int handle_sdl2_menu(int key)
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
    static char pre_lang[MAX_LANG_NAME] = {0};

    const int SX = 150;
    const int SY = 107;
    const int SSX = 385;

    int cc = 0;
    int sx = 0;
    int sy = 0;
    int s0 = 0;
    int s1 = 0;
    int idx = 0;
    int h = myvideo.menu.line_h;
    int dis_mode = -1;
    SDL_Rect rt = {0};
    char buf[MAX_PATH] = {0};
    uint32_t sel_col = MENU_COLOR0;
    uint32_t unsel_col = MENU_COLOR1;
    uint32_t dis_col = 0x808080;
    uint32_t val_col = MENU_COLOR0;
    uint32_t col0 = 0, col1 = 0;

    if (pre_lang[0] == 0) {
        strcpy(pre_lang, lang_file_name[DEF_LANG_SLOT]);
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
            if (cur_cpucore > myconfig.cpu.core.min) {
                cur_cpucore-= 1;
            }
            break;
#if defined(A30)
        case MENU_CPU_CLOCK:
            if (cur_cpuclock > myconfig.cpu.freq.min) {
                cur_cpuclock-= 50;
            }
            break;
#endif
#else
        case MENU_CPU:
            if (cur_cpuclock > myconfig.cpu.freq.min) {
                cur_cpuclock-= 50;
            }
            break;
#endif
        case MENU_HOTKEY:
            myconfig.hotkey = HOTKEY_BIND_MENU;
            break;
        case MENU_SWAP_L1L2:
            myconfig.swap_l1_l2 = 0;
            break;
        case MENU_SWAP_R1R2:
            myconfig.swap_r1_r2 = 0;
            break;
        case MENU_DIS:
            if (*myhook.var.sdl.screen[0].hires_mode == 0) {
                if (myconfig.layout.mode > 0) {
                    myconfig.layout.mode-= 1;
                }
            }
            else {
                myconfig.layout.mode = NDS_DIS_MODE_HRES0;
            }
            break;
        case MENU_DIS_ALPHA:
            if (((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                if (myconfig.layout.alpha.val > 0) {
                    myconfig.layout.alpha.val-= 1;
                }
            }
            break;
        case MENU_DIS_BORDER:
            if ((myconfig.layout.alpha.val > 0) && ((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                if (myconfig.layout.alpha.border > 0) {
                    myconfig.layout.alpha.border-= 1;
                }
            }
            break;
        case MENU_DIS_POSITION:
            if (((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                if (myconfig.layout.alpha.pos > 0) {
                    myconfig.layout.alpha.pos-= 1;
                }
            }
            break;
        case MENU_ALT:
            if ((*myhook.var.sdl.screen[0].hires_mode == 0) && (myconfig.layout.alt > 0)) {
                myconfig.layout.alt-= 1;
            }
            break;
        case MENU_KEYS:
            if (myconfig.keys_rotate > 0) {
                myconfig.keys_rotate-= 1;
            }
            break;
        case MENU_PEN_SPEED:
            if (myconfig.pen.speed > 1) {
                myconfig.pen.speed -= 1;
            }
            break;
        case MENU_CURSOR:
            myconfig.menu.show_cursor = 0;
            break;
        case MENU_FAST_FORWARD:
            if (myconfig.fast_forward > 1) {
                myconfig.fast_forward -= 1;
            }
            break;
#if defined(A30) || defined(FLIP)
        case MENU_JOY_MODE:
            if (myconfig.joy.mode > 0) {
                myconfig.joy.mode -= 1;
            }
            break;
        case MENU_JOY_CUSKEY0:
            if (myconfig.joy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.joy.cuskey[0] > 0) {
                    myconfig.joy.cuskey[0] -= 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY1:
            if (myconfig.joy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.joy.cuskey[1] > 0) {
                    myconfig.joy.cuskey[1] -= 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY2:
            if (myconfig.joy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.joy.cuskey[2] > 0) {
                    myconfig.joy.cuskey[2] -= 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY3:
            if (myconfig.joy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.joy.cuskey[3] > 0) {
                    myconfig.joy.cuskey[3] -= 1;
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
            if (myconfig.rjoy.mode > 0) {
                myconfig.rjoy.mode -= 1;
            }
            break;
        case MENU_RJOY_CUSKEY0:
            if (myconfig.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.rjoy.cuskey[0] > 0) {
                    myconfig.rjoy.cuskey[0] -= 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY1:
            if (myconfig.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.rjoy.cuskey[1] > 0) {
                    myconfig.rjoy.cuskey[1] -= 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY2:
            if (myconfig.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.rjoy.cuskey[2] > 0) {
                    myconfig.rjoy.cuskey[2] -= 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY3:
            if (myconfig.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.rjoy.cuskey[3] > 0) {
                    myconfig.rjoy.cuskey[3] -= 1;
                }
            }
            break;
        case MENU_RJOY_DZONE:
            if (myconfig.rjoy.dzone > 0) {
                myconfig.rjoy.dzone -= 1;
            }
            break;
#endif
#if defined(MINI) || defined(A30) || defined(FLIP)
        case MENU_CHK_BAT:
            myconfig.chk_bat = 0;
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
            if (cur_cpucore < myconfig.cpu.core.max) {
                cur_cpucore+= 1;
            }
            break;
#if defined(A30)
        case MENU_CPU_CLOCK:
            if (cur_cpuclock < myconfig.cpu.freq.max) {
                cur_cpuclock+= 50;
            }
            break;
#endif
#else
        case MENU_CPU:
            if (cur_cpuclock < myconfig.cpu.freq.max) {
                cur_cpuclock+= 50;
            }
            break;
#endif
        case MENU_HOTKEY:
            myconfig.hotkey = HOTKEY_BIND_SELECT;
            break;
        case MENU_SWAP_L1L2:
            myconfig.swap_l1_l2 = 1;
            break;
        case MENU_SWAP_R1R2:
            myconfig.swap_r1_r2 = 1;
            break;
        case MENU_DIS:
            if (*myhook.var.sdl.screen[0].hires_mode == 0) {
                if (myconfig.layout.mode < NDS_DIS_MODE_LAST) {
                    myconfig.layout.mode+= 1;
                }
            }
            else {
                myconfig.layout.mode = NDS_DIS_MODE_HRES1;
            }
            break;
        case MENU_DIS_ALPHA:
            if (((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                if (myconfig.layout.alpha.val < NDS_ALPHA_MAX) {
                    myconfig.layout.alpha.val+= 1;
                }
            }
            break;
        case MENU_DIS_BORDER:
            if ((myconfig.layout.alpha.val > 0) && ((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                if (myconfig.layout.alpha.border < NDS_BORDER_MAX) {
                    myconfig.layout.alpha.border+= 1;
                }
            }
            break;
        case MENU_DIS_POSITION:
            if (((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                if (myconfig.layout.alpha.pos < 3) {
                    myconfig.layout.alpha.pos+= 1;
                }
            }
            break;
        case MENU_ALT:
            if ((*myhook.var.sdl.screen[0].hires_mode == 0) && (myconfig.layout.alt < NDS_DIS_MODE_LAST)) {
                myconfig.layout.alt+= 1;
            }
            break;
        case MENU_KEYS:
            if (myconfig.keys_rotate < 2) {
                myconfig.keys_rotate+= 1;
            }
            break;
        case MENU_PEN_SPEED:
            if (myconfig.pen.speed < 30) {
                myconfig.pen.speed += 1;
            }
            break;
        case MENU_CURSOR:
            myconfig.menu.show_cursor = 1;
            break;
        case MENU_FAST_FORWARD:
            if (myconfig.fast_forward < 255) {
                myconfig.fast_forward += 1;
            }
            break;
#if defined(A30) || defined(FLIP)
        case MENU_JOY_MODE:
            if (myconfig.joy.mode < MYJOY_MODE_LAST) {
                myconfig.joy.mode += 1;
            }
            if (myconfig.joy.mode == MYJOY_MODE_STYLUS) {
                if (myevent.mode == NDS_TOUCH_MODE) {
                    myevent.mode = NDS_KEY_MODE;
                }
            }
            break;
        case MENU_JOY_CUSKEY0:
            if (myconfig.joy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.joy.cuskey[0] < 13) {
                    myconfig.joy.cuskey[0] += 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY1:
            if (myconfig.joy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.joy.cuskey[1] < 13) {
                    myconfig.joy.cuskey[1] += 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY2:
            if (myconfig.joy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.joy.cuskey[2] < 13) {
                    myconfig.joy.cuskey[2] += 1;
                }
            }
            break;
        case MENU_JOY_CUSKEY3:
            if (myconfig.joy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.joy.cuskey[3] < 13) {
                    myconfig.joy.cuskey[3] += 1;
                }
            }
            break;
        case MENU_JOY_DZONE:
            if (myconfig.joy.dzone < 255) {
                myconfig.joy.dzone += 1;
            }
            break;
#endif
#if defined(FLIP)
        case MENU_RJOY_MODE:
            if (myconfig.rjoy.mode < MYJOY_MODE_LAST) {
                myconfig.rjoy.mode += 1;
            }
            if (myconfig.rjoy.mode == MYJOY_MODE_STYLUS) {
                if (myevent.mode == NDS_TOUCH_MODE) {
                    myevent.mode = NDS_KEY_MODE;
                }
            }
            break;
        case MENU_RJOY_CUSKEY0:
            if (myconfig.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.rjoy.cuskey[0] < 13) {
                    myconfig.rjoy.cuskey[0] += 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY1:
            if (myconfig.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.rjoy.cuskey[1] < 13) {
                    myconfig.rjoy.cuskey[1] += 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY2:
            if (myconfig.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.rjoy.cuskey[2] < 13) {
                    myconfig.rjoy.cuskey[2] += 1;
                }
            }
            break;
        case MENU_RJOY_CUSKEY3:
            if (myconfig.rjoy.mode == MYJOY_MODE_CUSKEY) {
                if (myconfig.rjoy.cuskey[3] < 13) {
                    myconfig.rjoy.cuskey[3] += 1;
                }
            }
            break;
        case MENU_RJOY_DZONE:
            if (myconfig.rjoy.dzone < 255) {
                myconfig.rjoy.dzone += 1;
            }
            break;
#endif
#if defined(MINI) || defined(A30) || defined(FLIP)
        case MENU_CHK_BAT:
            myconfig.chk_bat = 1;
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

        if (strcmp(pre_lang, lang_file_name[DEF_LANG_SLOT])) {
            quit_lang();
            load_lang_file(lang_file_name[DEF_LANG_SLOT]);
            memset(pre_lang, 0, sizeof(pre_lang));
        }

        if (pre_ff != myconfig.fast_forward) {
            fast_forward(myconfig.fast_forward);
            pre_ff = myconfig.fast_forward;
        }
        myvideo.menu.sdl2.enable = 0;
#if defined(QX1000) || defined(XT897)
        update_wayland_res(NDS_W * 2, NDS_H);
#endif
        return 0;
    default:
        break;
    }

    if (cur_sel == MENU_DIS) {
        dis_mode = myconfig.layout.mode;
    }
    if (cur_sel == MENU_ALT) {
        dis_mode = myconfig.layout.alt;
    }
    SDL_SoftStretch(myvideo.menu.sdl2.bg, NULL, myvideo.cvt, NULL);

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
            if ((cur_sel == MENU_DIS_ALPHA) && ((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                col1 = val_col;
            }
            else {
                if ((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1)) {
                    col1 = unsel_col;
                }
                else {
                    col1 = dis_col;
                }
            }
            break;
        case MENU_DIS_BORDER:
            sx = 20;
            if ((cur_sel == MENU_DIS_BORDER) && (myconfig.layout.alpha.val > 0) && ((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                col1 = val_col;
            }
            else {
                if ((myconfig.layout.alpha.val > 0) && ((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                    col1 = unsel_col;
                }
                else {
                    col1 = dis_col;
                }
            }
            break;
        case MENU_DIS_POSITION:
            sx = 20;
            if ((cur_sel == MENU_DIS_POSITION) && ((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1))) {
                col1 = val_col;
            }
            else {
                if ((myconfig.layout.mode == NDS_DIS_MODE_VH_T0) || (myconfig.layout.mode == NDS_DIS_MODE_VH_T1)) {
                    col1 = unsel_col;
                }
                else {
                    col1 = dis_col;
                }
            }
            break;
        case MENU_ALT:
            if (*myhook.var.sdl.screen[0].hires_mode == 0) {
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
            if (myconfig.joy.mode == MYJOY_MODE_CUSKEY) {
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
            if (myconfig.rjoy.mode == MYJOY_MODE_CUSKEY) {
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
            if (myconfig.menu.show_cursor) {
                rt.x = SX - 10;
                rt.w = 461 - 40;
            }
            else {
                rt.x = SX - 50;
                rt.w = 461 + 0;
            }
            rt.y = SY + (h * idx) - 2;
            rt.h = FONT_SIZE + 3;

            if ((cc == MENU_DIS_ALPHA) || (cc == MENU_KEYS)) {
                rt.w -= 121;
            }
            if (col1 == dis_col) {
                col1 = val_col;
                SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, 0x80, 0x80, 0x80));
            }
            else {
                SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, (MENU_COLOR2 >> 16) & 0xff, (MENU_COLOR2 >> 8) & 0xff, MENU_COLOR2 & 0xff));
            }

            if (myconfig.menu.show_cursor && myvideo.menu.sdl2.cursor) {
                rt.x -= (myvideo.menu.sdl2.cursor->w + 5);
                rt.y -= ((myvideo.menu.sdl2.cursor->h - myvideo.menu.line_h) / 2);
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface(myvideo.menu.sdl2.cursor, NULL, myvideo.cvt, &rt);
            }

            if ((cc == MENU_DIS) || (cc == MENU_ALT)) {
                rt.x = 440;
                rt.y = SY + (h * (idx + 1)) - 7;
                rt.w = 121;
                rt.h = FONT_SIZE + 8;
                SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.menu.drastic.frame->format, (MENU_COLOR2 >> 16) & 0xff, (MENU_COLOR2 >> 8) & 0xff, MENU_COLOR2 & 0xff));
            }
        }
        draw_info(myvideo.cvt, l10n(MENU_ITEM[cc]), SX + sx, SY + (h * idx), col0, 0);

        sx = 0;
        switch (cc) {
        case MENU_LANG:
            sprintf(buf, "%s", lang_file_name[DEF_LANG_SLOT]);
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
            sprintf(buf, "%s", l10n(HOTKEY[myconfig.hotkey]));
            break;
        case MENU_SWAP_L1L2:
            sprintf(buf, "%s", l10n(myconfig.swap_l1_l2 ? "Yes" : "No"));
            break;
        case MENU_SWAP_R1R2:
            sprintf(buf, "%s", l10n(myconfig.swap_r1_r2 ? "Yes" : "No"));
            break;
        case MENU_DIS:
            if (*myhook.var.sdl.screen[0].hires_mode == 0) {
                sprintf(buf, "[%d]   %s", myconfig.layout.mode, DIS_MODE0_640[myconfig.layout.mode]);
            }
            else {
                sprintf(buf, "[%d]   %s", myconfig.layout.mode, myconfig.layout.mode == NDS_DIS_MODE_HRES0 ? "512*384" : "640*480");
            }
            break;
        case MENU_DIS_ALPHA:
            if (*myhook.var.sdl.screen[0].hires_mode == 0) {
                sprintf(buf, "[%d]   ", myconfig.layout.mode);
                sx = get_font_width(buf);
                sprintf(buf, "%s", DIS_MODE1_640[myconfig.layout.mode]);
                draw_info(myvideo.cvt, buf, SSX + sx, SY + (h * idx), (cur_sel == MENU_DIS) ? MENU_COLOR0 : MENU_COLOR1, 0);
            }

            sx = 0;
            sprintf(buf, "%d", myconfig.layout.alpha.val);
            break;
        case MENU_DIS_BORDER:
            sprintf(buf, "%s", l10n(BORDER[myconfig.layout.alpha.border]));
            break;
        case MENU_DIS_POSITION:
            sprintf(buf, "%s", l10n(POS[myconfig.layout.alpha.pos]));
            break;
        case MENU_ALT:
            sprintf(buf, "[%d]   %s", myconfig.layout.alt, DIS_MODE0_640[myconfig.layout.alt]);
            break;
        case MENU_KEYS:
            sprintf(buf, "[%d]   ", myconfig.layout.alt);
            sx = get_font_width(buf);
            sprintf(buf, "%s", DIS_MODE1_640[myconfig.layout.alt]);
            draw_info(myvideo.cvt, buf, SSX + sx, SY + (h * idx), (*myhook.var.sdl.screen[0].hires_mode == 0) && (cur_sel == MENU_ALT) ? val_col : unsel_col, 0);

            sx = 0;
            sprintf(buf, "%s", DPAD[myconfig.keys_rotate % 3]);
            break;
        case MENU_PEN_SPEED:
            sprintf(buf, "%.1fx", ((float)myconfig.pen.speed) / 10);
            break;
        case MENU_CURSOR:
            sprintf(buf, "%s", l10n(myconfig.menu.show_cursor ? "Show" : "Hide"));
            break;
        case MENU_FAST_FORWARD:
            sprintf(buf, "%d (6)", myconfig.fast_forward);
            break;
#if defined(A30) || defined(FLIP)
        case MENU_JOY_MODE:
            sprintf(buf, "%s", l10n(JOY_MODE[myconfig.joy.mode]));
            break;
        case MENU_JOY_CUSKEY0:
            sprintf(buf, "Miyoo %s", l10n(JOY_CUSKEY[myconfig.joy.cuskey[0]]));
            break;
        case MENU_JOY_CUSKEY1:
            sprintf(buf, "Miyoo %s", l10n(JOY_CUSKEY[myconfig.joy.cuskey[1]]));
            break;
        case MENU_JOY_CUSKEY2:
            sprintf(buf, "Miyoo %s", l10n(JOY_CUSKEY[myconfig.joy.cuskey[2]]));
            break;
        case MENU_JOY_CUSKEY3:
            sprintf(buf, "Miyoo %s", l10n(JOY_CUSKEY[myconfig.joy.cuskey[3]]));
            break;
        case MENU_JOY_DZONE:
            sprintf(buf, "%d (15)", myconfig.joy.dzone);
            break;
#endif
#if defined(FLIP)
        case MENU_RJOY_MODE:
            sprintf(buf, "%s", l10n(RJOY_MODE[myconfig.rjoy.mode]));
            break;
        case MENU_RJOY_CUSKEY0:
            sprintf(buf, "Miyoo %s", l10n(JOY_CUSKEY[myconfig.rjoy.cuskey[0]]));
            break;
        case MENU_RJOY_CUSKEY1:
            sprintf(buf, "Miyoo %s", l10n(JOY_CUSKEY[myconfig.rjoy.cuskey[1]]));
            break;
        case MENU_RJOY_CUSKEY2:
            sprintf(buf, "Miyoo %s", l10n(JOY_CUSKEY[myconfig.rjoy.cuskey[2]]));
            break;
        case MENU_RJOY_CUSKEY3:
            sprintf(buf, "Miyoo %s", l10n(JOY_CUSKEY[myconfig.rjoy.cuskey[3]]));
            break;
        case MENU_RJOY_DZONE:
            sprintf(buf, "%d (15)", myconfig.rjoy.dzone);
            break;
#endif
#if defined(MINI) || defined(A30) || defined(FLIP)
        case MENU_CHK_BAT:
            sprintf(buf, "%s", l10n(myconfig.chk_bat ? "Yes" : "No"));
            break;
#endif
        }
        draw_info(myvideo.cvt, buf, SSX + sx, SY + (h * idx), col1, 0);
        idx+= 1;
    }

    sx = 450;
    sy = 360;
    if(dis_mode >= 0) {
        switch (dis_mode) {
        case NDS_DIS_MODE_VH_T0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
           
            rt.w = 34;
            rt.h = 26;
            switch (myconfig.layout.alpha.pos) {
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
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, (30 * myconfig.layout.alpha.val)));
            break;
        case NDS_DIS_MODE_VH_T1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
           
            rt.w = 51;
            rt.h = 38;
            switch (myconfig.layout.alpha.pos) {
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
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, (30 * myconfig.layout.alpha.val)));
            break;
        case NDS_DIS_MODE_S0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 76;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_S1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_V0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - (rt.h * 2)) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - (rt.h * 2)) / 2) + rt.h;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_V1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - (rt.h * 2)) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - (rt.h * 2)) / 2) + rt.h;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_H0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - (rt.w * 2)) / 2);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - (rt.w * 2)) / 2) + rt.w;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_H1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = sx + ((128 - (rt.w * 2)) / 2);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 64;
            rt.h = 48;
            rt.x = sx + ((128 - (rt.w * 2)) / 2) + rt.w;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 96;
            rt.h = 72;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 32;
            rt.h = 24;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 77;
            rt.h = 58;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S2:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 96;
            rt.h = 72;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 32;
            rt.h = 24;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S3:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 77;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 26;
            rt.h = 19;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S4:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 77;
            rt.x = sx + (128 - rt.w);
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 26;
            rt.h = 19;
            rt.x = sx;
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_S5:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 77;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 26;
            rt.h = 19;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_C0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 77;
            rt.h = 58;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + (96 - rt.h);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_VH_C1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 77;
            rt.h = 58;
            rt.x = sx;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 51;
            rt.h = 38;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_HH0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 64;
            rt.h = 85;
            rt.x = sx;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            
            rt.w = 64;
            rt.h = 85;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_HH1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));

            rt.w = 64;
            rt.h = 85;
            rt.x = sx;
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));

            rt.w = 64;
            rt.h = 85;
            rt.x = sx + (128 - rt.w);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_HH2:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));

            rt.w = 64;
            rt.h = 96;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));

            rt.w = 64;
            rt.h = 96;
            rt.x = sx + (128 - rt.w);
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));
            break;
        case NDS_DIS_MODE_HH3:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));

            rt.w = 64;
            rt.h = 96;
            rt.x = sx;
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x00, 0x80));

            rt.w = 64;
            rt.h = 96;
            rt.x = sx + (128 - rt.w);
            rt.y = sy;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_HRES0:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x00, 0x80, 0x00));
            
            rt.w = 102;
            rt.h = 76;
            rt.x = sx + ((128 - rt.w) / 2);
            rt.y = sy + ((96 - rt.h) / 2);
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            break;
        case NDS_DIS_MODE_HRES1:
            rt.x = sx;
            rt.y = sy;
            rt.w = 128;
            rt.h = 96;
            SDL_FillRect(myvideo.cvt, &rt, SDL_MapRGB(myvideo.cvt->format, 0x80, 0x00, 0x00));
            break;
        }
    }

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
    myvide.menu.update = 1;
#else
    flush_lcd(-1, myvideo.cvt->pixels, myvideo.cvt->clip_rect, myvideo.cvt->clip_rect, myvideo.cvt->pitch, 0, ROTATE_180);
    flip_lcd();
#endif
    myvideo.layout.reload_bg = RELOAD_BG_COUNT;
    return 0;
}
#endif
