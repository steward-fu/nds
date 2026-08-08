/*
 * Ghidra decompilation
 *
 * Function : wcsupper
 * Address  : 001bf0d0
 * Program  : drastic64
 */


/* wcsupper(wchar_t*) */

wchar_t * wcsupper(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  wVar1 = *param_1;
  pwVar2 = param_1;
  while (wVar1 != L'\0') {
    wVar1 = towupper(wVar1);
    *pwVar2 = wVar1;
    pwVar2 = pwVar2 + 1;
    wVar1 = *pwVar2;
  }
  return param_1;
}


