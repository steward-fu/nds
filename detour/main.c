#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <sys/mman.h>

#include "detour.h"

int dtr_savestate(int slot)
{
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
}

int dtr_loadstate(int slot)
{
    load_state_index _func = (load_state_index)FUN_LOAD_STATE_INDEX;

    _func((void*)VAR_SYSTEM, slot, 0, 0, 0);
}

int dtr_quit(void)
{
    quit _func = (quit)FUN_QUIT;

    _func((void*)VAR_SYSTEM);
}

void detour_init(size_t page_size, uint32_t fun_print_string, uint32_t fun_savestate_pre, uint32_t fun_savestate_post)
{
    uint32_t val = 0;
    volatile uint8_t *base = NULL;

    val = fun_print_string;
    base = (uint8_t*)FUN_PRINT_STRING;
    mprotect(ALIGN_ADDR(base), page_size, PROT_READ | PROT_WRITE);
    base[0] = 0x04;
    base[1] = 0xf0;
    base[2] = 0x1f;
    base[3] = 0xe5;
    base[4] = val >> 0;
    base[5] = val >> 8;
    base[6] = val >> 16;
    base[7] = val >> 24;

    val = fun_savestate_pre;
    base = (uint8_t*)FUN_SAVESTATE_PRE;
    mprotect(ALIGN_ADDR(base), page_size, PROT_READ | PROT_WRITE);
    base[0] = 0x04;
    base[1] = 0xf0;
    base[2] = 0x1f;
    base[3] = 0xe5;
    base[4] = val >> 0;
    base[5] = val >> 8;
    base[6] = val >> 16;
    base[7] = val >> 24;

    val = fun_savestate_post;
    base = (uint8_t*)FUN_SAVESTATE_POST;
    mprotect(ALIGN_ADDR(base), page_size, PROT_READ | PROT_WRITE);
    base[0] = 0x04;
    base[1] = 0xf0;
    base[2] = 0x1f;
    base[3] = 0xe5;
    base[4] = val >> 0;
    base[5] = val >> 8;
    base[6] = val >> 16;
    base[7] = val >> 24;
}

void detour_quit(size_t page_size)
{
    volatile uint32_t *base = NULL;

    base = (uint32_t*)FUN_PRINT_STRING;
    mprotect(ALIGN_ADDR(base), page_size, PROT_READ | PROT_WRITE);
    base[0] = 0xe16d42f4;
    base[1] = 0xe1a05001;

    base = (uint32_t*)FUN_SAVESTATE_PRE;
    mprotect(ALIGN_ADDR(base), page_size, PROT_READ | PROT_WRITE);
    base[0] = 0xe28dd020;
    base[1] = 0xe49df004;

    base = (uint32_t*)FUN_SAVESTATE_POST;
    mprotect(ALIGN_ADDR(base), page_size, PROT_READ | PROT_WRITE);
    base[0] = 0xe28dd018;
    base[1] = 0xe49df004;
}

