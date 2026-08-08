/*
 * Ghidra decompilation
 *
 * Function : FUN_080e32b0
 * Address  : 080e32b0
 * Program  : drastic16
 */


void FUN_080e32b0(int param_1)

{
  if (*(char *)(param_1 + 0x104) != '\0') {
    FUN_080e3280(param_1);
  }
  **(undefined4 **)(param_1 + 0xfc) = 0xffffffff;
  return;
}


