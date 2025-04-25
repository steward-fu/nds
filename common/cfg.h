// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_CFG_H__
#define __COMMON_CFG_H__

#define CFG_PATH            "nds.pb"
#define MAX_PATH            255
#define MAX_MALLOC_SIZE     4096

#define DEF_CFG_VER                 "20250101"
#define DEF_CFG_LANG                LANG_en_US
#define DEF_CFG_DBG                 1
#define DEF_CFG_MODE                MODE_KEY
#define DEF_CFG_FRAMESKIP_TYPE      FRAMESKIP_TYPE_AUTOMATIC
#define DEF_CFG_FRAMESKIP_VALUE     4
#define DEF_CFG_SHOW_FRAME_COUNTER  0
#define DEF_CFG_SCREEN_SWAP         0
#define DEF_CFG_FAST_FORWARD        0
#define DEF_CFG_ENABL_SOUND         1
#define DEF_CFG_HIRES_3D            0

int quit_cfg(void);
int init_cfg(void);
int load_cfg(const char *);
int reset_cfg(void);
int update_cfg(const char *);
void* neon_memcpy(void *, const void *, size_t);

#endif

