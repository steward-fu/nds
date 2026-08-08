/*
 * Ghidra decompilation
 *
 * Function : set_screen_menu_off
 * Address  : 080a8240
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void set_screen_menu_off(void)

{
  u32 uVar1;
  u32 scale_factor;
  u32 scale_multiplier;
  u32 color_depth;
  u32 height;
  u32 width;
  u32 uVar2;
  
  uVar1 = SDL_screen.color_depth;
  if (SDL_screen.update_orientation != -1) {
    SDL_screen.orientation = SDL_screen.update_orientation;
    SDL_screen.update_orientation = -1;
  }
  uVar2 = SDL_screen.orientation;
  if (SDL_screen.update_scale_factor != -1) {
    SDL_screen.scale_factor = SDL_screen.update_scale_factor;
    SDL_screen.update_scale_factor = -1;
  }
  __printf_chk(1,"Initializing screen: scale %d orientation %d depth %d\n",SDL_screen.scale_factor,
               SDL_screen.orientation,SDL_screen.color_depth);
  SDL_screen.DS_screens[0].x = 0;
  SDL_screen.DS_screens[0].y = 0;
  SDL_screen.DS_screens[0].show = '\x01';
  SDL_screen.DS_screens[1].x = 0;
  SDL_screen.DS_screens[1].y = 0;
  SDL_screen.DS_screens[1].show = '\x01';
  if (uVar2 == 2) {
    uVar2 = 0xc0;
    SDL_screen.DS_screens[1].show = '\0';
    width = 0x100;
  }
  else if (uVar2 == 3) {
    uVar2 = 0xc0;
    SDL_screen.DS_screens[0].show = '\0';
    width = 0x100;
  }
  else if (uVar2 == 1) {
    uVar2 = 0xc0;
    width = 0x200;
    SDL_screen.DS_screens[1].x = 0x100;
  }
  else {
    uVar2 = 0x180;
    width = 0x100;
    SDL_screen.DS_screens[1].y = 0xc0;
  }
  SDL_SetWindowFullscreen(SDL_screen.window,1);
  SDL_RenderSetLogicalSize(SDL_screen.renderer,width,uVar2);
  SDL_screen.pixel_format = 0x15151002;
  if (uVar1 != 0x10) {
    SDL_screen.pixel_format = 0x16362004;
  }
  clear_screen();
  SDL_screen.color_depth = uVar1;
  SDL_screen.bytes_per_pixel = uVar1 >> 3;
  SDL_screen.logical_width = width;
  SDL_screen.logical_height = uVar2;
  SDL_screen.needs_reinitializing = 0;
  SDL_screen.menu_mode = 0;
  return;
}


