/*
 * Ghidra decompilation
 *
 * Function : FUN_080dee4c
 * Address  : 080dee4c
 * Program  : drastic16
 */


void FUN_080dee4c(int *param_1,int param_2,undefined param_3)

{
  void *pvVar1;
  
  if (param_2 != 0) {
    FUN_080deef4(param_1);
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[4] == 0) {
    pvVar1 = operator_new__(0x10000);
    param_1[4] = (int)pvVar1;
  }
  param_1[5] = 0;
  *(undefined *)(param_1 + 0x408) = 0;
  return;
}


