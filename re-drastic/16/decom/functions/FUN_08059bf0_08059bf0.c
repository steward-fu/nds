/*
 * Ghidra decompilation
 *
 * Function : FUN_08059bf0
 * Address  : 08059bf0
 * Program  : drastic16
 */


void FUN_08059bf0(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  iVar4 = 0;
  do {
    puVar5 = (undefined4 *)(param_1 + 0x40098 + iVar4);
    uVar6 = puVar5[1];
    *puVar2 = *puVar5;
    puVar2[1] = uVar6;
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 8;
    *(undefined4 *)(iVar3 + 8) = 0;
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x400b4 + iVar4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x400b8 + iVar4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x400bc + iVar4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(param_1 + 0x400c4 + iVar4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined2 *)(iVar3 + 2) = *(undefined2 *)(param_1 + 0x400c6 + iVar4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined *)(iVar3 + 2) = *(undefined *)(param_1 + 0x400cb + iVar4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)(iVar3 + 1) = *(undefined *)(param_1 + 0x400cc + iVar4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)(iVar3 + 1) = *(undefined *)(param_1 + 0x400cd + iVar4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)(iVar3 + 1) = *(undefined *)(param_1 + 0x400c8 + iVar4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    puVar1 = (undefined *)(param_1 + 0x400ca + iVar4);
    iVar4 = iVar4 + 0xb8;
    *(undefined *)(iVar3 + 1) = *puVar1;
    iVar3 = *(int *)(param_2 + 0x10);
    puVar2 = (undefined4 *)(iVar3 + 1);
    *(undefined4 **)(param_2 + 0x10) = puVar2;
  } while (iVar4 != 0xb80);
  uVar6 = *(undefined4 *)(param_1 + 0x40be4);
  *puVar2 = *(undefined4 *)(param_1 + 0x40be0);
  *(undefined4 *)(iVar3 + 5) = uVar6;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 8;
  return;
}


