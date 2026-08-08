/*
 * Ghidra decompilation
 *
 * Function : FUN_080be260
 * Address  : 080be260
 * Program  : drastic16
 */


int FUN_080be260(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x42d0);
  if (pvVar1 != (void *)0x0) {
    FUN_080d14dc(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_080b752c(param_1 + 0x62e4);
  FUN_080a8640(param_1 + 8);
  return param_1;
}


