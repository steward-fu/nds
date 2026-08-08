/*
 * Ghidra decompilation
 *
 * Function : FUN_080a06f0
 * Address  : 080a06f0
 * Program  : drastic16
 */


wchar_t * FUN_080a06f0(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  if (sVar1 + 1 < param_3) {
    wcsncat(param_1,param_2,(param_3 - sVar1) - 1);
  }
  return param_1;
}


