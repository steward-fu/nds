/*
 * Ghidra decompilation
 *
 * Function : execute_arm_multiply_short_long_op
 * Address  : 00126300
 * Program  : drastic64
 */


void execute_arm_multiply_short_long_op(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + ((param_2 >> 8 & 0xf) + 0x8dc) * 4);
  iVar4 = (int)(short)iVar5;
  if ((param_2 & 0x40) != 0) {
    iVar4 = iVar5 >> 0x10;
  }
  lVar2 = param_1 + (param_2 >> 0xc & 0xf) * 4;
  lVar3 = param_1 + (param_2 >> 0x10 & 0xf) * 4;
  lVar1 = CONCAT44(*(undefined4 *)(lVar3 + 0x2370),*(undefined4 *)(lVar2 + 0x2370)) +
          (long)((*(int *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4) / 2) * (iVar4 / 2));
  *(int *)(lVar2 + 0x2370) = (int)lVar1;
  *(int *)(lVar3 + 0x2370) = (int)((ulong)lVar1 >> 0x20);
  return;
}


