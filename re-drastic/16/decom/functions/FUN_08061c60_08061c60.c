/*
 * Ghidra decompilation
 *
 * Function : FUN_08061c60
 * Address  : 08061c60
 * Program  : drastic16
 */


void FUN_08061c60(int *param_1)

{
  if (*(char *)(*param_1 + 0x82830) != '\0') {
    FUN_08060414(*param_1,*(undefined4 *)(param_1[1] + 0x458),0,0,0);
    param_1[10] = 1;
  }
  return;
}


