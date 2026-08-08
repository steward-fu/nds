/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0620
 * Address  : 080a0620
 * Program  : drastic16
 */


wchar_t * FUN_080a0620(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  if (param_3 != 0) {
    wcsncpy(param_1,param_2,param_3 - 1);
    param_1[param_3 + 0x3fffffff] = L'\0';
  }
  return param_1;
}


