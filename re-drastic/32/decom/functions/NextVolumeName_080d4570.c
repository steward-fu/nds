/*
 * Ghidra decompilation
 *
 * Function : NextVolumeName
 * Address  : 080d4570
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void NextVolumeName(wchar *ArcName,uint MaxLength,bool OldNumbering)

{
  bool bVar1;
  size_t sVar2;
  wchar *pwVar3;
  wchar_t *pwVar4;
  wchar *EndPtr;
  size_t __n;
  int iVar5;
  int I;
  wchar wVar6;
  wchar *pwVar7;
  wchar *ChPtr;
  
  if (ArcName == (wchar *)0x0) {
    wcsncatz((wchar *)0x0,(wchar *)&DAT_08144bbc,MaxLength);
    ChPtr = (wchar *)0x0;
  }
  else {
    sVar2 = wcslen((wchar_t *)ArcName);
    iVar5 = sVar2 - 1;
    pwVar4 = (wchar_t *)ArcName;
    if (-1 < iVar5) {
      if (ArcName[iVar5] != 0x2f) {
        pwVar3 = ArcName + sVar2 + 0x3fffffff;
        do {
          bVar1 = iVar5 == 0;
          iVar5 = iVar5 + -1;
          if (bVar1) goto LAB_080d45d0;
          pwVar3 = pwVar3 + -1;
        } while (*pwVar3 != 0x2f);
      }
      pwVar4 = (wchar_t *)(ArcName + iVar5 + 1);
    }
LAB_080d45d0:
    ChPtr = (wchar *)wcsrchr(pwVar4,L'.');
    if ((wchar_t *)ChPtr == (wchar_t *)0x0) {
      wcsncatz(ArcName,(wchar *)&DAT_08144bbc,MaxLength);
      sVar2 = wcslen((wchar_t *)ArcName);
      iVar5 = sVar2 - 1;
      pwVar4 = (wchar_t *)ArcName;
      if (-1 < iVar5) {
        if (ArcName[iVar5] != 0x2f) {
          pwVar3 = ArcName + sVar2 + 0x3fffffff;
          do {
            bVar1 = iVar5 == 0;
            iVar5 = iVar5 + -1;
            if (bVar1) goto LAB_080d4808;
            pwVar3 = pwVar3 + -1;
          } while (*pwVar3 != 0x2f);
        }
        pwVar4 = (wchar_t *)(ArcName + iVar5 + 1);
      }
LAB_080d4808:
      ChPtr = (wchar *)wcsrchr(pwVar4,L'.');
    }
    else {
      if ((((wchar_t *)ChPtr)[1] != L'\0') || (MaxLength - 3 <= sVar2)) {
        iVar5 = wcsicomp((wchar *)((wchar_t *)ChPtr + 1),(wchar *)&DAT_08144c20);
        if ((iVar5 != 0) &&
           (iVar5 = wcsicomp((wchar *)((wchar_t *)ChPtr + 1),(wchar *)&DAT_08144c04), iVar5 != 0))
        goto LAB_080d462c;
      }
      wcscpy((wchar_t *)ChPtr + 1,L"rar");
    }
  }
LAB_080d462c:
  if (OldNumbering) {
    bVar1 = IsDigit(ChPtr[2]);
    if ((!bVar1) || (bVar1 = IsDigit(ChPtr[3]), !bVar1)) {
      wcscpy((wchar_t *)(ChPtr + 2),L"00");
      return;
    }
    wVar6 = ChPtr[3];
    pwVar3 = ChPtr + 3;
    ChPtr[3] = wVar6 + 1;
    if (wVar6 + 1 == 0x3a) {
      if (ChPtr[2] != 0x2e) {
        pwVar7 = ChPtr + 2;
        do {
          pwVar3 = pwVar7;
          wVar6 = *pwVar3;
          pwVar3[1] = 0x30;
          *pwVar3 = wVar6 + 1;
          if (wVar6 + 1 != 0x3a) {
            return;
          }
          pwVar7 = pwVar3 + -1;
        } while (pwVar3[-1] != 0x2e);
      }
      *pwVar3 = 0x41;
    }
  }
  else {
    pwVar3 = GetVolNumPart(ArcName);
    wVar6 = *pwVar3;
    while (wVar6 + 1 == 0x3a) {
      pwVar7 = pwVar3 + -1;
      *pwVar3 = 0x30;
      if ((pwVar7 < ArcName) || (bVar1 = IsDigit(*pwVar7), !bVar1)) {
        sVar2 = wcslen((wchar_t *)ArcName);
        if (pwVar7 != ArcName + sVar2) {
          __n = ((int)(ArcName + sVar2) + (-4 - (int)pwVar7) & 0xfffffffcU) + 4;
          memmove((void *)((int)ArcName + ((sVar2 * 4 + 8) - __n)),
                  (void *)((int)ArcName + ((sVar2 * 4 + 4) - __n)),__n);
        }
        *pwVar3 = 0x31;
        return;
      }
      pwVar3 = pwVar7;
      wVar6 = *pwVar7;
    }
    *pwVar3 = wVar6 + 1;
  }
  return;
}


