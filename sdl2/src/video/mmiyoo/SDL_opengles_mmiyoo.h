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
#ifndef __SDL_OPENGLES_MMIYOO_H__
#define __SDL_OPENGLES_MMIYOO_H__

#include <EGL/egl.h>
#include <EGL/eglext.h>
#include "../SDL_sysvideo.h"

typedef struct SDL_GLDriverData {
    EGLDisplay display;
    EGLContext context;
    EGLSurface surface;
} SDL_GLDriverData;

void *glGetProcAddress(_THIS, const char *proc);
extern int glGetConfig(EGLConfig *pconf, int *pformat);
extern int glLoadLibrary(_THIS, const char *name);
extern int glSetSwapInterval(_THIS, int interval);
extern int glSwapWindow(_THIS, SDL_Window *window);
extern int glMakeCurrent(_THIS, SDL_Window *window, SDL_GLContext context);
extern int glUpdateBufferSettings(void *pFunc, void *fb_idx, void *fb_vaddr);
extern void glDeleteContext(_THIS, SDL_GLContext context);
extern void glUnloadLibrary(_THIS);
extern SDL_GLContext glCreateContext(_THIS, SDL_Window *window);

#endif
