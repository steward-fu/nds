// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __VIDEO_NDS_H__
#define __VIDEO_NDS_H__

#include <stdint.h>
#include <stdbool.h>
#include <linux/fb.h>

#if defined(MIYOO_EGL) || defined(SFOS_EGL) || defined(UT)
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#endif

#if defined(MIYOO_FLIP) || defined(UT)
#include <gbm.h>
#include <xf86drm.h>
#include <xf86drmMode.h>
#include <EGL/eglext.h>
#endif

#if defined(SFOS_EGL) || defined(UT)
#include <wayland-client.h>
#include <wayland-egl.h>
#endif

#if defined(MIYOO_MINI)
#include "mi_sys.h"
#include "mi_gfx.h"
#endif

#include "../../SDL_internal.h"
#include "../../events/SDL_events_c.h"
#include "../SDL_sysvideo.h"
#include "../SDL_sysvideo.h"
#include "../SDL_pixels_c.h"

#include <SDL_ttf.h>
#include <SDL_image.h>

#include "SDL_version.h"
#include "SDL_syswm.h"
#include "SDL_loadso.h"
#include "SDL_events.h"
#include "SDL_video.h"
#include "SDL_mouse.h"
#include "video_nds.h"
#include "event_nds.h"

#include "cfg.h"
#include "hook.h"

#define NDS_W                   256
#define NDS_H                   192
#define NDS_Wx2                 (NDS_W << 1)
#define NDS_Hx2                 (NDS_H << 1)
#define NDS_LCD_NUM             2

#if defined(MIYOO_MINI) || defined(UT)
#define SCREEN_W                640
#define SCREEN_H                480
#define FB_DEV                  "/dev/fb0"
#define FB_SIZE                 (SCREEN_W * SCREEN_H * 4 * 2)
#endif

#if defined(MIYOO_FLIP)
#define SCREEN_W                640
#define SCREEN_H                480
#endif

#if defined(MIYOO_A30)
#define SCREEN_W                640
#define SCREEN_H                640
#endif

#if defined(SFOS_XT897)
#define SCREEN_W                540
#define SCREEN_H                960
#endif

#if defined(MIYOO_EGL) || defined(SFOS_EGL) || defined(UT)
enum _TEXTURE_TYPE {
    TEXTURE_LCD0 = 0,
    TEXTURE_LCD1,
    TEXTURE_BG,
    TEXTURE_PEN,
    TEXTURE_BUF,
    TEXTURE_MAX
};
#endif

typedef enum {
    GAME = 0,
    MENU
} DISP_MODE;

typedef struct {
    DISP_MODE mode;
    SDL_Window *window;

    struct {
        int running;
        pthread_t id;
    } thread;

#if defined(MIYOO_FLIP)
    struct {
        int fd;
        int fb;
        int wait_for_flip;

        drmModeRes *res;
        drmModeCrtc *crtc;
        drmModeEncoder *enc;
        drmModeConnector *conn;
        PFNEGLGETPLATFORMDISPLAYEXTPROC pfn;

        struct gbm_bo *bo;
        struct gbm_device *gbm;
        struct gbm_surface *gs;
    } drm;
#endif

#if defined(MIYOO_EGL) || defined(SFOS_EGL) || defined(UT)
    struct {
        EGLConfig config;
        EGLContext context;
        EGLDisplay display;
        EGLSurface surface;

        GLuint tex[TEXTURE_MAX];
        GLuint prog;
        GLuint vert_shader;
        GLuint frag_shader;

        GLint pos;
        GLint coord;
        GLint alpha;
        GLint sampler;
        GLint aspect;
        GLint rotate;
        GLint swap_color;
    } egl;
#endif

#if defined(SFOS_EGL) || defined(UT)
    struct {
        struct wl_shell *shell;
        struct wl_region *region;
        struct wl_display *display;
        struct wl_surface *surface;
        struct wl_registry *registry;
        struct wl_egl_window *window;
        struct wl_compositor *compositor;
        struct wl_shell_surface *shell_surface;
        
        int init;
        int ready;
        int flip;
        uint8_t *bg;
        uint8_t *data;
        void *pixels[2];

        struct {
            int running;
            pthread_t id;
        } thread;
    } wl;
#endif

#if defined(MIYOO_MINI)
    struct {
        struct {
            void *virt;
            MI_PHY phy;
            MI_GFX_Rect_t rt;
            MI_GFX_Surface_t surf;
        } src, dst;
    } gfx;
#endif

    struct {
        int busy_wait;
        int async_update;
    } nds;

    struct {
        int fd;
        struct fb_var_screeninfo var_info;
        struct fb_fix_screeninfo fix_info;
    } fb;
} nds_video;

int flip_lcd_screen(void);
int flush_lcd_screen(int, const void *, SDL_Rect, SDL_Rect, int, int, int);
int update_wayland_client_size(int, int);

#endif

