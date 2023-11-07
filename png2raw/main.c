#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
 
int main(int argc, char** argv)
{
    int cc = 0;
    char buf[255] = {0};
    SDL_Surface *tmp = NULL;

    //SDL_Init(SDL_INIT_VIDEO);
    tmp = SDL_CreateRGBSurface(SDL_SWSURFACE, 32, 32, 16, 0, 0, 0, 0);
    if (tmp) {
        for (cc=0; cc<=1; cc++) {
            sprintf(buf, "resources/logo/%d.png", cc);
            SDL_Surface *t0 = IMG_Load(buf);
            if (t0) {
                SDL_Surface *t1 = SDL_ConvertSurface(t0, tmp->format, 0);

                if (t1) {
                    int fd = -1;

                    sprintf(buf, "drastic_logo_%d.raw", cc);
                    fd = open(buf, O_CREAT | O_WRONLY);
                    if (fd > 0) {
                        write(fd, t1->pixels, 400 * 150 * 2);
                        close(fd);
                    }
                    SDL_FreeSurface(t1);
                }
                SDL_FreeSurface(t0);
            }
        }
        SDL_FreeSurface(tmp);
    }
    //SDL_Quit();
    return 0;
}
