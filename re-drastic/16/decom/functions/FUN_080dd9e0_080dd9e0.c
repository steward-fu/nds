/*
 * Ghidra decompilation
 *
 * Function : FUN_080dd9e0
 * Address  : 080dd9e0
 * Program  : drastic16
 */


int FUN_080dd9e0(int param_1)

{
  void *pvVar1;
  int local_14;
  
  for (local_14 = *(int *)(param_1 + 0x1000); -1 < local_14; local_14 = local_14 + -1) {
    if (*(int *)(param_1 + local_14 * 4) != 0) {
      pvVar1 = *(void **)(param_1 + local_14 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_080c3a74(pvVar1);
        operator_delete(pvVar1);
      }
    }
  }
  return param_1;
}


