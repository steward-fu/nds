/*
 * Ghidra decompilation
 *
 * Function : FUN_080a6dfc
 * Address  : 080a6dfc
 * Program  : drastic16
 */


undefined4 FUN_080a6dfc(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  wchar_t *__s;
  size_t sVar5;
  undefined4 uVar6;
  undefined auStack_24 [16];
  uint local_14;
  
  FUN_080a8860(auStack_24);
  cVar1 = FUN_080af0fc(param_1,auStack_24,0);
  if (cVar1 == '\x01') {
    local_14 = FUN_080a8838(auStack_24);
    FUN_080a891c(auStack_24,0);
    FUN_080a8888(param_2,local_14 + 1);
    if (*(int *)(param_1 + 0x10e98) == 3) {
      uVar6 = FUN_080a609c(auStack_24,0);
      uVar2 = FUN_080a88e4(param_2,0);
      uVar3 = FUN_0809f0b8(param_2);
      FUN_080b07d4(uVar6,uVar2,uVar3);
    }
    else if ((*(uint *)(param_1 + 0xc78c) & 1) == 0) {
      uVar6 = FUN_080a609c(auStack_24,0);
      uVar2 = FUN_080a88e4(param_2,0);
      uVar3 = FUN_0809f0b8(param_2);
      FUN_080afc9c(uVar6,uVar2,uVar3);
    }
    else {
      uVar6 = FUN_080a609c(auStack_24,0);
      uVar2 = FUN_080a88e4(param_2,0);
      FUN_080b0284(uVar6,uVar2,local_14 >> 1);
      puVar4 = (undefined4 *)FUN_0809f21c(param_2,local_14 >> 1);
      *puVar4 = 0;
    }
    __s = (wchar_t *)FUN_080a88e4(param_2,0);
    sVar5 = wcslen(__s);
    FUN_080a8888(param_2,sVar5);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  FUN_080a60d0(auStack_24);
  return uVar6;
}


