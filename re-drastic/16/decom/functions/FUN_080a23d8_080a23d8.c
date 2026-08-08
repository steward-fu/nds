/*
 * Ghidra decompilation
 *
 * Function : FUN_080a23d8
 * Address  : 080a23d8
 * Program  : drastic16
 */


void FUN_080a23d8(wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  size_t local_c;
  
  *param_2 = L'\0';
  iVar1 = FUN_080a2360(param_1);
  if (iVar1 == 0) {
    if (((*param_1 == L'\\') && (param_1[1] == L'\\')) &&
       (pwVar2 = wcschr(param_1 + 2,L'\\'), pwVar2 != (wchar_t *)0x0)) {
      pwVar2 = wcschr(pwVar2 + 1,L'\\');
      if (pwVar2 == (wchar_t *)0x0) {
        local_c = wcslen(param_1);
      }
      else {
        local_c = ((int)pwVar2 - (int)param_1 >> 2) + 1;
      }
      if (param_3 <= local_c) {
        local_c = 0;
      }
      wcsncpy(param_2,param_1,local_c);
      param_2[local_c] = L'\0';
    }
  }
  else {
    swprintf(param_2,param_3,L"%c:\\",*param_1);
  }
  return;
}


