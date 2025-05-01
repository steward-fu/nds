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

#include <SDL.h>
#include <SDL_image.h>
#include <GLES2/gl2.h>
#include <SDL2/SDL.h>

#include "debug.h"
#include "runner.h"

const char *vert_shader_code =
    "attribute vec4 vert_pos;                                           \n"
    "attribute vec2 vert_coord;                                         \n"
    "varying vec2 frag_coord;                                           \n"
    "void main()                                                        \n"
    "{                                                                  \n"
    "    gl_Position = vert_pos;                                        \n"
    "    frag_coord = vert_coord;                                       \n"
    "}                                                                  \n";

const char *frag_shader_code =
    "#ifdef GL_ES                                                       \n"
    "precision mediump float;                                           \n"
    "#endif                                                             \n"
    "varying vec2 frag_coord;                                           \n"
    "uniform float frag_rotate;                                         \n"
    "uniform float frag_aspect;                                         \n"
    "uniform sampler2D frag_sampler;                                    \n"
    "const vec2 HALF = vec2(0.5);                                       \n"
    "void main()                                                        \n"
    "{                                                                  \n"
    "    float aSin = sin(frag_rotate);                                 \n"
    "    float aCos = cos(frag_rotate);                                 \n"
    "    vec2 tc = frag_coord;                                          \n"
    "    mat2 rotMat = mat2(aCos, -aSin, aSin, aCos);                   \n"
    "    mat2 scaleMat = mat2(frag_aspect, 0.0, 0.0, 1.0);              \n"
    "    mat2 scaleMatInv = mat2(1.0 / frag_aspect, 0.0, 0.0, 1.0);     \n"
    "    tc -= HALF.xy;                                                 \n"
    "    tc = scaleMatInv * rotMat * scaleMat * tc;                     \n"
    "    tc += HALF.xy;                                                 \n"
    "    vec3 tex = texture2D(frag_sampler, tc).bgr;                    \n"
    "    gl_FragColor = vec4(tex, 1.0);                                 \n"
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

    myrunner.sdl2.win = SDL_CreateWindow("DraStic", 0, 0, SCREEN_W, SCREEN_H, SDL_WINDOW_OPENGL);
    myrunner.gles.ctx = SDL_GL_CreateContext(myrunner.sdl2.win);
  
    myrunner.gles.vert_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(myrunner.gles.vert_shader, 1, &vert_shader_code, NULL);
    glCompileShader(myrunner.gles.vert_shader);
 
    myrunner.gles.frag_shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(myrunner.gles.frag_shader, 1, &frag_shader_code, NULL);
    glCompileShader(myrunner.gles.frag_shader);
 
    myrunner.gles.program = glCreateProgram();
    glAttachShader(myrunner.gles.program, myrunner.gles.vert_shader);
    glAttachShader(myrunner.gles.program, myrunner.gles.frag_shader);
    glLinkProgram(myrunner.gles.program);
    glUseProgram(myrunner.gles.program);
  
    myrunner.gles.vert_pos = glGetAttribLocation(myrunner.gles.program, "vert_pos");
    myrunner.gles.vert_coord = glGetAttribLocation(myrunner.gles.program, "vert_coord");
    myrunner.gles.frag_sampler = glGetUniformLocation(myrunner.gles.program, "frag_sampler");
    myrunner.gles.frag_rotate = glGetUniformLocation(myrunner.gles.program, "frag_rotate");
    myrunner.gles.frag_aspect = glGetUniformLocation(myrunner.gles.program, "frag_aspect");

    glUniform1f(myrunner.gles.frag_rotate, 0);
    glUniform1f(myrunner.gles.frag_aspect, (float)SCREEN_W / SCREEN_H);
      
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glGenTextures(TEXTURE_MAX, myrunner.gles.tex_id);
    glBindTexture(GL_TEXTURE_2D, myrunner.gles.tex_id[TEXTURE_LCD0]);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
  
    glViewport(0, 0, SCREEN_W, SCREEN_H);
    glClear(GL_COLOR_BUFFER_BIT);
    glVertexAttribPointer(myrunner.gles.vert_pos, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
    glVertexAttribPointer(myrunner.gles.vert_coord, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
    glEnableVertexAttribArray(myrunner.gles.vert_pos);
    glEnableVertexAttribArray(myrunner.gles.vert_coord);

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, myrunner.gles.tex_id[TEXTURE_LCD0]);
    glUniform1i(myrunner.gles.frag_sampler, 0);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);

    myrunner.gles.bg_pixels = malloc(SCREEN_W * SCREEN_H * 4);
    if (!myrunner.gles.bg_pixels) {
        error("failed to allocate buffer for bg image\n");
    }
    return 0;
}

static void* runner_handler(void *param)
{
    int r = 0;
    int running = 0;
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
//            debug("recv SHM_CMD_FLUSH, tex_id=%d, srt(%d,%d,%d,%d), drt(%d,%d,%d,%d), pitch=%d, alpha=%d\n",
//                myrunner.shm.buf->tex_id,
//                myrunner.shm.buf->srt.x, myrunner.shm.buf->srt.y, myrunner.shm.buf->srt.w, myrunner.shm.buf->srt.h,
//                myrunner.shm.buf->drt.x, myrunner.shm.buf->drt.y, myrunner.shm.buf->drt.w, myrunner.shm.buf->drt.h,
//                myrunner.shm.buf->pitch, myrunner.shm.buf->alpha
//            );

            if (myrunner.shm.buf->tex_id == TEXTURE_BG) {
                memcpy(myrunner.gles.bg_pixels, myrunner.shm.buf->buf, SCREEN_W * SCREEN_H * 4);
//                if (!strcmp(cur_bg_path, myrunner.shm.buf->bg_path)) {
//                    break;
//                }
//
//                SDL_Surface *s = SDL_CreateRGBSurface(SDL_SWSURFACE, SCREEN_W, SCREEN_H, 32, 0, 0, 0, 0);
//                if (s) {
//                    SDL_Surface *t = IMG_Load(myrunner.shm.buf->bg_path);
//                    if (t) {
//                        SDL_BlitSurface(t, NULL, s, NULL);
//                        memcpy(myrunner.gles.bg_pixels, s->pixels, SCREEN_W * SCREEN_H * 4);
//                        SDL_FreeSurface(t);
//
//                        strcpy(cur_bg_path, myrunner.shm.buf->bg_path);
//                    }
//                    SDL_FreeSurface(s);
//                }
                break;
            }

            if ((myrunner.shm.buf->dis_mode == NDS_DIS_MODE_HH1) || (myrunner.shm.buf->dis_mode == NDS_DIS_MODE_HH3)) {
                fg_vertices[5] = ((((float)myrunner.shm.buf->drt.x) / (float)SCREEN_W) - 0.5) * 2.0;
                fg_vertices[6] = ((((float)myrunner.shm.buf->drt.y) / (float)SCREEN_H) - 0.5) * -2.0;

                fg_vertices[10] = fg_vertices[5];
                fg_vertices[11] = ((((float)(myrunner.shm.buf->drt.y + myrunner.shm.buf->drt.w)) / (float)SCREEN_H) - 0.5) * -2.0;

                fg_vertices[15] = ((((float)(myrunner.shm.buf->drt.x + myrunner.shm.buf->drt.h)) / (float)SCREEN_W) - 0.5) * 2.0;
                fg_vertices[16] = fg_vertices[11];

                fg_vertices[0] = fg_vertices[15];
                fg_vertices[1] = fg_vertices[6];
            }
            else if ((myrunner.shm.buf->dis_mode == NDS_DIS_MODE_HH0) || (myrunner.shm.buf->dis_mode == NDS_DIS_MODE_HH2)) {
                fg_vertices[15] = ((((float)myrunner.shm.buf->drt.x) / (float)SCREEN_W) - 0.5) * 2.0;
                fg_vertices[16] = ((((float)myrunner.shm.buf->drt.y) / (float)SCREEN_H) - 0.5) * -2.0;

                fg_vertices[0] = fg_vertices[15];
                fg_vertices[1] = ((((float)(myrunner.shm.buf->drt.y + myrunner.shm.buf->drt.w)) / (float)SCREEN_H) - 0.5) * -2.0;

                fg_vertices[5] = ((((float)(myrunner.shm.buf->drt.x + myrunner.shm.buf->drt.h)) / (float)SCREEN_W) - 0.5) * 2.0;
                fg_vertices[6] = fg_vertices[1];

                fg_vertices[10] = fg_vertices[5];
                fg_vertices[11] = fg_vertices[16];
            }
            else {
                fg_vertices[0] = ((((float)myrunner.shm.buf->drt.x) / (float)SCREEN_W) - 0.5) * 2.0;
                fg_vertices[1] = ((((float)myrunner.shm.buf->drt.y) / (float)SCREEN_H) - 0.5) * -2.0;

                fg_vertices[5] = fg_vertices[0];
                fg_vertices[6] = ((((float)(myrunner.shm.buf->drt.y + myrunner.shm.buf->drt.h)) / (float)SCREEN_H) - 0.5) * -2.0;

                fg_vertices[10] = ((((float)(myrunner.shm.buf->drt.x + myrunner.shm.buf->drt.w)) / (float)SCREEN_W) - 0.5) * 2.0;
                fg_vertices[11] = fg_vertices[6];

                fg_vertices[15] = fg_vertices[10];
                fg_vertices[16] = fg_vertices[1];
            }

            glActiveTexture(GL_TEXTURE0);
            glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
            glBindTexture(GL_TEXTURE_2D, myrunner.gles.tex_id[myrunner.shm.buf->tex_id]);
            if (myrunner.shm.buf->pixel_filter) {
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            }
            else {
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            }

            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, myrunner.shm.buf->srt.w, myrunner.shm.buf->srt.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, (void *)myrunner.shm.buf->buf);
            glVertexAttribPointer(myrunner.gles.vert_pos, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), fg_vertices);
            glVertexAttribPointer(myrunner.gles.vert_coord, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &fg_vertices[3]);
            glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, vert_indices);
            break;
        case SHM_CMD_FLIP:
            //debug("recv SHM_CMD_FLIP\n");
            SDL_GL_SwapWindow(myrunner.sdl2.win);

            glActiveTexture(GL_TEXTURE0);
            glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
            glBindTexture(GL_TEXTURE_2D, myrunner.gles.tex_id[TEXTURE_BG]);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, SCREEN_W, SCREEN_H, 0, GL_RGBA, GL_UNSIGNED_BYTE, (void *)myrunner.gles.bg_pixels);
            glVertexAttribPointer(myrunner.gles.vert_pos, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), bg_vertices);
            glVertexAttribPointer(myrunner.gles.vert_coord, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), &bg_vertices[3]);
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

    if (myrunner.gles.bg_pixels) {
        free(myrunner.gles.bg_pixels);
        myrunner.gles.bg_pixels = NULL;
    }
    glDeleteTextures(TEXTURE_MAX, myrunner.gles.tex_id);
    glDeleteShader(myrunner.gles.vert_shader);
    glDeleteShader(myrunner.gles.frag_shader);
    SDL_DestroyWindow(myrunner.sdl2.win);
    SDL_GL_DeleteContext(myrunner.gles.ctx);
    SDL_Quit();

    pthread_exit(NULL);
    return NULL;
}

int main(int argc, char **argv)
{
    pthread_t id = 0;

    debug("call %s()\n", __func__);

    pthread_create(&id, NULL, runner_handler, NULL);
    pthread_join(id, NULL);
    return 0;
}

