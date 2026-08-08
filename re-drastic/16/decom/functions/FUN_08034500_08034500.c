/*
 * Ghidra decompilation
 *
 * Function : FUN_08034500
 * Address  : 08034500
 * Program  : drastic16
 */


void FUN_08034500(int param_1,int param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  iVar5 = 4;
  **(undefined4 **)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x70);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 4;
  *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(param_1 + 0x80);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 2;
  *(undefined2 *)(iVar3 + 2) = *(undefined2 *)(param_1 + 0x84);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 2;
  *(undefined2 *)(iVar3 + 2) = *(undefined2 *)(param_1 + 0x82);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 2;
  *(undefined2 *)(iVar3 + 2) = *(undefined2 *)(param_1 + 0x86);
  iVar3 = *(int *)(param_2 + 0x10);
  puVar2 = (undefined4 *)(iVar3 + 2);
  *(undefined4 **)(param_2 + 0x10) = puVar2;
  if (9 < param_3) {
    puVar2 = (undefined4 *)(uint)*(ushort *)(param_1 + 0x88);
    *(ushort *)(iVar3 + 2) = *(ushort *)(param_1 + 0x88);
  }
  if (9 < param_3) {
    puVar2 = (undefined4 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined4 **)(param_2 + 0x10) = puVar2;
  }
  *puVar2 = *(undefined4 *)(param_1 + 0x8a);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x8e);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 4;
  *(undefined *)(iVar3 + 4) = *(undefined *)(param_1 + 0x94);
  puVar1 = (undefined2 *)(*(int *)(param_2 + 0x10) + 1);
  *(undefined2 **)(param_2 + 0x10) = puVar1;
  puVar4 = (undefined2 *)(param_1 + 0x108);
  do {
    iVar5 = iVar5 + -1;
    *puVar1 = *puVar4;
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined4 *)(iVar3 + 2) = *(undefined4 *)(puVar4 + -0x2a);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(puVar4 + -0x28);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(puVar4 + -0x26);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(puVar4 + -8);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(puVar4 + -6);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(puVar4 + -4);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(puVar4 + -2);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 4;
    *(undefined2 *)(iVar3 + 4) = puVar4[1];
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined2 *)(iVar3 + 2) = puVar4[2];
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined2 *)(iVar3 + 2) = puVar4[3];
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined2 *)(iVar3 + 2) = puVar4[4];
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined2 *)(iVar3 + 2) = puVar4[5];
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined2 *)(iVar3 + 2) = puVar4[6];
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined2 *)(iVar3 + 2) = puVar4[7];
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined2 *)(iVar3 + 2) = puVar4[8];
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined *)(iVar3 + 2) = *(undefined *)(puVar4 + 9);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)(iVar3 + 1) = *(undefined *)((int)puVar4 + 0x13);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)(iVar3 + 1) = *(undefined *)(puVar4 + 10);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)(iVar3 + 1) = *(undefined *)((int)puVar4 + 0x15);
    puVar1 = (undefined2 *)(*(int *)(param_2 + 0x10) + 1);
    *(undefined2 **)(param_2 + 0x10) = puVar1;
    puVar4 = puVar4 + 0x44;
  } while (iVar5 != 0);
  return;
}


