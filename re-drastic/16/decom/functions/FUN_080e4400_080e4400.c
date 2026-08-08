/*
 * Ghidra decompilation
 *
 * Function : FUN_080e4400
 * Address  : 080e4400
 * Program  : drastic16
 */


char FUN_080e4400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char acStack_100c [2048];
  char acStack_80c [2051];
  char local_9;
  
  cVar1 = FUN_080a5704(param_2);
  if (cVar1 == '\x01') {
    FUN_080a52ac(param_1,1);
    FUN_080a2134(param_2,param_2,param_3);
    FUN_080afbc8(param_2,acStack_100c,0x800);
    FUN_080afbc8(param_1,acStack_80c,0x800);
    iVar2 = link(acStack_100c,acStack_80c);
    bVar3 = iVar2 != 0;
    if (bVar3) {
      iVar2 = 0;
    }
    local_9 = (char)iVar2;
    if (!bVar3) {
      local_9 = '\x01';
    }
    if (local_9 != '\x01') {
      FUN_080a85d8(0,&DAT_080ef218,param_1);
      FUN_080b7478(&DAT_081cd0a0);
      FUN_080b7220(&DAT_081cd0a0,9);
    }
  }
  else {
    local_9 = '\0';
  }
  return local_9;
}


