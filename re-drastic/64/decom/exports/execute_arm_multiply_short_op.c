/*
 * Ghidra decompilation
 *
 * Function : execute_arm_multiply_short_op
 * Address  : 001261f0
 * Program  : drastic64
 */


void execute_arm_multiply_short_op(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  iVar1 = *(int *)(param_1 + ((param_2 >> 8 & 0xf) + 0x8dc) * 4);
  iVar2 = (int)(short)iVar3;
  if ((param_2 & 0x20) != 0) {
    iVar2 = iVar3 >> 0x10;
  }
  iVar3 = (int)(short)iVar1;
  if ((param_2 & 0x40) != 0) {
    iVar3 = iVar1 >> 0x10;
  }
  iVar2 = iVar2 * iVar3;
  iVar3 = iVar2;
  if ((((uint)param_2 >> 0x16 & 1) == 0) &&
     (iVar1 = *(int *)(param_1 + ((param_2 >> 0xc & 0xf) + 0x8dc) * 4), iVar3 = iVar2 + iVar1,
     (uint)(iVar3 < iVar2) != -(iVar1 >> 0x1f))) {
    *(uint *)(param_1 + 0x23c0) = *(uint *)(param_1 + 0x23c0) | 0x8000000;
  }
  *(int *)(param_1 + ((long)(int)((uint)(param_2 >> 0x10) & 0xf) + 0x8dc) * 4) = iVar3;
  return;
}


