/*
 * Ghidra decompilation
 *
 * Function : execute_arm_multiply_long_unsigned_op
 * Address  : 00126160
 * Program  : drastic64
 */


void execute_arm_multiply_long_unsigned_op(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_2 >> 0xc & 0xf;
  uVar4 = param_2 >> 0x10 & 0xf;
  lVar3 = (ulong)*(uint *)(param_1 + ((param_2 >> 8 & 0xf) + 0x8dc) * 4) *
          (ulong)*(uint *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  if (((uint)param_2 >> 0x15 & 1) != 0) {
    lVar3 = lVar3 + CONCAT44(*(undefined4 *)(param_1 + (uVar4 + 0x8dc) * 4),
                             *(undefined4 *)(param_1 + (uVar5 + 0x8dc) * 4));
  }
  uVar2 = (uint)((ulong)lVar3 >> 0x20);
  if (((uint)param_2 >> 0x14 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
    }
    *(uint *)(param_1 + 0x23c0) = uVar2 & 0x80000000 | uVar1 & 0x7fffffff;
  }
  *(int *)(param_1 + (uVar5 + 0x8dc) * 4) = (int)lVar3;
  *(uint *)(param_1 + (uVar4 + 0x8dc) * 4) = uVar2;
  return;
}


