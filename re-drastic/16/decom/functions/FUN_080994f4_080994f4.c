/*
 * Ghidra decompilation
 *
 * Function : FUN_080994f4
 * Address  : 080994f4
 * Program  : drastic16
 */


int FUN_080994f4(code **param_1,int param_2,int param_3)

{
  int iVar1;
  int local_18 [2];
  
  if (param_3 != 0) {
    do {
      local_18[0] = param_3;
      iVar1 = (**param_1)(param_1,param_2,local_18);
      if (iVar1 != 0) {
        return iVar1;
      }
      param_2 = param_2 + local_18[0];
      if (local_18[0] == 0) {
        return 6;
      }
      param_3 = param_3 - local_18[0];
    } while (param_3 != 0);
  }
  return 0;
}


