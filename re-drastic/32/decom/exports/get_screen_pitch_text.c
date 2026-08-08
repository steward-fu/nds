/*
 * Ghidra decompilation
 *
 * Function : get_screen_pitch_text
 * Address  : 080a8948
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 get_screen_pitch_text(u32 screen_number)

{
  if (SDL_screen.menu_mode == 0) {
    return (uint)SDL_screen.DS_screens[screen_number ^ SDL_screen.swap_screens].hires_mode *
           SDL_screen.bytes_per_pixel * 0x100 + SDL_screen.bytes_per_pixel * 0x100;
  }
  return 0x640;
}


