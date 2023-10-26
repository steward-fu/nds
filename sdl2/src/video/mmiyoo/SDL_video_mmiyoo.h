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
#include "../../audio/mmiyoo/mi_sys.h"
#include "../../video/mmiyoo/mi_gfx.h"

#ifndef MAX_PATH
    #define MAX_PATH 255
#endif

#define FB_W                640
#define FB_H                480
#define FB_BPP              4
#define FB_SIZE             (FB_W * FB_H * FB_BPP * 2)
#define TMP_SIZE            (640 * 480 * 4)
#define CFG_PATH            "resources/settings.json"
#define THEME_PATH          "resources/bg"
#define PEN_PATH            "resources/pen"
#define DIGIT_PATH          "resources/digit"
#define MMIYOO_DRIVER_NAME  "mmiyoo"
#define BASE_REG_RIU_PA     0x1f000000
#define BASE_REG_MPLL_PA    (BASE_REG_RIU_PA + 0x103000 * 2)
#define PLL_SIZE            0x1000
#define PEN_LT              0
#define PEN_LB              1
#define PEN_RT              2
#define PEN_RB              3

#define NDS_DIS_MODE_VH_T0  0
#define NDS_DIS_MODE_VH_T1  1
#define NDS_DIS_MODE_S0     2
#define NDS_DIS_MODE_S1     3
#define NDS_DIS_MODE_V0     4
#define NDS_DIS_MODE_V1     5
#define NDS_DIS_MODE_H0     6
#define NDS_DIS_MODE_H1     7
#define NDS_DIS_MODE_VH_S0  8
#define NDS_DIS_MODE_VH_S1  9
#define NDS_DIS_MODE_VH_C0  10
#define NDS_DIS_MODE_VH_C1  11
#define NDS_DIS_MODE_HH0    12
#define NDS_DIS_MODE_LAST   12
#define NDS_DIS_MODE_HRES0  13
#define NDS_DIS_MODE_HRES1  14

#define NDS_BORDER_MAX      8

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

typedef struct MMIYOO_VideoInfo {
    SDL_Window *window;
} MMIYOO_VideoInfo;

typedef struct _GFX {
    int fd_fb;

    struct fb_var_screeninfo vinfo;
    struct fb_fix_screeninfo finfo;

    MI_PHY fb_phyAddr;
    void *fb_virAddr;

    MI_PHY tmp_phyAddr;
    void *tmp_virAddr;

    MI_GFX_Surface_t stSrc;
    MI_GFX_Rect_t stSrcRect;
    MI_GFX_Surface_t stDst;
    MI_GFX_Rect_t stDstRect;
    MI_GFX_Opt_t stOpt;
} GFX;

typedef struct _NDS {
    int maxcpu;
    int volume;
    int dis_mode;
    int hres_mode;
    int defer_update_bg;
    char cfg_path[MAX_PATH];
    SDL_Surface *digit[10];

    struct _ALPHA {
        int val;
        int pos;
        int border;
    } alpha;

    struct _OVERCLOCK {
        int inc;
        int dec;
    } oc;

    struct _THEME {
        int sel;
        int max;
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

void GFX_ClearPixels(void);
int GFX_CopyPixels(const void *pixels, SDL_Rect srcrect, SDL_Rect dstrect, int pitch, int alpha, int rotate);
void GFX_Flip(void);
int draw_pen(const void *pixels, int width);
int draw_digit(int val, int num);
int reload_bg(int dis_mode);
int reload_pen(void);
int cpuclock_inc(void);
int cpuclock_dec(void);

#endif

