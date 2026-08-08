/*
 * Ghidra decompilation
 *
 * Function : FUN_08034174
 * Address  : 08034174
 * Program  : drastic16
 */


void FUN_08034174(int *param_1,int param_2,uint param_3)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  param_1[0x1c] = **(int **)(param_2 + 0x10);
  piVar6 = (int *)(*(int *)(param_2 + 0x10) + 4);
  *(int **)(param_2 + 0x10) = piVar6;
  param_1[0x1f] = *piVar6;
  puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined2 **)(param_2 + 0x10) = puVar7;
  *(undefined2 *)(param_1 + 0x20) = *puVar7;
  puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
  *(undefined2 **)(param_2 + 0x10) = puVar7;
  *(undefined2 *)(param_1 + 0x21) = *puVar7;
  puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
  *(undefined2 **)(param_2 + 0x10) = puVar7;
  *(undefined2 *)((int)param_1 + 0x82) = *puVar7;
  puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
  *(undefined2 **)(param_2 + 0x10) = puVar7;
  *(undefined2 *)((int)param_1 + 0x86) = *puVar7;
  puVar8 = (undefined4 *)(*(int *)(param_2 + 0x10) + 2);
  *(undefined4 **)(param_2 + 0x10) = puVar8;
  if (9 < param_3) {
    *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)puVar8;
    puVar8 = (undefined4 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined4 **)(param_2 + 0x10) = puVar8;
  }
  iVar3 = 4;
  *(undefined4 *)((int)param_1 + 0x8a) = *puVar8;
  puVar8 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar8;
  *(undefined4 *)((int)param_1 + 0x8e) = *puVar8;
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 4;
  *(undefined *)(param_1 + 0x25) = *(undefined *)(iVar4 + 4);
  puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 1);
  *(undefined2 **)(param_2 + 0x10) = puVar7;
  piVar6 = param_1 + 0x42;
  do {
    iVar3 = iVar3 + -1;
    *(undefined2 *)piVar6 = *puVar7;
    piVar5 = (int *)(*(int *)(param_2 + 0x10) + 2);
    *(int **)(param_2 + 0x10) = piVar5;
    piVar6[-0x15] = *piVar5;
    piVar5 = (int *)(*(int *)(param_2 + 0x10) + 4);
    *(int **)(param_2 + 0x10) = piVar5;
    piVar6[-0x14] = *piVar5;
    piVar5 = (int *)(*(int *)(param_2 + 0x10) + 4);
    *(int **)(param_2 + 0x10) = piVar5;
    piVar6[-0x13] = *piVar5;
    piVar5 = (int *)(*(int *)(param_2 + 0x10) + 4);
    *(int **)(param_2 + 0x10) = piVar5;
    piVar6[-4] = *piVar5;
    piVar5 = (int *)(*(int *)(param_2 + 0x10) + 4);
    *(int **)(param_2 + 0x10) = piVar5;
    piVar6[-3] = *piVar5;
    piVar5 = (int *)(*(int *)(param_2 + 0x10) + 4);
    *(int **)(param_2 + 0x10) = piVar5;
    piVar6[-2] = *piVar5;
    piVar5 = (int *)(*(int *)(param_2 + 0x10) + 4);
    *(int **)(param_2 + 0x10) = piVar5;
    piVar6[-1] = *piVar5;
    puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 4);
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    *(undefined2 *)((int)piVar6 + 2) = *puVar7;
    puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    *(undefined2 *)(piVar6 + 1) = *puVar7;
    puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    *(undefined2 *)((int)piVar6 + 6) = *puVar7;
    puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    *(undefined2 *)(piVar6 + 2) = *puVar7;
    puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    *(undefined2 *)((int)piVar6 + 10) = *puVar7;
    puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    *(undefined2 *)(piVar6 + 3) = *puVar7;
    puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    *(undefined2 *)((int)piVar6 + 0xe) = *puVar7;
    puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    *(undefined2 *)(piVar6 + 4) = *puVar7;
    iVar4 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar4 + 2;
    *(undefined *)((int)piVar6 + 0x12) = *(undefined *)(iVar4 + 2);
    iVar4 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar4 + 1;
    *(undefined *)((int)piVar6 + 0x13) = *(undefined *)(iVar4 + 1);
    iVar4 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar4 + 1;
    *(undefined *)(piVar6 + 5) = *(undefined *)(iVar4 + 1);
    iVar4 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar4 + 1;
    *(undefined *)((int)piVar6 + 0x15) = *(undefined *)(iVar4 + 1);
    puVar7 = (undefined2 *)(*(int *)(param_2 + 0x10) + 1);
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    piVar6 = piVar6 + 0x22;
  } while (iVar3 != 0);
  iVar3 = param_1[0x1c];
  *(undefined *)((int)param_1 + 0x95) = 3;
  if (*(char *)((int)param_1 + 0x97) == '\0') {
    uVar1 = SIMDExpandImmediate(0,0,7);
    uVar10 = VectorShiftLeft(CONCAT44(iVar3,iVar3),0xffffffe8ffffffe5,4,1);
    uVar11 = VectorShiftLeft(uVar10 & uVar1,0x10,0x20,0);
    *(undefined8 *)(param_1 + 0x1d) = uVar11;
    param_1[2] = *(int *)(*param_1 + (((uint)(iVar3 << 0xc) >> 0x1e) + 0x42c) * 4 + 8);
  }
  iVar9 = param_1[0x1d];
  iVar4 = param_1[0x1e];
  bVar2 = (byte)((uint)(iVar3 << 1) >> 0x1f);
  *(byte *)((int)param_1 + 0x11d) = bVar2;
  *(byte *)((int)param_1 + 0x1a5) = bVar2;
  *(byte *)((int)param_1 + 0x22d) = bVar2;
  *(byte *)((int)param_1 + 0x2b5) = bVar2;
  param_1[0x91] = param_1[0x94] + iVar9;
  param_1[0x70] = param_1[0x73] + iVar4;
  param_1[0x92] = param_1[0x95] + iVar4;
  *(undefined *)((int)param_1 + 0x11e) = 1;
  *(undefined *)((int)param_1 + 0x1a6) = 1;
  *(undefined *)((int)param_1 + 0x22e) = 1;
  *(undefined *)((int)param_1 + 0x2b6) = 1;
  param_1[0x2b] = param_1[0x2e] + iVar9;
  param_1[0x4d] = param_1[0x50] + iVar9;
  param_1[0x6f] = param_1[0x72] + iVar9;
  param_1[0x2c] = param_1[0x2f] + iVar4;
  param_1[0x4e] = param_1[0x51] + iVar4;
  FUN_08031d2c(param_1);
  FUN_08031b14(param_1);
  FUN_0802f5e4(param_1);
  return;
}


