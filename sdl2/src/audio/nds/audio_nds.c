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

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "log.h"
#include "cfg.h"

#include "../../SDL_internal.h"
#include "SDL_timer.h"
#include "SDL_audio.h"
#include "audio_nds.h"
#include "../SDL_audio_c.h"
#include "../SDL_audiodev_c.h"

#if defined(UT)
TEST_GROUP(sdl2_audio);

TEST_SETUP(sdl2_audio)
{
    debug(SDL"call %s()\n", __func__);
}

TEST_TEAR_DOWN(sdl2_audio)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

static void nds_close_device(_THIS)
{
    debug(SDL"call %s()\n", __func__);

    if (this && this->hidden->mixbuf) {
        SDL_free(this->hidden->mixbuf);
        this->hidden->mixbuf = NULL;
    }

    if (this && this->hidden) {
        SDL_free(this->hidden);
        this->hidden = NULL;
    }
}

#if defined(UT)
TEST(sdl2_audio, nds_close_device)
{
    nds_close_device(NULL);
    TEST_PASS();
}
#endif

static int nds_open_device(_THIS, void *handle, const char *devname, int iscapture)
{
    debug(SDL"call %s()\n", __func__);

    if (!this) {
        error(SDL"this is null\n");
        return -1;
    }

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

#if defined(UT)
TEST(sdl2_audio, nds_open_device)
{
    TEST_ASSERT_EQUAL_INT(-1, nds_open_device(NULL, NULL, NULL, 0));
}
#endif

static void nds_play_device(_THIS)
{
    debug(SDL"call %s()\n", __func__);
}

#if defined(UT)
TEST(sdl2_audio, nds_play_device)
{
    nds_play_device(NULL);
    TEST_PASS();
}
#endif

static Uint8 *nds_get_device_buf(_THIS)
{
    debug(SDL"call %s()\n", __func__);

    if (this)  {
        return (this->hidden->mixbuf);
    }
    return NULL;
}

#if defined(UT)
TEST(sdl2_audio, nds_get_device_buf)
{
    TEST_ASSERT_NULL(nds_get_device_buf(NULL));
}
#endif

static int nds_audio_init(SDL_AudioDriverImpl *impl)
{
    debug(SDL"call %s()\n", __func__);

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

#if defined(UT)
TEST(sdl2_audio, nds_audio_init)
{
    TEST_ASSERT_EQUAL_INT(-1, nds_audio_init(NULL));
}
#endif

AudioBootStrap NDS_AudioDriver = {
    "NDS",
    "NDS Audio Driver",
    nds_audio_init,
    0
};

#if defined(UT)
TEST_GROUP_RUNNER(sdl2_audio)
{
    RUN_TEST_CASE(sdl2_audio, nds_close_device)
    RUN_TEST_CASE(sdl2_audio, nds_open_device)
    RUN_TEST_CASE(sdl2_audio, nds_play_device)
    RUN_TEST_CASE(sdl2_audio, nds_get_device_buf)
    RUN_TEST_CASE(sdl2_audio, nds_audio_init)
}
#endif

