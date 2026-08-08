/*
 * Ghidra decompilation
 *
 * Function : _Z13GetVolNumPartPKw
 * Address  : 001b6610
 * Program  : drastic64
 */


/* GetVolNumPart(wchar_t const*) */

wchar_t * GetVolNumPart(wchar_t *param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  size_t sVar4;
  long lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  
  sVar4 = wcslen(param_1);
  pwVar8 = param_1 + sVar4;
  do {
    pwVar7 = pwVar8 + -1;
    pwVar8 = pwVar8 + -1;
    bVar2 = IsDigit(*pwVar7);
    pwVar7 = pwVar8;
  } while ((param_1 < pwVar8 & (bVar2 ^ 1)) != 0);
  for (; cVar3 = IsDigit(*pwVar7),
      (cVar3 != '\0' && param_1 <= pwVar7) && (cVar3 == '\0' || pwVar7 != param_1);
      pwVar7 = pwVar7 + -1) {
  }
  while( true ) {
    if ((pwVar7 <= param_1) || (*pwVar7 == L'.')) {
      return pwVar8;
    }
    cVar3 = IsDigit(*pwVar7);
    if (cVar3 != '\0') break;
    pwVar7 = pwVar7 + -1;
  }
  sVar4 = wcslen(param_1);
  iVar1 = (int)sVar4 + -1;
  if (-1 < iVar1) {
    lVar5 = (long)iVar1;
    do {
      if (param_1[lVar5] == L'/') {
        param_1 = param_1 + lVar5 + 1;
        break;
      }
      lVar5 = lVar5 + -1;
    } while (-1 < (int)lVar5);
  }
  pwVar6 = wcschr(param_1,L'.');
  if (pwVar6 != (wchar_t *)0x0 && pwVar6 < pwVar7) {
    pwVar8 = pwVar7;
  }
  return pwVar8;
}


