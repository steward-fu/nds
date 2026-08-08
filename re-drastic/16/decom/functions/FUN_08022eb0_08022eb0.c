/*
 * Ghidra decompilation
 *
 * Function : FUN_08022eb0
 * Address  : 08022eb0
 * Program  : drastic16
 */


void FUN_08022eb0(int param_1,undefined4 param_2)

{
  FUN_08032d3c(param_1 + 0x1d98,*(undefined2 *)(param_1 + 0x26e324),param_2,param_1 + 0x26e300);
  FUN_08032d3c(param_1 + 0x82cd8,*(undefined2 *)(param_1 + 0x26e324),param_2,0);
  *(short *)(param_1 + 0x26e324) = (short)param_2 + 1;
  return;
}


