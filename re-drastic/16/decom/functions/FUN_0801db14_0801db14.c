/*
 * Ghidra decompilation
 *
 * Function : FUN_0801db14
 * Address  : 0801db14
 * Program  : drastic16
 */


void FUN_0801db14(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = *(undefined4 **)(param_2 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0xc);
  do {
    puVar3 = puVar2 + 4;
    uVar7 = puVar2[1];
    uVar6 = puVar2[2];
    uVar5 = puVar2[3];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    puVar1[2] = uVar6;
    puVar1[3] = uVar5;
    puVar1 = puVar1 + 4;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)(param_1 + 0x4c));
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 0x40;
  *(undefined *)(iVar4 + 0x40) = *(undefined *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)(param_1 + 0x4d);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)(param_1 + 0x4e);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}


