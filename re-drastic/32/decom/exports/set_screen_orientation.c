/*
 * Ghidra decompilation
 *
 * Function : set_screen_orientation
 * Address  : 080a88e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void set_screen_orientation(u32 orientation)

{
  SDL_screen.update_orientation = orientation;
  SDL_screen.needs_reinitializing = 1;
  return;
}


