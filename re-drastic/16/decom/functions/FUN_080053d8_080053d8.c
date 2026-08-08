/*
 * Ghidra decompilation
 *
 * Function : FUN_080053d8
 * Address  : 080053d8
 * Program  : drastic16
 */


void FUN_080053d8(undefined4 param_1,int param_2,undefined4 param_3,char *param_4)

{
  ulonglong uVar1;
  
  FUN_080750b0(param_2,param_3,param_3,param_4,param_4);
  if (param_4 == (char *)0x0) {
    return;
  }
  uVar1 = strtoull(param_4,(char **)0x0,0x10);
  *(ulonglong *)(param_2 + 0x110) = uVar1;
  return;
}


