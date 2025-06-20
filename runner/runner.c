// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <sys/mman.h>

#define SDL_DISABLE_ARM_NEON_H
#include <SDL.h>
#include <SDL_image.h>
#include <GLES2/gl2.h>
#include <SDL2/SDL.h>

#include "common.h"
#include "runner.h"

const char *vert_shader_code =
    "attribute vec4 vert_tex_pos;                                       \n"
    "attribute vec2 vert_tex_coord;                                     \n"
    "varying vec2 frag_tex_coord;                                       \n"
    "void main()                                                        \n"
    "{                                                                  \n"
    "    gl_Position = vert_tex_pos;                                    \n"
    "    frag_tex_coord = vert_tex_coord;                               \n"
    "}                                                                  \n";

const char *frag_shader_code =
    "precision mediump float;                                           \n"
    "varying vec2 frag_tex_coord;                                       \n"
    "uniform float frag_rotate;                                         \n"
    "uniform float frag_aspect;                                         \n"
    "uniform float frag_alpha;                                          \n"
    "uniform int frag_enable_overlay;                                   \n"
    "uniform sampler2D frag_tex_main;                                   \n"
    "uniform sampler2D frag_tex_overlay;                                \n"
    "const vec2 HALF = vec2(0.5);                                       \n"
    "void main()                                                        \n"
    "{                                                                  \n"
    "    float aSin = sin(frag_rotate);                                 \n"
    "    float aCos = cos(frag_rotate);                                 \n"
    "    vec2 tc = frag_tex_coord;                                      \n"
    "    mat2 rotMat = mat2(aCos, -aSin, aSin, aCos);                   \n"
    "    mat2 scaleMat = mat2(frag_aspect, 0.0, 0.0, 1.0);              \n"
    "    mat2 scaleMatInv = mat2(1.0 / frag_aspect, 0.0, 0.0, 1.0);     \n"
    "    tc -= HALF.xy;                                                 \n"
    "    tc = scaleMatInv * rotMat * scaleMat * tc;                     \n"
    "    tc += HALF.xy;                                                 \n"
    "    vec3 tex;                                                      \n"
    "    if (frag_enable_overlay > 0) {                                 \n"
    "        tex = mix(                                                 \n"
    "            texture2D(frag_tex_main, frag_tex_coord),              \n"
    "            texture2D(frag_tex_overlay, frag_tex_coord),           \n"
    "            texture2D(frag_tex_overlay, frag_tex_coord).a          \n"
    "        ).bgr;                                                     \n"
    "   }                                                               \n"
    "   else {                                                          \n"
    "       tex = texture2D(frag_tex_main, frag_tex_coord).bgr;         \n"
    "   }                                                               \n"
    "    gl_FragColor = vec4(tex, frag_alpha);                          \n"
    "}                                                                  \n";

static GLfloat bg_vertices[] = {
   -1.0f,  1.0f,  0.0f,  0.0f,  0.0f,
   -1.0f, -1.0f,  0.0f,  0.0f,  1.0f,
    1.0f, -1.0f,  0.0f,  1.0f,  1.0f,
    1.0f,  1.0f,  0.0f,  1.0f,  0.0f 
};

static GLfloat fg_vertices[] = {
   -1.0f,  1.0f, 0.0f, 0.0f,  0.0f,
   -1.0f, -1.0f, 0.0f, 0.0f,  1.0f,
    1.0f, -1.0f, 0.0f, 1.0f,  1.0f,
    1.0f,  1.0f, 0.0f, 1.0f,  0.0f
};

static GLushort vert_indices[] = {
    0, 1, 2, 0, 2, 3
};

int enable_debug_log = 0;
static runner_t myrunner = { 0 };

static int init_shm(void)
{
    debug("call %s()\n", __func__);

    myrunner.shm.fd = shm_open(SHM_NAME, O_CREAT | O_RDWR, 0777);
    debug("shm fd=%d\n", myrunner.shm.fd);

    ftruncate(myrunner.shm.fd, sizeof(shm_buf_t));

    myrunner.shm.buf = mmap(NULL, sizeof(shm_buf_t), PROT_READ | PROT_WRITE, MAP_SHARED, myrunner.shm.fd, 0);
    debug("shm buf=%p\n", myrunner.shm.buf);

    return 0;
}

static int init_gles(void)
{
    int r = 0;

    debug("call %s()\n", __func__);

    r = SDL_Init(SDL_INIT_VIDEO);
    if (r != 0) {
        error("failed to initialize sdl\n");
        return -1;
    }

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);

    myrunner.sdl2.win = SDL_CreateWindow("DraStic", 0, 0, R_LCD_W, R_LCD_H, SDL_WINDOW_OPENGL);
    myrunner.gles.ctx = SDL_GL_CreateContext(myrunner.sdl2.win);
  
    myrunner.gles.vert.shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(myrunner.gles.vert.shader, 1, &vert_shader_code, NULL);
    glCompileShader(myrunner.gles.vert.shader);
 
    myrunner.gles.frag.shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(myrunner.gles.frag.shader, 1, &frag_shader_code, NULL);
    glCompileShader(myrunner.gles.frag.shader);
 
    myrunner.gles.object = glCreateProgram();
    glAttachShader(myrunner.gles.object, myrunner.gles.vert.shader);
    glAttachShader(myrunner.gles.object, myrunner.gles.frag.shader);
    glLinkProgram(myrunner.gles.object);
    glUseProgram(myrunner.gles.object);
  
    myrunner.gles.vert.tex_pos = glGetAttribLocation(myrunner.gles.object, "vert_tex_pos");
    myrunner.gles.vert.tex_coord = glGetAttribLocation(myrunner.gles.object, "vert_tex_coord");
    myrunner.gles.frag.rotate = glGetUniformLocation(myrunner.gles.object, "frag_rotate");
    myrunner.gles.frag.aspect = glGetUniformLocation(myrunner.gles.object, "frag_aspect");
    myrunner.gles.frag.alpha = glGetUniformLocation(myrunner.gles.object, "frag_alpha");
    myrunner.gles.frag.tex_main = glGetUniformLocation(myrunner.gles.object, "frag_tex_main");

    glUniform1f(myrunner.gles.frag.rotate, 0);
    glUniform1f(myrunner.gles.frag.aspect, (float)R_LCD_W / R_LCD_H);
      
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glGenTextures(TEXTURE_MAX, myrunner.gles.texture);
    glBindTexture(GL_TEXTURE_2D, myrunner.gles.texture[TEXTURE_LCD0]);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
  
    glViewport(0, 0, R_LCD_W, R_LCD_H);
    glClear(GL_COLOR_BUFFER_BIT);
    glVertexAttribPointer(myrunner.gles.vert.tex_pos, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
    glVertexAttribPointer(myrunner.gles.vert.tex_coord, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
    glEnableVertexAttribArray(myrunner.gles.vert.tex_pos);
    glEnableVertexAttribArray(myrunner.gles.vert.tex_coord);

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myrunner.gles.texture[TEXTURE_LCD0]);
    glUniform1i(myrunner.gles.frag.tex_main, 0);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

    myrunner.gles.bg.pixels = malloc(R_LCD_W * R_LCD_H * 4);
    if (!myrunner.gles.bg.pixels) {
        error("failed to allocate buffer for bg image\n");
    }
    return 0;
}

static int load_overlay_file(const char *path, SDL_Rect lcd[2])
{
    int cc = 0;
    char buf[MAX_PATH + 32] = { 0 };

    debug("call %s(path=%s)\n", __func__, path);

    if (myrunner.gles.overlay.bg) {
        SDL_FreeSurface(myrunner.gles.overlay.bg);
        myrunner.gles.overlay.bg = NULL;
    }

    for (cc = 0; cc < 2; cc++) {
        if (myrunner.gles.overlay.mask[cc]) {
            SDL_FreeSurface(myrunner.gles.overlay.mask[cc]);
            myrunner.gles.overlay.mask[cc] = NULL;
        }
    }

    if (path && path[0]) {
        SDL_Surface *t = NULL;
        SDL_Surface *tmp = NULL;

        debug("load overlay from \"%s\"\n", path);

        t = IMG_Load(path);
        tmp = SDL_CreateRGBSurface(SDL_SWSURFACE, 128, 128, 32, 0xff0000, 0xff00, 0xff, 0xff000000);
        myrunner.gles.overlay.bg = SDL_ConvertSurface(t, tmp->format, 0);
        SDL_FreeSurface(t);

        for (cc = 0; cc < 2; cc++) {
            SDL_Rect srt = { 0 };
            SDL_Rect drt = { 0 };

            if (lcd[cc].w && lcd[cc].h) {
                myrunner.gles.overlay.mask[cc] = SDL_CreateRGBSurface(
                    SDL_SWSURFACE,
                    lcd[cc].w,
                    lcd[cc].h,
                    32,
                    0xff0000,
                    0xff00,
                    0xff,
                    0xff000000
                );

                srt.w = lcd[cc].w;
                srt.h = lcd[cc].h;
                srt.x = LAYOUT_BG_W - (lcd[cc].x + srt.w);
                srt.y = LAYOUT_BG_H - (lcd[cc].y + srt.h);
                debug("mask[%d]=%d,%d,%d,%d (org:%d,%d,%d,%d)\n",
                    cc,
                    srt.x,
                    srt.y,
                    srt.w,
                    srt.h,
                    lcd[cc].x,
                    lcd[cc].y,
                    lcd[cc].w,
                    lcd[cc].h
                );

                drt.w = lcd[cc].w;
                drt.h = lcd[cc].h;

                SDL_BlitSurface(
                    myrunner.gles.overlay.bg,
                    &srt,
                    myrunner.gles.overlay.mask[cc],
                    &drt
                );
            }
        }
        SDL_FreeSurface(tmp);

        debug("overlay image=%p\n", myrunner.gles.overlay.bg);
    }
    else {
        myrunner.gles.overlay.bg = SDL_CreateRGBSurface(SDL_SWSURFACE, LAYOUT_BG_W, LAYOUT_BG_H, 32, 0, 0, 0, 0);

        SDL_FillRect(myrunner.gles.overlay.bg, &myrunner.gles.overlay.bg->clip_rect, SDL_MapRGB(myrunner.gles.overlay.bg->format, 0x00, 0x00, 0x00));
        debug("loaded black overlay image\n");
    }

    return 0;
}

static void* runner_handler(void *param)
{
    int r = 0;
    int cc = 0;
    int running = 0;
    SDL_Rect rt = { 0 };
    char cur_bg_path[MAX_PATH] = { 0 };

    debug("call %s()\n", __func__);

    if (init_gles() < 0) {
        error("failed to init gles\n");
        return NULL;
    }

    if (init_shm() < 0) {
        error("failed to init shm\n");
        return NULL;
    }

    running = 1;
    while (running) {
        if (myrunner.shm.buf->valid == 0) {
            usleep(10);
            continue;
        }

        switch (myrunner.shm.buf->cmd) {
        case SHM_CMD_FLUSH:
            debug("recv SHM_CMD_FLUSH, tex=%d, pitch=%d, alpha=%d, srt(%d,%d,%d,%d), drt(%d,%d,%d,%d)\n",
                myrunner.shm.buf->tex,
                myrunner.shm.buf->pitch,
                myrunner.shm.buf->alpha,
                myrunner.shm.buf->srt.x, myrunner.shm.buf->srt.y,
                myrunner.shm.buf->srt.w, myrunner.shm.buf->srt.h,
                myrunner.shm.buf->drt.x, myrunner.shm.buf->drt.y,
                myrunner.shm.buf->drt.w, myrunner.shm.buf->drt.h
            );

            if (myrunner.shm.buf->tex == TEXTURE_BG) {
                myrunner.gles.bg.w = myrunner.shm.buf->srt.w;
                myrunner.gles.bg.h = myrunner.shm.buf->srt.h;
                debug("bg image w=%d, h=%d, pitch=%d\n", myrunner.gles.bg.w, myrunner.gles.bg.h, myrunner.shm.buf->pitch);
                memcpy(myrunner.gles.bg.pixels, myrunner.shm.buf->buf, myrunner.gles.bg.h * myrunner.shm.buf->pitch);
                break;
            }

            rt.x = myrunner.shm.buf->drt.x;
            rt.y = myrunner.shm.buf->drt.y;
            rt.w = myrunner.shm.buf->drt.w;
            rt.h = myrunner.shm.buf->drt.h;

#if defined(BRICK)
            rt.x = ((float)rt.x) * 1.6;
            rt.y = ((float)rt.y) * 1.6;
            rt.w = ((float)rt.w) * 1.6;
            rt.h = ((float)rt.h) * 1.6;
#endif

            if ((myrunner.shm.buf->layout == LAYOUT_MODE_OV) && (myrunner.shm.buf->overlay.reload)) {
                load_overlay_file(myrunner.shm.buf->overlay.image, myrunner.shm.buf->overlay.lcd);
                myrunner.shm.buf->overlay.reload = 0;
            }

            if ((myrunner.shm.buf->layout == LAYOUT_MODE_T17) || (myrunner.shm.buf->layout == LAYOUT_MODE_T19)) {
                fg_vertices[5] = ((((float)rt.x) / (float)R_LCD_W) - 0.5) * 2.0;
                fg_vertices[6] = ((((float)rt.y) / (float)R_LCD_H) - 0.5) * -2.0;

                fg_vertices[10] = fg_vertices[5];
                fg_vertices[11] = ((((float)(rt.y + rt.w)) / (float)R_LCD_H) - 0.5) * -2.0;

                fg_vertices[15] = ((((float)(rt.x + rt.h)) / (float)R_LCD_W) - 0.5) * 2.0;
                fg_vertices[16] = fg_vertices[11];

                fg_vertices[0] = fg_vertices[15];
                fg_vertices[1] = fg_vertices[6];
            }
            else if ((myrunner.shm.buf->layout == LAYOUT_MODE_T16) || (myrunner.shm.buf->layout == LAYOUT_MODE_T18)) {
                fg_vertices[15] = ((((float)rt.x) / (float)R_LCD_W) - 0.5) * 2.0;
                fg_vertices[16] = ((((float)rt.y) / (float)R_LCD_H) - 0.5) * -2.0;

                fg_vertices[0] = fg_vertices[15];
                fg_vertices[1] = ((((float)(rt.y + rt.w)) / (float)R_LCD_H) - 0.5) * -2.0;

                fg_vertices[5] = ((((float)(rt.x + rt.h)) / (float)R_LCD_W) - 0.5) * 2.0;
                fg_vertices[6] = fg_vertices[1];

                fg_vertices[10] = fg_vertices[5];
                fg_vertices[11] = fg_vertices[16];
            }
            else {
                fg_vertices[0] = ((((float)rt.x) / (float)R_LCD_W) - 0.5) * 2.0;
                fg_vertices[1] = ((((float)rt.y) / (float)R_LCD_H) - 0.5) * -2.0;

                fg_vertices[5] = fg_vertices[0];
                fg_vertices[6] = ((((float)(rt.y + rt.h)) / (float)R_LCD_H) - 0.5) * -2.0;

                fg_vertices[10] = ((((float)(rt.x + rt.w)) / (float)R_LCD_W) - 0.5) * 2.0;
                fg_vertices[11] = fg_vertices[6];

                fg_vertices[15] = fg_vertices[10];
                fg_vertices[16] = fg_vertices[1];
            }

            if (((myrunner.shm.buf->layout == LAYOUT_MODE_T0) ||
                (myrunner.shm.buf->layout == LAYOUT_MODE_T1)) &&
                (myrunner.shm.buf->tex == TEXTURE_LCD0))
            {
                glUniform1f(myrunner.gles.frag.alpha, 1.0 - ((float)myrunner.shm.buf->alpha / 10.0));
                glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
                glEnable(GL_BLEND);
            }

            glActiveTexture(GL_TEXTURE0);
            glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
            glBindTexture(GL_TEXTURE_2D, myrunner.gles.texture[myrunner.shm.buf->tex]);
            if (myrunner.shm.buf->filter == FILTER_PIXEL) {
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            }
            else {
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            }

            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, myrunner.shm.buf->srt.w, myrunner.shm.buf->srt.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, (void *)myrunner.shm.buf->buf);
            glVertexAttribPointer(myrunner.gles.vert.tex_pos, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
            glVertexAttribPointer(myrunner.gles.vert.tex_coord, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
            glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

            if (((myrunner.shm.buf->layout == LAYOUT_MODE_T0) ||
                (myrunner.shm.buf->layout == LAYOUT_MODE_T1)) &&
                (myrunner.shm.buf->tex == TEXTURE_LCD0))
            {
                glUniform1f(myrunner.gles.frag.alpha, 0.0);
                glDisable(GL_BLEND);
            }
            break;
        case SHM_CMD_FLIP:
            debug("recv SHM_CMD_FLIP\n");
            SDL_GL_SwapWindow(myrunner.sdl2.win);

            glActiveTexture(GL_TEXTURE0);
            glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
            glBindTexture(GL_TEXTURE_2D, myrunner.gles.texture[TEXTURE_BG]);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexImage2D(
                GL_TEXTURE_2D,
                0,
                GL_RGBA,
                myrunner.gles.bg.w,
                myrunner.gles.bg.h,
                0,
                GL_RGBA,
                GL_UNSIGNED_BYTE,
                (void *)myrunner.gles.bg.pixels
            );
            glVertexAttribPointer(myrunner.gles.vert.tex_pos, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bg_vertices);
            glVertexAttribPointer(myrunner.gles.vert.tex_coord, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bg_vertices[3]);
            glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

            break;
        case SHM_CMD_QUIT:
            running = 0;
            //debug("recv SHM_CMD_QUIT\n");
            break;
        }
        myrunner.shm.buf->valid = 0;
    }

    debug("free resources\n");

    munmap((void *)myrunner.shm.buf, sizeof(shm_buf_t));
    shm_unlink(SHM_NAME);

    if (myrunner.gles.bg.pixels) {
        free(myrunner.gles.bg.pixels);
        myrunner.gles.bg.pixels = NULL;
        myrunner.gles.bg.w = 0;
        myrunner.gles.bg.h = 0;
    }

    if (myrunner.gles.overlay.bg) {
        SDL_FreeSurface(myrunner.gles.overlay.bg);
        myrunner.gles.overlay.bg = NULL;
    }

    for (cc = 0; cc < 2; cc++) {
        if (myrunner.gles.overlay.mask[cc]) {
            SDL_FreeSurface(myrunner.gles.overlay.mask[cc]);
            myrunner.gles.overlay.mask[cc] = NULL;
        }
    }

    glDeleteTextures(TEXTURE_MAX, myrunner.gles.texture);
    glDeleteShader(myrunner.gles.vert.shader);
    glDeleteShader(myrunner.gles.frag.shader);
    SDL_DestroyWindow(myrunner.sdl2.win);
    SDL_GL_DeleteContext(myrunner.gles.ctx);
    SDL_Quit();

    pthread_exit(NULL);
    return NULL;
}

int main(int argc, char **argv)
{
    pthread_t id = 0;
    const char *debug = NULL;

    debug = getenv(NDS_DEBUG);

    enable_debug_log = 0;
    if (debug && !strcmp(debug, "1")) {
        enable_debug_log = 1;
    }

    debug("call %s(enable_debug_log=%d)\n", __func__, enable_debug_log);

    pthread_create(&id, NULL, runner_handler, NULL);
    pthread_join(id, NULL);
    return 0;
}

