/*
 * Ghidra decompilation
 *
 * Function : FUN_080a14cc
 * Address  : 080a14cc
 * Program  : drastic16
 */


void FUN_080a14cc(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  size_t __n;
  
  if (param_3 != 0) {
    iVar1 = FUN_080a0c2c(param_1);
    if (param_3 - 1U < (uint)(iVar1 - (int)param_1 >> 2)) {
      __n = param_3 - 1;
    }
    else {
      iVar1 = FUN_080a0c2c(param_1);
      __n = iVar1 - (int)param_1 >> 2;
    }
    wcsncpy(param_2,param_1,__n);
    param_2[__n] = L'\0';
  }
  return;
}


