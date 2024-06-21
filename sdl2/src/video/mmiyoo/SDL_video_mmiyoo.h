/*
  Special customized version for the DraStic emulator that runs on
      Miyoo Mini (Plus)
      TRIMUI-SMART
      Miyoo A30
      Anbernic RG28XX
      Fxtec Pro1 (QX1000)

  Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>
  Copyright (C) 2022-2024 Steward Fu <steward.fu@gmail.com>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#ifndef __SDL_VIDEO_MMIYOO_H__
#define __SDL_VIDEO_MMIYOO_H__

#include <stdint.h>
#include <stdbool.h>
#include <linux/fb.h>
#ifdef PANDORA
#include <linux/omapfb.h>
#endif

#if defined(A30) || defined(RG28XX)
#include <EGL/egl.h>
#include <GLES2/gl2.h>
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
#include "SDL_video_mmiyoo.h"
#include "SDL_event_mmiyoo.h"

#include "detour.h"

#if defined(MMIYOO)
#include "mi_sys.h"
#include "mi_gfx.h"
#endif

#ifdef QX1000
#include <wayland-client.h>
#include <wayland-egl.h>
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#endif

#ifdef TRIMUI
#include "trimui.h"
#endif

#if !defined(MMIYOO)
    #define E_MI_GFX_ROTATE_90      0
    #define E_MI_GFX_ROTATE_180     1
    #define E_MI_GFX_ROTATE_270     2
    #define E_MI_GFX_FMT_RGB565     0
    #define E_MI_GFX_FMT_ARGB8888   1
#endif

#ifdef QX1000
    struct _wayland {
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
    };
#endif

#define NDS_VER                     "v1.9"
#define NDS_W                       256
#define NDS_H                       192
#define NDS_Wx2                     (NDS_W * 2)
#define NDS_Hx2                     (NDS_H * 2)
#define NDS_Wx3                     (NDS_W * 3)
#define NDS_Hx3                     (NDS_H * 3)
#define NDS_Wx4                     (NDS_W * 4)
#define NDS_Hx4                     (NDS_H * 4)

#ifndef MAX_PATH
    #define MAX_PATH                128
#endif

#ifdef UNITTEST
    #define DEF_FB_W                640
    #define DEF_FB_H                480
    #define FB_BPP                  4
    #define IMG_W                   640
    #define IMG_H                   480
    #define SCREEN_DMA_SIZE         (NDS_Wx2 * NDS_Hx2 * 4)
    #define RELOAD_BG_COUNT         120
    #define DEF_FONT_SIZE           24
#endif

#ifdef RG28XX
    #define DEF_FB_W                640
    #define DEF_FB_H                480
    #define FB_BPP                  4
    #define IMG_W                   640
    #define IMG_H                   480
    #define SCREEN_DMA_SIZE         (NDS_Wx2 * NDS_Hx2 * 4)
    #define RELOAD_BG_COUNT         120
    #define INIT_CPU_CORE           2
    #define DEINIT_CPU_CORE         2
    #define DEF_FONT_SIZE           24
    #define BAT_MAX_VAL             4080000
    #define BAT_MIN_VAL             3400000
#endif

#ifdef A30
    #define DEF_FB_W                640
    #define DEF_FB_H                480
    #define FB_BPP                  4
    #define IMG_W                   640
    #define IMG_H                   480
    #define SCREEN_DMA_SIZE         (NDS_Wx2 * NDS_Hx2 * 4)
    #define RELOAD_BG_COUNT         120
    #define USE_MYJOY               1
    #define MYJOY_MODE_DISABLE      0
    #define MYJOY_MODE_KEYPAD       1
    #define MYJOY_MODE_STYLUS       2
    #define MYJOY_MODE_CUSKEY       3
    #define MYJOY_MODE_LAST         3
    #define MYJOY_SHOW_CNT          300
    #define MYJOY_MOVE_SPEED        4
    #define INIT_CPU_CORE           2
    #define INIT_CPU_CLOCK          1200
    #define DEINIT_CPU_CORE         2
    #define DEINIT_CPU_CLOCK        648
    #define DEF_FONT_SIZE           24
    #define DAC_BASE                0x1c22000
    #define CCU_BASE                0x01c20000
    #define BAT_CHK_CNT             300
    #define BAT_MAX_CMD             "cat /sys/class/power_supply/battery/voltage_max_design"
    #define BAT_MIN_CMD             "cat /sys/class/power_supply/battery/voltage_min_design"
    #define BAT_CUR_CMD             "cat /sys/class/power_supply/battery/voltage_now"
#endif

#ifdef MMIYOO
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

#ifdef TRIMUI
    #define DEF_FB_W                320
    #define DEF_FB_H                240
    #define ION_W                   NDS_Wx2
    #define ION_H                   NDS_Hx2
    #define FB_BPP                  4
    #define IMG_W                   640
    #define IMG_H                   480
    #define RELOAD_BG_COUNT         1
    #define DEF_FONT_SIZE           12
#endif

#ifdef PANDORA
    #define DEF_FB_W                800
    #define DEF_FB_H                480
    #define FB_BPP                  4
    #define IMG_W                   DEF_FB_W
    #define IMG_H                   DEF_FB_H
    #define RELOAD_BG_COUNT         1
    #define DEF_FONT_SIZE           24
#endif

#ifdef QX1000
    #define LCD_W                   1080
    #define LCD_H                   2160
    #define DEF_FB_W                (NDS_W * 2)
    #define DEF_FB_H                NDS_H
    #define FB_BPP                  4
    #define IMG_W                   640
    #define IMG_H                   480
    #define RELOAD_BG_COUNT         1
    #define DEF_FONT_SIZE           24
#endif

#define PREFIX                      "[SDL] "
#define SHOT_PATH                   "/mnt/SDCARD/Screenshots"
#define BIOS_PATH                   "system"
#define CFG_PATH                    "resources/settings.json"
#define THEME_PATH                  "resources/bg"
#define PEN_PATH                    "resources/pen"
#define LANG_PATH                   "resources/lang"
#define OVERLAY_PATH                "resources/overlay"
#define MENU_PATH                   "resources/menu/640"
#define MENU_BG_FILE                "bg.png"
#define MENU_CURSOR_FILE            "cursor.png"
#define DRASTIC_MENU_BG0_FILE       "drastic_bg0.png"
#define DRASTIC_MENU_BG1_FILE       "drastic_bg1.png"
#define DRASTIC_MENU_YES_FILE       "drastic_yes.png"
#define DRASTIC_MENU_NO_FILE        "drastic_no.png"
#define DRASTIC_MENU_CURSOR_FILE    "drastic_cursor.png"
#define MMIYOO_DRIVER_NAME          "mmiyoo"
#define BASE_REG_RIU_PA             0x1f000000
#define BASE_REG_MPLL_PA            (BASE_REG_RIU_PA + 0x103000 * 2)
#define PLL_SIZE                    0x1000
#define PEN_LT                      0
#define PEN_LB                      1
#define PEN_RT                      2
#define PEN_RB                      3
#define PEN_CP                      4
#define FONT_PATH                   "resources/font/font.ttf"

#define NDS_DIS_MODE_VH_T0          0
#define NDS_DIS_MODE_VH_T1          1
#define NDS_DIS_MODE_S0             2
#define NDS_DIS_MODE_S1             3
#define NDS_DIS_MODE_V0             4
#define NDS_DIS_MODE_V1             5
#define NDS_DIS_MODE_H0             6
#define NDS_DIS_MODE_H1             7
#define NDS_DIS_MODE_VH_S0          8
#define NDS_DIS_MODE_VH_S1          9
#define NDS_DIS_MODE_VH_S2          10
#define NDS_DIS_MODE_VH_C0          11
#define NDS_DIS_MODE_VH_C1          12
#define NDS_DIS_MODE_HH0            13
#define NDS_DIS_MODE_HH1            14
#define NDS_DIS_MODE_HH2            15
#define NDS_DIS_MODE_HH3            16
#define NDS_DIS_MODE_LAST           16
#define NDS_DIS_MODE_HRES0          17
#define NDS_DIS_MODE_HRES1          18

#define NDS_ALPHA_MAX               7
#define NDS_BORDER_MAX              7

#define NDS_STATE_QSAVE             1
#define NDS_STATE_QLOAD             2
#define NDS_STATE_FF                4

#define JSON_NDS_PEN_XV             "xv"
#define JSON_NDS_PEN_YV             "yv"
#define JSON_NDS_PEN_SEL            "pen"
#define JSON_NDS_PEN_POS            "touchpad"
#define JSON_NDS_THEME_SEL          "theme"
#define JSON_NDS_DIS_MODE           "mode"
#define JSON_NDS_ALPHA_VALUE        "alpha"
#define JSON_NDS_ALPHA_POSITION     "position"
#define JSON_NDS_ALPHA_BORDER       "border"
#define JSON_NDS_MAX_CORE           "maxcore"
#define JSON_NDS_MIN_CORE           "mincore"
#define JSON_NDS_MAX_CPU            "maxcpu"
#define JSON_NDS_MIN_CPU            "mincpu"
#define JSON_NDS_OVERLAY            "overlay"
#define JSON_NDS_ALT_MODE           "alt"
#define JSON_NDS_SWAP_L1L2          "swap_l1l2"
#define JSON_NDS_SWAP_R1R2          "swap_r1r2"
#define JSON_NDS_LANG               "lang"
#define JSON_NDS_KEYS_ROTATE        "keys_rotate"
#define JSON_NDS_MENU_C0            "menu_c0"
#define JSON_NDS_MENU_C1            "menu_c1"
#define JSON_NDS_MENU_C2            "menu_c2"
#define JSON_NDS_AUTO_STATE         "auto_state"
#define JSON_NDS_AUTO_SLOT          "auto_slot"
#define JSON_NDS_HOTKEY             "hotkey"
#define JSON_NDS_STATES             "states"
#define JSON_NDS_MENU_BG            "menu_bg"
#define JSON_NDS_MENU_CURSOR        "menu_cursor"
#define JSON_NDS_FAST_FORWARD       "fast_forward"
#define JSON_NDS_JOY_MODE           "joy_mode"
#define JSON_NDS_JOY_DZONE          "joy_dzone"
#define JSON_NDS_JOY_CUSKEY0        "joy_cuskey0"
#define JSON_NDS_JOY_CUSKEY1        "joy_cuskey1"
#define JSON_NDS_JOY_CUSKEY2        "joy_cuskey2"
#define JSON_NDS_JOY_CUSKEY3        "joy_cuskey3"
#define JSON_NDS_CHK_BAT            "chk_bat"

#define DEF_LANG_SLOT               0
#define DEF_LANG_LANG               "english"
#define LANG_FILE_LEN               16
#define MAX_LANG_FILE               32
#define MAX_LANG_LINE               128
#define MAX_MENU_LINE               128

#define NDS_DRASTIC_MENU_MAIN           1
#define NDS_DRASTIC_MENU_OPTION         2
#define NDS_DRASTIC_MENU_CONTROLLER     3
#define NDS_DRASTIC_MENU_CONTROLLER2    4
#define NDS_DRASTIC_MENU_FIRMWARE       5
#define NDS_DRASTIC_MENU_CHEAT          6
#define NDS_DRASTIC_MENU_ROM            7

#define HOTKEY_BIND_MENU                0
#define HOTKEY_BIND_SELECT              1

#define PEN_XV_MIN                      5000
#define PEN_XV_DEC                      1000
#define PEN_XV_INC                      1000
#define PEN_XV_MAX                      500000
#define PEN_YV_MIN                      5000
#define PEN_YV_DEC                      1000
#define PEN_YV_INC                      1000
#define PEN_YV_MAX                      500000

#if defined(A30) || defined(RG28XX)
enum _TEX_TYPE {
    TEX_SCR0 = 0,
    TEX_SCR1,
    TEX_BG,
    TEX_PEN,
    TEX_TMP,
    TEX_MAX
};
#endif

typedef struct MMIYOO_VideoInfo {
    SDL_Window *window;

#if defined(A30) || defined(RG28XX)
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

#ifdef MMIYOO
    int sar_fd;
#endif
} MMIYOO_VideoInfo;

typedef struct _GFX {
#ifdef PANDORA
    int fb_dev[2];
    struct omapfb_mem_info mi;
    struct omapfb_plane_info pi;
#else
    int fb_dev;
#endif

#ifdef TRIMUI
    int ion_dev;
    int mem_dev;
    int disp_dev;
#endif

    struct fb_var_screeninfo vinfo;
    struct fb_fix_screeninfo finfo;

    struct {
#if defined(A30) || defined(RG28XX)
        void *virAddr;
#endif

#ifdef MMIYOO
        void *virAddr;
        MI_PHY phyAddr;
#endif

#ifdef TRIMUI
        int flip;
#endif
    } fb, tmp, overlay;

#ifdef MMIYOO
    struct {
        void *virAddr[2];
        MI_PHY phyAddr[2];
    } mask;
#endif

#if defined(MMIYOO) || defined(A30) || defined(RG28XX)
    struct {
        int cur_sel;
        void *virAddr[2][2];
#ifdef MMIYOO
        MI_PHY phyAddr[2][2];
#endif
    } lcd;
#endif

    struct _HW {
#ifdef MMIYOO
        struct _BUF {
            MI_GFX_Surface_t surf;
            MI_GFX_Rect_t rt;
        } src, dst, overlay;
        MI_GFX_Opt_t opt;
#endif

#ifdef TRIMUI
        uint32_t *mem;
        disp_layer_config disp;
        disp_layer_config buf;
        ion_alloc_info_t ion;
#endif

#ifdef PANDORA
        uint32_t *mem[2];
#endif
    } hw;
} GFX;

typedef struct _NDS {
    int mincore;
    int maxcore;
    int mincpu;
    int maxcpu;
    int volume;
    int hotkey;
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
        int xv;
        int yv;
        int sel;
        int max;
        int pos;
        int type;
        SDL_Surface *img;
        clock_t pre_ticks;
        char path[MAX_PATH];
    } pen;

#ifdef A30
    struct _JOY {
        int max_x;
        int zero_x;
        int min_x;

        int max_y;
        int zero_y;
        int min_y;

        int mode;
        int dzone;
        int show_cnt;

        int cuskey[4];
    } joy;
#endif
} NDS;

typedef struct _CUST_MENU_SUB {
    int x;
    int y;
    int cheat;
    int enable;
    uint32_t fg;
    uint32_t bg;
    char msg[MAX_PATH];
} CUST_MENU_SUB;

typedef struct _CUST_MENU {
    int cnt;
    CUST_MENU_SUB item[MAX_MENU_LINE];
} CUST_MENU;

#ifdef A30
struct _cpu_clock {
    int clk;
    uint32_t reg;
};
#endif

int snd_nds_savestate(int slot);
void snd_nds_reload_config(void);
void neon_memcpy(void *dest, const void *src, size_t n);

void GFX_Clear(void);
void GFX_Flip(void);
int GFX_Copy(int id, const void *pixels, SDL_Rect srcrect, SDL_Rect dstrect, int pitch, int alpha, int rotate);

int draw_pen(void *pixels, int width, int pitch);
int draw_info(SDL_Surface *dst, const char *info, int x, int y, uint32_t fgcolor, uint32_t bgcolor);

int get_font_width(const char *info);
int get_font_height(const char *info);
int get_dir_path(const char *path, int desire, char *buf);

int fb_init(void);
int fb_uninit(void);

int reload_bg(void);
int reload_pen(void);
int reload_menu(void);
int reload_overlay(void);
void disp_resize(void);

int get_pitch(void *chk);
int handle_menu(int key);
int process_drastic_menu(void);
int update_texture(void *chk, void *new, const void *pixels, int pitch);
const void* get_pixels(void *chk);
const char *to_lang(const char *p);
void update_wayland_res(int w, int h);

void render_scanline_tiled_4bpp(void);
void render_polygon_setup_perspective_steps(void);

#endif

