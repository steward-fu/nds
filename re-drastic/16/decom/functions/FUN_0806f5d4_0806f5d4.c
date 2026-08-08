/*
 * Ghidra decompilation
 *
 * Function : FUN_0806f5d4
 * Address  : 0806f5d4
 * Program  : drastic16
 */


undefined4 FUN_0806f5d4(int param_1)

{
  int **ppiVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int **ppiVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  void *pvVar18;
  void *__s;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined auStack_38 [8];
  undefined auStack_30 [12];
  
  iVar20 = 0x18;
  iVar9 = *(int *)(param_1 + 0x2378);
  iVar13 = *(int *)(param_1 + 0x230c);
  FUN_0807b7f0(auStack_38);
  iVar5 = iVar9;
  local_3c = param_1;
  if (*(char *)(param_1 + 0x2104) != '\x01') {
    iVar5 = param_1;
    local_3c = iVar9;
  }
  memset((void *)(*(int *)(param_1 + 0x2084) + 0x1380000),0,0x20000);
  puVar21 = (uint *)(param_1 + 0x8063e8);
  iVar16 = param_1 + 0x802390;
  iVar17 = param_1 + 0x2384;
  do {
    puVar21 = puVar21 + 1;
    iVar22 = iVar16;
    iVar24 = iVar17;
    for (uVar2 = *puVar21; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        iVar6 = iVar24;
        for (uVar10 = *(uint *)(iVar22 + -4); uVar10 != 0; uVar10 = uVar10 >> 1) {
          if ((uVar10 & 1) != 0) {
            uVar4 = *(uint *)(iVar6 + -4);
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 & 0x3fffffff;
            }
            *(uint *)(iVar6 + -4) = uVar4;
          }
          iVar6 = iVar6 + 4;
        }
      }
      iVar22 = iVar22 + 4;
      iVar24 = iVar24 + 0x80;
    }
    iVar20 = iVar20 + 1;
    iVar16 = iVar16 + 0x80;
    iVar17 = iVar17 + 0x1000;
  } while (iVar20 != 0x80);
  puVar21 = (uint *)(iVar9 + 0x8063e8);
  iVar20 = iVar9 + 0x802390;
  iVar16 = iVar9 + 0x2384;
  iVar17 = 0x18;
  do {
    puVar21 = puVar21 + 1;
    iVar22 = iVar20;
    iVar24 = iVar16;
    for (uVar2 = *puVar21; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        iVar6 = iVar24;
        for (uVar10 = *(uint *)(iVar22 + -4); uVar10 != 0; uVar10 = uVar10 >> 1) {
          if ((uVar10 & 1) != 0) {
            uVar4 = *(uint *)(iVar6 + -4);
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 & 0x3fffffff;
            }
            *(uint *)(iVar6 + -4) = uVar4;
          }
          iVar6 = iVar6 + 4;
        }
      }
      iVar22 = iVar22 + 4;
      iVar24 = iVar24 + 0x80;
    }
    iVar17 = iVar17 + 1;
    iVar20 = iVar20 + 0x80;
    iVar16 = iVar16 + 0x1000;
  } while (iVar17 != 0x80);
  uVar2 = *(uint *)(iVar13 + 0xaf148);
  pvVar18 = (void *)(iVar13 + 0xef980);
  *(undefined4 *)(iVar13 + 0xaf148) = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    if ((uVar2 & 1) != 0) {
      memset(pvVar18,0,0x80);
    }
    pvVar18 = (void *)((int)pvVar18 + 0x80);
  }
  uVar2 = *(uint *)(iVar13 + 0xaf14c);
  pvVar18 = (void *)(iVar13 + 0xf0180);
  *(undefined4 *)(iVar13 + 0xaf14c) = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    if ((uVar2 & 1) != 0) {
      memset(pvVar18,0,0x80);
    }
    pvVar18 = (void *)((int)pvVar18 + 0x80);
  }
  pvVar18 = (void *)(iVar13 + 0xf1180);
  puVar21 = (uint *)(iVar13 + 0xaf150);
  do {
    uVar2 = *puVar21;
    *puVar21 = 0;
    pvVar15 = pvVar18;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        memset(pvVar15,0,0x80);
      }
      pvVar15 = (void *)((int)pvVar15 + 0x80);
    }
    pvVar18 = (void *)((int)pvVar18 + 0x1000);
    puVar21 = puVar21 + 1;
  } while (pvVar18 != (void *)(iVar13 + 0xfc180));
  if (*(int *)(iVar13 + 0xfba00) != 0) {
    pvVar18 = *(void **)(iVar13 + 0xef17c);
    pvVar15 = (void *)((int)pvVar18 + 0x200000);
    puVar21 = *(uint **)(iVar13 + 0xaf140);
    do {
      uVar2 = *puVar21;
      *puVar21 = 0;
      __s = pvVar18;
      for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          memset(__s,0,0x80);
        }
        __s = (void *)((int)__s + 0x80);
      }
      pvVar18 = (void *)((int)pvVar18 + 0x1000);
      puVar21 = puVar21 + 1;
    } while (pvVar18 != pvVar15);
  }
  FUN_0807b7f0(auStack_30);
  FUN_080896b0(*(undefined4 *)(param_1 + 0x2084));
  if (((*(int *)(iVar9 + 0x2370) != 0) && (*(uint *)(iVar9 + 0x2324) >> 0x18 != 2)) &&
     ((*(char *)(iVar9 + 0x2104) != '\x01' || (0x2000000 < *(uint *)(iVar9 + 0x2324))))) {
    *(undefined4 *)(iVar9 + 0x2324) = *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x2370) + -0xc) + 4)
    ;
    iVar13 = FUN_0806d394();
    *(int *)(iVar9 + 0x2370) = iVar13 + 8;
  }
  if (*(char *)(iVar5 + 0x2104) == '\x01') {
    iVar9 = *(int *)(*(int *)(iVar5 + 0x2314) + 8);
    if (iVar9 == 0) {
      iVar13 = *(int *)(iVar5 + 0x2084);
      local_40 = *(uint *)(iVar13 + 0x1420004);
      local_48 = *(uint *)(iVar13 + 0x1420010);
      local_44 = *(uint *)(iVar13 + 0x1420008);
      *(int *)(iVar13 + 0x14da0e4) = iVar13 + 0x13a0000;
      uVar4 = *(uint *)(iVar13 + 0x1420000);
      uVar10 = *(uint *)(iVar13 + 0x142000c);
      uVar2 = *(uint *)(iVar13 + 0x1420014);
      *(undefined4 *)(iVar13 + 0x1480018) = 0;
      *(undefined4 *)(iVar13 + 0x14a001c) = 0;
      iVar9 = FUN_0806de38(iVar5,8);
      if (iVar9 != 0) {
        *(int *)(*(int *)(iVar5 + 0x2314) + 8) = iVar9;
        uVar19 = (uint)*(byte *)(*(int *)(iVar5 + 0x2084) + 0x14b8022);
        if (8 < uVar19) {
          *(byte *)(*(int *)(iVar5 + 0x2084) + 0x14b8022) =
               ~((byte)~(byte)((uVar19 << 0x19) >> 0x18) >> 1);
        }
      }
LAB_0806fa6c:
      FUN_08089340(iVar5);
      uVar19 = *(uint *)(iVar13 + 0x1420000);
      if (uVar4 != uVar19) {
        uVar14 = uVar4 >> 0xc;
        uVar12 = uVar19 >> 0xc;
        if (uVar14 == uVar12) {
          __clear_cache(uVar4,uVar19);
        }
        else {
          uVar7 = uVar14 + 1;
          iVar20 = uVar7 * 0x1000;
          __clear_cache(uVar4,iVar20);
          uVar4 = uVar7;
          if (uVar7 < uVar12) {
            do {
              uVar4 = uVar4 + 1;
              __clear_cache(iVar20,iVar20 + 0x1000);
              iVar20 = iVar20 + 0x1000;
            } while (uVar4 < uVar12);
            iVar20 = ((uVar12 + 0xfffff + uVar7) - uVar14) * 0x1000;
          }
          __clear_cache(iVar20,uVar19);
        }
      }
      uVar4 = *(uint *)(iVar13 + 0x1420010);
      if (local_48 != uVar4) {
        uVar19 = local_48 >> 0xc;
        uVar14 = uVar4 >> 0xc;
        if (uVar19 == uVar14) {
          __clear_cache(local_48,uVar4);
        }
        else {
          uVar7 = uVar19 + 1;
          iVar20 = uVar7 * 0x1000;
          __clear_cache(local_48,iVar20);
          uVar12 = uVar7;
          if (uVar7 < uVar14) {
            do {
              uVar12 = uVar12 + 1;
              __clear_cache(iVar20,iVar20 + 0x1000);
              iVar20 = iVar20 + 0x1000;
            } while (uVar12 < uVar14);
            iVar20 = ((uVar14 + 0xfffff + uVar7) - uVar19) * 0x1000;
          }
          __clear_cache(iVar20,uVar4);
        }
      }
      uVar4 = *(uint *)(iVar13 + 0x1420008);
      if (local_44 != uVar4) {
        uVar19 = local_44 >> 0xc;
        uVar14 = uVar4 >> 0xc;
        if (uVar19 == uVar14) {
          __clear_cache(local_44,uVar4);
        }
        else {
          uVar7 = uVar19 + 1;
          iVar20 = uVar7 * 0x1000;
          __clear_cache(local_44,iVar20);
          uVar12 = uVar7;
          if (uVar7 < uVar14) {
            do {
              uVar12 = uVar12 + 1;
              __clear_cache(iVar20,iVar20 + 0x1000);
              iVar20 = iVar20 + 0x1000;
            } while (uVar12 < uVar14);
            iVar20 = (((uVar14 + 0xfffff) - uVar19) + uVar7) * 0x1000;
          }
          __clear_cache(iVar20,uVar4);
        }
      }
      uVar4 = *(uint *)(iVar13 + 0x1420004);
      if (local_40 != uVar4) {
        uVar19 = local_40 >> 0xc;
        if (uVar4 >> 0xc == uVar19) {
          __clear_cache(uVar4,local_40);
        }
        else {
          uVar12 = (uVar4 >> 0xc) + 1;
          uVar14 = uVar12 * 0x1000;
          __clear_cache(uVar4,uVar14);
          if (uVar12 < uVar19) {
            do {
              uVar12 = uVar12 + 1;
              __clear_cache(uVar14,uVar14 + 0x1000);
              uVar14 = uVar14 + 0x1000;
            } while (uVar12 < uVar19);
            uVar14 = local_40 & 0xfffff000;
          }
          __clear_cache(uVar14,local_40);
        }
      }
      uVar4 = *(uint *)(iVar13 + 0x1420014);
      if (uVar2 != uVar4) {
        uVar14 = uVar2 >> 0xc;
        uVar19 = uVar4;
        if (uVar4 >> 0xc != uVar14) {
          uVar12 = (uVar4 >> 0xc) + 1;
          uVar19 = uVar12 * 0x1000;
          __clear_cache(uVar4,uVar19);
          if (uVar12 < uVar14) {
            do {
              uVar12 = uVar12 + 1;
              __clear_cache(uVar19,uVar19 + 0x1000);
              uVar19 = uVar19 + 0x1000;
            } while (uVar12 < uVar14);
            uVar19 = uVar2 & 0xfffff000;
          }
        }
        __clear_cache(uVar19,uVar2);
      }
      uVar2 = *(uint *)(iVar13 + 0x142000c);
      if (uVar10 != uVar2) {
        uVar19 = uVar10 >> 0xc;
        uVar4 = uVar2;
        if (uVar2 >> 0xc != uVar19) {
          uVar14 = (uVar2 >> 0xc) + 1;
          uVar4 = uVar14 * 0x1000;
          __clear_cache(uVar2,uVar4);
          if (uVar14 < uVar19) {
            do {
              uVar14 = uVar14 + 1;
              __clear_cache(uVar4,uVar4 + 0x1000);
              uVar4 = uVar4 + 0x1000;
            } while (uVar14 < uVar19);
            uVar4 = uVar10 & 0xfffff000;
          }
        }
        __clear_cache(uVar4,uVar10);
      }
      *(int *)(iVar5 + 0x1088) = iVar9;
      *(int *)(iVar5 + 0x2320) = iVar9;
      *(undefined4 *)(iVar5 + 0x88) = 8;
      if (*(char *)(iVar5 + 0x2104) != '\x01') goto LAB_0806fe88;
    }
    else {
      *(int *)(iVar5 + 0x1088) = iVar9;
      *(int *)(iVar5 + 0x2320) = iVar9;
      *(undefined4 *)(iVar5 + 0x88) = 8;
    }
    iVar9 = *(int *)(*(int *)(iVar5 + 0x2314) + 0x18);
    if (iVar9 != 0) {
      *(int *)(iVar5 + 0x1098) = iVar9;
      *(undefined4 *)(iVar5 + 0x98) = 0x18;
      goto LAB_080703e8;
    }
    iVar13 = *(int *)(iVar5 + 0x2084);
    local_44 = *(uint *)(iVar13 + 0x1420004);
    local_48 = *(uint *)(iVar13 + 0x1420008);
    uVar2 = *(uint *)(iVar13 + 0x1420000);
    uVar19 = *(uint *)(iVar13 + 0x1420010);
    uVar4 = *(uint *)(iVar13 + 0x1420014);
    uVar10 = *(uint *)(iVar13 + 0x142000c);
    *(int *)(iVar13 + 0x14da0e4) = iVar13 + 0x13a0000;
    *(undefined4 *)(iVar13 + 0x1480018) = 0;
    *(undefined4 *)(iVar13 + 0x14a001c) = 0;
    iVar9 = FUN_0806de38(iVar5,0x18);
    if (iVar9 != 0) {
      *(int *)(*(int *)(iVar5 + 0x2314) + 0x18) = iVar9;
      uVar14 = (uint)*(byte *)(*(int *)(iVar5 + 0x2084) + 0x14b8026);
      if (8 < uVar14) {
        *(byte *)(*(int *)(iVar5 + 0x2084) + 0x14b8026) =
             ~((byte)~(byte)((uVar14 << 0x19) >> 0x18) >> 1);
      }
    }
  }
  else {
    iVar13 = *(int *)(iVar5 + 0x2084);
    if (*(int *)(iVar13 + 0x1380020) == 8) {
      uVar3 = *(undefined4 *)(iVar13 + 0x1380024);
      *(undefined4 *)(iVar5 + 0x88) = 8;
      *(undefined4 *)(iVar5 + 0x1088) = uVar3;
    }
    else if (*(int *)(iVar13 + 0x1380028) == 8) {
      uVar3 = *(undefined4 *)(iVar13 + 0x138002c);
      *(undefined4 *)(iVar5 + 0x88) = 8;
      *(undefined4 *)(iVar5 + 0x1088) = uVar3;
    }
    else {
      if (*(int *)(iVar13 + 0x138002c) == 0) {
LAB_0806f9ac:
        local_40 = *(uint *)(iVar13 + 0x1420004);
        local_48 = *(uint *)(iVar13 + 0x1420010);
        local_44 = *(uint *)(iVar13 + 0x1420008);
        uVar4 = *(uint *)(iVar13 + 0x1420000);
        uVar2 = *(uint *)(iVar13 + 0x1420014);
        uVar10 = *(uint *)(iVar13 + 0x142000c);
        *(int *)(iVar13 + 0x14da0e4) = iVar13 + 0x13a0000;
        *(undefined4 *)(iVar13 + 0x1480018) = 0;
        *(undefined4 *)(iVar13 + 0x14a001c) = 0;
        iVar9 = FUN_0806de38(iVar5,8);
        if (iVar9 != 0) {
          if (*(int *)(iVar13 + 0x1380024) == 0) {
            *(undefined4 *)(iVar13 + 0x1380020) = 8;
            *(int *)(iVar13 + 0x1380024) = iVar9;
          }
          else if (*(int *)(iVar13 + 0x138002c) == 0) {
            *(undefined4 *)(iVar13 + 0x1380028) = 8;
            *(int *)(iVar13 + 0x138002c) = iVar9;
          }
          else {
            ppiVar8 = *(int ***)(*(int *)(iVar13 + 0x138002c) + -4);
            for (ppiVar1 = (int **)*ppiVar8; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
              ppiVar8 = ppiVar1;
            }
            *ppiVar8 = (int *)*(int *)(iVar9 + -4);
          }
        }
        goto LAB_0806fa6c;
      }
      piVar11 = *(int **)(*(int *)(iVar13 + 0x138002c) + -4);
      do {
        piVar11 = (int *)*piVar11;
        if (piVar11 == (int *)0x0) goto LAB_0806f9ac;
      } while (piVar11[1] != 8);
      uVar3 = piVar11[2];
      *(undefined4 *)(iVar5 + 0x88) = 8;
      *(undefined4 *)(iVar5 + 0x1088) = uVar3;
    }
    *(undefined4 *)(iVar5 + 0x2320) = uVar3;
LAB_0806fe88:
    iVar13 = *(int *)(iVar5 + 0x2084);
    if (*(int *)(iVar13 + 0x1380060) == 0x18) {
      iVar9 = *(int *)(iVar13 + 0x1380064);
      *(undefined4 *)(iVar5 + 0x98) = 0x18;
      *(int *)(iVar5 + 0x1098) = iVar9;
      goto LAB_080703e8;
    }
    if (*(int *)(iVar13 + 0x1380068) == 0x18) {
      iVar9 = *(int *)(iVar13 + 0x138006c);
      *(undefined4 *)(iVar5 + 0x98) = 0x18;
      *(int *)(iVar5 + 0x1098) = iVar9;
      goto LAB_080703e8;
    }
    if (*(int *)(iVar13 + 0x138006c) != 0) {
      piVar11 = *(int **)(*(int *)(iVar13 + 0x138006c) + -4);
      do {
        piVar11 = (int *)*piVar11;
        if (piVar11 == (int *)0x0) goto LAB_0806feec;
      } while (piVar11[1] != 0x18);
      iVar9 = piVar11[2];
      *(undefined4 *)(iVar5 + 0x98) = 0x18;
      *(int *)(iVar5 + 0x1098) = iVar9;
      goto LAB_080703e8;
    }
LAB_0806feec:
    local_44 = *(uint *)(iVar13 + 0x1420004);
    uVar2 = *(uint *)(iVar13 + 0x1420000);
    local_48 = *(uint *)(iVar13 + 0x1420008);
    uVar19 = *(uint *)(iVar13 + 0x1420010);
    uVar10 = *(uint *)(iVar13 + 0x142000c);
    uVar4 = *(uint *)(iVar13 + 0x1420014);
    *(int *)(iVar13 + 0x14da0e4) = iVar13 + 0x13a0000;
    *(undefined4 *)(iVar13 + 0x1480018) = 0;
    *(undefined4 *)(iVar13 + 0x14a001c) = 0;
    iVar9 = FUN_0806de38(iVar5,0x18);
    if (iVar9 != 0) {
      if (*(int *)(iVar13 + 0x1380064) == 0) {
        *(undefined4 *)(iVar13 + 0x1380060) = 0x18;
        *(int *)(iVar13 + 0x1380064) = iVar9;
      }
      else if (*(int *)(iVar13 + 0x138006c) == 0) {
        *(undefined4 *)(iVar13 + 0x1380068) = 0x18;
        *(int *)(iVar13 + 0x138006c) = iVar9;
      }
      else {
        ppiVar8 = *(int ***)(*(int *)(iVar13 + 0x138006c) + -4);
        for (ppiVar1 = (int **)*ppiVar8; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          ppiVar8 = ppiVar1;
        }
        *ppiVar8 = (int *)*(int *)(iVar9 + -4);
      }
    }
  }
  FUN_08089340(iVar5);
  uVar14 = *(uint *)(iVar13 + 0x1420000);
  if (uVar2 != uVar14) {
    uVar12 = uVar2 >> 0xc;
    uVar7 = uVar14 >> 0xc;
    if (uVar12 == uVar7) {
      __clear_cache(uVar2,uVar14);
    }
    else {
      uVar23 = uVar12 + 1;
      iVar20 = uVar23 * 0x1000;
      __clear_cache(uVar2,iVar20);
      uVar2 = uVar23;
      if (uVar23 < uVar7) {
        do {
          uVar2 = uVar2 + 1;
          __clear_cache(iVar20,iVar20 + 0x1000);
          iVar20 = iVar20 + 0x1000;
        } while (uVar2 < uVar7);
        iVar20 = ((uVar7 + 0xfffff + uVar23) - uVar12) * 0x1000;
      }
      __clear_cache(iVar20,uVar14);
    }
  }
  uVar2 = *(uint *)(iVar13 + 0x1420010);
  if (uVar19 != uVar2) {
    uVar14 = uVar19 >> 0xc;
    uVar12 = uVar2 >> 0xc;
    if (uVar14 == uVar12) {
      __clear_cache(uVar19,uVar2);
    }
    else {
      uVar7 = uVar14 + 1;
      iVar20 = uVar7 * 0x1000;
      __clear_cache(uVar19,iVar20);
      uVar19 = uVar7;
      if (uVar7 < uVar12) {
        do {
          uVar19 = uVar19 + 1;
          __clear_cache(iVar20,iVar20 + 0x1000);
          iVar20 = iVar20 + 0x1000;
        } while (uVar19 < uVar12);
        iVar20 = ((uVar12 + 0xfffff + uVar7) - uVar14) * 0x1000;
      }
      __clear_cache(iVar20,uVar2);
    }
  }
  uVar2 = *(uint *)(iVar13 + 0x1420008);
  if (local_48 != uVar2) {
    uVar14 = local_48 >> 0xc;
    uVar12 = uVar2 >> 0xc;
    uVar19 = local_48;
    if (uVar14 != uVar12) {
      uVar23 = uVar14 + 1;
      uVar19 = uVar23 * 0x1000;
      __clear_cache(local_48,uVar19);
      uVar7 = uVar23;
      if (uVar23 < uVar12) {
        do {
          uVar7 = uVar7 + 1;
          __clear_cache(uVar19,uVar19 + 0x1000);
          uVar19 = uVar19 + 0x1000;
        } while (uVar7 < uVar12);
        uVar19 = ((uVar12 + 0xfffff + uVar23) - uVar14) * 0x1000;
      }
    }
    __clear_cache(uVar19,uVar2);
  }
  uVar2 = *(uint *)(iVar13 + 0x1420004);
  if (local_44 != uVar2) {
    uVar19 = local_44 >> 0xc;
    if (uVar2 >> 0xc == uVar19) {
      __clear_cache(uVar2,local_44);
    }
    else {
      uVar12 = (uVar2 >> 0xc) + 1;
      uVar14 = uVar12 * 0x1000;
      __clear_cache(uVar2,uVar14);
      if (uVar12 < uVar19) {
        do {
          uVar12 = uVar12 + 1;
          __clear_cache(uVar14,uVar14 + 0x1000);
          uVar14 = uVar14 + 0x1000;
        } while (uVar12 < uVar19);
        uVar14 = local_44 & 0xfffff000;
      }
      __clear_cache(uVar14,local_44);
    }
  }
  uVar2 = *(uint *)(iVar13 + 0x1420014);
  if (uVar4 != uVar2) {
    uVar14 = uVar4 >> 0xc;
    uVar19 = uVar2;
    if (uVar2 >> 0xc != uVar14) {
      uVar12 = (uVar2 >> 0xc) + 1;
      uVar19 = uVar12 * 0x1000;
      __clear_cache(uVar2,uVar19);
      if (uVar12 < uVar14) {
        do {
          uVar12 = uVar12 + 1;
          __clear_cache(uVar19,uVar19 + 0x1000);
          uVar19 = uVar19 + 0x1000;
        } while (uVar12 < uVar14);
        uVar19 = uVar4 & 0xfffff000;
      }
    }
    __clear_cache(uVar19,uVar4);
  }
  uVar2 = *(uint *)(iVar13 + 0x142000c);
  if (uVar10 != uVar2) {
    uVar19 = uVar10 >> 0xc;
    uVar4 = uVar2;
    if (uVar2 >> 0xc != uVar19) {
      uVar14 = (uVar2 >> 0xc) + 1;
      uVar4 = uVar14 * 0x1000;
      __clear_cache(uVar2,uVar4);
      if (uVar14 < uVar19) {
        do {
          uVar14 = uVar14 + 1;
          __clear_cache(uVar4,uVar4 + 0x1000);
          uVar4 = uVar4 + 0x1000;
        } while (uVar14 < uVar19);
        uVar4 = uVar10 & 0xfffff000;
      }
    }
    __clear_cache(uVar4,uVar10);
  }
  *(int *)(iVar5 + 0x1098) = iVar9;
  *(undefined4 *)(iVar5 + 0x98) = 0x18;
LAB_080703e8:
  iVar13 = *(int *)(local_3c + 0x2304);
  *(int *)(iVar5 + 0x231c) = iVar9;
  uVar3 = FUN_0806d394(local_3c,*(int *)(iVar13 + 8) + 8);
  iVar5 = *(int *)(*(int *)(local_3c + 0x2304) + 8);
  *(undefined4 *)(local_3c + 0x2320) = uVar3;
  uVar3 = FUN_0806d394(local_3c,iVar5 + 0x18);
  *(undefined4 *)(local_3c + 0x231c) = uVar3;
  return 1;
}


