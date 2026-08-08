/*
 * Ghidra decompilation
 *
 * Function : FUN_08059088
 * Address  : 08059088
 * Program  : drastic16
 */


void FUN_08059088(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined auStack_8030 [32780];
  
  iVar2 = param_1 + 0x155e000;
  uVar1 = *(uint *)(param_1 + 0x159ebe0);
  uVar4 = *(int *)(param_1 + 8) * 0x400 - uVar1;
  iVar5 = *(uint *)(param_1 + 0x159ebf4) * ((int)uVar4 >> 0x1f) +
          (int)((ulonglong)*(uint *)(param_1 + 0x159ebf4) * (ulonglong)uVar4 >> 0x20);
  iVar3 = *(int *)(param_1 + 0x159e004);
  if (-1 < iVar5) {
    uVar4 = *(int *)(param_1 + 0x159ebf0) * iVar5;
    *(uint *)(param_1 + 0x159ebe0) = uVar1 + uVar4;
    *(uint *)(param_1 + 0x159ebe4) = *(int *)(param_1 + 0x159ebe4) + (uint)CARRY4(uVar1,uVar4);
    FUN_08094208(auStack_8030,iVar5);
    if (*(byte *)(param_1 + 0x1da728d) < 2) {
      FUN_08094160(iVar2,auStack_8030,iVar5);
    }
    FUN_08058c70(iVar2,auStack_8030,iVar5,0);
    FUN_08058c70(iVar2,auStack_8030,iVar5,1);
    if (*(int *)(param_1 + 0x81780) == 0) {
      memset((void *)(iVar2 + iVar3 * 2),0,iVar5 * 4);
    }
    else {
      FUN_08094220(iVar2 + iVar3 * 2,auStack_8030,iVar5 * 2);
    }
    *(int *)(param_1 + 0x159e004) = iVar5 * 2 + iVar3;
  }
  return;
}


