/*
 * Ghidra decompilation
 *
 * Function : _Z14MakeNameUsablePwb
 * Address  : 001b6ab0
 * Program  : drastic64
 */


/* MakeNameUsable(wchar_t*, bool) */

void MakeNameUsable(wchar_t *param_1,bool param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  wVar2 = *param_1;
  if (wVar2 != L'\0') {
    if (param_2) {
      do {
        pwVar1 = wcschr(L"?*<>|\"",wVar2);
        if ((pwVar1 != (wchar_t *)0x0 || (uint)wVar2 < 0x1f) ||
            pwVar1 == (wchar_t *)0x0 && wVar2 == L'\x1f') {
          do {
            *param_1 = L'_';
            param_1 = param_1 + 1;
            wVar2 = *param_1;
            if (wVar2 == L'\0') {
              return;
            }
            pwVar1 = wcschr(L"?*<>|\"",wVar2);
          } while ((pwVar1 != (wchar_t *)0x0 || (uint)wVar2 < 0x1f) ||
                   pwVar1 == (wchar_t *)0x0 && wVar2 == L'\x1f');
        }
        param_1 = param_1 + 1;
        wVar2 = *param_1;
      } while (wVar2 != L'\0');
    }
    else {
      do {
        while (pwVar1 = wcschr(L"?*",wVar2), pwVar1 != (wchar_t *)0x0) {
          *param_1 = L'_';
          param_1 = param_1 + 1;
          wVar2 = *param_1;
          if (wVar2 == L'\0') {
            return;
          }
        }
        param_1 = param_1 + 1;
        wVar2 = *param_1;
      } while (wVar2 != L'\0');
    }
  }
  return;
}


