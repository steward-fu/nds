/*
 * Ghidra decompilation
 *
 * Function : screen_get_mouse_width
 * Address  : 080a8ad0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 screen_get_mouse_width(void)

{
  return SDL_screen.scale_factor * SDL_screen.logical_width;
}


