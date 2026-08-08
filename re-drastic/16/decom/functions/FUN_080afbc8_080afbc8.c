/*
 * Ghidra decompilation
 *
 * Function : FUN_080afbc8
 * Address  : 080afbc8
 * Program  : drastic16
 */


undefined FUN_080afbc8(wchar_t *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  size_t sVar2;
  undefined local_d [5];
  
  local_d[0] = 1;
  *param_2 = '\0';
  cVar1 = FUN_080afd80(param_1,param_2,param_3,local_d);
  if (cVar1 != '\x01') {
    sVar2 = wcstombs(param_2,param_1,param_3);
    if (sVar2 == 0xffffffff) {
      local_d[0] = 0;
    }
    if ((sVar2 == 0) && (*param_1 != L'\0')) {
      local_d[0] = 0;
    }
  }
  if (param_3 != 0) {
    param_2[param_3 - 1] = '\0';
  }
  return local_d[0];
}


