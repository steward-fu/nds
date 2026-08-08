/*
 * Ghidra decompilation
 *
 * Function : NextVolumeName
 * Address  : 001b6720
 * Program  : drastic64
 */


/* NextVolumeName(wchar_t*, unsigned int, bool) */

void NextVolumeName(wchar_t *param_1,uint param_2,bool param_3)

{
  ulong uVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  long lVar9;
  
  if (param_1 == (wchar_t *)0x0) {
    pwVar7 = (wchar_t *)0x0;
    wcsncatz((wchar_t *)0x0,L".rar",(ulong)param_2);
  }
  else {
    sVar6 = wcslen(param_1);
    iVar5 = (int)sVar6 + -1;
    pwVar7 = param_1;
    if (-1 < iVar5) {
      lVar9 = (long)iVar5;
      do {
        if (param_1[lVar9] == L'/') {
          pwVar7 = param_1 + lVar9 + 1;
          break;
        }
        lVar9 = lVar9 + -1;
      } while (-1 < (int)lVar9);
    }
    pwVar7 = wcsrchr(pwVar7,L'.');
    if (pwVar7 == (wchar_t *)0x0) {
      wcsncatz(param_1,L".rar",(ulong)param_2);
      sVar6 = wcslen(param_1);
      iVar5 = (int)sVar6 + -1;
      lVar9 = (long)iVar5;
      while (pwVar7 = param_1, -1 < iVar5) {
        if (param_1[lVar9] == L'/') {
          pwVar7 = param_1 + lVar9 + 1;
          break;
        }
        lVar9 = lVar9 + -1;
        iVar5 = (int)lVar9;
      }
      pwVar7 = wcsrchr(pwVar7,L'.');
    }
    else {
      pwVar8 = pwVar7 + 1;
      if ((((pwVar7[1] == L'\0') && (sVar6 < param_2 - 3)) ||
          (iVar5 = wcsicomp(pwVar8,L"exe"), iVar5 == 0)) ||
         (iVar5 = wcsicomp(pwVar8,L"sfx"), iVar5 == 0)) {
        wcscpy(pwVar8,L"rar");
      }
    }
  }
  if (param_3) {
    cVar4 = IsDigit(pwVar7[2]);
    if ((cVar4 == '\0') || (cVar4 = IsDigit(pwVar7[3]), cVar4 == '\0')) {
      wcscpy(pwVar7 + 2,L"00");
      return;
    }
    pwVar8 = pwVar7 + 3;
    wVar2 = pwVar7[3] + L'\x01';
    pwVar7[3] = wVar2;
    while (wVar2 == L':') {
      wVar2 = pwVar8[-1] + L'\x01';
      if (pwVar8[-1] == L'.') {
        *pwVar8 = L'A';
        return;
      }
      *pwVar8 = L'0';
      pwVar8 = pwVar8 + -1;
      *pwVar8 = wVar2;
    }
  }
  else {
    pwVar7 = (wchar_t *)GetVolNumPart(param_1);
    do {
      pwVar8 = pwVar7;
      if (*pwVar8 != L'9') {
        *pwVar8 = *pwVar8 + L'\x01';
        return;
      }
      pwVar7 = pwVar8 + -1;
      *pwVar8 = L'0';
    } while ((param_1 <= pwVar7) && (cVar4 = IsDigit(*pwVar7), cVar4 != '\0'));
    sVar6 = wcslen(param_1);
    pwVar3 = param_1 + sVar6;
    if (pwVar7 != pwVar3) {
      uVar1 = ((long)pwVar3 - (long)pwVar7) - 4U >> 2;
      memmove(pwVar3 + (1 - uVar1),pwVar3 + -uVar1,(long)pwVar3 - (long)pwVar7);
    }
    *pwVar8 = L'1';
  }
  return;
}


