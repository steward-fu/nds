/*
 * Ghidra decompilation
 *
 * Function : FUN_08096ff0
 * Address  : 08096ff0
 * Program  : drastic16
 */


int FUN_08096ff0(int *param_1,int param_2,code **param_3)

{
  int iVar1;
  
  param_1[1] = 0;
  if (param_2 != 0) {
    iVar1 = (**param_3)(param_3);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      param_1[1] = param_2;
      iVar1 = 1;
    }
    return iVar1;
  }
  *param_1 = 0;
  return 1;
}


