#ifndef __PATCH_H__
#define __PATCH_H__

    #define VAR_SYSTEM              0x083f4000
    #define FUN_SCREEN_COPY16       0x080a59d8
    #define FUN_PRINT_STRING        0x080a5398
    #define FUN_LOAD_STATE_INDEX    0x08095ce4
    #define FUN_SAVE_STATE_INDEX    0x08095c10
    #define FUN_QUIT                0x08006444
    #define FUN_SAVESTATE_PRE       0x08095a80
    #define FUN_SAVESTATE_POST      0x08095154
    
    #define ALIGN_ADDR(addr)        ((void*)((size_t)(addr) & ~(page_size - 1)))

    typedef void (*quit)(void *system);
    typedef void (*screen_copy16)(uint16_t *dest, uint32_t screen_number);
    typedef int32_t (*load_state_index)(void *system, uint32_t index, uint16_t *snapshot_top, uint16_t *snapshot_bottom, uint32_t snapshot_only);
    typedef int32_t (*save_state_index)(void *system, uint32_t index, uint16_t *snapshot_top, uint16_t *snapshot_bottom);

    void init_patch(size_t page_size, uint32_t fun_print_string, uint32_t fun_savestate_pre, uint32_t fun_savestate_post);
    void deinit_patch(size_t page_size);

    int patch_quit(void);
    int patch_savestate(int slot);
    int patch_loadstate(int slot);

#endif
