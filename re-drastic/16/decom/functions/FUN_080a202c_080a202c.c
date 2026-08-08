/*
 * Ghidra decompilation
 *
 * Function : FUN_080a202c
 * Address  : 080a202c
 * Program  : drastic16
 */


wchar_t * FUN_080a202c(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  size_t sVar1;
  wchar_t *local_c;
  
  local_c = param_1;
  if ((param_2 != (wchar_t *)0x0) && (param_2 != param_1)) {
    sVar1 = wcslen(param_1);
    if (param_3 <= sVar1) {
      *param_2 = L'\0';
      return param_2;
    }
    wcscpy(param_2,param_1);
  }
  for (; *local_c != L'\0'; local_c = local_c + 1) {
    if (*local_c == L'/') {
      if (param_2 == (wchar_t *)0x0) {
        *local_c = L'\\';
      }
      else {
        param_2[(int)local_c - (int)param_1 >> 2] = L'\\';
      }
    }
  }
  if (param_2 == (wchar_t *)0x0) {
    param_2 = param_1;
  }
  return param_2;
}


