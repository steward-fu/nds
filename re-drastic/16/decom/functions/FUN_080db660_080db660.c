/*
 * Ghidra decompilation
 *
 * Function : FUN_080db660
 * Address  : 080db660
 * Program  : drastic16
 */


uint FUN_080db660(undefined4 param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t *local_18;
  uint local_c;
  
  iVar1 = FUN_080a0128(*param_2);
  if (iVar1 == 0) {
    local_c = 0;
    for (local_18 = param_2; *local_18 != L'\0'; local_18 = local_18 + 1) {
      iVar1 = FUN_080b0d5c(*local_18);
      if (iVar1 == 0x44) {
        local_c = local_c | 0x4000;
      }
      else if (iVar1 == 0x56) {
        local_c = local_c | 0x2000;
      }
    }
  }
  else {
    local_c = wcstol(param_2,(wchar_t **)0x0,0);
  }
  return local_c;
}


