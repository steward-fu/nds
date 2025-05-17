// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __NDS_VIDEO_H__
#define __NDS_VIDEO_H__

#include <time.h>
#include <stdint.h>
#include <stdbool.h>
#include <linux/fb.h>
#include <EGL/egl.h>
#include <GLES2/gl2.h>

#if defined(PANDORA)
#include <linux/omapfb.h>
#endif

#if defined(QX1000) || defined(XT897)
#include <wayland-client.h>
#include <wayland-egl.h>
#endif

#if defined(FLIP)
#include <gbm.h>
#include <xf86drm.h>
#include <xf86drmMode.h>
#include <EGL/eglext.h>
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

#include "nds_video.h"
#include "nds_event.h"

#include "hook.h"
#include "common.h"

#if defined(MINI)
#include "mi_sys.h"
#include "mi_gfx.h"
#endif

#if defined(TRIMUI)
#include "trimui.h"
#endif

#if defined(GKD2) || defined(BRICK) || defined(UT)
#include "runner.h"
#endif

#if defined(TRIMUI)    
#define FONT_SIZE 12
#else
#define FONT_SIZE 24
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(QX1000) || defined(XT897) || defined(BRICK)
#define REDRAW_BG_CNT 1
#else
#define REDRAW_BG_CNT 120
#endif

typedef enum {
    MYJOY_MODE_DISABLE = 0,
    MYJOY_MODE_KEY,
    MYJOY_MODE_TOUCH,
    MYJOY_MODE_CUST_KEY,
    MYJOY_MODE_LAST = MYJOY_MODE_CUST_KEY
} myjoy_t;

#define MYJOY_SHOW_CNT   300
#define MYJOY_MOVE_SPEED 4

#if defined(UT)
#define SCREEN_W 640
#define SCREEN_H 480
#endif

#if defined(RG28XX)
#define SCREEN_W        640
#define SCREEN_H        480
#define BAT_MAX_VAL     4080000
#define BAT_MIN_VAL     3400000
#endif

#if defined(FLIP)
#define SCREEN_W        640
#define SCREEN_H        480
#define DAC_BASE        0x1c22000
#define CCU_BASE        0x01c20000
#define BAT_CHK_CNT     300
#define BAT_CUR_CMD     "cat /sys/class/power_supply/battery/capacity"
#endif

#if defined(A30)
#define SCREEN_W        640
#define SCREEN_H        480
#define DAC_BASE        0x1c22000
#define CCU_BASE        0x01c20000
#define BAT_CHK_CNT     300
#define BAT_MAX_CMD     "cat /sys/class/power_supply/battery/voltage_max_design"
#define BAT_MIN_CMD     "cat /sys/class/power_supply/battery/voltage_min_design"
#define BAT_CUR_CMD     "cat /sys/class/power_supply/battery/voltage_now"
#endif

#if defined(MINI)
#define SCREEN_W        640
#define SCREEN_H        480
#define BAT_CHK_CNT     90
#define BAT_MAX_VAL     630
#define BAT_MIN_VAL     420
#define PLL_SIZE        0x1000
#define REG_RIU_PA      0x1f000000
#define REG_MPLL_PA     (REG_RIU_PA + 0x103000 * 2)
#endif

#if defined(TRIMUI)
#define SCREEN_W        320
#define SCREEN_H        240
#define ION_W           NDS_Wx2
#define ION_H           NDS_Hx2
#endif

#if defined(PANDORA)
#define SCREEN_W        800
#define SCREEN_H        480
#endif

#if defined(QX1000)
#define WL_WIN_W        1080
#define WL_WIN_H        2160
#define SCREEN_W        NDS_Wx2
#define SCREEN_H        NDS_H
#endif

#if defined(XT897)
#define WL_WIN_W        540
#define WL_WIN_H        960
#define SCREEN_W        NDS_Wx2
#define SCREEN_H        NDS_H
#endif

#if defined(BRICK)
#define SCREEN_W        640
#define SCREEN_H        480
#endif

#if defined(GKD2)
#define SCREEN_W        640
#define SCREEN_H        480
#endif

#define NDS_STATE_SAVE  1
#define NDS_STATE_LOAD  2
#define NDS_STATE_FAST  4

#define MENU_MAIN           1
#define MENU_OPTION         2
#define MENU_CONTROLLER     3
#define MENU_CONTROLLER2    4
#define MENU_FIRMWARE       5
#define MENU_CHEAT          6
#define MENU_ROM            7

#define HOTKEY_BIND_MENU    0
#define HOTKEY_BIND_SELECT  1

typedef enum {
#if defined(MINI)
    ROTATE_90 = E_MI_GFX_ROTATE_90,
    ROTATE_180 = E_MI_GFX_ROTATE_180,
    ROTATE_270 = E_MI_GFX_ROTATE_270,
#else
    ROTATE_90 = 0,
    ROTATE_180,
    ROTATE_270
#endif
} roatet_type_t;

typedef enum {
#if defined(MINI)
    FMT_RGB565 = E_MI_GFX_FMT_RGB565,
    FMT_ARGB888 = E_MI_GFX_FMT_ARGB8888
#else
    FMT_RGB565 = 0,
    FMT_ARGB888
#endif
} gfx_fmt_t;

#if defined(A30) || defined(RG28XX) || defined(FLIP)
enum _TEXTURE_TYPE {
    TEXTURE_LCD0 = 0,
    TEXTURE_LCD1,
    TEXTURE_BG,
    TEXTURE_PEN,
    TEXTURE_TMP,
    TEXTURE_MAX
};
#endif

#define MAX_LAYOUT_MODE     32
#define MAX_LAYOUT_BG_FILE  32

typedef enum {
    MENU_TYPE_SDL2 = 0,
    MENU_TYPE_SHOW_HOTKEY,
} sdl2_menu_type_t;

typedef struct {
    struct {
        int x;
        int y;
        int w;
        int h;
    } screen[2];
    int max_bg;
    char *bg[MAX_LAYOUT_BG_FILE];
} layout_mode_t;

typedef struct {
    int x;
    int y;
    int cheat;
    int enable;
    uint32_t fg;
    uint32_t bg;
    char msg[MAX_PATH];
} cust_menu_sub_t;

typedef struct _CUST_MENU {
    int cnt;
    cust_menu_sub_t idx[MAX_MENU_LINE];
} cust_menu_t;

typedef struct {
    SDL_Window *win;
    int cur_w;
    int cur_h;
    int cur_buf_size;
    int state_busy;
    SDL_Surface *fps;
    SDL_Surface *cvt;
    char home[MAX_PATH];

    struct {
        char *trans[MAX_LANG_LINE];
    } lang;

#if defined(TRIMUI)
    int need_restore;
    int pre_dismode;
#endif

#if defined(QX1000) || defined(XT897)
    struct {
        struct wl_shell *shell;
        struct wl_region *region;
        struct wl_display *display;
        struct wl_surface *surface;
        struct wl_registry *registry;
        struct wl_compositor *compositor;
        struct wl_shell_surface *shell_surface;

        struct _egl {
            EGLConfig config;
            EGLContext context;
            EGLDisplay display;
            EGLSurface surface;

            GLuint vShader;
            GLuint fShader;
            GLuint pObject;

            GLuint textureId;
            GLint positionLoc;
            GLint texCoordLoc;
            GLint samplerLoc;
            struct wl_egl_window *window;
        } egl;
        
        struct _org {
            int w;
            int h;
            int bpp;
            int size;
        } info;

        int init;
        int ready;
        int flip;
        uint8_t *bg;
        uint8_t *data;
        uint16_t *pixels[2];
    } wl;
#endif

#if defined(A30) || defined(RG28XX) || defined(FLIP)
    struct {
        EGLConfig config;
        EGLDisplay display;
        EGLContext context;
        EGLSurface surface;
        GLuint vShader;
        GLuint fShader;
        GLuint pObject;
        GLuint texture[TEXTURE_MAX];
        GLint posLoc;
        GLint texLoc;
        GLint samLoc;
        GLint alphaLoc;

        int mem_fd;
        uint8_t* ccu_mem;
        uint8_t* dac_mem;
        uint32_t *vol_ptr;
        uint32_t *cpu_ptr;
    } egl;
#endif

#if defined(FLIP)
    struct {
        int fd;
        int fb;
        int pre_fb;
        volatile int wait_for_flip;

        drmModeRes *res;
        drmModeCrtc *crtc;
        drmModeEncoder *enc;
        drmModeConnector *conn;
        PFNEGLGETPLATFORMDISPLAYEXTPROC pfn;

        struct gbm_bo *bo;
        struct gbm_bo *pre_bo;
        struct gbm_device *gbm;
        struct gbm_surface *gs;
    } drm;
#endif

#if defined(MINI)
    int sar_fd;
#endif

#if defined(GKD2) || defined(BRICK)
    struct {
        int fd;
        shm_buf_t *buf;
    } shm;
#endif

    struct {
        int update;
        bool show_fps;
        uint32_t status;


#if defined(MINI) || defined(A30) || defined(RG28XX) || defined(FLIP) || defined(UT) || defined(GKD2) || defined(BRICK)
        int cur_sel;
        void *virt_addr[2][2];

#if defined(MINI)
        MI_PHY phy_addr[2][2];
#endif
#endif
    } lcd;

#if defined(MINI)
    struct {
        void *virt_addr;
        MI_PHY phy_addr;
    } tmp;
#endif

    struct {
#if defined(PANDORA)
        int fd[2];
        uint32_t *mem[2];
        struct omapfb_mem_info mi;
        struct omapfb_plane_info pi;
#else
        int fd;
#endif
        struct fb_var_screeninfo var_info;
        struct fb_fix_screeninfo fix_info;

#if defined(A30) || defined(RG28XX) || defined(FLIP) || defined(GKD2) || defined(BRICK)
        void *virt_addr;
#endif

#if defined(MINI)
        void *virt_addr;
        MI_PHY phy_addr;
#endif

#if defined(TRIMUI)
        int flip;
#endif
    } fb;

    struct {
#if defined(TRIMUI)
        int ion_fd;
        int mem_fd;
        int disp_fd;
        uint32_t *mem;
        disp_layer_config disp;
        disp_layer_config buf;
        ion_alloc_info_t ion;
#endif

#if defined(MINI)
        MI_GFX_Opt_t opt;

        struct {
            MI_GFX_Rect_t rt;
            MI_GFX_Surface_t surf;
        } src, dst;
#endif
    } gfx;

    struct {
        int line_h;
        int update;
        TTF_Font *font;

        struct  {
            SDL_Surface *bg;
            SDL_Surface *cursor;
            bool enable;
            sdl2_menu_type_t type;
        } sdl2;

        struct {
            bool enable;
            SDL_Surface *bg0;
            SDL_Surface *bg1;
            SDL_Surface *no;
            SDL_Surface *yes;
            SDL_Surface *frame;
            SDL_Surface *cursor;
            cust_menu_t item;
        } drastic;
    } menu;

    struct {
        int redraw_bg;
        SDL_Surface *bg;

        int max_mode;
        layout_mode_t mode[MAX_LAYOUT_MODE];
    } layout;

    struct {
        SDL_Surface *pen;
    } touch;

    struct {
        int running;
        pthread_t id;
    } thread;
} nds_video;

void update_wayland_res(int, int);
const char *l10n(const char *);

int flush_lcd(int, const void *, SDL_Rect, SDL_Rect, int);

int handle_sdl2_menu(int);
int handle_drastic_menu(void);

int load_touch_pen(void);
int load_menu_res(void);

#endif

