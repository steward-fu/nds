/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_less_than_constant_c
 * Address  : 00145460
 * Program  : drastic64
 */


void render_polygon_depth_compare_less_than_constant_c
               (byte *param_1,uint param_2,undefined (*param_3) [16],uint param_4,int *param_5)

{
  uint uVar1;
  undefined auVar2 [16];
  bool bVar3;
  undefined (*pauVar4) [16];
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_4 == 0) {
    *param_5 = 0;
    return;
  }
  bVar3 = param_1 < *param_3 + (ulong)param_4 * 4;
  if (((!bVar3 || param_3 >= (undefined (*) [16])(param_1 + param_4)) && 0xd < param_4 - 1) &&
      (bVar3 && param_3 < (undefined (*) [16])(param_1 + param_4) || param_4 - 1 != 0xe)) {
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    pauVar4 = param_3;
    pbVar5 = param_1;
    do {
      auVar13 = *pauVar4;
      auVar10 = pauVar4[1];
      auVar2 = pauVar4[2];
      auVar15 = pauVar4[3];
      pauVar4 = pauVar4 + 4;
      auVar11._0_8_ = auVar13._0_8_ & 0xffffff00ffffff;
      auVar11._8_4_ = auVar13._8_4_ & 0xffffff;
      auVar11._12_4_ = auVar13._12_4_ & 0xffffff;
      auVar9._0_8_ = auVar10._0_8_ & 0xffffff00ffffff;
      auVar9._8_4_ = auVar10._8_4_ & 0xffffff;
      auVar9._12_4_ = auVar10._12_4_ & 0xffffff;
      auVar14._0_8_ = auVar2._0_8_ & 0xffffff00ffffff;
      auVar14._8_4_ = auVar2._8_4_ & 0xffffff;
      auVar14._12_4_ = auVar2._12_4_ & 0xffffff;
      auVar12._0_8_ = auVar15._0_8_ & 0xffffff00ffffff;
      auVar12._8_4_ = auVar15._8_4_ & 0xffffff;
      auVar12._12_4_ = auVar15._12_4_ & 0xffffff;
      auVar10._4_4_ = param_2;
      auVar10._0_4_ = param_2;
      auVar10._8_4_ = param_2;
      auVar10._12_4_ = param_2;
      auVar11 = NEON_cmhi(auVar11,auVar10,4);
      auVar13._4_4_ = param_2;
      auVar13._0_4_ = param_2;
      auVar13._8_4_ = param_2;
      auVar13._12_4_ = param_2;
      auVar10 = NEON_cmhi(auVar9,auVar13,4);
      auVar15._4_4_ = param_2;
      auVar15._0_4_ = param_2;
      auVar15._8_4_ = param_2;
      auVar15._12_4_ = param_2;
      auVar15 = NEON_cmhi(auVar14,auVar15,4);
      auVar2._4_4_ = param_2;
      auVar2._0_4_ = param_2;
      auVar2._8_4_ = param_2;
      auVar2._12_4_ = param_2;
      auVar13 = NEON_cmhi(auVar12,auVar2,4);
      pbVar5[0x10] = auVar15[0];
      pbVar5[0x11] = auVar15[4];
      pbVar5[0x12] = auVar15[8];
      pbVar5[0x13] = auVar15[12];
      pbVar5[0x14] = auVar13[0];
      pbVar5[0x15] = auVar13[4];
      pbVar5[0x16] = auVar13[8];
      pbVar5[0x17] = auVar13[12];
      *pbVar5 = auVar11[0];
      pbVar5[1] = auVar11[4];
      pbVar5[2] = auVar11[8];
      pbVar5[3] = auVar11[12];
      pbVar5[4] = auVar10[0];
      pbVar5[5] = auVar10[4];
      pbVar5[6] = auVar10[8];
      pbVar5[7] = auVar10[12];
      iVar16 = iVar16 + ((((uint)(auVar11[0] & 1) - auVar10._0_4_) - auVar15._0_4_) - auVar13._0_4_)
      ;
      iVar17 = iVar17 + ((((uint)(auVar11[4] & 1) - auVar10._4_4_) - auVar15._4_4_) - auVar13._4_4_)
      ;
      iVar18 = iVar18 + ((((uint)(auVar11[8] & 1) - auVar10._8_4_) - auVar15._8_4_) - auVar13._8_4_)
      ;
      iVar19 = iVar19 + ((((uint)(auVar11[12] & 1) - auVar10._12_4_) - auVar15._12_4_) -
                        auVar13._12_4_);
      pbVar5 = pbVar5 + 0x10;
    } while (pauVar4 != param_3 + (ulong)((param_4 >> 4) - 1) * 4 + 4);
    iVar16 = iVar16 + iVar17 + iVar18 + iVar19;
    uVar8 = (ulong)param_4 & 0xfffffff0;
    uVar1 = param_4 & 0xfffffff0;
    if ((param_4 & 0xf) != 0) {
      bVar7 = 0;
      if (param_2 < (*(uint *)(*param_3 + uVar8 * 4) & 0xffffff)) {
        iVar16 = iVar16 + 1;
        bVar7 = 0xff;
      }
      param_1[uVar1] = bVar7;
      if (uVar1 + 1 < param_4) {
        bVar7 = 0;
        if (param_2 < (*(uint *)(*param_3 + uVar8 * 4 + 4) & 0xffffff)) {
          iVar16 = iVar16 + 1;
          bVar7 = 0xff;
        }
        param_1[uVar8 + 1] = bVar7;
        if (uVar1 + 2 < param_4) {
          bVar7 = 0;
          if (param_2 < (*(uint *)(*param_3 + uVar8 * 4 + 8) & 0xffffff)) {
            iVar16 = iVar16 + 1;
            bVar7 = 0xff;
          }
          param_1[uVar8 + 2] = bVar7;
          if (uVar1 + 3 < param_4) {
            bVar7 = 0;
            if (param_2 < (*(uint *)(*param_3 + uVar8 * 4 + 0xc) & 0xffffff)) {
              iVar16 = iVar16 + 1;
              bVar7 = 0xff;
            }
            param_1[uVar8 + 3] = bVar7;
            if (uVar1 + 4 < param_4) {
              bVar7 = 0;
              if (param_2 < (*(uint *)(param_3[1] + uVar8 * 4) & 0xffffff)) {
                iVar16 = iVar16 + 1;
                bVar7 = 0xff;
              }
              param_1[uVar8 + 4] = bVar7;
              if (uVar1 + 5 < param_4) {
                bVar7 = 0;
                if (param_2 < (*(uint *)(param_3[1] + uVar8 * 4 + 4) & 0xffffff)) {
                  iVar16 = iVar16 + 1;
                  bVar7 = 0xff;
                }
                param_1[uVar8 + 5] = bVar7;
                if (uVar1 + 6 < param_4) {
                  bVar7 = 0;
                  if (param_2 < (*(uint *)(param_3[1] + uVar8 * 4 + 8) & 0xffffff)) {
                    iVar16 = iVar16 + 1;
                    bVar7 = 0xff;
                  }
                  param_1[uVar8 + 6] = bVar7;
                  if (uVar1 + 7 < param_4) {
                    bVar7 = 0;
                    if (param_2 < (*(uint *)(param_3[1] + uVar8 * 4 + 0xc) & 0xffffff)) {
                      iVar16 = iVar16 + 1;
                      bVar7 = 0xff;
                    }
                    param_1[uVar8 + 7] = bVar7;
                    if (uVar1 + 8 < param_4) {
                      bVar7 = 0;
                      if (param_2 < (*(uint *)(param_3[2] + uVar8 * 4) & 0xffffff)) {
                        iVar16 = iVar16 + 1;
                        bVar7 = 0xff;
                      }
                      param_1[uVar8 + 8] = bVar7;
                      if (uVar1 + 9 < param_4) {
                        bVar7 = 0;
                        if (param_2 < (*(uint *)(param_3[2] + uVar8 * 4 + 4) & 0xffffff)) {
                          iVar16 = iVar16 + 1;
                          bVar7 = 0xff;
                        }
                        param_1[uVar8 + 9] = bVar7;
                        if (uVar1 + 10 < param_4) {
                          bVar7 = 0;
                          if (param_2 < (*(uint *)(param_3[2] + uVar8 * 4 + 8) & 0xffffff)) {
                            iVar16 = iVar16 + 1;
                            bVar7 = 0xff;
                          }
                          param_1[uVar8 + 10] = bVar7;
                          if (uVar1 + 0xb < param_4) {
                            bVar7 = 0;
                            if (param_2 < (*(uint *)(param_3[2] + uVar8 * 4 + 0xc) & 0xffffff)) {
                              iVar16 = iVar16 + 1;
                              bVar7 = 0xff;
                            }
                            param_1[uVar8 + 0xb] = bVar7;
                            if (uVar1 + 0xc < param_4) {
                              bVar7 = 0;
                              if (param_2 < (*(uint *)(param_3[3] + uVar8 * 4) & 0xffffff)) {
                                iVar16 = iVar16 + 1;
                                bVar7 = 0xff;
                              }
                              param_1[uVar8 + 0xc] = bVar7;
                              if (uVar1 + 0xd < param_4) {
                                bVar7 = 0;
                                if (param_2 < (*(uint *)(param_3[3] + uVar8 * 4 + 4) & 0xffffff)) {
                                  iVar16 = iVar16 + 1;
                                  bVar7 = 0xff;
                                }
                                param_1[uVar8 + 0xd] = bVar7;
                                if (uVar1 + 0xe < param_4) {
                                  if (param_2 < (*(uint *)(param_3[3] + uVar8 * 4 + 8) & 0xffffff))
                                  {
                                    iVar16 = iVar16 + 1;
                                    param_1[uVar8 + 0xe] = 0xff;
                                  }
                                  else {
                                    param_1[uVar8 + 0xe] = 0;
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
    *param_5 = iVar16;
    return;
  }
  lVar6 = 0;
  iVar16 = 0;
  do {
    bVar7 = 0;
    if (param_2 < (*(uint *)(*param_3 + lVar6 * 4) & 0xffffff)) {
      iVar16 = iVar16 + 1;
      bVar7 = 0xff;
    }
    param_1[lVar6] = bVar7;
    lVar6 = lVar6 + 1;
  } while ((uint)lVar6 < param_4);
  *param_5 = iVar16;
  return;
}


