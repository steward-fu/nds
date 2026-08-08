/*
 * Ghidra decompilation
 *
 * Function : FUN_08078280
 * Address  : 08078280
 * Program  : drastic16
 */


void FUN_08078280(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80004) = param_2;
  *(undefined *)(param_1 + 0x8002c) = 0;
  *(undefined4 *)(param_1 + 0x80028) = 0;
  FUN_08079e70();
  return;
}


