// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <json-c/json.h>
#include <alsa/output.h>
#include <alsa/input.h>
#include <alsa/conf.h>
#include <alsa/global.h>
#include <alsa/timer.h>
#include <alsa/pcm.h>
#include <linux/rtc.h>
#include <linux/soundcard.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <sys/time.h>
#include <syslog.h>

#if defined(QX1000) || defined(XT894) || defined(XT897) || defined(UT)
#include <pulse/pulseaudio.h>
#endif

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "snd.h"
#include "hook.h"
#include "common.h"

#if defined(MINI) || defined(UT)
#include "mi_ao.h"
#include "mi_sys.h"
#include "mi_common_datatype.h"
#endif

typedef struct {
    int size;
    int rsize;
    int wsize;
    uint8_t *buf;
    pthread_mutex_t lock;
} queue_t;

#if defined(QX1000) || defined(XT894) || defined(XT897) || defined(UT)
struct mypulse_t {
    pa_threaded_mainloop *mainloop;
    pa_context *context;
    pa_mainloop_api *api;
    pa_stream *stream;
    pa_sample_spec spec;
    pa_buffer_attr attr;
} mypulse = { 0 };
#endif

#if defined(MINI) || defined(UT)
struct {
    MI_AO_CHN ch;
    MI_AUDIO_DEV id;
    MI_AUDIO_Attr_t sattr;
    MI_AUDIO_Attr_t gattr;
} myao = { 0 };
#endif

struct mypcm_t {
    int ready;
    int len;
    uint8_t *buf;
} mypcm = { 0 };

#if defined(A30) || defined(BRICK)
static int vol_base = 100;
static int vol_mul = 1;
static int mem_fd = -1;
static uint8_t *mem_ptr = NULL;
static uint32_t *vol_ptr = NULL;
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(A30) || defined(UT) || defined(BRICK)
static int dsp_fd = -1;
#endif

extern nds_hook myhook;

struct autostate {
    int slot;
    int enable;
} autostate = { 0, 1 };

static int cur_vol = 0;
static queue_t queue = { 0 };
static pthread_t thread = { 0 };

static int init_queue(queue_t *, size_t);
static int quit_queue(queue_t *);
static int put_queue(queue_t *, uint8_t *, size_t);
static size_t get_queue(queue_t *, uint8_t *, size_t);

#if defined(UT)
TEST_GROUP(alsa);

TEST_SETUP(alsa)
{
}

TEST_TEAR_DOWN(alsa)
{
}
#endif

#if defined(UT)
MI_S32 MI_AO_Enable(MI_AUDIO_DEV AoDevId)
{
    return 0;
}

MI_S32 MI_AO_EnableChn(MI_AUDIO_DEV AoDevId, MI_AO_CHN AoChn)
{
    return 0;
}

MI_S32 MI_AO_GetPubAttr(MI_AUDIO_DEV AoDevId, MI_AUDIO_Attr_t *pstAttr)
{
    return 0;
}

MI_S32 MI_SYS_SetChnOutputPortDepth(MI_SYS_ChnPort_t *pstChnPort , MI_U32 u32UserFrameDepth , MI_U32 u32BufQueueDepth)
{
    return 0;
}

MI_S32 MI_AO_SetPubAttr(MI_AUDIO_DEV AoDevId, MI_AUDIO_Attr_t *pstAttr)
{
    return 0;
}

MI_S32 MI_AO_DisableChn(MI_AUDIO_DEV AoDevId, MI_AO_CHN AoChn)
{
    return 0;
}

MI_S32 MI_AO_SendFrame(MI_AUDIO_DEV AoDevId, MI_AO_CHN AoChn, MI_AUDIO_Frame_t *pstData, MI_S32 s32MilliSec)
{
    return 0;
}

MI_S32 MI_AO_Disable(MI_AUDIO_DEV AoDevId)
{
    return 0;
}
#endif

void prehook_adpcm_decode_block(spu_channel_struct *channel)
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

    debug("call %s(channel=%p)\n", __func__, channel);

    adpcm_step_table = (int16_t *)myhook.var.adpcm.step_table;
    adpcm_index_step_table = (int8_t *)myhook.var.adpcm.index_step_table;
    do {
        if (!channel) {
            error("invalid input\n");
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

#if defined(QX1000) || defined(XT894) || defined(XT897) || defined(UT)
static void pulse_context_state(pa_context *context, void *userdata)
{
    debug("call %s()\n", __func__);

    if (context) {
        switch (pa_context_get_state(context)) {
        case PA_CONTEXT_READY:
        case PA_CONTEXT_TERMINATED:
        case PA_CONTEXT_FAILED:
            pa_threaded_mainloop_signal(mypulse.mainloop, 0);
            break;
        case PA_CONTEXT_UNCONNECTED:
        case PA_CONTEXT_CONNECTING:
        case PA_CONTEXT_AUTHORIZING:
        case PA_CONTEXT_SETTING_NAME:
            break;
        }
    }
}

#if defined(UT)
TEST(alsa, pulse_context_state)
{
    pulse_context_state(NULL, NULL);
    TEST_PASS();
}
#endif

static void pulse_stream_state(pa_stream *stream, void *userdata)
{
    debug("call %s(stream=%p, userdat=%p)\n", __func__, stream, userdata);

    if (stream) {
        switch (pa_stream_get_state(stream)) {
        case PA_STREAM_READY:
        case PA_STREAM_FAILED:
        case PA_STREAM_TERMINATED:
            pa_threaded_mainloop_signal(mypulse.mainloop, 0);
            break;
        case PA_STREAM_UNCONNECTED:
        case PA_STREAM_CREATING:
            break;
        }
    }
}

#if defined(UT)
TEST(alsa, pulse_stream_state)
{
    pulse_stream_state(NULL, NULL);
    TEST_PASS();
}
#endif

static void pulse_stream_latency_update(pa_stream *stream, void *userdata)
{
    debug("call %s(stream=%p, userdata=%p)\n", __func__, stream, userdata);

    if (stream) {
        pa_threaded_mainloop_signal(mypulse.mainloop, 0);
    }
}

#if defined(UT)
TEST(alsa, pulse_stream_latency_update)
{
    pulse_stream_latency_update(NULL, NULL);
    TEST_PASS();
}
#endif

static void pulse_stream_request(pa_stream *stream, size_t length, void *userdata)
{
    debug("call %s()\n", __func__);

    if (stream) {
        pa_threaded_mainloop_signal(mypulse.mainloop, 0);
    }
}

#if defined(UT)
TEST(alsa, pulse_stream_request)
{
    pulse_stream_request(NULL, 0, NULL);
    TEST_PASS();
}
#endif
#endif

#if defined(MINI) || defined(UT)
static int mini_set_vol_raw(int vol, int add)
{
    int fd = -1;
    int buf2[2] = { 0 };
    int prev_value = 0;
    uint64_t buf1[] = { sizeof(buf2), (uintptr_t)buf2 };

    debug("call %s(v=%d, add=%d)\n", __func__, vol, add);

    fd = open(SND_DEV, O_RDWR);
    if (fd < 0) {
        error("failed to open \"%s\"\n", SND_DEV);
        return 0;
    }

    ioctl(fd, MI_AO_GETVOLUME, buf1);
    prev_value = buf2[1];

    if (add) {
        vol = prev_value + add;
    }
    else {
        vol += MIN_RAW_VALUE;
    }

    if (vol > MAX_RAW_VALUE) {
        vol = MAX_RAW_VALUE;
    }
    else if (vol < MIN_RAW_VALUE) {
        vol = MIN_RAW_VALUE;
    }

    if (vol == prev_value) {
        close(fd);
        return prev_value;
    }

    buf2[1] = vol;
    ioctl(fd, MI_AO_SETVOLUME, buf1);
    if ((prev_value <= MIN_RAW_VALUE) && (vol > MIN_RAW_VALUE)) {
        buf2[1] = 0;
        ioctl(fd, MI_AO_SETMUTE, buf1);
    }
    else if ((prev_value > MIN_RAW_VALUE) && (vol <= MIN_RAW_VALUE)) {
        buf2[1] = 1;
        ioctl(fd, MI_AO_SETMUTE, buf1);
    }
    close(fd);

    return vol;
}

#if defined(UT)
TEST(alsa, mini_set_vol_raw)
{
    TEST_ASSERT_EQUAL_INT(0, mini_set_vol_raw(0, 0));
}
#endif

static int mini_set_vol(int v)
{
    int raw = 0;

    debug("call %s(v=%d)\n", __func__, v);

    if (v > MAX_VOL) {
        v = MAX_VOL;
    }
    else if (v < 0) {
        v = 0;
    }

    if (v != 0) {
        raw = round(48 * log10(1 + v));
    }

    mini_set_vol_raw(raw, 0);

    return v;
}

#if defined(UT)
TEST(alsa, mini_set_vol)
{
    TEST_ASSERT_EQUAL_INT(MAX_VOL, mini_set_vol(MAX_VOL + 1));
    TEST_ASSERT_EQUAL_INT(1, mini_set_vol(1));
    TEST_ASSERT_EQUAL_INT(0, mini_set_vol(-1));
}
#endif

int mini_inc_vol(void)
{
    debug("call %s()\n", __func__);

    if (cur_vol < MAX_VOL) {
        cur_vol += 1;
        mini_set_vol(cur_vol);
    }

    return cur_vol;
}

#if defined(UT)
TEST(alsa, mini_inc_vol)
{
    cur_vol = 0;
    TEST_ASSERT_EQUAL_INT(1, mini_inc_vol());

    cur_vol = MAX_VOL;
    TEST_ASSERT_EQUAL_INT(MAX_VOL, mini_inc_vol());
}
#endif

int mini_dec_vol(void)
{
    debug("call %s()\n", __func__);

    if (cur_vol > 0) {
        cur_vol -= 1;
        mini_set_vol(cur_vol);
    }

    return cur_vol;
}
#endif

#if defined(UT)
TEST(alsa, mini_dec_vol)
{
    cur_vol = 0;
    TEST_ASSERT_EQUAL_INT(0, mini_dec_vol());

    cur_vol = 1;
    TEST_ASSERT_EQUAL_INT(0, mini_dec_vol());
}
#endif

#if defined(A30) || defined(UT)
int a30_inc_vol(void)
{
    debug("call %s()\n", __func__);

    if (cur_vol < MAX_VOL) {
        cur_vol += 1;

#if !defined(UT)
        *vol_ptr = ((vol_base + (cur_vol << vol_mul)) << 8) | (vol_base + (cur_vol << vol_mul));
#endif
    }

    return cur_vol;
}

#if defined(UT)
TEST(alsa, a30_inc_vol)
{
    cur_vol = 0;
    TEST_ASSERT_EQUAL_INT(1, a30_inc_vol());

    cur_vol = MAX_VOL;
    TEST_ASSERT_EQUAL_INT(MAX_VOL, a30_inc_vol());
}
#endif

int a30_dec_vol(void)
{
    debug("call %s()\n", __func__);

    if (cur_vol > 0) {
        cur_vol -= 1;

#if !defined(UT)
        if (cur_vol == 0) {
            *vol_ptr = 0;
        }
        else {
            *vol_ptr = ((vol_base + (cur_vol << vol_mul)) << 8) | (vol_base + (cur_vol << vol_mul));
        }
#endif
    }

    return cur_vol;
}

#if defined(UT)
TEST(alsa, a30_dec_vol)
{
    cur_vol = 0;
    TEST_ASSERT_EQUAL_INT(0, a30_dec_vol());

    cur_vol = 10;
    TEST_ASSERT_EQUAL_INT(9, a30_dec_vol());
}
#endif
#endif

#if defined(A30) || defined(UT) || defined(BRICK)
static int open_dsp(void)
{
    int arg = 0;

    debug("call %s()\n", __func__);

    if (dsp_fd > 0) {
        close(dsp_fd);
    }

#if !defined(UT) && !defined(BRICK)
    system("amixer set \'DACL Mixer AIF1DA0L\' on");

    vol_ptr = (uint32_t *)(&mem_ptr[0xc00 + 0x258]);
    *vol_ptr = ((vol_base + (cur_vol << vol_mul)) << 8) | (vol_base + (cur_vol << vol_mul));
#endif

    dsp_fd = open(DSP_DEV, O_WRONLY);
    if (dsp_fd < 0) {
        error("failed to open \"%s\" device\n", DSP_DEV);
        return -1;
    }

    arg = 16;
    ioctl(dsp_fd, SOUND_PCM_WRITE_BITS, &arg);

    arg = SND_CHANNELS;
    ioctl(dsp_fd, SOUND_PCM_WRITE_CHANNELS, &arg);

    arg = SND_FREQ;
    ioctl(dsp_fd, SOUND_PCM_WRITE_RATE, &arg);

    return 0;
}
#endif

#if defined(UT)
TEST(alsa, open_dsp)
{
    TEST_ASSERT_EQUAL_INT(-1, open_dsp());
}
#endif

int set_autostate(int enable, int slot)
{
    debug("call %s(enable=%d, slot=%d)\n", __func__, enable, slot);

    autostate.slot = slot;
    autostate.enable = enable;
    return 0;
}

#if defined(UT)
TEST(alsa, set_autostate)
{
    TEST_ASSERT_EQUAL_INT(0, set_autostate(0, 0));
    TEST_ASSERT_EQUAL_INT(0, autostate.enable);
    TEST_ASSERT_EQUAL_INT(0, autostate.slot);
    TEST_ASSERT_EQUAL_INT(0, set_autostate(1, 10));
    TEST_ASSERT_EQUAL_INT(1, autostate.enable);
    TEST_ASSERT_EQUAL_INT(10, autostate.slot);
}
#endif

static int init_queue(queue_t *q, size_t s)
{
    debug("call %s(q=%p, s=%ld)\n", __func__, q, s);

    if (!q) {
        error("q is null\n");
    }

    if (s == 0) {
        error("invalid size\n");
        return -1;
    }

    q->buf = (uint8_t *)malloc(s);
    q->size = s;
    q->rsize = q->wsize = 0;
    pthread_mutex_init(&q->lock, NULL);

    return 0;
}

#if defined(UT)
TEST(alsa, init_queue)
{
    queue_t t = { 0 };
    const int size = 1024;

    TEST_ASSERT_EQUAL_INT(-1, init_queue(NULL, 0));
    TEST_ASSERT_EQUAL_INT(-1, init_queue(&t, 0));
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
    debug("call %s(q=%p)\n", __func__, q);

    if (q->buf) {
        free(q->buf);
        q->buf = NULL;
    }
    pthread_mutex_destroy(&q->lock);

    return 0;
}

#if defined(UT)
TEST(alsa, quit_queue)
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
    debug("call %s(q=%p)\n", __func__, q);

    if (!q) {
        error("queue is null\n");
        return -1;
    }

    if (q->rsize == q->wsize) {
        return 0;
    }
    else if(q->rsize < q->wsize) {
        return q->wsize - q->rsize;
    }

    return (q->size - q->rsize) + q->wsize;
}

#if defined(UT)
TEST(alsa, get_available_rsize)
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
    debug("call %s(q=%p)\n", __func__, q);

    if (!q) {
        error("queue is null\n");
        return -1;
    }

    if (q->wsize == q->rsize) {
        return q->size;
    }
    else if (q->wsize < q->rsize) {
        return q->rsize - q->wsize;
    }

    return (q->size - q->wsize) + q->rsize;
}

#if defined(UT)
TEST(alsa, get_available_wsize)
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

    debug("call %s(q=%p, buf=%p, size=%ld)\n", __func__, q, buf, size);

    if (!q || !buf) {
        error("invalid parameters\n");
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

            neon_memcpy(&q->buf[q->wsize], buf, tmp);
            neon_memcpy(q->buf, &buf[tmp], size);
            q->wsize = size;
        }
        else {
            neon_memcpy(&q->buf[q->wsize], buf, size);
            q->wsize += size;
        }
    }
    pthread_mutex_unlock(&q->lock);

    return r;
}

#if defined(UT)
TEST(alsa, put_queue)
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

static size_t get_queue(queue_t *q, uint8_t *buf, size_t len)
{
    int r = 0;
    int tmp = 0;
    int avai = 0;
    int size = len;

    debug("call %s(q=%p, buf=%p, max=%ld)\n", __func__, q, buf, len);

    if (!q || !buf) {
        error("invalid parameters\n");
        return -1;
    }

    if (len == 0) {
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

            neon_memcpy(buf, &q->buf[q->rsize], tmp);
            neon_memcpy(&buf[tmp], q->buf, size);
            q->rsize = size;
        }
        else {
            neon_memcpy(buf, &q->buf[q->rsize], size);
            q->rsize += size;
        }
    }
    pthread_mutex_unlock(&q->lock);

    return r;
}

#if defined(UT)
TEST(alsa, get_queue)
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

static void* audio_handler(void *id)
{
#if defined(MINI) || defined(UT)
    MI_AUDIO_Frame_t frame = { 0 };
#endif

#if defined(A30)
    int chk_cnt = 0;
#endif

    int r = 0;
    int idx = 0;
    int len = mypcm.len;

    debug("call %s()++\n", __func__);

#if defined(UT)
    mypcm.ready = 0;
#endif

    while (mypcm.ready) {
        r = get_queue(&queue, &mypcm.buf[idx], len);
        if (r > 0) {
            idx+= r;
            len-= r;
            if (len == 0) {
                idx = 0;
                len = mypcm.len;
#if defined(MINI) || defined(UT)
                frame.eBitwidth = myao.gattr.eBitwidth;
                frame.eSoundmode = myao.gattr.eSoundmode;
                frame.u32Len = mypcm.len;
                frame.apVirAddr[0] = mypcm.buf;
                frame.apVirAddr[1] = NULL;
                MI_AO_SendFrame(myao.id, myao.ch, &frame, 1);
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(A30) || defined(BRICK)
                write(dsp_fd, mypcm.buf, mypcm.len);
#endif

#if defined(QX1000) || defined(XT894) || defined(XT897)
                if (mypulse.mainloop) {
                    pa_threaded_mainloop_lock(mypulse.mainloop);
                    pa_stream_write(mypulse.stream, mypcm.buf, mypcm.len, NULL, 0, PA_SEEK_RELATIVE);
                    pa_threaded_mainloop_unlock(mypulse.mainloop);
                }
#endif
            }
        }
#if defined(A30)
        else {
            if (chk_cnt == 0) {
                char buf[MAX_PATH] = { 0 };
                FILE *fd = popen("amixer get \'DACL Mixer AIF1DA0L\' | grep \"Mono: Playback \\[off\\]\" | wc -l", "r");

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

    debug("call %s()--\n", __func__);

#if defined(UT)
    return NULL;
#endif

    pthread_exit(NULL);
}

#if defined(UT)
TEST(alsa, audio_handler)
{
    TEST_ASSERT_EQUAL_INT(NULL, audio_handler(NULL));
}
#endif

snd_pcm_sframes_t snd_pcm_avail(snd_pcm_t *pcm)
{
    debug("call %s()\n", __func__);

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
    debug("call %s()\n", __func__);

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
    debug("call %s()\n", __func__);

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
    debug("call %s()\n", __func__);
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
    debug("call %s()\n", __func__);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_hw_params_malloc)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_malloc(NULL));
}
#endif

int snd_pcm_hw_params_set_access(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_access_t _access)
{
    debug("call %s()\n", __func__);

    return 0;
}
#if defined(UT)
TEST(alsa, snd_pcm_hw_params_set_access)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_hw_params_set_access(NULL, NULL, 0));
}
#endif

int snd_pcm_hw_params_set_buffer_size_near(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_uframes_t *val)
{
    debug("call %s()\n", __func__);

    *val = SND_SAMPLES * 2 * SND_CHANNELS;
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
    debug("call %s()\n", __func__);

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

int snd_pcm_hw_params_set_period_size_near(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_uframes_t *val, int *dir)
{
    debug("call %s()\n", __func__);

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

int snd_pcm_hw_params_set_rate_near(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, unsigned int *val, int *dir)
{
    debug("call %s(pcm=%p, params=%p, val=%p, dir=%p)\n", __func__, pcm, params, val, dir);

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
    debug("call %s(pcm=%p, name=%s, stream=%d, mode=%d)\n", __func__, pcm, name, stream, mode);

    if (stream != SND_PCM_STREAM_PLAYBACK) {
        return -1;
    }
    return 0;
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
    debug("call %s(pcm=%p)\n", __func__, pcm);

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
    debug("call %s(pcm=%p, buf=%p, size=%ld)\n", __func__, pcm, buf, size);

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
    debug("call %s(pcm=%p, err=%d, silent=%d)\n", __func__, pcm, err, silent);

    return 0;
}

#if defined(UT)
TEST(alsa, snd_pcm_recover)
{
    TEST_ASSERT_EQUAL_INT(0, snd_pcm_recover(NULL, 0, 0));
}
#endif

int snd_pcm_start(snd_pcm_t *pcm)
{
#if defined(MINI) || defined(UT)
    MI_S32 miret = 0;
    MI_SYS_ChnPort_t stAoChn0OutputPort0 = { 0 };
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(A30) || defined(BRICK)
    int arg = 0;
#endif

#if defined(A30) || defined(BRICK)
    struct tm ct = { 0 };
#endif

#if defined(MINI) || defined(A30) || defined(BRICK)
    struct json_object *jfile = NULL;
#endif

    debug("call %s(pcm=%p)\n", __func__, pcm);

    init_queue(&queue, (size_t)DEF_QUEUE_SIZE);
    if (queue.buf == NULL) {
        return -1;
    }
    memset(queue.buf, 0, DEF_QUEUE_SIZE);

    mypcm.len = SND_SAMPLES * 2 * SND_CHANNELS;
    mypcm.buf = malloc(mypcm.len);
    if (mypcm.buf == NULL) {
        return -1;
    }
    memset(mypcm.buf, 0, mypcm.len);

#if defined(MINI) || defined(A30)
    jfile = json_object_from_file(JSON_APP_FILE);
    if (jfile) {
        struct json_object *v = NULL;

        json_object_object_get_ex(jfile, JSON_VOL_KEY, &v);
        cur_vol = json_object_get_int(v);
        json_object_put(jfile);
    }
#endif

#if defined(MINI) ||defined(UT)
    myao.sattr.eBitwidth = E_MI_AUDIO_BIT_WIDTH_16;
    myao.sattr.eWorkmode = E_MI_AUDIO_MODE_I2S_MASTER;
    myao.sattr.u32FrmNum = 6;
    myao.sattr.u32PtNumPerFrm = SND_SAMPLES;
    myao.sattr.u32ChnCnt = SND_CHANNELS;
    myao.sattr.eSoundmode = (SND_CHANNELS == 2) ? E_MI_AUDIO_SOUND_MODE_STEREO : E_MI_AUDIO_SOUND_MODE_MONO;
    myao.sattr.eSamplerate = (MI_AUDIO_SampleRate_e)SND_FREQ;

    miret = MI_AO_SetPubAttr(myao.id, &myao.sattr);
    if(miret != MI_SUCCESS) {
        error("failed to set PubAttr\n");
        return -1;
    }

    miret = MI_AO_GetPubAttr(myao.id, &myao.gattr);
    if(miret != MI_SUCCESS) {
        error("failed to get PubAttr\n");
        return -1;
    }

    miret = MI_AO_Enable(myao.id);
    if(miret != MI_SUCCESS) {
        error("failed to enable AO\n");
        return -1;
    }

    miret = MI_AO_EnableChn(myao.id, myao.ch);
    if(miret != MI_SUCCESS) {
        error("failed to enable Channel\n");
        return -1;
    }

    stAoChn0OutputPort0.eModId = E_MI_MODULE_ID_AO;
    stAoChn0OutputPort0.u32DevId = myao.id;
    stAoChn0OutputPort0.u32ChnId = myao.ch;
    stAoChn0OutputPort0.u32PortId = 0;
    MI_SYS_SetChnOutputPortDepth(&stAoChn0OutputPort0, 12, 13);
    mini_set_vol(cur_vol);
#endif

#if defined(A30)
    mem_fd = open("/dev/mem", O_RDWR);
    mem_ptr = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, mem_fd, 0x1c22000);
#endif

#if defined(A30) || defined(BRICK)
    open_dsp();
#endif

#if defined(TRIMUI) || defined(PANDORA)
    dsp_fd = open(DSP_DEV, O_WRONLY);
    if (dsp_fd < 0) {
        error("failed to open \"%s\" device\n", DSP_DEV);
        return -1;
    }

    arg = 16;
    ioctl(dsp_fd, SOUND_PCM_WRITE_BITS, &arg);

    arg = SND_CHANNELS;
    ioctl(dsp_fd, SOUND_PCM_WRITE_CHANNELS, &arg);

    arg = SND_FREQ;
    ioctl(dsp_fd, SOUND_PCM_WRITE_RATE, &arg);
#endif

#if defined(QX1000) || defined(XT894) || defined(XT897)
    mypulse.mainloop = pa_threaded_mainloop_new();
    if (mypulse.mainloop == NULL) {
        error("failed to open PulseAudio device\n");
        return -1;
    }

    mypulse.api = pa_threaded_mainloop_get_api(mypulse.mainloop);
    mypulse.context = pa_context_new(mypulse.api, "DraStic");
    pa_context_set_state_callback(mypulse.context, pulse_context_state, &pa);
    pa_context_connect(mypulse.context, NULL, 0, NULL);
    pa_threaded_mainloop_lock(mypulse.mainloop);
    pa_threaded_mainloop_start(mypulse.mainloop);

    while (pa_context_get_state(mypulse.context) != PA_CONTEXT_READY) {
        pa_threaded_mainloop_wait(mypulse.mainloop);
    }

    mypulse.spec.format = PA_SAMPLE_S16LE;
    mypulse.spec.channels = SND_CHANNELS;
    mypulse.spec.rate = SND_FREQ;
    mypulse.attr.tlength = pa_bytes_per_second(&mypulse.spec) / 5;
    mypulse.attr.maxlength = mypulse.attr.tlength * 3;
    mypulse.attr.minreq = mypulse.attr.tlength / 3;
    mypulse.attr.prebuf = mypulse.attr.tlength;

    mypulse.stream = pa_stream_new(mypulse.context, "NDS", &mypulse.spec, NULL);
    pa_stream_set_state_callback(mypulse.stream, pulse_stream_state, &pa);
    pa_stream_set_write_callback(mypulse.stream, pulse_stream_request, &pa);
    pa_stream_set_latency_update_callback(mypulse.stream, pulse_stream_latency_update, &pa);
    pa_stream_connect_playback(
        mypulse.stream,
        NULL,
        &mypulse.attr, 
        PA_STREAM_ADJUST_LATENCY | PA_STREAM_INTERPOLATE_TIMING | PA_STREAM_AUTO_TIMING_UPDATE,
        NULL,
        NULL
    );
    
    while (pa_context_get_state(mypulse.context) != PA_CONTEXT_READY) {
        pa_threaded_mainloop_wait(mypulse.mainloop);
    }

    pa_threaded_mainloop_unlock(mypulse.mainloop);
#endif

    add_prehook((void *)myhook.fun.spu_adpcm_decode_block, prehook_adpcm_decode_block);

    mypcm.ready = 1;
    pthread_create(&thread, NULL, audio_handler, (void *)NULL);

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
    void *r = NULL;

    debug("call %s(pcm=%p)\n", __func__, pcm);

    if (autostate.enable > 0) {
        save_state(autostate.slot);
    }

    mypcm.ready = 0;
    pthread_join(thread, &r);
    if (mypcm.buf) {
        free(mypcm.buf);
        mypcm.buf = NULL;
    }
    quit_queue(&queue);

#if defined(MINI) || defined(UT)
    MI_AO_DisableChn(myao.id, myao.ch);
    MI_AO_Disable(myao.id);
#endif

#if defined(TRIMUI) || defined(PANDORA) || defined(A30) || defined(BRICK)
    if (dsp_fd > 0) {
        close(dsp_fd);
        dsp_fd = -1;
    }
#endif

#if defined(QX1000) || defined(XT894) || defined(XT897)
    if (mypulse.mainloop) {
        pa_threaded_mainloop_stop(mypulse.mainloop);
    }
    if (mypulse.stream) {
        pa_stream_unref(mypulse.stream);
        mypulse.stream = NULL;
    }
    if (mypulse.context) {
        pa_context_disconnect(mypulse.context);
        pa_context_unref(mypulse.context);
        mypulse.context = NULL;
    }
    if (mypulse.mainloop) {
        pa_threaded_mainloop_stop(mypulse.mainloop);
        mypulse.mainloop = NULL;
    }
#endif

#if defined(A30)
    *vol_ptr = (160 << 8) | 160;
    munmap(mem_ptr, 4096);
    close(mem_fd);
#endif

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
    debug("call %s(pcm=%p, params=%p)\n", __func__, pcm, params);

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
    debug("call %s(pcm=%p, params=%p)\n", __func__, pcm, params);

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
    debug("call %s(obj=%p)\n", __func__, obj);
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
    debug("call %s(ptr=%p)\n", __func__, ptr);
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
    debug("call %s(pcm=%p, buf=%p, size=%ld)\n", __func__, pcm, buf, size);

#if defined(UT)
    return size;
#endif

    if ((size > 1) && (size != mypcm.len)) {
        put_queue(&queue, (uint8_t*)buf, size * 2 * SND_CHANNELS);
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

