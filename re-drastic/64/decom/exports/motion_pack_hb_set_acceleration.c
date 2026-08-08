/*
 * Ghidra decompilation
 *
 * Function : motion_pack_hb_set_acceleration
 * Address  : 0016f210
 * Program  : drastic64
 */


void motion_pack_hb_set_acceleration(float param_1,float param_2,float param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)((param_1 * 101.9368 * 131072.0) / 10000.0 + 32768.0);
  uVar2 = (uint)((param_2 * 101.9368 * 131072.0) / 10000.0 + 32768.0);
  uVar1 = (uint)((param_3 * 101.9368 * 131072.0) / 10000.0 + 32768.0);
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  *(short *)(param_4 + 2) = (short)uVar3;
  *(short *)(param_4 + 4) = (short)uVar2;
  *(short *)(param_4 + 6) = (short)uVar1;
  return;
}


