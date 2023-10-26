#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>
 
int main(int argc, char** argv)
{
  SDL_Surface* screen;
 
  SDL_Init(SDL_INIT_VIDEO);
  screen = SDL_SetVideoMode(28, 28, 32, SDL_HWSURFACE);
 
  SDL_Surface* png = IMG_Load("pen.png");
  SDL_BlitSurface(png, NULL, screen, NULL);
  SDL_Flip(screen);
  SDL_Delay(3000);

  int x = 0, y = 0;
  uint32_t *p = screen->pixels;

  printf("uint32_t hex_pen[] = {\n");
  for (y=0; y<28; y++) {
    for (x=0; x<28; x++) {
        printf("0x%x,", *p);
        p+= 1;
    }
    printf("\n");
  }
  printf("};");
 
  SDL_FreeSurface(png);
  SDL_Quit();
  return 0;
}
