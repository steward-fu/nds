/*
 * Ghidra decompilation
 *
 * Function : FUN_0801ade4
 * Address  : 0801ade4
 * Program  : drastic16
 */


void FUN_0801ade4(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)(param_1 + 0x18);
  iVar5 = 4;
  if (param_3 < 4) {
    do {
      iVar5 = iVar5 + -1;
      *puVar1 = **(undefined4 **)(param_2 + 0x10);
      puVar2 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
      *(undefined4 **)(param_2 + 0x10) = puVar2;
      puVar1[1] = *puVar2;
      puVar2 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
      *(undefined4 **)(param_2 + 0x10) = puVar2;
      puVar1[2] = *puVar2;
      iVar3 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar3 + 4;
      *(undefined *)(puVar1 + 3) = *(undefined *)(iVar3 + 4);
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined *)((int)puVar1 + 0xe) = 0;
      puVar1 = puVar1 + 8;
    } while (iVar5 != 0);
  }
  else {
    if (param_3 != 4) {
      do {
        iVar5 = iVar5 + -1;
        *puVar1 = **(undefined4 **)(param_2 + 0x10);
        puVar2 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
        *(undefined4 **)(param_2 + 0x10) = puVar2;
        puVar1[1] = *puVar2;
        puVar2 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
        *(undefined4 **)(param_2 + 0x10) = puVar2;
        puVar1[2] = *puVar2;
        iVar3 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar3 + 4;
        *(undefined *)(puVar1 + 3) = *(undefined *)(iVar3 + 4);
        iVar3 = *(int *)(param_2 + 0x10);
        puVar2 = (undefined4 *)(iVar3 + 1);
        *(undefined4 **)(param_2 + 0x10) = puVar2;
        uVar4 = *(undefined4 *)(iVar3 + 5);
        puVar1[-4] = *puVar2;
        puVar1[-3] = uVar4;
        iVar3 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar3 + 8;
        *(undefined *)((int)puVar1 + 0xe) = *(undefined *)(iVar3 + 8);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        puVar1 = puVar1 + 8;
      } while (iVar5 != 0);
      return;
    }
    do {
      iVar5 = iVar5 + -1;
      *puVar1 = **(undefined4 **)(param_2 + 0x10);
      puVar2 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
      *(undefined4 **)(param_2 + 0x10) = puVar2;
      puVar1[1] = *puVar2;
      puVar2 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
      *(undefined4 **)(param_2 + 0x10) = puVar2;
      puVar1[2] = *puVar2;
      iVar3 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar3 + 4;
      *(undefined *)(puVar1 + 3) = *(undefined *)(iVar3 + 4);
      iVar3 = *(int *)(param_2 + 0x10);
      puVar2 = (undefined4 *)(iVar3 + 1);
      *(undefined4 **)(param_2 + 0x10) = puVar2;
      uVar4 = *(undefined4 *)(iVar3 + 5);
      puVar1[-4] = *puVar2;
      puVar1[-3] = uVar4;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 8;
      *(undefined *)((int)puVar1 + 0xe) = 0;
      puVar1 = puVar1 + 8;
    } while (iVar5 != 0);
  }
  return;
}


