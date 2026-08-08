/*
 * Ghidra decompilation
 *
 * Function : FUN_080d30a4
 * Address  : 080d30a4
 * Program  : drastic16
 */


undefined4 FUN_080d30a4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xb4) == *(int *)(param_1 + 0xb0)) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      uVar1 = FUN_080c4814(param_1,0);
    }
    else {
      uVar1 = FUN_080d2a80(param_1,0);
    }
  }
  else {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -0xc;
    uVar1 = *(undefined4 *)(param_1 + 0xb4);
  }
  return uVar1;
}


