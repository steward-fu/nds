/*
 * Ghidra decompilation
 *
 * Function : FUN_0806dd54
 * Address  : 0806dd54
 * Program  : drastic16
 */


undefined4 FUN_0806dd54(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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
  int iVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  
  if (0x1ffffff < param_2) {
    iVar14 = *(int *)(param_1 + 0x802380) + (param_2 >> 0x17) * 0x30;
    puVar4 = (uint *)(**(code **)(iVar14 + 0x28))
                               (*(undefined4 *)(param_1 + 0x802384),iVar14,param_2);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    if ((*puVar4 >> ((param_2 << 0x1a) >> 0x1b) & 3) != 0) {
      if (0x2ffffff < param_2) {
        return 1;
      }
      iVar14 = *(int *)(param_1 + 0x2084) + ((param_2 << 10) >> 0x11) * 4;
      *(uint *)(iVar14 + 0x14ba0e0) =
           *(uint *)(iVar14 + 0x14ba0e0) | 1 << ((param_2 << 0x19) >> 0x1b);
      return 1;
    }
    return 0;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x802384) + (((param_2 << 0x11) >> 0x17) + 0x3bc60) * 4) >>
       ((param_2 << 0x1a) >> 0x1b) & 3) == 0) {
    return 0;
  }
  iVar14 = *(int *)(param_1 + 0x2084);
  uVar2 = (param_2 << 0x11) >> 0x13;
  bVar1 = *(byte *)(iVar14 + uVar2 + 0x14b8020);
  bVar13 = bVar1 & 0x7f;
  if (bVar13 < 0xf) {
    bVar13 = bVar13 + 1;
  }
  iVar11 = *(int *)(*(int *)(*(int *)(param_1 + 0x802384) + 4) + uVar2 * 4);
  if ((bVar1 & 0x80) == 0) {
LAB_0806daf8:
    uVar9 = 1;
    *(byte *)(iVar14 + uVar2 + 0x14b8020) = bVar1 & 0x80 | bVar13;
  }
  else {
    if (*(uint *)(iVar14 + 0x14da0e0) == 0) {
      iVar12 = 1;
      uVar6 = 0;
    }
    else {
      piVar8 = (int *)(iVar14 + 0x14ba020);
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
        if ((*piVar8 == iVar11) && (piVar8[1] == param_2)) {
          *(int *)(iVar14 + (uVar2 + 0x528000) * 4 + 0x20) = piVar8[2];
          *(undefined4 *)(param_1 + (((param_2 << 0x14) >> 0x16) + 0x20) * 4) = 0;
          return 0;
        }
        piVar8 = piVar8 + 3;
      } while (uVar6 != *(uint *)(iVar14 + 0x14da0e0));
      if (0xf < uVar6) goto LAB_0806daf8;
      iVar12 = uVar5 + 2;
    }
    iVar7 = iVar14 + uVar6 * 0xc;
    iVar10 = ((param_2 << 0x14) >> 0x16) + 0x20;
    uVar9 = 0;
    *(int *)(iVar7 + 0x14ba020) = iVar11;
    *(uint *)(iVar7 + 0x14ba024) = param_2;
    *(undefined4 *)(iVar14 + (uVar2 + 0x528000) * 4 + 0x20) = 0;
    *(undefined4 *)(param_1 + iVar10 * 4) = 0;
    uVar3 = FUN_0806d394(param_1,param_2,iVar7 + 0x14ba000,iVar10,param_4);
    *(undefined4 *)(iVar7 + 0x14ba028) = uVar3;
    *(int *)(iVar14 + 0x14da0e0) = iVar12;
  }
  return uVar9;
}


