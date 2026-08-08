/*
 * Ghidra decompilation
 *
 * Function : get_screen_bytes_per_pixel
 * Address  : 080a8a00
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 get_screen_bytes_per_pixel(void)

{
  u32 uVar1;
  
  uVar1 = SDL_screen.bytes_per_pixel;
  if (SDL_screen.menu_mode != 0) {
    uVar1 = 2;
  }
  return uVar1;
}


