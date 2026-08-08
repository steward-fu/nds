/*
 * Ghidra decompilation
 *
 * Function : RemoveLF
 * Address  : 001b4970
 * Program  : drastic64
 */


/* RemoveLF(wchar_t*) */

wchar_t * RemoveLF(wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  
  sVar2 = wcslen(param_1);
  iVar1 = (int)sVar2 + -1;
  if (-1 < iVar1) {
    lVar3 = (long)iVar1;
    do {
      if (param_1[lVar3] != L'\r' && param_1[lVar3] != L'\n') {
        return param_1;
      }
      param_1[lVar3] = L'\0';
      lVar3 = lVar3 + -1;
    } while (-1 < (int)lVar3);
  }
  return param_1;
}


