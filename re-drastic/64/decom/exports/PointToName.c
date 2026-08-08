/*
 * Ghidra decompilation
 *
 * Function : PointToName
 * Address  : 001b5c10
 * Program  : drastic64
 */


/* PointToName(wchar_t const*) */

wchar_t * PointToName(wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  
  sVar2 = wcslen(param_1);
  iVar1 = (int)sVar2 + -1;
  if (-1 < iVar1) {
    lVar3 = (long)iVar1;
    do {
      if (param_1[lVar3] == L'/') {
        return param_1 + lVar3 + 1;
      }
      lVar3 = lVar3 + -1;
    } while (-1 < (int)lVar3);
  }
  return param_1;
}


