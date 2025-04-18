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

static void refresh_cb(lv_timer_t *timer)
{
    lv_refr_now(disp);
}

static void flush_cb(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map)
{
    SDL_Flip(screen);
    lv_display_flush_ready(disp);
}

int main(int argc, char **argv)
{
    mycfg.ui = UI_UCGUI;

    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_SetVideoMode(LCD_XSIZE, LCD_YSIZE, 16, SDL_SWSURFACE | SDL_DOUBLEBUF);

    lv_init();

    disp = lv_display_create(LCD_XSIZE, LCD_YSIZE);
    lv_display_set_flush_cb(disp, flush_cb);
    lv_display_set_buffers(disp, screen->pixels, NULL, LCD_XSIZE * LCD_YSIZE * 2, LV_DISPLAY_RENDER_MODE_FULL);

    lv_timer_t * refr_timer = lv_display_get_refr_timer(disp);
    lv_timer_set_cb(refr_timer, refresh_cb);

    pthread_create(&thread_id, NULL, input_handler, NULL);
    prehook_cb_menu((void *)0xdeadbeef, 1);

    running = 0;
    pthread_join(thread_id, NULL);

    SDL_Quit();
    return 0;
}

