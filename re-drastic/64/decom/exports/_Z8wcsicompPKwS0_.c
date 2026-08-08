/*
 * Ghidra decompilation
 *
 * Function : _Z8wcsicompPKwS0_
 * Address  : 001bef70
 * Program  : drastic64
 */


/* wcsicomp(wchar_t const*, wchar_t const*) */

undefined4 wcsicomp(wchar_t *param_1,wchar_t *param_2)

{
  undefined4 uVar1;
  wchar_t __wc;
  wint_t wVar2;
  wint_t wVar3;
  
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
    if (__wc == L'\0') break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


