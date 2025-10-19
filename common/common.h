// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_H__
#define __COMMON_H__

#define NDS_W       256
#define NDS_H       192
#define NDS_Wx2     (NDS_W << 1)
#define NDS_Hx2     (NDS_H << 1)

#define RES_PATH        "res"
#define BG_PATH         RES_PATH"/bg"
#define PEN_PATH        RES_PATH"/pen"
#define LANG_PATH       RES_PATH"/lang"
#define MENU_PATH       RES_PATH"/menu"
#define MASK_PATH       RES_PATH"/mask"
#define SHADER_PATH     RES_PATH"/shader"
#define CFG_FILE        RES_PATH"/nds.cfg"
#define FONT_FILE       RES_PATH"/font/font.ttf"

#define BIOS_PATH                   "system/"
#define NDS_FIRMWARE_FILE           "nds_firmware.bin"
#define NDS_BIOS_ARM7_FILE          "nds_bios_arm7.bin"
#define NDS_BIOS_ARM9_FILE          "nds_bios_arm9.bin"
#define DRASTIC_BIOS_ARM7_FILE      "drastic_bios_arm7.bin"
#define DRASTIC_BIOS_ARM9_FILE      "drastic_bios_arm9.bin"

#define MENU_COLOR_DIS              0x808080
#define MENU_COLOR_SEL              0xffffff
#define MENU_COLOR_UNSEL            0x000000
#define MENU_COLOR_DRASTIC          0x289a35

#define SDL2_MENU_BG_FILE           "bg.png"
#define SDL2_MENU_CURSOR_FILE       "cursor.png"
#define DRASTIC_MENU_BG0_FILE       "drastic_bg0.png"
#define DRASTIC_MENU_BG1_FILE       "drastic_bg1.png"
#define DRASTIC_MENU_YES_FILE       "drastic_yes.png"
#define DRASTIC_MENU_NO_FILE        "drastic_no.png"
#define DRASTIC_MENU_CURSOR_FILE    "drastic_cursor.png"

#define LAYOUT_BG_W 640
#define LAYOUT_BG_H 480

enum layout_mode_t {
    LAYOUT_MODE_T0,      // 0 Normal Mode
    LAYOUT_MODE_T1,      // 1
    LAYOUT_MODE_T2,      // 2
    LAYOUT_MODE_T3,      // 3
    LAYOUT_MODE_T4,      // 4
    LAYOUT_MODE_T5,      // 5
    LAYOUT_MODE_T6,      // 6
    LAYOUT_MODE_T7,      // 7
    LAYOUT_MODE_T8,      // 8
    LAYOUT_MODE_T9,      // 9
    LAYOUT_MODE_T10,     // 10
    LAYOUT_MODE_T11,     // 11
    LAYOUT_MODE_T12,     // 12
    LAYOUT_MODE_T13,     // 13
    LAYOUT_MODE_T14,     // 14
    LAYOUT_MODE_T15,     // 15
    LAYOUT_MODE_B0,      // 16 Book Mode
    LAYOUT_MODE_B1,      // 17
    LAYOUT_MODE_B2,      // 18
    LAYOUT_MODE_B3,      // 19
    LAYOUT_MODE_D0,      // 20 Draw Mode
#if defined(XT894) || defined(XT897)
    LAYOUT_MODE_C0,      // Customized Mode
    LAYOUT_MODE_C1,      //
#endif
#if defined(QX1000)
    LAYOUT_MODE_C0,      // Customized Mode
    LAYOUT_MODE_C1,      //
#endif
    LAYOUT_MODE_MAX,
};

#define NDS_ALPHA_MAX   9
#define MAX_PATH        255
#define MAX_LANG_NAME   16
#define MAX_LANG_FILE   32
#define MAX_LANG_LINE   256
#define MAX_MENU_LINE   256

#define DEF_LANG            "en_US"
#define DEF_PEN_SPEED       10
#define DEF_FAST_FORWARD    6
#define DEF_SWIN_ALPHA      6
#define DEF_SWIN_BORDER     1
#define DEF_LAYOUT_MODE     1
#define DEF_JOY_DZONE       25

#define TRACE_LEVEL  3
#define DEBUG_LEVEL  2
#define ERROR_LEVEL  1
#define FATAL_LEVEL  0

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

typedef struct {
    uint32_t magic;

    int swap_l1_l2;
    int swap_r1_r2;
    int keys_rotate;

    int lang;

#if !defined(MINI)
    int shader;
#endif

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
            int sel;

            struct {
                int x;
                int y;
                int w;
                int h;
            } lcd[2];
        } cust;

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
uint64_t get_tick_count_ms(void);
int get_debug_level(void);

#endif

