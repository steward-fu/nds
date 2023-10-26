#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <json-c/json.h>
#include <alsa/input.h>
#include <alsa/output.h>
#include <alsa/conf.h>
#include <alsa/global.h>
#include <alsa/timer.h>
#include <alsa/pcm.h>

#include "mi_sys.h"
#include "mi_common_datatype.h"
#include "mi_ao.h"

static MI_AO_CHN AoChn = 0;
static MI_AUDIO_DEV AoDevId = 0;
static MI_AUDIO_Attr_t stSetAttr = {0};
static MI_AUDIO_Attr_t stGetAttr = {0};

static int cur_volume = 0;
static int pcm_ready = 0;
static int pcm_buf_len = 0;
static uint8_t *pcm_buf = NULL;
static uint8_t *pcm_dummy = NULL;
static struct json_object *jfile = NULL;

#define JSON_FILE           "/appconfigs/system.json"
#define JSON_VOL_KEY        "vol"
#define PERIOD              2048
#define FREQ                44100
#define CHANNELS            2
#define SAMPLES             8192
#define QUEUE_SIZE          (2 * 1024 * 1024)

typedef struct {
    int size;
    int read;
    int write;
    uint8_t *buffer;
    pthread_mutex_t lock;
} queue_t;

static pthread_t thread;
static queue_t queue = {0};

#define MAX_VOLUME          20
#define MIN_RAW_VALUE       -60
#define MAX_RAW_VALUE       30
#define MI_AO_SETVOLUME     0x4008690b
#define MI_AO_GETVOLUME     0xc008690c
#define MI_AO_SETMUTE       0x4008690d

static int set_volume_raw(int value, int add)
{
    int fd = -1;
    int buf2[] = {0, 0}, prev_value = 0;
    uint64_t buf1[] = {sizeof(buf2), (uintptr_t)buf2};

    if ((fd = open("/dev/mi_ao", O_RDWR)) < 0) {
        return 0;
    }

    ioctl(fd, MI_AO_GETVOLUME, buf1);
    prev_value = buf2[1];

    if (add) {
        value = prev_value + add;
    }
    else {
        value += MIN_RAW_VALUE;
    }

    if (value > MAX_RAW_VALUE) {
        value = MAX_RAW_VALUE;
    }
    else if (value < MIN_RAW_VALUE) {
        value = MIN_RAW_VALUE;
    }

    if (value == prev_value) {
        close(fd);
        return prev_value;
    }

    buf2[1] = value;
    ioctl(fd, MI_AO_SETVOLUME, buf1);
    if (prev_value <= MIN_RAW_VALUE && value > MIN_RAW_VALUE) {
        buf2[1] = 0;
        ioctl(fd, MI_AO_SETMUTE, buf1);
    }
    else if (prev_value > MIN_RAW_VALUE && value <= MIN_RAW_VALUE) {
        buf2[1] = 1;
        ioctl(fd, MI_AO_SETMUTE, buf1);
    }
    close(fd);
    return value;
}

static int set_volume(int volume)
{
    int volume_raw = 0;

    if (volume > 20) {
        volume = 20;
    }
    else if (volume < 0) {
        volume = 0;
    }

    if (volume != 0) {
        volume_raw = round(48 * log10(1 + volume));
    }

    set_volume_raw(volume_raw, 0);
    return volume;
}

int volume_inc(void)
{
    if (cur_volume < MAX_VOLUME) {
        cur_volume+= 1;
        set_volume(cur_volume);
    }
    return cur_volume;
}

int volume_dec(void)
{
    if (cur_volume > 0) {
        cur_volume-= 1;
        set_volume(cur_volume);
    }
    return cur_volume;
}

static void queue_init(queue_t *q, size_t s)
{
    q->buffer = (uint8_t *)malloc(s);
    q->size = s;
    q->read = q->write = 0;
    pthread_mutex_init(&q->lock, NULL);
}

static void queue_destroy(queue_t *q)
{
    if (q->buffer) {
        free(q->buffer);
    }
    pthread_mutex_destroy(&q->lock);
}

static int queue_size_for_read(queue_t *q)
{
    if (q->read == q->write) {
        return 0;
    }
    else if(q->read < q->write){
        return q->write - q->read;
    }
    return (QUEUE_SIZE - q->read) + q->write;
}

static int queue_size_for_write(queue_t *q)
{
    if (q->write == q->read) {
        return QUEUE_SIZE;
    }
    else if(q->write < q->read){
        return q->read - q->write;
    }
    return (QUEUE_SIZE - q->write) + q->read;
}

static int queue_put(queue_t *q, uint8_t *buffer, size_t size)
{
    int r = 0, tmp = 0, avai = 0;

    pthread_mutex_lock(&q->lock);
    avai = queue_size_for_write(q);
    if (size > avai) {
        size = avai;
    }
    r = size;

    if (size > 0) {
        if ((q->write >= q->read) && ((q->write + size) > QUEUE_SIZE)) {
            tmp = QUEUE_SIZE - q->write;
            size-= tmp;
            memcpy(&q->buffer[q->write], buffer, tmp);
            memcpy(q->buffer, &buffer[tmp], size);
            q->write = size;
        }
        else {
            memcpy(&q->buffer[q->write], buffer, size);
            q->write += size;
        }
    }
    pthread_mutex_unlock(&q->lock);
    return r;
}

static size_t queue_get(queue_t *q, uint8_t *buffer, size_t max)
{
    int r = 0, tmp = 0, avai = 0, size = max;

    pthread_mutex_lock(&q->lock);
    avai = queue_size_for_read(q);
    if (size > avai) {
        size = avai;
    }
    r = size;

    if (size > 0) {
        if ((q->read > q->write) && (q->read + size) > QUEUE_SIZE) {
            tmp = QUEUE_SIZE - q->read;
            size-= tmp;
            memcpy(buffer, &q->buffer[q->read], tmp);
            memcpy(&buffer[tmp], q->buffer, size);
            q->read = size;
        }
        else {
            memcpy(buffer, &q->buffer[q->read], size);
            q->read+= size;
        }
    }
    pthread_mutex_unlock(&q->lock);
    return r;
}

static void *audio_handler(void *threadid)
{
    MI_S32 s32RetSendStatus = 0;
    MI_AUDIO_Frame_t aoTestFrame;
    int r = 0, len = pcm_buf_len, use_dummy = 0;

    while (pcm_ready) {
        use_dummy = 1;
        r = queue_get(&queue, pcm_buf, len);
        if (r > 0) {
            len-= r;
            if (len == 0) {
                use_dummy = 0;
                len = pcm_buf_len;
            }
        }
        
        aoTestFrame.eBitwidth = stGetAttr.eBitwidth;
        aoTestFrame.eSoundmode = stGetAttr.eSoundmode;
        aoTestFrame.u32Len = pcm_buf_len;
        aoTestFrame.apVirAddr[0] = use_dummy ? pcm_dummy : pcm_buf;
        aoTestFrame.apVirAddr[1] = NULL;
        do {
            s32RetSendStatus = MI_AO_SendFrame(AoDevId, AoChn, &aoTestFrame, 1);
            usleep(((stSetAttr.u32PtNumPerFrm * 1000) / stSetAttr.eSamplerate - 10) * 1000);
        } while(s32RetSendStatus == MI_AO_ERR_NOBUF);
    }
    pthread_exit(NULL);
}

snd_pcm_sframes_t snd_pcm_avail(snd_pcm_t *pcm)
{
    return 0; //pcm_buf_len;
}

int snd_pcm_hw_params(snd_pcm_t *pcm, snd_pcm_hw_params_t *params)
{
    return 0;
}

int snd_pcm_hw_params_any(snd_pcm_t *pcm, snd_pcm_hw_params_t *params)
{
    return 0;
}

void snd_pcm_hw_params_free(snd_pcm_hw_params_t *obj)
{
}

int snd_pcm_hw_params_malloc(snd_pcm_hw_params_t **ptr)
{
    return 0;
}

int snd_pcm_hw_params_set_access(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_access_t _access)
{
    return 0;
}

int snd_pcm_hw_params_set_buffer_size_near(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_uframes_t *val)
{
    *val = SAMPLES * 2 * CHANNELS;
    return 0;
}

int snd_pcm_hw_params_set_channels(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, unsigned int val)
{
    return 0;
}

int snd_pcm_hw_params_set_format(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_format_t val)
{
    if (val != SND_PCM_FORMAT_S16_LE) {
        return -1;
    }
    return 0;
}

int snd_pcm_hw_params_set_period_size_near(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, snd_pcm_uframes_t *val, int *dir)
{
    *val = PERIOD;
    return 0;
}

int snd_pcm_hw_params_set_rate_near(snd_pcm_t *pcm, snd_pcm_hw_params_t *params, unsigned int *val, int *dir)
{
    *val = FREQ;
    return 0;
}

int snd_pcm_open(snd_pcm_t **pcm, const char *name, snd_pcm_stream_t stream, int mode)
{
    if (stream != SND_PCM_STREAM_PLAYBACK) {
        return -1;
    }
    return 0;
}

int snd_pcm_prepare(snd_pcm_t *pcm)
{
    return 0;
}

snd_pcm_sframes_t snd_pcm_readi(snd_pcm_t *pcm, void *buffer, snd_pcm_uframes_t size)
{
    return 0;
}

int snd_pcm_recover(snd_pcm_t *pcm, int err, int silent)
{
    return 0;
}

int snd_pcm_start(snd_pcm_t *pcm)
{
    MI_S32 miret = 0;
    MI_SYS_ChnPort_t stAoChn0OutputPort0;
    
    queue_init(&queue, (size_t)QUEUE_SIZE);
    if (queue.buffer == NULL) {
        return -1;
    }
    memset(queue.buffer, 0, QUEUE_SIZE);

    pcm_buf_len = SAMPLES * 2 * CHANNELS;
    pcm_buf = malloc(pcm_buf_len);
    if (pcm_buf == NULL) {
        return -1;
    }
    memset(pcm_buf, 0, pcm_buf_len);

    pcm_dummy = malloc(pcm_buf_len);
    if (pcm_dummy == NULL) {
        return -1;
    }
    memset(pcm_dummy, 0, pcm_buf_len);

    jfile = json_object_from_file(JSON_FILE);
    if (jfile != NULL) {
        struct json_object *volume = NULL;

        json_object_object_get_ex(jfile, JSON_VOL_KEY, &volume);
        cur_volume = json_object_get_int(volume);
        //json_object_object_add(jfile, JSON_VOL_KEY, json_object_new_int(2));
        //json_object_to_file(JSON_FILE, jfile);
        json_object_put(jfile);
    }

    stSetAttr.eBitwidth = E_MI_AUDIO_BIT_WIDTH_16;
    stSetAttr.eWorkmode = E_MI_AUDIO_MODE_I2S_MASTER;
    stSetAttr.u32FrmNum = 6;
    stSetAttr.u32PtNumPerFrm = SAMPLES;
    stSetAttr.u32ChnCnt = CHANNELS;
    stSetAttr.eSoundmode = CHANNELS == 2 ? E_MI_AUDIO_SOUND_MODE_STEREO : E_MI_AUDIO_SOUND_MODE_MONO;
    stSetAttr.eSamplerate = (MI_AUDIO_SampleRate_e)FREQ;

    miret = MI_AO_SetPubAttr(AoDevId, &stSetAttr);
    if(miret != MI_SUCCESS) {
        printf("Failed to set PubAttr\n");
        return -1;
    }

    miret = MI_AO_GetPubAttr(AoDevId, &stGetAttr);
    if(miret != MI_SUCCESS) {
        printf("Failed to get PubAttr\n");
        return -1;
    }
    
    miret = MI_AO_Enable(AoDevId);
    if(miret != MI_SUCCESS) {
        printf("Failed to enable AO\n");
        return -1;
    }

    miret = MI_AO_EnableChn(AoDevId, AoChn);
    if(miret != MI_SUCCESS) {
        printf("Failed to enable Channel\n");
        return -1;
    }

    stAoChn0OutputPort0.eModId = E_MI_MODULE_ID_AO;
    stAoChn0OutputPort0.u32DevId = AoDevId;
    stAoChn0OutputPort0.u32ChnId = AoChn;
    stAoChn0OutputPort0.u32PortId = 0;
    MI_SYS_SetChnOutputPortDepth(&stAoChn0OutputPort0, 12, 13);

    pcm_ready = 1;
    set_volume(cur_volume);
    pthread_create(&thread, NULL, audio_handler, (void *)NULL);
    return 0;
}

int snd_pcm_close(snd_pcm_t *pcm)
{
    void *ret = NULL;

    pcm_ready = 0;
    pthread_join(thread, &ret);
    free(pcm_buf);
    free(pcm_dummy);
    queue_destroy(&queue);
    MI_AO_DisableChn(AoDevId, AoChn);
    MI_AO_Disable(AoDevId);
    return 0;
}

int snd_pcm_sw_params(snd_pcm_t *pcm, snd_pcm_sw_params_t *params)
{
    return 0;
}

int snd_pcm_sw_params_current(snd_pcm_t *pcm, snd_pcm_sw_params_t *params)
{
    return 0;
}

void snd_pcm_sw_params_free(snd_pcm_sw_params_t *obj)
{
}

int snd_pcm_sw_params_malloc(snd_pcm_sw_params_t **ptr)
{
    return 0;
}

snd_pcm_sframes_t snd_pcm_writei(snd_pcm_t *pcm, const void *buffer, snd_pcm_uframes_t size)
{
    if ((size > 1) && (size != pcm_buf_len)) {
        queue_put(&queue, (uint8_t*)buffer, size * 2 * CHANNELS);
    }
    return size;
}

