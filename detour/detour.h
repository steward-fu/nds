#ifndef __PATCH_H__
#define __PATCH_H__

    #define VAR_SYSTEM                  0x083f4000
    #define VAR_SYSTEM_GAMECARD_NAME    0x0847e8e8
    #define VAR_SDL_SCREEN_RENDERER     0x0aee9568
    #define VAR_SDL_SCREEN_BPP          0x0aee957c
    #define VAR_SDL_SCREEN_NEED_INIT    0x0aee95a0
    #define VAR_SDL_SCREEN0_SHOW        0x0aee9544
    #define VAR_SDL_SCREEN0_HRES_MODE   0x0aee9545
    #define VAR_SDL_SCREEN0_TEXTURE     0x0aee952c
    #define VAR_SDL_SCREEN0_PIXELS      0x0aee9530
    #define VAR_SDL_SCREEN1_SHOW        0x0aee9560
    #define VAR_SDL_SCREEN1_HRES_MODE   0x0aee9561
    #define VAR_SDL_SCREEN1_TEXTURE     0x0aee9548
    #define VAR_SDL_SCREEN1_PIXELS      0x0aee954c

    #define FUN_SCREEN_COPY16           0x080a59d8
    #define FUN_PRINT_STRING            0x080a5398
    #define FUN_LOAD_STATE_INDEX        0x08095ce4
    #define FUN_SAVE_STATE_INDEX        0x08095c10
    #define FUN_QUIT                    0x08006444
    #define FUN_SAVESTATE_PRE           0x08095a80
    #define FUN_SAVESTATE_POST          0x08095154
    #define FUN_UPDATE_SCREEN           0x080a83c0
    #define FUN_SET_SCREEN_MENU_OFF     0x080a8240
    #define FUN_LOAD_STATE              0x080951c0
    #define FUN_SAVE_STATE              0x0809580c
    
    #define ALIGN_ADDR(addr)        ((void*)((size_t)(addr) & ~(page_size - 1)))

    typedef void (*quit)(void *system);
    typedef void (*screen_copy16)(uint16_t *dest, uint32_t screen_number);
    typedef int32_t (*load_state_index)(void *system, uint32_t index, uint16_t *snapshot_top, uint16_t *snapshot_bottom, uint32_t snapshot_only);
    typedef int32_t (*save_state_index)(void *system, uint32_t index, uint16_t *snapshot_top, uint16_t *snapshot_bottom);
    typedef int32_t (*load_state)(void *system, const char *path, uint16_t *snapshot_top, uint16_t *snapshot_bottom, uint32_t snapshot_only);
    typedef int32_t (*save_state)(void *system, const char *dir, char *filename, uint16_t *snapshot_top, uint16_t *snapshot_bottom);

    void detour_init(size_t page_size, const char *path);
    void detour_quit(void);
    void detour_hook(uint32_t old_func, uint32_t new_func);

    int dtr_quit(void);
    int dtr_savestate(int slot);
    int dtr_loadstate(int slot);

#endif
