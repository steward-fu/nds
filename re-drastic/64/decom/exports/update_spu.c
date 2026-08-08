/*
 * Ghidra decompilation
 *
 * Function : update_spu
 * Address  : 0016cb20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_spu(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *__s;
  uint uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  ulong uVar12;
  undefined (*pauVar13) [16];
  long lVar14;
  undefined (*pauVar15) [16];
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined8 local_8010 [4086];
  undefined auStack_60 [88];
  long local_8;
  
  uVar20 = 0x4033198;
  lVar14 = (long)((int)*(undefined8 *)(param_1 + 8) * 0x400 -
                 (int)*(long *)(nds_system + param_1 + 0x10cbd00)) *
           (ulong)*(uint *)(nds_system + param_1 + 0x10cbd20);
  local_8 = ___stack_chk_guard;
  if (lVar14 < 0) goto LAB_0016cff4;
  uVar3 = *(uint *)(nds_system + param_1 + 0x10cb00c);
  iVar21 = (int)((ulong)lVar14 >> 0x20);
  uVar2 = iVar21 * 2;
  *(ulong *)(nds_system + param_1 + 0x10cbd00) =
       (ulong)(uint)(*(int *)(nds_system + param_1 + 0x10cbd18) * iVar21) +
       *(long *)(nds_system + param_1 + 0x10cbd00);
  if (uVar2 != 0) {
    uVar20 = (uVar2 - 1 >> 1) + 1;
    if (uVar2 - 1 < 2) {
      uVar17 = 0;
    }
    else {
      pauVar13 = (undefined (*) [16])local_8010;
      do {
        pauVar15 = pauVar13 + 1;
        *(undefined8 *)(*pauVar13 + 8) = 0;
        *(undefined8 *)*pauVar13 = 0;
        pauVar13 = pauVar15;
      } while (pauVar15 != (undefined (*) [16])local_8010 + (ulong)((uVar20 >> 1) - 1) + 1);
      uVar17 = (uVar20 & 0xfffffffe) * 2;
      if (uVar20 == (uVar20 & 0xfffffffe)) goto LAB_0016cc04;
    }
    *(undefined4 *)(*(undefined (*) [16])local_8010 + (ulong)uVar17 * 4) = 0;
    *(undefined4 *)(*(undefined (*) [16])local_8010 + (ulong)(uVar17 + 1) * 4) = 0;
  }
LAB_0016cc04:
  __s = nds_system + param_1 + 0x108b000;
  if (*(uint *)(nds_system + param_1 + 0x20d4450) < 2) {
    spu_render_samples(__s,(undefined (*) [16])local_8010,iVar21,uVar20,auStack_60,0);
  }
  spu_render_capture(__s,(undefined (*) [16])local_8010,iVar21,0);
  spu_render_capture(__s,(undefined (*) [16])local_8010,iVar21,1);
  uVar17 = 0x10000 - uVar3;
  uVar12 = (ulong)uVar3;
  uVar20 = uVar17 >> 1;
  if (iVar21 < (int)(uVar17 >> 1)) {
    if (*(int *)(param_1 + 0x85a08) == 0) {
      memset(__s + uVar12 * 2,0,
             -((ulong)(lVar14 >> 0x20) >> 0x1d & 1) & 0xffffffff00000000 |
             (lVar14 >> 0x20 & 0x3fffffffU) << 2);
      *(uint *)(nds_system + param_1 + 0x10cb00c) = uVar3 + uVar2;
      goto LAB_0016cff4;
    }
    if (uVar2 != 0) {
      if (uVar2 - 1 < 7) {
        uVar20 = 0;
      }
      else {
        pauVar13 = (undefined (*) [16])local_8010;
        puVar16 = (undefined8 *)(param_1 + (uVar12 + 0xac3800) * 2);
        do {
          auVar28 = *pauVar13;
          auVar23 = pauVar13[1];
          pauVar13 = pauVar13 + 2;
          auVar30._0_4_ = auVar28._0_4_ >> 0xc;
          auVar30._4_4_ = auVar28._4_4_ >> 0xc;
          auVar30._8_4_ = auVar28._8_4_ >> 0xc;
          auVar30._12_4_ = auVar28._12_4_ >> 0xc;
          auVar25._0_4_ = auVar23._0_4_ >> 0xc;
          auVar25._4_4_ = auVar23._4_4_ >> 0xc;
          auVar25._8_4_ = auVar23._8_4_ >> 0xc;
          auVar25._12_4_ = auVar23._12_4_ >> 0xc;
          auVar26._8_4_ = 0xffff8000;
          auVar26._0_8_ = 0xffff8000ffff8000;
          auVar26._12_4_ = 0xffff8000;
          auVar28 = NEON_smax(auVar30,auVar26,4);
          auVar31._8_4_ = 0xffff8000;
          auVar31._0_8_ = 0xffff8000ffff8000;
          auVar31._12_4_ = 0xffff8000;
          auVar26 = NEON_smax(auVar25,auVar31,4);
          auVar23._8_4_ = 0x7fff;
          auVar23._0_8_ = 0x7fff00007fff;
          auVar23._12_4_ = 0x7fff;
          auVar31 = NEON_smin(auVar28,auVar23,4);
          auVar28._8_4_ = 0x7fff;
          auVar28._0_8_ = 0x7fff00007fff;
          auVar28._12_4_ = 0x7fff;
          auVar23 = NEON_smin(auVar26,auVar28,4);
          puVar16[1] = CONCAT26(auVar23._12_2_,
                                CONCAT24(auVar23._8_2_,CONCAT22(auVar23._4_2_,auVar23._0_2_)));
          *puVar16 = CONCAT26(auVar31._12_2_,
                              CONCAT24(auVar31._8_2_,CONCAT22(auVar31._4_2_,auVar31._0_2_)));
          puVar16 = puVar16 + 2;
        } while (pauVar13 != (undefined (*) [16])local_8010 + ((ulong)((uVar2 >> 3) - 1) + 1) * 2);
        uVar20 = uVar2 & 0xfffffff8;
        if ((uVar2 & 7) == 0) goto LAB_0016d1e4;
      }
      uVar17 = uVar20 + 1;
      iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar20 * 4) >> 0xc;
      if (iVar21 < -0x8000) {
        iVar21 = -0x8000;
      }
      if (0x7fff < iVar21) {
        iVar21 = 0x7fff;
      }
      *(short *)(__s + (uVar20 + uVar12) * 2) = (short)iVar21;
      if (uVar17 < uVar2) {
        uVar1 = uVar20 + 2;
        iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar17 * 4) >> 0xc;
        if (iVar21 < -0x8000) {
          iVar21 = -0x8000;
        }
        if (0x7fff < iVar21) {
          iVar21 = 0x7fff;
        }
        *(short *)(__s + (uVar17 + uVar12) * 2) = (short)iVar21;
        if (uVar1 < uVar2) {
          uVar17 = uVar20 + 3;
          iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar1 * 4) >> 0xc;
          if (iVar21 < -0x8000) {
            iVar21 = -0x8000;
          }
          if (0x7fff < iVar21) {
            iVar21 = 0x7fff;
          }
          *(short *)(__s + (uVar1 + uVar12) * 2) = (short)iVar21;
          if (uVar17 < uVar2) {
            uVar1 = uVar20 + 4;
            iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar17 * 4) >> 0xc;
            if (iVar21 < -0x8000) {
              iVar21 = -0x8000;
            }
            if (0x7fff < iVar21) {
              iVar21 = 0x7fff;
            }
            *(short *)(__s + (uVar17 + uVar12) * 2) = (short)iVar21;
            if (uVar1 < uVar2) {
              uVar17 = uVar20 + 5;
              iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar1 * 4) >> 0xc;
              if (iVar21 < -0x8000) {
                iVar21 = -0x8000;
              }
              if (0x7fff < iVar21) {
                iVar21 = 0x7fff;
              }
              *(short *)(__s + (uVar1 + uVar12) * 2) = (short)iVar21;
              if (uVar17 < uVar2) {
                uVar20 = uVar20 + 6;
                iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar17 * 4) >> 0xc;
                if (iVar21 < -0x8000) {
                  iVar21 = -0x8000;
                }
                if (0x7fff < iVar21) {
                  iVar21 = 0x7fff;
                }
                *(short *)(__s + (uVar17 + uVar12) * 2) = (short)iVar21;
                if (uVar20 < uVar2) {
                  iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar20 * 4) >> 0xc;
                  if (iVar21 < -0x8000) {
                    iVar21 = -0x8000;
                  }
                  if (0x7fff < iVar21) {
                    iVar21 = 0x7fff;
                  }
                  *(short *)(__s + (uVar20 + uVar12) * 2) = (short)iVar21;
                }
              }
            }
          }
        }
      }
    }
LAB_0016d1e4:
    *(uint *)(nds_system + param_1 + 0x10cb00c) = uVar3 + uVar2;
    goto LAB_0016cff4;
  }
  uVar3 = (iVar21 - uVar20) * 2;
  if (*(int *)(param_1 + 0x85a08) == 0) {
    memset(__s + uVar12 * 2,0,(long)(int)(uVar20 << 2));
    memset(__s,0,(ulong)((iVar21 - uVar20) * 4));
    *(uint *)(nds_system + param_1 + 0x10cb00c) = uVar3;
    goto LAB_0016cff4;
  }
  uVar2 = uVar17 & 0xfffffffe;
  if (uVar20 != 0) {
    if (uVar2 - 1 < 7) {
      uVar20 = 0;
    }
    else {
      puVar16 = (undefined8 *)(param_1 + (uVar12 + 0xac3800) * 2);
      pauVar13 = (undefined (*) [16])local_8010;
      puVar18 = puVar16;
      do {
        auVar28 = *pauVar13;
        auVar23 = pauVar13[1];
        pauVar13 = pauVar13 + 2;
        auVar27._0_4_ = auVar28._0_4_ >> 0xc;
        auVar27._4_4_ = auVar28._4_4_ >> 0xc;
        auVar27._8_4_ = auVar28._8_4_ >> 0xc;
        auVar27._12_4_ = auVar28._12_4_ >> 0xc;
        auVar22._0_4_ = auVar23._0_4_ >> 0xc;
        auVar22._4_4_ = auVar23._4_4_ >> 0xc;
        auVar22._8_4_ = auVar23._8_4_ >> 0xc;
        auVar22._12_4_ = auVar23._12_4_ >> 0xc;
        auVar8._8_4_ = 0xffff8000;
        auVar8._0_8_ = 0xffff8000ffff8000;
        auVar8._12_4_ = 0xffff8000;
        auVar28 = NEON_smax(auVar27,auVar8,4);
        auVar9._8_4_ = 0xffff8000;
        auVar9._0_8_ = 0xffff8000ffff8000;
        auVar9._12_4_ = 0xffff8000;
        auVar23 = NEON_smax(auVar22,auVar9,4);
        auVar4._8_4_ = 0x7fff;
        auVar4._0_8_ = 0x7fff00007fff;
        auVar4._12_4_ = 0x7fff;
        auVar28 = NEON_smin(auVar28,auVar4,4);
        auVar5._8_4_ = 0x7fff;
        auVar5._0_8_ = 0x7fff00007fff;
        auVar5._12_4_ = 0x7fff;
        auVar23 = NEON_smin(auVar23,auVar5,4);
        puVar19 = puVar18 + 2;
        puVar18[1] = CONCAT26(auVar23._12_2_,
                              CONCAT24(auVar23._8_2_,CONCAT22(auVar23._4_2_,auVar23._0_2_)));
        *puVar18 = CONCAT26(auVar28._12_2_,
                            CONCAT24(auVar28._8_2_,CONCAT22(auVar28._4_2_,auVar28._0_2_)));
        puVar18 = puVar19;
      } while (puVar19 != puVar16 + (ulong)(uVar17 >> 3) * 2);
      uVar20 = uVar17 & 0xfffffff8;
      if ((uVar17 & 6) == 0) goto LAB_0016ce24;
    }
    uVar17 = uVar20 + 1;
    iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar20 * 4) >> 0xc;
    if (iVar21 < -0x8000) {
      iVar21 = -0x8000;
    }
    if (0x7fff < iVar21) {
      iVar21 = 0x7fff;
    }
    *(short *)(__s + (uVar20 + uVar12) * 2) = (short)iVar21;
    if (uVar17 < uVar2) {
      uVar1 = uVar20 + 2;
      iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar17 * 4) >> 0xc;
      if (iVar21 < -0x8000) {
        iVar21 = -0x8000;
      }
      if (0x7fff < iVar21) {
        iVar21 = 0x7fff;
      }
      *(short *)(__s + (uVar17 + uVar12) * 2) = (short)iVar21;
      if (uVar1 < uVar2) {
        uVar17 = uVar20 + 3;
        iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar1 * 4) >> 0xc;
        if (iVar21 < -0x8000) {
          iVar21 = -0x8000;
        }
        if (0x7fff < iVar21) {
          iVar21 = 0x7fff;
        }
        *(short *)(__s + (uVar1 + uVar12) * 2) = (short)iVar21;
        if (uVar17 < uVar2) {
          uVar1 = uVar20 + 4;
          iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar17 * 4) >> 0xc;
          if (iVar21 < -0x8000) {
            iVar21 = -0x8000;
          }
          if (0x7fff < iVar21) {
            iVar21 = 0x7fff;
          }
          *(short *)(__s + (uVar17 + uVar12) * 2) = (short)iVar21;
          if (uVar1 < uVar2) {
            uVar17 = uVar20 + 5;
            iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar1 * 4) >> 0xc;
            if (iVar21 < -0x8000) {
              iVar21 = -0x8000;
            }
            if (0x7fff < iVar21) {
              iVar21 = 0x7fff;
            }
            *(short *)(__s + (uVar1 + uVar12) * 2) = (short)iVar21;
            if (uVar17 < uVar2) {
              uVar20 = uVar20 + 6;
              iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar17 * 4) >> 0xc;
              if (iVar21 < -0x8000) {
                iVar21 = -0x8000;
              }
              if (0x7fff < iVar21) {
                iVar21 = 0x7fff;
              }
              *(short *)(__s + (uVar17 + uVar12) * 2) = (short)iVar21;
              if (uVar20 < uVar2) {
                iVar21 = *(int *)(*(undefined (*) [16])local_8010 + (ulong)uVar20 * 4) >> 0xc;
                if (iVar21 < -0x8000) {
                  iVar21 = -0x8000;
                }
                if (0x7fff < iVar21) {
                  iVar21 = 0x7fff;
                }
                *(short *)(__s + (uVar20 + uVar12) * 2) = (short)iVar21;
              }
            }
          }
        }
      }
    }
  }
LAB_0016ce24:
  lVar14 = (long)(int)uVar2;
  if (uVar3 != 0) {
    if (uVar3 - 1 < 7) {
      uVar20 = 0;
    }
    else {
      pauVar13 = (undefined (*) [16])(*(undefined (*) [16])local_8010 + lVar14 * 4);
      puVar16 = (undefined8 *)(nds_system + param_1 + 0x108b000);
      do {
        auVar28 = *pauVar13;
        auVar23 = pauVar13[1];
        pauVar13 = pauVar13 + 2;
        auVar29._0_4_ = auVar28._0_4_ >> 0xc;
        auVar29._4_4_ = auVar28._4_4_ >> 0xc;
        auVar29._8_4_ = auVar28._8_4_ >> 0xc;
        auVar29._12_4_ = auVar28._12_4_ >> 0xc;
        auVar24._0_4_ = auVar23._0_4_ >> 0xc;
        auVar24._4_4_ = auVar23._4_4_ >> 0xc;
        auVar24._8_4_ = auVar23._8_4_ >> 0xc;
        auVar24._12_4_ = auVar23._12_4_ >> 0xc;
        auVar10._8_4_ = 0xffff8000;
        auVar10._0_8_ = 0xffff8000ffff8000;
        auVar10._12_4_ = 0xffff8000;
        auVar28 = NEON_smax(auVar29,auVar10,4);
        auVar11._8_4_ = 0xffff8000;
        auVar11._0_8_ = 0xffff8000ffff8000;
        auVar11._12_4_ = 0xffff8000;
        auVar23 = NEON_smax(auVar24,auVar11,4);
        auVar6._8_4_ = 0x7fff;
        auVar6._0_8_ = 0x7fff00007fff;
        auVar6._12_4_ = 0x7fff;
        auVar28 = NEON_smin(auVar28,auVar6,4);
        auVar7._8_4_ = 0x7fff;
        auVar7._0_8_ = 0x7fff00007fff;
        auVar7._12_4_ = 0x7fff;
        auVar23 = NEON_smin(auVar23,auVar7,4);
        puVar18 = puVar16 + 2;
        puVar16[1] = CONCAT26(auVar23._12_2_,
                              CONCAT24(auVar23._8_2_,CONCAT22(auVar23._4_2_,auVar23._0_2_)));
        *puVar16 = CONCAT26(auVar28._12_2_,
                            CONCAT24(auVar28._8_2_,CONCAT22(auVar28._4_2_,auVar28._0_2_)));
        puVar16 = puVar18;
      } while (puVar18 != (undefined8 *)(param_1 + 0x1587010 + (ulong)((uVar3 >> 3) - 1) * 0x10));
      uVar20 = uVar3 & 0xfffffff8;
      if ((uVar3 & 7) == 0) goto LAB_0016cfdc;
    }
    uVar2 = uVar20 + 1;
    iVar21 = *(int *)(*(undefined (*) [16])local_8010 + ((ulong)uVar20 + lVar14) * 4) >> 0xc;
    if (iVar21 < -0x8000) {
      iVar21 = -0x8000;
    }
    if (0x7fff < iVar21) {
      iVar21 = 0x7fff;
    }
    *(short *)(__s + (ulong)uVar20 * 2) = (short)iVar21;
    if (uVar2 < uVar3) {
      uVar17 = uVar20 + 2;
      iVar21 = *(int *)(*(undefined (*) [16])local_8010 + ((ulong)uVar2 + lVar14) * 4) >> 0xc;
      if (iVar21 < -0x8000) {
        iVar21 = -0x8000;
      }
      if (0x7fff < iVar21) {
        iVar21 = 0x7fff;
      }
      *(short *)(__s + (ulong)uVar2 * 2) = (short)iVar21;
      if (uVar17 < uVar3) {
        uVar2 = uVar20 + 3;
        iVar21 = *(int *)(*(undefined (*) [16])local_8010 + ((ulong)uVar17 + lVar14) * 4) >> 0xc;
        if (iVar21 < -0x8000) {
          iVar21 = -0x8000;
        }
        if (0x7fff < iVar21) {
          iVar21 = 0x7fff;
        }
        *(short *)(__s + (ulong)uVar17 * 2) = (short)iVar21;
        if (uVar2 < uVar3) {
          uVar17 = uVar20 + 4;
          iVar21 = *(int *)(*(undefined (*) [16])local_8010 + ((ulong)uVar2 + lVar14) * 4) >> 0xc;
          if (iVar21 < -0x8000) {
            iVar21 = -0x8000;
          }
          if (0x7fff < iVar21) {
            iVar21 = 0x7fff;
          }
          *(short *)(__s + (ulong)uVar2 * 2) = (short)iVar21;
          if (uVar17 < uVar3) {
            uVar2 = uVar20 + 5;
            iVar21 = *(int *)(*(undefined (*) [16])local_8010 + ((ulong)uVar17 + lVar14) * 4) >> 0xc
            ;
            if (iVar21 < -0x8000) {
              iVar21 = -0x8000;
            }
            if (0x7fff < iVar21) {
              iVar21 = 0x7fff;
            }
            *(short *)(__s + (ulong)uVar17 * 2) = (short)iVar21;
            if (uVar2 < uVar3) {
              uVar20 = uVar20 + 6;
              iVar21 = *(int *)(*(undefined (*) [16])local_8010 + ((ulong)uVar2 + lVar14) * 4) >>
                       0xc;
              if (iVar21 < -0x8000) {
                iVar21 = -0x8000;
              }
              if (0x7fff < iVar21) {
                iVar21 = 0x7fff;
              }
              *(short *)(__s + (ulong)uVar2 * 2) = (short)iVar21;
              if (uVar20 < uVar3) {
                iVar21 = *(int *)(*(undefined (*) [16])local_8010 + ((ulong)uVar20 + lVar14) * 4) >>
                         0xc;
                if (iVar21 < -0x8000) {
                  iVar21 = -0x8000;
                }
                if (0x7fff < iVar21) {
                  iVar21 = 0x7fff;
                }
                *(short *)(__s + (ulong)uVar20 * 2) = (short)iVar21;
              }
            }
          }
        }
      }
    }
  }
LAB_0016cfdc:
  *(uint *)(nds_system + param_1 + 0x10cb00c) = uVar3;
LAB_0016cff4:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auStack_60,local_8 - ___stack_chk_guard,0);
}


