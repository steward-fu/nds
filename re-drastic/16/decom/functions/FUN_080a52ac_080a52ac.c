/*
 * Ghidra decompilation
 *
 * Function : FUN_080a52ac
 * Address  : 080a52ac
 * Program  : drastic16
 */


char FUN_080a52ac(wchar_t *param_1,char param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  wchar_t local_2014 [2048];
  undefined4 local_14;
  wchar_t *local_10;
  char local_9;
  
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    return '\0';
  }
  local_14 = 0x1ff;
  local_9 = '\x01';
  for (local_10 = param_1;
      (*local_10 != L'\0' && ((uint)((int)local_10 - (int)param_1 >> 2) < 0x800));
      local_10 = local_10 + 1) {
    iVar3 = FUN_080a12c0(*local_10);
    if (iVar3 != 0) {
      wcsncpy(local_2014,param_1,(int)local_10 - (int)param_1 >> 2);
      local_2014[(int)local_10 - (int)param_1 >> 2] = L'\0';
      iVar3 = FUN_080a51f0(local_2014,1,local_14);
      bVar4 = iVar3 != 0;
      if (bVar4) {
        iVar3 = 0;
      }
      local_9 = (char)iVar3;
      if (!bVar4) {
        local_9 = '\x01';
      }
      if (local_9 != '\0') {
        FUN_080a6080(&DAT_080ed6a8,local_2014);
        FUN_080a6080(&DAT_080ed6ac,&DAT_080ed6a8);
      }
    }
  }
  if (param_2 != '\x01') {
    puVar2 = (undefined4 *)FUN_080a0cf8(param_1);
    cVar1 = FUN_080a12c0(*puVar2);
    if (cVar1 != '\x01') {
      bVar4 = true;
      goto LAB_080a5500;
    }
  }
  bVar4 = false;
LAB_080a5500:
  if (bVar4) {
    iVar3 = FUN_080a51f0(param_1,1,local_14);
    bVar4 = iVar3 != 0;
    if (bVar4) {
      iVar3 = 0;
    }
    local_9 = (char)iVar3;
    if (!bVar4) {
      local_9 = '\x01';
    }
  }
  return local_9;
}


