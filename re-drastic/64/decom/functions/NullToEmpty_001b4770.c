/*
 * Ghidra decompilation
 *
 * Function : NullToEmpty
 * Address  : 001b4770
 * Program  : drastic64
 */


/* NullToEmpty(wchar_t const*) */

wchar_t * NullToEmpty(wchar_t *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"";
  if (param_1 != (wchar_t *)0x0) {
    pwVar1 = param_1;
  }
  return pwVar1;
}


