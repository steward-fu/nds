/*
 * Ghidra decompilation
 *
 * Function : PointToName
 * Address  : 080d39dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * PointToName(wchar *Path)

{
  size_t sVar1;
  wchar *pwVar2;
  int iVar3;
  bool bVar4;
  
  sVar1 = wcslen((wchar_t *)Path);
  iVar3 = sVar1 - 1;
  if (iVar3 < 0) {
    return Path;
  }
  if (Path[iVar3] != 0x2f) {
    pwVar2 = Path + sVar1 + 0x3fffffff;
    do {
      bVar4 = iVar3 == 0;
      iVar3 = iVar3 + -1;
      if (bVar4) {
        return Path;
      }
      pwVar2 = pwVar2 + -1;
    } while (*pwVar2 != 0x2f);
  }
  return Path + iVar3 + 1;
}


