/*
 * Ghidra decompilation
 *
 * Function : FUN_0804c618
 * Address  : 0804c618
 * Program  : drastic16
 */


undefined4 FUN_0804c618(int param_1,uint param_2)

{
  if (param_2 < 6) {
    if (2 < param_2) {
      param_2 = param_2 + 1;
    }
    return *(undefined4 *)(*(int *)(param_1 + 0x9a3c) + param_2 * 4);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x9a3c) + (param_2 + 2) * 4);
}


