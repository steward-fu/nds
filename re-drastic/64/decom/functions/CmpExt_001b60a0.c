/*
 * Ghidra decompilation
 *
 * Function : CmpExt
 * Address  : 001b60a0
 * Program  : drastic64
 */


/* CmpExt(wchar_t const*, wchar_t const*) */

bool CmpExt(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  long lVar5;
  
  if (param_1 == (wchar_t *)0x0) {
    return false;
  }
  sVar3 = wcslen(param_1);
  iVar2 = (int)sVar3 + -1;
  if (-1 < iVar2) {
    lVar5 = (long)iVar2;
    do {
      if (param_1[lVar5] == L'/') {
        param_1 = param_1 + lVar5 + 1;
        break;
      }
      lVar5 = lVar5 + -1;
    } while (-1 < (int)lVar5);
  }
  pwVar4 = wcsrchr(param_1,L'.');
  bVar1 = false;
  if (pwVar4 != (wchar_t *)0x0) {
    iVar2 = wcsicomp(pwVar4 + 1,param_2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


