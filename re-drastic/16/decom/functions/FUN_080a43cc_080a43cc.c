/*
 * Ghidra decompilation
 *
 * Function : FUN_080a43cc
 * Address  : 080a43cc
 * Program  : drastic16
 */


undefined4 FUN_080a43cc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_080a42dc(param_1);
    }
    if (*(char *)(param_1 + 0x13) == '\x01') {
      uVar1 = FUN_080a6018(param_1 + 0x18);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


