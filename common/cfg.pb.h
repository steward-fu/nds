/* Automatically generated nanopb header */
/* Generated by nanopb-1.0.0-dev */

#ifndef PB_CFG_PB_H_INCLUDED
#define PB_CFG_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _pen_show_mode {
    _pen_show_mode_auto = 0,
    _pen_show_mode_always = 1
} _pen_show_mode;

typedef enum _key_hotkey {
    _key_hotkey_menu = 0,
    _key_hotkey_select = 1
} _key_hotkey;

typedef enum _joy_lr_mode {
    _joy_lr_mode_key = 0,
    _joy_lr_mode_pen = 1,
    _joy_lr_mode_cust = 2
} _joy_lr_mode;

/* Struct definitions */
typedef struct _display_small {
    int32_t alpha;
    int32_t border;
    int32_t position;
} _display_small;

typedef struct _display {
    int32_t layout;
    int32_t alt_layout;
    bool has_small;
    _display_small small;
} _display;

typedef struct _cpu_freq {
    int32_t min;
    int32_t max;
} _cpu_freq;

typedef struct _cpu_core {
    int32_t min;
    int32_t max;
} _cpu_core;

typedef struct _cpu {
    bool has_freq;
    _cpu_freq freq;
    bool has_core;
    _cpu_core core;
} _cpu;

typedef struct _pen_show {
    int32_t count;
    _pen_show_mode mode;
} _pen_show;

typedef struct _pen_speed {
    int32_t x;
    int32_t y;
} _pen_speed;

typedef struct _pen {
    bool has_show;
    _pen_show show;
    char image[255];
    int32_t screen;
    bool has_speed;
    _pen_speed speed;
} _pen;

typedef struct _menu {
    char bg[255];
    bool show_cursor;
} _menu;

typedef struct _autosave {
    bool enable;
    int32_t slot;
} _autosave;

typedef struct _key_swap {
    bool l1_l2;
    bool r1_r2;
} _key_swap;

typedef struct _key {
    int32_t rotate;
    _key_hotkey hotkey;
    bool has_swap;
    _key_swap swap;
} _key;

typedef struct _joy_lr_xy {
    int32_t min;
    int32_t max;
    int32_t zero;
    int32_t step;
    int32_t dead;
} _joy_lr_xy;

typedef struct _joy_lr_remap {
    int32_t up;
    int32_t down;
    int32_t left;
    int32_t right;
} _joy_lr_remap;

typedef struct _joy_lr {
    bool has_x;
    _joy_lr_xy x;
    bool has_y;
    _joy_lr_xy y;
    _joy_lr_mode mode;
    bool has_remap;
    _joy_lr_remap remap;
} _joy_lr;

typedef struct _joy {
    bool has_left;
    _joy_lr left;
    bool has_right;
    _joy_lr right;
} _joy;

typedef struct _miyoo_settings {
    char version[255];
    char language[255];
    char font_path[255];
    char state_folder[255];
    char border_image[255];
    char home_folder[255];
    int32_t debug_level;
    int32_t system_volume;
    int32_t fast_forward;
    bool half_volume;
    bool low_battery_close;
    bool has_cpu;
    _cpu cpu;
    bool has_menu;
    _menu menu;
    bool has_display;
    _display display;
    bool has_autosave;
    _autosave autosave;
    bool has_pen;
    _pen pen;
    bool has_key;
    _key key;
    bool has_joy;
    _joy joy;
} miyoo_settings;


#ifdef _cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _pen_show_mode_MIN _pen_show_mode_auto
#define _pen_show_mode_MAX _pen_show_mode_always
#define _pen_show_mode_ARRAYSIZE ((_pen_show_mode)(_pen_show_mode_always+1))

#define _key_hotkey_MIN _key_hotkey_menu
#define _key_hotkey_MAX _key_hotkey_select
#define _key_hotkey_ARRAYSIZE ((_key_hotkey)(_key_hotkey_select+1))

#define _joy_lr_mode_MIN _joy_lr_mode_key
#define _joy_lr_mode_MAX _joy_lr_mode_cust
#define _joy_lr_mode_ARRAYSIZE ((_joy_lr_mode)(_joy_lr_mode_cust+1))







#define _pen_show_mode_ENUMTYPE _pen_show_mode




#define _key_hotkey_ENUMTYPE _key_hotkey



#define _joy_lr_mode_ENUMTYPE _joy_lr_mode





/* Initializer values for message structs */
#define _display_init_default {0, 0, false, _display_small_init_default}
#define _display_small_init_default {0, 0, 0}
#define _cpu_init_default {false, _cpu_freq_init_default, false, _cpu_core_init_default}
#define _cpu_freq_init_default {0, 0}
#define _cpu_core_init_default {0, 0}
#define _pen_init_default {false, _pen_show_init_default, "", 0, false, _pen_speed_init_default}
#define _pen_show_init_default {0, _pen_show_mode_MIN}
#define _pen_speed_init_default {0, 0}
#define _menu_init_default {"", 0}
#define _autosave_init_default {0, 0}
#define _key_init_default {0, _key_hotkey_MIN, false, _key_swap_init_default}
#define _key_swap_init_default {0, 0}
#define _joy_init_default {false, _joy_lr_init_default, false, _joy_lr_init_default}
#define _joy_lr_init_default {false, _joy_lr_xy_init_default, false, _joy_lr_xy_init_default, _joy_lr_mode_MIN, false, _joy_lr_remap_init_default}
#define _joy_lr_xy_init_default {0, 0, 0, 0, 0}
#define _joy_lr_remap_init_default {0, 0, 0, 0}
#define miyoo_settings_init_default {"", "", "", "", "", "", 0, 0, 0, 0, 0, false, _cpu_init_default, false, _menu_init_default, false, _display_init_default, false, _autosave_init_default, false, _pen_init_default, false, _key_init_default, false, _joy_init_default}
#define _display_init_zero {0, 0, false, _display_small_init_zero}
#define _display_small_init_zero {0, 0, 0}
#define _cpu_init_zero {false, _cpu_freq_init_zero, false, _cpu_core_init_zero}
#define _cpu_freq_init_zero {0, 0}
#define _cpu_core_init_zero {0, 0}
#define _pen_init_zero {false, _pen_show_init_zero, "", 0, false, _pen_speed_init_zero}
#define _pen_show_init_zero {0, _pen_show_mode_MIN}
#define _pen_speed_init_zero {0, 0}
#define _menu_init_zero {"", 0}
#define _autosave_init_zero {0, 0}
#define _key_init_zero {0, _key_hotkey_MIN, false, _key_swap_init_zero}
#define _key_swap_init_zero {0, 0}
#define _joy_init_zero {false, _joy_lr_init_zero, false, _joy_lr_init_zero}
#define _joy_lr_init_zero {false, _joy_lr_xy_init_zero, false, _joy_lr_xy_init_zero, _joy_lr_mode_MIN, false, _joy_lr_remap_init_zero}
#define _joy_lr_xy_init_zero {0, 0, 0, 0, 0}
#define _joy_lr_remap_init_zero {0, 0, 0, 0}
#define miyoo_settings_init_zero {"", "", "", "", "", "", 0, 0, 0, 0, 0, false, _cpu_init_zero, false, _menu_init_zero, false, _display_init_zero, false, _autosave_init_zero, false, _pen_init_zero, false, _key_init_zero, false, _joy_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define _display_small_alpha_tag 1
#define _display_small_border_tag 2
#define _display_small_position_tag 3
#define _display_layout_tag 1
#define _display_alt_layout_tag 2
#define _display_small_tag 3
#define _cpu_freq_min_tag 1
#define _cpu_freq_max_tag 2
#define _cpu_core_min_tag 1
#define _cpu_core_max_tag 2
#define _cpu_freq_tag 1
#define _cpu_core_tag 2
#define _pen_show_count_tag 1
#define _pen_show_mode_tag 2
#define _pen_speed_x_tag 1
#define _pen_speed_y_tag 2
#define _pen_show_tag 1
#define _pen_image_tag 2
#define _pen_screen_tag 3
#define _pen_speed_tag 4
#define _menu_bg_tag 1
#define _menu_show_cursor_tag 2
#define _autosave_enable_tag 1
#define _autosave_slot_tag 2
#define _key_swap_l1_l2_tag 1
#define _key_swap_r1_r2_tag 2
#define _key_rotate_tag 1
#define _key_hotkey_tag 2
#define _key_swap_tag 3
#define _joy_lr_xy_min_tag 1
#define _joy_lr_xy_max_tag 2
#define _joy_lr_xy_zero_tag 3
#define _joy_lr_xy_step_tag 4
#define _joy_lr_xy_dead_tag 5
#define _joy_lr_remap_up_tag 1
#define _joy_lr_remap_down_tag 2
#define _joy_lr_remap_left_tag 3
#define _joy_lr_remap_right_tag 4
#define _joy_lr_x_tag 1
#define _joy_lr_y_tag 2
#define _joy_lr_mode_tag 3
#define _joy_lr_remap_tag 4
#define _joy_left_tag 1
#define _joy_right_tag 2
#define miyoo_settings_version_tag 1
#define miyoo_settings_language_tag 2
#define miyoo_settings_font_path_tag 3
#define miyoo_settings_state_folder_tag 4
#define miyoo_settings_border_image_tag 5
#define miyoo_settings_home_folder_tag 6
#define miyoo_settings_debug_level_tag 7
#define miyoo_settings_system_volume_tag 8
#define miyoo_settings_fast_forward_tag 9
#define miyoo_settings_half_volume_tag 10
#define miyoo_settings_low_battery_close_tag 11
#define miyoo_settings_cpu_tag 12
#define miyoo_settings_menu_tag 13
#define miyoo_settings_display_tag 14
#define miyoo_settings_autosave_tag 15
#define miyoo_settings_pen_tag 16
#define miyoo_settings_key_tag 17
#define miyoo_settings_joy_tag 18

/* Struct field encoding specification for nanopb */
#define _display_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, layout, 1) \
X(a, STATIC, SINGULAR, INT32, alt_layout, 2) \
X(a, STATIC, OPTIONAL, MESSAGE, small, 3)
#define _display_CALLBACK NULL
#define _display_DEFAULT NULL
#define _display_small_MSGTYPE _display_small

#define _display_small_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, alpha, 1) \
X(a, STATIC, SINGULAR, INT32, border, 2) \
X(a, STATIC, SINGULAR, INT32, position, 3)
#define _display_small_CALLBACK NULL
#define _display_small_DEFAULT NULL

#define _cpu_FIELDLIST(X, a) \
X(a, STATIC, OPTIONAL, MESSAGE, freq, 1) \
X(a, STATIC, OPTIONAL, MESSAGE, core, 2)
#define _cpu_CALLBACK NULL
#define _cpu_DEFAULT NULL
#define _cpu_freq_MSGTYPE _cpu_freq
#define _cpu_core_MSGTYPE _cpu_core

#define _cpu_freq_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, min, 1) \
X(a, STATIC, SINGULAR, INT32, max, 2)
#define _cpu_freq_CALLBACK NULL
#define _cpu_freq_DEFAULT NULL

#define _cpu_core_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, min, 1) \
X(a, STATIC, SINGULAR, INT32, max, 2)
#define _cpu_core_CALLBACK NULL
#define _cpu_core_DEFAULT NULL

#define _pen_FIELDLIST(X, a) \
X(a, STATIC, OPTIONAL, MESSAGE, show, 1) \
X(a, STATIC, SINGULAR, STRING, image, 2) \
X(a, STATIC, SINGULAR, INT32, screen, 3) \
X(a, STATIC, OPTIONAL, MESSAGE, speed, 4)
#define _pen_CALLBACK NULL
#define _pen_DEFAULT NULL
#define _pen_show_MSGTYPE _pen_show
#define _pen_speed_MSGTYPE _pen_speed

#define _pen_show_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, count, 1) \
X(a, STATIC, SINGULAR, UENUM, mode, 2)
#define _pen_show_CALLBACK NULL
#define _pen_show_DEFAULT NULL

#define _pen_speed_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, x, 1) \
X(a, STATIC, SINGULAR, INT32, y, 2)
#define _pen_speed_CALLBACK NULL
#define _pen_speed_DEFAULT NULL

#define _menu_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, STRING, bg, 1) \
X(a, STATIC, SINGULAR, BOOL, show_cursor, 2)
#define _menu_CALLBACK NULL
#define _menu_DEFAULT NULL

#define _autosave_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, BOOL, enable, 1) \
X(a, STATIC, SINGULAR, INT32, slot, 2)
#define _autosave_CALLBACK NULL
#define _autosave_DEFAULT NULL

#define _key_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, rotate, 1) \
X(a, STATIC, SINGULAR, UENUM, hotkey, 2) \
X(a, STATIC, OPTIONAL, MESSAGE, swap, 3)
#define _key_CALLBACK NULL
#define _key_DEFAULT NULL
#define _key_swap_MSGTYPE _key_swap

#define _key_swap_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, BOOL, l1_l2, 1) \
X(a, STATIC, SINGULAR, BOOL, r1_r2, 2)
#define _key_swap_CALLBACK NULL
#define _key_swap_DEFAULT NULL

#define _joy_FIELDLIST(X, a) \
X(a, STATIC, OPTIONAL, MESSAGE, left, 1) \
X(a, STATIC, OPTIONAL, MESSAGE, right, 2)
#define _joy_CALLBACK NULL
#define _joy_DEFAULT NULL
#define _joy_left_MSGTYPE _joy_lr
#define _joy_right_MSGTYPE _joy_lr

#define _joy_lr_FIELDLIST(X, a) \
X(a, STATIC, OPTIONAL, MESSAGE, x, 1) \
X(a, STATIC, OPTIONAL, MESSAGE, y, 2) \
X(a, STATIC, SINGULAR, UENUM, mode, 3) \
X(a, STATIC, OPTIONAL, MESSAGE, remap, 4)
#define _joy_lr_CALLBACK NULL
#define _joy_lr_DEFAULT NULL
#define _joy_lr_x_MSGTYPE _joy_lr_xy
#define _joy_lr_y_MSGTYPE _joy_lr_xy
#define _joy_lr_remap_MSGTYPE _joy_lr_remap

#define _joy_lr_xy_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, min, 1) \
X(a, STATIC, SINGULAR, INT32, max, 2) \
X(a, STATIC, SINGULAR, INT32, zero, 3) \
X(a, STATIC, SINGULAR, INT32, step, 4) \
X(a, STATIC, SINGULAR, INT32, dead, 5)
#define _joy_lr_xy_CALLBACK NULL
#define _joy_lr_xy_DEFAULT NULL

#define _joy_lr_remap_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, up, 1) \
X(a, STATIC, SINGULAR, INT32, down, 2) \
X(a, STATIC, SINGULAR, INT32, left, 3) \
X(a, STATIC, SINGULAR, INT32, right, 4)
#define _joy_lr_remap_CALLBACK NULL
#define _joy_lr_remap_DEFAULT NULL

#define miyoo_settings_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, STRING, version, 1) \
X(a, STATIC, SINGULAR, STRING, language, 2) \
X(a, STATIC, SINGULAR, STRING, font_path, 3) \
X(a, STATIC, SINGULAR, STRING, state_folder, 4) \
X(a, STATIC, SINGULAR, STRING, border_image, 5) \
X(a, STATIC, SINGULAR, STRING, home_folder, 6) \
X(a, STATIC, SINGULAR, INT32, debug_level, 7) \
X(a, STATIC, SINGULAR, INT32, system_volume, 8) \
X(a, STATIC, SINGULAR, INT32, fast_forward, 9) \
X(a, STATIC, SINGULAR, BOOL, half_volume, 10) \
X(a, STATIC, SINGULAR, BOOL, low_battery_close, 11) \
X(a, STATIC, OPTIONAL, MESSAGE, cpu, 12) \
X(a, STATIC, OPTIONAL, MESSAGE, menu, 13) \
X(a, STATIC, OPTIONAL, MESSAGE, display, 14) \
X(a, STATIC, OPTIONAL, MESSAGE, autosave, 15) \
X(a, STATIC, OPTIONAL, MESSAGE, pen, 16) \
X(a, STATIC, OPTIONAL, MESSAGE, key, 17) \
X(a, STATIC, OPTIONAL, MESSAGE, joy, 18)
#define miyoo_settings_CALLBACK NULL
#define miyoo_settings_DEFAULT NULL
#define miyoo_settings_cpu_MSGTYPE _cpu
#define miyoo_settings_menu_MSGTYPE _menu
#define miyoo_settings_display_MSGTYPE _display
#define miyoo_settings_autosave_MSGTYPE _autosave
#define miyoo_settings_pen_MSGTYPE _pen
#define miyoo_settings_key_MSGTYPE _key
#define miyoo_settings_joy_MSGTYPE _joy

extern const pb_msgdesc_t _display_msg;
extern const pb_msgdesc_t _display_small_msg;
extern const pb_msgdesc_t _cpu_msg;
extern const pb_msgdesc_t _cpu_freq_msg;
extern const pb_msgdesc_t _cpu_core_msg;
extern const pb_msgdesc_t _pen_msg;
extern const pb_msgdesc_t _pen_show_msg;
extern const pb_msgdesc_t _pen_speed_msg;
extern const pb_msgdesc_t _menu_msg;
extern const pb_msgdesc_t _autosave_msg;
extern const pb_msgdesc_t _key_msg;
extern const pb_msgdesc_t _key_swap_msg;
extern const pb_msgdesc_t _joy_msg;
extern const pb_msgdesc_t _joy_lr_msg;
extern const pb_msgdesc_t _joy_lr_xy_msg;
extern const pb_msgdesc_t _joy_lr_remap_msg;
extern const pb_msgdesc_t miyoo_settings_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define _display_fields &_display_msg
#define _display_small_fields &_display_small_msg
#define _cpu_fields &_cpu_msg
#define _cpu_freq_fields &_cpu_freq_msg
#define _cpu_core_fields &_cpu_core_msg
#define _pen_fields &_pen_msg
#define _pen_show_fields &_pen_show_msg
#define _pen_speed_fields &_pen_speed_msg
#define _menu_fields &_menu_msg
#define _autosave_fields &_autosave_msg
#define _key_fields &_key_msg
#define _key_swap_fields &_key_swap_msg
#define _joy_fields &_joy_msg
#define _joy_lr_fields &_joy_lr_msg
#define _joy_lr_xy_fields &_joy_lr_xy_msg
#define _joy_lr_remap_fields &_joy_lr_remap_msg
#define miyoo_settings_fields &miyoo_settings_msg

/* Maximum encoded size of messages (where known) */
#define CFG_PB_H_MAX_SIZE miyoo_settings_size
#define _autosave_size 13
#define _cpu_core_size 22
#define _cpu_freq_size 22
#define _cpu_size 48
#define _display_small_size 33
#define _display_size 57
#define _joy_lr_remap_size 44
#define _joy_lr_xy_size 55
#define _joy_lr_size 162
#define _joy_size 330
#define _key_swap_size 4
#define _key_size 19
#define _menu_size 259
#define _pen_show_size 13
#define _pen_speed_size 22
#define _pen_size 307
#define miyoo_settings_size 2632

#ifdef _cplusplus
} /* extern "C" */
#endif

#endif
