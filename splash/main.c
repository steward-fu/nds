#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <linux/fb.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <linux/rtc.h>
#include <json-c/json.h>

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

#include "hex_en.h"
#include "hex_cn.h"

#define JSON_PATH   "resources/settings.json"
#define JSON_LANG   "lang"
#define JSON_SPLASH "splash"

int main(int argc, char *argv[])
{
    int val = 1;
    int is_en = 1;
    FILE *f = NULL;
    char buf[255] = {0}; 
    SDL_RWops *rw = NULL;
    SDL_Surface *screen = NULL;
    struct json_object *jval = NULL;
    struct json_object *jfile = NULL;

    jfile = json_object_from_file(JSON_PATH);
    if (jfile == NULL) {
        return -1;
    }

    json_object_object_get_ex(jfile, JSON_SPLASH, &jval);
    if (jval) {
        val = json_object_get_int(jval);
    }
    if (val <= 0) {
        json_object_put(jfile);
        return 0;
    }
    val-= 1;

    json_object_object_get_ex(jfile, JSON_LANG, &jval);
    if (jval) {
        if (strcmp(json_object_get_string(jval), "chinese_cn") == 0) {
            is_en = 0;
        }
    }

    json_object_object_add(jfile, JSON_SPLASH, json_object_new_int(val));
    json_object_to_file_ext(JSON_PATH, jfile, JSON_C_TO_STRING_PRETTY);
    json_object_put(jfile);

    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE | SDL_DOUBLEBUF);
    SDL_ShowCursor(0);

    if (is_en) {
        rw = SDL_RWFromMem(hex_en, sizeof(hex_en));
    }
    else {
        rw = SDL_RWFromMem(hex_cn, sizeof(hex_cn));
    }

    SDL_Surface* t = IMG_Load_RW(rw, 1);
    if (t) {
        SDL_Surface *png = SDL_ConvertSurface(t, screen->format, 0);
        SDL_BlitSurface(png, NULL, screen, NULL);
        SDL_Flip(screen);
        SDL_FreeSurface(png);
        SDL_FreeSurface(t);

        int cc = 100;
        SDL_Event event = {0};
        while (cc--) {
            if (SDL_PollEvent(&event)) {
                if (event.type == SDL_KEYDOWN) {
                    break;
                }
            }
            SDL_Delay(30);
        }
    }
    SDL_FillRect(screen, &screen->clip_rect, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_Flip(screen);
    SDL_FillRect(screen, &screen->clip_rect, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_Flip(screen);
    SDL_Quit();
    return 0;
}
