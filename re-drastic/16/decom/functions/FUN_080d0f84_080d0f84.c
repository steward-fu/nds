/*
 * Ghidra decompilation
 *
 * Function : FUN_080d0f84
 * Address  : 080d0f84
 * Program  : drastic16
 */


int FUN_080d0f84(int *param_1,uint param_2)

{
  int iVar1;
  uint local_c;
  
  if (param_2 < (uint)param_1[0x20]) {
    iVar1 = *param_1 + param_2;
  }
  else {
    for (local_c = 1; local_c < 0x20; local_c = local_c + 1) {
      if (param_2 < (uint)param_1[local_c + 0x20]) {
        return param_1[local_c] + (param_2 - param_1[local_c + 0x1f]);
      }
    }
    iVar1 = *param_1;
  }
  return iVar1;
}


