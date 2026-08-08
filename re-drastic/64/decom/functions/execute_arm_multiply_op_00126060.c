/*
 * Ghidra decompilation
 *
 * Function : execute_arm_multiply_op
 * Address  : 00126060
 * Program  : drastic64
 */


void execute_arm_multiply_op(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + ((param_2 >> 8 & 0xf) + 0x8dc) * 4) *
          *(int *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  if (((uint)param_2 >> 0x15 & 1) != 0) {
    uVar2 = uVar2 + *(int *)(param_1 + ((param_2 >> 0xc & 0xf) + 0x8dc) * 4);
  }
  if (((uint)param_2 >> 0x14 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
    if (uVar2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
    }
    *(uint *)(param_1 + 0x23c0) = uVar2 & 0x80000000 | uVar1 & 0x7fffffff;
  }
  *(uint *)(param_1 + ((param_2 >> 0x10 & 0xf) + 0x8dc) * 4) = uVar2;
  return;
}


