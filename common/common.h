// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_H__
#define __COMMON_H__

#define NDS_W           256
#define NDS_H           192
#define NDS_Wx2         (NDS_W << 1)
#define NDS_Hx2         (NDS_H << 1)
#define LAYOUT_BG_W     640
#define LAYOUT_BG_H     480

#define RES_PATH        "res"
#define BG_PATH         RES_PATH"/bg"
#define PEN_PATH        RES_PATH"/pen"
#define LANG_PATH       RES_PATH"/lang"
#define MENU_PATH       RES_PATH"/menu"
#define MASK_PATH       RES_PATH"/mask"
#define SHADER_PATH     RES_PATH"/shader"
#define CFG_FILE        RES_PATH"/nds.cfg"
#define FONT_FILE       RES_PATH"/font.ttf"

#define MENU_COLOR_DIS              0x808080
#define MENU_COLOR_SEL              0xffffff
#define MENU_COLOR_UNSEL            0x000000
#define MENU_COLOR_DRASTIC          0x289a35

#define BIOS_PATH                   "system/"
#define NDS_FIRMWARE_FILE           "nds_firmware.bin"
#define NDS_BIOS_ARM7_FILE          "nds_bios_arm7.bin"
#define NDS_BIOS_ARM9_FILE          "nds_bios_arm9.bin"
#define DRASTIC_BIOS_ARM7_FILE      "drastic_bios_arm7.bin"
#define DRASTIC_BIOS_ARM9_FILE      "drastic_bios_arm9.bin"

#define SDL2_MENU_BG_FILE           "bg.png"
#define SDL2_MENU_CURSOR_FILE       "cursor.png"
#define DRASTIC_MENU_BG0_FILE       "drastic_bg0.png"
#define DRASTIC_MENU_BG1_FILE       "drastic_bg1.png"
#define DRASTIC_MENU_YES_FILE       "drastic_yes.png"
#define DRASTIC_MENU_NO_FILE        "drastic_no.png"
#define DRASTIC_MENU_CURSOR_FILE    "drastic_cursor.png"

#if defined(XT894) || defined(QX1000)
#define DEF_STATE_PATH              "/home/defaultuser/Game/state/nds"
#endif

#if defined(XT897)
#define DEF_STATE_PATH              "/home/nemo/Game/state/nds"
#endif

#define CUSTOME_LAYOUT_XT894_C      "c_moto_xt894_c"
#define CUSTOME_LAYOUT_XT897_C      "c_moto_xt897_c"

enum layout_mode_t {
    LAYOUT_MODE_N0,      // 0 (Normal Mode)
    LAYOUT_MODE_N1,      // 1
    LAYOUT_MODE_N2,      // 2
    LAYOUT_MODE_N3,      // 3
    LAYOUT_MODE_N4,      // 4
    LAYOUT_MODE_N5,      // 5
    LAYOUT_MODE_N6,      // 6
    LAYOUT_MODE_N7,      // 7
    LAYOUT_MODE_N8,      // 8
    LAYOUT_MODE_N9,      // 9
    LAYOUT_MODE_N10,     // 10
    LAYOUT_MODE_N11,     // 11
    LAYOUT_MODE_N12,     // 12
    LAYOUT_MODE_N13,     // 13
    LAYOUT_MODE_N14,     // 14
    LAYOUT_MODE_N15,     // 15

    LAYOUT_MODE_B0,      // 16 (Book Mode)
    LAYOUT_MODE_B1,      // 17
    LAYOUT_MODE_B2,      // 18
    LAYOUT_MODE_B3,      // 19

    //LAYOUT_MODE_D0,      // 20 (Draw Mode)

#if defined(XT894) || defined(XT897)
    LAYOUT_MODE_C0,      // (Custom Mode)
    LAYOUT_MODE_C1,      //
    LAYOUT_MODE_C2,      //
#endif

#if defined(QX1000)
    LAYOUT_MODE_C0,      // (Custom Mode)
    LAYOUT_MODE_C1,      //
    LAYOUT_MODE_C2,      //
#endif

    LAYOUT_MODE_MAX,
};

#define NDS_ALPHA_MAX       9
#define MAX_PATH            255
#define MAX_LANG_NAME       16
#define MAX_LANG_FILE       32
#define MAX_LANG_LINE       256
#define MAX_MENU_LINE       256

#define DEF_LANG            "en_US"
#define DEF_PEN_SPEED       10
#define DEF_FAST_FORWARD    6
#define DEF_SWIN_ALPHA      6
#define DEF_SWIN_BORDER     1
#define DEF_JOY_DZONE       25

#if defined(XT894) || defined(XT897) || defined(QX1000)
#define DEF_LAYOUT_MODE     LAYOUT_MODE_C0
#define DEF_LAYOUT_ALT      LAYOUT_MODE_C1
#else
#define DEF_LAYOUT_MODE     LAYOUT_MODE_N1
#define DEF_LAYOUT_ALT      LAYOUT_MODE_N3
#endif

#define TRACE_LEVEL         3
#define DEBUG_LEVEL         2
#define ERROR_LEVEL         1
#define FATAL_LEVEL         0

extern int nds_debug_level;

#define LOG_FILE  "mynds.log"

#define trace(...) do {                         \
    if (nds_debug_level >= TRACE_LEVEL) {   \
        printf("[TRACE] ");                     \
        printf(__VA_ARGS__);                    \
    }                                           \
} while(0);

#define debug(...) do {                         \
    if (nds_debug_level >= DEBUG_LEVEL) {   \
        printf("[DEBUG] ");                     \
        printf(__VA_ARGS__);                    \
    }                                           \
} while(0);

#define error(...) do {                         \
    if (nds_debug_level >= ERROR_LEVEL) {   \
        printf("[ERROR] ");                     \
        printf(__VA_ARGS__);                    \
    }                                           \
} while(0);

#define fatal(...) do {                         \
    printf("[FATAL] ");                         \
    printf(__VA_ARGS__);                        \
    exit(-1);                                   \
} while(0);

typedef enum {
    TEXTURE_LCD0 = 0,
    TEXTURE_LCD1,
    TEXTURE_BG,
    TEXTURE_PEN,
    TEXTURE_MASK,
    TEXTURE_TMP,
    TEXTURE_MAX
} texture_type_t;

typedef enum {
    PEN_LT = 0,
    PEN_LB = 1,
    PEN_RT = 2,
    PEN_RB = 3,
    PEN_CP = 4
} pen_type_t;

typedef enum {
    FILTER_BLUR = 0,
    FILTER_PIXEL,
} filter_type_t;

#define CFG_USING_JSON_FORMAT   1
#define JSON_MAGIC              "magic"
#define JSON_SWAP_L1_L2         "l1_l2_swap"
#define JSON_SWAP_R1_R2         "r1_r2_swap"
#define JSON_KEY_ROTATE         "key_rotation"
#define JSON_LANG               "language"
#define JSON_HOTKEY             "hotkey_binding"
#define JSON_CPU_CORE           "cpu_core"
#define JSON_FAST_FORWARD       "fast_forward"
#define JSON_FILTER             "screen_filter"
#define JSON_STATE_PATH         "state_path"
#define JSON_AUTOSTATE_SLOT     "autostate_slot"
#define JSON_AUTOSTATE_ENABLE   "autostate_enable"
#define JSON_MENU_SEL           "menu_sel_bg"
#define JSON_MENU_MAX           "menu_max_bg_cnt"
#define JSON_MENU_SHOW_CURSOR   "menu_show_cursor"
#define JSON_LAYOUT_MODE_ALT    "layout_alt_mode"
#define JSON_LAYOUT_MODE_SEL    "layout_sel_mode"
#define JSON_LAYOUT_BG_SEL      "layout_sel_bg"
#define JSON_LAYOUT_MASK_SEL    "layout_sel_mask"
#define JSON_LAYOUT_SWIN_POS    "layout_swin_pos"
#define JSON_LAYOUT_SWIN_ALPHA  "layout_swin_alpha"
#define JSON_LAYOUT_SWIN_BORDER "layout_swin_border"
#define JSON_PEN_SEL            "pen_sel_img"
#define JSON_PEN_TYPE           "pen_sel_type"
#define JSON_PEN_MAX            "pen_max_img_cnt"
#define JSON_PEN_SPEED          "pen_speed"
#define JSON_JOY_MAX_X          "joy_max_x"
#define JSON_JOY_ZERO_X         "joy_zero_x"
#define JSON_JOY_MIN_X          "joy_max_x"
#define JSON_JOY_MAX_Y          "joy_max_y"
#define JSON_JOY_ZERO_Y         "joy_zero_y"
#define JSON_JOY_MIN_Y          "joy_max_y"
#define JSON_JOY_MODE           "joy_mode"
#define JSON_JOY_DZONE          "joy_dead_zone"
#define JSON_JOY_SHOW_CNT       "joy_disp_timeout"
#define JSON_JOY_CUST_KEY0      "joy_cust_key0"
#define JSON_JOY_CUST_KEY1      "joy_cust_key1"
#define JSON_JOY_CUST_KEY2      "joy_cust_key2"
#define JSON_JOY_CUST_KEY3      "joy_cust_key3"
#define JSON_RJOY_MAX_X         "right_joy_max_x"
#define JSON_RJOY_ZERO_X        "right_joy_zero_x"
#define JSON_RJOY_MIN_X         "right_joy_max_x"
#define JSON_RJOY_MAX_Y         "right_joy_max_y"
#define JSON_RJOY_ZERO_Y        "right_joy_zero_y"
#define JSON_RJOY_MIN_Y         "right_joy_max_y"
#define JSON_RJOY_MODE          "right_joy_mode"
#define JSON_RJOY_DZONE         "right_joy_dead_zone"
#define JSON_RJOY_SHOW_CNT      "right_joy_disp_timeout"
#define JSON_RJOY_CUST_KEY0     "right_joy_cust_key0"
#define JSON_RJOY_CUST_KEY1     "right_joy_cust_key1"
#define JSON_RJOY_CUST_KEY2     "right_joy_cust_key2"
#define JSON_RJOY_CUST_KEY3     "right_joy_cust_key3"

#define JSON_SET_INT(_X_, _BUF_)    json_object_object_add(root, _X_, json_object_new_int64(_BUF_));
#define JSON_GET_INT(_X_, _BUF_)    _BUF_ = json_object_get_int64(json_object_object_get(root, _X_))
#define JSON_SET_STR(_X_, _BUF_)    json_object_object_add(root, _X_, json_object_new_string(_BUF_));
#define JSON_GET_STR(_X_, _BUF_)    do { \
    struct json_object *str = NULL; \
    json_object_object_get(root, _X_); \
    if (str && json_object_is_type(str, json_type_string)) { \
        snprintf(_BUF_, sizeof(_BUF_), "%s", json_object_get_string(str)); \
    } \
} while(0);

typedef struct {
    uint32_t magic;

    int swap_l1_l2;
    int swap_r1_r2;
    int key_rotate;

    int lang;
    int hotkey;
    int cpu_core;
    int fast_forward;
    filter_type_t filter;
    char state_path[MAX_PATH];

    struct {
        int slot;
        int enable;
    } autostate;

    struct {
        int sel;
        int max;
        int show_cursor;
    } menu;

    struct {
        struct {
            int alt;
            int sel;
        } mode;

        struct {
            int sel;
        } bg;

        struct {
            int sel;
        } mask;

        struct {
            int pos;
            int alpha;
            int border;
        } swin;
    } layout;

    struct {
        int sel;
        int max;
        int speed;
        pen_type_t type;
    } pen;

#if defined(A30) || defined(FLIP) || defined(UT)
    struct {
        int max_x;
        int zero_x;
        int min_x;

        int max_y;
        int zero_y;
        int min_y;

        int mode;
        int dzone;
        int show_cnt;

        int cust_key[4];
    } joy, rjoy;
#endif
} nds_config;

#if defined(UT) || defined(QX1050)
#define neon_memcpy memcpy
#endif

int load_config(const char *);
int update_config(const char *);

int read_file(const char *, void *, int);
int write_file(const char *, const void *, int);

int write_log_to_file(const char *, const char *, ...);
void render_scanline_tiled_4bpp(void);
void* neon_memcpy(void *, const void *, size_t);

int drop_bios_files(const char *);
int get_dir_cnt(const char *);
int get_file_cnt(const char *);
int get_path_by_idx(const char *, int, char *);
int get_debug_level(void);
int update_debug_level(void);
char* upper_string(char *);
uint64_t get_tick_count_ms(void);
uint32_t rgb565_to_rgb888(uint16_t);

#endif

