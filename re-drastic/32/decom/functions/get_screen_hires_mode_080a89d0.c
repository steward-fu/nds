/*
 * Ghidra decompilation
 *
 * Function : get_screen_hires_mode
 * Address  : 080a89d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 get_screen_hires_mode(u32 screen_number)

{
  u32 uVar1;
  
  if (SDL_screen.menu_mode == 0) {
    uVar1 = (u32)SDL_screen.DS_screens[screen_number ^ SDL_screen.swap_screens].hires_mode;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


