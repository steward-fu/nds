/*
 * Ghidra decompilation
 *
 * Function : touchscreen_set_position
 * Address  : 001710b0
 * Program  : drastic64
 */


void touchscreen_set_position(long param_1,uint param_2,uint param_3)

{
  *(short *)(param_1 + 2) = (short)((param_3 & 0xfff) << 4);
  *(short *)(param_1 + 10) = (short)((param_2 & 0xfff) << 4);
  return;
}


