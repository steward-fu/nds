/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_equal_constant_c
 * Address  : 00144bc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_depth_compare_equal_constant_c
               (byte *param_1,int param_2,undefined (*param_3) [16],uint param_4,int *param_5)

{
  uint uVar1;
  undefined auVar2 [16];
  bool bVar3;
  undefined (*pauVar4) [16];
  byte bVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  undefined auVar9 [16];
  ulong uVar10;
  undefined auVar11 [16];
  ulong uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  ulong uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  auVar2 = _DAT_0021df60;
  if (param_4 == 0) {
    *param_5 = 0;
    return;
  }
  bVar3 = param_1 < *param_3 + (ulong)param_4 * 4;
  param_2 = param_2 + 0xff;
  if (((!bVar3 || param_3 >= (undefined (*) [16])(param_1 + param_4)) && 0xd < param_4 - 1) &&
      (bVar3 && param_3 < (undefined (*) [16])(param_1 + param_4) || param_4 - 1 != 0xe)) {
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    iVar21 = 0;
    pauVar4 = param_3;
    pbVar6 = param_1;
    do {
      auVar14 = *pauVar4;
      auVar9 = pauVar4[1];
      auVar13 = pauVar4[2];
      auVar11 = pauVar4[3];
      pauVar4 = pauVar4 + 4;
      uVar10 = auVar14._0_8_ & 0xffffff00ffffff;
      uVar7 = auVar9._0_8_ & 0xffffff00ffffff;
      uVar15 = auVar13._0_8_ & 0xffffff00ffffff;
      uVar12 = auVar11._0_8_ & 0xffffff00ffffff;
      auVar17._0_4_ = param_2 - (int)uVar10;
      auVar17._4_4_ = param_2 - (int)(uVar10 >> 0x20);
      auVar17._8_4_ = param_2 - (auVar14._8_4_ & 0xffffff);
      auVar17._12_4_ = param_2 - (auVar14._12_4_ & 0xffffff);
      auVar14._0_4_ = param_2 - (int)uVar7;
      auVar14._4_4_ = param_2 - (int)(uVar7 >> 0x20);
      auVar14._8_4_ = param_2 - (auVar9._8_4_ & 0xffffff);
      auVar14._12_4_ = param_2 - (auVar9._12_4_ & 0xffffff);
      auVar16._0_4_ = param_2 - (int)uVar15;
      auVar16._4_4_ = param_2 - (int)(uVar15 >> 0x20);
      auVar16._8_4_ = param_2 - (auVar13._8_4_ & 0xffffff);
      auVar16._12_4_ = param_2 - (auVar13._12_4_ & 0xffffff);
      auVar13._0_4_ = param_2 - (int)uVar12;
      auVar13._4_4_ = param_2 - (int)(uVar12 >> 0x20);
      auVar13._8_4_ = param_2 - (auVar11._8_4_ & 0xffffff);
      auVar13._12_4_ = param_2 - (auVar11._12_4_ & 0xffffff);
      auVar11 = NEON_cmhs(auVar2,auVar17,4);
      auVar9 = NEON_cmhs(auVar2,auVar14,4);
      auVar17 = NEON_cmhs(auVar2,auVar16,4);
      auVar14 = NEON_cmhs(auVar2,auVar13,4);
      pbVar6[0x10] = auVar17[0];
      pbVar6[0x11] = auVar17[4];
      pbVar6[0x12] = auVar17[8];
      pbVar6[0x13] = auVar17[12];
      pbVar6[0x14] = auVar14[0];
      pbVar6[0x15] = auVar14[4];
      pbVar6[0x16] = auVar14[8];
      pbVar6[0x17] = auVar14[12];
      *pbVar6 = auVar11[0];
      pbVar6[1] = auVar11[4];
      pbVar6[2] = auVar11[8];
      pbVar6[3] = auVar11[12];
      pbVar6[4] = auVar9[0];
      pbVar6[5] = auVar9[4];
      pbVar6[6] = auVar9[8];
      pbVar6[7] = auVar9[12];
      iVar18 = iVar18 + ((((uint)(auVar11[0] & 1) - auVar9._0_4_) - auVar17._0_4_) - auVar14._0_4_);
      iVar19 = iVar19 + ((((uint)(auVar11[4] & 1) - auVar9._4_4_) - auVar17._4_4_) - auVar14._4_4_);
      iVar20 = iVar20 + ((((uint)(auVar11[8] & 1) - auVar9._8_4_) - auVar17._8_4_) - auVar14._8_4_);
      iVar21 = iVar21 + ((((uint)(auVar11[12] & 1) - auVar9._12_4_) - auVar17._12_4_) -
                        auVar14._12_4_);
      pbVar6 = pbVar6 + 0x10;
    } while (pauVar4 != param_3 + (ulong)((param_4 >> 4) - 1) * 4 + 4);
    iVar18 = iVar18 + iVar19 + iVar20 + iVar21;
    uVar7 = (ulong)param_4 & 0xfffffff0;
    uVar1 = param_4 & 0xfffffff0;
    if ((param_4 & 0xf) != 0) {
      bVar5 = 0;
      if (param_2 - (*(uint *)(*param_3 + uVar7 * 4) & 0xffffff) < 0x1ff) {
        iVar18 = iVar18 + 1;
        bVar5 = 0xff;
      }
      param_1[uVar1] = bVar5;
      if (uVar1 + 1 < param_4) {
        bVar5 = 0;
        if (param_2 - (*(uint *)(*param_3 + uVar7 * 4 + 4) & 0xffffff) < 0x1ff) {
          iVar18 = iVar18 + 1;
          bVar5 = 0xff;
        }
        param_1[uVar7 + 1] = bVar5;
        if (uVar1 + 2 < param_4) {
          bVar5 = 0;
          if (param_2 - (*(uint *)(*param_3 + uVar7 * 4 + 8) & 0xffffff) < 0x1ff) {
            iVar18 = iVar18 + 1;
            bVar5 = 0xff;
          }
          param_1[uVar7 + 2] = bVar5;
          if (uVar1 + 3 < param_4) {
            bVar5 = 0;
            if (param_2 - (*(uint *)(*param_3 + uVar7 * 4 + 0xc) & 0xffffff) < 0x1ff) {
              iVar18 = iVar18 + 1;
              bVar5 = 0xff;
            }
            param_1[uVar7 + 3] = bVar5;
            if (uVar1 + 4 < param_4) {
              bVar5 = 0;
              if (param_2 - (*(uint *)(param_3[1] + uVar7 * 4) & 0xffffff) < 0x1ff) {
                iVar18 = iVar18 + 1;
                bVar5 = 0xff;
              }
              param_1[uVar7 + 4] = bVar5;
              if (uVar1 + 5 < param_4) {
                bVar5 = 0;
                if (param_2 - (*(uint *)(param_3[1] + uVar7 * 4 + 4) & 0xffffff) < 0x1ff) {
                  iVar18 = iVar18 + 1;
                  bVar5 = 0xff;
                }
                param_1[uVar7 + 5] = bVar5;
                if (uVar1 + 6 < param_4) {
                  bVar5 = 0;
                  if (param_2 - (*(uint *)(param_3[1] + uVar7 * 4 + 8) & 0xffffff) < 0x1ff) {
                    iVar18 = iVar18 + 1;
                    bVar5 = 0xff;
                  }
                  param_1[uVar7 + 6] = bVar5;
                  if (uVar1 + 7 < param_4) {
                    bVar5 = 0;
                    if (param_2 - (*(uint *)(param_3[1] + uVar7 * 4 + 0xc) & 0xffffff) < 0x1ff) {
                      iVar18 = iVar18 + 1;
                      bVar5 = 0xff;
                    }
                    param_1[uVar7 + 7] = bVar5;
                    if (uVar1 + 8 < param_4) {
                      bVar5 = 0;
                      if (param_2 - (*(uint *)(param_3[2] + uVar7 * 4) & 0xffffff) < 0x1ff) {
                        iVar18 = iVar18 + 1;
                        bVar5 = 0xff;
                      }
                      param_1[uVar7 + 8] = bVar5;
                      if (uVar1 + 9 < param_4) {
                        bVar5 = 0;
                        if (param_2 - (*(uint *)(param_3[2] + uVar7 * 4 + 4) & 0xffffff) < 0x1ff) {
                          iVar18 = iVar18 + 1;
                          bVar5 = 0xff;
                        }
                        param_1[uVar7 + 9] = bVar5;
                        if (uVar1 + 10 < param_4) {
                          bVar5 = 0;
                          if (param_2 - (*(uint *)(param_3[2] + uVar7 * 4 + 8) & 0xffffff) < 0x1ff)
                          {
                            iVar18 = iVar18 + 1;
                            bVar5 = 0xff;
                          }
                          param_1[uVar7 + 10] = bVar5;
                          if (uVar1 + 0xb < param_4) {
                            bVar5 = 0;
                            if (param_2 - (*(uint *)(param_3[2] + uVar7 * 4 + 0xc) & 0xffffff) <
                                0x1ff) {
                              iVar18 = iVar18 + 1;
                              bVar5 = 0xff;
                            }
                            param_1[uVar7 + 0xb] = bVar5;
                            if (uVar1 + 0xc < param_4) {
                              bVar5 = 0;
                              if (param_2 - (*(uint *)(param_3[3] + uVar7 * 4) & 0xffffff) < 0x1ff)
                              {
                                iVar18 = iVar18 + 1;
                                bVar5 = 0xff;
                              }
                              param_1[uVar7 + 0xc] = bVar5;
                              if (uVar1 + 0xd < param_4) {
                                bVar5 = 0;
                                if (param_2 - (*(uint *)(param_3[3] + uVar7 * 4 + 4) & 0xffffff) <
                                    0x1ff) {
                                  iVar18 = iVar18 + 1;
                                  bVar5 = 0xff;
                                }
                                param_1[uVar7 + 0xd] = bVar5;
                                if (uVar1 + 0xe < param_4) {
                                  if (param_2 - (*(uint *)(param_3[3] + uVar7 * 4 + 8) & 0xffffff) <
                                      0x1ff) {
                                    iVar18 = iVar18 + 1;
                                    param_1[uVar7 + 0xe] = 0xff;
                                  }
                                  else {
                                    param_1[uVar7 + 0xe] = 0;
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
    *param_5 = iVar18;
    return;
  }
  lVar8 = 0;
  iVar18 = 0;
  do {
    bVar5 = 0;
    if (param_2 - (*(uint *)(*param_3 + lVar8 * 4) & 0xffffff) < 0x1ff) {
      iVar18 = iVar18 + 1;
      bVar5 = 0xff;
    }
    param_1[lVar8] = bVar5;
    lVar8 = lVar8 + 1;
  } while ((uint)lVar8 < param_4);
  *param_5 = iVar18;
  return;
}


