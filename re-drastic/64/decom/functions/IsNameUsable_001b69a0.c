/*
 * Ghidra decompilation
 *
 * Function : IsNameUsable
 * Address  : 001b69a0
 * Program  : drastic64
 */


/* IsNameUsable(wchar_t const*) */

bool IsNameUsable(wchar_t *param_1)

{
  wchar_t *pwVar1;
  
  if (*param_1 != L'\0') {
    pwVar1 = wcspbrk(param_1,L"?*<>|\"");
    return pwVar1 == (wchar_t *)0x0;
  }
  return false;
}


