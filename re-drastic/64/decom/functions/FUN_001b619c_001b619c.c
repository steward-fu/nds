/*
 * Ghidra decompilation
 *
 * Function : FUN_001b619c
 * Address  : 001b619c
 * Program  : drastic64
 */


void FUN_001b619c(wchar_t *param_1,ulong param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  if (((sVar1 != 0) && (param_1[sVar1 - 1] != L'/')) && (sVar1 + 1 < param_2)) {
    wcscat(param_1,L"/");
    return;
  }
  return;
}


