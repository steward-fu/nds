#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <sys/mman.h>

#include "detour.h"

static size_t page_size = 0;
static char states_path[255] = {0};

int dtr_savestate(int slot)
{
#ifdef MMIYOO
    char buf[255] = {0};
    screen_copy16 _func0 = (screen_copy16)FUN_SCREEN_COPY16;

    void *d0 = malloc(0x18000);
    void *d1 = malloc(0x18000);

    if ((d0 != NULL) && (d1 != NULL)) {
        _func0(d0, 0);
        _func0(d1, 1);

        if (states_path[0] == 0) {
            save_state_index _func1 = (save_state_index)FUN_SAVE_STATE_INDEX;

            _func1((void*)VAR_SYSTEM, slot, d0, d1);
        }
        else {
            save_state _func1 = (save_state)FUN_SAVE_STATE;

            sprintf(buf, "%s_%d.dss", VAR_SYSTEM_GAMECARD_NAME, slot);
            _func1((void*)VAR_SYSTEM, states_path, buf, d0, d1);
        }
    }
    if (d0 != NULL) {
        free(d0);
    }
    if (d1 != NULL) {
        free(d1);
    }
#endif

#ifdef TRIMUI
    screen_copy16 _func0 = (screen_copy16)FUN_SCREEN_COPY16;
    save_state_index _func1 = (save_state_index)FUN_SAVE_STATE_INDEX;

    void *d0 = malloc(0x18000);
    void *d1 = malloc(0x18000);

    if ((d0 != NULL) && (d1 != NULL)) {
        _func0(d0, 0);
        _func0(d1, 1);
        _func1((void*)VAR_SYSTEM, slot, d0, d1);
    }
    if (d0 != NULL) {
        free(d0);
    }
    if (d1 != NULL) {
        free(d1);
    }
#endif
}

int dtr_loadstate(int slot)
{
#ifdef MMIYOO
    char buf[255] = {0};

    if (states_path[0] == 0) {
        load_state_index _func = (load_state_index)FUN_LOAD_STATE_INDEX;

        _func((void*)VAR_SYSTEM, slot, 0, 0, 0);
    }
    else {
        load_state _func = (load_state)FUN_LOAD_STATE;

        sprintf(buf, "%s/%s_%d.dss", states_path, VAR_SYSTEM_GAMECARD_NAME, slot);
        _func((void*)VAR_SYSTEM, buf, 0, 0, 0);
    }
#endif

#ifdef TRIMUI
    load_state_index _func = (load_state_index)FUN_LOAD_STATE_INDEX;

    _func((void*)VAR_SYSTEM, slot, 0, 0, 0);
#endif
}

int dtr_quit(void)
{
    quit _func = (quit)FUN_QUIT;

    _func((void*)VAR_SYSTEM);
}

void detour_init(size_t page, const char *path)
{
    page_size = page;

    if ((path != NULL) && (path[0] != 0)) {
        strcpy(states_path, path);
    }
}

void detour_hook(uint32_t old_func, uint32_t new_func)
{
    volatile uint8_t *base = (volatile uint8_t *)old_func;

    mprotect(ALIGN_ADDR(base), page_size, PROT_READ | PROT_WRITE);
    base[0] = 0x04;
    base[1] = 0xf0;
    base[2] = 0x1f;
    base[3] = 0xe5;
    base[4] = new_func >> 0;
    base[5] = new_func >> 8;
    base[6] = new_func >> 16;
    base[7] = new_func >> 24;
}

void detour_quit(void)
{
}

