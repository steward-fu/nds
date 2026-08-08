/*
 * Ghidra decompilation
 *
 * Function : GetFilePath
 * Address  : 080d4140
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void GetFilePath(wchar *FullName,wchar *Path,size_t MaxLength)

{
  size_t sVar1;
  uint __n;
  int iVar2;
  uint uVar3;
  wchar *pwVar4;
  bool bVar5;
  
  if (MaxLength == 0) {
    return;
  }
  sVar1 = wcslen((wchar_t *)FullName);
  iVar2 = sVar1 - 1;
  if (iVar2 < 0) {
LAB_080d4198:
    __n = 0;
    iVar2 = 0;
  }
  else {
    if (FullName[iVar2] != 0x2f) {
      pwVar4 = FullName + sVar1 + 0x3fffffff;
      do {
        bVar5 = iVar2 == 0;
        iVar2 = iVar2 + -1;
        if (bVar5) goto LAB_080d4198;
        pwVar4 = pwVar4 + -1;
      } while (*pwVar4 != 0x2f);
    }
    uVar3 = (iVar2 + 1) * 4 >> 2;
    __n = MaxLength - 1;
    if (uVar3 <= MaxLength - 1) {
      __n = uVar3;
    }
    iVar2 = __n << 2;
  }
  wcsncpy((wchar_t *)Path,(wchar_t *)FullName,__n);
  *(undefined4 *)((int)Path + iVar2) = 0;
  return;
}


