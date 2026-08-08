/*
 * Ghidra decompilation
 *
 * Function : FUN_080d4b84
 * Address  : 080d4b84
 * Program  : drastic16
 */


void FUN_080d4b84(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}


