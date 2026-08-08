/*
 * Ghidra decompilation
 *
 * Function : _Z18RemoveNameFromPathPw
 * Address  : 080d41e0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void RemoveNameFromPath(wchar *Path)

{
  size_t sVar1;
  wchar *pwVar2;
  int iVar3;
  wchar *Name;
  bool bVar4;
  
  sVar1 = wcslen((wchar_t *)Path);
  iVar3 = sVar1 - 1;
  Name = Path;
  if (-1 < iVar3) {
    if (Path[iVar3] != 0x2f) {
      pwVar2 = Path + sVar1 + 0x3fffffff;
      do {
        bVar4 = iVar3 == 0;
        iVar3 = iVar3 + -1;
        if (bVar4) goto LAB_080d4228;
        pwVar2 = pwVar2 + -1;
      } while (*pwVar2 != 0x2f);
    }
    Name = Path + iVar3 + 1;
  }
LAB_080d4228:
  if (Path + 2 <= Name) {
    Name = Name + -1;
  }
  *Name = 0;
  return;
}


