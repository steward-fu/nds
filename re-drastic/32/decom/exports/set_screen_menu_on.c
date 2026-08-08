/*
 * Ghidra decompilation
 *
 * Function : set_screen_menu_on
 * Address  : 080a8a2c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void set_screen_menu_on(void)

{
  SDL_SetWindowFullscreen(SDL_screen.window,1);
  SDL_RenderSetLogicalSize(SDL_screen.renderer,800,0x1e0);
  if (SDL_screen.menu_texture == (SDL_Texture *)0x0) {
    SDL_screen.menu_texture =
         (SDL_Texture *)SDL_CreateTexture(SDL_screen.renderer,0x15151002,1,800,0x1e0);
  }
  clear_screen();
  if (SDL_screen.menu_pixels == (u16 *)0x0) {
    SDL_screen.menu_pixels = (u16 *)malloc(0xbb800);
  }
  SDL_screen.menu_mode = 1;
  return;
}


