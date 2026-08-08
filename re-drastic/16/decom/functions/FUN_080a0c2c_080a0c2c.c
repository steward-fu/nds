/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0c2c
 * Address  : 080a0c2c
 * Program  : drastic16
 */


wchar_t * FUN_080a0c2c(wchar_t *param_1)

{
  size_t sVar1;
  int iVar2;
  size_t local_c;
  
  local_c = wcslen(param_1);
  while (sVar1 = local_c, local_c = sVar1 - 1, -1 < (int)local_c) {
    iVar2 = FUN_080a12c0(param_1[local_c]);
    if (iVar2 != 0) {
      return param_1 + sVar1;
    }
  }
  if (*param_1 == L'\0') {
    return param_1;
  }
  iVar2 = FUN_080a12f4(param_1[1]);
  if (iVar2 == 0) {
    return param_1;
  }
  return param_1 + 2;
}


