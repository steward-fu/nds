/*
 * Ghidra decompilation
 *
 * Function : wcsncatz
 * Address  : 001b4e40
 * Program  : drastic64
 */


/* wcsncatz(wchar_t*, wchar_t const*, unsigned long) */

wchar_t * wcsncatz(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  if (sVar1 + 1 < param_3) {
    wcsncat(param_1,param_2,(param_3 - 1) - sVar1);
  }
  return param_1;
}


