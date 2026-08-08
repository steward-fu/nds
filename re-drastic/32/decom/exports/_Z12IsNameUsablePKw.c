/*
 * Ghidra decompilation
 *
 * Function : _Z12IsNameUsablePKw
 * Address  : 080d483c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsNameUsable(wchar *Name)

{
  wchar_t *pwVar1;
  
  if (*Name != 0) {
    pwVar1 = wcspbrk((wchar_t *)Name,L"?*<>|\"");
    return pwVar1 == (wchar_t *)0x0;
  }
  return false;
}


