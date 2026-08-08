/*
 * Ghidra decompilation
 *
 * Function : FUN_0804c550
 * Address  : 0804c550
 * Program  : drastic16
 */


int FUN_0804c550(int param_1)

{
  FUN_0804b5f0();
  FUN_08047860(param_1);
  param_1 = (uint)*(byte *)(param_1 + 0x9a85) * 0xa004 + param_1;
  return *(int *)(param_1 + 0x57aa8) + *(int *)(param_1 + 0x43aa0);
}


