/*
 * Ghidra decompilation
 *
 * Function : FUN_080e5014
 * Address  : 080e5014
 * Program  : drastic16
 */


undefined4 FUN_080e5014(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  bool bVar5;
  char acStack_814 [2048];
  int local_14;
  
  iVar2 = FUN_080a5924(*(undefined4 *)(param_2 + 0x844c));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    bVar5 = *(uint *)(param_2 + 0xa478) < 0x7ff;
    if ((int)(*(int *)(param_2 + 0xa47c) - (uint)bVar5) < 0 ==
        (SBORROW4(*(int *)(param_2 + 0xa47c),(uint)bVar5) != false)) {
      local_14 = 0x7ff;
    }
    else {
      local_14 = *(int *)(param_2 + 0xa478);
    }
    FUN_080b5f2c(param_1,acStack_814,local_14);
    acStack_814[local_14] = '\0';
    FUN_080bdba8(param_1 + 0x3760,*(undefined4 *)(param_2 + 0xa490),1);
    sVar3 = strlen(acStack_814);
    FUN_080bdc38(param_1 + 0x3760,acStack_814,sVar3);
    FUN_080bdd40(param_1 + 0x3760,param_2 + 0xa490);
    if (*(char *)(param_2 + 0xa4ea) == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2 + 0xa4eb;
    }
    cVar1 = FUN_080bde4c(param_1 + 0x3760,param_2 + 0xa490,iVar2);
    if (cVar1 == '\x01') {
      uVar4 = FUN_080e4f2c(acStack_814,param_3);
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}


