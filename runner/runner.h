// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __RUNNER_H__
#define __RUNNER_H__

#if defined(GKD2) || defined(BRICK)
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#endif

#include "common.h"

#if defined(GKD2)
#define R_LCD_W         640
#define R_LCD_H         480
#endif

#if defined(BRICK)
#define R_LCD_W         1024
#define R_LCD_H         768
#endif

#define SHM_NAME        "NDS_SHM"

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
#define NDS_DIS_MODE_VH_S3          11
#define NDS_DIS_MODE_VH_S4          12
#define NDS_DIS_MODE_VH_S5          13
#define NDS_DIS_MODE_VH_C0          14
#define NDS_DIS_MODE_VH_C1          15
#define NDS_DIS_MODE_HH0            16
#define NDS_DIS_MODE_HH1            17
#define NDS_DIS_MODE_HH2            18
#define NDS_DIS_MODE_HH3            19
#define NDS_DIS_MODE_LAST           19

#define NDS_DIS_MODE_HRES0          20
#define NDS_DIS_MODE_HRES1          21

typedef enum {
    TEXTURE_LCD0 = 0,
    TEXTURE_LCD1,
    TEXTURE_BG,
    TEXTURE_PEN,
    TEXTURE_TMP,
    TEXTURE_MAX
} texture_type_t;

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
        GLuint vert_shader;
        GLuint frag_shader;
        GLuint program;

        GLint vert_pos;
        GLint vert_coord;
        GLint frag_sampler;
        GLint frag_rotate;
        GLint frag_aspect;
        GLint frag_alpha;
        GLuint tex_id[TEXTURE_MAX];
        void *bg_pixels;
    } gles;

    struct {
        int fd;
        shm_buf_t *buf;
    } shm;
} runner_t;

#endif

