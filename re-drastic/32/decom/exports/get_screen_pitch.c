/*
 * Ghidra decompilation
 *
 * Function : get_screen_pitch
 * Address  : 080a8988
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 get_screen_pitch(u32 screen_number)

{
  if (SDL_screen.menu_mode == 0) {
    return SDL_screen.bytes_per_pixel *
           ((uint)SDL_screen.DS_screens[screen_number ^ SDL_screen.swap_screens].hires_mode * 0x300
           + 0x100);
  }
  return 0x640;
}


