/*
 * Ghidra decompilation
 *
 * Function : _Z8wcsncpyzPwPKwj
 * Address  : 080d2660
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * wcsncpyz(wchar *dest,wchar *src,size_t maxlen)

{
  if (maxlen != 0) {
    wcsncpy((wchar_t *)dest,(wchar_t *)src,maxlen - 1);
    dest[maxlen + 0x3fffffff] = 0;
  }
  return dest;
}


