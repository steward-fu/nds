/*
 * Ghidra decompilation
 *
 * Function : FUN_0801af90
 * Address  : 0801af90
 * Program  : drastic16
 */


void FUN_0801af90(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(param_1 + 0x18);
  iVar2 = 4;
  if (param_3 < 4) {
    do {
      iVar2 = iVar2 + -1;
      **(undefined4 **)(param_2 + 0x10) = *puVar1;
      iVar4 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar4 + 4;
      *(undefined4 *)(iVar4 + 4) = puVar1[1];
      iVar4 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar4 + 4;
      *(undefined4 *)(iVar4 + 4) = puVar1[2];
      iVar4 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar4 + 4;
      *(undefined *)(iVar4 + 4) = *(undefined *)(puVar1 + 3);
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined *)((int)puVar1 + 0xe) = 0;
      puVar1 = puVar1 + 8;
    } while (iVar2 != 0);
  }
  else {
    if (param_3 != 4) {
      do {
        iVar2 = iVar2 + -1;
        **(undefined4 **)(param_2 + 0x10) = *puVar1;
        iVar4 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar4 + 4;
        *(undefined4 *)(iVar4 + 4) = puVar1[1];
        iVar4 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar4 + 4;
        *(undefined4 *)(iVar4 + 4) = puVar1[2];
        iVar4 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar4 + 4;
        *(undefined *)(iVar4 + 4) = *(undefined *)(puVar1 + 3);
        iVar4 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar4 + 1;
        uVar3 = puVar1[-3];
        *(undefined4 *)(iVar4 + 1) = puVar1[-4];
        *(undefined4 *)(iVar4 + 5) = uVar3;
        iVar4 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar4 + 8;
        *(undefined *)(iVar4 + 8) = *(undefined *)((int)puVar1 + 0xe);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        puVar1 = puVar1 + 8;
      } while (iVar2 != 0);
      return;
    }
    do {
      iVar2 = iVar2 + -1;
      **(undefined4 **)(param_2 + 0x10) = *puVar1;
      iVar4 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar4 + 4;
      *(undefined4 *)(iVar4 + 4) = puVar1[1];
      iVar4 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar4 + 4;
      *(undefined4 *)(iVar4 + 4) = puVar1[2];
      iVar4 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar4 + 4;
      *(undefined *)(iVar4 + 4) = *(undefined *)(puVar1 + 3);
      iVar4 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar4 + 1;
      uVar3 = puVar1[-3];
      *(undefined4 *)(iVar4 + 1) = puVar1[-4];
      *(undefined4 *)(iVar4 + 5) = uVar3;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 8;
      *(undefined *)((int)puVar1 + 0xe) = 0;
      puVar1 = puVar1 + 8;
    } while (iVar2 != 0);
  }
  return;
}


