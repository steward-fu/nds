/*
 * Ghidra decompilation
 *
 * Function : FUN_080e53dc
 * Address  : 080e53dc
 * Program  : drastic16
 */


undefined4 FUN_080e53dc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 0x10e98) == 2) {
    uVar1 = FUN_080e5014(param_2,param_3,param_4);
  }
  else if (*(int *)(param_3 + 0x10e98) == 3) {
    uVar1 = FUN_080e5208(param_4,param_3 + 0x8430);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


