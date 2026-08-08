/*
 * Ghidra decompilation
 *
 * Function : _Z8wcsncatzPwPKwj
 * Address  : 080d26f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * wcsncatz(wchar *dest,wchar *src,size_t maxlen)

{
  size_t sVar1;
  size_t Length;
  
  sVar1 = wcslen((wchar_t *)dest);
  if (sVar1 + 1 < maxlen) {
    wcsncat((wchar_t *)dest,(wchar_t *)src,(maxlen - 1) - sVar1);
  }
  return dest;
}


