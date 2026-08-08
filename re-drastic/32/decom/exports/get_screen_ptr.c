/*
 * Ghidra decompilation
 *
 * Function : get_screen_ptr
 * Address  : 080a890c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * get_screen_ptr(u32 screen_number)

{
  void *pvVar1;
  
  if (SDL_screen.menu_mode == 0) {
    pvVar1 = (void *)(uint)SDL_screen.DS_screens[screen_number ^ SDL_screen.swap_screens].show;
    if (pvVar1 != (void *)0x0) {
      pvVar1 = SDL_screen.DS_screens[screen_number ^ SDL_screen.swap_screens].pixels;
    }
    return pvVar1;
  }
  return SDL_screen.menu_pixels;
}


