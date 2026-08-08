/*
 * Ghidra decompilation
 *
 * Function : _Z6CmpExtPKwS0_
 * Address  : 080d3edc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool CmpExt(wchar *Name,wchar *Ext)

{
  size_t sVar1;
  wchar_t *pwVar2;
  wchar *pwVar3;
  int iVar4;
  bool bVar5;
  
  if (Name == (wchar *)0x0) {
    pwVar2 = (wchar_t *)0x0;
  }
  else {
    sVar1 = wcslen((wchar_t *)Name);
    iVar4 = sVar1 - 1;
    if (-1 < iVar4) {
      if (Name[iVar4] != 0x2f) {
        pwVar3 = Name + sVar1 + 0x3fffffff;
        do {
          bVar5 = iVar4 == 0;
          iVar4 = iVar4 + -1;
          if (bVar5) goto LAB_080d3f30;
          pwVar3 = pwVar3 + -1;
        } while (*pwVar3 != 0x2f);
      }
      Name = Name + iVar4 + 1;
    }
LAB_080d3f30:
    pwVar2 = wcsrchr((wchar_t *)Name,L'.');
    if (pwVar2 != (wchar_t *)0x0) {
      iVar4 = wcsicomp((wchar *)(pwVar2 + 1),Ext);
      pwVar2 = (wchar_t *)(uint)(iVar4 == 0);
    }
  }
  return SUB41(pwVar2,0);
}


