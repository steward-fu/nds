/*
 * Ghidra decompilation
 *
 * Function : FUN_080bdc38
 * Address  : 080bdc38
 * Program  : drastic16
 */


void FUN_080bdc38(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 == 1) {
    iVar1 = FUN_080b42c0(param_1[1] & 0xffff,param_2,param_3);
    param_1[1] = iVar1;
  }
  if (*param_1 == 2) {
    iVar1 = FUN_080b4060(param_1[1],param_2,param_3);
    param_1[1] = iVar1;
  }
  if (*param_1 == 3) {
    if ((1 < (uint)param_1[0x2d8]) && (param_1[0x2d7] == 0)) {
      iVar1 = FUN_080d6190();
      param_1[0x2d7] = iVar1;
    }
    param_1[0x2d5] = param_1[0x2d7];
    param_1[0x2d6] = param_1[0x2d8];
    FUN_080e2e54(param_1 + 2,param_2,param_3);
  }
  return;
}


