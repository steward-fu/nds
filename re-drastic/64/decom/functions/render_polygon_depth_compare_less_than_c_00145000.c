/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_less_than_c
 * Address  : 00145000
 * Program  : drastic64
 */


void render_polygon_depth_compare_less_than_c
               (byte *param_1,undefined (*param_2) [16],undefined (*param_3) [16],uint param_4,
               int *param_5)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined8 uVar8;
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
  undefined auVar22 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  
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
      auVar20 = *pauVar13;
      auVar17 = pauVar13[1];
      bVar9 = pauVar12 != param_2 + (ulong)((param_4 >> 4) - 1) * 4;
      uVar5 = *(undefined8 *)(*pauVar12 + 8);
      pauVar3 = pauVar12 + 1;
      uVar8 = *(undefined8 *)(pauVar12[1] + 8);
      auVar18._0_8_ = auVar20._0_8_ & 0xffffff00ffffff;
      auVar18._8_4_ = auVar20._8_4_ & 0xffffff;
      auVar18._12_4_ = auVar20._12_4_ & 0xffffff;
      auVar22 = pauVar13[2];
      auVar20 = pauVar13[3];
      pauVar13 = pauVar13 + 4;
      auVar16._0_8_ = auVar17._0_8_ & 0xffffff00ffffff;
      auVar16._8_4_ = auVar17._8_4_ & 0xffffff;
      auVar16._12_4_ = auVar17._12_4_ & 0xffffff;
      auVar17[9] = (char)((ulong)uVar5 >> 8);
      auVar17._0_9_ = *(unkbyte9 *)*pauVar12;
      auVar17[10] = (char)((ulong)uVar5 >> 0x10);
      auVar17[11] = (char)((ulong)uVar5 >> 0x18);
      auVar17[12] = (char)((ulong)uVar5 >> 0x20);
      auVar17[13] = (char)((ulong)uVar5 >> 0x28);
      auVar17[14] = (char)((ulong)uVar5 >> 0x30);
      auVar17[15] = (char)((ulong)uVar5 >> 0x38);
      auVar18 = NEON_cmhi(auVar18,auVar17,4);
      auVar21._0_8_ = auVar22._0_8_ & 0xffffff00ffffff;
      auVar21._8_4_ = auVar22._8_4_ & 0xffffff;
      auVar21._12_4_ = auVar22._12_4_ & 0xffffff;
      auVar19._0_8_ = auVar20._0_8_ & 0xffffff00ffffff;
      auVar19._8_4_ = auVar20._8_4_ & 0xffffff;
      auVar19._12_4_ = auVar20._12_4_ & 0xffffff;
      pauVar1 = pauVar12 + 2;
      uVar6 = *(undefined8 *)(pauVar12[2] + 8);
      pauVar4 = pauVar12 + 3;
      uVar5 = *(undefined8 *)(pauVar12[3] + 8);
      pauVar12 = pauVar12 + 4;
      auVar7[9] = (char)((ulong)uVar8 >> 8);
      auVar7._0_9_ = *(unkbyte9 *)*pauVar3;
      auVar7[10] = (char)((ulong)uVar8 >> 0x10);
      auVar7[11] = (char)((ulong)uVar8 >> 0x18);
      auVar7[12] = (char)((ulong)uVar8 >> 0x20);
      auVar7[13] = (char)((ulong)uVar8 >> 0x28);
      auVar7[14] = (char)((ulong)uVar8 >> 0x30);
      auVar7[15] = (char)((ulong)uVar8 >> 0x38);
      auVar17 = NEON_cmhi(auVar16,auVar7,4);
      auVar22[9] = (char)((ulong)uVar6 >> 8);
      auVar22._0_9_ = *(unkbyte9 *)*pauVar1;
      auVar22[10] = (char)((ulong)uVar6 >> 0x10);
      auVar22[11] = (char)((ulong)uVar6 >> 0x18);
      auVar22[12] = (char)((ulong)uVar6 >> 0x20);
      auVar22[13] = (char)((ulong)uVar6 >> 0x28);
      auVar22[14] = (char)((ulong)uVar6 >> 0x30);
      auVar22[15] = (char)((ulong)uVar6 >> 0x38);
      auVar22 = NEON_cmhi(auVar21,auVar22,4);
      auVar20[9] = (char)((ulong)uVar5 >> 8);
      auVar20._0_9_ = *(unkbyte9 *)*pauVar4;
      auVar20[10] = (char)((ulong)uVar5 >> 0x10);
      auVar20[11] = (char)((ulong)uVar5 >> 0x18);
      auVar20[12] = (char)((ulong)uVar5 >> 0x20);
      auVar20[13] = (char)((ulong)uVar5 >> 0x28);
      auVar20[14] = (char)((ulong)uVar5 >> 0x30);
      auVar20[15] = (char)((ulong)uVar5 >> 0x38);
      auVar20 = NEON_cmhi(auVar19,auVar20,4);
      pbVar14[0x10] = auVar22[0];
      pbVar14[0x11] = auVar22[4];
      pbVar14[0x12] = auVar22[8];
      pbVar14[0x13] = auVar22[12];
      pbVar14[0x14] = auVar20[0];
      pbVar14[0x15] = auVar20[4];
      pbVar14[0x16] = auVar20[8];
      pbVar14[0x17] = auVar20[12];
      *pbVar14 = auVar18[0];
      pbVar14[1] = auVar18[4];
      pbVar14[2] = auVar18[8];
      pbVar14[3] = auVar18[12];
      pbVar14[4] = auVar17[0];
      pbVar14[5] = auVar17[4];
      pbVar14[6] = auVar17[8];
      pbVar14[7] = auVar17[12];
      iVar23 = iVar23 + ((((uint)(auVar18[0] & 1) - auVar17._0_4_) - auVar22._0_4_) - auVar20._0_4_)
      ;
      iVar24 = iVar24 + ((((uint)(auVar18[4] & 1) - auVar17._4_4_) - auVar22._4_4_) - auVar20._4_4_)
      ;
      iVar25 = iVar25 + ((((uint)(auVar18[8] & 1) - auVar17._8_4_) - auVar22._8_4_) - auVar20._8_4_)
      ;
      iVar26 = iVar26 + ((((uint)(auVar18[12] & 1) - auVar17._12_4_) - auVar22._12_4_) -
                        auVar20._12_4_);
      pbVar14 = pbVar14 + 0x10;
    } while (bVar9);
    iVar23 = iVar23 + iVar24 + iVar25 + iVar26;
    uVar15 = (ulong)param_4 & 0xfffffff0;
    lVar11 = uVar15 * 4;
    uVar2 = param_4 & 0xfffffff0;
    if ((param_4 & 0xf) != 0) {
      bVar10 = 0;
      if (*(uint *)(*param_2 + uVar15 * 4) < (*(uint *)(*param_3 + uVar15 * 4) & 0xffffff)) {
        iVar23 = iVar23 + 1;
        bVar10 = 0xff;
      }
      param_1[uVar2] = bVar10;
      if (uVar2 + 1 < param_4) {
        bVar10 = 0;
        if (*(uint *)(*param_2 + lVar11 + 4) < (*(uint *)(*param_3 + lVar11 + 4) & 0xffffff)) {
          iVar23 = iVar23 + 1;
          bVar10 = 0xff;
        }
        param_1[uVar15 + 1] = bVar10;
        if (uVar2 + 2 < param_4) {
          bVar10 = 0;
          if (*(uint *)(*param_2 + lVar11 + 8) < (*(uint *)(*param_3 + lVar11 + 8) & 0xffffff)) {
            iVar23 = iVar23 + 1;
            bVar10 = 0xff;
          }
          param_1[uVar15 + 2] = bVar10;
          if (uVar2 + 3 < param_4) {
            bVar10 = 0;
            if (*(uint *)(*param_2 + lVar11 + 0xc) < (*(uint *)(*param_3 + lVar11 + 0xc) & 0xffffff)
               ) {
              iVar23 = iVar23 + 1;
              bVar10 = 0xff;
            }
            param_1[uVar15 + 3] = bVar10;
            if (uVar2 + 4 < param_4) {
              bVar10 = 0;
              if (*(uint *)(param_2[1] + lVar11) < (*(uint *)(param_3[1] + lVar11) & 0xffffff)) {
                iVar23 = iVar23 + 1;
                bVar10 = 0xff;
              }
              param_1[uVar15 + 4] = bVar10;
              if (uVar2 + 5 < param_4) {
                bVar10 = 0;
                if (*(uint *)(param_2[1] + lVar11 + 4) <
                    (*(uint *)(param_3[1] + lVar11 + 4) & 0xffffff)) {
                  iVar23 = iVar23 + 1;
                  bVar10 = 0xff;
                }
                param_1[uVar15 + 5] = bVar10;
                if (uVar2 + 6 < param_4) {
                  bVar10 = 0;
                  if (*(uint *)(param_2[1] + lVar11 + 8) <
                      (*(uint *)(param_3[1] + lVar11 + 8) & 0xffffff)) {
                    iVar23 = iVar23 + 1;
                    bVar10 = 0xff;
                  }
                  param_1[uVar15 + 6] = bVar10;
                  if (uVar2 + 7 < param_4) {
                    bVar10 = 0;
                    if (*(uint *)(param_2[1] + lVar11 + 0xc) <
                        (*(uint *)(param_3[1] + lVar11 + 0xc) & 0xffffff)) {
                      iVar23 = iVar23 + 1;
                      bVar10 = 0xff;
                    }
                    param_1[uVar15 + 7] = bVar10;
                    if (uVar2 + 8 < param_4) {
                      bVar10 = 0;
                      if (*(uint *)(param_2[2] + lVar11) <
                          (*(uint *)(param_3[2] + lVar11) & 0xffffff)) {
                        iVar23 = iVar23 + 1;
                        bVar10 = 0xff;
                      }
                      param_1[uVar15 + 8] = bVar10;
                      if (uVar2 + 9 < param_4) {
                        bVar10 = 0;
                        if (*(uint *)(param_2[2] + lVar11 + 4) <
                            (*(uint *)(param_3[2] + lVar11 + 4) & 0xffffff)) {
                          iVar23 = iVar23 + 1;
                          bVar10 = 0xff;
                        }
                        param_1[uVar15 + 9] = bVar10;
                        if (uVar2 + 10 < param_4) {
                          bVar10 = 0;
                          if (*(uint *)(param_2[2] + lVar11 + 8) <
                              (*(uint *)(param_3[2] + lVar11 + 8) & 0xffffff)) {
                            iVar23 = iVar23 + 1;
                            bVar10 = 0xff;
                          }
                          param_1[uVar15 + 10] = bVar10;
                          if (uVar2 + 0xb < param_4) {
                            bVar10 = 0;
                            if (*(uint *)(param_2[2] + lVar11 + 0xc) <
                                (*(uint *)(param_3[2] + lVar11 + 0xc) & 0xffffff)) {
                              iVar23 = iVar23 + 1;
                              bVar10 = 0xff;
                            }
                            param_1[uVar15 + 0xb] = bVar10;
                            if (uVar2 + 0xc < param_4) {
                              bVar10 = 0;
                              if (*(uint *)(param_2[3] + lVar11) <
                                  (*(uint *)(param_3[3] + lVar11) & 0xffffff)) {
                                iVar23 = iVar23 + 1;
                                bVar10 = 0xff;
                              }
                              param_1[uVar15 + 0xc] = bVar10;
                              if (uVar2 + 0xd < param_4) {
                                bVar10 = 0;
                                if (*(uint *)(param_2[3] + lVar11 + 4) <
                                    (*(uint *)(param_3[3] + lVar11 + 4) & 0xffffff)) {
                                  iVar23 = iVar23 + 1;
                                  bVar10 = 0xff;
                                }
                                param_1[uVar15 + 0xd] = bVar10;
                                if (uVar2 + 0xe < param_4) {
                                  if (*(uint *)(param_2[3] + lVar11 + 8) <
                                      (*(uint *)(param_3[3] + lVar11 + 8) & 0xffffff)) {
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
    if (*(uint *)(*param_2 + lVar11 * 4) < (*(uint *)(*param_3 + lVar11 * 4) & 0xffffff)) {
      iVar23 = iVar23 + 1;
      bVar10 = 0xff;
    }
    param_1[lVar11] = bVar10;
    lVar11 = lVar11 + 1;
  } while ((uint)lVar11 < param_4);
  *param_5 = iVar23;
  return;
}


