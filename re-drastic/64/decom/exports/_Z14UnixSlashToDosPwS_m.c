/*
 * Ghidra decompilation
 *
 * Function : _Z14UnixSlashToDosPwS_m
 * Address  : 001b6d80
 * Program  : drastic64
 */


/* UnixSlashToDos(wchar_t*, wchar_t*, unsigned long) */

wchar_t * UnixSlashToDos(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  size_t sVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  
  pwVar2 = param_1;
  if (param_2 != (wchar_t *)0x0 && param_2 != param_1) {
    sVar1 = wcslen(param_1);
    if (sVar1 < param_3) {
      wcscpy(param_2,param_1);
      wVar3 = *param_1;
      goto joined_r0x001b6dc8;
    }
    *param_2 = L'\0';
    return param_2;
  }
  wVar3 = *param_1;
  if (wVar3 == L'\0') {
    if (param_2 != (wchar_t *)0x0) {
      return param_2;
    }
  }
  else {
    if (param_2 != (wchar_t *)0x0) {
      do {
        while (wVar3 == L'/') {
          *(undefined4 *)((long)param_2 + ((long)pwVar2 - (long)param_1)) = 0x5c;
          wVar3 = pwVar2[1];
          pwVar2 = pwVar2 + 1;
          if (wVar3 == L'\0') {
            return param_2;
          }
        }
        pwVar2 = pwVar2 + 1;
        wVar3 = *pwVar2;
joined_r0x001b6dc8:
      } while (wVar3 != L'\0');
      return param_2;
    }
    do {
      while (wVar3 == L'/') {
        *pwVar2 = L'\\';
        wVar3 = pwVar2[1];
        pwVar2 = pwVar2 + 1;
        if (wVar3 == L'\0') {
          return param_1;
        }
      }
      wVar3 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
    } while (wVar3 != L'\0');
  }
  return param_1;
}


