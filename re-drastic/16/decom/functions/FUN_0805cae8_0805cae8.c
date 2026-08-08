/*
 * Ghidra decompilation
 *
 * Function : FUN_0805cae8
 * Address  : 0805cae8
 * Program  : drastic16
 */


void FUN_0805cae8(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined2 *)(param_1 + 0x440) = **(undefined2 **)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 2;
  FUN_0805ddd8();
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  uVar5 = *puVar2;
  uVar1 = puVar2[1];
  uVar3 = puVar2[3];
  *(undefined4 *)(param_1 + 0x428) = puVar2[2];
  *(undefined4 *)(param_1 + 0x420) = uVar5;
  *(undefined4 *)(param_1 + 0x424) = uVar1;
  *(undefined4 *)(param_1 + 0x42c) = uVar3;
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 0x10;
  *(undefined *)(param_1 + 0x430) = *(undefined *)(iVar4 + 0x10);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(param_1 + 0x431) = *(undefined *)(iVar4 + 1);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  if (param_3 < 6) {
    return;
  }
  *(undefined *)(param_1 + 0x432) = *(undefined *)(iVar4 + 1);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(param_1 + 0x433) = *(undefined *)(iVar4 + 1);
  iVar4 = *(int *)(param_2 + 0x10);
  puVar2 = (undefined4 *)(iVar4 + 1);
  *(undefined4 **)(param_2 + 0x10) = puVar2;
  uVar1 = *(undefined4 *)(iVar4 + 5);
  *(undefined4 *)(param_1 + 0x434) = *puVar2;
  *(undefined4 *)(param_1 + 0x438) = uVar1;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 8;
  return;
}


