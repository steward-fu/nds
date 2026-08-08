/*
 * Ghidra decompilation
 *
 * Function : FUN_080e0dcc
 * Address  : 080e0dcc
 * Program  : drastic16
 */


int FUN_080e0dcc(wchar_t *param_1,wchar_t *param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '\0') {
    iVar1 = FUN_080a058c(param_1,param_2);
  }
  else {
    iVar1 = wcscmp(param_1,param_2);
  }
  return iVar1;
}


