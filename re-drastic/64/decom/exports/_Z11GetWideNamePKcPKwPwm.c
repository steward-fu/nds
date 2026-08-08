/*
 * Ghidra decompilation
 *
 * Function : _Z11GetWideNamePKcPKwPwm
 * Address  : 001b7310
 * Program  : drastic64
 */


/* GetWideName(char const*, wchar_t const*, wchar_t*, unsigned long) */

wchar_t * GetWideName(char *param_1,wchar_t *param_2,wchar_t *param_3,ulong param_4)

{
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
    if (param_1 == (char *)0x0) {
      *param_3 = L'\0';
    }
    else {
      CharToWide(param_1,param_3,param_4);
    }
  }
  else if (param_2 != param_3) {
    wcsncpy(param_3,param_2,param_4);
  }
  if (param_4 != 0) {
    param_3[param_4 - 1] = L'\0';
  }
  return param_3;
}


