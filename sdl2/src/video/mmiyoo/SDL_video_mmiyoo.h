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

#include "../../audio/mmiyoo/mi_sys.h"
#include "../../video/mmiyoo/mi_gfx.h"

#ifndef MAX_PATH
    #define MAX_PATH 255
#endif

#define FB_W                        640
#define FB_H                        480
#define FB_BPP                      4
#define FB_SIZE                     (FB_W * FB_H * FB_BPP * 2)
#define TMP_SIZE                    (FB_W * FB_H * FB_BPP)
#define CFG_PATH                    "resources/settings.json"
#define THEME_PATH                  "resources/bg"
#define PEN_PATH                    "resources/pen"
#define OVERLAY_PATH                "resources/overlay"
#define MENU_BG_FILE                "resources/menu/bg.png"
#define MENU_CURSOR_FILE            "resources/menu/cursor.png"
#define MMIYOO_DRIVER_NAME          "mmiyoo"
#define BASE_REG_RIU_PA             0x1f000000
#define BASE_REG_MPLL_PA            (BASE_REG_RIU_PA + 0x103000 * 2)
#define PLL_SIZE                    0x1000
#define PEN_LT                      0
#define PEN_LB                      1
#define PEN_RT                      2
#define PEN_RB                      3
#define FONT_PATH                   "resources/font/font.ttf"
#define SFONT_SIZE                  16
#define BFONT_SIZE                  28

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
#define NDS_DIS_MODE_LAST           12
#define NDS_DIS_MODE_HRES0          13
#define NDS_DIS_MODE_HRES1          14

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

typedef struct MMIYOO_VideoInfo {
    SDL_Window *window;
} MMIYOO_VideoInfo;

typedef struct _GFX {
    int fd;
    struct fb_var_screeninfo vinfo;
    struct fb_fix_screeninfo finfo;

    struct _DMA {
        MI_PHY phyAddr;
        void *virAddr;
    } fb, tmp, overlay;

    struct _HW {
        struct _BUF {
            MI_GFX_Surface_t surf;
            MI_GFX_Rect_t rt;
        } src, dst, overlay;
        MI_GFX_Opt_t opt;
    } hw;
} GFX;

typedef struct _NDS {
    int mincpu;
    int maxcpu;
    int volume;
    int dis_mode;
    int alt_mode;
    int hres_mode;
    int swap_l1l2;
    int swap_r1r2;
    int defer_update_bg;
    char cfg_path[MAX_PATH];

    TTF_Font *sfont;
    TTF_Font *bfont;
    uint32_t state;

    struct _MENU {
        int enable;
        SDL_Surface *bg;
        SDL_Surface *cursor;
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

void GFX_Clear(void);
void GFX_Flip(void);
int GFX_Copy(const void *pixels, SDL_Rect srcrect, SDL_Rect dstrect, int pitch, int alpha, int rotate);

int draw_pen(const void *pixels, int width, int pitch);
int draw_info(SDL_Surface *dst, int is_big, const char *info, int x, int y, uint32_t fgcolor, uint32_t bgcolor);

int get_font_width(const char *info, int is_big);
int get_font_height(const char *info, int is_big);

int reload_bg(void);
int reload_pen(void);
int reload_overlay(void);

int handle_menu(int key);

#endif

