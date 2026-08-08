/*
 * Ghidra decompilation
 *
 * Function : SetName
 * Address  : 001b5e60
 * Program  : drastic64
 */


/* SetName(wchar_t*, wchar_t const*, unsigned long) */

void SetName(wchar_t *param_1,wchar_t *param_2,ulong param_3)

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
        param_1 = param_1 + lVar3 + 1;
        param_3 = param_3 - ((lVar3 + 1) * 4 >> 2);
        break;
      }
      lVar3 = lVar3 + -1;
    } while (-1 < (int)lVar3);
  }
  wcsncpyz(param_1,param_2,param_3);
  return;
}


