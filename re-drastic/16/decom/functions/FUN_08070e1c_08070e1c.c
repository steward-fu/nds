/*
 * Ghidra decompilation
 *
 * Function : FUN_08070e1c
 * Address  : 08070e1c
 * Program  : drastic16
 */


void FUN_08070e1c(int param_1,void **param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *__ptr;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  uint uVar11;
  void *pvVar12;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x1c);
  uVar5 = uVar1 & 0xfff;
  if ((uVar1 & 0x1000) == 0) {
    uVar5 = ((uint)uVar1 << 0x14) >> 0x15;
  }
  __ptr = *param_2;
  pvVar8 = (void *)((int)param_2[7] + 1);
  pvVar9 = param_2[2];
  pvVar10 = param_2[3];
  uVar11 = (uint)((ulonglong)uVar3 * (ulonglong)uVar5);
  puVar2 = (uint *)((int)__ptr + (int)param_2[7] * 0x20);
  pvVar12 = param_2[8];
  puVar2[4] = uVar5;
  uVar5 = uVar5 * uVar4 + (int)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20);
  pvVar6 = param_2[4];
  pvVar7 = param_2[5];
  uVar1 = *(ushort *)(param_1 + 0x12);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[5] = (uint)uVar1;
  param_2[2] = (void *)((int)pvVar9 + uVar3);
  param_2[3] = (void *)((int)pvVar10 + CARRY4((uint)pvVar9,uVar3) + uVar4);
  puVar2[2] = uVar11;
  puVar2[3] = uVar5;
  param_2[4] = (void *)((int)pvVar6 + uVar11);
  param_2[5] = (void *)((int)pvVar7 + CARRY4((uint)pvVar6,uVar11) + uVar5);
  pvVar6 = param_2[6];
  puVar2[6] = *(uint *)(param_1 + 8);
  param_2[6] = (void *)((int)pvVar6 + (uint)*(ushort *)(param_1 + 0x12));
  if (pvVar8 != pvVar12) {
    param_2[7] = pvVar8;
    return;
  }
  pvVar6 = realloc(__ptr,(int)pvVar12 << 6);
  param_2[8] = (void *)((int)pvVar12 << 1);
  param_2[7] = pvVar8;
  *param_2 = pvVar6;
  return;
}


