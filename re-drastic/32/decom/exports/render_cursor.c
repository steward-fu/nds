/*
 * Ghidra decompilation
 *
 * Function : render_cursor
 * Address  : 080a7f5c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_cursor(void)

{
  int iVar1;
  SDL_Rect real_cursor;
  SDL_Rect src_cursor;
  
  iVar1 = __stack_chk_guard;
  real_cursor.w = 0x20;
  real_cursor.h = 0x20;
  real_cursor.y = sdl_screen_cursor_y + SDL_screen.DS_screens[1].y;
  src_cursor.x = 0;
  src_cursor.y = (uint)(byte)sdl_screen_cursor_touch << 5;
  real_cursor.x = sdl_screen_cursor_x + SDL_screen.DS_screens[1].x;
  src_cursor.w = 0x20;
  src_cursor.h = 0x20;
  SDL_RenderCopy(SDL_screen.renderer,cursor_texture,&src_cursor,&real_cursor);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


