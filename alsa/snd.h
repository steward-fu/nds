// LGPL-2.1 License
// (C) 2026 Steward Fu <steward.fu@gmail.com>

#ifndef __SND_H__
#define __SND_H__

#include <iostream>
#include <thread>
#include <memory>
#include <string>
#include <optional>
#include <mutex>

#include "common.h"

#define SND_FREQ    48000
#define SND_PERIOD  2048
#define SND_CHANNEL 2
#define SND_SAMPLE  8192

using namespace std;

class ds_queue {
private:
    size_t read_size;
    size_t write_size;
    size_t total_size;
    mutex qlock;
    unique_ptr<uint8_t[]> qbuf;

public:
    ds_queue(int size) {
        trace(PRE_SND"%s|size=%d\n", __func__, size);

        qbuf = make_unique<uint8_t[]>(size);
        read_size = 0;
        write_size = 0;
        total_size = size;
    }

    ~ds_queue() {
        trace(PRE_SND"%s\n", __func__);
    }

    size_t get_read_size() {
        size_t ret = 0;

        if (read_size == write_size) {
            ret = 0;
        }
        else if (read_size < write_size) {
            ret = write_size - read_size;
        }
        else {
            ret = (total_size - read_size) + write_size;
        }

        trace(PRE_SND"%s|ret=%d\n", __func__, ret);

        return ret;
    }

    size_t get_write_size() {
        size_t ret = 0;

        if (write_size == read_size) {
            ret = total_size;
        }
        else if (write_size < read_size) {
            ret = read_size - write_size;
        }
        else {
            ret = (total_size - write_size) + read_size;
        }

        trace(PRE_SND"%s|ret=%d\n", __func__, ret);

        return ret;
    }

    optional<size_t> push_queue(const uint8_t *buf, size_t len) {
        size_t r = 0;
        size_t tmp = 0;
        size_t avai = 0;

        trace(PRE_SND"%s|buf=%p, len=%ld\n", __func__, buf, len);

        if (buf == nullptr) {
            error(PRE_SND"%s|buf is null\n", __func__);

            return nullopt;
        }

        if (len == 0) {
            trace(PRE_SND"%s|len=0\n", __func__);

            return 0;
        }

        lock_guard<mutex> lock(qlock);
        avai = get_write_size();
        if (len > avai) {
            len = avai;
        }
        r = len;

        if (len > 0) {
            if ((write_size >= read_size) && ((write_size + len) > total_size)) {
                tmp = total_size - write_size;
                len -= tmp;

                neon_memcpy(&qbuf[write_size], buf, tmp);
                neon_memcpy(&qbuf[0], &buf[tmp], len);
                write_size = len;
            }
            else {
                neon_memcpy(&qbuf[write_size], buf, len);
                write_size += len;
            }

            trace(PRE_SND"%s|update write_size to %ld\n", __func__, write_size);
        }

        return r;
    }

    optional<size_t> pop_queue(uint8_t *buf, size_t len) {
        size_t r = 0;
        size_t tmp = 0;
        size_t avai = 0;
        size_t size = len;

        trace(PRE_SND"%s|buf=%p, len=%ld\n", __func__, buf, len);

        if (buf == nullptr) {
            error(PRE_SND"%s|buf is null\n", __func__);

            return nullopt;
        }

        if (len == 0) {
            trace(PRE_SND"%s|len=0\n", __func__);

            return 0;
        }

        lock_guard<mutex> lock(qlock);
        avai = get_read_size();
        if (len > avai) {
            len = avai;
        }
        r = len;

        if (len > 0) {
            if ((read_size > write_size) && (read_size + len) > total_size) {
                tmp = total_size - read_size;
                size -= tmp;

                neon_memcpy(buf, &qbuf[read_size], tmp);
                neon_memcpy(&buf[tmp], &qbuf[0], len);
                read_size = len;
            }
            else {
                neon_memcpy(buf, &qbuf[read_size], len);
                read_size += len;
            }

            trace(PRE_SND"%s|update read_size to %ld\n", __func__, read_size);
        }

        return r;
    }
};

class hs_pulse {
private:
    pa_stream *stream;
    pa_context *context;
    pa_sample_spec spec;
    pa_buffer_attr attr;
    pa_mainloop_api *api;
    pa_threaded_mainloop *mainloop;

public:
    static void pulse_context_state(pa_context *context, void *userdata) {
        hs_pulse *p = reinterpret_cast<hs_pulse *>(userdata);

        trace(PRE_SND"%s|context=%p, userdata=%p\n", __func__, context, userdata);

        if (context) {
            switch (pa_context_get_state(context)) {
            case PA_CONTEXT_READY:
            case PA_CONTEXT_TERMINATED:
            case PA_CONTEXT_FAILED:
                pa_threaded_mainloop_signal(p->mainloop, 0);
                break;
            case PA_CONTEXT_UNCONNECTED:
            case PA_CONTEXT_CONNECTING:
            case PA_CONTEXT_AUTHORIZING:
            case PA_CONTEXT_SETTING_NAME:
                break;
            }
        }
    }

    static void pulse_stream_state(pa_stream *stream, void *userdata) {
        hs_pulse *p = reinterpret_cast<hs_pulse *>(userdata);

        trace(PRE_SND"%s|stream=%p, userdata=%p\n", __func__, stream, userdata);

        if (stream) {
            switch (pa_stream_get_state(stream)) {
            case PA_STREAM_READY:
            case PA_STREAM_FAILED:
            case PA_STREAM_TERMINATED:
                pa_threaded_mainloop_signal(p->mainloop, 0);
                break;
            case PA_STREAM_UNCONNECTED:
            case PA_STREAM_CREATING:
                break;
            }
        }
    }

    static void pulse_stream_latency_update(pa_stream *stream, void *userdata) {
        hs_pulse *p = reinterpret_cast<hs_pulse *>(userdata);

        trace(PRE_SND"%s|stream=%p, userdata=%p\n", __func__, stream, userdata);

        if (stream) {
            pa_threaded_mainloop_signal(p->mainloop, 0);
        }
    }

    static void pulse_stream_request(pa_stream *stream, size_t length, void *userdata) {
        hs_pulse *p = reinterpret_cast<hs_pulse *>(userdata);

        trace(PRE_SND"%s|stream=%p, length=%ld, userdata=%p\n", __func__, stream, length, userdata);

        if (stream) {
            pa_threaded_mainloop_signal(p->mainloop, 0);
        }
    }

    bool write_audio(const void *buf, size_t len) {
        trace(PRE_SND"%s|buf=%p, len=%ld\n", __func__, buf, len);

        if (!mainloop) {
            trace(PRE_SND"%s|mainloop is null\n", __func__);
            return false;
        }

        pa_threaded_mainloop_lock(mainloop);
        pa_stream_write(stream, buf, len, NULL, 0, PA_SEEK_RELATIVE);
        pa_threaded_mainloop_unlock(mainloop);

        return true;
    }

    hs_pulse() {
        trace(PRE_SND"%s\n", __func__);

        mainloop = pa_threaded_mainloop_new();
        if (mainloop == NULL) {
            throw runtime_error("failed to open PulseAudio device\n");
        }
        trace(PRE_SND"%s|mainloop=%p\n", __func__, mainloop);

        api = pa_threaded_mainloop_get_api(mainloop);
        trace(PRE_SND"%s|api=%p\n", __func__, api);

        context = pa_context_new(api, "NDS");
        trace(PRE_SND"%s|context=%p\n", __func__, context);

        pa_context_set_state_callback(context, pulse_context_state, this);
        pa_context_connect(context, NULL, static_cast<pa_context_flags_t>(0), NULL);
        pa_threaded_mainloop_lock(mainloop);
        pa_threaded_mainloop_start(mainloop);

        while (pa_context_get_state(context) != PA_CONTEXT_READY) {
            pa_threaded_mainloop_wait(mainloop);
        }

        spec.format = PA_SAMPLE_S16LE;
        spec.channels = SND_CHANNEL;
        spec.rate = SND_FREQ;
        attr.tlength = pa_bytes_per_second(&spec) / 5;
        attr.maxlength = attr.tlength * 3;
        attr.minreq = attr.tlength / 3;
        attr.prebuf = attr.tlength;

        stream = pa_stream_new(context, "NDS", &spec, NULL);
        trace(PRE_SND"%s|stream=%p\n", __func__, stream);

        pa_stream_set_state_callback(stream, pulse_stream_state, this);
        pa_stream_set_write_callback(stream, pulse_stream_request, this);
        pa_stream_set_latency_update_callback(stream, pulse_stream_latency_update, this);
        pa_stream_connect_playback(
            stream,
            NULL,
            &attr, 
            static_cast<pa_stream_flags_t>(
                PA_STREAM_ADJUST_LATENCY | 
                PA_STREAM_INTERPOLATE_TIMING | 
                PA_STREAM_AUTO_TIMING_UPDATE
            ),
            NULL,
            NULL
        );
        
        while (pa_context_get_state(context) != PA_CONTEXT_READY) {
            pa_threaded_mainloop_wait(mainloop);
        }

        pa_threaded_mainloop_unlock(mainloop);
    }

    ~hs_pulse() {
        trace(PRE_SND"%s\n", __func__);

        if (mainloop) {
            pa_threaded_mainloop_stop(mainloop);
        }
        if (stream) {
            pa_stream_unref(stream);
            stream = nullptr;
        }
        if (context) {
            pa_context_disconnect(context);
            pa_context_unref(context);
            context = nullptr;
        }
        if (mainloop) {
            pa_threaded_mainloop_stop(mainloop);
            mainloop = nullptr;
        }
    }
};

class ds_audio {
private:
    unique_ptr<ds_queue> queue;
    unique_ptr<hs_pulse> pulse;

    bool running;
    thread worker;

public:
    static ds_audio& instance();

    ds_audio() {
        trace(PRE_SND"%s\n", __func__);
    }

    ~ds_audio() {
        trace(PRE_SND"%s\n", __func__);
        if (running == true) {
            stop();
        }
    }

    ds_audio(const ds_audio&) = delete;
    ds_audio& operator=(const ds_audio&) = delete;

    bool start();
    bool stop();

    bool is_running() {
        trace(PRE_SND"%s|ret=%d\n", __func__, !!running);

        return running;
    }


    bool stream_audio(const void *buf, size_t len) {
        trace(PRE_SND"%s|buf=%p, len=%ld\n", __func__, buf, len);

        return pulse->write_audio(buf, len);
    }
    
    optional<size_t> enqueue(const uint8_t *buf, size_t len) {
        trace(PRE_SND"%s|buf=%p, len=%ld\n", __func__, buf, len);

        return queue->push_queue(buf, len);
    }

    optional<size_t> dequeue(uint8_t *buf, size_t len) {
        trace(PRE_SND"%s|buf=%p, len=%ld\n", __func__, buf, len);

        return queue->pop_queue(buf, len);
    }
};

#endif

