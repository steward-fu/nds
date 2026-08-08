/*
 * Ghidra decompilation
 *
 * Function : FUN_0809947c
 * Address  : 0809947c
 * Program  : drastic16
 */


int FUN_0809947c(code **param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_20 [3];
  
  if (param_3 != 0) {
    do {
      local_20[0] = param_3;
      iVar1 = (**param_1)(param_1,param_2,local_20);
      if (iVar1 != 0) {
        return iVar1;
      }
      param_2 = param_2 + local_20[0];
      if (local_20[0] == 0) {
        return param_4;
      }
      param_3 = param_3 - local_20[0];
    } while (param_3 != 0);
  }
  return 0;
}


