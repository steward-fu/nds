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

#if SDL_VIDEO_RENDER_MMIYOO

#include <unistd.h>
#include <stdbool.h>

#include "SDL_hints.h"
#include "../SDL_sysrender.h"
#include "../../video/mmiyoo/SDL_video_mmiyoo.h"
#include "../../video/mmiyoo/SDL_event_mmiyoo.h"

typedef struct MMIYOO_TextureData {
    void *data;
    unsigned int size;
    unsigned int width;
    unsigned int height;
    unsigned int bits;
    unsigned int format;
    unsigned int pitch;
} MMIYOO_TextureData;

typedef struct {
    SDL_Texture *boundTarget;
    SDL_bool initialized;
    unsigned int bpp;
    SDL_bool vsync;
} MMIYOO_RenderData;

#define MAX_TEXTURE 10

struct _NDS_TEXTURE {
    int pitch;
    const void *pixels;
    SDL_Texture *texture;
};

extern GFX gfx;
extern NDS nds;
extern MMIYOO_EventInfo evt;
extern SDL_Surface *fps_info;
extern int FB_W;
extern int FB_H;
extern int FB_SIZE;
extern int TMP_SIZE;
extern int show_fps;
extern int down_scale;

int need_reload_bg = 0;
int threading_mode = 0;
static struct _NDS_TEXTURE ntex[MAX_TEXTURE] = {0};

int update_texture(void *chk, void *new, const void *pixels, int pitch)
{
    int cc = 0;

    for (cc=0; cc<MAX_TEXTURE; cc++) {
        if (ntex[cc].texture == chk) {
            ntex[cc].texture = new;
            ntex[cc].pixels = pixels;
            ntex[cc].pitch = pitch;
            return cc;
        }
    }
    return -1;
}

const void* get_pixels(void *chk)
{
    int cc = 0;

    for (cc=0; cc<MAX_TEXTURE; cc++) {
        if (ntex[cc].texture == chk) {
            return ntex[cc].pixels;
        }
    }
    return NULL;
}

static int get_pitch(void *chk)
{
    int cc = 0;

    for (cc=0; cc<MAX_TEXTURE; cc++) {
        if (ntex[cc].texture == chk) {
            return ntex[cc].pitch;
        }
    }
    return -1;
}

static void MMIYOO_WindowEvent(SDL_Renderer *renderer, const SDL_WindowEvent *event)
{
}

static int MMIYOO_CreateTexture(SDL_Renderer *renderer, SDL_Texture *texture)
{
    MMIYOO_TextureData *mmiyoo_texture = (MMIYOO_TextureData *)SDL_calloc(1, sizeof(*mmiyoo_texture));

    if(!mmiyoo_texture) {
        printf(PREFIX"Failed to create texture\n");
        return SDL_OutOfMemory();
    }

    mmiyoo_texture->width = texture->w;
    mmiyoo_texture->height = texture->h;
    mmiyoo_texture->format = texture->format;

    switch(mmiyoo_texture->format) {
    case SDL_PIXELFORMAT_RGB565:
        mmiyoo_texture->bits = 16;
        break;
    case SDL_PIXELFORMAT_ARGB8888:
        mmiyoo_texture->bits = 32;
        break;
    default:
        return -1;
    }

    mmiyoo_texture->pitch = mmiyoo_texture->width * SDL_BYTESPERPIXEL(texture->format);
    mmiyoo_texture->size = mmiyoo_texture->height * mmiyoo_texture->pitch;
    mmiyoo_texture->data = SDL_calloc(1, mmiyoo_texture->size);

    if(!mmiyoo_texture->data) {
        printf(PREFIX"Failed to create texture data\n");
        SDL_free(mmiyoo_texture);
        return SDL_OutOfMemory();
    }

    mmiyoo_texture->data = SDL_calloc(1, mmiyoo_texture->size);
    texture->driverdata = mmiyoo_texture;
    update_texture(NULL, texture, NULL, 0);
    GFX_Clear();
    return 0;
}

static int MMIYOO_LockTexture(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *rect, void **pixels, int *pitch)
{
    MMIYOO_TextureData *mmiyoo_texture = (MMIYOO_TextureData*)texture->driverdata;

    *pixels = mmiyoo_texture->data;
    *pitch = mmiyoo_texture->pitch;
    return 0;
}

static int MMIYOO_UpdateTexture(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *rect, const void *pixels, int pitch)
{
    update_texture(texture, texture, pixels, pitch);
    return 0;
}

static void MMIYOO_UnlockTexture(SDL_Renderer *renderer, SDL_Texture *texture)
{
    static int prev_mode = 0;
    static int need_restore = 0;

    SDL_Rect rect = {0};
    MMIYOO_TextureData *mmiyoo_texture = (MMIYOO_TextureData*)texture->driverdata;

    if ((texture->w == 512) && (texture->h == 384)) {
        nds.hres_mode = 1;
        if ((nds.dis_mode != NDS_DIS_MODE_HRES0) && (nds.dis_mode != NDS_DIS_MODE_HRES1)) {
            prev_mode = nds.dis_mode;
            need_restore = 1;
            nds.dis_mode = NDS_DIS_MODE_HRES0;
        }
    }
    else if ((texture->w == 256) && (texture->h == 192)) {
        nds.hres_mode = 0;
        if (need_restore) {
            need_restore = 0;
            nds.dis_mode = prev_mode;
        }
    }

    rect.x = 0;
    rect.y = 0;
    rect.w = texture->w;
    rect.h = texture->h;
    MMIYOO_UpdateTexture(renderer, texture, &rect, mmiyoo_texture->data, mmiyoo_texture->pitch);
}

static void MMIYOO_SetTextureScaleMode(SDL_Renderer *renderer, SDL_Texture *texture, SDL_ScaleMode scaleMode)
{
}

static int MMIYOO_SetRenderTarget(SDL_Renderer *renderer, SDL_Texture *texture)
{
    return 0;
}

static int MMIYOO_QueueSetViewport(SDL_Renderer *renderer, SDL_RenderCommand *cmd)
{
    return 0;
}

static int MMIYOO_QueueDrawPoints(SDL_Renderer *renderer, SDL_RenderCommand *cmd, const SDL_FPoint *points, int count)
{
    return 0;
}

static int MMIYOO_QueueGeometry(SDL_Renderer *renderer, SDL_RenderCommand *cmd, SDL_Texture *texture,
                                const float *xy, int xy_stride, const SDL_Color *color, int color_stride, const float *uv, int uv_stride,
                                int num_vertices, const void *indices, int num_indices, int size_indices,
                                float scale_x, float scale_y)
{
    return 0;
}

static int MMIYOO_QueueFillRects(SDL_Renderer *renderer, SDL_RenderCommand *cmd, const SDL_FRect *rects, int count)
{
    return 0;
}

static int MMIYOO_QueueCopy(SDL_Renderer *renderer, SDL_RenderCommand *cmd, SDL_Texture *texture, const SDL_Rect *srcrect, const SDL_FRect *dstrect)
{
    if (srcrect->w == 800) {
        threading_mode = 0;
        if (srcrect->w == 800) {
            usleep(100000);
        }
       return My_QueueCopy(texture, get_pixels(texture), srcrect, dstrect);
    }
    return 0;
}

int My_QueueCopy(SDL_Texture *texture, const void *pixels, const SDL_Rect *srcrect, const SDL_FRect *dstrect)
{
    static char show_info_buf[MAX_PATH << 1] = {0};
    static int show_info_cnt = 0;
    static int cur_w = 0;
    static int cur_fb_w = 0;
    static int cur_volume = 0;
    static int cur_dis_mode = 0;
    static int cur_touchpad = 0;
    static int cur_theme_sel = 0;
    static int cur_down_scale = 0;

#ifdef TRIMUI
    static int need_restore = 0;
    static int pre_dismode = 0;
    static int pre_downscale = 0;
#endif

    char buf[MAX_PATH] = {0};
    int alpha = 0;
    int pitch = 0;
    int need_pen = 0;
    int need_fps = 0;
    int rotate = E_MI_GFX_ROTATE_180;
    int need_update = 1;
    SDL_Rect dst = {dstrect->x, dstrect->y, dstrect->w, dstrect->h};
    SDL_Rect src = {srcrect->x, srcrect->y, srcrect->w, srcrect->h};

    if ((src.w == 32) && (src.h == 32)) {
        return 0;
    }

    if (nds.menu.enable) {
        need_reload_bg = RELOAD_BG_COUNT;
        return 0;
    }

    pitch = get_pitch(texture);
    if ((pitch == 0) || (pixels == NULL)) {
        return 0;
    }

    if ((cur_w != src.w) ||
        (cur_fb_w != FB_W) ||
        (nds.shot.take) ||
        (cur_touchpad != nds.pen.pos) ||
        (cur_dis_mode != nds.dis_mode) ||
        (cur_theme_sel != nds.theme.sel) ||
        (cur_down_scale != down_scale) ||
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
        else if (cur_down_scale != down_scale) {
            show_info_cnt = 50;
            sprintf(show_info_buf, " %s ", to_lang(down_scale ? "Pixel" : "Blur"));
        }
        else if (nds.shot.take) {
            show_info_cnt = 50;
            nds.shot.take = 0;
            sprintf(show_info_buf, " %s ", to_lang("Take Screenshot"));
        }

        cur_w = src.w;
        cur_fb_w = FB_W;
        cur_theme_sel = nds.theme.sel;
        cur_volume = nds.volume;
        cur_dis_mode = nds.dis_mode;
        cur_touchpad = nds.pen.pos;
        cur_down_scale = down_scale;
        need_reload_bg = RELOAD_BG_COUNT;
    }

    if (show_info_cnt == 0) {
#if defined(MMIYOO) || defined(PANDORA)
        need_reload_bg = RELOAD_BG_COUNT;
#endif
        show_info_cnt = -1;
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

    if ((src.w == 800) && (src.h == 480)) {
#ifdef TRIMUI
        if (nds.dis_mode != NDS_DIS_MODE_S0) {
            need_restore = 1;
            pre_dismode = nds.dis_mode;
            pre_downscale = down_scale;

            down_scale = 1;
            nds.dis_mode = NDS_DIS_MODE_S0;
            disp_resize();
        }
        else {
            if (down_scale == 0) {
                need_restore = 1;
                pre_dismode = nds.dis_mode;
                pre_downscale = down_scale;

                down_scale = 1;
                disp_resize();
            }
        }
#endif

        dst.x = 0;
        dst.y = 0;
        dst.w = 640;
        dst.h = 480;
        if (nds.cust_menu) {
            need_update = 0;
            process_drastic_menu();
        }
    }
    else if ((src.w == 512) && (src.h == 384)) {
        need_fps = 1;
        if (nds.dis_mode == NDS_DIS_MODE_HRES0) {
            dst.w = 512;
            dst.h = 384;
            dst.x = (FB_W - dst.w) / 2;
            dst.y = (FB_H - dst.h) / 2;
            need_pen = 1;
        }
        else {
            dst.x = 0;
            dst.y = 0;
            dst.w = FB_W;
            dst.h = FB_H;
            need_pen = 1;
            need_reload_bg = 0;
        }
    }
    else if ((dstrect->w == 320.0) && (dstrect->h == 240.0)) {
        // single screen
        need_pen = 1;
        need_fps = 1;
        if (nds.dis_mode != NDS_DIS_MODE_S1) {
            dst.x = 0;
            dst.y = 0;
            dst.w = FB_W;
            dst.h = FB_H;
        }
        else {
            dst.w = 256 * 2;
            dst.h = 192 * 2;
            dst.x = (FB_W - dst.w) / 2;
            dst.y = (FB_H - dst.h) / 2;
        }
    }
#if defined(PANDORA)
    else if ((dstrect->w == 160.0) && (dstrect->h == 120.0)){
        dst.x = 0;
        dst.y = dstrect->x + dstrect->y;
    }
#endif
#if defined(MMIYOO)
    else if ((dstrect->w == 160.0) && (dstrect->h == 120.0)){
        int screen0 = (dstrect->x + dstrect->y) ? 0 : 1;
        int screen1 = (dstrect->x + dstrect->y) ? 1 : 0;
        
        if (nds.pen.pos == 0) {
            need_pen = screen0 ? 1 : 0;
        }
        else {
            need_pen = screen1 ? 1 : 0;
        }
        need_fps = screen0 ? 0 : 1;
        
        // vertial
        // x:0.0, y:0.0,   w:160.0, h:120.0
        // x:0.0, y:120.0, w:160.0, h:120.0

        // horizontal
        // x:0.0,   y:0.0, w:160.0, h:120.0
        // x:160.0, y:0.0, w:160.0, h:120.0
        switch (nds.dis_mode) {
        case NDS_DIS_MODE_VH_T0:
            if (screen1) {
                dst.x = 0;
                dst.y = 0;
                dst.w = FB_W;
                dst.h = FB_H;
                need_pen = 1;
                need_fps = 1;
            }
            else {
                alpha = 1;
                need_pen = 0;
                need_fps = 0;
                need_update = 0;
                neon_memcpy(gfx.small_screen, pixels, pitch * src.h);
            }
            break;
        case NDS_DIS_MODE_VH_T1:
            if (screen1) {
                dst.x = 0;
                dst.y = 0;
                dst.w = FB_W;
                dst.h = FB_H;
                need_pen = 1;
                need_fps = 1;
            }
            else {
                alpha = 1;
                need_pen = 0;
                need_fps = 0;
                need_update = 0;
                neon_memcpy(gfx.small_screen, pixels, pitch * src.h);
            }
            break;
        case NDS_DIS_MODE_S0:
            if (screen1) {
                dst.w = 256 * 2;
                dst.h = 192 * 2;
                dst.x = (FB_W - dst.w) / 2;
                dst.y = (FB_H - dst.h) / 2;
                need_pen = 1;
                need_fps = 1;
            }
            else {
                need_pen = 0;
                need_fps = 0;
                need_update = 0;
            }
            break;
        case NDS_DIS_MODE_S1:
            if (screen1) {
                dst.x = 0;
                dst.y = 0;
                dst.w = FB_W;
                dst.h = FB_H;
                need_pen = 1;
                need_fps = 1;
            }
            else {
                need_pen = 0;
                need_fps = 0;
                need_update = 0;
            }
            break;
        case NDS_DIS_MODE_V0:
            dst.w = 256;
            dst.h = 192;
            dst.x = (FB_W - dst.w) / 2;
            if (nds.enable_752x560 == 0) {
                dst.y = screen0 ? 48 : 48 + dst.h;
            }
            else {
                dst.y = screen0 ? 88 : 88 + dst.h;
            }
            break;
        case NDS_DIS_MODE_V1:
            if (nds.enable_752x560 == 0) {
                dst.w = 320;
                dst.h = 240;
            }
            else {
                dst.w = 373;
                dst.h = 280;
            }
            dst.x = (FB_W - dst.w) / 2;
            dst.y = screen0 ? 0 : dst.h;
            break;
        case NDS_DIS_MODE_H0:
            dst.w = 256;
            dst.h = 192;
            if (nds.enable_752x560 == 0) {
                dst.x = screen0 ? 64 : 64 + dst.w;
            }
            else {
                dst.x = screen0 ? 120 : 120 + dst.w;
            }
            dst.y = (FB_H - dst.h) / 2;
            break;
        case NDS_DIS_MODE_H1:
            if (nds.enable_752x560 == 0) {
                dst.w = 320;
                dst.h = 240;
                dst.x = screen0 ? 0 : dst.w;
            }
            else {
                dst.w = 373;
                dst.h = 280;
                dst.x = screen0 ? 3 : (dst.w + 3);
            }
            dst.y = (FB_H - dst.h) / 2;
            break;
        case NDS_DIS_MODE_VH_S0:
            dst.x = screen1 ? 160 : 0;
            dst.y = screen1 ? 120 : 0;
            dst.w = screen1 ? (FB_W - 160) : 160;
            dst.h = screen1 ? (FB_H - 120) : 120;
            break;
        case NDS_DIS_MODE_VH_S1:
            dst.x = screen1 ? 256 : 0;
            dst.y = screen1 ? 192 : 0;
            dst.w = screen1 ? (FB_W - 256) : 256;
            dst.h = screen1 ? (FB_H - 192) : 192;
            break;
        case NDS_DIS_MODE_VH_C0:
            dst.w = screen0 ? 256 : (FB_W - 256);
            dst.h = screen0 ? 192 : (FB_H - 192);
            dst.x = screen0 ? ((FB_W - dst.w) / 2) : ((FB_W - dst.w) / 2);
            dst.y = screen0 ? 0 : 192;
            break;
        case NDS_DIS_MODE_VH_C1:
            dst.w = screen0 ? 256 : (FB_W - 256);
            dst.h = screen0 ? 192 : (FB_H - 192);
            dst.x = screen0 ? 0 : 256;
            dst.y = screen0 ? ((FB_H - dst.h) / 2) : ((FB_H - dst.h) / 2);
            break;
        case NDS_DIS_MODE_HH0:
        case NDS_DIS_MODE_HH1:
            if (nds.enable_752x560 == 0) {
                dst.x = screen0 ? 0 : 320;
                dst.y = 26;
                dst.w = 427;
                dst.h = 320;
            }
            else {
                dst.x = screen0 ? 0 : 376;
                dst.y = 29;
                dst.w = 501;
                dst.h = 376;
            }
            rotate = (nds.dis_mode == NDS_DIS_MODE_HH0) ? E_MI_GFX_ROTATE_90 : E_MI_GFX_ROTATE_270;
            break;
        }
    }
#endif
    else {
        printf(PREFIX"Unsupported Res (src:%dx%d -> dst:%dx%d)\n", src.w, src.h, dst.w, dst.h);
        return 0;
    }

    evt.mouse.minx = dstrect->x;
    evt.mouse.miny = dstrect->y;
    evt.mouse.maxx = evt.mouse.minx + dstrect->w;
    evt.mouse.maxy = evt.mouse.miny + dstrect->h;
    if ((evt.mode == MMIYOO_MOUSE_MODE) && need_pen) {
        draw_pen(pixels, src.w, pitch);
    }

    if (need_update > 0) {
        if (need_reload_bg > 0) {
            need_reload_bg-= 1;
            reload_bg();
        }

        GFX_Copy(pixels, src, dst, pitch, alpha, rotate);

#ifdef MMIYOO
        switch (nds.dis_mode) {
        case NDS_DIS_MODE_VH_T0:
            dst.x = 0;
            dst.y = 0;
            dst.w = 160;
            dst.h = 120;
            GFX_Copy(gfx.small_screen, src, dst, pitch, 1, rotate);
            break;
        case NDS_DIS_MODE_VH_T1:
            dst.x = 0;
            dst.y = 0;
            dst.w = 256;
            dst.h = 192;
            GFX_Copy(gfx.small_screen, src, dst, pitch, 1, rotate);
            break;
        }
#endif

        if (need_fps && show_fps && fps_info) {
            dst.w = fps_info->w;
            dst.h = fps_info->h;
            GFX_Copy(fps_info->pixels, fps_info->clip_rect, dst, fps_info->pitch, 0, E_MI_GFX_ROTATE_180);
            show_fps-= 1;
        }            
          
        if (show_info_cnt > 0) {
            draw_info(NULL, show_info_buf, FB_W - get_font_width(show_info_buf), 0, 0xe0e000, 0x000000);
            show_info_cnt-= 1;
        }
    }

    if ((src.w == 800) && (src.h == 480)) {
        nds.menu.drastic.enable = 1;
    }
    else {
        nds.menu.drastic.enable = 0;
#ifdef TRIMUI
        if (need_restore) {
            need_restore = 0;
            down_scale = pre_downscale;
            nds.dis_mode = pre_dismode;
            disp_resize();
        }
#endif
    }
    return 0;
}

static int MMIYOO_QueueCopyEx(SDL_Renderer *renderer, SDL_RenderCommand *cmd, SDL_Texture *texture,
    const SDL_Rect *srcrect, const SDL_FRect *dstrect, const double angle, const SDL_FPoint *center, const SDL_RendererFlip flip)
{
    return 0;
}

static int MMIYOO_RunCommandQueue(SDL_Renderer *renderer, SDL_RenderCommand *cmd, void *vertices, size_t vertsize)
{
    return 0;
}

static int MMIYOO_RenderReadPixels(SDL_Renderer *renderer, const SDL_Rect *rect, Uint32 pixel_format, void *pixels, int pitch)
{
    return SDL_Unsupported();
}

static void MMIYOO_RenderPresent(SDL_Renderer *renderer)
{
}

static void MMIYOO_DestroyTexture(SDL_Renderer *renderer, SDL_Texture *texture)
{
    MMIYOO_TextureData *mmiyoo_texture = (MMIYOO_TextureData*)texture->driverdata;

    if (mmiyoo_texture) {
        update_texture(texture, NULL, NULL, 0);
        if (mmiyoo_texture->data) {
            SDL_free(mmiyoo_texture->data);
        }
        SDL_free(mmiyoo_texture);
        texture->driverdata = NULL;
    }
}

static void MMIYOO_DestroyRenderer(SDL_Renderer *renderer)
{
    MMIYOO_RenderData *data = (MMIYOO_RenderData *)renderer->driverdata;

    if(data) {
        if(!data->initialized) {
            return;
        }

        data->initialized = SDL_FALSE;
        SDL_free(data);
    }
    SDL_free(renderer);
}

static int MMIYOO_SetVSync(SDL_Renderer *renderer, const int vsync)
{
    return 0;
}

SDL_Renderer *MMIYOO_CreateRenderer(SDL_Window *window, Uint32 flags)
{
    int pixelformat = 0;
    SDL_Renderer *renderer = NULL;
    MMIYOO_RenderData *data = NULL;

    renderer = (SDL_Renderer *) SDL_calloc(1, sizeof(*renderer));
    if(!renderer) {
        printf(PREFIX"Failed to create render\n");
        SDL_OutOfMemory();
        return NULL;
    }

    data = (MMIYOO_RenderData *) SDL_calloc(1, sizeof(*data));
    if(!data) {
        printf(PREFIX"Failed to create render data\n");
        MMIYOO_DestroyRenderer(renderer);
        SDL_OutOfMemory();
        return NULL;
    }

    renderer->WindowEvent = MMIYOO_WindowEvent;
    renderer->CreateTexture = MMIYOO_CreateTexture;
    renderer->UpdateTexture = MMIYOO_UpdateTexture;
    renderer->LockTexture = MMIYOO_LockTexture;
    renderer->UnlockTexture = MMIYOO_UnlockTexture;
    renderer->SetTextureScaleMode = MMIYOO_SetTextureScaleMode;
    renderer->SetRenderTarget = MMIYOO_SetRenderTarget;
    renderer->QueueSetViewport = MMIYOO_QueueSetViewport;
    renderer->QueueSetDrawColor = MMIYOO_QueueSetViewport;
    renderer->QueueDrawPoints = MMIYOO_QueueDrawPoints;
    renderer->QueueDrawLines = MMIYOO_QueueDrawPoints;
    renderer->QueueGeometry = MMIYOO_QueueGeometry;
    renderer->QueueFillRects = MMIYOO_QueueFillRects;
    renderer->QueueCopy = MMIYOO_QueueCopy;
    renderer->QueueCopyEx = MMIYOO_QueueCopyEx;
    renderer->RunCommandQueue = MMIYOO_RunCommandQueue;
    renderer->RenderReadPixels = MMIYOO_RenderReadPixels;
    renderer->RenderPresent = MMIYOO_RenderPresent;
    renderer->DestroyTexture = MMIYOO_DestroyTexture;
    renderer->DestroyRenderer = MMIYOO_DestroyRenderer;
    renderer->SetVSync = MMIYOO_SetVSync;
    renderer->info = MMIYOO_RenderDriver.info;
    renderer->info.flags = (SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);
    renderer->driverdata = data;
    renderer->window = window;

    if(data->initialized != SDL_FALSE) {
        return 0;
    }
    data->initialized = SDL_TRUE;

    if(flags & SDL_RENDERER_PRESENTVSYNC) {
        data->vsync = SDL_TRUE;
    }
    else {
        data->vsync = SDL_FALSE;
    }

    pixelformat = SDL_GetWindowPixelFormat(window);
    switch(pixelformat) {
    case SDL_PIXELFORMAT_RGB565:
        data->bpp = 2;
        break;
    case SDL_PIXELFORMAT_ARGB8888:
        data->bpp = 4;
        break;
    }
    return renderer;
}

SDL_RenderDriver MMIYOO_RenderDriver = {
    .CreateRenderer = MMIYOO_CreateRenderer,
    .info = {
        .name = "MMIYOO",
        .flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE,
        .num_texture_formats = 2,
        .texture_formats = {
            [0] = SDL_PIXELFORMAT_RGB565, [2] = SDL_PIXELFORMAT_ARGB8888,
        },
        .max_texture_width = 800,
        .max_texture_height = 600,
    }
};

#endif

#ifdef UNITTEST
    #include "unity_fixture.h"

TEST_GROUP(sdl2_render_mmiyoo);

TEST_SETUP(sdl2_render_mmiyoo)
{
}

TEST_TEAR_DOWN(sdl2_render_mmiyoo)
{
}

TEST(sdl2_render_mmiyoo, MMIYOO_SetVSync)
{
    TEST_ASSERT_EQUAL(MMIYOO_SetVSync(NULL, 0), 0);
}

TEST_GROUP_RUNNER(sdl2_render_mmiyoo)
{
    RUN_TEST_CASE(sdl2_render_mmiyoo, MMIYOO_SetVSync);
}
#endif

