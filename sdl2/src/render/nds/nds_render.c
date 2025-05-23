// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include <unistd.h>
#include <stdbool.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "../../SDL_internal.h"
#include "../SDL_sysrender.h"
#include "SDL_hints.h"

#include "../../video/nds/nds_video.h"
#include "../../video/nds/nds_event.h"

#include "common.h"

typedef struct {
    void *pixels;
    uint32_t w;
    uint32_t h;
    uint32_t pitch;
} nds_texture;

extern nds_hook myhook;
extern nds_video myvideo;
extern nds_config myconfig;

static void destroy_texture(SDL_Renderer *r, SDL_Texture *t);

#if defined(UT)
TEST_GROUP(sdl2_render);

TEST_SETUP(sdl2_render)
{
}

TEST_TEAR_DOWN(sdl2_render)
{
}
#endif

static void window_event(SDL_Renderer *r, const SDL_WindowEvent *e)
{
    debug("call %s(r=%p, e=%p)\n", __func__, r, e);
}

#if defined(UT)
TEST(sdl2_render, window_event)
{
    window_event(NULL, NULL);
    TEST_PASS();
}
#endif

static int create_texture(SDL_Renderer *r, SDL_Texture *t)
{
    nds_texture *p = NULL;

    debug("call %s(r=%p, t=%p)\n", __func__, r, t);

    if (!t) {
        error("invalid texture\n");
        return -1;
    }

    p = (nds_texture *)SDL_calloc(1, sizeof(nds_texture));
    if (!p) {
        error("failed to allocate nds texture\n");
        return SDL_OutOfMemory();
    }

    p->w = t->w;
    p->h = t->h;
    p->pitch = p->w * SDL_BYTESPERPIXEL(t->format);
    p->pixels = SDL_calloc(1, p->h * p->pitch);
    if (!p->pixels) {
        error("failed to allocate nds texture\n");

        SDL_free(p);
        return SDL_OutOfMemory();
    }
    t->driverdata = p;
    debug("created texture(texture=%p, w=%d, h=%d, pitch=%d)\n", p, p->w, p->h, p->pitch);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, create_texture)
{
    SDL_Texture t = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, create_texture(NULL, NULL));
    TEST_ASSERT_EQUAL_INT(0, create_texture(NULL, &t));
    destroy_texture(NULL, &t);
}
#endif

static int lock_texture(SDL_Renderer *r, SDL_Texture *t, const SDL_Rect *rt, void **pixels, int *pitch)
{
    nds_texture *td = NULL;

    debug("call %s(pixels=%p, pitch=%p)\n", __func__, pixels, pitch);

    if (!t || !pixels || !pitch) {
        error("invalid parameters\n");
        return -1;
    }

    td = (nds_texture *)t->driverdata;
    if (!td) {
        error("invalid td\n");
        return -1;
    }

    *pixels = td->pixels;
    *pitch = td->pitch;

    return 0;
}

#if defined(UT)
TEST(sdl2_render, lock_texture)
{
    int pitch = 0;
    uint32_t pixels[1] = { 0 };
    SDL_Rect rt = { 0 };
    SDL_Texture t = { 0 };
    SDL_Renderer r = { 0 };
    nds_texture td = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, lock_texture(NULL, NULL, NULL, NULL, NULL));
    TEST_ASSERT_EQUAL_INT(-1, lock_texture(NULL, &t, NULL, (void *)pixels, NULL));

    pixels[0] = 0x1234;
    t.driverdata = NULL;
    TEST_ASSERT_EQUAL_INT(-1, lock_texture(&r, &t, &rt, (void *)&pixels, &pitch));
    TEST_ASSERT_EQUAL_INT(0, pitch);
    TEST_ASSERT_EQUAL_INT(0x1234, pixels[0]);

    t.driverdata = &td;
    td.pitch = 0x1234;
    td.pixels = (void *)0x5678;
    TEST_ASSERT_EQUAL_INT(0, lock_texture(&r, &t, &rt, (void *)&pixels, &pitch));
    TEST_ASSERT_EQUAL_INT(0x1234, pitch);
    TEST_ASSERT_EQUAL_INT(0x5678, pixels[0]);
}
#endif

static int update_texture(SDL_Renderer *r, SDL_Texture *t, const SDL_Rect *rt, const void *pixels, int pitch)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, update_texture)
{
}
#endif

static void unlock_texture(SDL_Renderer *r, SDL_Texture *t)
{
    SDL_Rect rt = { 0 };
    nds_texture *td = (nds_texture*)t->driverdata;

    debug("call %s()\n", __func__);

    rt.x = 0;
    rt.y = 0;
    rt.w = t->w;
    rt.h = t->h;
    update_texture(r, t, &rt, td->pixels, td->pitch);
}

#if defined(UT)
TEST(sdl2_render, unlock_texture)
{
    SDL_Rect rt = { 0 };
    SDL_Texture t = { 0 };
    SDL_Renderer r = { 0 };

    TEST_ASSERT_EQUAL_INT(0, update_texture(NULL, NULL, NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, update_texture(&r, &t, &rt, (void *)0xdeadbeef, 0));
}
#endif

static void set_texture_scale_mode(SDL_Renderer *r, SDL_Texture *t, SDL_ScaleMode m)
{
    debug("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_render, set_texture_scale_mode)
{
    set_texture_scale_mode(NULL, NULL, 0);
    TEST_PASS();
}
#endif

static int set_render_target(SDL_Renderer *r, SDL_Texture *t)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, set_render_target)
{
    TEST_ASSERT_EQUAL_INT(0, set_render_target(NULL, NULL));
}
#endif

static int queue_set_viewport(SDL_Renderer *r, SDL_RenderCommand *cmd)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, queue_set_viewport)
{
    TEST_ASSERT_EQUAL_INT(0, queue_set_viewport(NULL, NULL));
}
#endif

static int queue_draw_points(SDL_Renderer *r, SDL_RenderCommand *cmd, const SDL_FPoint *pt, int cnt)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, queue_draw_points)
{
    TEST_ASSERT_EQUAL_INT(0, queue_draw_points(NULL, NULL, NULL, 0));
}
#endif

static int queue_fill_rects(SDL_Renderer *r, SDL_RenderCommand *cmd, const SDL_FRect *rt, int cnt)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, queue_fill_rects)
{
    TEST_ASSERT_EQUAL_INT(0, queue_fill_rects(NULL, NULL, NULL, 0));
}
#endif

static int queue_copy(SDL_Renderer *r, SDL_RenderCommand *cmd, SDL_Texture *t, const SDL_Rect *srt, const SDL_FRect *drt)
{
    debug("call %s()\n", __func__);

    myvideo.lcd.show_fps = 0;
    myvideo.menu.drastic.enable = 1;
    usleep(100000);

#if defined(TRIMUI)
    if (myconfig.dis_mode != NDS_DIS_MODE_S0) {
        need_restore = 1;
        pre_dismode = myconfig.dis_mode;
    }
    myconfig.dis_mode = NDS_DIS_MODE_S0;
    disp_resize();
#endif

#if !defined(UT)
    handle_drastic_menu();
#endif

    return 0;
}

#if defined(UT)
TEST(sdl2_render, queue_copy)
{
    myvideo.menu.drastic.enable = 0;
    TEST_ASSERT_EQUAL_INT(0, queue_copy(NULL, NULL, NULL, NULL, NULL));
    TEST_ASSERT_EQUAL_INT(1, myvideo.menu.drastic.enable);
}
#endif

static int run_command_queue(SDL_Renderer *r, SDL_RenderCommand *cmd, void *vertices, size_t vertsize)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, run_command_queue)
{
    TEST_ASSERT_EQUAL_INT(0, run_command_queue(NULL, NULL, NULL, 0));
}
#endif

static int render_read_pixels(SDL_Renderer *r, const SDL_Rect *rt, Uint32 fmt, void *pixels, int pitch)
{
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, render_read_pixels)
{
    TEST_ASSERT_EQUAL_INT(0, render_read_pixels(NULL, NULL, 0, NULL, 0));
}
#endif

static void render_present(SDL_Renderer *r)
{
    debug("call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_render, render_present)
{
    render_present(NULL);
    TEST_PASS();
}
#endif

static void destroy_texture(SDL_Renderer *r, SDL_Texture *t)
{
    debug("call %s(r=%p, t=%p)\n", __func__, r, t);

    if (t) {
        nds_texture *td = (nds_texture *)t->driverdata;

        if (td) {
            if (td->pixels) {
                SDL_free(td->pixels);
            }
            SDL_free(td);

            t->driverdata = NULL;
        }
    }
}

#if defined(UT)
TEST(sdl2_render, destroy_texture)
{
    destroy_texture(NULL, NULL);
    TEST_PASS();
}
#endif

static void destroy_renderer(SDL_Renderer *r)
{
    debug("call %s()\n", __func__);

    SDL_free(r);
}

#if defined(UT)
TEST(sdl2_render, destroy_renderer)
{
    destroy_renderer(NULL);
    TEST_PASS();
}
#endif

static int set_vsync(SDL_Renderer *renderer, const int vsync)
{
    debug("call %s(vsync=%d)\n", __func__, vsync);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, set_vsync)
{
    TEST_ASSERT_EQUAL_INT(0, set_vsync(NULL, 0));
}
#endif

static SDL_Renderer *create_renderer(SDL_Window *w, Uint32 flags)
{
    SDL_Renderer *r = NULL;

    debug("call %s()\n", __func__);

    r = (SDL_Renderer *) SDL_calloc(1, sizeof(*r));
    if (!r) {
        error("failed to allocate buffer for renderer\n");
        return NULL;
    }

    r->WindowEvent = window_event;
    r->CreateTexture = create_texture;
    r->UpdateTexture = update_texture;
    r->LockTexture = lock_texture;
    r->UnlockTexture = unlock_texture;
    r->SetTextureScaleMode = set_texture_scale_mode;
    r->SetRenderTarget = set_render_target;
    r->QueueSetViewport = queue_set_viewport;
    r->QueueSetDrawColor = queue_set_viewport;
    r->QueueDrawPoints = queue_draw_points;
    r->QueueDrawLines = queue_draw_points;
    r->QueueFillRects = queue_fill_rects;
    r->QueueCopy = queue_copy;
    r->RunCommandQueue = run_command_queue;
    r->RenderReadPixels = render_read_pixels;
    r->RenderPresent = render_present;
    r->DestroyTexture = destroy_texture;
    r->DestroyRenderer = destroy_renderer;
    r->SetVSync = set_vsync;
    r->info = NDS_RenderDriver.info;
    r->info.flags = (SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);
    r->driverdata = NULL;
    r->window = w;

    debug("created renderer=%p\n", r);
    return r;
}

#if defined(UT)
TEST(sdl2_render, create_renderer)
{
    SDL_Renderer * r = NULL;

    r = create_renderer(NULL, 0);
    TEST_ASSERT_NOT_NULL(r);
    destroy_renderer(r);
}
#endif

SDL_RenderDriver NDS_RenderDriver = {
    .CreateRenderer = create_renderer,
    .info = {
        .name = "NDS Video Render",
        .flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE,
        .num_texture_formats = 2,
        .texture_formats = {
            [0] = SDL_PIXELFORMAT_RGB565, [1] = SDL_PIXELFORMAT_ARGB8888,
        },
        .max_texture_width = 800,
        .max_texture_height = 600,
    }
};

