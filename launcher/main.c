#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <dirent.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

#define PREFIX      "[RUN] "

#ifdef MMIYOO
    #define FB_W    640
    #define FB_H    480
#endif

#ifdef PANDORA
    #define FB_W    800
    #define FB_H    480
#endif

static TTF_Font *font = NULL;
static SDL_Surface *screen = NULL;

int get_file_count(const char *path)
{
    int cnt = 0;
    DIR *dir = NULL;
    struct dirent *ent = NULL;

    dir = opendir(path);
    while ((ent = readdir(dir)) != NULL) {
        cnt += 1;
        printf("%s\n", ent->d_name);
    }
    closedir(dir);
    return cnt;
}

int main(int argc, char **argv)
{
    int w = 0, h = 0;
    SDL_Color col = {255, 0, 0};
    SDL_Rect rt = {0, 100, 0, 0};
    const char *cc = "test";

    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    screen = SDL_SetVideoMode(FB_W, FB_H, 16, SDL_SWSURFACE | SDL_FULLSCREEN);
    SDL_FillRect(screen, &screen->clip_rect, SDL_MapRGB(screen->format, 0xff, 0x00, 0x00));

    TTF_SizeUTF8(font, cc, &w, &h);
    SDL_Surface *msg = TTF_RenderUTF8_Solid(font, cc, col);
    SDL_BlitSurface(msg, NULL, screen, &rt);
    SDL_Flip(screen);
    SDL_FreeSurface(msg);
    SDL_Delay(3000);
    get_file_count("/media/Game/roms/nds/");

    TTF_CloseFont(font);
    TTF_Quit();
    SDL_Quit();
    return -1;
}

