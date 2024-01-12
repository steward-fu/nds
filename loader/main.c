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

#define PREFIX  "[RUN] "

#include "bg_800x480.h"

#define FB_W        800
#define FB_H        480
#define FB_BPP      16
#define FONT_SIZE   20

static int cur_sel = 0;
static int total_file = 0;
static char root[255] = {0};
static TTF_Font *font = NULL;
static SDL_Surface *bg = NULL;
static SDL_Surface *screen = NULL;
static char cur_filename[255] = {0};

int get_file_count(const char *path)
{
    int cnt = 0;
    DIR *dir = NULL;
    struct dirent *ent = NULL;

    dir = opendir(path);
    if (dir) {
        while ((ent = readdir(dir)) != NULL) {
            if (!strcmp(ent->d_name, ".")) {
                continue;
            }
            if (!strcmp(ent->d_name, "..")) {
                continue;
            }
            if (ent->d_type & DT_DIR) {
                continue;
            }
            cnt += 1;
        }
        closedir(dir);
    }
    return cnt;
}

void draw_text(const char *text, int hl, int x, int y)
{
    uint32_t bg = 0;
    int w = 0, h = 0;
    SDL_Rect rt = {0};
    SDL_Color col = {0};
    SDL_Surface *t1 = NULL;

    if (hl) {
        col.r = 255;
        col.g = 255;
        col.b = 255;
        bg = SDL_MapRGB(screen->format, 0, 128, 0);
    }
    else {
        col.r = 255;
        col.g = 255;
        col.b = 255;
        bg = SDL_MapRGB(screen->format, 0, 0, 0);
    }

    TTF_SizeUTF8(font, text, &w, &h);
    SDL_Surface *t0 = TTF_RenderUTF8_Solid(font, text, col);
    if (t0) {
        if (hl) {
            t1 = SDL_CreateRGBSurface(SDL_SWSURFACE, t0->w, t0->h + 2, FB_BPP, 0, 0, 0, 0);
            if (t1) {
                SDL_FillRect(t1, &t1->clip_rect, bg);
                SDL_BlitSurface(t0, NULL, t1, NULL);
                rt.x = 0;
                rt.y = y - 1;
                rt.w = FB_W - 5;
                rt.h = t0->h + 2;
                SDL_FillRect(screen, &rt, bg);

                rt.x = 10;
                rt.w = 0;
                rt.h = 0;
                SDL_BlitSurface(t1, NULL, screen, &rt);
                SDL_FreeSurface(t1);
            }
        }
        else {
            rt.x = 10;
            rt.y = y - 1;
            rt.w = 0;
            rt.h = 0;
            SDL_BlitSurface(t0, NULL, screen, &rt);
        }
        SDL_FreeSurface(t0);
    }
}

int draw_file(const char *path, int start, int count)
{
    int s0 = 0;
    int s1 = 0;
    int cnt = 0;
    DIR *dir = NULL;
    char buf[255] = {0};
    struct dirent *ent = NULL;

    if (total_file > 19) {
        s0 = cur_sel - 9;
        s1 = cur_sel + 10;
        if (s0 < 0) {
            s1 -= s0;
            s0 = 0;
        }
        if (s1 > total_file) {
            s0 -= (s1 - total_file);
            s1 = total_file;
        }
    }
    else {
        s0 = 0;
        s1 = 19;
    }

    dir = opendir(path);
    if (bg) {
        SDL_BlitSurface(bg, NULL, screen, NULL);
    }
    else {
        SDL_FillRect(screen, &screen->clip_rect, SDL_MapRGB(screen->format, 0, 0, 0));
    }
    if (dir) {
        while ((ent = readdir(dir)) != NULL) {
            if (!strcmp(ent->d_name, ".")) {
                continue;
            }
            if (!strcmp(ent->d_name, "..")) {
                continue;
            }
            if (ent->d_type & DT_DIR) {
                continue;
            }

            if (cnt == cur_sel) {
                sprintf(cur_filename, "%s/%s", path, ent->d_name);
            }

            if (cnt >= s0) {
                sprintf(buf, "%d. %s", cnt + 1, ent->d_name);
                draw_text(buf, cnt == cur_sel, 10, 10 + ((cnt - s0) * (FONT_SIZE + 4)));
            }
            cnt += 1;
            if (cnt >= s1) {
                break;
            }
        }
        closedir(dir);
    }
    return cnt;
}

int main(int argc, char **argv)
{
    int run = 0;
    int update = 0;
    SDL_RWops *rw = NULL;
    char buf[255] = {0};

    if (argc != 3) {
        printf("usage: %s font_path roms_folder\n", argv[0]);
        return -1;
    }

    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    screen = SDL_SetVideoMode(FB_W, FB_H, FB_BPP, SDL_SWSURFACE | SDL_FULLSCREEN);

    if (screen == NULL) {
        printf(PREFIX"Failed to init screen\n");
        return -1;
    }
    SDL_FillRect(screen, &screen->clip_rect, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_ShowCursor(0);

    rw = SDL_RWFromMem(hex_bg, sizeof(hex_bg));
    bg = IMG_Load_RW(rw, 1);

    font = TTF_OpenFont(argv[1], FONT_SIZE);
    strcpy(root, argv[2]);
    total_file = get_file_count(root);

    update = 1;
    SDL_Event event;
    while (1) {
        if (SDL_PollEvent(&event)) {
            if (event.type == SDL_KEYUP) {
                if (event.key.keysym.sym == SDLK_UP) {
                    if (cur_sel > 0) {
                        update = 1;
                        cur_sel -= 1;
                    }
                }
                else if (event.key.keysym.sym == SDLK_DOWN) {
                    if (cur_sel < (total_file - 1)) {
                        update = 1;
                        cur_sel += 1;
                    }
                }
                else if (event.key.keysym.sym == SDLK_LSHIFT) {
                    update = 1;
                    cur_sel -= 10;
                    if (cur_sel < 0) {
                        cur_sel = 0;
                    }
                }
                else if (event.key.keysym.sym == SDLK_LCTRL) {
                    update = 1;
                    cur_sel += 10;
                    if (cur_sel >= total_file) {
                        cur_sel = total_file - 1;
                    }
                }
                else if (event.key.keysym.sym == SDLK_END) {
                    run = 1;
                    break;
                }
                else if (event.key.keysym.sym == SDLK_PAGEDOWN) {
                    run = 0;
                    break;
                }
            }

            if (update) {
                update = 0;
                draw_file(root, cur_sel, cur_sel + 19);
                SDL_Flip(screen);
            }
        }
        SDL_Delay(30);
    }

    if (bg) {
        SDL_FreeSurface(bg);
    }
    if (font) {
        TTF_CloseFont(font);
    }
    TTF_Quit();
    SDL_Quit();

    if (run) {
        execl("./launch.sh", "launch.sh", cur_filename, NULL);
    }
    return -1;
}

