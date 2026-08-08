/*
 * Ghidra decompilation
 *
 * Function : FUN_080c42ec
 * Address  : 080c42ec
 * Program  : drastic16
 */


void FUN_080c42ec(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int local_14;
  
  param_1[6] = param_2;
  param_1[1] = 0;
  *param_1 = param_1[1];
  param_1[2] = 0xffffffff;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    iVar2 = param_1[1];
    uVar1 = FUN_080d28bc(param_1);
    param_1[1] = iVar2 << 8 | uVar1;
  }
  return;
}


