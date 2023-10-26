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

#if SDL_VIDEO_DRIVER_MMIYOO

#include <dirent.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <time.h>
#include <json-c/json.h>

#include <SDL_image.h>
#include "../SDL_sysvideo.h"
#include "SDL_version.h"
#include "SDL_syswm.h"
#include "SDL_loadso.h"
#include "SDL_events.h"
#include "SDL_video.h"
#include "SDL_mouse.h"
#include "../SDL_sysvideo.h"
#include "../SDL_pixels_c.h"
#include "../../events/SDL_events_c.h"
#include "SDL_video_mmiyoo.h"
#include "SDL_event_mmiyoo.h"
#include "SDL_framebuffer_mmiyoo.h"
#include "SDL_opengles_mmiyoo.h"

#include "hex_pen.h"

static GFX gfx = {0};

NDS nds = {0};
MMIYOO_VideoInfo MMiyooVideoInfo={0};

extern MMIYOO_EventInfo MMiyooEventInfo;

static int MMIYOO_VideoInit(_THIS);
static int MMIYOO_SetDisplayMode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode);
static void MMIYOO_VideoQuit(_THIS);

void neon_memcpy(void *dest, const void *src, size_t n);

static int read_config(void)
{
    struct json_object *jval = NULL;
    struct json_object *jfile = NULL;

    jfile = json_object_from_file(nds.cfg_path);
    if (jfile == NULL) {
        printf("Failed to read settings from json file (%s)\n", nds.cfg_path);
        return -1;
    }

    json_object_object_get_ex(jfile, JSON_NDS_PEN_SEL, &jval);
    if (jval) {
        nds.pen.sel = json_object_get_int(jval);
        printf("[json] nds.pen.sel: %d\n", nds.pen.sel);
        if (nds.pen.sel >= nds.pen.max) {
            printf("Invalid nds.pen.sel(%d), reset as 0\n", nds.pen.sel);
            nds.pen.sel = 0;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_PEN_POS, &jval);
    if (jval) {
        nds.pen.pos = json_object_get_int(jval) == 0 ? 0 : 1;
        printf("[json] nds.pen.pos: %d\n", nds.pen.pos);
    }

    json_object_object_get_ex(jfile, JSON_NDS_THEME_SEL, &jval);
    if (jval) {
        nds.theme.sel = json_object_get_int(jval);
        printf("[json] nds.theme.sel: %d\n", nds.theme.sel);
        if (nds.theme.sel > nds.theme.max) {
            printf("Invalid nds.theme.sel(%d), reset as 0\n", nds.theme.sel);
            nds.theme.sel = 0;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_DIS_MODE, &jval);
    if (jval) {
        nds.dis_mode = json_object_get_int(jval);
        printf("[json] nds.mode: %d\n", nds.dis_mode);
        if (nds.dis_mode > NDS_DIS_MODE_LAST) {
            printf("Invalid nds.mode(%d), reset as 0\n", nds.dis_mode);
            nds.dis_mode = 0;
        }
    }
    
    json_object_object_get_ex(jfile, JSON_NDS_PEN_XV, &jval);
    if (jval) {
        nds.pen.xv = json_object_get_int(jval);
        printf("[json] nds.xv: %d\n", nds.pen.xv);
        if (nds.pen.xv <= 0) {
            printf("Invalid nds.pen.xv(%d), reset as 10000\n", nds.pen.xv);
            nds.pen.xv = 10000;
        }
    }
    
    json_object_object_get_ex(jfile, JSON_NDS_PEN_YV, &jval);
    if (jval) {
        nds.pen.yv = json_object_get_int(jval);
        printf("[json] nds.yv: %d\n", nds.pen.yv);
        if (nds.pen.yv <= 0) {
            printf("Invalid nds.pen.yv(%d), reset as 12000\n", nds.pen.yv);
            nds.pen.yv = 12000;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_VALUE, &jval);
    if (jval) {
        nds.alpha.val = json_object_get_int(jval);
        printf("[json] nds.alpha.val: %d\n", nds.alpha.val);
        if ((nds.alpha.val < 0) || (nds.alpha.val >= 10)) {
            printf("Invalid nds.alpha.val(%d), reset as 3\n", nds.alpha.val);
            nds.alpha.val = 3;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_POSITION, &jval);
    if (jval) {
        nds.alpha.pos = json_object_get_int(jval);
        printf("[json] nds.alpha.pos: %d\n", nds.alpha.pos);
        if ((nds.alpha.pos < 0) || (nds.alpha.pos >= 4)) {
            printf("Invalid nds.alpha.pos(%d), reset as 0\n", nds.alpha.pos);
            nds.alpha.pos = 0;
        }
    }

    json_object_object_get_ex(jfile, JSON_NDS_ALPHA_BORDER, &jval);
    if (jval) {
        nds.alpha.border = json_object_get_int(jval);
        nds.alpha.border%= NDS_BORDER_MAX;
        printf("[json] nds.alpha.border: %d\n", nds.alpha.border);
    }

    json_object_object_get_ex(jfile, JSON_NDS_MAX_CPU, &jval);
    if (jval) {
        nds.maxcpu = json_object_get_int(jval);
        printf("[json] nds.maxcpu: %d\n", nds.maxcpu);
        if (nds.maxcpu < 0) {
            printf("Invalid nds.maxcpu(%d), reset as 1600\n", nds.maxcpu);
            nds.maxcpu = 1600;
        }
    }

    reload_pen();
    json_object_put(jfile);
    return 0;
}

static int write_config(void)
{
    struct json_object *jfile = NULL;

    jfile = json_object_from_file(nds.cfg_path);
    if (jfile == NULL) {
        printf("Failed to write settings to json file (%s)\n", nds.cfg_path);
        return -1;
    }

    json_object_object_add(jfile, JSON_NDS_PEN_SEL, json_object_new_int(nds.pen.sel));
    json_object_object_add(jfile, JSON_NDS_THEME_SEL, json_object_new_int(nds.theme.sel));
    json_object_object_add(jfile, JSON_NDS_DIS_MODE, json_object_new_int(nds.dis_mode));
    json_object_object_add(jfile, JSON_NDS_ALPHA_VALUE, json_object_new_int(nds.alpha.val));
    json_object_object_add(jfile, JSON_NDS_ALPHA_POSITION, json_object_new_int(nds.alpha.pos));
    json_object_object_add(jfile, JSON_NDS_ALPHA_BORDER, json_object_new_int(nds.alpha.border));

    json_object_to_file(nds.cfg_path, jfile);
    json_object_put(jfile);
    printf("Writing settings to json file !\n");
    return 0;
}

static int get_cpuclock(void *pll_map)
{
    uint32_t rate = 0;
    uint32_t lpf_value = 0;
    uint32_t post_div = 0;
    volatile uint8_t* p8 = (uint8_t*)pll_map;
    volatile uint16_t* p16 = (uint16_t*)pll_map;
    static const uint64_t divsrc = 432000000llu * 524288;

    if (pll_map) {
        lpf_value = p16[0x2a4] + (p16[0x2a6] << 16);
        post_div = p16[0x232] + 1;
        if (lpf_value == 0) {
            lpf_value = (p8[0x2c2 << 1] << 16) + (p8[0x2c1 << 1] << 8) + p8[0x2c0 << 1];
        }

        /*
         * Calculate LPF value for DFS
         * LPF_value(5.19) = (432MHz / Ref_clk) * 2^19  =>  it's for post_div=2
         * Ref_clk = CPU_CLK * 2 / 32
         */
        rate = (divsrc / lpf_value * 2 / post_div * 16);
        printf("Current cpuclock=%u (lpf=%u, post_div=%u)\n", rate, lpf_value, post_div);
    }
    return rate / 1000000;
}

static void write_file(const char* fname, char* str)
{
	int fd = open(fname, O_WRONLY);

	if (fd >= 0) {
        write(fd, str, strlen(str));
        close(fd);
    }
}

static int set_cpuclock(int inc)
{
    int fd_mem = -1;
    void *pll_map = NULL;
    uint32_t post_div = 0;
    char clockstr[16] = {0};
    uint32_t cur_cpuclock = 0;
    const char fn_governor[] = "/sys/devices/system/cpu/cpufreq/policy0/scaling_governor";
    const char fn_setspeed[] = "/sys/devices/system/cpu/cpufreq/policy0/scaling_setspeed";

    if (clock <= 0) {
        return 0;
    }

    fd_mem = open("/dev/mem", O_RDWR);
    if (fd_mem < 0) {
        return 0;
    }

    pll_map = mmap(0, PLL_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd_mem, BASE_REG_MPLL_PA);
    if (pll_map) {
        cur_cpuclock = get_cpuclock(pll_map);
        if (inc) {
            cur_cpuclock+= 50;
        }
        else {
            cur_cpuclock-= 50;
        }

        if (cur_cpuclock <= nds.maxcpu) {
            sprintf(clockstr, "%d", cur_cpuclock * 1000);
            write_file(fn_governor, "userspace");
            write_file(fn_setspeed, clockstr);

            printf("Set cpuclock %dMHz\n", cur_cpuclock);
            cur_cpuclock*= 1000;
            if (cur_cpuclock >= 800000) {
                post_div = 2;
            }
            else if (cur_cpuclock >= 400000) {
                post_div = 4;
            }
            else if (cur_cpuclock >= 200000) {
                post_div = 8;
            }
            else {
                post_div = 16;
            }

            if (1) {
                static const uint64_t divsrc = 432000000llu * 524288;
                uint32_t rate = (cur_cpuclock * 1000) / 16 * post_div / 2;
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
        }
        cur_cpuclock = get_cpuclock(pll_map);
        munmap(pll_map, PLL_SIZE);
    }
    close(fd_mem);
    return cur_cpuclock;
}

int cpuclock_inc(void)
{
    return set_cpuclock(1);
}

int cpuclock_dec(void)
{
    return set_cpuclock(0);
}

static int get_theme_path(int desire, char *buf)
{
    DIR *d = NULL;
    int count = 0, r = -1;
    struct dirent *dir = NULL;

    d = opendir(nds.theme.path);
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

            if (count == desire) {
                r = snprintf(buf, MAX_PATH, "%s/%s", nds.theme.path, dir->d_name) ? 0 : 1;
                break;
            }
            count+= 1;
        }
        closedir(d);
    }
    return r;
}

static int get_theme_count(void)
{
    DIR *d = NULL;
    int count = 0;
    struct dirent *dir = NULL;

    memset(nds.theme.path, 0, sizeof(nds.theme.path));
    if (getcwd(nds.theme.path, sizeof(nds.theme.path))) {
        strcat(nds.theme.path, "/");
        strcat(nds.theme.path, THEME_PATH);
        d = opendir(nds.theme.path);
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
    }
    return count;
}

static int get_pen_path(int desire, char *buf)
{
    DIR *d = NULL;
    int count = 0, r = -1;
    struct dirent *dir = NULL;

    d = opendir(nds.pen.path);
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

            if (count == desire) {
                r = snprintf(buf, MAX_PATH, "%s/%s", nds.pen.path, dir->d_name) ? 0 : 1;
                break;
            }
            count+= 1;
        }
        closedir(d);
    }
    return r;
}

static int get_pen_count(void)
{
    DIR *d = NULL;
    int count = 0;
    struct dirent *dir = NULL;

    memset(nds.pen.path, 0, sizeof(nds.pen.path));
    if (getcwd(nds.pen.path, sizeof(nds.pen.path))) {
        strcat(nds.pen.path, "/");
        strcat(nds.pen.path, PEN_PATH);
        d = opendir(nds.pen.path);
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
    }
    return count;
}

void GFX_Init(void)
{
    MI_SYS_Init();
    MI_GFX_Open();

    gfx.fd_fb = open("/dev/fb0", O_RDWR);
    ioctl(gfx.fd_fb, FBIOGET_FSCREENINFO, &gfx.finfo);
    gfx.fb_phyAddr = gfx.finfo.smem_start;
    ioctl(gfx.fd_fb, FBIOGET_VSCREENINFO, &gfx.vinfo);
    gfx.vinfo.yoffset = 0;
    ioctl(gfx.fd_fb, FBIOPUT_VSCREENINFO, &gfx.vinfo);
    MI_SYS_MemsetPa(gfx.fb_phyAddr, 0, FB_SIZE);
    MI_SYS_Mmap(gfx.fb_phyAddr, gfx.finfo.smem_len, &gfx.fb_virAddr, TRUE);

    gfx.stDst.phyAddr = gfx.fb_phyAddr;
    gfx.stDst.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    gfx.stDst.u32Width = FB_W;
    gfx.stDst.u32Height = FB_H;
    gfx.stDst.u32Stride = FB_W * FB_BPP;
    gfx.stDstRect.s32Xpos = 0;
    gfx.stDstRect.s32Ypos = 0;
    gfx.stDstRect.u32Width = FB_W;
    gfx.stDstRect.u32Height = FB_H;

    memset(&gfx.stOpt, 0, sizeof(gfx.stOpt));
    MI_SYS_MMA_Alloc(NULL, TMP_SIZE, &gfx.tmp_phyAddr);
    MI_SYS_Mmap(gfx.tmp_phyAddr, TMP_SIZE, &gfx.tmp_virAddr, TRUE);

    nds.theme.sel = 0;
    nds.theme.max = get_theme_count();
    printf("How many theme:%d\n", nds.theme.max);

    nds.pen.sel = 0;
    nds.pen.max = get_pen_count();
    printf("How many pen:%d\n", nds.pen.max);

    getcwd(nds.cfg_path, sizeof(nds.cfg_path));
    strcat(nds.cfg_path, "/");
    strcat(nds.cfg_path, CFG_PATH);
}

void GFX_Quit(void)
{
    gfx.vinfo.yoffset = 0;
    ioctl(gfx.fd_fb, FBIOPUT_VSCREENINFO, &gfx.vinfo);
    close(gfx.fd_fb);
    gfx.fd_fb = 0;

    MI_SYS_Munmap(gfx.fb_virAddr, TMP_SIZE);
    MI_SYS_Munmap(gfx.tmp_virAddr, TMP_SIZE);
    MI_SYS_MMA_Free(gfx.tmp_phyAddr);
    MI_GFX_Close();
    MI_SYS_Exit();
}

void GFX_ClearPixels(void)
{
    MI_SYS_MemsetPa(gfx.fb_phyAddr, 0, FB_SIZE);
    MI_SYS_MemsetPa(gfx.tmp_phyAddr, 0, TMP_SIZE);
}

int draw_pen(const void *pixels, int width)
{
    int c0 = 0;
    int c1 = 0;
    int w = 28;
    int h = 28;
    int sub = 0;
    uint32_t *s = hex_pen;
    uint32_t *d = (uint32_t*)pixels;
    int x = ((MMiyooEventInfo.mouse.x - MMiyooEventInfo.mouse.minx) * 256) / (MMiyooEventInfo.mouse.maxx - MMiyooEventInfo.mouse.minx);
    int y = ((MMiyooEventInfo.mouse.y - MMiyooEventInfo.mouse.miny) * 192) / (MMiyooEventInfo.mouse.maxy - MMiyooEventInfo.mouse.miny);

    switch (nds.dis_mode) {
    case NDS_DIS_MODE_S0:
    case NDS_DIS_MODE_S1:
    case NDS_DIS_MODE_HRES0:
    case NDS_DIS_MODE_HRES1:
        sub = 192;
        break;
    }

    if (nds.pen.pos == 0) {
        switch (nds.dis_mode) {
        case NDS_DIS_MODE_VH_T0:
        case NDS_DIS_MODE_VH_T1:
        case NDS_DIS_MODE_V0:
        case NDS_DIS_MODE_V1:
        case NDS_DIS_MODE_H0:
        case NDS_DIS_MODE_H1:
        case NDS_DIS_MODE_VH_S0:
        case NDS_DIS_MODE_VH_S1:
        case NDS_DIS_MODE_VH_C0:
        case NDS_DIS_MODE_VH_C1:
        case NDS_DIS_MODE_HH0:
            sub = 192;
            break;
        }
    }
    
    if (nds.pen.img) {
        w = nds.pen.img->w;
        h = nds.pen.img->h;
        s = nds.pen.img->pixels;
    }

    switch(nds.pen.type) {
    case PEN_LT:
        break;
    case PEN_LB:
        y-= h;
        break;
    case PEN_RT:
        x-= w;
        break;
    case PEN_RB:
        x-= w;
        y-= h;
        break;
    }

    for (c1=0; c1<h; c1++) {
        for (c0=0; c0<w; c0++) {
            if (((c1 + (y - sub)) >= 0) && ((c1 + (y - sub)) < 192) && ((c0 + x) < 256) && ((c0 + x) >= 0)) {
                if (*s) {
                    d[((c1 + (y - sub)) * width) + c0 + x] = *s;
                }
            }
            s+= 1;
        }
    }
    return 0;
}

int GFX_CopyPixels(const void *pixels, SDL_Rect srcrect, SDL_Rect dstrect, int pitch, int alpha, int rotate)
{
    int copy_it = 1;
    MI_U16 u16Fence = 0;

    if (pixels == NULL) {
        return -1;
    }
    
    if (alpha != 0) {
        if (nds.alpha.val >= 10) {
            nds.alpha.val = 0;
        }

        if (nds.alpha.val > 0) {
            float m0 = (float)nds.alpha.val / 10;
            float m1 = 1.0 - m0;
            uint32_t *d = gfx.tmp_virAddr;
            uint32_t r0 = 0, g0 = 0, b0 = 0;
            uint32_t r1 = 0, g1 = 0, b1 = 0;
            int x = 0, y = 0, ax = 0, ay = 0, sw = 0, sh = 0;
            const uint32_t *s0 = gfx.fb_virAddr + (FB_W * gfx.vinfo.yoffset * FB_BPP);
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

                        if (pitch == 512) {
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
            dstrect.w = 256;
            dstrect.h = 192;
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
            dstrect.y = 480 - dstrect.h;
            break;
        case 1:
            dstrect.x = 640 - dstrect.w;
            dstrect.y = 480 - dstrect.h;
            break;
        case 2:
            dstrect.x = 640 - dstrect.w;
            dstrect.y = 0;
            break;
        case 3:
            dstrect.x = 0;
            dstrect.y = 0;
            break;
        }
    }

    if (copy_it) {
        neon_memcpy(gfx.tmp_virAddr, pixels, srcrect.h * pitch);
    }

    if ((pitch / srcrect.w) == 2) {
        gfx.stSrc.eColorFmt = E_MI_GFX_FMT_RGB565;
    }
    else {
        gfx.stSrc.eColorFmt = E_MI_GFX_FMT_ARGB8888;
    }
    gfx.stOpt.eRotate = rotate;
    gfx.stOpt.eSrcDfbBldOp = E_MI_GFX_DFB_BLD_ONE;
    gfx.stSrc.u32Width = srcrect.w;
    gfx.stSrc.u32Height = srcrect.h;
    gfx.stSrc.u32Stride = pitch;
    gfx.stSrcRect.s32Xpos = srcrect.x;
    gfx.stSrcRect.s32Ypos = srcrect.y;
    gfx.stSrcRect.u32Width = srcrect.w;
    gfx.stSrcRect.u32Height = srcrect.h;
    gfx.stSrc.phyAddr = gfx.tmp_phyAddr;
    
    gfx.stDstRect.s32Xpos = dstrect.x;
    gfx.stDstRect.s32Ypos = dstrect.y;
    gfx.stDstRect.u32Width = dstrect.w;
    gfx.stDstRect.u32Height = dstrect.h;
    gfx.stDst.phyAddr = gfx.fb_phyAddr + (FB_W * gfx.vinfo.yoffset * FB_BPP);

    MI_SYS_FlushInvCache(gfx.tmp_virAddr, pitch * srcrect.h);
    MI_GFX_BitBlit(&gfx.stSrc, &gfx.stSrcRect, &gfx.stDst, &gfx.stDstRect, &gfx.stOpt, &u16Fence);
    MI_GFX_WaitAllDone(FALSE, u16Fence);
    return 0;
}

void GFX_Flip(void)
{
    ioctl(gfx.fd_fb, FBIOPAN_DISPLAY, &gfx.vinfo);
    gfx.vinfo.yoffset ^= FB_H;
}

int draw_digit(int val, int num)
{
    int cc = 0;
    SDL_Rect srt = {0};
    SDL_Rect drt = {0};
    SDL_Surface *p = NULL;

    for (cc=0; cc<num; cc++) {
        p = nds.digit[val % 10];
        if (p) {
            srt.x = 0;
            srt.y = 0;
            srt.w = p->w;
            srt.h = p->h;

            drt.x = 640 - (p->w * (num - cc));
            drt.y = 0;
            drt.w = p->w;
            drt.h = p->h;
            GFX_CopyPixels(p->pixels, srt, drt, p->pitch, 0, E_MI_GFX_ROTATE_180);
        }
        val/= 10;
    }
    return 0;
}

int reload_pen(void)
{
    char buf[255] = {0};
    SDL_Surface *tmp = NULL, *t = NULL;

    if (nds.pen.img) {
        SDL_FreeSurface(nds.pen.img);
        nds.pen.img = NULL;
    }

    nds.pen.type = PEN_LB;
    tmp = SDL_CreateRGBSurface(SDL_SWSURFACE, 32, 32, 32, 0, 0, 0, 0);
    if (tmp) {
        SDL_FillRect(tmp, &tmp->clip_rect, SDL_MapRGB(tmp->format, 0x00, 0x00, 0x00));

        if (get_pen_path(nds.pen.sel, buf) == 0) {
            t = IMG_Load(buf);
            if (t) {
                nds.pen.img = SDL_ConvertSurface(t, tmp->format, 0);
                SDL_FreeSurface(t);

                printf("Pen %p(%s)\n", nds.pen.img, buf);
                if (strstr(buf, "_lt")) {
                    nds.pen.type = PEN_LT;
                }
                else if (strstr(buf, "_rt")) {
                    nds.pen.type = PEN_RT;
                }
                else if (strstr(buf, "_rb")) {
                    nds.pen.type = PEN_RB;
                }
                else {
                    nds.pen.type = PEN_LB;
                }
                printf("Pen type %d\n", nds.pen.type);
            }
        }
        SDL_FreeSurface(tmp);
    }
    return 0;
}

int reload_bg(int dis_mode)
{
    char buf[255] = {0};
    SDL_Rect srt = {0, 0, FB_W, FB_H};
    SDL_Rect drt = {0, 0, FB_W, FB_H};
    SDL_Surface *t0 = NULL, *tmp = NULL;

    tmp = SDL_CreateRGBSurface(SDL_SWSURFACE, FB_W, FB_H, 32, 0, 0, 0, 0);
    if (tmp) {
        SDL_FillRect(tmp, &tmp->clip_rect, SDL_MapRGB(tmp->format, 0x00, 0x00, 0x00));

        if (get_theme_path(nds.theme.sel, buf) == 0) {
            switch (dis_mode) {
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
            case NDS_DIS_MODE_VH_C0:
                strcat(buf, "/bg_vh_c0.png");
                break;
            case NDS_DIS_MODE_VH_C1:
                strcat(buf, "/bg_vh_c1.png");
                break;
            case NDS_DIS_MODE_HH0:
                strcat(buf, "/bg_hh0.png");
                break;
            case NDS_DIS_MODE_HRES0:
                strcat(buf, "/bg_hres0.png");
                break;
            }
            
            t0 = IMG_Load(buf);
            if (t0) {
                SDL_BlitSurface(t0, NULL, tmp, NULL);
                SDL_FreeSurface(t0);
            }
        }
        GFX_CopyPixels(tmp->pixels, srt, drt, tmp->pitch, 0, E_MI_GFX_ROTATE_180);
        SDL_FreeSurface(tmp);
    }
    return 0;
}

static int MMIYOO_Available(void)
{
    const char *envr = SDL_getenv("SDL_VIDEODRIVER");
    if((envr) && (SDL_strcmp(envr, MMIYOO_DRIVER_NAME) == 0)) {
        return 1;
    }
    return 0;
}

static void MMIYOO_DeleteDevice(SDL_VideoDevice *device)
{
    SDL_free(device);
}

int MMIYOO_CreateWindow(_THIS, SDL_Window *window)
{
    SDL_SetMouseFocus(window);
    MMiyooVideoInfo.window = window;
    printf("%s, w:%d, h:%d\n", __func__, window->w, window->h);
    //glUpdateBufferSettings(fb_flip, &fb_idx, fb_vaddr);
    return 0;
}

int MMIYOO_CreateWindowFrom(_THIS, SDL_Window *window, const void *data)
{
    return SDL_Unsupported();
}

static SDL_VideoDevice *MMIYOO_CreateDevice(int devindex)
{
    SDL_VideoDevice *device=NULL;
    SDL_GLDriverData *gldata=NULL;

    if(!MMIYOO_Available()) {
        return (0);
    }

    device = (SDL_VideoDevice *) SDL_calloc(1, sizeof(SDL_VideoDevice));
    if(!device) {
        SDL_OutOfMemory();
        return (0);
    }
    device->is_dummy = SDL_TRUE;

    device->VideoInit = MMIYOO_VideoInit;
    device->VideoQuit = MMIYOO_VideoQuit;
    device->SetDisplayMode = MMIYOO_SetDisplayMode;
    device->PumpEvents = MMIYOO_PumpEvents;
    device->CreateSDLWindow = MMIYOO_CreateWindow;
    device->CreateSDLWindowFrom = MMIYOO_CreateWindowFrom;
    device->CreateWindowFramebuffer = MMIYOO_CreateWindowFramebuffer;
    device->UpdateWindowFramebuffer = MMIYOO_UpdateWindowFramebuffer;
    device->DestroyWindowFramebuffer = MMIYOO_DestroyWindowFramebuffer;

    device->GL_LoadLibrary = glLoadLibrary;
    device->GL_GetProcAddress = glGetProcAddress;
    device->GL_CreateContext = glCreateContext;
    device->GL_SetSwapInterval = glSetSwapInterval;
    device->GL_SwapWindow = glSwapWindow;
    device->GL_MakeCurrent = glMakeCurrent;
    device->GL_DeleteContext = glDeleteContext;
    device->GL_UnloadLibrary = glUnloadLibrary;
    
    gldata = (SDL_GLDriverData*)SDL_calloc(1, sizeof(SDL_GLDriverData));
    if(gldata == NULL) {
        SDL_OutOfMemory();
        SDL_free(device);
        return NULL;
    }
    device->gl_data = gldata;

    device->free = MMIYOO_DeleteDevice;
    return device;
}

VideoBootStrap MMIYOO_bootstrap = {MMIYOO_DRIVER_NAME, "MMIYOO VIDEO DRIVER", MMIYOO_CreateDevice};

int MMIYOO_VideoInit(_THIS)
{
    int cc = 0;
    char buf[255] = {0};
    SDL_Surface *t = NULL;
    SDL_Surface *tmp = NULL;

    SDL_DisplayMode mode={0};
    SDL_VideoDisplay display={0};

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_RGB565;
    mode.w = 640;
    mode.h = 480;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

    SDL_zero(mode);
    mode.format = SDL_PIXELFORMAT_ARGB8888;
    mode.w = 640;
    mode.h = 480;
    mode.refresh_rate = 60;
    SDL_AddDisplayMode(&display, &mode);

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

    SDL_AddVideoDisplay(&display, SDL_FALSE);
    
    GFX_Init();
    MMIYOO_EventInit();

    tmp = SDL_CreateRGBSurface(0, 32, 32, 32, 0, 0, 0, 0);
    if (tmp) {
        for (cc=0; cc<=9; cc++) {
            sprintf(buf, "%s/%d.png", DIGIT_PATH, cc);
            t = IMG_Load(buf);
            if (t) {
                nds.digit[cc] = SDL_ConvertSurface(t, tmp->format, 0);
                SDL_FreeSurface(t);
                printf("%s, %s loaded\n", __func__, buf);
            }
        }
        SDL_FreeSurface(tmp);
    }

    read_config();
    return 0;
}

static int MMIYOO_SetDisplayMode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode)
{
    return 0;
}

void MMIYOO_VideoQuit(_THIS)
{
    int cc = 0;

    write_config();
    if (nds.pen.img) {
        SDL_FreeSurface(nds.pen.img);
        nds.pen.img = NULL;
    }

    for (cc=0; cc<=9; cc++) {
        if (nds.digit[cc]) {
            SDL_FreeSurface(nds.digit[cc]);
            nds.digit[cc] = NULL;
        }
    }
    
    GFX_Quit();
    MMIYOO_EventDeinit();
}

#endif

