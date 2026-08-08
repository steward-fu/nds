/*
 * Ghidra decompilation
 *
 * Function : execute_arm_saturating_alu_op
 * Address  : 00126df0
 * Program  : drastic64
 */


void execute_arm_saturating_alu_op(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  iVar2 = *(int *)(param_1 + ((param_2 >> 0x10 & 0xf) + 0x8dc) * 4);
  if (((uint)param_2 >> 0x16 & 1) == 0) {
LAB_00126e78:
    lVar3 = (long)iVar2;
  }
  else {
    if (-1 < iVar2) {
      *(uint *)(param_1 + 0x23c0) = *(uint *)(param_1 + 0x23c0) | 0x8000000;
      lVar3 = (long)iVar1 + -1;
      if ((param_2 & 0x200000) != 0) {
        lVar3 = (long)iVar1 + 1;
      }
      goto joined_r0x00126e98;
    }
    if (-0x40000001 < iVar2) {
      iVar2 = iVar2 * 2;
      goto LAB_00126e78;
    }
    lVar3 = -0x40000000;
    *(uint *)(param_1 + 0x23c0) = *(uint *)(param_1 + 0x23c0) | 0x8000000;
  }
  if ((param_2 & 0x200000) != 0) {
    lVar3 = -lVar3;
  }
  lVar3 = iVar1 + lVar3;
joined_r0x00126e98:
  if (lVar3 < 0x80000000) {
    if (lVar3 < -0x80000000) {
      lVar3 = 0x80000000;
      *(uint *)(param_1 + 0x23c0) = *(uint *)(param_1 + 0x23c0) | 0x8000000;
    }
  }
  else {
    lVar3 = 0x7fffffff;
    *(uint *)(param_1 + 0x23c0) = *(uint *)(param_1 + 0x23c0) | 0x8000000;
  }
  *(int *)(param_1 + ((param_2 >> 0xc & 0xf) + 0x8dc) * 4) = (int)lVar3;
  return;
}


