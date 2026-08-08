/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_equal_c
 * Address  : 001446c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_depth_compare_equal_c
               (byte *param_1,undefined (*param_2) [16],undefined (*param_3) [16],uint param_4,
               int *param_5)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined auVar8 [16];
  bool bVar9;
  byte bVar10;
  long lVar11;
  undefined (*pauVar12) [16];
  undefined (*pauVar13) [16];
  byte *pbVar14;
  ulong uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  ulong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  
  auVar8 = _DAT_0021df60;
  if (param_4 == 0) {
    *param_5 = 0;
    return;
  }
  lVar11 = (ulong)param_4 * 4;
  if (0xe < param_4 - 1 &&
      ((*param_2 + lVar11 <= param_1 || (undefined (*) [16])(param_1 + param_4) <= param_2) &&
      (*param_3 + lVar11 <= param_1 || (undefined (*) [16])(param_1 + param_4) <= param_3))) {
    iVar23 = 0;
    iVar24 = 0;
    iVar25 = 0;
    iVar26 = 0;
    pauVar12 = param_2;
    pauVar13 = param_3;
    pbVar14 = param_1;
    do {
      auVar19 = *pauVar12;
      auVar16 = pauVar12[1];
      bVar9 = pauVar12 != param_2 + (ulong)((param_4 >> 4) - 1) * 4;
      pauVar3 = pauVar13 + 1;
      pauVar5 = pauVar13 + 1;
      auVar18 = pauVar12[2];
      auVar21 = pauVar12[3];
      pauVar12 = pauVar12 + 4;
      uVar15 = *(ulong *)*pauVar13 & 0xffffff00ffffff;
      uVar22 = *(ulong *)(*pauVar13 + 8) & 0xffffff00ffffff;
      pauVar1 = pauVar13 + 2;
      pauVar7 = pauVar13 + 2;
      pauVar4 = pauVar13 + 3;
      pauVar6 = pauVar13 + 3;
      pauVar13 = pauVar13 + 4;
      uVar29 = *(ulong *)*pauVar3 & 0xffffff00ffffff;
      uVar30 = *(ulong *)(*pauVar5 + 8) & 0xffffff00ffffff;
      auVar17._0_4_ = (auVar19._0_4_ + 0xff) - (int)uVar15;
      auVar17._4_4_ = (auVar19._4_4_ + 0xff) - (int)(uVar15 >> 0x20);
      auVar17._8_4_ = (auVar19._8_4_ + 0xff) - (int)uVar22;
      auVar17._12_4_ = (auVar19._12_4_ + 0xff) - (int)(uVar22 >> 0x20);
      uVar27 = *(ulong *)*pauVar1 & 0xffffff00ffffff;
      uVar28 = *(ulong *)(*pauVar7 + 8) & 0xffffff00ffffff;
      uVar15 = *(ulong *)*pauVar4 & 0xffffff00ffffff;
      uVar22 = *(ulong *)(*pauVar6 + 8) & 0xffffff00ffffff;
      auVar17 = NEON_cmhs(auVar8,auVar17,4);
      auVar19._0_4_ = (auVar16._0_4_ + 0xff) - (int)uVar29;
      auVar19._4_4_ = (auVar16._4_4_ + 0xff) - (int)(uVar29 >> 0x20);
      auVar19._8_4_ = (auVar16._8_4_ + 0xff) - (int)uVar30;
      auVar19._12_4_ = (auVar16._12_4_ + 0xff) - (int)(uVar30 >> 0x20);
      auVar20._0_4_ = (auVar18._0_4_ + 0xff) - (int)uVar27;
      auVar20._4_4_ = (auVar18._4_4_ + 0xff) - (int)(uVar27 >> 0x20);
      auVar20._8_4_ = (auVar18._8_4_ + 0xff) - (int)uVar28;
      auVar20._12_4_ = (auVar18._12_4_ + 0xff) - (int)(uVar28 >> 0x20);
      auVar18._0_4_ = (auVar21._0_4_ + 0xff) - (int)uVar15;
      auVar18._4_4_ = (auVar21._4_4_ + 0xff) - (int)(uVar15 >> 0x20);
      auVar18._8_4_ = (auVar21._8_4_ + 0xff) - (int)uVar22;
      auVar18._12_4_ = (auVar21._12_4_ + 0xff) - (int)(uVar22 >> 0x20);
      auVar16 = NEON_cmhs(auVar8,auVar19,4);
      auVar21 = NEON_cmhs(auVar8,auVar20,4);
      auVar19 = NEON_cmhs(auVar8,auVar18,4);
      pbVar14[0x10] = auVar21[0];
      pbVar14[0x11] = auVar21[4];
      pbVar14[0x12] = auVar21[8];
      pbVar14[0x13] = auVar21[12];
      pbVar14[0x14] = auVar19[0];
      pbVar14[0x15] = auVar19[4];
      pbVar14[0x16] = auVar19[8];
      pbVar14[0x17] = auVar19[12];
      *pbVar14 = auVar17[0];
      pbVar14[1] = auVar17[4];
      pbVar14[2] = auVar17[8];
      pbVar14[3] = auVar17[12];
      pbVar14[4] = auVar16[0];
      pbVar14[5] = auVar16[4];
      pbVar14[6] = auVar16[8];
      pbVar14[7] = auVar16[12];
      iVar23 = iVar23 + ((((uint)(auVar17[0] & 1) - auVar16._0_4_) - auVar21._0_4_) - auVar19._0_4_)
      ;
      iVar24 = iVar24 + ((((uint)(auVar17[4] & 1) - auVar16._4_4_) - auVar21._4_4_) - auVar19._4_4_)
      ;
      iVar25 = iVar25 + ((((uint)(auVar17[8] & 1) - auVar16._8_4_) - auVar21._8_4_) - auVar19._8_4_)
      ;
      iVar26 = iVar26 + ((((uint)(auVar17[12] & 1) - auVar16._12_4_) - auVar21._12_4_) -
                        auVar19._12_4_);
      pbVar14 = pbVar14 + 0x10;
    } while (bVar9);
    iVar23 = iVar23 + iVar24 + iVar25 + iVar26;
    uVar15 = (ulong)param_4 & 0xfffffff0;
    lVar11 = uVar15 * 4;
    uVar2 = param_4 & 0xfffffff0;
    if ((param_4 & 0xf) != 0) {
      bVar10 = 0;
      if ((*(int *)(*param_2 + uVar15 * 4) + 0xff) - (*(uint *)(*param_3 + uVar15 * 4) & 0xffffff) <
          0x1ff) {
        iVar23 = iVar23 + 1;
        bVar10 = 0xff;
      }
      param_1[uVar2] = bVar10;
      if (uVar2 + 1 < param_4) {
        bVar10 = 0;
        if ((*(int *)(*param_2 + lVar11 + 4) + 0xff) - (*(uint *)(*param_3 + lVar11 + 4) & 0xffffff)
            < 0x1ff) {
          iVar23 = iVar23 + 1;
          bVar10 = 0xff;
        }
        param_1[uVar15 + 1] = bVar10;
        if (uVar2 + 2 < param_4) {
          bVar10 = 0;
          if ((*(int *)(*param_2 + lVar11 + 8) + 0xff) -
              (*(uint *)(*param_3 + lVar11 + 8) & 0xffffff) < 0x1ff) {
            iVar23 = iVar23 + 1;
            bVar10 = 0xff;
          }
          param_1[uVar15 + 2] = bVar10;
          if (uVar2 + 3 < param_4) {
            bVar10 = 0;
            if ((*(int *)(*param_2 + lVar11 + 0xc) + 0xff) -
                (*(uint *)(*param_3 + lVar11 + 0xc) & 0xffffff) < 0x1ff) {
              iVar23 = iVar23 + 1;
              bVar10 = 0xff;
            }
            param_1[uVar15 + 3] = bVar10;
            if (uVar2 + 4 < param_4) {
              bVar10 = 0;
              if ((*(int *)(param_2[1] + lVar11) + 0xff) -
                  (*(uint *)(param_3[1] + lVar11) & 0xffffff) < 0x1ff) {
                iVar23 = iVar23 + 1;
                bVar10 = 0xff;
              }
              param_1[uVar15 + 4] = bVar10;
              if (uVar2 + 5 < param_4) {
                bVar10 = 0;
                if ((*(int *)(param_2[1] + lVar11 + 4) + 0xff) -
                    (*(uint *)(param_3[1] + lVar11 + 4) & 0xffffff) < 0x1ff) {
                  iVar23 = iVar23 + 1;
                  bVar10 = 0xff;
                }
                param_1[uVar15 + 5] = bVar10;
                if (uVar2 + 6 < param_4) {
                  bVar10 = 0;
                  if ((*(int *)(param_2[1] + lVar11 + 8) + 0xff) -
                      (*(uint *)(param_3[1] + lVar11 + 8) & 0xffffff) < 0x1ff) {
                    iVar23 = iVar23 + 1;
                    bVar10 = 0xff;
                  }
                  param_1[uVar15 + 6] = bVar10;
                  if (uVar2 + 7 < param_4) {
                    bVar10 = 0;
                    if ((*(int *)(param_2[1] + lVar11 + 0xc) + 0xff) -
                        (*(uint *)(param_3[1] + lVar11 + 0xc) & 0xffffff) < 0x1ff) {
                      iVar23 = iVar23 + 1;
                      bVar10 = 0xff;
                    }
                    param_1[uVar15 + 7] = bVar10;
                    if (uVar2 + 8 < param_4) {
                      bVar10 = 0;
                      if ((*(int *)(param_2[2] + lVar11) + 0xff) -
                          (*(uint *)(param_3[2] + lVar11) & 0xffffff) < 0x1ff) {
                        iVar23 = iVar23 + 1;
                        bVar10 = 0xff;
                      }
                      param_1[uVar15 + 8] = bVar10;
                      if (uVar2 + 9 < param_4) {
                        bVar10 = 0;
                        if ((*(int *)(param_2[2] + lVar11 + 4) + 0xff) -
                            (*(uint *)(param_3[2] + lVar11 + 4) & 0xffffff) < 0x1ff) {
                          iVar23 = iVar23 + 1;
                          bVar10 = 0xff;
                        }
                        param_1[uVar15 + 9] = bVar10;
                        if (uVar2 + 10 < param_4) {
                          bVar10 = 0;
                          if ((*(int *)(param_2[2] + lVar11 + 8) + 0xff) -
                              (*(uint *)(param_3[2] + lVar11 + 8) & 0xffffff) < 0x1ff) {
                            iVar23 = iVar23 + 1;
                            bVar10 = 0xff;
                          }
                          param_1[uVar15 + 10] = bVar10;
                          if (uVar2 + 0xb < param_4) {
                            bVar10 = 0;
                            if ((*(int *)(param_2[2] + lVar11 + 0xc) + 0xff) -
                                (*(uint *)(param_3[2] + lVar11 + 0xc) & 0xffffff) < 0x1ff) {
                              iVar23 = iVar23 + 1;
                              bVar10 = 0xff;
                            }
                            param_1[uVar15 + 0xb] = bVar10;
                            if (uVar2 + 0xc < param_4) {
                              bVar10 = 0;
                              if ((*(int *)(param_2[3] + lVar11) + 0xff) -
                                  (*(uint *)(param_3[3] + lVar11) & 0xffffff) < 0x1ff) {
                                iVar23 = iVar23 + 1;
                                bVar10 = 0xff;
                              }
                              param_1[uVar15 + 0xc] = bVar10;
                              if (uVar2 + 0xd < param_4) {
                                bVar10 = 0;
                                if ((*(int *)(param_2[3] + lVar11 + 4) + 0xff) -
                                    (*(uint *)(param_3[3] + lVar11 + 4) & 0xffffff) < 0x1ff) {
                                  iVar23 = iVar23 + 1;
                                  bVar10 = 0xff;
                                }
                                param_1[uVar15 + 0xd] = bVar10;
                                if (uVar2 + 0xe < param_4) {
                                  if ((*(int *)(param_2[3] + lVar11 + 8) + 0xff) -
                                      (*(uint *)(param_3[3] + lVar11 + 8) & 0xffffff) < 0x1ff) {
                                    iVar23 = iVar23 + 1;
                                    param_1[uVar15 + 0xe] = 0xff;
                                  }
                                  else {
                                    param_1[uVar15 + 0xe] = 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *param_5 = iVar23;
    return;
  }
  lVar11 = 0;
  iVar23 = 0;
  do {
    bVar10 = 0;
    if ((*(int *)(*param_2 + lVar11 * 4) + 0xff) - (*(uint *)(*param_3 + lVar11 * 4) & 0xffffff) <
        0x1ff) {
      iVar23 = iVar23 + 1;
      bVar10 = 0xff;
    }
    param_1[lVar11] = bVar10;
    lVar11 = lVar11 + 1;
  } while ((uint)lVar11 < param_4);
  *param_5 = iVar23;
  return;
}


