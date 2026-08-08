/*
 * Ghidra decompilation
 *
 * Function : GetWideName
 * Address  : 080d5034
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * GetWideName(char *Name,wchar *NameW,wchar *DestW,size_t DestSize)

{
  if ((NameW == (wchar *)0x0) || (*NameW == 0)) {
    if (Name == (char *)0x0) {
      *DestW = 0;
    }
    else {
      CharToWide(Name,DestW,DestSize);
    }
  }
  else if (NameW != DestW) {
    wcsncpy((wchar_t *)DestW,(wchar_t *)NameW,DestSize);
  }
  if (DestSize != 0) {
    DestW[DestSize + 0x3fffffff] = 0;
  }
  return DestW;
}


