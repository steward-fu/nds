/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2860
 * Address  : 080d2860
 * Program  : drastic16
 */


undefined FUN_080d2860(int param_1)

{
  int iVar1;
  
  if (0x7fe2 < *(int *)(param_1 + 4)) {
    FUN_080ceb2c(param_1);
  }
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  return *(undefined *)(*(int *)(param_1 + 0x10) + iVar1);
}


