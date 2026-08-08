/*
 * Ghidra decompilation
 *
 * Function : IsWildcard
 * Address  : 080d3f78
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsWildcard(wchar *Str)

{
  wchar_t *pwVar1;
  
  if (Str != (wchar *)0x0) {
    pwVar1 = wcspbrk((wchar_t *)Str,L"*?");
    if (pwVar1 != (wchar_t *)0x0) {
      pwVar1 = (wchar_t *)0x1;
    }
    return SUB41(pwVar1,0);
  }
  return false;
}


