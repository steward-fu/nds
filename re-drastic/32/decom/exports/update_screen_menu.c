/*
 * Ghidra decompilation
 *
 * Function : update_screen_menu
 * Address  : 080a801c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void update_screen_menu(void)

{
  SDL_UpdateTexture(SDL_screen.menu_texture,0,SDL_screen.menu_pixels,0x640);
  SDL_RenderCopy(SDL_screen.renderer,SDL_screen.menu_texture,0);
  SDL_RenderPresent(SDL_screen.renderer);
  return;
}


