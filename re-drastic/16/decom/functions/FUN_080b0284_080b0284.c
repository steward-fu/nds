/*
 * Ghidra decompilation
 *
 * Function : FUN_080b0284
 * Address  : 080b0284
 * Program  : drastic16
 */


int FUN_080b0284(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint local_c;
  
  for (local_c = 0;
      (local_c < param_3 &&
      (piVar1 = (int *)(param_2 + local_c * 4),
      *piVar1 = (uint)*(byte *)(param_1 + local_c * 2) +
                (uint)*(byte *)(param_1 + local_c * 2 + 1) * 0x100, *piVar1 != 0));
      local_c = local_c + 1) {
  }
  return param_2;
}


