/*
 * Ghidra decompilation
 *
 * Function : FUN_080a1368
 * Address  : 080a1368
 * Program  : drastic16
 */


void FUN_080a1368(wchar_t *param_1,uint param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  if (((sVar1 != 0) && (param_1[sVar1 + 0x3fffffff] != L'/')) && (sVar1 + 1 < param_2)) {
    wcscat(param_1,L"/");
  }
  return;
}


