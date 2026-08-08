/*
 * Ghidra decompilation
 *
 * Function : wcsnicomp
 * Address  : 001beff0
 * Program  : drastic64
 */


/* wcsnicomp(wchar_t const*, wchar_t const*, unsigned long) */

undefined4 wcsnicomp(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  undefined4 uVar1;
  wchar_t __wc;
  wint_t wVar2;
  wint_t wVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  while( true ) {
    __wc = *param_1;
    wVar2 = towupper(__wc);
    wVar3 = towupper(*param_2);
    if (wVar2 != wVar3) {
      uVar1 = 0xffffffff;
      if (param_2 <= param_1) {
        uVar1 = 1;
      }
      return uVar1;
    }
    if ((__wc == L'\0') || (param_3 = param_3 - 1, param_3 == 0)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


