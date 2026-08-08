/*
 * Ghidra decompilation
 *
 * Function : FUN_08099568
 * Address  : 08099568
 * Program  : drastic16
 */


int FUN_08099568(code **param_1,undefined4 param_2)

{
  int iVar1;
  int local_10 [4];
  
  local_10[0] = 1;
  iVar1 = (**param_1)(param_1,param_2,local_10);
  if (iVar1 == 0) {
    if (local_10[0] == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = 6;
    }
  }
  return iVar1;
}


