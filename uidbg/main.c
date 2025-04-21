#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

#include <lvgl.h>
#include <SDL.h>

#include "io_fb.h"
#include "GUIConf.h"
#include "GUI_Protected.h"
#include "LCD_ConfDefaults.h"

#include "cfg.h"
#include "lang.h"
#include "cfg.pb.h"
#include "menu_nds.h"

extern nds_pb_cfg mycfg;

static int running = 0;
static pthread_t thread_id = 0;
static lv_display_t *disp = NULL;
static SDL_Surface *screen = NULL;

int flip_lcd_screen(void)
{
    SDL_Flip(screen);
    return 0;
}

int flush_lcd_screen(int tex_id, const void *pixels, SDL_Rect srt, SDL_Rect drt, int pitch, int alpha, int rotate)
{
    memcpy(screen->pixels, pixels, LCD_XSIZE * LCD_YSIZE * 2);
    return 0;
}

static void* input_handler(void *param)
{
    const int MOV = 5;
    SDL_Event event = { 0 };

    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;
    GUI_PID_STATE st = { LCD_XSIZE >> 1, LCD_YSIZE >>1, 0 };

    running = 1;
    while (running) {
        if (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_QUIT:
                exit(0);
                break;
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {
                case SDLK_w:
                    up = 1;
                    break;
                case SDLK_s:
                    down = 1;
                    break;
                case SDLK_a:
                    left = 1;
                    break;
                case SDLK_d:
                    right = 1;
                    break;
                case SDLK_l:
                    if (st.Pressed == 0) {
                        st.Pressed = 1;
                        GUI_MOUSE_StoreState(&st);
                    }
                    break;
                default:
                    GUI_StoreKeyMsg(event.key.keysym.sym, 1);
                    break;
                }
                break;
            case SDL_KEYUP:
                switch (event.key.keysym.sym) {
                case SDLK_w:
                    up = 0;
                    break;
                case SDLK_s:
                    down = 0;
                    break;
                case SDLK_a:
                    left = 0;
                    break;
                case SDLK_d:
                    right = 0;
                    break;
                case SDLK_l:
                    if (st.Pressed) {
                        st.Pressed = 0;
                        GUI_MOUSE_StoreState(&st);
                    }
                    break;
                }
                break;
            case SDL_MOUSEMOTION:
                SDL_GetMouseState(&st.x, &st.y);
                GUI_MOUSE_StoreState(&st);
                break;
            case SDL_MOUSEBUTTONUP:
                SDL_GetMouseState(&st.x, &st.y);
                st.Pressed = 0;
                GUI_MOUSE_StoreState(&st);

                GUI_TOUCH_StoreState(st.x, st.y);
                break;
            case SDL_MOUSEBUTTONDOWN:
                SDL_GetMouseState(&st.x, &st.y);
                st.Pressed = 1;
                GUI_MOUSE_StoreState(&st);

                GUI_TOUCH_StoreState(st.x, st.y);
                break;
            }
        }

        if (up && (st.y > 0)) {
            st.y -= MOV;
            GUI_MOUSE_StoreState(&st);
        }
        if (down && (st.y < LCD_YSIZE)) {
            st.y += MOV;
            GUI_MOUSE_StoreState(&st);
        }
        if (left && (st.x > 0)) {
            st.x -= MOV;
            GUI_MOUSE_StoreState(&st);
        }
        if (right && (st.x < LCD_XSIZE)) {
            st.x += MOV;
            GUI_MOUSE_StoreState(&st);
        }
        usleep(1000000 / 30);
    }

    return NULL;
}

int main(int argc, char **argv)
{
    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_SetVideoMode(LCD_XSIZE, LCD_YSIZE, 16, SDL_SWSURFACE);
    SDL_ShowCursor(SDL_FALSE);

    init_cfg();
    pthread_create(&thread_id, NULL, input_handler, NULL);
    prehook_cb_menu((void *)0xdeadbeef, 1);

    running = 0;
    pthread_join(thread_id, NULL);

    SDL_Quit();
    return 0;
}

