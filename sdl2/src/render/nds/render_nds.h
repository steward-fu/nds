// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __RENDER_NDS_H__
#define __RENDER_NDS_H__

typedef struct Miyoo_TextureData {
    void *pixels;
    uint32_t size;
    uint32_t width;
    uint32_t height;
    uint32_t bits;
    uint32_t format;
    uint32_t pitch;
} Miyoo_TextureData;

#endif

