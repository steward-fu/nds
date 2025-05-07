// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_H__
#define __COMMON_H__

#define NDS_VER     "v1.9"
#define NDS_W       256
#define NDS_H       192
#define NDS_Wx2     (NDS_W << 1)
#define NDS_Hx2     (NDS_H << 1)

#define BIOS_PATH                   "system"
#define BG_PATH                     "res/bg"
#define PEN_PATH                    "res/pen"
#define LANG_PATH                   "res/lang"
#define MENU_PATH                   "res/menu"
#define CFG_PATH                    "res/nds.cfg"
#define FONT_FILE                   "res/font/font.ttf"

#define SDL2_MENU_BG_FILE           "bg.png"
#define SDL2_MENU_CURSOR_FILE       "cursor.png"
#define DRASTIC_MENU_BG0_FILE       "drastic_bg0.png"
#define DRASTIC_MENU_BG1_FILE       "drastic_bg1.png"
#define DRASTIC_MENU_YES_FILE       "drastic_yes.png"
#define DRASTIC_MENU_NO_FILE        "drastic_no.png"
#define DRASTIC_MENU_CURSOR_FILE    "drastic_cursor.png"

#define NDS_DIS_MODE_VH_T0          0
#define NDS_DIS_MODE_VH_T1          1
#define NDS_DIS_MODE_S0             2
#define NDS_DIS_MODE_S1             3
#define NDS_DIS_MODE_V0             4
#define NDS_DIS_MODE_V1             5
#define NDS_DIS_MODE_H0             6
#define NDS_DIS_MODE_H1             7
#define NDS_DIS_MODE_VH_S0          8
#define NDS_DIS_MODE_VH_S1          9
#define NDS_DIS_MODE_VH_S2          10
#define NDS_DIS_MODE_VH_S3          11
#define NDS_DIS_MODE_VH_S4          12
#define NDS_DIS_MODE_VH_S5          13
#define NDS_DIS_MODE_VH_C0          14
#define NDS_DIS_MODE_VH_C1          15
#define NDS_DIS_MODE_HH0            16
#define NDS_DIS_MODE_HH1            17
#define NDS_DIS_MODE_HH2            18
#define NDS_DIS_MODE_HH3            19
#define NDS_DIS_MODE_LAST           19

#define NDS_DIS_MODE_HRES0          20
#define NDS_DIS_MODE_HRES1          21

#define NDS_ALPHA_MAX               7
#define NDS_BORDER_MAX              7

#define NDS_STATE_QSAVE             1
#define NDS_STATE_QLOAD             2
#define NDS_STATE_FF                4

#define NDS_JSON_MAX_CPU_CORE       "max_cpu_core"
#define NDS_JSON_MIN_CPU_CORE       "min_cpu_core"
#define NDS_JSON_MAX_CPU_FREQ       "max_cpu_freq"
#define NDS_JSON_MIN_CPU_FREQ       "min_cpu_freq"
#define NDS_JSON_PEN_IMG            "pen_img"
#define NDS_JSON_PEN_SPEED          "pen_speed"
#define NDS_JSON_LAYOUT_IMG         "layout_img"
#define NDS_JSON_LAYOUT_MODE        "layout_mode"

#define NDS_JSON_ALPHA_VALUE        "alpha"
#define NDS_JSON_ALPHA_POSITION     "position"
#define NDS_JSON_ALPHA_BORDER       "border"
#define NDS_JSON_OVERLAY            "overlay"
#define NDS_JSON_ALT_MODE           "alt"
#define NDS_JSON_SWAP_L1L2          "swap_l1l2"
#define NDS_JSON_SWAP_R1R2          "swap_r1r2"
#define NDS_JSON_LANG               "lang"
#define NDS_JSON_KEYS_ROTATE        "keys_rotate"
#define NDS_JSON_MENU_C0            "menu_c0"
#define NDS_JSON_MENU_C1            "menu_c1"
#define NDS_JSON_MENU_C2            "menu_c2"
#define NDS_JSON_AUTO_STATE         "auto_state"
#define NDS_JSON_AUTO_SLOT          "auto_slot"
#define NDS_JSON_HOTKEY             "hotkey"
#define NDS_JSON_STATES             "states"
#define NDS_JSON_MENU_BG            "menu_bg"
#define NDS_JSON_MENU_CURSOR        "menu_cursor"
#define NDS_JSON_FAST_FORWARD       "fast_forward"
#define NDS_JSON_JOY_MODE           "joy_mode"
#define NDS_JSON_JOY_DZONE          "joy_dzone"
#define NDS_JSON_JOY_CUSKEY0        "joy_cuskey0"
#define NDS_JSON_JOY_CUSKEY1        "joy_cuskey1"
#define NDS_JSON_JOY_CUSKEY2        "joy_cuskey2"
#define NDS_JSON_JOY_CUSKEY3        "joy_cuskey3"
#define NDS_JSON_RJOY_MODE          "rjoy_mode"
#define NDS_JSON_RJOY_DZONE         "rjoy_dzone"
#define NDS_JSON_RJOY_CUSKEY0       "rjoy_cuskey0"
#define NDS_JSON_RJOY_CUSKEY1       "rjoy_cuskey1"
#define NDS_JSON_RJOY_CUSKEY2       "rjoy_cuskey2"
#define NDS_JSON_RJOY_CUSKEY3       "rjoy_cuskey3"
#define NDS_JSON_CHK_BAT            "chk_bat"
#define NDS_JSON_VOL_KEY            "vol"
#define NDS_JSON_AUTO_STATE         "auto_state"
#define NDS_JSON_AUTO_SLOT          "auto_slot"
#define NDS_JSON_HALF_VOL           "half_vol"

#define LANG_FILE_LEN               16
#define MAX_LANG_FILE               32
#define MAX_LANG_LINE               256
#define MAX_MENU_LINE               256

#define DEBUG 0

#if DEBUG
#define debug(...) printf("[DEBUG] "__VA_ARGS__)
#else
#define debug(...)
#endif

#if !defined(UT)
#define error(...) printf("[ERROR] "__VA_ARGS__)
#else
#define error(...)
#endif

#define LOG_FILE_NAME "mynds.log"

#if !defined(MAX_PATH)
#define MAX_PATH        128
#endif

#define JSON_VOL_KEY "vol"

typedef enum {
    PEN_LT = 0,
    PEN_LB = 1,
    PEN_RT = 2,
    PEN_RB = 3,
    PEN_CP = 4
} pen_t;

typedef enum {
    FILTER_PIXEL = 0,
    FILTER_BLUR
} nds_filter;

typedef struct {
    struct {
        struct {
            int min;
            int max;
        } core, freq;
    } cpu;

    int volume;
    int hotkey;
    int chk_bat;
    int dis_mode;
    int alt_mode;
    int hres_mode;
    int swap_l1l2;
    int swap_r1r2;
    int auto_slot;
    int auto_state;
    int keys_rotate;
    int update_menu;
    int update_screen;
    int enable_752x560;
    int defer_update_bg;
    uint8_t fast_forward;
    int half_vol;
    int show_fps;
    nds_filter filter;

    uint32_t state;

    struct {
        char path[MAX_PATH];
    } bios;

    struct {
        char path[MAX_PATH];
    } states;

    char cfg_path[MAX_PATH];
    char home_path[MAX_PATH];

    struct {
        char path[MAX_PATH];
    } cfg;

    struct {
        char trans[MAX_LANG_FILE][LANG_FILE_LEN];
        char path[MAX_PATH];
    } lang;

    struct {
        int sel;
        int max;
        int enable;
        int show_cursor;
        struct _DRASTIC {
            int enable;
        } drastic;
        uint32_t c0;
        uint32_t c1;
        uint32_t c2;
        char path[MAX_PATH];
    } menu;

    struct {
        int val;
        int pos;
        int border;
    } alpha;

    struct {
        int img;
        int max;
        char path[MAX_PATH];
    } layout;

    struct {
        int img;
        int speed;
        int max;
        int pos;
        int type;
        char path[MAX_PATH];
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

        int cuskey[4];
    } joy, rjoy;
#endif
} nds_config;

int load_config(void);
int update_config(void);

int read_file(const char *, void *, int);
int write_file(const char *, const void *, int);

int write_log_to_file(const char *, const char *, ...);
void render_scanline_tiled_4bpp(void);
void* neon_memcpy(void *, const void *, size_t);

#endif

