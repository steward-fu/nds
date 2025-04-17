// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include "../../SDL_internal.h"

#if SDL_RENDER_DRIVER_NDS

#include <unistd.h>
#include <stdbool.h>

#include "SDL_hints.h"
#include "../SDL_sysrender.h"

#include "log.h"
#include "render_nds.h"
#include "../../video/nds/video_nds.h"
#include "../../video/nds/event_nds.h"

#if defined(UT)
#include "unity_fixture.h"
#endif

#if defined(UT)
TEST_GROUP(sdl2_render);

TEST_SETUP(sdl2_render)
{
    debug(SDL"call %s()\n", __func__);
}

TEST_TEAR_DOWN(sdl2_render)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

static void event_handler(SDL_Renderer *r, const SDL_WindowEvent *e)
{
    debug(SDL"call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_render, event_handler)
{
    event_handler(NULL, NULL);
    TEST_PASS();
}
#endif

static void destroy_texture(SDL_Renderer *r, SDL_Texture *t)
{
    debug(SDL"call %s()\n", __func__);

    if (t && t->driverdata) {
        NDS_Texture *p = (NDS_Texture *)t->driverdata;

        if (p) {
            if (p->pixels) {
                SDL_free(p->pixels);
                p->pixels = NULL;
            }

            SDL_free(p);
            t->driverdata = NULL;
        }
    }
}

#if defined(UT)
TEST(sdl2_render, destroy_texture)
{
    SDL_Texture t = { 0 };
    SDL_Renderer r = { 0 };
    NDS_Texture *p = NULL;

    destroy_texture(NULL, NULL);
    destroy_texture(&r, NULL);

    p = SDL_calloc(1, sizeof(NDS_Texture));
    TEST_ASSERT_NOT_NULL(p);

    p->pixels = SDL_calloc(1, 32);
    TEST_ASSERT_NOT_NULL(p->pixels);
    t.driverdata = p;

    destroy_texture(&r, &t);
}
#endif

static int create_texture(SDL_Renderer *r, SDL_Texture *t)
{
    NDS_Texture *p = NULL;

    debug(SDL"call %s(renderer=%p, texture=%p)\n", __func__, r, t);

    if (!t) {
        error(SDL"invalid texture\n");
        return -1;
    }

    p = (NDS_Texture *)SDL_calloc(1, sizeof(NDS_Texture));
    if (!p) {
        error(SDL"failed to allocate nds texture\n");
        return SDL_OutOfMemory();
    }

    p->w = t->w;
    p->h = t->h;
    p->pitch = p->w * SDL_BYTESPERPIXEL(t->format);
    p->pixels = SDL_calloc(1, p->h * p->pitch);
    if (!p->pixels) {
        error(SDL"failed to allocate nds texture\n");

        SDL_free(p);
        return SDL_OutOfMemory();
    }
    t->driverdata = p;
    debug(SDL"created texture(texture=%p, w=%d, h=%d, pitch=%d)\n", p, p->w, p->h, p->pitch);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, create_texture)
{
    SDL_Texture t = { 0 };
    NDS_Texture *p = NULL;

    TEST_ASSERT_EQUAL_INT(-1, create_texture(NULL, NULL));

    t.w = 320;
    t.h = 240;
    t.format = SDL_PIXELFORMAT_ARGB8888;
    TEST_ASSERT_EQUAL_INT(0, create_texture(NULL, &t));

    p = (NDS_Texture *)t.driverdata;
    TEST_ASSERT_NOT_NULL(p);
    TEST_ASSERT_EQUAL_INT(320, p->w);
    TEST_ASSERT_EQUAL_INT(240, p->h);

    destroy_texture(NULL, &t);
}
#endif

static int lock_texture(SDL_Renderer *r, SDL_Texture *t, const SDL_Rect *rt, void **pixels, int *pitch)
{
    NDS_Texture *p = NULL;

    debug(SDL"call %s()\n", __func__);

    if (!t) {
        error(SDL"invalid texture\n");
        return -1;
    }

    p = (NDS_Texture *)(t->driverdata);
    if (p) {
        *pitch = p->pitch;
        *pixels = p->pixels;
    }

    return 0;
}

#if defined(UT)
TEST(sdl2_render, lock_texture)
{
    int pitch = 0;
    uint32_t **pixels = NULL;
    SDL_Rect rt = { 0 };
    SDL_Texture t = { 0 };
    SDL_Renderer r = { 0 };
    NDS_Texture p = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, lock_texture(NULL, NULL, NULL, NULL, NULL));
    TEST_ASSERT_EQUAL_INT(0, lock_texture(NULL, &t, NULL, (void *)pixels, NULL));

    pixels = SDL_calloc(1, sizeof(uint32_t *));
    TEST_ASSERT_NOT_NULL(pixels);
    pixels[0] = NULL;

    t.driverdata = NULL;
    TEST_ASSERT_EQUAL_INT(0, lock_texture(&r, &t, &rt, (void *)pixels, &pitch));
    TEST_ASSERT_EQUAL_INT(0, pitch);
    TEST_ASSERT_EQUAL_INT(0, pixels[0]);

    t.driverdata = &p;
    p.pitch = 0x1234;
    p.pixels = (void *)0x5678;
    TEST_ASSERT_EQUAL_INT(0, lock_texture(&r, &t, &rt, (void *)pixels, &pitch));
    TEST_ASSERT_EQUAL_INT(0x1234, pitch);
    TEST_ASSERT_EQUAL_INT(0x5678, pixels[0]);

    SDL_free(pixels);
}
#endif

static int update_texture(SDL_Renderer *r, SDL_Texture *t, const SDL_Rect *rt, const void *pixels, int pitch)
{
    debug(SDL"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, update_texture)
{
    SDL_Rect rt = { 0 };
    SDL_Texture t = { 0 };
    SDL_Renderer r = { 0 };

    TEST_ASSERT_EQUAL_INT(0, update_texture(NULL, NULL, NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, update_texture(&r, &t, &rt, (void *)0xdeadbeef, 0));
}
#endif

static void unlock_texture(SDL_Renderer *r, SDL_Texture *t)
{
    debug(SDL"call %s()\n", __func__);

    if (t && t->driverdata) {
        SDL_Rect rt = { 0 };
        NDS_Texture *p = (NDS_Texture *)t->driverdata;

        if (p) {
            rt.x = 0;
            rt.y = 0;
            rt.w = t->w;
            rt.h = t->h;
            update_texture(r, t, &rt, p->pixels, p->pitch);
        }
    }
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
    debug(SDL"call %s()\n", __func__);
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
    debug(SDL"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, nds_set_tender_target)
{
    SDL_Texture t = { 0 };
    SDL_Renderer r = { 0 };

    TEST_ASSERT_EQUAL_INT(0, set_render_target(NULL, NULL));
    TEST_ASSERT_EQUAL_INT(0, set_render_target(&r, &t));
}
#endif

static int queue_set_viewport(SDL_Renderer *r, SDL_RenderCommand *cmd)
{
    debug(SDL"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, queue_set_viewport)
{
    SDL_Renderer r = { 0 };
    SDL_RenderCommand c = { 0 };

    TEST_ASSERT_EQUAL_INT(0, queue_set_viewport(NULL, NULL));
    TEST_ASSERT_EQUAL_INT(0, queue_set_viewport(&r, &c));
}
#endif

static int set_draw_color(SDL_Renderer *r, SDL_RenderCommand *cmd)
{
    debug(SDL"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, set_draw_color)
{
    SDL_Renderer r = { 0 };
    SDL_RenderCommand c = { 0 };

    TEST_ASSERT_EQUAL_INT(0, set_draw_color(NULL, NULL));
    TEST_ASSERT_EQUAL_INT(0, set_draw_color(&r, &c));
}
#endif

static int queue_draw_points(SDL_Renderer *r, SDL_RenderCommand *cmd, const SDL_FPoint *pt, int cnt)
{
    debug(SDL"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, queue_draw_points)
{
    SDL_FPoint f = { 0 };
    SDL_Renderer r = { 0 };
    SDL_RenderCommand c = { 0 };

    TEST_ASSERT_EQUAL_INT(0, queue_draw_points(NULL, NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, queue_draw_points(&r, &c, &f, 0));
}
#endif

static int queue_fill_rects(SDL_Renderer *r, SDL_RenderCommand *cmd, const SDL_FRect *rt, int cnt)
{
    debug(SDL"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, queue_fill_rects)
{
    SDL_FRect rt = { 0 };
    SDL_Renderer r = { 0 };
    SDL_RenderCommand cmd = { 0 };

    TEST_ASSERT_EQUAL_INT(0, queue_fill_rects(&r, &cmd, &rt, 0));
}
#endif

static int queue_copy(SDL_Renderer *r, SDL_RenderCommand *cmd, SDL_Texture *t, const SDL_Rect *srt, const SDL_FRect *drt)
{
    debug(SDL"call %s()\n", __func__);
    debug(SDL"src(%d, %d, %d, %d)\n", srt->x, srt->y, srt->w, srt->h);
    debug(SDL"dst(%f, %f, %f, %f)\n", drt->x, drt->y, drt->w, drt->h);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, queue_copy)
{
    SDL_Rect r1 = { 0 };
    SDL_FRect r2 = {0};

    TEST_ASSERT_EQUAL_INT(0, queue_copy(NULL, NULL, NULL, &r1, &r2));
}
#endif

static int run_cmd_queue(SDL_Renderer *r, SDL_RenderCommand *cmd, void *v, size_t size)
{
    debug(SDL"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, run_cmd_queue)
{
    SDL_Renderer r = { 0 };
    SDL_RenderCommand cmd = { 0 };

    TEST_ASSERT_EQUAL_INT(0, run_cmd_queue(NULL, NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, run_cmd_queue(&r, &cmd, (void *)0xdeadbeef, 0));
}
#endif

static int render_read_pixels(SDL_Renderer *r, const SDL_Rect *rt, uint32_t fmt, void *pixels, int pitch)
{
    debug(SDL"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, render_read_pixels)
{
    SDL_Rect rt = { 0 };
    SDL_Renderer r = { 0 };

    TEST_ASSERT_EQUAL_INT(0, render_read_pixels(&r, &rt, 0, (void *)0xdeadbeef, 0));
}
#endif

static void render_present(SDL_Renderer *r)
{
    debug(SDL"call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_render, render_present)
{
    render_present(NULL);
    TEST_PASS();
}
#endif

static int set_vsync(SDL_Renderer *r, const int vsync)
{
    debug(SDL"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(sdl2_render, set_vsync)
{
    SDL_Renderer t = { 0 };

    TEST_ASSERT_EQUAL_INT(0, set_vsync(NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, set_vsync(&t, 0));
}
#endif

static void destroy_renderer(SDL_Renderer *r)
{
    debug(SDL"call %s()\n", __func__);

    if (r) {
        SDL_free(r);
    }
}

#if defined(UT)
TEST(sdl2_render, destroy_renderer)
{
    SDL_Renderer *r = SDL_calloc(1, sizeof(SDL_Renderer));

    destroy_renderer(r);
    TEST_PASS();
}
#endif

static SDL_Renderer* create_renderer(SDL_Window *w, uint32_t flags)
{
    SDL_Renderer *r = NULL;

    debug(SDL"call %s()\n", __func__);

    if (!w) {
        error(SDL"invalid window\n");
        return NULL;
    }

    r = (SDL_Renderer *)SDL_calloc(1, sizeof(SDL_Renderer));
    if (!r) {
        error(SDL"failed to allocate memory for renderer\n");
        SDL_OutOfMemory();
        return NULL;
    }

    memset(r, 0, sizeof(SDL_Renderer));
    r->WindowEvent = event_handler;
    r->CreateTexture = create_texture;
    r->UpdateTexture = update_texture;
    r->LockTexture = lock_texture;
    r->UnlockTexture = unlock_texture;
    r->SetTextureScaleMode = set_texture_scale_mode;
    r->SetRenderTarget = set_render_target;
    r->QueueSetViewport = queue_set_viewport;
    r->QueueSetDrawColor = set_draw_color;
    r->QueueDrawPoints = queue_draw_points;
    r->QueueDrawLines = queue_draw_points;
    r->QueueFillRects = queue_fill_rects;
    r->QueueCopy = queue_copy;
    r->RunCommandQueue = run_cmd_queue;
    r->RenderReadPixels = render_read_pixels;
    r->RenderPresent = render_present;
    r->DestroyTexture = destroy_texture;
    r->DestroyRenderer = destroy_renderer;
    r->SetVSync = set_vsync;
    r->info = NDS_RenderDriver.info;
    r->info.flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE;
    r->window = w;

    debug(SDL"created renderer=%p\n", r);
    return r;
}

#if defined(UT)
TEST(sdl2_render, create_renderer)
{
    SDL_Window w = {0};
    SDL_Renderer *r = NULL;

    TEST_ASSERT_NULL(create_renderer(NULL, 0));

    r = create_renderer(&w, SDL_RENDERER_PRESENTVSYNC);
    TEST_ASSERT_NOT_NULL(r);
    TEST_ASSERT_EQUAL(&w, r->window);
    TEST_ASSERT_NOT_NULL(r->CreateTexture);
    TEST_ASSERT_NULL(r->driverdata);
    destroy_renderer(r);
}
#endif

SDL_RenderDriver NDS_RenderDriver = {
    .CreateRenderer = create_renderer,
    .info = {
        .name = "NDS Render Driver",
        .flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE,
        .num_texture_formats = 2,
        .texture_formats = {
            [0] = SDL_PIXELFORMAT_RGB565,
            [1] = SDL_PIXELFORMAT_ARGB8888,
        },
        .max_texture_width = 800,
        .max_texture_height = 480,
    }
};

#if defined(UT)
TEST_GROUP_RUNNER(sdl2_render)
{
    RUN_TEST_CASE(sdl2_render, event_handler)
    RUN_TEST_CASE(sdl2_render, destroy_texture)
    RUN_TEST_CASE(sdl2_render, create_texture)
    RUN_TEST_CASE(sdl2_render, lock_texture)
    RUN_TEST_CASE(sdl2_render, update_texture)
    RUN_TEST_CASE(sdl2_render, unlock_texture)
    RUN_TEST_CASE(sdl2_render, set_texture_scale_mode)
    RUN_TEST_CASE(sdl2_render, nds_set_tender_target)
    RUN_TEST_CASE(sdl2_render, queue_set_viewport)
    RUN_TEST_CASE(sdl2_render, set_draw_color)
    RUN_TEST_CASE(sdl2_render, queue_draw_points)
    RUN_TEST_CASE(sdl2_render, queue_fill_rects)
    RUN_TEST_CASE(sdl2_render, queue_copy)
    RUN_TEST_CASE(sdl2_render, run_cmd_queue)
    RUN_TEST_CASE(sdl2_render, render_read_pixels)
    RUN_TEST_CASE(sdl2_render, render_present)
    RUN_TEST_CASE(sdl2_render, set_vsync)
    RUN_TEST_CASE(sdl2_render, destroy_renderer)
    RUN_TEST_CASE(sdl2_render, create_renderer)
}
#endif

#endif

