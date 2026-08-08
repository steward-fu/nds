/*
 * Ghidra decompilation
 *
 * Function : SetName
 * Address  : 080d3c34
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SetName(wchar *FullName,wchar *Name,size_t MaxSize)

{
  size_t sVar1;
  int iVar2;
  wchar *pwVar3;
  bool bVar4;
  
  sVar1 = wcslen((wchar_t *)FullName);
  iVar2 = sVar1 - 1;
  if (iVar2 < 0) {
LAB_080d3c84:
    iVar2 = 0;
  }
  else {
    if (FullName[iVar2] != 0x2f) {
      pwVar3 = FullName + sVar1 + 0x3fffffff;
      do {
        bVar4 = iVar2 == 0;
        iVar2 = iVar2 + -1;
        if (bVar4) goto LAB_080d3c84;
        pwVar3 = pwVar3 + -1;
      } while (*pwVar3 != 0x2f);
    }
    FullName = FullName + iVar2 + 1;
    iVar2 = -((iVar2 + 1) * 4 >> 2);
  }
  wcsncpyz(FullName,Name,MaxSize + iVar2);
  return;
}


