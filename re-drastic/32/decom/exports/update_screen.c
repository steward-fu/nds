/*
 * Ghidra decompilation
 *
 * Function : update_screen
 * Address  : 080a83c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void update_screen(void)

{
  int iVar1;
  SDL_Rect real_cursor;
  SDL_Rect dest;
  
  iVar1 = __stack_chk_guard;
  if (SDL_screen.DS_screens[0].show != '\0') {
    dest.w = 0x100;
    dest.h = 0xc0;
    dest.x = SDL_screen.DS_screens[0].x;
    dest.y = SDL_screen.DS_screens[0].y;
    SDL_UpdateTexture(SDL_screen.DS_screens[0].texture,0,SDL_screen.DS_screens[0].pixels,
                      (uint)SDL_screen.DS_screens[0].hires_mode * SDL_screen.bytes_per_pixel * 0x100
                      + SDL_screen.bytes_per_pixel * 0x100);
    SDL_RenderCopy(SDL_screen.renderer,SDL_screen.DS_screens[0].texture,0,&dest);
  }
  if (SDL_screen.DS_screens[1].show != '\0') {
    dest.w = 0x100;
    dest.h = 0xc0;
    dest.x = SDL_screen.DS_screens[1].x;
    dest.y = SDL_screen.DS_screens[1].y;
    SDL_UpdateTexture(SDL_screen.DS_screens[1].texture,0,SDL_screen.DS_screens[1].pixels,
                      (uint)SDL_screen.DS_screens[1].hires_mode * SDL_screen.bytes_per_pixel * 0x100
                      + SDL_screen.bytes_per_pixel * 0x100);
    SDL_RenderCopy(SDL_screen.renderer,SDL_screen.DS_screens[1].texture,0,&dest);
  }
  if ((((byte)sdl_screen_cursor_touch == 0) && (sdl_screen_cursor_old_x == sdl_screen_cursor_x)) &&
     (sdl_screen_cursor_old_y == sdl_screen_cursor_y)) {
    if (frame_count == 0) goto LAB_080a8498;
    frame_count = frame_count - 1;
  }
  else {
    sdl_screen_cursor_old_x = sdl_screen_cursor_x;
    frame_count = 299;
    sdl_screen_cursor_old_y = sdl_screen_cursor_y;
  }
  dest.y = (uint)(byte)sdl_screen_cursor_touch << 5;
  real_cursor.x = SDL_screen.DS_screens[1].x + sdl_screen_cursor_x;
  real_cursor.y = SDL_screen.DS_screens[1].y + sdl_screen_cursor_y;
  real_cursor.w = 0x20;
  real_cursor.h = 0x20;
  dest.x = 0;
  dest.w = 0x20;
  dest.h = 0x20;
  SDL_RenderCopy(SDL_screen.renderer,cursor_texture,&dest,&real_cursor);
LAB_080a8498:
  SDL_RenderPresent(SDL_screen.renderer);
  if (SDL_screen.needs_reinitializing != 0) {
    set_screen_menu_off();
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


