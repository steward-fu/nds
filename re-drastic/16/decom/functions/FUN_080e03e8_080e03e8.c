/*
 * Ghidra decompilation
 *
 * Function : FUN_080e03e8
 * Address  : 080e03e8
 * Program  : drastic16
 */


undefined4 FUN_080e03e8(wchar_t *param_1,undefined4 param_2)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  wchar_t awStack_2010 [2048];
  uint local_10;
  wchar_t *local_c;
  
  sVar2 = wcslen(param_1);
  if (sVar2 < 0x7f7) {
    local_c = (wchar_t *)FUN_080a11bc(param_1);
    if (local_c == (wchar_t *)0x0) {
      sVar2 = wcslen(param_1);
      local_c = param_1 + sVar2;
    }
    awStack_2010[0] = L'\0';
    local_10 = 1;
    while( true ) {
      swprintf(awStack_2010,0x800,L"%.*ls(%u)%ls",(int)local_c - (int)param_1 >> 2,param_1,local_10,
               local_c);
      cVar1 = FUN_080a5704(awStack_2010);
      if (cVar1 != '\x01') break;
      if (999999 < local_10) {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    FUN_080a0620(param_1,awStack_2010,param_2);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


