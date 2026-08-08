/*
 * Ghidra decompilation
 *
 * Function : WideToChar
 * Address  : 001be7e0
 * Program  : drastic64
 */


/* WideToChar(wchar_t const*, char*, unsigned long) */

bool WideToChar(wchar_t *param_1,char *param_2,ulong param_3)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  *param_2 = '\0';
  pwVar4 = wcschr(param_1,L'\xfffe');
  if (pwVar4 == (wchar_t *)0x0) {
    bVar2 = false;
    sVar5 = wcstombs(param_2,param_1,param_3);
    if ((sVar5 != 0xffffffffffffffff) && (bVar2 = true, sVar5 == 0)) {
      bVar2 = *param_1 == L'\0';
    }
  }
  else {
    bVar2 = true;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
LAB_001be830:
    sVar5 = __ctype_get_mb_cur_max();
    uVar9 = uVar6;
    if (uVar7 < param_3 - sVar5) {
      while( true ) {
        wVar1 = param_1[uVar9];
        uVar6 = (ulong)((int)uVar9 + 1);
        if (wVar1 == L'\0') {
          param_2[uVar7] = '\0';
          goto LAB_001be8a4;
        }
        if (wVar1 == L'\xfffe') goto LAB_001be830;
        if (0x7f < (uint)(wVar1 + L'\xffff1f80')) break;
        param_2[uVar7] = (char)wVar1;
        uVar7 = (ulong)((int)uVar8 + 1);
        sVar5 = __ctype_get_mb_cur_max();
        uVar8 = uVar7;
        uVar9 = uVar6;
        if (param_3 - sVar5 <= uVar7) goto LAB_001be8a4;
      }
      wctomb((char *)0x0,L'\0');
      iVar3 = wctomb(param_2 + uVar7,param_1[uVar9]);
      if (iVar3 == -1) {
        bVar2 = false;
      }
      mblen((char *)0x0,0);
      sVar5 = __ctype_get_mb_cur_max();
      iVar3 = mblen(param_2 + uVar7,sVar5);
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      uVar7 = (ulong)(uint)((int)uVar8 + iVar3);
      uVar8 = uVar7;
      goto LAB_001be830;
    }
  }
LAB_001be8a4:
  if (param_3 != 0) {
    param_2[param_3 - 1] = '\0';
  }
  return bVar2;
}


