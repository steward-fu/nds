/*
 * Ghidra decompilation
 *
 * Function : execute_arm_mrs_op
 * Address  : 00126660
 * Program  : drastic64
 */


void execute_arm_mrs_op(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 >> 0xc & 0xf;
  if (((uint)param_2 >> 0x16 & 1) != 0) {
    *(undefined4 *)(param_1 + (uVar1 + 0x8dc) * 4) =
         *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x2104) * 4 + 0x20e8);
    return;
  }
  *(undefined4 *)(param_1 + (uVar1 + 0x8dc) * 4) = *(undefined4 *)(param_1 + 0x23c0);
  return;
}


