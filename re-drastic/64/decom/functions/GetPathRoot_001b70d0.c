/*
 * Ghidra decompilation
 *
 * Function : GetPathRoot
 * Address  : 001b70d0
 * Program  : drastic64
 */


/* GetPathRoot(wchar_t const*, wchar_t*, unsigned long) */

void GetPathRoot(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  wchar_t *pwVar1;
  ulong __n;
  
  *param_2 = L'\0';
  etoupperw(*param_1);
  if (((*param_1 == L'\\') && (param_1[1] == L'\\')) &&
     (pwVar1 = wcschr(param_1 + 2,L'\\'), pwVar1 != (wchar_t *)0x0)) {
    pwVar1 = wcschr(pwVar1 + 1,L'\\');
    if (pwVar1 == (wchar_t *)0x0) {
      __n = wcslen(param_1);
    }
    else {
      __n = ((long)pwVar1 - (long)param_1 >> 2) + 1;
    }
    if (__n < param_3) {
      pwVar1 = param_2 + __n;
    }
    else {
      __n = 0;
      pwVar1 = param_2;
    }
    wcsncpy(param_2,param_1,__n);
    *pwVar1 = L'\0';
  }
  return;
}


