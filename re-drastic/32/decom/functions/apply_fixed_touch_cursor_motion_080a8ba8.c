/*
 * Ghidra decompilation
 *
 * Function : apply_fixed_touch_cursor_motion
 * Address  : 080a8ba8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void apply_fixed_touch_cursor_motion(u32 button_status,u32 adjust)

{
  if ((button_status & 0x4000) != 0) {
    SDL_input.stick_cursor_y = adjust;
  }
  if ((button_status & 0x10000) != 0) {
    SDL_input.stick_cursor_x = adjust;
  }
  if ((button_status & 0x2000) != 0) {
    SDL_input.stick_cursor_y = -adjust;
  }
  if ((button_status & 0x8000) != 0) {
    SDL_input.stick_cursor_x = -adjust;
  }
  if ((button_status & 0x1e000) != 0) {
    if (adjust != 0) {
      need_cursor_move = '\x01';
      return;
    }
    need_cursor_move = '\0';
  }
  return;
}


