/*
 * Ghidra decompilation
 *
 * Function : WideToUtfSize
 * Address  : 001bed10
 * Program  : drastic64
 */


/* WideToUtfSize(wchar_t const*) */

long WideToUtfSize(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  long lVar4;
  
  if (*param_1 == L'\0') {
    return 1;
  }
  lVar4 = 0;
  wVar2 = *param_1;
  do {
    while( true ) {
      pwVar3 = param_1 + 1;
      wVar1 = *pwVar3;
      if (0x7f < (uint)wVar2) break;
      lVar4 = lVar4 + 1;
joined_r0x001bed6c:
      param_1 = pwVar3;
      wVar2 = wVar1;
      if (wVar1 == L'\0') goto LAB_001bed50;
    }
    if ((uint)wVar2 < 0x800) {
      lVar4 = lVar4 + 2;
      goto joined_r0x001bed6c;
    }
    if ((uint)wVar2 < 0x10000) {
      if (((uint)(wVar2 + L'\xffff2800') < 0x400) && ((uint)(wVar1 + L'\xffff2400') < 0x400)) {
        pwVar3 = param_1 + 2;
        wVar1 = *pwVar3;
        lVar4 = lVar4 + 4;
      }
      else {
        lVar4 = lVar4 + 3;
      }
      goto joined_r0x001bed6c;
    }
    if ((uint)wVar2 < 0x200000) {
      lVar4 = lVar4 + 4;
      goto joined_r0x001bed6c;
    }
    param_1 = pwVar3;
    wVar2 = wVar1;
  } while (wVar1 != L'\0');
LAB_001bed50:
  return lVar4 + 1;
}


