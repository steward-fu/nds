/*
 * Ghidra decompilation
 *
 * Function : FUN_0805f634
 * Address  : 0805f634
 * Program  : drastic16
 */


void ** FUN_0805f634(int param_1,undefined4 param_2)

{
  void **ppvVar1;
  undefined *local_40 [2];
  undefined auStack_38 [24];
  undefined4 local_20;
  
  local_40[0] = auStack_38;
  local_20 = param_2;
  ppvVar1 = (void **)bsearch(local_40,*(void **)(param_1 + 4),*(size_t *)(param_1 + 0x10),4,
                             (__compar_fn_t)&LAB_0805debc);
  if (ppvVar1 != (void **)0x0) {
    ppvVar1 = (void **)*ppvVar1;
  }
  return ppvVar1;
}


