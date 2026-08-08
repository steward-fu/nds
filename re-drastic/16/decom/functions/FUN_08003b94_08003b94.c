/*
 * Ghidra decompilation
 *
 * Function : FUN_08003b94
 * Address  : 08003b94
 * Program  : drastic16
 */


int FUN_08003b94(undefined4 param_1,int param_2,int *param_3,int *param_4,code **param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08003af8();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 == 0) {
    *param_4 = 0;
  }
  else {
    iVar1 = (**param_5)(param_5,param_2 << 2);
    *param_4 = iVar1;
    if (iVar1 == 0) {
      return 2;
    }
  }
  iVar1 = 0;
  while( true ) {
    if (iVar1 == param_2) {
      return 0;
    }
    if ((*(char *)(*param_3 + iVar1) != '\0') &&
       (iVar2 = FUN_08003820(param_1,*param_4 + iVar1 * 4), iVar2 != 0)) break;
    iVar1 = iVar1 + 1;
  }
  return iVar2;
}


