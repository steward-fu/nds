/*
 * Ghidra decompilation
 *
 * Function : ConvertPath
 * Address  : 001b5c90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvertPath(wchar_t const*, wchar_t*) */

wchar_t * ConvertPath(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  wchar_t awStack_2008 [2048];
  long local_8;
  
  wVar2 = *param_1;
  local_8 = ___stack_chk_guard;
  pwVar6 = param_1;
  if (wVar2 != L'\0') {
    do {
      while ((bVar1 = wVar2 == L'/', wVar2 = param_1[1], bVar1 && (wVar2 == L'.'))) {
        if (param_1[2] == L'.') {
          pwVar3 = param_1 + 4;
          if (param_1[3] != L'/') {
            pwVar3 = pwVar6;
          }
          param_1 = param_1 + 1;
          pwVar6 = pwVar3;
        }
        else {
          param_1 = param_1 + 1;
        }
      }
      param_1 = param_1 + 1;
    } while (wVar2 != L'\0');
    wVar2 = *pwVar6;
    param_1 = pwVar6;
    while (wVar2 != L'\0') {
      pwVar6 = param_1;
      wVar5 = wVar2;
      if (wVar2 == L'\\') {
        if (param_1[1] != L'\\') {
          wVar5 = L'\\';
          goto LAB_001b5d08;
        }
        pwVar3 = wcschr(param_1 + 2,L'\\');
        if ((pwVar3 == (wchar_t *)0x0) ||
           (pwVar3 = wcschr(pwVar3 + 1,L'\\'), pwVar3 == (wchar_t *)0x0)) {
          wVar5 = L'\\';
          goto LAB_001b5d08;
        }
        wVar5 = pwVar3[1];
        pwVar6 = pwVar3 + 1;
        if (wVar5 != L'\0') goto LAB_001b5d08;
      }
      else {
LAB_001b5d08:
        pwVar3 = pwVar6 + 1;
        do {
          while (pwVar4 = pwVar3, wVar5 == L'/') {
            wVar5 = *pwVar4;
            pwVar3 = pwVar4 + 1;
            pwVar6 = pwVar4;
            if (wVar5 == L'\0') goto joined_r0x001b5e08;
          }
          if (wVar5 != L'.') break;
          wVar5 = *pwVar4;
          pwVar3 = pwVar4 + 1;
        } while (wVar5 != L'\0');
      }
joined_r0x001b5e08:
      if (param_1 == pwVar6) {
        param_1 = pwVar6;
        if (((wVar2 == L'.') && (pwVar6[1] == L'.')) && (param_1 = pwVar6 + 2, pwVar6[2] != L'\0'))
        {
          param_1 = pwVar6;
        }
        break;
      }
      param_1 = pwVar6;
      wVar2 = *pwVar6;
    }
  }
  if (param_2 != (wchar_t *)0x0) {
    wcsncpyz(awStack_2008,param_1,0x800);
    wcscpy(param_2,awStack_2008);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


