/*
 * Ghidra decompilation
 *
 * Function : SetExt
 * Address  : 001b5ed0
 * Program  : drastic64
 */


/* SetExt(wchar_t*, wchar_t const*) */

void SetExt(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  long lVar4;
  
  if (param_1 == (wchar_t *)0x0) {
    return;
  }
  if (*param_1 != L'\0') {
    sVar2 = wcslen(param_1);
    iVar1 = (int)sVar2 + -1;
    pwVar3 = param_1;
    if (-1 < iVar1) {
      lVar4 = (long)iVar1;
      do {
        if (param_1[lVar4] == L'/') {
          pwVar3 = param_1 + lVar4 + 1;
          break;
        }
        lVar4 = lVar4 + -1;
      } while (-1 < (int)lVar4);
    }
    pwVar3 = wcsrchr(pwVar3,L'.');
    if (param_2 != (wchar_t *)0x0) {
      if (pwVar3 == (wchar_t *)0x0) {
        wcscat(param_1,L".");
        wcscat(param_1,param_2);
        return;
      }
      wcscpy(pwVar3 + 1,param_2);
      return;
    }
    if (pwVar3 != (wchar_t *)0x0) {
      *pwVar3 = L'\0';
    }
  }
  return;
}


