/*
 * Ghidra decompilation
 *
 * Function : FUN_0806db7c
 * Address  : 0806db7c
 * Program  : drastic16
 */


undefined4 FUN_0806db7c(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  
  if (0x1ffffff < param_2) {
    iVar15 = *(int *)(param_1 + 0x802380) + (param_2 >> 0x17) * 0x30;
    puVar4 = (uint *)(**(code **)(iVar15 + 0x28))
                               (*(undefined4 *)(param_1 + 0x802384),iVar15,param_2 & 0xfffffffe);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    if ((*puVar4 >> ((param_2 << 0x1a) >> 0x1b) & 1) != 0) {
      if (0x2ffffff < (param_2 & 0xfffffffe)) {
        return 1;
      }
      iVar15 = *(int *)(param_1 + 0x2084) + ((param_2 & 0x3ffffe) >> 7) * 4;
      *(uint *)(iVar15 + 0x14ba0e0) =
           *(uint *)(iVar15 + 0x14ba0e0) | 1 << (((param_2 & 0x3ffffe) << 0x19) >> 0x1b);
      return 1;
    }
    return 0;
  }
  uVar11 = *(uint *)(*(int *)(param_1 + 0x802384) + (((param_2 << 0x11) >> 0x17) + 0x3bc60) * 4) >>
           ((param_2 << 0x1a) >> 0x1b) & 1;
  if (uVar11 == 0) {
    return 0;
  }
  param_2 = param_2 & 0xfffffffc;
  iVar15 = *(int *)(param_1 + 0x2084);
  uVar2 = (param_2 << 0x11) >> 0x13;
  bVar1 = *(byte *)(iVar15 + uVar2 + 0x14b8020);
  bVar14 = bVar1 & 0x7f;
  if (bVar14 < 0xf) {
    bVar14 = bVar14 + 1;
  }
  iVar12 = *(int *)(*(int *)(*(int *)(param_1 + 0x802384) + 4) + uVar2 * 4);
  if ((bVar1 & 0x80) == 0) {
LAB_0806daf8:
    uVar9 = 1;
    *(byte *)(iVar15 + uVar2 + 0x14b8020) = bVar1 & 0x80 | bVar14;
  }
  else {
    if (*(uint *)(iVar15 + 0x14da0e0) == 0) {
      iVar13 = 1;
      uVar6 = 0;
    }
    else {
      piVar8 = (int *)(iVar15 + 0x14ba020);
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
        if ((*piVar8 == iVar12) && (piVar8[1] == param_2)) {
          *(int *)(iVar15 + (uVar2 + 0x528000) * 4 + 0x20) = piVar8[2];
          *(undefined4 *)(param_1 + (((param_2 << 0x14) >> 0x16) + 0x20) * 4) = 0;
          return 0;
        }
        piVar8 = piVar8 + 3;
      } while (uVar6 != *(uint *)(iVar15 + 0x14da0e0));
      if (0xf < uVar6) goto LAB_0806daf8;
      iVar13 = uVar5 + 2;
    }
    iVar7 = iVar15 + uVar6 * 0xc;
    iVar10 = ((param_2 << 0x14) >> 0x16) + 0x20;
    uVar9 = 0;
    *(int *)(iVar7 + 0x14ba020) = iVar12;
    *(uint *)(iVar7 + 0x14ba024) = param_2;
    *(undefined4 *)(iVar15 + (uVar2 + 0x528000) * 4 + 0x20) = 0;
    *(undefined4 *)(param_1 + iVar10 * 4) = 0;
    uVar3 = FUN_0806d394(param_1,param_2,iVar7 + 0x14ba000,iVar10,uVar11);
    *(undefined4 *)(iVar7 + 0x14ba028) = uVar3;
    *(int *)(iVar15 + 0x14da0e0) = iVar13;
  }
  return uVar9;
}


