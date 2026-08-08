/*
 * Ghidra decompilation
 *
 * Function : match
 * Address  : 001ed900
 * Program  : drastic64
 */


/* match(wchar_t const*, wchar_t const*, bool) */

bool match(wchar_t *param_1,wchar_t *param_2,bool param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t wVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  wVar4 = *param_2;
LAB_001ed920:
  wVar1 = *param_1;
  pwVar2 = param_1;
  do {
    param_1 = pwVar2 + 1;
    if (wVar1 == L'*') {
      if (*param_1 == L'\0') {
        return true;
      }
      if (*param_1 == L'.') {
        wVar4 = param_1[1];
        if (wVar4 == L'*') {
          if (param_1[2] == L'\0') {
            return true;
          }
          pwVar6 = wcschr(param_2,L'.');
        }
        else {
          pwVar6 = wcschr(param_2,L'.');
          if (wVar4 == L'\0') {
            if (pwVar6 != (wchar_t *)0x0) {
              return pwVar6[1] == L'\0';
            }
            return true;
          }
        }
        if ((pwVar6 != (wchar_t *)0x0) &&
           (pwVar7 = wcspbrk(param_1,L"*?"), param_2 = pwVar6, pwVar7 == (wchar_t *)0x0)) {
          pwVar6 = pwVar6 + 1;
          pwVar7 = wcschr(pwVar6,L'.');
          if (pwVar7 == (wchar_t *)0x0) {
            if (param_3) {
              iVar5 = wcscmp(pwVar2 + 2,pwVar6);
            }
            else {
              iVar5 = wcsicompc(pwVar2 + 2,pwVar6);
            }
            return iVar5 == 0;
          }
        }
      }
      do {
        if (*param_2 == L'\0') {
          return false;
        }
        cVar3 = match(param_1,param_2,param_3);
        param_2 = param_2 + 1;
      } while (cVar3 == '\0');
      return true;
    }
    if (wVar1 == L'?') {
      if (wVar4 == L'\0') {
        return false;
      }
    }
    else {
      if (wVar1 == L'\0') {
        return wVar4 == L'\0';
      }
      if (wVar1 != wVar4) break;
    }
    param_2 = param_2 + 1;
    wVar4 = *param_2;
    wVar1 = *param_1;
    pwVar2 = param_1;
  } while( true );
  if (wVar1 != L'.') {
    return false;
  }
  if ((wVar4 != L'\\' && wVar4 != L'\0') && wVar4 != L'.') {
    return false;
  }
  goto LAB_001ed920;
}


