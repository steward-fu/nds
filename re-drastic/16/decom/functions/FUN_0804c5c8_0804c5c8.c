/*
 * Ghidra decompilation
 *
 * Function : FUN_0804c5c8
 * Address  : 0804c5c8
 * Program  : drastic16
 */


undefined4 FUN_0804c5c8(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x9a95) != '\0') {
    FUN_080907f0(param_1 + 0x97d0,param_1 + 0x9810,*(undefined4 *)(param_1 + 0x9a38));
    *(undefined *)(param_1 + 0x9a95) = 0;
  }
  return *(undefined4 *)(param_1 + (param_2 + 0x25f4) * 4);
}


