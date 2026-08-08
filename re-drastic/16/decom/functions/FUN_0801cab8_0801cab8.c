/*
 * Ghidra decompilation
 *
 * Function : FUN_0801cab8
 * Address  : 0801cab8
 * Program  : drastic16
 */


void FUN_0801cab8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  iVar3 = 4;
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    iVar3 = iVar3 + -1;
    uVar8 = *puVar1;
    puVar4[1] = puVar1[1];
    *puVar4 = uVar8;
    iVar5 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar5 + 8;
    *(undefined4 *)(iVar5 + 8) = puVar1[3];
    iVar5 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar5 + 4;
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(puVar1 + 4);
    iVar5 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar5 + 2;
    *(undefined2 *)(iVar5 + 2) = *(undefined2 *)((int)puVar1 + 0x12);
    iVar5 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar5 + 2;
    *(undefined *)(iVar5 + 2) = *(undefined *)(puVar1 + 5);
    iVar5 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar5 + 1;
    *(undefined *)(iVar5 + 1) = *(undefined *)((int)puVar1 + 0x16);
    puVar4 = (undefined4 *)(*(int *)(param_2 + 0x10) + 1);
    *(undefined4 **)(param_2 + 0x10) = puVar4;
    puVar1 = puVar1 + 8;
  } while (iVar3 != 0);
  if (*(char *)(*(int *)(param_1 + 0x2308) + 0x291646e) != '\0') {
    FUN_0806f3f0(param_1);
    puVar4 = *(undefined4 **)(param_2 + 0x10);
  }
  puVar1 = (undefined4 *)(param_1 + 0x2088);
  do {
    puVar7 = puVar4;
    puVar2 = puVar1;
    puVar1 = puVar2 + 4;
    uVar9 = puVar2[1];
    uVar8 = puVar2[2];
    uVar6 = puVar2[3];
    *puVar7 = *puVar2;
    puVar7[1] = uVar9;
    puVar7[2] = uVar8;
    puVar7[3] = uVar6;
    puVar4 = puVar7 + 4;
  } while (puVar1 != (undefined4 *)(param_1 + 0x20b8));
  uVar8 = puVar2[5];
  puVar7[4] = *puVar1;
  puVar7[5] = uVar8;
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 0x38;
  uVar9 = *(undefined4 *)(param_1 + 0x20c4);
  uVar6 = *(undefined4 *)(param_1 + 0x20c8);
  uVar8 = *(undefined4 *)(param_1 + 0x20cc);
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(param_1 + 0x20c0);
  *(undefined4 *)(iVar3 + 0x3c) = uVar9;
  *(undefined4 *)(iVar3 + 0x40) = uVar6;
  *(undefined4 *)(iVar3 + 0x44) = uVar8;
  uVar9 = *(undefined4 *)(param_1 + 0x20d4);
  uVar6 = *(undefined4 *)(param_1 + 0x20d8);
  uVar8 = *(undefined4 *)(param_1 + 0x20dc);
  *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(param_1 + 0x20d0);
  *(undefined4 *)(iVar3 + 0x4c) = uVar9;
  *(undefined4 *)(iVar3 + 0x50) = uVar6;
  *(undefined4 *)(iVar3 + 0x54) = uVar8;
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 0x20;
  uVar6 = *(undefined4 *)(param_1 + 0x20e4);
  uVar8 = *(undefined4 *)(param_1 + 0x20e8);
  uVar9 = *(undefined4 *)(param_1 + 0x20ec);
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(param_1 + 0x20e0);
  *(undefined4 *)(iVar3 + 0x24) = uVar6;
  *(undefined4 *)(iVar3 + 0x28) = uVar8;
  *(undefined4 *)(iVar3 + 0x2c) = uVar9;
  uVar6 = *(undefined4 *)(param_1 + 0x20f4);
  uVar8 = *(undefined4 *)(param_1 + 0x20f8);
  *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(param_1 + 0x20f0);
  *(undefined4 *)(iVar3 + 0x34) = uVar6;
  *(undefined4 *)(iVar3 + 0x38) = uVar8;
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 0x1c;
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x20fc);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 4;
  *(undefined *)(iVar3 + 4) = *(undefined *)(param_1 + 0x2105);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 1;
  *(undefined4 *)(iVar3 + 1) = *(undefined4 *)(param_1 + 0x2324);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 9000);
  puVar4 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar4;
  puVar1 = (undefined4 *)(param_1 + 0x232c);
  do {
    puVar2 = puVar1 + 4;
    uVar9 = puVar1[1];
    uVar8 = puVar1[2];
    uVar6 = puVar1[3];
    *puVar4 = *puVar1;
    puVar4[1] = uVar9;
    puVar4[2] = uVar8;
    puVar4[3] = uVar6;
    puVar1 = puVar2;
    puVar4 = puVar4 + 4;
  } while (puVar2 != (undefined4 *)(param_1 + 0x236c));
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 0x40;
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(param_1 + 0x236c);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 4;
  return;
}


