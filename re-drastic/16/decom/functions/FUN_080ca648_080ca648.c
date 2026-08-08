/*
 * Ghidra decompilation
 *
 * Function : FUN_080ca648
 * Address  : 080ca648
 * Program  : drastic16
 */


void FUN_080ca648(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) + 5 <= *(int *)(param_1 + 0x78)) {
    if (*(int *)(param_1 + 0x9748) == 0) {
      iVar1 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x94);
      if (iVar1 == 0x10d) {
        FUN_080ca03c(param_1);
      }
    }
    else {
      iVar1 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + *(int *)(param_1 + 0x9750) * 0xeec + 0x5794
                          );
      if (iVar1 == 0x100) {
        FUN_080ca03c(param_1);
      }
    }
  }
  return;
}


