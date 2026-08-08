/*
 * Ghidra decompilation
 *
 * Function : ConvertPath
 * Address  : 080d3a70
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * ConvertPath(wchar *SrcPath,wchar *DestPath)

{
  int iVar1;
  wchar *DestPtr;
  wchar_t *pwVar2;
  wchar *Slash;
  wchar wVar3;
  wchar *pwVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  wchar *t;
  wchar_t *pwVar7;
  wchar *s_1;
  wchar_t wVar8;
  wchar TmpStr [2048];
  
  iVar1 = __stack_chk_guard;
  wVar3 = *SrcPath;
  if (wVar3 != 0) {
    pwVar4 = SrcPath + 1;
    do {
      if (wVar3 == 0x2f) {
        wVar3 = *pwVar4;
        if (wVar3 == 0x2e) {
          if ((pwVar4[1] == 0x2e) && (pwVar4[2] == 0x2f)) {
            SrcPath = pwVar4 + 3;
          }
          pwVar4 = pwVar4 + 1;
          goto LAB_080d3ac0;
        }
      }
      else {
LAB_080d3ac0:
        wVar3 = *pwVar4;
      }
      pwVar4 = pwVar4 + 1;
    } while (wVar3 != 0);
    wVar8 = *SrcPath;
    while (wVar8 != L'\0') {
      wVar6 = wVar8;
      pwVar7 = (wchar_t *)SrcPath;
      pwVar5 = (wchar_t *)SrcPath;
      if (wVar8 != L'\\') goto LAB_080d3af0;
      if (((wchar_t *)SrcPath)[1] != L'\\') goto LAB_080d3af0;
      pwVar2 = wcschr((wchar_t *)SrcPath + 2,L'\\');
      if ((pwVar2 == (wchar_t *)0x0) ||
         (pwVar2 = wcschr(pwVar2 + 1,L'\\'), pwVar2 == (wchar_t *)0x0)) {
        wVar6 = L'\\';
        goto LAB_080d3af0;
      }
      pwVar5 = pwVar2 + 1;
      wVar6 = pwVar2[1];
      pwVar7 = pwVar5;
      while (wVar6 != L'\0') {
LAB_080d3af0:
        pwVar5 = pwVar5 + 1;
        pwVar2 = pwVar5;
        if ((wVar6 != L'/') && (pwVar2 = pwVar7, wVar6 != L'.')) break;
        pwVar7 = pwVar2;
        wVar6 = *pwVar5;
      }
      if ((wchar_t *)SrcPath == pwVar7) {
        SrcPath = (wchar *)pwVar7;
        if (((wVar8 == L'.') && (pwVar7[1] == L'.')) && (pwVar7[2] == L'\0')) {
          SrcPath = (wchar *)(pwVar7 + 2);
        }
        break;
      }
      SrcPath = (wchar *)pwVar7;
      wVar8 = *pwVar7;
    }
  }
  if (DestPath != (wchar *)0x0) {
    wcsncpyz(TmpStr,SrcPath,0x800);
    wcscpy((wchar_t *)DestPath,(wchar_t *)TmpStr);
  }
  if (iVar1 == __stack_chk_guard) {
    return (wchar *)(wchar_t *)SrcPath;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


