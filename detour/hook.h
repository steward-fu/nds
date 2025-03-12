// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __DETOUR_HOOK_H__
#define __DETOUR_HOOK_H__

    #define ALIGN_ADDR(addr) ((void*)((size_t)(addr) & ~(page_size - 1)))

    typedef struct _system {
        uint32_t *base;
        uint32_t *gamecard_name;
        uint32_t *savestate_num;
    } system_t;

    typedef struct _screen {
        uint32_t *show;
        uint32_t *hres_mode;
        uint32_t *texture;
        uint32_t *pixels;
        uint32_t *x;
        uint32_t *y;
    } screen_t;

    typedef struct _sdl {
        uint32_t *bpp;
        uint32_t *need_init;
        uint32_t *window;
        uint32_t *renderer;
        screen_t screen[2];
    } sdl_t;

    typedef struct _adpcm {
        uint32_t *step_table;
        uint32_t *index_step_table;
    } adpcm_t;

    typedef struct _var {
        system_t system;

        sdl_t sdl;

        adpcm_t adpcm;

        uint32_t *pcm_handler;
        uint32_t *fast_forward;
        uint32_t *desmume_footer_str;
    } var_t;

    typedef struct _fun {
        uintptr_t free;
        uintptr_t realloc;
        uintptr_t malloc;
        uintptr_t screen_copy16;
        uintptr_t print_string;
        uintptr_t load_state_index;
        uintptr_t save_state_index;
        uintptr_t quit;
        uintptr_t savestate_pre;
        uintptr_t savestate_post;
        uintptr_t update_screen;
        uintptr_t load_state;
        uintptr_t save_state;
        uintptr_t blit_screen_menu;
        uintptr_t initialize_backup;
        uintptr_t set_screen_menu_off;
        uintptr_t get_screen_ptr;
        uintptr_t spu_adpcm_decode_block;
        uintptr_t render_scanline_tiled_4bpp;
        uintptr_t render_polygon_setup_perspective_steps;
    } fun_t;

    typedef struct _miyoo_hook {
        fun_t fun;
        var_t var;
    } miyoo_hook;

    int init_detour_hook(void);
    int set_page_size(size_t ps);
    int restore_detour_hook(void);
    int unlock_protected_area(uintptr_t addr);
    int add_save_load_state_handler(const char *path);
    int add_hook_point(uintptr_t func, void *cb);

#endif

