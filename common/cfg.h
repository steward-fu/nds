//
//    NDS Emulator (DraStic) for Miyoo Handheld
//
//    This software is provided 'as-is', without any express or implied
//    warranty.  In no event will the authors be held liable for any damages
//    arising from the use of this software.
//
//    Permission is granted to anyone to use this software for any purpose,
//    including commercial applications, and to alter it and redistribute it
//    freely, subject to the following restrictions:
//
//    1. The origin of this software must not be misrepresented; you must not
//       claim that you wrote the original software. If you use this software
//       in a product, an acknowledgment in the product documentation would be
//       appreciated but is not required.
//    2. Altered source versions must be plainly marked as such, and must not be
//       misrepresented as being the original software.
//    3. This notice may not be removed or altered from any source distribution.
//

#ifndef __CFG_H__
#define __CFG_H__

#if defined(A30)
#define JSON_SYS_FOLDER                 "/config"
#endif

#if defined(MINI)
#define JSON_SYS_FOLDER                 "/appconfigs"
#endif

#if defined(UT)
#define JSON_SYS_FOLDER                 "."
#endif

#define JSON_SYS_FILE                   "system.json"
#define JSON_SYS_PATH                   JSON_SYS_FOLDER "/" JSON_SYS_FILE
#define JSON_SYS_VOLUME                 "vol"

#define JSON_CFG_FOLDER                 "miyoo"
#define JSON_CFG_FILE                   "settings.json"
#define JSON_CFG_PATH                   JSON_CFG_FOLDER "/" JSON_CFG_FILE
#define JSON_CFG_VERSION                "version"
#define JSON_CFG_PEN                    "pen"
#define JSON_CFG_HALF_VOLUME            "half_volume"
#define JSON_CFG_AUTO_SAVE_LOAD         "auto_save_load"
#define JSON_CFG_AUTO_SAVE_LOAD_SLOT    "auto_save_load_slot"

#if !defined(MAX_PATH)
#define MAX_PATH 128
#endif

#define CHECK_POINTER_AND_RETURN(_x_) \
if (!_x_) { \
    err(COM"invalid parameter in %s()\n", __func__); \
    return -1; \
}

#define MAX_SLOT    10
#define CFG_VERSION "v2.0"

struct json_config {
    char json_path[MAX_PATH];

    int volume;
    int half_volume;
    char version[MAX_PATH];

    struct _auto_save_load {
        int slot;
        int enable;
    } auto_save_load;

    struct _pen {
        char image_path[MAX_PATH];
    } pen;
};

int init_cfg(void);
int read_cfg_json_file(void);
int read_sys_json_file(void);
int get_sys_volume(void);
int set_sys_volume(int vol);
int get_cfg_half_volume(void);
int set_cfg_half_volume(int enable);
int get_cfg_auto_save_load(void);
int set_cfg_auto_save_load(int enable);
int get_cfg_auto_save_load_slot(void);
int set_cfg_auto_save_load_slot(int slot);
int set_cfg_pen(const char *path);
int get_cfg_pen(char *ret, int ret_size);

#endif

