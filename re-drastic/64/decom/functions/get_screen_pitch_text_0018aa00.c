/*
 * Ghidra decompilation
 *
 * Function : get_screen_pitch_text
 * Address  : 0018aa00
 * Program  : drastic64
 */


int get_screen_pitch_text(uint param_1)

{
  if (DAT_040315d4._4_4_ == 0) {
    return (DAT_040315a8 +
           (uint)(byte)(&DAT_04031541)[(ulong)(param_1 ^ (uint)DAT_040315cc) * 0x28] * DAT_040315a8)
           * 0x100;
  }
  return 0x640;
}


