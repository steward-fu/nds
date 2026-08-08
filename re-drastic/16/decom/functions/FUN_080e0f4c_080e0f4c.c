/*
 * Ghidra decompilation
 *
 * Function : FUN_080e0f4c
 * Address  : 080e0f4c
 * Program  : drastic16
 */


void FUN_080e0f4c(int param_1)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    pvVar1 = operator_new__(0x40004);
    *(void **)(param_1 + 0x10) = pvVar1;
  }
  return;
}


