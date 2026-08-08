/*
 * Ghidra decompilation
 *
 * Function : _Z18RemoveNameFromPathPw
 * Address  : 001b63a0
 * Program  : drastic64
 */


/* RemoveNameFromPath(wchar_t*) */

void RemoveNameFromPath(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  
  sVar4 = wcslen(param_1);
  iVar3 = (int)sVar4 + -1;
  if (-1 < iVar3) {
    lVar5 = (long)iVar3;
    do {
      if (param_1[lVar5] == L'/') {
        pwVar2 = param_1 + lVar5 + 1;
        pwVar1 = pwVar2 + -1;
        if (pwVar2 < param_1 + 2) {
          pwVar1 = pwVar2;
        }
        *pwVar1 = L'\0';
        return;
      }
      lVar5 = lVar5 + -1;
    } while (-1 < (int)lVar5);
  }
  pwVar2 = param_1 + -1;
  if (param_1 < param_1 + 2) {
    pwVar2 = param_1;
  }
  *pwVar2 = L'\0';
  return;
}


