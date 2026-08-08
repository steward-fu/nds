/*
 * Ghidra decompilation
 *
 * Function : FUN_0806d394
 * Address  : 0806d394
 * Program  : drastic16
 */


uint FUN_0806d394(int param_1,uint param_2)

{
  int **ppiVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int **ppiVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  uint local_3c;
  
  uVar11 = param_2 >> 2;
  uVar3 = uVar11 & 0x3ff;
  iVar4 = param_1 + 0x80;
  if ((param_2 < 0x2000000) && (*(char *)(param_1 + 0x2104) == '\x01')) {
    if ((param_2 & 1) == 0) {
      uVar9 = uVar11 & 0x1fff;
      iVar8 = 0x2314;
    }
    else {
      uVar9 = (param_2 << 0x11) >> 0x12;
      iVar8 = 0x2318;
    }
    uVar9 = *(uint *)(*(int *)(param_1 + iVar8) + uVar9 * 4);
    if (uVar9 != 0) {
      *(uint *)(iVar4 + uVar3 * 4) = param_2;
      *(uint *)(iVar4 + uVar3 * 4 + 0x1000) = uVar9;
      return uVar9;
    }
    iVar8 = *(int *)(param_1 + 0x2084);
    puVar10 = (uint *)0x0;
LAB_0806d42c:
    local_3c = param_2 & 1;
    uVar15 = *(uint *)(iVar8 + 0x1420004);
    uVar9 = *(uint *)(iVar8 + 0x142000c);
    uVar19 = *(uint *)(iVar8 + 0x1420014);
    uVar18 = *(uint *)(iVar8 + 0x1420008);
    uVar17 = *(uint *)(iVar8 + 0x1420000);
    *(int *)(iVar8 + 0x14da0e4) = iVar8 + 0x13a0000;
    uVar16 = *(uint *)(iVar8 + 0x1420010);
    *(undefined4 *)(iVar8 + 0x1480018) = 0;
    *(undefined4 *)(iVar8 + 0x14a001c) = 0;
    uVar2 = FUN_0806d16c(param_1,param_2 & 0xfffffffe,local_3c);
    if (uVar2 != 0) {
      if (puVar10 == (uint *)0x0) {
        if (local_3c == 0) {
          *(uint *)(*(int *)(param_1 + 0x2314) + (uVar11 & 0x1fff) * 4) = uVar2;
          iVar5 = *(int *)(param_1 + 0x2084) + (uVar11 & 0x1fff);
          uVar11 = (uint)*(byte *)(iVar5 + 0x14b8020);
          if (8 < uVar11) {
            *(byte *)(iVar5 + 0x14b8020) = ~((byte)~(byte)((uVar11 << 0x19) >> 0x18) >> 1);
          }
        }
        else {
          *(uint *)(*(int *)(param_1 + 0x2318) + ((param_2 << 0x11) >> 0x12) * 4) = uVar2;
        }
      }
      else if (puVar10[1] == 0) {
        *puVar10 = param_2;
        puVar10[1] = uVar2;
      }
      else if (puVar10[3] == 0) {
        puVar10[2] = param_2;
        puVar10[3] = uVar2;
      }
      else {
        ppiVar7 = *(int ***)(puVar10[3] - 4);
        for (ppiVar1 = (int **)*ppiVar7; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          ppiVar7 = ppiVar1;
        }
        *ppiVar7 = (int *)*(int *)(uVar2 - 4);
      }
    }
    FUN_08089340(param_1);
    uVar11 = *(uint *)(iVar8 + 0x1420000);
    if (uVar17 != uVar11) {
      uVar14 = uVar17 >> 0xc;
      uVar13 = uVar11 >> 0xc;
      if (uVar14 == uVar13) {
        __clear_cache(uVar17,uVar11);
      }
      else {
        uVar12 = uVar14 + 1;
        iVar5 = uVar12 * 0x1000;
        __clear_cache(uVar17,iVar5);
        uVar17 = uVar12;
        if (uVar12 < uVar13) {
          do {
            uVar17 = uVar17 + 1;
            __clear_cache(iVar5,iVar5 + 0x1000);
            iVar5 = iVar5 + 0x1000;
          } while (uVar17 < uVar13);
          iVar5 = ((uVar13 + 0xfffff + uVar12) - uVar14) * 0x1000;
        }
        __clear_cache(iVar5,uVar11);
      }
    }
    uVar11 = *(uint *)(iVar8 + 0x1420010);
    if (uVar16 != uVar11) {
      uVar17 = uVar16 >> 0xc;
      uVar14 = uVar11 >> 0xc;
      if (uVar17 == uVar14) {
        __clear_cache(uVar16,uVar11);
      }
      else {
        uVar13 = uVar17 + 1;
        iVar5 = uVar13 * 0x1000;
        __clear_cache(uVar16,iVar5);
        uVar16 = uVar13;
        if (uVar13 < uVar14) {
          do {
            uVar16 = uVar16 + 1;
            __clear_cache(iVar5,iVar5 + 0x1000);
            iVar5 = iVar5 + 0x1000;
          } while (uVar16 < uVar14);
          iVar5 = ((uVar14 + 0xfffff + uVar13) - uVar17) * 0x1000;
        }
        __clear_cache(iVar5,uVar11);
      }
    }
    uVar11 = *(uint *)(iVar8 + 0x1420008);
    if (uVar18 != uVar11) {
      uVar16 = uVar18 >> 0xc;
      uVar17 = uVar11 >> 0xc;
      if (uVar16 == uVar17) {
        __clear_cache(uVar18,uVar11);
      }
      else {
        uVar14 = uVar16 + 1;
        iVar5 = uVar14 * 0x1000;
        __clear_cache(uVar18,iVar5);
        uVar18 = uVar14;
        if (uVar14 < uVar17) {
          do {
            uVar18 = uVar18 + 1;
            __clear_cache(iVar5,iVar5 + 0x1000);
            iVar5 = iVar5 + 0x1000;
          } while (uVar18 < uVar17);
          iVar5 = ((uVar17 + 0xfffff + uVar14) - uVar16) * 0x1000;
        }
        __clear_cache(iVar5,uVar11);
      }
    }
    uVar11 = *(uint *)(iVar8 + 0x1420004);
    if (uVar15 != uVar11) {
      uVar16 = uVar11 >> 0xc;
      uVar17 = uVar15 >> 0xc;
      if (uVar16 == uVar17) {
        __clear_cache(uVar11,uVar15);
      }
      else {
        uVar18 = uVar16 + 1;
        iVar5 = uVar18 * 0x1000;
        __clear_cache(uVar11,iVar5);
        uVar11 = uVar18;
        if (uVar18 < uVar17) {
          do {
            uVar11 = uVar11 + 1;
            __clear_cache(iVar5,iVar5 + 0x1000);
            iVar5 = iVar5 + 0x1000;
          } while (uVar11 < uVar17);
          iVar5 = ((uVar17 + 0xfffff + uVar18) - uVar16) * 0x1000;
        }
        __clear_cache(iVar5,uVar15);
      }
    }
    uVar11 = *(uint *)(iVar8 + 0x1420014);
    if (uVar19 != uVar11) {
      uVar15 = uVar11 >> 0xc;
      uVar16 = uVar19 >> 0xc;
      if (uVar15 == uVar16) {
        __clear_cache(uVar11,uVar19);
      }
      else {
        uVar17 = uVar15 + 1;
        iVar5 = uVar17 * 0x1000;
        __clear_cache(uVar11,iVar5);
        uVar11 = uVar17;
        if (uVar17 < uVar16) {
          do {
            uVar11 = uVar11 + 1;
            __clear_cache(iVar5,iVar5 + 0x1000);
            iVar5 = iVar5 + 0x1000;
          } while (uVar11 < uVar16);
          iVar5 = (((uVar16 + 0xfffff) - uVar15) + uVar17) * 0x1000;
        }
        __clear_cache(iVar5,uVar19);
      }
    }
    uVar11 = *(uint *)(iVar8 + 0x142000c);
    if (uVar9 != uVar11) {
      uVar15 = uVar11 >> 0xc;
      uVar16 = uVar9 >> 0xc;
      if (uVar15 == uVar16) {
        __clear_cache(uVar11,uVar9);
      }
      else {
        uVar17 = uVar15 + 1;
        iVar8 = uVar17 * 0x1000;
        __clear_cache(uVar11,iVar8);
        uVar11 = uVar17;
        if (uVar17 < uVar16) {
          do {
            uVar11 = uVar11 + 1;
            __clear_cache(iVar8,iVar8 + 0x1000);
            iVar8 = iVar8 + 0x1000;
          } while (uVar11 < uVar16);
          iVar8 = (((uVar16 + 0xfffff) - uVar15) + uVar17) * 0x1000;
        }
        __clear_cache(iVar8,uVar9);
      }
    }
    *(uint *)(iVar4 + uVar3 * 4) = param_2;
    *(uint *)(iVar4 + uVar3 * 4 + 0x1000) = uVar2;
    return uVar2;
  }
  bVar20 = param_2 >> 0x18 == 2;
  iVar5 = 0x2084;
  if (bVar20) {
    iVar8 = *(int *)(param_1 + 0x2084);
    uVar9 = 0x7fff;
    iVar5 = iVar8 + 0x1300000;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x2084);
    uVar9 = 0x1fff;
  }
  if (!bVar20) {
    iVar5 = iVar8 + 0x1380000;
  }
  puVar10 = (uint *)(iVar5 + (uVar9 & uVar11) * 0x10);
  if (*(uint *)(iVar5 + (uVar9 & uVar11) * 0x10) == param_2) {
    uVar9 = puVar10[1];
  }
  else {
    uVar9 = puVar10[3];
    if (puVar10[2] != param_2) {
      if (uVar9 != 0) {
        for (piVar6 = (int *)**(int **)(uVar9 - 4); piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
          if (piVar6[1] == param_2) {
            uVar9 = piVar6[2];
            goto LAB_0806d89c;
          }
        }
      }
      goto LAB_0806d42c;
    }
  }
LAB_0806d89c:
  *(uint *)(iVar4 + uVar3 * 4) = param_2;
  *(uint *)(iVar4 + uVar3 * 4 + 0x1000) = uVar9;
  return uVar9;
}


