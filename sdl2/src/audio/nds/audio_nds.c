// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/ioctl.h>
#include <sys/stat.h>

#include "../../SDL_internal.h"
#include "SDL_timer.h"
#include "SDL_audio.h"
#include "audio_nds.h"
#include "../SDL_audio_c.h"
#include "../SDL_audiodev_c.h"

static void nds_close_device(_THIS)
{
    SDL_free(this->hidden->mixbuf);
    this->hidden->mixbuf = NULL;

    SDL_free(this->hidden);
    this->hidden = NULL;
}

static int nds_open_device(_THIS, void *handle, const char *devname, int iscapture)
{
    this->hidden = (struct SDL_PrivateAudioData *)SDL_malloc((sizeof * this->hidden));

    if (this->hidden == NULL) {
        return SDL_OutOfMemory();
    }
    SDL_zerop(this->hidden);

    this->hidden->mixlen = this->spec.samples * 2 * this->spec.channels;
    this->hidden->mixbuf = (Uint8 *) SDL_malloc(this->hidden->mixlen);
    if (this->hidden->mixbuf == NULL) {
        return SDL_OutOfMemory();
    }

    return 0;
}

static void nds_play_device(_THIS)
{
}

static Uint8 *nds_get_device_buf(_THIS)
{
    return (this->hidden->mixbuf);
}

static int nds_Init(SDL_AudioDriverImpl *impl)
{
    if (impl == NULL) {
        return -1;
    }

    impl->OpenDevice = nds_open_device;
    impl->PlayDevice = nds_play_device;
    impl->GetDeviceBuf = nds_get_device_buf;
    impl->CloseDevice = nds_close_device;
    impl->OnlyHasDefaultOutputDevice = 1;
    return 1;
}

AudioBootStrap NDS_AudioDriver = {
    "NDS",
    "NDS Audio Driver",
    nds_Init,
    0
};

