/*
  Customized version for Miyoo-Mini handheld.
  Only tested under Miyoo-Mini stock OS (original firmware) with Parasyte compatible layer.

  Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>
  Copyright (C) 2022-2022 Steward Fu <steward.fu@gmail.com>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/
#include "../../SDL_internal.h"

#if SDL_VIDEO_DRIVER_MMIYOO

#include "../SDL_sysvideo.h"
#include "SDL_framebuffer_mmiyoo.h"

#define MMIYOO_SURFACE "_SDL_MMiyooSurface"

int MMIYOO_CreateWindowFramebuffer(_THIS, SDL_Window *window, Uint32 *format, void **pixels, int *pitch)
{
    SDL_Surface *surface;
    const Uint32 surface_format = SDL_PIXELFORMAT_RGB888;
    int w, h;
    int bpp;
    Uint32 Rmask, Gmask, Bmask, Amask;

    surface = (SDL_Surface *) SDL_GetWindowData(window, MMIYOO_SURFACE);
    SDL_FreeSurface(surface);

    SDL_PixelFormatEnumToMasks(surface_format, &bpp, &Rmask, &Gmask, &Bmask, &Amask);
    SDL_GetWindowSize(window, &w, &h);
    surface = SDL_CreateRGBSurface(0, w, h, bpp, Rmask, Gmask, Bmask, Amask);
    if(!surface) {
        return -1;
    }

    SDL_SetWindowData(window, MMIYOO_SURFACE, surface);
    *format = surface_format;
    *pixels = surface->pixels;
    *pitch = surface->pitch;
    return 0;
}

int MMIYOO_UpdateWindowFramebuffer(_THIS, SDL_Window *window, const SDL_Rect *rects, int numrects)
{
    static int frame_number;
    SDL_Surface *surface;

    surface = (SDL_Surface *) SDL_GetWindowData(window, MMIYOO_SURFACE);
    if(!surface) {
        return SDL_SetError("Couldn't find mmiyoo surface for window");
    }

    if(SDL_getenv("SDL_VIDEO_MMIYOO_SAVE_FRAMES")) {
        char file[128];
        SDL_snprintf(file, sizeof(file), "SDL_window%" SDL_PRIu32 "-%8.8d.bmp",
                     SDL_GetWindowID(window), ++frame_number);
        SDL_SaveBMP(surface, file);
    }
    return 0;
}

void MMIYOO_DestroyWindowFramebuffer(_THIS, SDL_Window *window)
{
    SDL_Surface *surface;

    surface = (SDL_Surface *) SDL_SetWindowData(window, MMIYOO_SURFACE, NULL);
    SDL_FreeSurface(surface);
}

#endif

