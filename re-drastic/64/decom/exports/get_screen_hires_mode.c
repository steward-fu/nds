/*
 * Ghidra decompilation
 *
 * Function : get_screen_hires_mode
 * Address  : 0018aa80
 * Program  : drastic64
 */


undefined get_screen_hires_mode(uint param_1)

{
  if (DAT_040315d4._4_4_ == 0) {
    return (&DAT_04031541)[(ulong)(param_1 ^ (uint)DAT_040315cc) * 0x28];
  }
  return 0;
}


