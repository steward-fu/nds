/*
 * Ghidra decompilation
 *
 * Function : memory_divide
 * Address  : 00116eb0
 * Program  : drastic64
 */


void memory_divide(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar5 = *(ushort *)(param_1 + 0x1b2f0);
  *(undefined *)(param_1 + 0xfd510) = 1;
  uVar1 = uVar5 & 0xbfff;
  if ((uVar5 & 3) == 2) {
    lVar8 = *(long *)(param_1 + 0x1b308);
    lVar9 = *(long *)(param_1 + 0x1b300);
    if (lVar8 == 0) {
      uVar2 = 1;
      if (-1 < lVar9) {
        uVar2 = 0xffffffffffffffff;
      }
      *(undefined8 *)(param_1 + 0x1b310) = uVar2;
      *(long *)(param_1 + 0x1b318) = lVar9;
      *(ushort *)(param_1 + 0x1b2f0) = uVar1 | 0x4000;
      return;
    }
    if (lVar9 == -0x8000000000000000 && lVar8 == -1) {
LAB_00116fec:
      *(undefined8 *)(param_1 + 0x1b310) = 0x8000000000000000;
      *(ushort *)(param_1 + 0x1b2f0) = uVar1;
      return;
    }
    lVar7 = 0;
    if (lVar8 != 0) {
      lVar7 = lVar9 / lVar8;
    }
    *(long *)(param_1 + 0x1b310) = lVar7;
    *(long *)(param_1 + 0x1b318) = lVar9 - lVar7 * lVar8;
  }
  else if ((uVar5 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x1b308);
    iVar4 = *(int *)(param_1 + 0x1b300);
    if (iVar3 == 0) {
      uVar5 = uVar1 | 0x4000;
      if (*(long *)(param_1 + 0x1b308) != 0) {
        uVar5 = uVar1;
      }
      uVar2 = 0xffffffff00000001;
      if (-1 < iVar4) {
        uVar2 = 0xffffffff;
      }
      *(undefined8 *)(param_1 + 0x1b310) = uVar2;
      *(long *)(param_1 + 0x1b318) = (long)iVar4;
      *(ushort *)(param_1 + 0x1b2f0) = uVar5;
      return;
    }
    if (iVar4 == -0x80000000 && iVar3 == -1) {
      *(undefined8 *)(param_1 + 0x1b310) = 0x80000000;
    }
    else {
      iVar6 = 0;
      if (iVar3 != 0) {
        iVar6 = iVar4 / iVar3;
      }
      *(long *)(param_1 + 0x1b310) = (long)iVar6;
      *(long *)(param_1 + 0x1b318) = (long)(iVar4 - iVar6 * iVar3);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1b308);
    lVar8 = *(long *)(param_1 + 0x1b300);
    if (iVar3 == 0) {
      uVar5 = uVar1 | 0x4000;
      if (*(long *)(param_1 + 0x1b308) != 0) {
        uVar5 = uVar1;
      }
      uVar2 = 1;
      if (-1 < lVar8) {
        uVar2 = 0xffffffffffffffff;
      }
      *(undefined8 *)(param_1 + 0x1b310) = uVar2;
      *(long *)(param_1 + 0x1b318) = lVar8;
      *(ushort *)(param_1 + 0x1b2f0) = uVar5;
      return;
    }
    if (lVar8 == -0x8000000000000000 && iVar3 == -1) goto LAB_00116fec;
    lVar7 = (long)iVar3;
    lVar9 = 0;
    if (lVar7 != 0) {
      lVar9 = lVar8 / lVar7;
    }
    *(long *)(param_1 + 0x1b310) = lVar9;
    *(long *)(param_1 + 0x1b318) = lVar8 - lVar9 * lVar7;
  }
  *(ushort *)(param_1 + 0x1b2f0) = uVar1;
  return;
}


