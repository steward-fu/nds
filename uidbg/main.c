#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <SDL.h>

#include "io_fb.h"
#include "GUIConf.h"
#include "GUI_Protected.h"

#include "menu_nds.h"

static int running = 0;
static pthread_t thread_id = 0;
static SDL_Surface *screen = NULL;

int flip_lcd_screen(void)
{
    SDL_Flip(screen);
    return 0;
}

int flush_lcd_screen(int tex_id, const void *pixels, SDL_Rect srt, SDL_Rect drt, int pitch, int alpha, int rotate)
{
    memcpy(screen->pixels, pixels, SCREEN_W * SCREEN_H * 2);
    return 0;
}

static void* input_handler(void *param)
{
    SDL_Event event = { 0 };
    GUI_PID_STATE st = { 0 };

    running = 1;
    while (running) {
        if (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_KEYDOWN:
                GUI_StoreKeyMsg(event.key.keysym.sym, 1);
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
        usleep(1000000 / 30);
    }

    return NULL;
}

int main(int argc, char **argv)
{
    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_SetVideoMode(SCREEN_W, SCREEN_H, 16, SDL_SWSURFACE | SDL_DOUBLEBUF);

    pthread_create(&thread_id, NULL, input_handler, NULL);
    prehook_cb_menu((void *)0xdeadbeef, 1);

    running = 0;
    pthread_join(thread_id, NULL);

    SDL_Quit();
    return 0;
}

