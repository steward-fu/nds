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

#include "SDL_video_mmiyoo.h"
#include "SDL_opengles_mmiyoo.h"

static EGLDisplay display=0;
static EGLContext context=0;
static EGLSurface surface=0;
static EGLConfig config=0;
static void *ppFunc=NULL;
static void *pfb_idx=NULL;
static void *pfb_vaddr=NULL;

EGLBoolean eglUpdateBufferSettings(EGLDisplay display, EGLSurface surface, void *pFunc, void *fb_idx, void *fb_vaddr);

int glLoadLibrary(_THIS, const char *name)
{
    return 0;
}

void *glGetProcAddress(_THIS, const char *proc)
{
    return eglGetProcAddress(proc);
}

void glUnloadLibrary(_THIS)
{
    eglTerminate(_this->gl_data->display);
}

SDL_GLContext glCreateContext(_THIS, SDL_Window *window)
{
    EGLint i=0;
    EGLint val=0;
    EGLBoolean rc=0;
    EGLConfig *cfgs=NULL;
    EGLint numConfigs=0;
    EGLint majorVersion=0;
    EGLint minorVersion=0;
    struct {
        EGLint client_version[2];
        EGLint none;
    } egl_ctx_attr = {
        .client_version = { EGL_CONTEXT_CLIENT_VERSION, 2 },
        .none = EGL_NONE
    };

    struct {
        EGLint render_buffer[2];
        EGLint none;
    } egl_surf_attr = {
        .render_buffer = { EGL_RENDER_BUFFER, EGL_BACK_BUFFER },
        .none = EGL_NONE
    };

    display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    eglInitialize(display, &majorVersion, &minorVersion);
    eglGetConfigs(display, NULL, 0, &numConfigs);
    printf(PREFIX"sdl2 eglGetConfigs %d\n", numConfigs);
    
    cfgs = SDL_malloc(numConfigs * sizeof(EGLConfig));
    if(cfgs == NULL) {
        return NULL;
    }

    rc = eglGetConfigs(display, cfgs, numConfigs, &numConfigs);
    if(rc != EGL_TRUE) {
        SDL_free(cfgs);
        return NULL;
    }

    for(i = 0; i < numConfigs; i++) {
        eglGetConfigAttrib(display, cfgs[i], EGL_SURFACE_TYPE, &val);
        if(!(val & EGL_WINDOW_BIT)) {
            continue;
        }

        eglGetConfigAttrib(display, cfgs[i], EGL_RENDERABLE_TYPE, &val);
        if(!(val & EGL_OPENGL_ES2_BIT)) {
            continue;
        }

        eglGetConfigAttrib(display, cfgs[i], EGL_DEPTH_SIZE, &val);
        if(val == 0) {
            continue;
        }

        config = cfgs[i];
        printf(PREFIX"sdl2 set config %d\n", i);
        break;
    }
    SDL_free(cfgs);

    printf(PREFIX"sdl2 eglCreateContext\n");
    context = eglCreateContext(display, config, EGL_NO_CONTEXT, (EGLint *)&egl_ctx_attr);
    if(context == EGL_NO_CONTEXT) {
        return NULL;
    }

    printf(PREFIX"sdl2 eglCreateWindowSurface\n");
    surface = eglCreateWindowSurface(display, config, 0, (EGLint*)&egl_surf_attr);
    if(surface == EGL_NO_SURFACE) {
        return NULL;
    }

    printf(PREFIX"sdl2 eglMakeCurrent\n");
    eglMakeCurrent(display, surface, surface, context);
    
    printf(PREFIX"sdl2 %s, %p %p %p\n", __func__, ppFunc, pfb_idx, pfb_vaddr);
    eglUpdateBufferSettings(display, surface, ppFunc, pfb_idx, pfb_vaddr);
    return context;
}

int glSetSwapInterval(_THIS, int interval)
{
    return 0;
}

int glUpdateBufferSettings(void *pFunc, void *fb_idx, void *fb_vaddr)
{
    ppFunc = pFunc;
    pfb_idx = fb_idx;
    pfb_vaddr = fb_vaddr;
    return 0;
}

int glSwapWindow(_THIS, SDL_Window *window)
{
    return eglSwapBuffers(display, surface) == EGL_TRUE ? 0 : -1;
}

int glMakeCurrent(_THIS, SDL_Window *window, SDL_GLContext context)
{
    return 0;
}

void glDeleteContext(_THIS, SDL_GLContext context)
{
}

#endif
