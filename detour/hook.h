// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __HOOK_H__
#define __HOOK_H__

#define MAX_STATE_SLOT      32
#define CODE_FAST_FORWARD   0x08006ad0
#define ALIGN_ADDR(addr)    ((void*)((size_t)(addr) & ~(page_size - 1)))

enum _CONTROL_INDEX {
    CONTROL_INDEX_UP = 0,
    CONTROL_INDEX_DOWN,
    CONTROL_INDEX_LEFT,
    CONTROL_INDEX_RIGHT,
    CONTROL_INDEX_A,
    CONTROL_INDEX_B,
    CONTROL_INDEX_X,
    CONTROL_INDEX_Y,
    CONTROL_INDEX_L,
    CONTROL_INDEX_R,
    CONTROL_INDEX_START,
    CONTROL_INDEX_SELECT,
    CONTROL_INDEX_HINGE,
    CONTROL_INDEX_TOUCH_CURSOR_UP,
    CONTROL_INDEX_TOUCH_CURSOR_DOWN,
    CONTROL_INDEX_TOUCH_CURSOR_LEFT,
    CONTROL_INDEX_TOUCH_CURSOR_RIGHT,
    CONTROL_INDEX_TOUCH_CURSOR_PRESS,
    CONTROL_INDEX_MENU,
    CONTROL_INDEX_SAVE_STATE,
    CONTROL_INDEX_LOAD_STATE,
    CONTROL_INDEX_FAST_FORWARD,
    CONTROL_INDEX_SWAP_SCREENS,
    CONTROL_INDEX_SWAP_ORIENTATION_A,
    CONTROL_INDEX_SWAP_ORIENTATION_B,
    CONTROL_INDEX_LOAD_GAME,
    CONTROL_INDEX_QUIT,
    CONTROL_INDEX_FAKE_MICROPHONE,
    CONTROL_INDEX_UI_UP,
    CONTROL_INDEX_UI_DOWN,
    CONTROL_INDEX_UI_LEFT,
    CONTROL_INDEX_UI_RIGHT,
    CONTROL_INDEX_UI_SELECT,
    CONTROL_INDEX_UI_BACK,
    CONTROL_INDEX_UI_EXIT,
    CONTROL_INDEX_UI_PAGE_UP,
    CONTROL_INDEX_UI_PAGE_DOWN,
    CONTROL_INDEX_UI_SWITCH,
    CONTROL_INDEX_MAX
};

typedef struct {
    FILE *_file;
    uint8_t *memory_file;
    uint32_t memory_file_size;
    uint8_t *buffer;
    uint8_t *buffer_ptr;
} mem_file_struct;

typedef struct {
    char directory[1024];
    char file_name[1024];
    pthread_t thread;
    mem_file_struct file;
    uint8_t *buffer;
    uint32_t extensions;
    uint32_t busy;
} savestate_thread_data_struct;

typedef struct {
    uintptr_t *base;
    uint32_t *gamecard_name;
    uint32_t *savestate_num;
    struct {
        uintptr_t *base;
        uint32_t *frameskip_type;
        uint32_t *frameskip_value;
        uint32_t *safe_frameskip;
        uint32_t *show_frame_counter;
        uint32_t *screen_orientation;
        uint32_t *screen_scaling;
        uint32_t *screen_swap;
        uint32_t *savestate_number;
        uint32_t *fast_forward;
        uint32_t *enable_sound;
        uint32_t *clock_speed;
        uint32_t *threaded_3d;
        uint32_t *mirror_touch;
        uint32_t *compress_savestates;
        uint32_t *savestate_snapshot;
        uint32_t *unzip_roms;
        uint32_t *backup_in_savestates;
        uint32_t *ignore_gamecard_limit;
        uint32_t *frame_interval;
        uint32_t *trim_roms;
        uint32_t *fix_main_2d_screen;
        uint32_t *disable_edge_marking;
        uint32_t *hires_3d;
        uint32_t *use_rtc_custom_time;
        uint64_t *rtc_custom_time;
        uint32_t *rtc_system_time;
        uint32_t *slot2_device_type;
        uint32_t *rumble_frames;
        uint32_t *enable_cheats;
        uint32_t *batch_threads_3d_count;
        uint32_t *bypass_3d;
        struct {
            wchar_t *username;
            uint32_t *language;
            uint32_t *favorite_color;
            uint32_t *birthday_month;
            uint32_t *birthday_day;
        } firmware;

        uint16_t *controls_a;
        uint16_t *controls_b;
    } config;

    struct {
        float *realtime_speed_percentage;
        float *rendered_frames_percentage;
    } video;
} system_t;

typedef struct {
    void *texture;
    void *pixels;
    uint32_t *x;
    uint32_t *y;
    uint32_t *w;
    uint32_t *h;
    uint8_t *show;
    uint8_t *hires_mode;
} screen_t;

typedef struct {
    uintptr_t *window;
    uintptr_t *renderer;
    uint32_t *pixel_format;
    uint32_t *color_depth;
    uint32_t *bytes_per_pixel;
    uint32_t *scale_factor;
    uint32_t *update_orientation;
    uint32_t *logical_width;
    uint32_t *logical_height;
    uint32_t *swap_screens;
    uint32_t *needs_reinitializing;
    screen_t screen[2];
} sdl_t;

typedef struct {
    uint32_t *step_table;
    uint32_t *index_step_table;
} adpcm_t;

typedef struct {
    system_t system;
    sdl_t sdl;
    adpcm_t adpcm;
    uint32_t *pcm_handler;
    uint32_t *fast_forward;
    uint32_t *desmume_footer_str;
    savestate_thread_data_struct *savestate_thread;
} var_t;

typedef struct {
    void *menu;
    void *free;
    void *quit;
    void *malloc;
    void *realloc;
    void *screen_copy16;
    void *print_string;
    void *load_state_index;
    void *save_state_index;
    void *savestate_pre;
    void *savestate_post;
    void *update_screen;
    void *load_state;
    void *save_state;
    void *blit_screen_menu;
    void *initialize_backup;
    void *platform_get_input;
    void *set_screen_swap;
    void *set_screen_menu_on;
    void *set_screen_menu_off;
    void *set_screen_hires_mode;
    void *set_screen_orientation;
    void *set_screen_scale_factor;
    void *get_screen_ptr;
    void *spu_adpcm_decode_block;
    void *render_scanline_tiled_4bpp;
    void *render_polygon_setup_perspective_steps;
    void *puts;
    void *printf_chk;
    void *select_quit;
    void *config_setup_input_map;
    void *print_string_ext;
} fun_t;

typedef struct {
    fun_t fun;
    var_t var;
} nds_hook;

typedef enum {
    BACKUP_TYPE_NONE = 0,
    BACKUP_TYPE_FLASH,
    BACKUP_TYPE_EEPROM,
    BACKUP_TYPE_NAND
} backup_type_enum;

typedef struct {
    uint32_t dirty_page_bitmap[2048];
    char file_path[1024];
    backup_type_enum type;
    uint32_t access_address;
    uint32_t address_mask;
    uint32_t fix_file_size;
    uint8_t *data;
    uint8_t jedec_id[4];
    uint32_t write_frame_counter;
    uint16_t mode;
    uint8_t state;
    uint8_t status;
    uint8_t address_bytes;
    uint8_t state_step;
    uint8_t firmware;
    uint8_t footer_written;
} backup_struct;

typedef struct {
    int16_t adpcm_sample_cache[64];
    uint64_t sample_offset;
    uint64_t frequency_step;
    uint32_t adpcm_cache_block_offset;
    uint8_t *io_region;
    uint8_t *samples;
    uint32_t sample_address;
    uint32_t sample_length;
    uint32_t loop_wrap;
    int16_t volume_multiplier_left;
    int16_t volume_multiplier_right;
    int16_t adpcm_loop_sample;
    int16_t adpcm_sample;
    uint8_t format;
    uint8_t dirty_bits;
    uint8_t active;
    uint8_t adpcm_loop_index;
    uint8_t adpcm_current_index;
    uint8_t adpcm_looped;
    uint8_t capture_timer;
} spu_channel_struct;

typedef struct {
    void *capture_ptr;
    void *system;
    uint32_t button_status;
    uint32_t touch_x;
    uint32_t touch_y;
    uint8_t touch_status;
    uint8_t touch_pressure;
    uint32_t last_button_status;
    uint32_t last_touch_x;
    uint32_t last_touch_y;
    uint8_t last_touch_pressure;
} input_struct;

typedef void (*nds_free)(void *);
typedef void (*nds_set_screen_swap)(uint32_t);
typedef void (*nds_set_screen_menu_on)(void);
typedef void (*nds_set_screen_menu_off)(void);
typedef void (*nds_set_screen_hires_mode)(uint32_t, uint32_t);
typedef void (*nds_set_screen_orientation)(uint32_t);
typedef void (*nds_set_screen_scale_factor)(uint32_t);
typedef void (*nds_quit)(void *);
typedef void (*nds_screen_copy16)(uint16_t *, uint32_t);
typedef void (*nds_spu_adpcm_decode_block)(spu_channel_struct *);
typedef void* (*nds_get_screen_ptr)(uint32_t);
typedef void* (*nds_realloc)(void *, size_t);
typedef void* (*nds_malloc)(size_t);
typedef int32_t (*nds_load_state_index)(void *, uint32_t, uint16_t *, uint16_t *, uint32_t);
typedef int32_t (*nds_save_state_index)(void *, uint32_t, uint16_t *, uint16_t *);
typedef int32_t (*nds_load_state)(void *, const char *, uint16_t *, uint16_t *, uint32_t);
typedef int32_t (*nds_save_state)(void *, const char *, char *, uint16_t *, uint16_t *);
typedef int (*nds_printf_chk)(int, const char *);
typedef int (*nds_puts)(const char *);
typedef void (*nds_select_quit)(void *, void *);
typedef void (*nds_config_setup_input_map)(void *);

int init_hook(const char *, size_t, const char *);
int quit_hook(void);
int add_prehook(void *, void *);
int quit_drastic(void);
int load_state(int slot);
int save_state(int slot);
int set_fast_forward(uint8_t v);
int unlock_area(const void *);
void render_polygon_setup_perspective_steps(void);

#endif

