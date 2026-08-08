/*
 * Ghidra decompilation
 *
 * Function : IsWildcard
 * Address  : 001b6130
 * Program  : drastic64
 */


/* IsWildcard(wchar_t const*) */

bool IsWildcard(wchar_t *param_1)

{
  wchar_t *pwVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    pwVar1 = wcspbrk(param_1,L"*?");
    return pwVar1 != (wchar_t *)0x0;
  }
  return false;
}


