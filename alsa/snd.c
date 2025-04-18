// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <syslog.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <sys/time.h>
#include <sys/ioctl.h>
#include <alsa/output.h>
#include <alsa/input.h>
#include <alsa/conf.h>
#include <alsa/global.h>
#include <alsa/timer.h>
#include <alsa/pcm.h>
#include <linux/rtc.h>
#include <linux/soundcard.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "cfg.h"
#include "log.h"
#include "snd.h"
#include "hook.h"
#include "cfg.pb.h"

nds_alsa myalsa = { 0 };

extern nds_hook myhook;
extern nds_pb_cfg mycfg;

static int init_queue(queue_t *q, size_t size);
static int put_queue(queue_t *q, uint8_t *buf, size_t size);
static int quit_queue(queue_t *q);

#if defined(UT)
TEST_GROUP(alsa_snd);

TEST_SETUP(alsa_snd)
{
    debug(SDL"call %s()\n", __func__);
}

TEST_TEAR_DOWN(alsa_snd)
{
    debug(SDL"call %s()\n", __func__);
}
#endif

static void adpcm_decode_block(spu_channel_struct *channel)
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

    debug(SND"call %s()\n", __func__);

    adpcm_step_table = (int16_t *)myhook.var.adpcm.step_table;
    adpcm_index_step_table = (int8_t *)myhook.var.adpcm.index_step_table;
    do {
        if (!channel) {
            error(SND"invalid channel\n");
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
TEST(alsa_snd, adpcm_decode_block)
{
    adpcm_decode_block(NULL);
    TEST_PASS();
}
#endif

#if defined(MIYOO_A30) || defined(UT)
static int open_dsp(void)
{
    int arg = 0;
    int vol = 0;

    debug(SND"call %s()\n", __func__);

    if (myalsa.dsp.fd > 0) {
        close(myalsa.dsp.fd);
        error(SND"re-opened "DSP_DEV"\n");
    }

    myalsa.dsp.fd = open(DSP_DEV, O_WRONLY);
    if (myalsa.dsp.fd < 0) {
        error(SND"failed to open "DSP_DEV"\n");
        return -1;
    }

    if (system("amixer set \'DACL Mixer AIF1DA0L\' on") < 0) {
        error(SND"failed to set amixer AIF1DA0L\n");
    }

    if (system("amixer set \'DACL Mixer AIF1DA0R\' on") < 0) {
        error(SND"failed to set amixer AIF1DA0R\n");
    }

    myalsa.vol.mul = 1;
    myalsa.vol.ptr = (uint32_t *)(&myalsa.mem.ptr[0xc00 + 0x258]);
    *myalsa.vol.ptr = ((myalsa.vol.base + (vol << myalsa.vol.mul)) << 8) | (myalsa.vol.base + (vol << myalsa.vol.mul));

    arg = 16;
    if (ioctl(myalsa.dsp.fd, SOUND_PCM_WRITE_BITS, &arg) < 0) {
        error(SND"failed to set PCM bits\n");
        return -1;
    }

    arg = PCM_CHANNELS;
    if (ioctl(myalsa.dsp.fd, SOUND_PCM_WRITE_CHANNELS, &arg) < 0) {
        error(SND"failed to set PCM channels\n");
        return -1;
    }

    arg = PCM_FREQ;
    if (ioctl(myalsa.dsp.fd, SOUND_PCM_WRITE_RATE, &arg) < 0) {
        error(SND"failed to set PCM rate\n");
        return -1;
    }
    return 0;
}
#endif

#if defined(UT)
TEST(alsa_snd, open_dsp)
{
    TEST_ASSERT_EQUAL_INT(-1, open_dsp());
}
#endif

static int init_queue(queue_t *q, size_t s)
{
    debug(SND"call %s()\n", __func__);

    q->buf = (uint8_t *)malloc(s);
    q->size = s;
    q->rsize = q->wsize = 0;
    pthread_mutex_init(&q->lock, NULL);
    return 0;
}

#if defined(UT)
TEST(alsa_snd, init_queue)
{
    queue_t t = { 0 };
    const int size = 1024;

    TEST_ASSERT_EQUAL_INT(0, init_queue(&t, size));
    TEST_ASSERT_NOT_NULL(t.buf);
    TEST_ASSERT_EQUAL_INT(0, t.rsize);
    TEST_ASSERT_EQUAL_INT(0, t.wsize);
    TEST_ASSERT_EQUAL_INT(size, t.size);
    TEST_ASSERT_EQUAL_INT(0, quit_queue(&t));
}
#endif

static int quit_queue(queue_t *q)
{
    debug(SND"call %s()\n", __func__);

    if (q->buf) {
        free(q->buf);
        q->buf = NULL;
    }
    pthread_mutex_destroy(&q->lock);
    return 0;
}

#if defined(UT)
TEST(alsa_snd, quit_queue)
{
    queue_t t = { 0 };
    const int size = 1024;

    TEST_ASSERT_EQUAL_INT(0, init_queue(&t, size));
    TEST_ASSERT_NOT_NULL(t.buf);
    TEST_ASSERT_EQUAL_INT(0, quit_queue(&t));
    TEST_ASSERT_NULL(t.buf);
}
#endif

static int get_available_rsize(queue_t *q)
{
    debug(SND"call %s()\n", __func__);

    if (q->rsize == q->wsize) {
        return 0;
    }
    else if(q->rsize < q->wsize){
        return q->wsize - q->rsize;
    }
    return (q->size - q->rsize) + q->wsize;
}

#if defined(UT)
TEST(alsa_snd, get_available_rsize)
{
    queue_t t = { 0 };
    char buf[128] = { 0 };
    const int size = 1024;

    TEST_ASSERT_EQUAL_INT(0, init_queue(&t, size));
    TEST_ASSERT_NOT_NULL(t.buf);

    TEST_ASSERT_EQUAL_INT(sizeof(buf), put_queue(&t, buf, sizeof(buf)));
    TEST_ASSERT_EQUAL_INT(sizeof(buf), get_available_rsize(&t));

    TEST_ASSERT_EQUAL_INT(0, quit_queue(&t));
    TEST_ASSERT_NULL(t.buf);
}
#endif

static int get_available_wsize(queue_t *q)
{
    debug(SND"call %s()\n", __func__);

    if (q->wsize == q->rsize) {
        return q->size;
    }
    else if (q->wsize < q->rsize) {
        return q->rsize - q->wsize;
    }
    return (q->size - q->wsize) + q->rsize;
}

#if defined(UT)
TEST(alsa_snd, get_available_wsize)
{
    queue_t t = { 0 };
    char buf[128] = { 0 };
    const int size = 1024;

    TEST_ASSERT_EQUAL_INT(0, init_queue(&t, size));
    TEST_ASSERT_NOT_NULL(t.buf);

    TEST_ASSERT_EQUAL_INT(sizeof(buf), put_queue(&t, buf, sizeof(buf)));
    TEST_ASSERT_EQUAL_INT(size - sizeof(buf), get_available_wsize(&t));

    TEST_ASSERT_EQUAL_INT(0, quit_queue(&t));
    TEST_ASSERT_NULL(t.buf);
}
#endif

static int put_queue(queue_t *q, uint8_t *buf, size_t size)
{
    int r = 0;
    int tmp = 0;
    int avai = 0;

    debug(SND"call %s()\n", __func__);

    if (!q || !buf || (size < 0)) {
        error(SND"invalid parameters(0x%x, 0x%x, 0x%x)\n", q, buf, size);
        return -1;
    }

    if (size > q->size) {
        error(SND"buf is too large(%ld)\n", size);
        return -1;
    }

    if (size == 0) {
        return 0;
    }

    pthread_mutex_lock(&q->lock);
    avai = get_available_wsize(q);
    if (size > avai) {
        size = avai;
    }
    r = size;

    if (size > 0) {
        if ((q->wsize >= q->rsize) && ((q->wsize + size) > q->size)) {
            tmp = q->size - q->wsize;
            size-= tmp;
#if defined(UT) || defined(MIYOO_FLIP) || defined(UIDBG)
            memcpy(&q->buf[q->wsize], buf, tmp);
            memcpy(q->buf, &buf[tmp], size);
#else
            neon_memcpy(&q->buf[q->wsize], buf, tmp);
            neon_memcpy(q->buf, &buf[tmp], size);
#endif
            q->wsize = size;
        }
        else {
#if defined(UT) || defined(MIYOO_FLIP) || defined(UIDBG)
            memcpy(&q->buf[q->wsize], buf, size);
#else
            neon_memcpy(&q->buf[q->wsize], buf, size);
#endif
            q->wsize += size;
        }
    }
    pthread_mutex_unlock(&q->lock);
    return r;
}

#if defined(UT)
TEST(alsa_snd, put_queue)
{
    queue_t t = { 0 };
    char buf[128] = { 0 };
    const int size = 1024;

    TEST_ASSERT_EQUAL_INT(0, init_queue(&t, size));
    TEST_ASSERT_NOT_NULL(t.buf);

    TEST_ASSERT_EQUAL_INT(-1, put_queue(NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(-1, put_queue(&t, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, put_queue(&t, buf, 0));

    TEST_ASSERT_EQUAL_INT(sizeof(buf), put_queue(&t, buf, sizeof(buf)));
    TEST_ASSERT_EQUAL_INT(sizeof(buf), put_queue(&t, buf, sizeof(buf)));

    TEST_ASSERT_EQUAL_INT(0, quit_queue(&t));
    TEST_ASSERT_NULL(t.buf);
}
#endif

static size_t get_queue(queue_t *q, uint8_t *buf, size_t max_size)
{
    int r = 0;
    int tmp = 0;
    int avai = 0;
    int size = max_size;

    debug(SND"call %s()\n", __func__);

    if (!q || !buf || (max_size < 0)) {
        error(SND"invalid parameters(0x%x, 0x%x, 0x%x)\n", q, buf, size);
        return -1;
    }

    if (max_size == 0) {
        return 0;
    }

    pthread_mutex_lock(&q->lock);
    avai = get_available_rsize(q);
    if (size > avai) {
        size = avai;
    }
    r = size;

    if (size > 0) {
        if ((q->rsize > q->wsize) && (q->rsize + size) > q->size) {
            tmp = q->size - q->rsize;
            size-= tmp;
#if defined(UT) || defined(MIYOO_FLIP) || defined(UIDBG)
            memcpy(buf, &q->buf[q->rsize], tmp);
            memcpy(&buf[tmp], q->buf, size);
#else
            neon_memcpy(buf, &q->buf[q->rsize], tmp);
            neon_memcpy(&buf[tmp], q->buf, size);
#endif
            q->rsize = size;
        }
        else {
#if defined(UT) || defined(MIYOO_FLIP) || defined(UIDBG)
            memcpy(buf, &q->buf[q->rsize], size);
#else
            neon_memcpy(buf, &q->buf[q->rsize], size);
#endif
            q->rsize+= size;
        }
    }
    pthread_mutex_unlock(&q->lock);
    return r;
}

#if defined(UT)
TEST(alsa_snd, get_queue)
{
    queue_t t = { 0 };
    char buf[128] = { 0 };
    const int size = 1024;

    TEST_ASSERT_EQUAL_INT(0, init_queue(&t, size));
    TEST_ASSERT_NOT_NULL(t.buf);

    TEST_ASSERT_EQUAL_INT(-1, get_queue(NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(-1, get_queue(&t, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, get_queue(&t, buf, 0));

    TEST_ASSERT_EQUAL_INT(0, get_queue(&t, buf, sizeof(buf)));
    TEST_ASSERT_EQUAL_INT(sizeof(buf), put_queue(&t, buf, sizeof(buf)));
    TEST_ASSERT_EQUAL_INT(sizeof(buf), get_queue(&t, buf, sizeof(buf)));

    TEST_ASSERT_EQUAL_INT(0, quit_queue(&t));
    TEST_ASSERT_NULL(t.buf);
}
#endif

static void *alsa_snd_handler(void *threadid)
{
#if defined(MIYOO_MINI)
    MI_AUDIO_Frame_t frm = { 0 };
#endif

#if defined(MIYOO_A30)
    int chk_cnt = 0;
#endif

    int r = 0;
    int idx = 0;
    int len = myalsa.pcm.len;

    debug(SND"%s()++\n", __func__);

#if defined(UT)
    return NULL;
#endif

    myalsa.pcm.ready = 1;
    while (myalsa.pcm.ready) {
        r = get_queue(&myalsa.queue, &myalsa.pcm.buf[idx], len);
        if (r > 0) {
            idx+= r;
            len-= r;
            if (len == 0) {
                idx = 0;
                len = myalsa.pcm.len;
#if defined(MIYOO_MINI)
                frm.eBitwidth = myalsa.mi.get_attr.eBitwidth;
                frm.eSoundmode = myalsa.mi.get_attr.eSoundmode;
                frm.u32Len = myalsa.pcm.len;
                frm.apVirAddr[0] = myalsa.pcm.buf;
                frm.apVirAddr[1] = NULL;
                MI_AO_SendFrame(myalsa.mi.dev, myalsa.mi.channel, &frm, 1);
#endif

#if defined(MIYOO_A30)
                write(myalsa.dsp.fd, myalsa.pcm.buf, myalsa.pcm.len);
#endif
            }
        }
#if defined(MIYOO_A30)
        else {
            if (chk_cnt == 0) {
                FILE *fd = NULL;
                char buf[MAX_PATH] = { 0 };

                fd = popen(
                    "amixer get \'DACL Mixer AIF1DA0L\' | "
                    "grep \"Mono: Playback \\[off\\]\" | "
                    "wc -l", "r"
                );

                if (fd) {
                    fgets(buf, sizeof(buf), fd);
                    pclose(fd);

                    if (atoi(buf) > 0) {
                        open_dsp();
                    }
                }
                chk_cnt = 30000;
            }
            chk_cnt -= 1;
        }
#endif
        usleep(10);
    }
    debug(SND"%s()--\n", __func__);

    pthread_exit(NULL);
}

#if defined(UT)
TEST(alsa_snd, alsa_snd_handler)
{
    TEST_ASSERT_NULL(alsa_snd_handler(0));
}
#endif

snd_pcm_sframes_t snd_pcm_avail(snd_pcm_t *pcm)
{
    debug(SND"call %s()\n", __func__);

    return DEF_PCM_AVAIL;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_avail)
{
    TEST_ASSERT_EQUAL_INT(DEF_PCM_AVAIL, snd_pcm_avail(NULL));
}
#endif

int snd_pcm_hw_params(snd_pcm_t *pcm, snd_pcm_hw_params_t *params)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params(NULL, NULL));
}
#endif

int snd_pcm_hw_params_any(snd_pcm_t *pcm, snd_pcm_hw_params_t *params)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params_any)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_any(NULL, NULL));
}
#endif

void snd_pcm_hw_params_free(snd_pcm_hw_params_t *obj)
{
    debug(SND"call %s()\n", __func__);
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params_free)
{
    snd_pcm_hw_params_free(NULL);
    TEST_PASS();
}
#endif

int snd_pcm_hw_params_malloc(snd_pcm_hw_params_t **ptr)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params_malloc)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_malloc(NULL));
}
#endif

int snd_pcm_hw_params_set_access(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_access_t _access)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params_set_access)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_access(NULL, NULL, 0));
}
#endif

int snd_pcm_hw_params_set_buffer_size_near(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_uframes_t *val)
{
    debug(SND"call %s()\n", __func__);

    *val = PCM_SAMPLES * 2 * PCM_CHANNELS;
    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params_set_buffer_size_near)
{
    snd_pcm_uframes_t t = { 0 };

    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_buffer_size_near(NULL, NULL, &t));
    TEST_ASSERT_EQUAL_INT(PCM_SAMPLES * 2 * PCM_CHANNELS, t);
}
#endif

int snd_pcm_hw_params_set_channels(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, unsigned int val)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params_set_channels)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_channels(NULL, NULL, 0));
}
#endif

int snd_pcm_hw_params_set_format(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_format_t val)
{
    debug(SND"call %s()\n", __func__);

    if (val != SND_PCM_FORMAT_S16_LE) {
        error(SND"invalid PCM format(0x%x)\n", val);
        return -1;
    }
    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params_set_format)
{
    TEST_ASSERT_EQUAL_INT(-1, snd_pcm_hw_params_set_format(NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_format(NULL, NULL, SND_PCM_FORMAT_S16_LE));
}
#endif

int snd_pcm_hw_params_set_period_size_near(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_uframes_t *val, int *dir)
{
    debug(SND"call %s()\n", __func__);

    *val = PCM_PERIOD;
    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params_set_period_size_near)
{
    snd_pcm_uframes_t t = { 0 };

    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_period_size_near(NULL, NULL, &t, NULL));
    TEST_ASSERT_EQUAL_INT(PCM_PERIOD, t);
}
#endif

int snd_pcm_hw_params_set_rate_near(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, unsigned int *val, int *dir)
{
    debug(SND"call %s()\n", __func__);

    *val = PCM_FREQ;
    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_hw_params_set_rate_near)
{
    unsigned int t = 0;

    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_rate_near(NULL, NULL, &t, NULL));
    TEST_ASSERT_EQUAL_INT(PCM_FREQ, t);
}
#endif

int snd_pcm_open(snd_pcm_t **pcm, const char *name, snd_pcm_stream_t stream, int mode)
{
    debug(SND"call %s()\n", __func__);

    if (stream != SND_PCM_STREAM_PLAYBACK) {
        error(SND"steam format is not equal to SND_PCM_STREAM_PLAYBACK\n");
        return -1;
    }
    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_open)
{
    TEST_ASSERT_EQUAL_INT(-1, snd_pcm_open(NULL, NULL, -1, 0));
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_open(NULL, NULL, SND_PCM_STREAM_PLAYBACK, 0));
}
#endif

int snd_pcm_prepare(snd_pcm_t *pcm)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_prepare)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_prepare(NULL));
}
#endif

snd_pcm_sframes_t snd_pcm_readi(snd_pcm_t *pcm, void *buf, snd_pcm_uframes_t size)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_readi)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_readi(NULL, NULL, 0));
}
#endif

int snd_pcm_recover(snd_pcm_t *pcm, int err, int silent)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_recover)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_recover(NULL, 0, 0));
}
#endif

int snd_pcm_start(snd_pcm_t *pcm)
{
#if defined(MIYOO_MINI)
    MI_S32 miret = 0;
    MI_SYS_ChnPort_t chn = { 0 };
#endif

#if defined(MIYOO_A30)
    int arg = 0;
    struct tm ct = { 0 };
#endif

    debug(SND"call %s()\n", __func__);

    init_queue(&myalsa.queue, DEF_QUEUE_SIZE);
    if (NULL == myalsa.queue.buf) {
        error(SND"failed to allocate memory for queue.buf\n");
        return -1;
    }
    memset(myalsa.queue.buf, 0, DEF_QUEUE_SIZE);

    myalsa.pcm.len = PCM_SAMPLES * 2 * PCM_CHANNELS;
    myalsa.pcm.buf = malloc(myalsa.pcm.len);
    if (NULL == myalsa.pcm.buf) {
        error(SND"failed to allocate memory for pcm_buf\n");
        return -1;
    }
    memset(myalsa.pcm.buf, 0, myalsa.pcm.len);

#if defined(MIYOO_MINI)
    myalsa.mi.set_attr.eBitwidth = E_MI_AUDIO_BIT_WIDTH_16;
    myalsa.mi.set_attr.eWorkmode = E_MI_AUDIO_MODE_I2S_MASTER;
    myalsa.mi.set_attr.u32FrmNum = 6;
    myalsa.mi.set_attr.u32PtNumPerFrm = PCM_SAMPLES;
    myalsa.mi.set_attr.u32ChnCnt = PCM_CHANNELS;
    myalsa.mi.set_attr.eSoundmode = (PCM_CHANNELS == 2) ? E_MI_AUDIO_SOUND_MODE_STEREO : E_MI_AUDIO_SOUND_MODE_MONO;

    myalsa.mi.set_attr.eSamplerate = (MI_AUDIO_SampleRate_e)PCM_FREQ;

    miret = MI_AO_SetPubAttr(myalsa.mi.dev, &myalsa.mi.set_attr);
    if (MI_SUCCESS != miret) {
        error(SND"failed to set PubAttr\n");
        return -1;
    }

    miret = MI_AO_GetPubAttr(myalsa.mi.dev, &myalsa.mi.get_attr);
    if (MI_SUCCESS != miret) {
        error(SND"failed to get PubAttr\n");
        return -1;
    }

    miret = MI_AO_Enable(myalsa.mi.dev);
    if (MI_SUCCESS != miret) {
        error(SND"failed to enable AO\n");
        return -1;
    }

    miret = MI_AO_EnableChn(myalsa.mi.dev, myalsa.mi.channel);
    if (MI_SUCCESS != miret) {
        error(SND"failed to enable Channel\n");
        return -1;
    }

    chn.eModId = E_MI_MODULE_ID_AO;
    chn.u32DevId = myalsa.mi.dev;
    chn.u32ChnId = myalsa.mi.channel;
    chn.u32PortId = 0;
    MI_SYS_SetChnOutputPortDepth(&chn, 12, 13);
#endif

#if defined(MIYOO_A30)
    myalsa.mem.fd = open(MEM_DEV, O_RDWR);
    myalsa.mem.ptr = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, myalsa.mem.fd, 0x1c22000);

    if (open_dsp() < 0) {
        return -1;
    }
#endif

#if !defined(UT)
    if (install_prehook_cb(myhook.fun.spu_adpcm_decode_block, adpcm_decode_block)) {
        error(SND"failed to hook adpcm decode\n");
        return -1;
    }
    debug(SND"added spu hooking successfully\n");
#endif

    pthread_create(&myalsa.thread, NULL, alsa_snd_handler, (void *)NULL);
    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_start)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_start(NULL));
}
#endif

int snd_pcm_close(snd_pcm_t *pcm)
{
    void *ret = NULL;

    debug(SND"call %s()\n", __func__);

    myalsa.pcm.ready = 0;
    pthread_join(myalsa.thread, &ret);
    if (myalsa.pcm.buf != NULL) {
        free(myalsa.pcm.buf);
        myalsa.pcm.buf = NULL;
    }
    quit_queue(&myalsa.queue);

#if defined(MINI)
    MI_AO_DisableChn(myalsa.mi.dev, myalsa.mi.channel);
    MI_AO_Disable(myalsa.mi.dev);
#endif

#if defined(MIYOO_A30)
    if (myalsa.dsp.fd > 0) {
        close(myalsa.dsp.fd);
        myalsa.dsp.fd = -1;
    }

    *myalsa.vol.ptr = (160 << 8) | 160;
    munmap(myalsa.mem.ptr, 4096);
    close(myalsa.mem.fd);
#endif

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_close)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_close(NULL));
}
#endif

int snd_pcm_sw_params(snd_pcm_t *pcm, snd_pcm_sw_params_t *params)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_sw_params)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_sw_params(NULL, NULL));
}
#endif

int snd_pcm_sw_params_current(snd_pcm_t *pcm, snd_pcm_sw_params_t *params)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_sw_params_current)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_sw_params_current(NULL, NULL));
}
#endif

void snd_pcm_sw_params_free(snd_pcm_sw_params_t *obj)
{
    debug(SND"call %s()\n", __func__);
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_sw_params_free)
{
    snd_pcm_sw_params_free(NULL);
    TEST_PASS();
}
#endif

int snd_pcm_sw_params_malloc(snd_pcm_sw_params_t **ptr)
{
    debug(SND"call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_sw_params_malloc)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_sw_params_malloc(NULL));
}
#endif

snd_pcm_sframes_t snd_pcm_writei(snd_pcm_t *pcm, const void *buf, snd_pcm_uframes_t size)
{
    debug(SND"call %s()\n", __func__);

    if ((size > 1) && (size != myalsa.pcm.len)) {
        put_queue(&myalsa.queue, (uint8_t *)buf, size * 2 * PCM_CHANNELS);
    }
    return size;
}

#if defined(UT)
TEST(alsa_snd, snd_pcm_writei)
{
    char buf[32 * 2 * PCM_CHANNELS] = { 0 };
    const int size = 1024;

    TEST_ASSERT_EQUAL_INT(0, init_queue(&myalsa.queue, DEF_QUEUE_SIZE));
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_writei(NULL, buf, 0));
    TEST_ASSERT_EQUAL_INT(1, snd_pcm_writei(NULL, buf, 1));
    TEST_ASSERT_EQUAL_INT(32, snd_pcm_writei(NULL, buf, 32));
    TEST_ASSERT_EQUAL_INT(0, quit_queue(&myalsa.queue));
}
#endif

#if defined(UT)
TEST_GROUP_RUNNER(alsa_snd)
{
    RUN_TEST_CASE(alsa_snd, adpcm_decode_block)
    RUN_TEST_CASE(alsa_snd, open_dsp)
    RUN_TEST_CASE(alsa_snd, init_queue)
    RUN_TEST_CASE(alsa_snd, quit_queue)
    RUN_TEST_CASE(alsa_snd, get_available_rsize)
    RUN_TEST_CASE(alsa_snd, get_available_wsize)
    RUN_TEST_CASE(alsa_snd, put_queue)
    RUN_TEST_CASE(alsa_snd, get_queue)
    RUN_TEST_CASE(alsa_snd, alsa_snd_handler)
    RUN_TEST_CASE(alsa_snd, snd_pcm_avail)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params_any)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params_free)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params_malloc)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params_set_access)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params_set_buffer_size_near)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params_set_channels)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params_set_format)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params_set_period_size_near)
    RUN_TEST_CASE(alsa_snd, snd_pcm_hw_params_set_rate_near)
    RUN_TEST_CASE(alsa_snd, snd_pcm_open)
    RUN_TEST_CASE(alsa_snd, snd_pcm_prepare)
    RUN_TEST_CASE(alsa_snd, snd_pcm_readi)
    RUN_TEST_CASE(alsa_snd, snd_pcm_recover)
    RUN_TEST_CASE(alsa_snd, snd_pcm_start)
    RUN_TEST_CASE(alsa_snd, snd_pcm_close)
    RUN_TEST_CASE(alsa_snd, snd_pcm_sw_params)
    RUN_TEST_CASE(alsa_snd, snd_pcm_sw_params_current)
    RUN_TEST_CASE(alsa_snd, snd_pcm_sw_params_free)
    RUN_TEST_CASE(alsa_snd, snd_pcm_sw_params_malloc)
    RUN_TEST_CASE(alsa_snd, snd_pcm_writei)
}
#endif

