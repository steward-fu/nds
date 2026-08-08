/*
 * Ghidra decompilation
 *
 * Function : FUN_0801da84
 * Address  : 0801da84
 * Program  : drastic16
 */


void FUN_0801da84(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  puVar1 = (undefined4 *)(param_1 + 0xc);
  puVar3 = puVar2;
  do {
    puVar4 = puVar3 + 4;
    uVar8 = puVar3[1];
    uVar7 = puVar3[2];
    uVar6 = puVar3[3];
    *puVar1 = *puVar3;
    puVar1[1] = uVar8;
    puVar1[2] = uVar7;
    puVar1[3] = uVar6;
    puVar1 = puVar1 + 4;
    puVar3 = puVar4;
  } while (puVar4 != puVar2 + 0x10);
  iVar5 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar5 + 0x40;
  *(undefined *)(param_1 + 0x4c) = *(undefined *)(iVar5 + 0x40);
  iVar5 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar5 + 1;
  *(undefined *)(param_1 + 0x4d) = *(undefined *)(iVar5 + 1);
  iVar5 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar5 + 1;
  *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar5 + 1);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}


