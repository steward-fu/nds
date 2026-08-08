/*
 * Ghidra decompilation
 *
 * Function : FUN_0805cbc0
 * Address  : 0805cbc0
 * Program  : drastic16
 */


void FUN_0805cbc0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  **(undefined2 **)(param_2 + 0x10) = *(undefined2 *)(param_1 + 0x440);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 2;
  FUN_0805de48();
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x424);
  uVar1 = *(undefined4 *)(param_1 + 0x428);
  uVar3 = *(undefined4 *)(param_1 + 0x42c);
  *puVar2 = *(undefined4 *)(param_1 + 0x420);
  puVar2[1] = uVar5;
  puVar2[2] = uVar1;
  puVar2[3] = uVar3;
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 0x10;
  *(undefined *)(iVar4 + 0x10) = *(undefined *)(param_1 + 0x430);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)(param_1 + 0x431);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  if (param_3 < 6) {
    return;
  }
  *(undefined *)(iVar4 + 1) = *(undefined *)(param_1 + 0x432);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)(param_1 + 0x433);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  uVar1 = *(undefined4 *)(param_1 + 0x438);
  *(undefined4 *)(iVar4 + 1) = *(undefined4 *)(param_1 + 0x434);
  *(undefined4 *)(iVar4 + 5) = uVar1;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 8;
  return;
}


