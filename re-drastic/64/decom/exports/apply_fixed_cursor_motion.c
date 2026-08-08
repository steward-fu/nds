/*
 * Ghidra decompilation
 *
 * Function : apply_fixed_cursor_motion
 * Address  : 0018ac70
 * Program  : drastic64
 */


void apply_fixed_cursor_motion(uint param_1,int param_2)

{
  if ((param_1 >> 0xe & 1) != 0) {
    SDL_input._2084_4_ = param_2;
  }
  if ((param_1 >> 0x10 & 1) != 0) {
    SDL_input._2080_4_ = param_2;
  }
  if ((param_1 >> 0xd & 1) != 0) {
    SDL_input._2084_4_ = -param_2;
  }
  if ((param_1 >> 0xf & 1) != 0) {
    SDL_input._2080_4_ = -param_2;
  }
  return;
}


