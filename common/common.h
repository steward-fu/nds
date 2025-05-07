// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_H__
#define __COMMON_H__

#define NDS_VER     "v1.9"
#define NDS_W       256
#define NDS_H       192
#define NDS_Wx2     (NDS_W << 1)
#define NDS_Hx2     (NDS_H << 1)

#define RES_PATH    "res"
#define BG_PATH     RES_PATH"/bg"
#define PEN_PATH    RES_PATH"/pen"
#define LANG_PATH   RES_PATH"/lang"
#define MENU_PATH   RES_PATH"/menu"
#define CFG_PATH    RES_PATH"/nds.cfg"
#define FONT_FILE   RES_PATH"/font/font.ttf"

#define BIOS_PATH                   "system"
#define NDS_FIRMWARE_FILE           "nds_firmware.bin"
#define NDS_BIOS_ARM7_FILE          "nds_bios_arm7.bin"
#define NDS_BIOS_ARM9_FILE          "nds_bios_arm9.bin"
#define DRASTIC_BIOS_ARM7_FILE      "drastic_bios_arm7.bin"
#define DRASTIC_BIOS_ARM9_FILE      "drastic_bios_arm9.bin"

#define MENU_COLOR0                 0xffffff
#define MENU_COLOR1                 0x000000
#define MENU_COLOR2                 0x289a35
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

#define MAX_PATH                    128
#define MAX_LANG_NAME               16
#define MAX_LANG_FILE               32
#define MAX_LANG_LINE               256
#define MAX_MENU_LINE               256

#define DEBUG 0
#define LOG_FILE_NAME "mynds.log"

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

    int swap_l1_l2;
    int swap_r1_r2;
    int keys_rotate;

    int hotkey;
    int fast_forward;
    int check_battery;
    nds_filter filter;
    char lang[MAX_LANG_NAME];
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
        int alt;
        int mode;

        struct {
            int sel;
            int max;
        } bg;

        struct {
            int val;
            int pos;
            int border;
        } alpha;
    } layout;

    struct {
        int sel;
        int max;
        int speed;
        pen_t type;
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

int load_config(const char *);
int update_config(const char *);

int read_file(const char *, void *, int);
int write_file(const char *, const void *, int);

int write_log_to_file(const char *, const char *, ...);
void render_scanline_tiled_4bpp(void);
void* neon_memcpy(void *, const void *, size_t);

int drop_bios_files(const char *);

#endif

