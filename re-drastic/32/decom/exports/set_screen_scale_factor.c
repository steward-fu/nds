/*
 * Ghidra decompilation
 *
 * Function : set_screen_scale_factor
 * Address  : 080a88cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void set_screen_scale_factor(u32 scale_factor)

{
  SDL_screen.update_scale_factor = scale_factor;
  SDL_screen.needs_reinitializing = 1;
  return;
}


