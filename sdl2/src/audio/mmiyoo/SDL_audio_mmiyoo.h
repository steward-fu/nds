/*
  Special customized version for the DraStic emulator that runs on
  Miyoo Mini (Plus), TRIMUI-SMART and Miyoo A30 handhelds.

  Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>
  Copyright (C) 2022-2024 Steward Fu <steward.fu@gmail.com>

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

#ifndef __SDL_AUDIO_MMIYOO_H__
#define __SDL_AUDIO_MMIYOO_H__

#include "../../SDL_internal.h"
#include "../SDL_sysaudio.h"

#define _THIS   SDL_AudioDevice *this

struct SDL_PrivateAudioData {
    /* The file descriptor for the audio device */
    int audio_fd;

    /* Raw mixing buffer */
    Uint8 *mixbuf;
    int mixlen;
};
#define FUDGE_TICKS 10      /* The scheduler overhead ticks per frame */

#endif

