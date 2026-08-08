/*
 * Ghidra decompilation
 *
 * Function : FUN_080a3a8c
 * Address  : 080a3a8c
 * Program  : drastic16
 */


wchar_t * FUN_080a3a8c(int param_1,wchar_t *param_2,wchar_t *param_3,size_t param_4)

{
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
    if (param_1 == 0) {
      *param_3 = L'\0';
    }
    else {
      FUN_080afc9c(param_1,param_3,param_4);
    }
  }
  else if (param_3 != param_2) {
    wcsncpy(param_3,param_2,param_4);
  }
  if (param_4 != 0) {
    param_3[param_4 + 0x3fffffff] = L'\0';
  }
  return param_3;
}


