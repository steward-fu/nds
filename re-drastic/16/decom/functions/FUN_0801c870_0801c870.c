/*
 * Ghidra decompilation
 *
 * Function : FUN_0801c870
 * Address  : 0801c870
 * Program  : drastic16
 */


void FUN_0801c870(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  
  puVar1 = *(undefined4 **)(param_2 + 0x10);
  iVar9 = 4;
  puVar5 = (undefined4 *)(param_1 + 8);
  do {
    iVar9 = iVar9 + -1;
    uVar2 = puVar1[1];
    *puVar5 = *puVar1;
    puVar5[1] = uVar2;
    puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 8);
    *(undefined4 **)(param_2 + 0x10) = puVar1;
    puVar5[3] = *puVar1;
    puVar3 = (undefined2 *)(*(int *)(param_2 + 0x10) + 4);
    *(undefined2 **)(param_2 + 0x10) = puVar3;
    *(undefined2 *)(puVar5 + 4) = *puVar3;
    puVar3 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined2 **)(param_2 + 0x10) = puVar3;
    *(undefined2 *)((int)puVar5 + 0x12) = *puVar3;
    iVar4 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar4 + 2;
    *(undefined *)(puVar5 + 5) = *(undefined *)(iVar4 + 2);
    iVar4 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar4 + 1;
    *(undefined *)((int)puVar5 + 0x16) = *(undefined *)(iVar4 + 1);
    iVar4 = *(int *)(param_2 + 0x10);
    puVar1 = (undefined4 *)(iVar4 + 1);
    *(undefined4 **)(param_2 + 0x10) = puVar1;
    puVar5 = puVar5 + 8;
  } while (iVar9 != 0);
  puVar5 = (undefined4 *)(param_1 + 0x2088);
  do {
    puVar6 = puVar5;
    puVar7 = puVar1;
    puVar1 = puVar7 + 4;
    uVar8 = puVar7[1];
    uVar2 = puVar7[2];
    uVar10 = puVar7[3];
    *puVar6 = *puVar7;
    puVar6[1] = uVar8;
    puVar6[2] = uVar2;
    puVar6[3] = uVar10;
    puVar5 = puVar6 + 4;
  } while (puVar1 != (undefined4 *)(iVar4 + 0x31));
  uVar2 = puVar7[5];
  puVar6[4] = *puVar1;
  puVar6[5] = uVar2;
  iVar9 = *(int *)(param_2 + 0x10);
  *(undefined4 **)(param_2 + 0x10) = (undefined4 *)(iVar9 + 0x38);
  uVar10 = *(undefined4 *)(iVar9 + 0x3c);
  uVar8 = *(undefined4 *)(iVar9 + 0x40);
  uVar2 = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(param_1 + 0x20c0) = *(undefined4 *)(iVar9 + 0x38);
  *(undefined4 *)(param_1 + 0x20c4) = uVar10;
  *(undefined4 *)(param_1 + 0x20c8) = uVar8;
  *(undefined4 *)(param_1 + 0x20cc) = uVar2;
  uVar10 = *(undefined4 *)(iVar9 + 0x4c);
  uVar8 = *(undefined4 *)(iVar9 + 0x50);
  uVar2 = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(param_1 + 0x20d0) = *(undefined4 *)(iVar9 + 0x48);
  *(undefined4 *)(param_1 + 0x20d4) = uVar10;
  *(undefined4 *)(param_1 + 0x20d8) = uVar8;
  *(undefined4 *)(param_1 + 0x20dc) = uVar2;
  iVar9 = *(int *)(param_2 + 0x10);
  *(undefined4 **)(param_2 + 0x10) = (undefined4 *)(iVar9 + 0x20);
  uVar8 = *(undefined4 *)(iVar9 + 0x24);
  uVar2 = *(undefined4 *)(iVar9 + 0x28);
  uVar10 = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(param_1 + 0x20e0) = *(undefined4 *)(iVar9 + 0x20);
  *(undefined4 *)(param_1 + 0x20e4) = uVar8;
  *(undefined4 *)(param_1 + 0x20e8) = uVar2;
  *(undefined4 *)(param_1 + 0x20ec) = uVar10;
  uVar8 = *(undefined4 *)(iVar9 + 0x34);
  uVar2 = *(undefined4 *)(iVar9 + 0x38);
  *(undefined4 *)(param_1 + 0x20f0) = *(undefined4 *)(iVar9 + 0x30);
  *(undefined4 *)(param_1 + 0x20f4) = uVar8;
  *(undefined4 *)(param_1 + 0x20f8) = uVar2;
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 0x1c);
  *(undefined4 **)(param_2 + 0x10) = puVar1;
  *(undefined4 *)(param_1 + 0x20fc) = *puVar1;
  iVar9 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar9 + 4;
  *(undefined *)(param_1 + 0x2105) = *(undefined *)(iVar9 + 4);
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 1);
  *(undefined4 **)(param_2 + 0x10) = puVar1;
  *(undefined4 *)(param_1 + 0x2324) = *puVar1;
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar1;
  *(undefined4 *)(param_1 + 9000) = *puVar1;
  iVar9 = *(int *)(param_2 + 0x10);
  puVar1 = (undefined4 *)(iVar9 + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar1;
  puVar5 = (undefined4 *)(param_1 + 0x232c);
  do {
    puVar7 = puVar1 + 4;
    uVar8 = puVar1[1];
    uVar2 = puVar1[2];
    uVar10 = puVar1[3];
    *puVar5 = *puVar1;
    puVar5[1] = uVar8;
    puVar5[2] = uVar2;
    puVar5[3] = uVar10;
    puVar1 = puVar7;
    puVar5 = puVar5 + 4;
  } while (puVar7 != (undefined4 *)(iVar9 + 0x44));
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 0x40);
  *(undefined4 **)(param_2 + 0x10) = puVar1;
  *(undefined4 *)(param_1 + 0x236c) = *puVar1;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 4;
  return;
}


