/*
 * Ghidra decompilation
 *
 * Function : _Z8wcslowerPw
 * Address  : 001bf090
 * Program  : drastic64
 */


/* wcslower(wchar_t*) */

wchar_t * wcslower(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  wVar1 = *param_1;
  pwVar2 = param_1;
  while (wVar1 != L'\0') {
    wVar1 = towlower(wVar1);
    *pwVar2 = wVar1;
    pwVar2 = pwVar2 + 1;
    wVar1 = *pwVar2;
  }
  return param_1;
}


