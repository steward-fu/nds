/*
 * Ghidra decompilation
 *
 * Function : set_screen_swap
 * Address  : 080a88fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void set_screen_swap(u32 screen_swap)

{
  SDL_screen.swap_screens = screen_swap;
  return;
}


