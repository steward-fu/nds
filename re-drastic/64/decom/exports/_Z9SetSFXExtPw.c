/*
 * Ghidra decompilation
 *
 * Function : _Z9SetSFXExtPw
 * Address  : 001b5f90
 * Program  : drastic64
 */


/* SetSFXExt(wchar_t*) */

void SetSFXExt(wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  wchar_t *pwVar4;
  
  if (param_1 == (wchar_t *)0x0) {
    return;
  }
  if (*param_1 == L'\0') {
    return;
  }
  sVar2 = wcslen(param_1);
  iVar1 = (int)sVar2 + -1;
  pwVar4 = param_1;
  if (-1 < iVar1) {
    lVar3 = (long)iVar1;
    do {
      if (param_1[lVar3] == L'/') {
        pwVar4 = param_1 + lVar3 + 1;
        break;
      }
      lVar3 = lVar3 + -1;
    } while (-1 < (int)lVar3);
  }
  pwVar4 = wcsrchr(pwVar4,L'.');
  if (pwVar4 == (wchar_t *)0x0) {
    wcscat(param_1,L".");
    wcscat(param_1,L"sfx");
    return;
  }
  wcscpy(pwVar4 + 1,L"sfx");
  return;
}


