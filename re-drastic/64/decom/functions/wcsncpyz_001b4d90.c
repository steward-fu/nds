/*
 * Ghidra decompilation
 *
 * Function : wcsncpyz
 * Address  : 001b4d90
 * Program  : drastic64
 */


/* wcsncpyz(wchar_t*, wchar_t const*, unsigned long) */

wchar_t * wcsncpyz(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  if (param_3 != 0) {
    wcsncpy(param_1,param_2,param_3 - 1);
    param_1[param_3 - 1] = L'\0';
  }
  return param_1;
}


