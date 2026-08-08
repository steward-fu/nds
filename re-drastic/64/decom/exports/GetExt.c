/*
 * Ghidra decompilation
 *
 * Function : GetExt
 * Address  : 001b6040
 * Program  : drastic64
 */


/* GetExt(wchar_t const*) */

void GetExt(wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  
  if (param_1 == (wchar_t *)0x0) {
    return;
  }
  sVar2 = wcslen(param_1);
  iVar1 = (int)sVar2 + -1;
  if (-1 < iVar1) {
    lVar3 = (long)iVar1;
    do {
      if (param_1[lVar3] == L'/') {
        param_1 = param_1 + lVar3 + 1;
        break;
      }
      lVar3 = lVar3 + -1;
    } while (-1 < (int)lVar3);
  }
  wcsrchr(param_1,L'.');
  return;
}


