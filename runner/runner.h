// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __RUNNER_H__
#define __RUNNER_H__

#if defined(GKD2) || defined(BRICK)
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#endif

#include "common.h"

#if defined(UT)
#define R_LCD_W 640
#define R_LCD_H 480
#endif

#if defined(GKD2)
#define R_LCD_W 640
#define R_LCD_H 480
#endif

#if defined(BRICK)
#define R_LCD_W 1024
#define R_LCD_H 768
#endif

#define SHM_NAME "NDS_SHM"

typedef enum {
    SHM_CMD_FLUSH = 0,
    SHM_CMD_FLIP,
    SHM_CMD_QUIT
} shm_cmd_t;

typedef struct {
    uint8_t valid;
    uint8_t cmd;
    uint8_t tex;
    uint8_t layout;
    uint8_t filter;
    uint32_t pitch;
    uint32_t alpha;

    uint32_t len;
    SDL_Rect srt;
    SDL_Rect drt;
    uint8_t buf[R_LCD_W * R_LCD_H * 4];
} shm_buf_t;
 
typedef struct {
    struct {
        SDL_Window *win;
    } sdl2;

    struct {
        SDL_GLContext ctx;
        GLuint object;
        GLuint texture[TEXTURE_MAX];

        struct {
            GLuint shader;
            GLint tex_pos;
            GLint tex_coord;
        } vert;

        struct {
            GLuint shader;
            GLint alpha;
            GLint rotate;
            GLint aspect;
            GLint tex_main;
            GLint tex_overlay;
            GLint enable_overlay;
        } frag;

        struct {
            int w;
            int h;
            void *pixels;
        } bg;
    } gles;

    struct {
        int fd;
        shm_buf_t *buf;
    } shm;
} runner_t;

#endif

