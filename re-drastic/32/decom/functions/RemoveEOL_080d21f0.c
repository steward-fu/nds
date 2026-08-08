/*
 * Ghidra decompilation
 *
 * Function : RemoveEOL
 * Address  : 080d21f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * RemoveEOL(wchar *Str)

{
  size_t sVar1;
  int iVar2;
  wchar *pwVar3;
  
  sVar1 = wcslen((wchar_t *)Str);
  iVar2 = sVar1 - 1;
  if (((-1 < iVar2) && (Str[iVar2] - 9 < 0x18)) && ((0x800013U >> (Str[iVar2] - 9 & 0xff) & 1) == 1)
     ) {
    pwVar3 = Str + sVar1 + 0x3fffffff;
    while( true ) {
      iVar2 = iVar2 + -1;
      *pwVar3 = 0;
      if (iVar2 == -1) break;
      pwVar3 = pwVar3 + -1;
      if (0x17 < *pwVar3 - 9) {
        return Str;
      }
      if ((0x800013U >> (*pwVar3 - 9 & 0xff) & 1) == 0) {
        return Str;
      }
    }
  }
  return Str;
}


