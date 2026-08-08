/*
 * Ghidra decompilation
 *
 * Function : GetFilePath
 * Address  : 001b62f0
 * Program  : drastic64
 */


/* GetFilePath(wchar_t const*, wchar_t*, unsigned long) */

void GetFilePath(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return;
  }
  sVar2 = wcslen(param_1);
  iVar1 = (int)sVar2 + -1;
  if (-1 < iVar1) {
    lVar3 = (long)iVar1;
    do {
      if (param_1[lVar3] == L'/') {
        sVar2 = (lVar3 + 1) * 4 >> 2;
        if (param_3 - 1 < sVar2) {
          sVar2 = param_3 - 1;
        }
        wcsncpy(param_2,param_1,sVar2);
        param_2[sVar2] = L'\0';
        return;
      }
      lVar3 = lVar3 + -1;
    } while (-1 < (int)lVar3);
  }
  wcsncpy(param_2,param_1,0);
  *param_2 = L'\0';
  return;
}


