/*
 * Ghidra decompilation
 *
 * Function : execute_arm_multiply_long_signed_op
 * Address  : 001260d0
 * Program  : drastic64
 */


void execute_arm_multiply_long_signed_op(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_2 >> 0xc & 0xf;
  uVar3 = param_2 >> 0x10 & 0xf;
  lVar5 = (long)*(int *)(param_1 + ((param_2 >> 8 & 0xf) + 0x8dc) * 4) *
          (long)*(int *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  if (((uint)param_2 >> 0x15 & 1) != 0) {
    lVar5 = CONCAT44(*(undefined4 *)(param_1 + (uVar3 + 0x8dc) * 4),
                     *(undefined4 *)(param_1 + (uVar4 + 0x8dc) * 4)) + lVar5;
  }
  uVar2 = (uint)((ulong)lVar5 >> 0x20);
  if (((uint)param_2 >> 0x14 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
    }
    *(uint *)(param_1 + 0x23c0) = uVar2 & 0x80000000 | uVar1 & 0x7fffffff;
  }
  *(int *)(param_1 + (uVar4 + 0x8dc) * 4) = (int)lVar5;
  *(uint *)(param_1 + (uVar3 + 0x8dc) * 4) = uVar2;
  return;
}


