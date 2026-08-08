/*
 * Ghidra decompilation
 *
 * Function : FUN_080deef4
 * Address  : 080deef4
 * Program  : drastic16
 */


void FUN_080deef4(int param_1)

{
  void **ppvVar1;
  void **local_c;
  
  local_c = *(void ***)(param_1 + 8);
  while (local_c != (void **)0x0) {
    ppvVar1 = (void **)local_c[4];
    if (*local_c != (void *)0x0) {
      operator_delete__(*local_c);
    }
    operator_delete(local_c);
    local_c = ppvVar1;
  }
  return;
}


