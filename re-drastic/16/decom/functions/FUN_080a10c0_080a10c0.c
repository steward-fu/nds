/*
 * Ghidra decompilation
 *
 * Function : FUN_080a10c0
 * Address  : 080a10c0
 * Program  : drastic16
 */


void FUN_080a10c0(wchar_t *param_1,wchar_t *param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    puVar1 = (undefined4 *)FUN_080a11bc(param_1);
    if (param_2 == (wchar_t *)0x0) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
    }
    else if (puVar1 == (undefined4 *)0x0) {
      wcscat(param_1,L".");
      wcscat(param_1,param_2);
    }
    else {
      wcscpy(puVar1 + 1,param_2);
    }
  }
  return;
}


