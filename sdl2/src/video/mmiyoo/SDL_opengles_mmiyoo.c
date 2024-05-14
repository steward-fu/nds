/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2014 Sam Lantinga <slouken@libsdl.org>

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

#ifdef A30

#include "../../SDL_internal.h"

#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <time.h>

#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include "SDL_opengles_mmiyoo.h"
#include "SDL_video_mmiyoo.h"

#if 0
SDL_EGL_CreateContext_impl(MMIYOO)
SDL_EGL_SwapWindow_impl(MMIYOO)
SDL_EGL_MakeCurrent_impl(MMIYOO)
#endif

#define EGL_USE_PBUF 0

EGLConfig eglConfig = 0;
EGLDisplay eglDisplay = 0;
EGLContext eglContext = 0;
EGLSurface eglSurface = 0;

extern int fb_flip;
extern uint32_t *gl_mem;
extern int need_screen_rotation_helper;
extern SDL_Window *win;

int MMIYOO_GLES_LoadLibrary(_THIS, const char *path)
{
    return SDL_EGL_LoadLibrary(_this, path, EGL_DEFAULT_DISPLAY, 0);
}

void MMIYOO_GLES_DefaultProfileConfig(_THIS, int *mask, int *major, int *minor)
{
    *mask = SDL_GL_CONTEXT_PROFILE_ES;
    *major = 2;
    *minor = 0;
    printf(PREFIX"Build %s (%s)\n", __DATE__, __TIME__);
    printf(PREFIX"Set OpenGL ES v2.0\n");
}

SDL_GLContext MMIYOO_GLES_CreateContext(_THIS, SDL_Window *window)
{
    EGLint numConfigs = 0;
    EGLint majorVersion = 0;
    EGLint minorVersion = 0;
    EGLint configAttribs[] = {
#if EGL_USE_PBUF
        EGL_SURFACE_TYPE,    EGL_PBUFFER_BIT,
#else
        EGL_SURFACE_TYPE,    EGL_WINDOW_BIT,
#endif
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
        EGL_RED_SIZE,   8,
        EGL_GREEN_SIZE, 8,
        EGL_BLUE_SIZE,  8,
        EGL_ALPHA_SIZE, 8,
        EGL_NONE
    };
    EGLint contextAttribs[] = {
        EGL_CONTEXT_CLIENT_VERSION, 2,
        EGL_NONE
    };
#if EGL_USE_PBUF
    EGLint pbufferAttributes[] = {
        EGL_WIDTH,  REAL_W,
        EGL_HEIGHT, REAL_H,
        EGL_NONE
    };
#else
    EGLint windowAttributes[] = {
        EGL_RENDER_BUFFER, EGL_BACK_BUFFER,
        EGL_NONE
    };
#endif

    eglDisplay = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    eglInitialize(eglDisplay, &majorVersion, &minorVersion);
    eglChooseConfig(eglDisplay, configAttribs, &eglConfig, 1, &numConfigs);
    eglContext = eglCreateContext(eglDisplay, eglConfig, EGL_NO_CONTEXT, contextAttribs);
    if (eglContext == EGL_NO_CONTEXT) {
        printf(PREFIX"Failed to create EGL eglContext\n");
        return NULL;
    }

#if EGL_USE_PBUF
    printf(PREFIX"Use EGL PBuffer\n");
    eglSurface = eglCreatePbufferSurface(eglDisplay, eglConfig, pbufferAttributes);
#else
    printf(PREFIX"Use EGL Window\n");
    eglSurface = eglCreateWindowSurface(eglDisplay, eglConfig, 0, windowAttributes);
#endif
    if (eglSurface == EGL_NO_SURFACE) {
        printf(PREFIX"Failed to create EGL eglSurface\n");
        return NULL;
    }

    eglMakeCurrent(eglDisplay, eglSurface, eglSurface, eglContext);
    printf(PREFIX"Created EGL Surface successfully\n");
    return eglContext;
}

int MMIYOO_GLES_SwapWindow(_THIS, SDL_Window *window)
{
    static int fps = 0;
#if EGL_USE_PBUF
    int w = need_screen_rotation_helper ? REAL_W : LCD_W;
    int h = need_screen_rotation_helper ? REAL_H : LCD_H;
#endif

    eglSwapBuffers(eglDisplay, eglSurface);

#if EGL_USE_PBUF
    if ((fps % 3) == 0) {
        //glReadPixels(0, 0, w, h, GL_RGBA, GL_UNSIGNED_BYTE, gl_mem);
    }
#endif
    fps += 1;
    return 0;
}

int MMIYOO_GLES_MakeCurrent(_THIS, SDL_Window *window, SDL_GLContext eglContext)
{
    return 0;
}

#endif

