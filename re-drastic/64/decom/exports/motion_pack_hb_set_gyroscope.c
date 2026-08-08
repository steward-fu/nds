/*
 * Ghidra decompilation
 *
 * Function : motion_pack_hb_set_gyroscope
 * Address  : 0016f2a0
 * Program  : drastic64
 */


void motion_pack_hb_set_gyroscope(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1 * -57.2958 * 13200.0) / 1000.0 + 26880.0);
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  *(short *)(param_2 + 8) = (short)uVar1;
  return;
}


