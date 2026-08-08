/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7660
 * Address  : 080b7660
 * Program  : drastic16
 */


void FUN_080b7660(int param_1,undefined4 *param_2,int param_3)

{
  if (*(char *)(param_1 + 0x200) == '\0') {
    *param_2 = 0;
  }
  else {
    FUN_080b75ec(param_1,param_1,0x80,param_2,param_3,0);
    param_2[param_3 + 0x3fffffff] = 0;
  }
  return;
}


