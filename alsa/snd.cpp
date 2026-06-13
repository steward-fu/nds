// LGPL-2.1 License
// (C) 2026 Steward Fu <steward.fu@gmail.com>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <alsa/output.h>
#include <alsa/input.h>
#include <alsa/conf.h>
#include <alsa/global.h>
#include <alsa/timer.h>
#include <alsa/pcm.h>
#include <pulse/pulseaudio.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "snd.h"
#include "hook.h"

extern nds_hook myhook;

using namespace std::chrono_literals;

#if defined(UT)
TEST_GROUP(alsa);

TEST_SETUP(alsa)
{
}

TEST_TEAR_DOWN(alsa)
{
}
#endif

ds_audio& ds_audio::instance() {
    static ds_audio inst;

    return inst;
}

static void prehook_audio_buffer_force_feed(audio_struct *audio)
{
    int iVar2 = 0;
    uint32_t uVar1 = 0;
    snd_pcm_sframes_t frames_available = 0;
    snd_pcm_t *pcm_handle = reinterpret_cast<snd_pcm_t *>(SND_PCM_STREAM_PLAYBACK);

    trace(PRE_SND"%s|audio=%p\n", __func__, audio);

    uVar1 = snd_pcm_avail(pcm_handle);
    iVar2 = snd_pcm_writei(pcm_handle, audio, uVar1);

    do {
        if (-1 < iVar2) {
            break;
        }

        snd_pcm_prepare(pcm_handle);
    } while(0);
}

#if defined(UT)
TEST(alsa, prehook_audio_buffer_force_feed)
{
    prehook_audio_buffer_force_feed(NULL);
    TEST_PASS();
}
#endif

static void prehook_adpcm_decode_block(spu_channel_struct *channel)
{
    uint32_t uVar1 = 0;
    uint32_t uVar2 = 0;
    uint32_t uVar3 = 0;
    uint32_t uVar4 = 0;
    uint32_t sample_delta = 0;
    uint32_t current_index = 0;
    uint32_t adpcm_data_x8 = 0;
    uint32_t adpcm_cache_block_offset = 0;
    uint32_t adpcm_step = 0;
    uint32_t uVar5 = 0;
    int32_t sample = 0;
    int16_t *psVar6 = NULL;
    int16_t *psVar7 = NULL;
    int16_t *adpcm_step_table = NULL;
    int8_t *adpcm_index_step_table = NULL;

    trace(PRE_SND"%s|channel=%p\n", __func__, channel);

    adpcm_step_table = (int16_t *)myhook.var.adpcm.step_table;
    adpcm_index_step_table = (int8_t *)myhook.var.adpcm.index_step_table;
    do {
        if (!channel) {
            error(PRE_SND"%s|channel is null\n", __func__);
            break;
        }

        uVar3 = channel->adpcm_cache_block_offset;
        uVar1 = (uint32_t)(channel->adpcm_current_index);
        sample_delta = (uint32_t)(channel->adpcm_sample);
        uVar2 = *((uint32_t *)(channel->samples + (uVar3 >> 1)));
        channel->adpcm_cache_block_offset = uVar3 + 8;
        psVar7 = channel->adpcm_sample_cache + (uVar3 & 0x3f);
        do {
            uVar5 = (uint32_t)adpcm_step_table[uVar1];
            uVar4 = uVar5 >> 3;
            if ((uVar2 & 1) != 0) {
                uVar4 = uVar4 + (uVar5 >> 2);
            }
            if ((uVar2 & 2) != 0) {
                uVar4 = uVar4 + (uVar5 >> 1);
            }
            if ((uVar2 & 4) != 0) {
                uVar4 = uVar4 + uVar5;
            }
            if ((uVar2 & 8) == 0) {
                sample_delta = sample_delta - uVar4;
                if ((int)sample_delta < -0x7fff) {
                    sample_delta = 0xffff8001;
                }
            }
            else {
                sample_delta = sample_delta + uVar4;
                if (0x7ffe < (int)sample_delta) {
                    sample_delta = 0x7fff;
                }
            }
            uVar1 = uVar1 + (int)(adpcm_index_step_table[uVar2 & 7]);
            if (0x58 < uVar1) {
                if ((int)uVar1 < 0) {
                    uVar1 = 0;
                }
                else {
                    uVar1 = 0x58;
                }
            }
            uVar2 = uVar2 >> 4;
            psVar6 = psVar7 + 1;
            *psVar7 = (int16_t)sample_delta;
            psVar7 = psVar6;
        } while (channel->adpcm_sample_cache + (uVar3 & 0x3f) + 8 != psVar6);
        channel->adpcm_sample = (int16_t)sample_delta;
        channel->adpcm_current_index = (uint8_t)uVar1;
    } while(0);
}

#if defined(UT)
TEST(alsa, prehook_adpcm_decode_block)
{
    prehook_adpcm_decode_block(NULL);
    TEST_PASS();
}
#endif

#if defined(UT)
TEST(alsa, open_dsp)
{
    TEST_ASSERT_EQUAL_INT(-1, open_dsp());
}
#endif

static void* audio_handler(void *param)
{
    constexpr size_t PCM_BUF_SIZE = SND_SAMPLE * 2 * SND_CHANNEL;

    size_t pos = 0;
    size_t len = PCM_BUF_SIZE;
    ds_audio *p = reinterpret_cast<ds_audio *>(param);
    unique_ptr<uint8_t[]> buf = make_unique<uint8_t[]>(len);

    trace(PRE_SND"%s|param=%p, len=%ld\n", __func__, param, len);

#if !defined(UT)
    while (p && p->is_running()) {
        size_t v = 0;
        auto r = p->dequeue(&buf[pos], len);

        if (r.has_value() && (v = r.value()) > 0) {
            pos += v;
            len -= v;
            if (len == 0) {
                pos = 0;
                len = PCM_BUF_SIZE;
                p->stream_audio(&buf[0], len);
            }
        }

        this_thread::sleep_for(10us);
    }

    pthread_exit(NULL);
#endif

    return nullptr;
}

#if defined(UT)
TEST(alsa, audio_handler)
{
    TEST_ASSERT_EQUAL_INT(NULL, audio_handler(NULL));
}
#endif

bool ds_audio::start() {
    trace(PRE_SND"%s\n", __func__);

    running = true;
    queue = make_unique<ds_queue>(SND_SAMPLE * 32);
    pulse = make_unique<hs_pulse>();
    worker = thread(audio_handler, this);

    return running;
}

bool ds_audio::stop() {
    trace(PRE_SND"%s\n", __func__);

    running = false;
    if (worker.joinable()) {
        worker.join();
    }

    return true;
}

snd_pcm_sframes_t snd_pcm_avail(snd_pcm_t *pcm)
{
    trace(PRE_SND"%s|pcm=%ld\n", __func__, (uintptr_t)pcm);

    if ((uintptr_t)pcm == SND_PCM_STREAM_CAPTURE) {
        trace(PRE_SND"%s|use_mic=%d\n", __func__, myhook.use_mic);
        return 0;
    }

    return 2048;
}

#if defined(UT)
TEST(alsa, snd_pcm_avail)
{
    TEST_ASSERT_EQUAL_INT(2048, snd_pcm_avail(NULL));
}
#endif

int snd_pcm_hw_params(snd_pcm_t *pcm, snd_pcm_hw_params_t *params)
{
    trace(PRE_SND"%s\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params(NULL, NULL));
}
#endif

int snd_pcm_hw_params_any(snd_pcm_t *pcm, snd_pcm_hw_params_t *params)
{
    trace(PRE_SND"%s\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_any)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_any(NULL, NULL));
}
#endif

void snd_pcm_hw_params_free(snd_pcm_hw_params_t *obj)
{
    trace(PRE_SND"%s\n", __func__);
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_free)
{
    snd_pcm_hw_params_free(NULL);
    TEST_PASS();
}
#endif

int snd_pcm_hw_params_malloc(snd_pcm_hw_params_t **ptr)
{
    trace(PRE_SND"%s\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_malloc)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_malloc(NULL));
}
#endif

int snd_pcm_hw_params_set_access(
    snd_pcm_t *pcm,
    snd_pcm_hw_params_t *params,
    snd_pcm_access_t _access)
{
    trace(PRE_SND"%s\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_set_access)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_access(NULL, NULL, 0));
}
#endif

int snd_pcm_hw_params_set_buffer_size_near(
    snd_pcm_t *pcm,
    snd_pcm_hw_params_t *params,
    snd_pcm_uframes_t *val)
{
    trace(PRE_SND"%s\n", __func__);

    *val = SND_SAMPLE * 2 * SND_CHANNEL;
    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_set_buffer_size_near)
{
    snd_pcm_uframes_t v = 0;

    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_buffer_size_near(NULL, NULL, &v));
    TEST_ASSERT_EQUAL_INT(SND_SAMPLES * 2 * SND_CHANNELS, v);
}
#endif

int snd_pcm_hw_params_set_channels(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, unsigned int val)
{
    trace(PRE_SND"%s\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_set_channels)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_channels(NULL, NULL, 0));
}
#endif

int snd_pcm_hw_params_set_format(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_format_t val)
{
    trace(PRE_SND"%s\n", __func__);

    if (val != SND_PCM_FORMAT_S16_LE) {
        return -1;
    }
    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_set_format)
{
    TEST_ASSERT_EQUAL_INT(-1, snd_pcm_hw_params_set_format(NULL, NULL, SND_PCM_FORMAT_S16_LE + 1));
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_format(NULL, NULL, SND_PCM_FORMAT_S16_LE));
}
#endif

int snd_pcm_hw_params_set_period_size_near(
    snd_pcm_t *pcm,
    snd_pcm_hw_params_t *params,
    snd_pcm_uframes_t *val,
    int *dir)
{
    trace(PRE_SND"%s\n", __func__);

    *val = SND_PERIOD;
    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_set_period_size_near)
{
    snd_pcm_uframes_t v = 0;

    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_period_size_near(NULL, NULL, &v, NULL));
    TEST_ASSERT_EQUAL_INT(SND_PERIOD, v);
}
#endif

int snd_pcm_hw_params_set_rate_near(
    snd_pcm_t *pcm,
    snd_pcm_hw_params_t *params,
    unsigned int *val,
    int *dir)
{
    trace(PRE_SND"%s|pcm=%p, params=%p, val=%p, dir=%p\n", __func__, pcm, params, val, dir);

    *val = SND_FREQ;
    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_set_rate_near)
{
    unsigned int v = 0;

    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_rate_near(NULL, NULL, &v, NULL));
    TEST_ASSERT_EQUAL_INT(SND_FREQ, v);
}
#endif

int snd_pcm_open(snd_pcm_t **pcm, const char *name, snd_pcm_stream_t stream, int mode)
{
    trace(PRE_SND
        "%s|pcm=%p, name=%s, stream=%d, mode=%d\n",
        __func__,
        pcm,
        name,
        stream,
        mode
    );

    if (stream != SND_PCM_STREAM_PLAYBACK) {
        return -1;
    }

    if (pcm && *pcm) {
        *pcm = (struct _snd_pcm *)stream;
    }
    return SND_PCM_STREAM_PLAYBACK;
}

#if defined(UT)
TEST(alsa, snd_pcm_open)
{
    TEST_ASSERT_EQUAL_INT(-1, snd_pcm_open(NULL, NULL, SND_PCM_STREAM_PLAYBACK + 1, 0));
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_open(NULL, NULL, SND_PCM_STREAM_PLAYBACK, 0));
}
#endif

int snd_pcm_prepare(snd_pcm_t *pcm)
{
    trace(PRE_SND"%s|pcm=%ld\n", __func__, (uintptr_t)pcm);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_prepare)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_prepare(NULL));
}
#endif

snd_pcm_sframes_t snd_pcm_readi(snd_pcm_t *pcm, void *buf, snd_pcm_uframes_t size)
{
    trace(PRE_SND"%s|pcm=%ld, buf=%p, size=%ld\n", __func__, (uintptr_t)pcm, buf, size);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_readi)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_readi(NULL, NULL, 0));
}
#endif

int snd_pcm_recover(snd_pcm_t *pcm, int err, int silent)
{
    trace(PRE_SND"%s|pcm=%p, err=%d, silent=%d\n", __func__, pcm, err, silent);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_recover)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_recover(NULL, 0, 0));
}
#endif

static void prehook_audio_synchronous_update(
    audio_struct *audio,
    uint32_t non_blocking,
    uint32_t audio_capture)
{
    trace(PRE_SND"%s|audio=%p, non_blocking=%d, audio_capture=%d\n",
        __func__,
        audio,
        non_blocking,
        audio_capture
    );

    ds_audio::instance().enqueue(
        reinterpret_cast<const uint8_t *>(audio->buffer),
        audio->buffer_index * SND_CHANNEL
    );

    audio->buffer_index = 0;
}

#if defined(UT)
TEST(alsa, prehook_audio_synchronous_update)
{
}
#endif

int snd_pcm_start(snd_pcm_t *pcm)
{
    trace(PRE_SND"%s|pcm=%p\n", __func__, pcm);

    if (pcm) {
        return 0;
    }

    add_prehook(
        reinterpret_cast<void *>(myhook.fun.spu_adpcm_decode_block),
        reinterpret_cast<void *>(prehook_adpcm_decode_block),
        NULL
    );

    add_prehook(
        reinterpret_cast<void *>(myhook.fun.audio_synchronous_update),
        reinterpret_cast<void *>(prehook_audio_synchronous_update),
        NULL
    );

    add_prehook(
        reinterpret_cast<void *>(myhook.fun.audio_buffer_force_feed),
        reinterpret_cast<void *>(prehook_audio_buffer_force_feed),
        NULL
    );

    ds_audio::instance().start();

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_start)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_start(NULL));
}
#endif

int snd_pcm_close(snd_pcm_t *pcm)
{
    trace(PRE_SND"%s|pcm=%p\n", __func__, pcm);

    ds_audio::instance().stop();

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_close)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_close(NULL));
}
#endif

int snd_pcm_sw_params(snd_pcm_t *pcm, snd_pcm_sw_params_t *params)
{
    trace(PRE_SND"%s|pcm=%p, params=%p\n", __func__, pcm, params);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_sw_params)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_sw_params(NULL, NULL));
}
#endif

int snd_pcm_sw_params_current(snd_pcm_t *pcm, snd_pcm_sw_params_t *params)
{
    trace(PRE_SND"%s|pcm=%p, params=%p\n", __func__, pcm, params);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_sw_params_current)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_sw_params_current(NULL, NULL));
}
#endif

void snd_pcm_sw_params_free(snd_pcm_sw_params_t *obj)
{
    trace(PRE_SND"%s|obj=%p\n", __func__, obj);
}

#if defined(UT)
TEST(alsa, snd_pcm_sw_params_free)
{
    snd_pcm_sw_params_free(NULL);
    TEST_PASS();
}
#endif

int snd_pcm_sw_params_malloc(snd_pcm_sw_params_t **ptr)
{
    trace(PRE_SND"%s|ptr=%p\n", __func__, ptr);
    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_sw_params_malloc)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_sw_params_malloc(NULL));
}
#endif

snd_pcm_sframes_t snd_pcm_writei(snd_pcm_t *pcm, const void *buf, snd_pcm_uframes_t size)
{
    trace(PRE_SND"%s|pcm=%p, buf=%p, size=%ld\n", __func__, pcm, buf, size);

    if (size > 1) {
        ds_audio::instance().enqueue(
            reinterpret_cast<const uint8_t *>(buf),
            size * 2 * SND_CHANNEL
        );
    }

    return size;
}

#if defined(UT)
TEST(alsa, snd_pcm_writei)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_writei(NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(128, snd_pcm_writei((void *)0xdead, (void *)0xdead, 128));
}
#endif

