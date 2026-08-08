/*
 * Ghidra decompilation
 *
 * Function : FUN_001bc17c
 * Address  : 001bc17c
 * Program  : drastic64
 */


void FUN_001bc17c(long param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x7600) + 0xc2a4);
  if (iVar1 == 1) {
    wcsupper(param_2);
    iVar1 = *(int *)(*(long *)(param_1 + 0x7600) + 0xc2a4);
  }
  if (iVar1 == 2) {
    wcslower(param_2);
    return;
  }
  return;
}


