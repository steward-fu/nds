/*
 * Ghidra decompilation
 *
 * Function : _Z6SetExtPwPKw
 * Address  : 080d3cc0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SetExt(wchar *Name,wchar *NewExt)

{
  size_t sVar1;
  wchar *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  bool bVar5;
  
  if (Name == (wchar *)0x0) {
    return;
  }
  if (*Name == 0) {
    return;
  }
  sVar1 = wcslen((wchar_t *)Name);
  iVar4 = sVar1 - 1;
  pwVar3 = (wchar_t *)Name;
  if (-1 < iVar4) {
    if (Name[iVar4] != 0x2f) {
      pwVar2 = Name + sVar1 + 0x3fffffff;
      do {
        bVar5 = iVar4 == 0;
        iVar4 = iVar4 + -1;
        if (bVar5) goto LAB_080d3d2c;
        pwVar2 = pwVar2 + -1;
      } while (*pwVar2 != 0x2f);
    }
    pwVar3 = (wchar_t *)(Name + iVar4 + 1);
  }
LAB_080d3d2c:
  pwVar3 = wcsrchr(pwVar3,L'.');
  if (NewExt == (wchar *)0x0) {
    if (pwVar3 != (wchar_t *)0x0) {
      *pwVar3 = L'\0';
    }
    return;
  }
  if (pwVar3 != (wchar_t *)0x0) {
    wcscpy(pwVar3 + 1,(wchar_t *)NewExt);
    return;
  }
  wcscat((wchar_t *)Name,L".");
  wcscat((wchar_t *)Name,(wchar_t *)NewExt);
  return;
}


