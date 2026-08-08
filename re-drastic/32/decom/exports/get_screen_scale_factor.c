/*
 * Ghidra decompilation
 *
 * Function : get_screen_scale_factor
 * Address  : 080a8a1c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 get_screen_scale_factor(void)

{
  return SDL_screen.scale_factor;
}


