// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __ALSA_SND_H__
#define __ALSA_SND_H__

#if defined(MIYOO_MINI)
#include "mi_ao.h"
#include "mi_sys.h"
#include "mi_common_datatype.h"
#endif

#define PCM_FREQ            44100
#define PCM_PERIOD          2048
#define PCM_CHANNELS        2
#define PCM_SAMPLES         8192

#define MAX_VOLUME          20
#define MIN_RAW_VALUE       -60
#define MAX_RAW_VALUE       30
#define DSP_DEV             "/dev/dsp"
#define MEM_DEV             "/dev/mem"

#define MI_AO_DEV           "/dev/mi_ao"
#define MI_AO_SETVOLUME     0x4008690b
#define MI_AO_GETVOLUME     0xc008690c
#define MI_AO_SETMUTE       0x4008690d

#define DEF_PCM_AVAIL       2048
#define DEF_QUEUE_SIZE      (2 * 1024 * 1024)

typedef struct _queue_t {
    uint8_t *buf;
    size_t size;
    size_t rsize;
    size_t wsize;
    pthread_mutex_t lock;
} queue_t;

typedef struct {
#if defined(MIYOO_MINI)
    struct {
        MI_AO_CHN channel;
        MI_AUDIO_DEV dev;
        MI_AUDIO_Attr_t set_attr;
        MI_AUDIO_Attr_t get_attr;
    } mi;
#endif

#if defined(MIYOO_A30) || defined(UT)
    struct {
        int fd;
    } dsp;

    struct mem {
        int fd;
        uint8_t *ptr;
    } mem;

    struct {
        int mul;
        int base;
        uint32_t *ptr;
    } vol;
#endif

    queue_t queue;
    pthread_t thread;

    struct {
        int ready;
        size_t len;
        uint8_t *buf;
    } pcm;
} nds_alsa;

#endif

