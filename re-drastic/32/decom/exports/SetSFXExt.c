/*
 * Ghidra decompilation
 *
 * Function : SetSFXExt
 * Address  : 080d3da4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SetSFXExt(wchar *SFXName)

{
  size_t sVar1;
  wchar *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  bool bVar5;
  
  if (SFXName == (wchar *)0x0) {
    return;
  }
  if (*SFXName == 0) {
    return;
  }
  sVar1 = wcslen((wchar_t *)SFXName);
  iVar4 = sVar1 - 1;
  pwVar3 = (wchar_t *)SFXName;
  if (-1 < iVar4) {
    if (SFXName[iVar4] != 0x2f) {
      pwVar2 = SFXName + sVar1 + 0x3fffffff;
      do {
        bVar5 = iVar4 == 0;
        iVar4 = iVar4 + -1;
        if (bVar5) goto LAB_080d3e00;
        pwVar2 = pwVar2 + -1;
      } while (*pwVar2 != 0x2f);
    }
    pwVar3 = (wchar_t *)(SFXName + iVar4 + 1);
  }
LAB_080d3e00:
  pwVar3 = wcsrchr(pwVar3,L'.');
  if (pwVar3 != (wchar_t *)0x0) {
    wcscpy(pwVar3 + 1,L"sfx");
    return;
  }
  wcscat((wchar_t *)SFXName,L".");
  wcscat((wchar_t *)SFXName,L"sfx");
  return;
}


