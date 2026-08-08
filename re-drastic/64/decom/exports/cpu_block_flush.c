/*
 * Ghidra decompilation
 *
 * Function : cpu_block_flush
 * Address  : 0012e9a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpu_block_flush(long param_1,uint param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined auStack_20 [8];
  undefined auStack_18 [8];
  undefined auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar20 = *(long *)(param_1 + 0x22a0);
  lVar19 = *(long *)(param_1 + 0x2260);
  get_ticks_us(auStack_20,0);
  memset((void *)(param_1 + 0x80),0,0x2000);
  memset((void *)(lVar20 + 0x80),0,0x2000);
  iVar8 = *(int *)(param_1 + 0x210c);
  if (param_2 >> 0x18 == 2) {
LAB_0012ecc4:
    if (iVar8 == 1) {
      lVar23 = *(long *)(param_1 + 0x2088);
      lVar21 = *(long *)(param_1 + 0x2260);
LAB_0012ef48:
      memset((void *)(lVar21 + 0xef1b8),0,0x800);
      lVar21 = *(long *)(param_1 + 0x2088);
      puVar12 = *(ulong **)(param_1 + 0x2270);
      puVar1 = (ulong *)(nds_system + lVar21 + 0xfde038);
      puVar13 = (ulong *)(nds_system + lVar21 + 0xfdc038);
      if ((puVar1 > puVar12 && puVar13 <= puVar12 + 0x1000) &&
          (puVar1 <= puVar12 || puVar12 + 0x1000 != puVar13)) {
        lVar10 = 0;
        do {
          *(undefined4 *)((long)puVar12 + lVar10 * 4) = 0;
          *(byte *)((long)puVar13 + lVar10) = *(byte *)((long)puVar13 + lVar10) & 0x7f;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x2000);
      }
      else {
        do {
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar12[3] = 0;
          puVar12[2] = 0;
          puVar12[5] = 0;
          puVar12[4] = 0;
          puVar12[7] = 0;
          puVar12[6] = 0;
          puVar12 = puVar12 + 8;
          uVar24 = *puVar13 & 0xffffffffffffff7f;
          uVar25 = CONCAT62((int6)(uVar24 >> 0x10),CONCAT11((char)(*puVar13 >> 8),(char)uVar24)) &
                   0xffffffffffff7fff;
          uVar15 = CONCAT53((int5)(uVar25 >> 0x18),CONCAT12((char)(uVar24 >> 0x10),(short)uVar25)) &
                   0xffffffffff7fffff;
          uVar24 = CONCAT44((int)(uVar15 >> 0x20),CONCAT13((char)(uVar25 >> 0x18),(int3)uVar15)) &
                   0xffffffff7fffffff;
          uVar15 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar15 >> 0x20),(int)uVar24)) &
                   0xffffff7fffffffff;
          uVar24 = CONCAT26((short)(uVar15 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar15)) &
                   0xffff7fffffffffff;
          uVar27 = puVar13[1] & 0xffffffffffffff7f;
          uVar25 = CONCAT62((int6)(uVar27 >> 0x10),CONCAT11((char)(puVar13[1] >> 8),(char)uVar27)) &
                   0xffffffffffff7fff;
          uVar27 = CONCAT53((int5)(uVar25 >> 0x18),CONCAT12((char)(uVar27 >> 0x10),(short)uVar25)) &
                   0xffffffffff7fffff;
          uVar25 = CONCAT44((int)(uVar27 >> 0x20),CONCAT13((char)(uVar25 >> 0x18),(int3)uVar27)) &
                   0xffffffff7fffffff;
          uVar27 = CONCAT35((int3)(uVar25 >> 0x28),CONCAT14((char)(uVar27 >> 0x20),(int)uVar25)) &
                   0xffffff7fffffffff;
          uVar25 = CONCAT26((short)(uVar27 >> 0x30),CONCAT15((char)(uVar25 >> 0x28),(int5)uVar27)) &
                   0xffff7fffffffffff;
          puVar14 = puVar13 + 2;
          puVar13[1] = CONCAT17((char)(uVar25 >> 0x38),CONCAT16((char)(uVar27 >> 0x30),(int6)uVar25)
                               ) & 0x7f7fffffffffffff;
          *puVar13 = CONCAT17((char)(uVar24 >> 0x38),CONCAT16((char)(uVar15 >> 0x30),(int6)uVar24))
                     & 0x7f7fffffffffffff;
          puVar13 = puVar14;
        } while (puVar1 != puVar14);
      }
      memset(*(void **)(param_1 + 0x2278),0,0x10000);
      *(undefined4 *)(nds_system + lVar21 + 0xffe138) = 0;
      translation_cache_flush_itcm(lVar23);
      if (param_2 < 0x2000000) {
        bVar7 = *(uint *)(param_1 + 0x23bc) < 0x2000000;
        goto LAB_0012ef0c;
      }
    }
    else {
      uVar9 = *(undefined8 *)(lVar20 + 0x2088);
      memset((void *)(*(long *)(lVar20 + 0x2260) + 0xef1b8),0,0x800);
      lVar21 = *(long *)(lVar20 + 0x2088);
      puVar12 = *(ulong **)(lVar20 + 0x2270);
      puVar13 = (ulong *)(nds_system + lVar21 + 0xfdc038);
      puVar1 = puVar12 + 0x1000;
      if (puVar13 < puVar1 && puVar12 < nds_system + lVar21 + 0xfde038) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puVar12 + lVar23 * 4) = 0;
          *(byte *)((long)puVar13 + lVar23) = *(byte *)((long)puVar13 + lVar23) & 0x7f;
          lVar23 = lVar23 + 1;
        } while (lVar23 != 0x2000);
      }
      else {
        do {
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar12[3] = 0;
          puVar12[2] = 0;
          puVar12[5] = 0;
          puVar12[4] = 0;
          puVar12[7] = 0;
          puVar12[6] = 0;
          puVar12 = puVar12 + 8;
          uVar24 = *puVar13 & 0xffffffffffffff7f;
          uVar15 = CONCAT62((int6)(uVar24 >> 0x10),CONCAT11((char)(*puVar13 >> 8),(char)uVar24)) &
                   0xffffffffffff7fff;
          uVar24 = CONCAT53((int5)(uVar15 >> 0x18),CONCAT12((char)(uVar24 >> 0x10),(short)uVar15)) &
                   0xffffffffff7fffff;
          uVar15 = CONCAT44((int)(uVar24 >> 0x20),CONCAT13((char)(uVar15 >> 0x18),(int3)uVar24)) &
                   0xffffffff7fffffff;
          uVar24 = CONCAT35((int3)(uVar15 >> 0x28),CONCAT14((char)(uVar24 >> 0x20),(int)uVar15)) &
                   0xffffff7fffffffff;
          uVar15 = CONCAT26((short)(uVar24 >> 0x30),CONCAT15((char)(uVar15 >> 0x28),(int5)uVar24)) &
                   0xffff7fffffffffff;
          uVar25 = puVar13[1] & 0xffffffffffffff7f;
          uVar27 = CONCAT62((int6)(uVar25 >> 0x10),CONCAT11((char)(puVar13[1] >> 8),(char)uVar25)) &
                   0xffffffffffff7fff;
          uVar25 = CONCAT53((int5)(uVar27 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar27)) &
                   0xffffffffff7fffff;
          uVar27 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar27 >> 0x18),(int3)uVar25)) &
                   0xffffffff7fffffff;
          uVar26 = CONCAT35((int3)(uVar27 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar27)) &
                   0xffffff7fffffffff;
          uVar25 = CONCAT26((short)(uVar26 >> 0x30),CONCAT15((char)(uVar27 >> 0x28),(int5)uVar26)) &
                   0xffff7fffffffffff;
          puVar13[1] = CONCAT17((char)(uVar25 >> 0x38),CONCAT16((char)(uVar26 >> 0x30),(int6)uVar25)
                               ) & 0x7f7fffffffffffff;
          *puVar13 = CONCAT17((char)(uVar15 >> 0x38),CONCAT16((char)(uVar24 >> 0x30),(int6)uVar15))
                     & 0x7f7fffffffffffff;
          puVar13 = puVar13 + 2;
        } while (puVar1 != puVar12);
      }
      memset(*(void **)(lVar20 + 0x2278),0,0x10000);
      *(undefined4 *)(nds_system + lVar21 + 0xffe138) = 0;
      translation_cache_flush_itcm(uVar9);
    }
    memset(nds_system + *(long *)(param_1 + 0x2088) + 0xe04000,0,0x80000);
    puVar17 = (uint *)(nds_system + param_1 + 0xb063e8);
    puVar12 = (ulong *)(param_1 + 0x23d0);
    if (*(int *)(param_1 + 0x210c) == 1) {
      puVar18 = (uint *)(nds_system + param_1 + 0xb0a3e8);
      do {
        puVar1 = puVar12;
        puVar5 = puVar17;
        for (uVar2 = *puVar18; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            puVar13 = puVar1;
            for (uVar3 = *puVar5; uVar3 != 0; uVar3 = uVar3 >> 1) {
              if ((uVar3 & 1) != 0) {
                uVar15 = *puVar13;
                uVar24 = uVar15 & 0x3fffffffffffffff;
                if (-1 < (long)uVar15) {
                  uVar24 = uVar15;
                }
                *puVar13 = uVar24;
              }
              puVar13 = puVar13 + 1;
            }
          }
          puVar1 = puVar1 + 0x20;
          puVar5 = puVar5 + 1;
        }
        puVar12 = puVar12 + 0x400;
        puVar17 = puVar17 + 0x20;
        puVar18 = puVar18 + 1;
      } while (puVar12 != (ulong *)(param_1 + 0x323d0));
      puVar17 = (uint *)(nds_system + lVar20 + 0xb063e8);
      puVar18 = (uint *)(nds_system + lVar20 + 0xb0a428);
      puVar12 = (ulong *)(lVar20 + 0x23d0);
      do {
        puVar1 = puVar12;
        puVar5 = puVar17;
        for (uVar2 = *puVar18; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            puVar13 = puVar1;
            for (uVar3 = *puVar5; uVar3 != 0; uVar3 = uVar3 >> 1) {
              if ((uVar3 & 1) != 0) {
                uVar15 = *puVar13;
                uVar24 = uVar15 & 0x3fffffffffffffff;
                if (-1 < (long)uVar15) {
                  uVar24 = uVar15;
                }
                *puVar13 = uVar24;
              }
              puVar13 = puVar13 + 1;
            }
          }
          puVar1 = puVar1 + 0x20;
          puVar5 = puVar5 + 1;
        }
        puVar12 = puVar12 + 0x400;
        puVar17 = puVar17 + 0x20;
        puVar18 = puVar18 + 1;
      } while ((ulong *)(lVar20 + 0x123d0) != puVar12);
    }
    else {
      puVar18 = (uint *)(nds_system + param_1 + 0xb0a428);
      do {
        puVar1 = puVar12;
        puVar5 = puVar17;
        for (uVar2 = *puVar18; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            puVar13 = puVar1;
            for (uVar3 = *puVar5; uVar3 != 0; uVar3 = uVar3 >> 1) {
              if ((uVar3 & 1) != 0) {
                uVar15 = *puVar13;
                uVar24 = uVar15 & 0x3fffffffffffffff;
                if (-1 < (long)uVar15) {
                  uVar24 = uVar15;
                }
                *puVar13 = uVar24;
              }
              puVar13 = puVar13 + 1;
            }
          }
          puVar1 = puVar1 + 0x20;
          puVar5 = puVar5 + 1;
        }
        puVar12 = puVar12 + 0x400;
        puVar17 = puVar17 + 0x20;
        puVar18 = puVar18 + 1;
      } while (puVar12 != (ulong *)(param_1 + 0x123d0));
      puVar17 = (uint *)(nds_system + lVar20 + 0xb063e8);
      puVar18 = (uint *)(nds_system + lVar20 + 0xb0a3e8);
      puVar12 = (ulong *)(lVar20 + 0x23d0);
      do {
        puVar1 = puVar12;
        puVar5 = puVar17;
        for (uVar2 = *puVar18; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            puVar13 = puVar1;
            for (uVar3 = *puVar5; uVar3 != 0; uVar3 = uVar3 >> 1) {
              if ((uVar3 & 1) != 0) {
                uVar15 = *puVar13;
                uVar24 = uVar15 & 0x3fffffffffffffff;
                if (-1 < (long)uVar15) {
                  uVar24 = uVar15;
                }
                *puVar13 = uVar24;
              }
              puVar13 = puVar13 + 1;
            }
          }
          puVar1 = puVar1 + 0x20;
          puVar5 = puVar5 + 1;
        }
        puVar12 = puVar12 + 0x400;
        puVar17 = puVar17 + 0x20;
        puVar18 = puVar18 + 1;
      } while (puVar12 != (ulong *)(lVar20 + 0x323d0));
    }
    puVar16 = (undefined8 *)(lVar19 + 0xaf1b0);
    puVar17 = (uint *)(lVar19 + 0xaf070);
    do {
      uVar2 = *puVar17;
      *puVar17 = 0;
      puVar11 = puVar16;
      for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          puVar11[6] = 0;
          puVar11[7] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          puVar11[10] = 0;
          puVar11[0xb] = 0;
          puVar11[0xc] = 0;
          puVar11[0xd] = 0;
          puVar11[0xe] = 0;
          puVar11[0xf] = 0;
        }
        puVar11 = puVar11 + 0x10;
      }
      puVar16 = puVar16 + 0x200;
      puVar17 = puVar17 + 1;
    } while ((undefined8 *)(lVar19 + 0xef1b0) != puVar16);
    puVar16 = (undefined8 *)(lVar19 + 0xef1b8);
    uVar2 = *(uint *)(lVar19 + 0xaf178);
    *(undefined4 *)(lVar19 + 0xaf178) = 0;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        *puVar16 = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar16[4] = 0;
        puVar16[5] = 0;
        puVar16[6] = 0;
        puVar16[7] = 0;
        puVar16[8] = 0;
        puVar16[9] = 0;
        puVar16[10] = 0;
        puVar16[0xb] = 0;
        puVar16[0xc] = 0;
        puVar16[0xd] = 0;
        puVar16[0xe] = 0;
        puVar16[0xf] = 0;
      }
      puVar16 = puVar16 + 0x10;
    }
    get_ticks_us(auStack_10);
    translation_cache_flush_main(*(undefined8 *)(param_1 + 0x2088));
    if ((*(long *)(lVar20 + 0x2298) != 0) &&
       ((uVar2 = *(uint *)(lVar20 + 0x23bc), uVar2 >> 0x18 == 2 ||
        (bVar7 = *(int *)(lVar20 + 0x210c) == 1,
        bVar7 && uVar2 < 0x1ffffff || bVar7 && uVar2 == 0x1ffffff)))) {
      *(undefined4 *)(lVar20 + 0x23bc) =
           *(undefined4 *)
            (*(long *)(lVar20 + 0x2088) + (ulong)*(uint *)(*(long *)(lVar20 + 0x2298) + -0xc) + 4);
      lVar19 = cpu_block_lookup_base(lVar20);
      bVar7 = true;
      *(long *)(lVar20 + 0x2298) = lVar19 + 8;
      goto LAB_0012ef0c;
    }
  }
  else {
    lVar23 = *(long *)(param_1 + 0x2088);
    lVar21 = *(long *)(param_1 + 0x2260);
    if (iVar8 == 1 && param_2 < 0x2000000 || iVar8 == 1 && param_2 == 0x2000000) goto LAB_0012ef48;
    lVar22 = *(long *)(param_1 + 0x22a0);
    get_ticks_us(auStack_18);
    lVar10 = param_1;
    lVar4 = lVar22;
    if (*(int *)(param_1 + 0x210c) == 1) {
      lVar10 = lVar22;
      lVar4 = param_1;
    }
    memset(nds_system + lVar23 + 0xe84000,0,0x20000);
    puVar17 = (uint *)(nds_system + param_1 + 0xb063e8);
    puVar18 = (uint *)(nds_system + param_1 + 0xb0a448);
    puVar12 = (ulong *)(param_1 + 0x23d0);
    do {
      puVar1 = puVar12;
      puVar5 = puVar17;
      for (uVar2 = *puVar18; uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          puVar13 = puVar1;
          for (uVar3 = *puVar5; uVar3 != 0; uVar3 = uVar3 >> 1) {
            if ((uVar3 & 1) != 0) {
              uVar15 = *puVar13;
              uVar24 = uVar15 & 0x3fffffffffffffff;
              if (-1 < (long)uVar15) {
                uVar24 = uVar15;
              }
              *puVar13 = uVar24;
            }
            puVar13 = puVar13 + 1;
          }
        }
        puVar1 = puVar1 + 0x20;
        puVar5 = puVar5 + 1;
      }
      puVar12 = puVar12 + 0x400;
      puVar17 = puVar17 + 0x20;
      puVar18 = puVar18 + 1;
    } while (puVar12 != (ulong *)(param_1 + 0xd23d0));
    puVar17 = (uint *)(nds_system + lVar22 + 0xb063e8);
    puVar18 = (uint *)(nds_system + lVar22 + 0xb0a448);
    puVar12 = (ulong *)(lVar22 + 0x23d0);
    do {
      puVar1 = puVar12;
      puVar5 = puVar17;
      for (uVar2 = *puVar18; uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          puVar13 = puVar1;
          for (uVar3 = *puVar5; uVar3 != 0; uVar3 = uVar3 >> 1) {
            if ((uVar3 & 1) != 0) {
              uVar15 = *puVar13;
              uVar24 = uVar15 & 0x3fffffffffffffff;
              if (-1 < (long)uVar15) {
                uVar24 = uVar15;
              }
              *puVar13 = uVar24;
            }
            puVar13 = puVar13 + 1;
          }
        }
        puVar1 = puVar1 + 0x20;
        puVar5 = puVar5 + 1;
      }
      puVar12 = puVar12 + 0x400;
      puVar17 = puVar17 + 0x20;
      puVar18 = puVar18 + 1;
    } while (puVar12 != (ulong *)(lVar22 + 0xd23d0));
    puVar16 = (undefined8 *)(lVar21 + 0xef9b8);
    uVar2 = *(uint *)(lVar21 + 0xaf17c);
    *(undefined4 *)(lVar21 + 0xaf17c) = 0;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        *puVar16 = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar16[4] = 0;
        puVar16[5] = 0;
        puVar16[6] = 0;
        puVar16[7] = 0;
        puVar16[8] = 0;
        puVar16[9] = 0;
        puVar16[10] = 0;
        puVar16[0xb] = 0;
        puVar16[0xc] = 0;
        puVar16[0xd] = 0;
        puVar16[0xe] = 0;
        puVar16[0xf] = 0;
      }
      puVar16 = puVar16 + 0x10;
    }
    uVar2 = *(uint *)(lVar21 + 0xaf180);
    *(undefined4 *)(lVar21 + 0xaf180) = 0;
    puVar16 = (undefined8 *)(lVar21 + 0xf01b8);
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        *puVar16 = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar16[4] = 0;
        puVar16[5] = 0;
        puVar16[6] = 0;
        puVar16[7] = 0;
        puVar16[8] = 0;
        puVar16[9] = 0;
        puVar16[10] = 0;
        puVar16[0xb] = 0;
        puVar16[0xc] = 0;
        puVar16[0xd] = 0;
        puVar16[0xe] = 0;
        puVar16[0xf] = 0;
      }
      puVar16 = puVar16 + 0x10;
    }
    puVar16 = (undefined8 *)(lVar21 + 0xf11b8);
    puVar17 = (uint *)(lVar21 + 0xaf184);
    do {
      uVar2 = *puVar17;
      *puVar17 = 0;
      puVar11 = puVar16;
      for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          puVar11[6] = 0;
          puVar11[7] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          puVar11[10] = 0;
          puVar11[0xb] = 0;
          puVar11[0xc] = 0;
          puVar11[0xd] = 0;
          puVar11[0xe] = 0;
          puVar11[0xf] = 0;
        }
        puVar11 = puVar11 + 0x10;
      }
      puVar16 = puVar16 + 0x200;
      puVar17 = puVar17 + 1;
    } while (puVar16 != (undefined8 *)(lVar21 + 0xfc1b8));
    if (*(long *)(lVar21 + 0xfba38) != 0) {
      puVar11 = *(undefined8 **)(lVar21 + 0xef1b0);
      puVar17 = *(uint **)(lVar21 + 0xaf170);
      puVar16 = puVar11 + 0x40000;
      do {
        uVar2 = *puVar17;
        *puVar17 = 0;
        puVar6 = puVar11;
        for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = 0;
            puVar6[0xb] = 0;
            puVar6[0xc] = 0;
            puVar6[0xd] = 0;
            puVar6[0xe] = 0;
            puVar6[0xf] = 0;
          }
          puVar6 = puVar6 + 0x10;
        }
        puVar11 = puVar11 + 0x200;
        puVar17 = puVar17 + 1;
      } while (puVar16 != puVar11);
    }
    get_ticks_us(auStack_10);
    translation_cache_flush_alternate(*(undefined8 *)(param_1 + 0x2088));
    if (((*(long *)(lVar22 + 0x2298) != 0) &&
        (uVar2 = *(uint *)(lVar22 + 0x23bc), uVar2 >> 0x18 != 2)) &&
       (bVar7 = *(int *)(lVar22 + 0x210c) != 1,
       (bVar7 || 0x1ffffff < uVar2) && (bVar7 || uVar2 != 0x2000000))) {
      *(undefined4 *)(lVar22 + 0x23bc) =
           *(undefined4 *)
            (*(long *)(lVar22 + 0x2088) + (ulong)*(uint *)(*(long *)(lVar22 + 0x2298) + -0xc) + 4);
      lVar21 = cpu_block_lookup_base(lVar22);
      *(long *)(lVar22 + 0x2298) = lVar21 + 8;
    }
    uVar9 = cpu_block_lookup_base(lVar10,8);
    *(undefined8 *)(lVar10 + 0x2288) = uVar9;
    uVar9 = cpu_block_lookup_base(lVar10,0x18);
    iVar8 = *(int *)(*(long *)(lVar4 + 0x2250) + 0x10);
    *(undefined8 *)(lVar10 + 0x2280) = uVar9;
    uVar9 = cpu_block_lookup_base(lVar4,iVar8 + 8);
    iVar8 = *(int *)(*(long *)(lVar4 + 0x2250) + 0x10);
    *(undefined8 *)(lVar4 + 0x2288) = uVar9;
    uVar9 = cpu_block_lookup_base(lVar4,iVar8 + 0x18);
    *(undefined8 *)(lVar4 + 0x2280) = uVar9;
    if (param_2 == 0xffffffff) {
      iVar8 = *(int *)(param_1 + 0x210c);
      goto LAB_0012ecc4;
    }
  }
  bVar7 = true;
LAB_0012ef0c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar7,local_8 - ___stack_chk_guard,0);
}


