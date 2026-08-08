/*
 * Ghidra decompilation
 *
 * Function : FUN_08070818
 * Address  : 08070818
 * Program  : drastic16
 */


bool FUN_08070818(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  int iVar14;
  uint *puVar15;
  void *__s;
  int iVar16;
  int iVar17;
  undefined auStack_38 [8];
  undefined auStack_30 [12];
  
  iVar12 = *(int *)(param_1 + 0x2378);
  iVar8 = *(int *)(param_1 + 0x230c);
  FUN_0807b7f0(auStack_38);
  puVar9 = (undefined8 *)(iVar12 + 0x80);
  puVar5 = (undefined8 *)(param_1 + 0x80);
  if (puVar5 < (undefined8 *)(iVar12 + 0x90) && puVar9 < (undefined8 *)(param_1 + 0x90)) {
    puVar2 = (undefined4 *)(param_1 + 0x7c);
    puVar4 = (undefined4 *)(iVar12 + 0x7c);
    iVar10 = 0x800;
    do {
      iVar10 = iVar10 + -1;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    } while (iVar10 != 0);
  }
  else {
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = puVar9 + 2;
    } while (puVar9 != (undefined8 *)(iVar12 + 0x2080));
  }
  if (param_2 >> 0x18 == 2) {
LAB_080708c0:
    if (*(char *)(param_1 + 0x2104) != '\x01') {
      memset((void *)(*(int *)(iVar12 + 0x230c) + 0xef180),0,0x800);
      iVar10 = 0;
      do {
        *(undefined4 *)(*(int *)(iVar12 + 0x2314) + iVar10 * 4) = 0;
        iVar6 = *(int *)(iVar12 + 0x2084) + iVar10;
        iVar10 = iVar10 + 1;
        *(byte *)(iVar6 + 0x14b8020) = *(byte *)(iVar6 + 0x14b8020) & 0x7f;
      } while (iVar10 != 0x2000);
      iVar10 = 0;
      do {
        *(undefined4 *)(*(int *)(iVar12 + 0x2318) + iVar10) = 0;
        iVar10 = iVar10 + 4;
      } while (iVar10 != 0x10000);
      iVar10 = *(int *)(iVar12 + 0x2084);
      *(undefined4 *)(iVar10 + 0x14da0e0) = 0;
      FUN_080896d4(iVar10);
      goto LAB_0807096c;
    }
  }
  else if ((*(char *)(param_1 + 0x2104) != '\x01') || (0x2000000 < param_2)) {
    FUN_0806f5d4(param_1,param_2);
    if (param_2 != 0xffffffff) {
      return true;
    }
    goto LAB_080708c0;
  }
  memset((void *)(*(int *)(param_1 + 0x230c) + 0xef180),0,0x800);
  iVar10 = 0;
  do {
    *(undefined4 *)(*(int *)(param_1 + 0x2314) + iVar10 * 4) = 0;
    iVar6 = *(int *)(param_1 + 0x2084) + iVar10;
    iVar10 = iVar10 + 1;
    *(byte *)(iVar6 + 0x14b8020) = *(byte *)(iVar6 + 0x14b8020) & 0x7f;
  } while (iVar10 != 0x2000);
  iVar10 = 0;
  do {
    *(undefined4 *)(*(int *)(param_1 + 0x2318) + iVar10) = 0;
    iVar10 = iVar10 + 4;
  } while (iVar10 != 0x10000);
  iVar10 = *(int *)(param_1 + 0x2084);
  *(undefined4 *)(iVar10 + 0x14da0e0) = 0;
  FUN_080896d4(iVar10);
  if (param_2 < 0x2000000) {
    return *(uint *)(param_1 + 0x2324) < 0x2000000;
  }
LAB_0807096c:
  memset((void *)(*(int *)(param_1 + 0x2084) + 0x1300000),0,0x80000);
  if (*(char *)(param_1 + 0x2104) == '\x01') {
    iVar10 = param_1 + 0x802390;
    iVar6 = param_1 + 0x2384;
    iVar14 = 0;
    do {
      iVar16 = iVar10;
      iVar17 = iVar6;
      for (uVar1 = *(uint *)(param_1 + 0x80638c + iVar14); uVar1 != 0; uVar1 = uVar1 >> 1) {
        if ((uVar1 & 1) != 0) {
          iVar7 = iVar17;
          for (uVar11 = *(uint *)(iVar16 + -4); uVar11 != 0; uVar11 = uVar11 >> 1) {
            if ((uVar11 & 1) != 0) {
              uVar3 = *(uint *)(iVar7 + -4);
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 & 0x3fffffff;
              }
              *(uint *)(iVar7 + -4) = uVar3;
            }
            iVar7 = iVar7 + 4;
          }
        }
        iVar16 = iVar16 + 4;
        iVar17 = iVar17 + 0x80;
      }
      iVar14 = iVar14 + 4;
      iVar10 = iVar10 + 0x80;
      iVar6 = iVar6 + 0x1000;
    } while (iVar14 != 0x60);
    puVar15 = (uint *)(iVar12 + 0x8063c8);
    iVar10 = iVar12 + 0x802390;
    iVar6 = iVar12 + 0x2384;
    iVar14 = 0x10;
    do {
      puVar15 = puVar15 + 1;
      iVar16 = iVar10;
      iVar17 = iVar6;
      for (uVar1 = *puVar15; uVar1 != 0; uVar1 = uVar1 >> 1) {
        if ((uVar1 & 1) != 0) {
          iVar7 = iVar17;
          for (uVar11 = *(uint *)(iVar16 + -4); uVar11 != 0; uVar11 = uVar11 >> 1) {
            if ((uVar11 & 1) != 0) {
              uVar3 = *(uint *)(iVar7 + -4);
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 & 0x3fffffff;
              }
              *(uint *)(iVar7 + -4) = uVar3;
            }
            iVar7 = iVar7 + 4;
          }
        }
        iVar16 = iVar16 + 4;
        iVar17 = iVar17 + 0x80;
      }
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 0x80;
      iVar6 = iVar6 + 0x1000;
    } while (iVar14 != 0x18);
  }
  else {
    puVar15 = (uint *)(param_1 + 0x8063c8);
    iVar10 = param_1 + 0x802390;
    iVar6 = param_1 + 0x2384;
    iVar14 = 0x10;
    do {
      puVar15 = puVar15 + 1;
      iVar16 = iVar10;
      iVar17 = iVar6;
      for (uVar1 = *puVar15; uVar1 != 0; uVar1 = uVar1 >> 1) {
        if ((uVar1 & 1) != 0) {
          iVar7 = iVar17;
          for (uVar11 = *(uint *)(iVar16 + -4); uVar11 != 0; uVar11 = uVar11 >> 1) {
            if ((uVar11 & 1) != 0) {
              uVar3 = *(uint *)(iVar7 + -4);
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 & 0x3fffffff;
              }
              *(uint *)(iVar7 + -4) = uVar3;
            }
            iVar7 = iVar7 + 4;
          }
        }
        iVar16 = iVar16 + 4;
        iVar17 = iVar17 + 0x80;
      }
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 0x80;
      iVar6 = iVar6 + 0x1000;
    } while (iVar14 != 0x18);
    iVar6 = iVar12 + 0x802390;
    iVar14 = iVar12 + 0x2384;
    iVar10 = 0;
    do {
      iVar16 = iVar6;
      iVar17 = iVar14;
      for (uVar1 = *(uint *)(iVar12 + 0x80638c + iVar10); uVar1 != 0; uVar1 = uVar1 >> 1) {
        if ((uVar1 & 1) != 0) {
          iVar7 = iVar17;
          for (uVar11 = *(uint *)(iVar16 + -4); uVar11 != 0; uVar11 = uVar11 >> 1) {
            if ((uVar11 & 1) != 0) {
              uVar3 = *(uint *)(iVar7 + -4);
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 & 0x3fffffff;
              }
              *(uint *)(iVar7 + -4) = uVar3;
            }
            iVar7 = iVar7 + 4;
          }
        }
        iVar16 = iVar16 + 4;
        iVar17 = iVar17 + 0x80;
      }
      iVar10 = iVar10 + 4;
      iVar6 = iVar6 + 0x80;
      iVar14 = iVar14 + 0x1000;
    } while (iVar10 != 0x60);
  }
  pvVar13 = (void *)(iVar8 + 0xaf17c);
  puVar15 = (uint *)(iVar8 + 0xaf040);
  do {
    uVar1 = *puVar15;
    *puVar15 = 0;
    __s = pvVar13;
    for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        memset(__s,0,0x80);
      }
      __s = (void *)((int)__s + 0x80);
    }
    pvVar13 = (void *)((int)pvVar13 + 0x1000);
    puVar15 = puVar15 + 1;
  } while (pvVar13 != (void *)(iVar8 + 0xef17c));
  pvVar13 = (void *)(iVar8 + 0xef180);
  uVar1 = *(uint *)(iVar8 + 0xaf144);
  *(undefined4 *)(iVar8 + 0xaf144) = 0;
  for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
    if ((uVar1 & 1) != 0) {
      memset(pvVar13,0,0x80);
    }
    pvVar13 = (void *)((int)pvVar13 + 0x80);
  }
  FUN_0807b7f0(auStack_30);
  FUN_08089690(*(undefined4 *)(param_1 + 0x2084));
  if ((*(int *)(iVar12 + 0x2370) != 0) &&
     ((*(uint *)(iVar12 + 0x2324) >> 0x18 == 2 ||
      ((*(char *)(iVar12 + 0x2104) == '\x01' && (*(uint *)(iVar12 + 0x2324) < 0x2000000)))))) {
    *(undefined4 *)(iVar12 + 0x2324) =
         *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x2370) + -0xc) + 4);
    iVar8 = FUN_0806d394(iVar12);
    *(int *)(iVar12 + 0x2370) = iVar8 + 8;
    return true;
  }
  return true;
}


