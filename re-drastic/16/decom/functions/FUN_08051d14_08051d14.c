/*
 * Ghidra decompilation
 *
 * Function : FUN_08051d14
 * Address  : 08051d14
 * Program  : drastic16
 */


void FUN_08051d14(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  uVar1 = puVar2[2];
  uVar6 = puVar2[1];
  uVar3 = puVar2[3];
  *param_2 = *puVar2;
  param_2[2] = uVar1;
  param_2[1] = uVar6;
  param_2[3] = uVar3;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  *(undefined4 **)(param_1 + 0x10) = puVar2;
  param_2[4] = *puVar2;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + 4);
  *(undefined4 **)(param_1 + 0x10) = puVar2;
  param_2[5] = *puVar2;
  puVar4 = (undefined2 *)(*(int *)(param_1 + 0x10) + 4);
  *(undefined2 **)(param_1 + 0x10) = puVar4;
  *(undefined2 *)(param_2 + 6) = *puVar4;
  puVar4 = (undefined2 *)(*(int *)(param_1 + 0x10) + 2);
  *(undefined2 **)(param_1 + 0x10) = puVar4;
  *(undefined2 *)((int)param_2 + 0x1a) = *puVar4;
  puVar4 = (undefined2 *)(*(int *)(param_1 + 0x10) + 2);
  *(undefined2 **)(param_1 + 0x10) = puVar4;
  *(undefined2 *)(param_2 + 7) = *puVar4;
  iVar5 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar5 + 2;
  *(undefined *)((int)param_2 + 0x1e) = *(undefined *)(iVar5 + 2);
  iVar5 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar5 + 1;
  *(undefined *)((int)param_2 + 0x1f) = *(undefined *)(iVar5 + 1);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}


