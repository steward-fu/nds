// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __AUDIO_NDS_H__
#define __AUDIO_NDS_H__

#include "../../SDL_internal.h"
#include "../SDL_sysaudio.h"

#define _THIS SDL_AudioDevice *this

struct SDL_PrivateAudioData {
    int audio_fd;
    int mixlen;
    Uint8 *mixbuf;
};

#endif
