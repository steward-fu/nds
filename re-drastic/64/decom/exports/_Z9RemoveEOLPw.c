/*
 * Ghidra decompilation
 *
 * Function : _Z9RemoveEOLPw
 * Address  : 001b4900
 * Program  : drastic64
 */


/* RemoveEOL(wchar_t*) */

wchar_t * RemoveEOL(wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  
  sVar2 = wcslen(param_1);
  iVar1 = (int)sVar2 + -1;
  if (-1 < iVar1) {
    lVar3 = (long)iVar1;
    while (((uint)param_1[lVar3] < 0x21 &&
           ((0x100002600U >> ((ulong)(uint)param_1[lVar3] & 0x3f) & 1) != 0))) {
      param_1[lVar3] = L'\0';
      lVar3 = lVar3 + -1;
      if ((int)lVar3 < 0) {
        return param_1;
      }
    }
  }
  return param_1;
}


