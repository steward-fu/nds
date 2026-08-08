/*
 * Ghidra decompilation
 *
 * Function : FUN_001eddfc
 * Address  : 001eddfc
 * Program  : drastic64
 */


void FUN_001eddfc(long param_1)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  pvVar1 = operator_new__(0x40004);
  *(void **)(param_1 + 0x18) = pvVar1;
  return;
}


