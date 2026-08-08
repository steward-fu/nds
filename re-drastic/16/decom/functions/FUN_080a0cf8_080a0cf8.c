/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0cf8
 * Address  : 080a0cf8
 * Program  : drastic16
 */


wchar_t * FUN_080a0cf8(wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  if (sVar1 != 0) {
    param_1 = param_1 + sVar1 + 0x3fffffff;
  }
  return param_1;
}


