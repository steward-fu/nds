/*
 * Ghidra decompilation
 *
 * Function : _Z11GetCmdParamPKwPwm
 * Address  : 001b5360
 * Program  : drastic64
 */


/* GetCmdParam(wchar_t const*, wchar_t*, unsigned long) */

wchar_t * GetCmdParam(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  bool bVar1;
  wchar_t wVar2;
  ulong uVar3;
  
  wVar2 = *param_1;
  if (wVar2 == L' ' || wVar2 == L'\t') {
    do {
      param_1 = param_1 + 1;
      wVar2 = *param_1;
    } while (wVar2 == L' ' || wVar2 == L'\t');
  }
  if (wVar2 == L'\0') {
    return (wchar_t *)0x0;
  }
  uVar3 = 0;
  bVar1 = false;
  if (param_2 == (wchar_t *)0x0) {
    do {
      if (((uint)param_2 == 0) && (wVar2 == L' ' || wVar2 == L'\t')) {
        return param_1;
      }
      bVar1 = wVar2 == L'\"';
      wVar2 = param_1[1];
      if (bVar1) {
        if (wVar2 == L'\"') {
          wVar2 = param_1[2];
          param_1 = param_1 + 1;
        }
        else {
          param_2 = (wchar_t *)(ulong)((uint)param_2 ^ 1);
        }
      }
      param_1 = param_1 + 1;
    } while (wVar2 != L'\0');
  }
  else {
    do {
      if ((!bVar1) && (wVar2 == L' ' || wVar2 == L'\t')) break;
      if (wVar2 == L'\"') {
        wVar2 = param_1[1];
        if (wVar2 == L'\"') {
          if (uVar3 < param_3 - 1) {
            param_2[uVar3] = L'\"';
            uVar3 = uVar3 + 1;
          }
          wVar2 = param_1[2];
          param_1 = param_1 + 1;
        }
        else {
          bVar1 = (bool)(bVar1 ^ 1);
        }
      }
      else {
        if (uVar3 < param_3 - 1) {
          param_2[uVar3] = wVar2;
          uVar3 = uVar3 + 1;
        }
        wVar2 = param_1[1];
      }
      param_1 = param_1 + 1;
    } while (wVar2 != L'\0');
    param_2[uVar3] = L'\0';
  }
  return param_1;
}


