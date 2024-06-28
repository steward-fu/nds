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

#if defined(UT)
#define SCREEN_W                640
#define SCREEN_H                480
#endif

#if defined(MIYOO_FLIP)
#define SCREEN_W                640
#define SCREEN_H                480
#endif

#if defined(MIYOO_A30)
#define SCREEN_W                640
#define SCREEN_H                640
#endif

#if defined(MINI)
#define USE_MASK                0
#define DEF_FB_W                640
#define DEF_FB_H                480
#define FB_BPP                  4
#define IMG_W                   640
#define IMG_H                   480
#define SCREEN_DMA_SIZE         (NDS_Wx2 * NDS_Hx2 * 4)
#define MASK_SIZE               (NDS_Wx3 * NDS_Hx3 * 4)
#define RELOAD_BG_COUNT         120
#define DEF_FONT_SIZE           24
#define BAT_CHK_CNT             90
#define BAT_MAX_VAL             630
#define BAT_MIN_VAL             420
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

typedef struct MMIYOO_VideoInfo {
    SDL_Window *window;

#if defined(A30)
    EGLConfig eglConfig;
    EGLDisplay eglDisplay;
    EGLContext eglContext;
    EGLSurface eglSurface;
    GLuint vShader;
    GLuint fShader;
    GLuint pObject;
    GLuint texID[TEX_MAX];
    GLint posLoc;
    GLint texLoc;
    GLint samLoc;
    GLint alphaLoc;

    int mem_fd;
    uint8_t* ccu_mem;
    uint8_t* dac_mem;
    uint32_t *vol_ptr;
    uint32_t *cpu_ptr;
#endif

#if defined(MINI)
    int sar_fd;
#endif
} MiyooVideoInfo;

typedef struct _GFX {
    int fb_dev;
    struct fb_var_screeninfo vinfo;
    struct fb_fix_screeninfo finfo;

    struct {
#if defined(A30)
        void *virAddr;
#endif

#if defined(MINI)
        void *virAddr;
        MI_PHY phyAddr;
#endif
    } fb, tmp, overlay;

#if defined(MINI)
    struct {
        void *virAddr[2];
        MI_PHY phyAddr[2];
    } mask;
#endif

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
        int cur_sel;
        void *virAddr[2][2];
#if defined(MINI)
        MI_PHY phyAddr[2][2];
#endif
    } lcd;

    struct _HW {
#if defined(MINI)
        struct _BUF {
            MI_GFX_Surface_t surf;
            MI_GFX_Rect_t rt;
        } src, dst, overlay;
        MI_GFX_Opt_t opt;
#endif
    } hw;
} GFX;

typedef struct _NDS {
    int mincore;
    int maxcore;
    int mincpu;
    int maxcpu;
    int volume;
    //int hotkey;
    int chk_bat;
    int dis_mode;
    int alt_mode;
    int hres_mode;
    int swap_l1l2;
    int swap_r1r2;
    int auto_slot;
    int auto_state;
    int keys_rotate;
    int update_menu;
    int update_screen;
    int enable_752x560;
    int defer_update_bg;
    uint8_t fast_forward;

    TTF_Font *font;
    uint32_t state;

    struct _SCREEN {
        uint32_t bpp;
        uint32_t init;
        uint32_t pitch[2];
        uint32_t *pixels[2];
        uint8_t hres_mode[2];
    } screen;

    struct _BIOS {
        char path[MAX_PATH];
    } bios;

    struct _STATES {
        char path[MAX_PATH];
    } states;

    struct _CFG {
        char path[MAX_PATH];
    } cfg;

    struct _LANG {
        char trans[MAX_LANG_FILE][LANG_FILE_LEN];
        char path[MAX_PATH];
    } lang;

    struct _SHOT {
        int take;
        char path[MAX_PATH];
    } shot;

    struct _MENU {
        int sel;
        int max;
        int enable;
        int show_cursor;
        SDL_Surface *bg;
        SDL_Surface *cursor;
        struct _DRASTIC {
            int enable;
            SDL_Surface *bg0;
            SDL_Surface *bg1;
            SDL_Surface *main;
            SDL_Surface *yes;
            SDL_Surface *no;
            SDL_Surface *cursor;
        } drastic;
        uint32_t c0;
        uint32_t c1;
        uint32_t c2;
        char path[MAX_PATH];
    } menu;

    struct _ALPHA {
        int val;
        int pos;
        int border;
    } alpha;

    struct _OVERLAY {
        int sel;
        int max;
        int alpha;
        SDL_Surface *img;
        char path[MAX_PATH];
    } overlay;

    struct _THEME {
        int sel;
        int max;
        SDL_Surface *img;
        char path[MAX_PATH];
    } theme;

    struct _PEN {
//        int xv;
//        int yv;
        int sel;
        int max;
        int pos;
        int type;
        SDL_Surface *img;
        char path[MAX_PATH];
    } pen;

#if defined(A30) || defined(UT)
//    struct _JOY {
//        int max_x;
//        int zero_x;
//        int min_x;
//
//        int max_y;
//        int zero_y;
//        int min_y;
//
//        int mode;
//        int dzone;
//        int show_cnt;
//
//        int cuskey[4];
//    } joy;
#endif
} NDS;

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

