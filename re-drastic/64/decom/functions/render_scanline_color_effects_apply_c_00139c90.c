/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_effects_apply_c
 * Address  : 00139c90
 * Program  : drastic64
 */


void render_scanline_color_effects_apply_c
               (undefined (*param_1) [16],undefined (*param_2) [16],undefined (*param_3) [16],
               undefined (*param_4) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined uVar8;
  undefined uVar9;
  undefined *puVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined8 uVar32;
  undefined8 uVar33;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined8 uVar41;
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined8 uVar44;
  undefined8 uVar45;
  undefined auVar46 [16];
  undefined auVar47 [16];
  
  pauVar4 = param_2 + 0x51;
  pauVar5 = param_1 + 0x10;
  pauVar6 = param_1 + 0x21;
  pauVar7 = param_1 + 0x20;
  if ((param_4 + 1 <= param_1 || pauVar6 <= param_4) &&
      (((param_1 + 0x11 <= param_2 || pauVar4 <= pauVar5) &&
       (param_1 + 1 <= param_2 || pauVar4 <= param_1)) &&
      ((param_3 + 1 <= param_1 || pauVar6 <= param_3) && (pauVar4 <= pauVar7 || pauVar6 <= param_2))
      )) {
    lVar11 = 0;
    do {
      uVar29 = *(undefined8 *)((long)(*param_3 + lVar11) + 8);
      uVar28 = *(undefined8 *)(*param_3 + lVar11);
      auVar30 = *param_2;
      uVar33 = *(undefined8 *)((long)(*param_4 + lVar11) + 8);
      uVar32 = *(undefined8 *)(*param_4 + lVar11);
      uVar41 = *(undefined8 *)(param_2[0x30] + 8);
      auVar31 = param_2[0x10];
      auVar36 = param_2[0x40];
      uVar45 = *(undefined8 *)(param_2[0x20] + 8);
      uVar44 = *(undefined8 *)(param_2[0x50] + 8);
      auVar43 = NEON_umull(uVar32,*(undefined8 *)param_2[0x30],1);
      auVar38 = NEON_umull(uVar28,auVar30._0_8_,1);
      bVar12 = (byte)uVar33;
      bVar14 = (byte)((ulong)uVar33 >> 8);
      bVar16 = (byte)((ulong)uVar33 >> 0x10);
      bVar18 = (byte)((ulong)uVar33 >> 0x18);
      bVar20 = (byte)((ulong)uVar33 >> 0x20);
      bVar22 = (byte)((ulong)uVar33 >> 0x28);
      bVar24 = (byte)((ulong)uVar33 >> 0x30);
      bVar26 = (byte)((ulong)uVar33 >> 0x38);
      bVar13 = (byte)uVar29;
      bVar15 = (byte)((ulong)uVar29 >> 8);
      bVar17 = (byte)((ulong)uVar29 >> 0x10);
      bVar19 = (byte)((ulong)uVar29 >> 0x18);
      bVar21 = (byte)((ulong)uVar29 >> 0x20);
      bVar23 = (byte)((ulong)uVar29 >> 0x28);
      bVar25 = (byte)((ulong)uVar29 >> 0x30);
      bVar27 = (byte)((ulong)uVar29 >> 0x38);
      auVar42 = NEON_umull(uVar32,auVar36._0_8_,1);
      auVar37 = NEON_umull(uVar28,auVar31._0_8_,1);
      auVar46 = NEON_umull(uVar32,*(undefined8 *)param_2[0x50],1);
      auVar34 = NEON_umull(uVar28,*(undefined8 *)param_2[0x20],1);
      auVar47._2_2_ = (short)((uint)auVar38._2_2_ + (uint)auVar43._2_2_ + 0x10 >> 5);
      auVar47._0_2_ = (short)((uint)auVar38._0_2_ + (uint)auVar43._0_2_ + 0x10 >> 5);
      auVar47._4_2_ = (short)((uint)auVar38._4_2_ + (uint)auVar43._4_2_ + 0x10 >> 5);
      auVar47._6_2_ = (short)((uint)auVar38._6_2_ + (uint)auVar43._6_2_ + 0x10 >> 5);
      auVar47._8_2_ = (short)((uint)auVar38._8_2_ + (uint)auVar43._8_2_ + 0x10 >> 5);
      auVar47._10_2_ = (short)((uint)auVar38._10_2_ + (uint)auVar43._10_2_ + 0x10 >> 5);
      auVar47._12_2_ = (short)((uint)auVar38._12_2_ + (uint)auVar43._12_2_ + 0x10 >> 5);
      auVar47._14_2_ = (short)((uint)auVar38._14_2_ + (uint)auVar43._14_2_ + 0x10 >> 5);
      auVar40._2_2_ =
           (short)((uint)(ushort)((ushort)bVar15 * (ushort)auVar30[9]) +
                   (uint)(ushort)((ushort)bVar14 * (ushort)(byte)((ulong)uVar41 >> 8)) + 0x10 >> 5);
      auVar40._0_2_ =
           (short)((uint)(ushort)((ushort)bVar13 * (ushort)auVar30[8]) +
                   (uint)(ushort)((ushort)bVar12 * (ushort)(byte)uVar41) + 0x10 >> 5);
      auVar40._4_2_ =
           (short)((uint)(ushort)((ushort)bVar17 * (ushort)auVar30[10]) +
                   (uint)(ushort)((ushort)bVar16 * (ushort)(byte)((ulong)uVar41 >> 0x10)) + 0x10 >>
                  5);
      auVar40._6_2_ =
           (short)((uint)(ushort)((ushort)bVar19 * (ushort)auVar30[11]) +
                   (uint)(ushort)((ushort)bVar18 * (ushort)(byte)((ulong)uVar41 >> 0x18)) + 0x10 >>
                  5);
      auVar40._8_2_ =
           (short)((uint)(ushort)((ushort)bVar21 * (ushort)auVar30[12]) +
                   (uint)(ushort)((ushort)bVar20 * (ushort)(byte)((ulong)uVar41 >> 0x20)) + 0x10 >>
                  5);
      auVar40._10_2_ =
           (short)((uint)(ushort)((ushort)bVar23 * (ushort)auVar30[13]) +
                   (uint)(ushort)((ushort)bVar22 * (ushort)(byte)((ulong)uVar41 >> 0x28)) + 0x10 >>
                  5);
      auVar40._12_2_ =
           (short)((uint)(ushort)((ushort)bVar25 * (ushort)auVar30[14]) +
                   (uint)(ushort)((ushort)bVar24 * (ushort)(byte)((ulong)uVar41 >> 0x30)) + 0x10 >>
                  5);
      auVar40._14_2_ =
           (short)((uint)(ushort)((ushort)bVar27 * (ushort)auVar30[15]) +
                   (uint)(ushort)((ushort)bVar26 * (ushort)(byte)((ulong)uVar41 >> 0x38)) + 0x10 >>
                  5);
      auVar39._2_2_ = (short)((uint)auVar37._2_2_ + (uint)auVar42._2_2_ + 0x10 >> 5);
      auVar39._0_2_ = (short)((uint)auVar37._0_2_ + (uint)auVar42._0_2_ + 0x10 >> 5);
      auVar39._4_2_ = (short)((uint)auVar37._4_2_ + (uint)auVar42._4_2_ + 0x10 >> 5);
      auVar39._6_2_ = (short)((uint)auVar37._6_2_ + (uint)auVar42._6_2_ + 0x10 >> 5);
      auVar39._8_2_ = (short)((uint)auVar37._8_2_ + (uint)auVar42._8_2_ + 0x10 >> 5);
      auVar39._10_2_ = (short)((uint)auVar37._10_2_ + (uint)auVar42._10_2_ + 0x10 >> 5);
      auVar39._12_2_ = (short)((uint)auVar37._12_2_ + (uint)auVar42._12_2_ + 0x10 >> 5);
      auVar39._14_2_ = (short)((uint)auVar37._14_2_ + (uint)auVar42._14_2_ + 0x10 >> 5);
      auVar35._2_2_ =
           (short)((uint)(ushort)((ushort)bVar15 * (ushort)auVar31[9]) +
                   (uint)(ushort)((ushort)bVar14 * (ushort)auVar36[9]) + 0x10 >> 5);
      auVar35._0_2_ =
           (short)((uint)(ushort)((ushort)bVar13 * (ushort)auVar31[8]) +
                   (uint)(ushort)((ushort)bVar12 * (ushort)auVar36[8]) + 0x10 >> 5);
      auVar35._4_2_ =
           (short)((uint)(ushort)((ushort)bVar17 * (ushort)auVar31[10]) +
                   (uint)(ushort)((ushort)bVar16 * (ushort)auVar36[10]) + 0x10 >> 5);
      auVar35._6_2_ =
           (short)((uint)(ushort)((ushort)bVar19 * (ushort)auVar31[11]) +
                   (uint)(ushort)((ushort)bVar18 * (ushort)auVar36[11]) + 0x10 >> 5);
      auVar35._8_2_ =
           (short)((uint)(ushort)((ushort)bVar21 * (ushort)auVar31[12]) +
                   (uint)(ushort)((ushort)bVar20 * (ushort)auVar36[12]) + 0x10 >> 5);
      auVar35._10_2_ =
           (short)((uint)(ushort)((ushort)bVar23 * (ushort)auVar31[13]) +
                   (uint)(ushort)((ushort)bVar22 * (ushort)auVar36[13]) + 0x10 >> 5);
      auVar35._12_2_ =
           (short)((uint)(ushort)((ushort)bVar25 * (ushort)auVar31[14]) +
                   (uint)(ushort)((ushort)bVar24 * (ushort)auVar36[14]) + 0x10 >> 5);
      auVar35._14_2_ =
           (short)((uint)(ushort)((ushort)bVar27 * (ushort)auVar31[15]) +
                   (uint)(ushort)((ushort)bVar26 * (ushort)auVar36[15]) + 0x10 >> 5);
      auVar43._2_2_ = (short)((uint)auVar34._2_2_ + (uint)auVar46._2_2_ + 0x10 >> 5);
      auVar43._0_2_ = (short)((uint)auVar34._0_2_ + (uint)auVar46._0_2_ + 0x10 >> 5);
      auVar43._4_2_ = (short)((uint)auVar34._4_2_ + (uint)auVar46._4_2_ + 0x10 >> 5);
      auVar43._6_2_ = (short)((uint)auVar34._6_2_ + (uint)auVar46._6_2_ + 0x10 >> 5);
      auVar43._8_2_ = (short)((uint)auVar34._8_2_ + (uint)auVar46._8_2_ + 0x10 >> 5);
      auVar43._10_2_ = (short)((uint)auVar34._10_2_ + (uint)auVar46._10_2_ + 0x10 >> 5);
      auVar43._12_2_ = (short)((uint)auVar34._12_2_ + (uint)auVar46._12_2_ + 0x10 >> 5);
      auVar43._14_2_ = (short)((uint)auVar34._14_2_ + (uint)auVar46._14_2_ + 0x10 >> 5);
      auVar42._2_2_ =
           (short)((uint)(ushort)((ushort)bVar15 * (ushort)(byte)((ulong)uVar45 >> 8)) +
                   (uint)(ushort)((ushort)bVar14 * (ushort)(byte)((ulong)uVar44 >> 8)) + 0x10 >> 5);
      auVar42._0_2_ =
           (short)((uint)(ushort)((ushort)bVar13 * (ushort)(byte)uVar45) +
                   (uint)(ushort)((ushort)bVar12 * (ushort)(byte)uVar44) + 0x10 >> 5);
      auVar42._4_2_ =
           (short)((uint)(ushort)((ushort)bVar17 * (ushort)(byte)((ulong)uVar45 >> 0x10)) +
                   (uint)(ushort)((ushort)bVar16 * (ushort)(byte)((ulong)uVar44 >> 0x10)) + 0x10 >>
                  5);
      auVar42._6_2_ =
           (short)((uint)(ushort)((ushort)bVar19 * (ushort)(byte)((ulong)uVar45 >> 0x18)) +
                   (uint)(ushort)((ushort)bVar18 * (ushort)(byte)((ulong)uVar44 >> 0x18)) + 0x10 >>
                  5);
      auVar42._8_2_ =
           (short)((uint)(ushort)((ushort)bVar21 * (ushort)(byte)((ulong)uVar45 >> 0x20)) +
                   (uint)(ushort)((ushort)bVar20 * (ushort)(byte)((ulong)uVar44 >> 0x20)) + 0x10 >>
                  5);
      auVar42._10_2_ =
           (short)((uint)(ushort)((ushort)bVar23 * (ushort)(byte)((ulong)uVar45 >> 0x28)) +
                   (uint)(ushort)((ushort)bVar22 * (ushort)(byte)((ulong)uVar44 >> 0x28)) + 0x10 >>
                  5);
      auVar42._12_2_ =
           (short)((uint)(ushort)((ushort)bVar25 * (ushort)(byte)((ulong)uVar45 >> 0x30)) +
                   (uint)(ushort)((ushort)bVar24 * (ushort)(byte)((ulong)uVar44 >> 0x30)) + 0x10 >>
                  5);
      auVar42._14_2_ =
           (short)((uint)(ushort)((ushort)bVar27 * (ushort)(byte)((ulong)uVar45 >> 0x38)) +
                   (uint)(ushort)((ushort)bVar26 * (ushort)(byte)((ulong)uVar44 >> 0x38)) + 0x10 >>
                  5);
      auVar30._8_2_ = 0x3f;
      auVar30._0_8_ = 0x3f003f003f003f;
      auVar30._10_2_ = 0x3f;
      auVar30._12_2_ = 0x3f;
      auVar30._14_2_ = 0x3f;
      auVar46 = NEON_umin(auVar47,auVar30,2);
      auVar31._8_2_ = 0x3f;
      auVar31._0_8_ = 0x3f003f003f003f;
      auVar31._10_2_ = 0x3f;
      auVar31._12_2_ = 0x3f;
      auVar31._14_2_ = 0x3f;
      auVar40 = NEON_umin(auVar40,auVar31,2);
      auVar36._8_2_ = 0x3f;
      auVar36._0_8_ = 0x3f003f003f003f;
      auVar36._10_2_ = 0x3f;
      auVar36._12_2_ = 0x3f;
      auVar36._14_2_ = 0x3f;
      auVar39 = NEON_umin(auVar39,auVar36,2);
      auVar34._8_2_ = 0x3f;
      auVar34._0_8_ = 0x3f003f003f003f;
      auVar34._10_2_ = 0x3f;
      auVar34._12_2_ = 0x3f;
      auVar34._14_2_ = 0x3f;
      auVar36 = NEON_umin(auVar35,auVar34,2);
      auVar37._8_2_ = 0x3f;
      auVar37._0_8_ = 0x3f003f003f003f;
      auVar37._10_2_ = 0x3f;
      auVar37._12_2_ = 0x3f;
      auVar37._14_2_ = 0x3f;
      auVar31 = NEON_umin(auVar43,auVar37,2);
      auVar38._8_2_ = 0x3f;
      auVar38._0_8_ = 0x3f003f003f003f;
      auVar38._10_2_ = 0x3f;
      auVar38._12_2_ = 0x3f;
      auVar38._14_2_ = 0x3f;
      auVar30 = NEON_umin(auVar42,auVar38,2);
      puVar10 = *param_1 + lVar11;
      puVar10[0x10] = auVar40[0];
      puVar10[0x11] = auVar40[2];
      puVar10[0x12] = auVar40[4];
      puVar10[0x13] = auVar40[6];
      puVar10[0x14] = auVar40[8];
      puVar10[0x15] = auVar40[10];
      puVar10[0x16] = auVar40[12];
      puVar10[0x17] = auVar40[14];
      *puVar10 = auVar46[0];
      puVar10[1] = auVar46[2];
      puVar10[2] = auVar46[4];
      puVar10[3] = auVar46[6];
      puVar10[4] = auVar46[8];
      puVar10[5] = auVar46[10];
      puVar10[6] = auVar46[12];
      puVar10[7] = auVar46[14];
      *(ulong *)((long)(*pauVar5 + lVar11) + 8) =
           CONCAT17(auVar36[14],
                    CONCAT16(auVar36[12],
                             CONCAT15(auVar36[10],
                                      CONCAT14(auVar36[8],
                                               CONCAT13(auVar36[6],
                                                        CONCAT12(auVar36[4],
                                                                 CONCAT11(auVar36[2],auVar36[0])))))
                            ));
      *(ulong *)(*pauVar5 + lVar11) =
           CONCAT17(auVar39[14],
                    CONCAT16(auVar39[12],
                             CONCAT15(auVar39[10],
                                      CONCAT14(auVar39[8],
                                               CONCAT13(auVar39[6],
                                                        CONCAT12(auVar39[4],
                                                                 CONCAT11(auVar39[2],auVar39[0])))))
                            ));
      *(ulong *)((long)(*pauVar7 + lVar11) + 8) =
           CONCAT17(auVar30[14],
                    CONCAT16(auVar30[12],
                             CONCAT15(auVar30[10],
                                      CONCAT14(auVar30[8],
                                               CONCAT13(auVar30[6],
                                                        CONCAT12(auVar30[4],
                                                                 CONCAT11(auVar30[2],auVar30[0])))))
                            ));
      *(ulong *)(*pauVar7 + lVar11) =
           CONCAT17(auVar31[14],
                    CONCAT16(auVar31[12],
                             CONCAT15(auVar31[10],
                                      CONCAT14(auVar31[8],
                                               CONCAT13(auVar31[6],
                                                        CONCAT12(auVar31[4],
                                                                 CONCAT11(auVar31[2],auVar31[0])))))
                            ));
      lVar11 = lVar11 + 0x10;
      param_2 = param_2 + 1;
    } while (lVar11 != 0x100);
    return;
  }
  lVar11 = 0;
  do {
    bVar12 = (*param_4)[lVar11];
    bVar13 = (*param_3)[lVar11];
    uVar1 = (uint)(byte)param_2[0x30][0] * (uint)bVar12 + (uint)(byte)(*param_2)[0] * (uint)bVar13 +
            0x10;
    uVar2 = (uint)(byte)param_2[0x40][0] * (uint)bVar12 +
            (uint)(byte)param_2[0x10][0] * (uint)bVar13 + 0x10;
    uVar3 = (uint)(byte)param_2[0x50][0] * (uint)bVar12 +
            (uint)(byte)param_2[0x20][0] * (uint)bVar13 + 0x10;
    uVar8 = (undefined)(uVar1 >> 5);
    if (0x7ff < uVar1) {
      uVar8 = 0x3f;
    }
    uVar9 = (undefined)(uVar2 >> 5);
    (*param_1)[lVar11] = uVar8;
    if (0x7ff < uVar2) {
      uVar9 = 0x3f;
    }
    uVar8 = (undefined)(uVar3 >> 5);
    (*pauVar5)[lVar11] = uVar9;
    if (0x7ff < uVar3) {
      uVar8 = 0x3f;
    }
    (*pauVar7)[lVar11] = uVar8;
    lVar11 = lVar11 + 1;
    param_2 = (undefined (*) [16])(*param_2 + 1);
  } while (lVar11 != 0x100);
  return;
}


