/*
  Customized version for Miyoo-Mini handheld.
  Only tested under Miyoo-Mini stock OS (original firmware) with Parasyte compatible layer.

  Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>
  Copyright (C) 2022-2022 Steward Fu <steward.fu@gmail.com>

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
#include "../../SDL_internal.h"

#ifndef __SDL_VIDEO_MMIYOO_H__
#define __SDL_VIDEO_MMIYOO_H__

#include <stdint.h>
#include <stdbool.h>
#include <linux/fb.h>

#include "../SDL_sysvideo.h"
#include "../SDL_sysvideo.h"
#include "../SDL_pixels_c.h"
#include "../../events/SDL_events_c.h"

#include "SDL_ttf.h"
#include "SDL_image.h"
#include "SDL_version.h"
#include "SDL_syswm.h"
#include "SDL_loadso.h"
#include "SDL_events.h"
#include "SDL_video.h"
#include "SDL_mouse.h"
#include "SDL_video_mmiyoo.h"
#include "SDL_event_mmiyoo.h"
#include "SDL_framebuffer_mmiyoo.h"
#include "SDL_opengles_mmiyoo.h"

#include "detour.h"

#ifdef MMIYOO
    #include "mi_sys.h"
    #include "mi_gfx.h"
#else
    #define E_MI_GFX_ROTATE_180 0
#endif

#ifdef TRIMUI
    #include "trimui.h"
#endif

#ifndef MAX_PATH
    #define MAX_PATH 128
#endif

#ifdef MMIYOO
    #define DEF_FB_W                640
    #define DEF_FB_H                480
    #define FB_BPP                  4
#endif

#ifdef TRIMUI
    #define DEF_FB_W                320
    #define DEF_FB_H                240
    #define ION_W                   512
    #define ION_H                   384
    #define FB_BPP                  4
#endif

#ifdef FUNKEYS
    #define DEF_FB_W                240
    #define DEF_FB_H                240
    #define FB_BPP                  2
#endif

#define IMG_W                       640
#define IMG_H                       480

#define PREFIX                      "[SDL] "

#ifdef FUNKEYS
    #define SHOT_PATH               "/mnt/Screenshots"
#else
    #define SHOT_PATH               "/mnt/SDCARD/Screenshots"
#endif

#define CFG_PATH                    "resources/settings.json"
#define THEME_PATH                  "resources/bg"
#define PEN_PATH                    "resources/pen"
#define LANG_PATH                   "resources/lang"
#define OVERLAY_PATH                "resources/overlay"
#define MENU_BG_FILE                "resources/menu/bg.png"
#define MENU_CURSOR_FILE            "resources/menu/cursor.png"
#define DRASTIC_MENU_BG0_FILE       "resources/menu/drastic_bg0.png"
#define DRASTIC_MENU_BG1_FILE       "resources/menu/drastic_bg1.png"
#define DRASTIC_MENU_YES_FILE       "resources/menu/drastic_yes.png"
#define DRASTIC_MENU_NO_FILE        "resources/menu/drastic_no.png"
#define DRASTIC_MENU_CURSOR_FILE    "resources/menu/drastic_cursor.png"
#define MMIYOO_DRIVER_NAME          "mmiyoo"
#define BASE_REG_RIU_PA             0x1f000000
#define BASE_REG_MPLL_PA            (BASE_REG_RIU_PA + 0x103000 * 2)
#define PLL_SIZE                    0x1000
#define PEN_LT                      0
#define PEN_LB                      1
#define PEN_RT                      2
#define PEN_RB                      3
#define FONT_PATH                   "resources/font/font.ttf"

#ifdef MMIYOO
    #define DEF_FONT_SIZE           24
#endif

#ifdef TRIMUI
    #define DEF_FONT_SIZE           12
#endif

#ifdef FUNKEYS
    #define DEF_FONT_SIZE           12
#endif

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
#define NDS_DIS_MODE_VH_C0          10
#define NDS_DIS_MODE_VH_C1          11
#define NDS_DIS_MODE_HH0            12
#define NDS_DIS_MODE_HH1            13
#define NDS_DIS_MODE_LAST           13
#define NDS_DIS_MODE_HRES0          14
#define NDS_DIS_MODE_HRES1          15

#define NDS_ALPHA_MAX               7
#define NDS_BORDER_MAX              7

#define NDS_STATE_QSAVE             1
#define NDS_STATE_QLOAD             2
#define NDS_STATE_FF                4

#define NDS_SCALE_BLUR              0
#define NDS_SCALE_PIXEL             1

#define JSON_NDS_PEN_XV             "xv"
#define JSON_NDS_PEN_YV             "yv"
#define JSON_NDS_PEN_SEL            "pen"
#define JSON_NDS_PEN_POS            "touchpad"
#define JSON_NDS_THEME_SEL          "theme"
#define JSON_NDS_DIS_MODE           "mode"
#define JSON_NDS_ALPHA_VALUE        "alpha"
#define JSON_NDS_ALPHA_POSITION     "position"
#define JSON_NDS_ALPHA_BORDER       "border"
#define JSON_NDS_MAX_CPU            "maxcpu"
#define JSON_NDS_MIN_CPU            "mincpu"
#define JSON_NDS_OVERLAY            "overlay"
#define JSON_NDS_ALT_MODE           "alt"
#define JSON_NDS_SWAP_L1L2          "swap_l1l2"
#define JSON_NDS_SWAP_R1R2          "swap_r1r2"
#define JSON_NDS_CUST_MENU          "cust_menu"
#define JSON_NDS_LANG               "lang"
#define JSON_NDS_KEYS_ROTATE        "keys_rotate"
#define JSON_NDS_MENU_C0            "menu_c0"
#define JSON_NDS_MENU_C1            "menu_c1"
#define JSON_NDS_MENU_C2            "menu_c2"
#define JSON_NDS_AUTO_STATE         "auto_state"
#define JSON_NDS_AUTO_SLOT          "auto_slot"
#define JSON_NDS_HOTKEY             "hotkey"
#define JSON_NDS_STATES             "states"

#define GFX_ACTION_NONE             0
#define GFX_ACTION_FLIP             1
#define GFX_ACTION_COPY0            2
#define GFX_ACTION_COPY1            3

#ifdef MMIYOO
    #define RELOAD_BG_COUNT         5
#else
    #define RELOAD_BG_COUNT         1
#endif

#define MAX_QUEUE                   2

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

#ifdef TRIMUI
    #define BLUR_OFFSET                 16
#endif

typedef struct MMIYOO_VideoInfo {
    SDL_Window *window;
} MMIYOO_VideoInfo;

typedef struct _GFX {
    int fb_dev;

#ifdef TRIMUI
    int ion_dev;
    int mem_dev;
    int disp_dev;
#endif

    struct fb_var_screeninfo vinfo;
    struct fb_fix_screeninfo finfo;

    struct _DMA {
#ifdef MMIYOO
        void *virAddr;
        MI_PHY phyAddr;
#endif

#ifdef TRIMUI
        int flip;
#endif
    } fb, tmp, overlay;

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

#ifdef FUNKEYS
        uint32_t *mem;
#endif
    } hw;

    int action;
    struct _THREAD {
        void *pixels;
        SDL_Rect srt;
        SDL_FRect drt;
        SDL_Texture *texture;
    } thread[MAX_QUEUE];
} GFX;

typedef struct _NDS {
    int mincpu;
    int maxcpu;
    int volume;
    int hotkey;
    int dis_mode;
    int alt_mode;
    int hres_mode;
    int cust_menu;
    int swap_l1l2;
    int swap_r1r2;
    int auto_slot;
    int auto_state;
    int keys_rotate;
    int enable_752x560;
    int defer_update_bg;

    TTF_Font *font;
    uint32_t state;

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
        int enable;
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

int snd_nds_savestate(int slot);
void snd_nds_reload_config(void);
void neon_memcpy(void *dest, const void *src, size_t n);

void GFX_Clear(void);
void GFX_Flip(void);
int GFX_Copy(const void *pixels, SDL_Rect srcrect, SDL_Rect dstrect, int pitch, int alpha, int rotate);

int draw_pen(const void *pixels, int width, int pitch);
int draw_info(SDL_Surface *dst, const char *info, int x, int y, uint32_t fgcolor, uint32_t bgcolor);

int get_font_width(const char *info);
int get_font_height(const char *info);
int get_dir_path(const char *path, int desire, char *buf);

int fb_init(void);
int fb_uninit(void);

int reload_bg(void);
int reload_pen(void);
int reload_overlay(void);
void disp_resize(void);

int handle_menu(int key);
int process_drastic_menu(void);
int My_QueueCopy(SDL_Texture *texture, const void *pixels, const SDL_Rect *srcrect, const SDL_FRect *dstrect);
const void* get_pixels(void *chk);
const char *to_lang(const char *p);

#endif

