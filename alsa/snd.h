// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __SND_H__
#define __SND_H__

#define DSP_DEV             "/dev/dsp"
#define SND_FREQ            44100
#define SND_PERIOD          2048
#define SND_CHANNELS        2
#define SND_SAMPLES         8192

#define DEF_QUEUE_SIZE      (2 * 1024 * 1024)

#if defined(MINI) || defined(UT)
#define SND_DEV             "/dev/mi_ao"
#define MAX_VOL             20
#define MIN_RAW_VALUE       -60
#define MAX_RAW_VALUE       30
#define MI_AO_SETVOLUME     0x4008690b
#define MI_AO_GETVOLUME     0xc008690c
#define MI_AO_SETMUTE       0x4008690d
#define JSON_APP_FILE       "/appconfigs/system.json"
#define JSON_VOL_KEY        "vol"
#endif

#if defined(A30)
#define MAX_VOL             20
#define JSON_APP_FILE       "/config/system.json"
#define JSON_VOL_KEY        "vol"
#endif

#if defined(MINI)
#endif

typedef struct {
    int size;
    int rsize;
    int wsize;
    uint8_t *buf;
    pthread_mutex_t lock;
} queue_t;

int set_half_vol(int);
int set_auto_state(int, int);

#endif

