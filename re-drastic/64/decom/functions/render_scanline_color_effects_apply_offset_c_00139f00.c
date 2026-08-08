/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_effects_apply_offset_c
 * Address  : 00139f00
 * Program  : drastic64
 */


void render_scanline_color_effects_apply_offset_c
               (undefined (*param_1) [16],undefined (*param_2) [16],undefined (*param_3) [16],
               undefined (*param_4) [16],undefined (*param_5) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [16];
  undefined uVar9;
  undefined uVar10;
  undefined *puVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
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
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined8 uVar43;
  undefined auVar44 [16];
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined8 uVar54;
  undefined8 uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  undefined auVar60 [16];
  
  pauVar5 = param_2 + 0x51;
  pauVar6 = param_1 + 0x10;
  pauVar7 = param_1 + 0x21;
  pauVar8 = param_1 + 0x20;
  if ((((param_1 + 0x11 <= param_2 || pauVar5 <= pauVar6) &&
       (param_1 + 1 <= param_2 || pauVar5 <= param_1)) &&
      ((param_3 + 1 <= param_1 || pauVar7 <= param_3) && (pauVar5 <= pauVar8 || pauVar7 <= param_2))
      ) && ((param_5 + 1 <= param_1 || pauVar7 <= param_5) &&
           (param_4 + 1 <= param_1 || pauVar7 <= param_4))) {
    lVar17 = 0;
    do {
      auVar37 = *(undefined (*) [16])(*param_3 + lVar17);
      auVar38 = *param_2;
      uVar36 = *(undefined8 *)((long)(*param_4 + lVar17) + 8);
      uVar35 = *(undefined8 *)(*param_4 + lVar17);
      auVar40 = *(undefined (*) [16])(*param_5 + lVar17);
      auVar12 = param_2[0x30];
      uVar34 = *(undefined8 *)(param_2[0x10] + 8);
      auVar13 = param_2[0x40];
      uVar55 = *(undefined8 *)(param_2[0x20] + 8);
      uVar54 = *(undefined8 *)(param_2[0x50] + 8);
      auVar53 = NEON_umull(uVar35,auVar12._0_8_,1);
      uVar43 = auVar37._0_8_;
      auVar41 = NEON_umull(uVar43,auVar38._0_8_,1);
      bVar18 = (byte)uVar36;
      bVar20 = (byte)((ulong)uVar36 >> 8);
      bVar22 = (byte)((ulong)uVar36 >> 0x10);
      bVar24 = (byte)((ulong)uVar36 >> 0x18);
      bVar26 = (byte)((ulong)uVar36 >> 0x20);
      bVar28 = (byte)((ulong)uVar36 >> 0x28);
      bVar30 = (byte)((ulong)uVar36 >> 0x30);
      bVar32 = (byte)((ulong)uVar36 >> 0x38);
      bVar19 = auVar37[8];
      bVar21 = auVar37[9];
      bVar23 = auVar37[10];
      bVar25 = auVar37[11];
      bVar27 = auVar37[12];
      bVar29 = auVar37[13];
      bVar31 = auVar37[14];
      bVar33 = auVar37[15];
      auVar52 = NEON_umull(uVar35,auVar13._0_8_,1);
      auVar39 = NEON_umull(uVar43,*(undefined8 *)param_2[0x10],1);
      auVar37 = NEON_umull(uVar43,*(undefined8 *)param_2[0x20],1);
      auVar60 = NEON_umull(uVar35,*(undefined8 *)param_2[0x50],1);
      uVar3 = (uint)(ushort)((ushort)auVar40[0] * 0x3f + 0x10);
      uVar14 = (uint)(ushort)((ushort)auVar40[1] * 0x3f + 0x10);
      uVar58 = (uint)(ushort)((ushort)auVar40[2] * 0x3f + 0x10);
      uVar59 = (uint)(ushort)((ushort)auVar40[3] * 0x3f + 0x10);
      uVar15 = (uint)(ushort)((ushort)auVar40[8] * 0x3f + 0x10);
      uVar16 = (uint)(ushort)((ushort)auVar40[9] * 0x3f + 0x10);
      uVar56 = (uint)(ushort)((ushort)auVar40[10] * 0x3f + 0x10);
      uVar57 = (uint)(ushort)((ushort)auVar40[11] * 0x3f + 0x10);
      uVar1 = (uint)(ushort)((ushort)auVar40[4] * 0x3f + 0x10);
      uVar49 = (uint)(ushort)((ushort)auVar40[6] * 0x3f + 0x10);
      uVar2 = (uint)(ushort)((ushort)auVar40[12] * 0x3f + 0x10);
      uVar46 = (uint)(ushort)((ushort)auVar40[14] * 0x3f + 0x10);
      uVar48 = (uint)(ushort)((ushort)auVar40[5] * 0x3f + 0x10);
      uVar50 = (uint)(ushort)((ushort)auVar40[7] * 0x3f + 0x10);
      uVar45 = (uint)(ushort)((ushort)auVar40[13] * 0x3f + 0x10);
      uVar47 = (uint)(ushort)((ushort)auVar40[15] * 0x3f + 0x10);
      auVar51._2_2_ = (short)((int)((uint)auVar41._2_2_ + (uint)auVar53._2_2_ + uVar14) >> 5);
      auVar51._0_2_ = (short)((int)((uint)auVar41._0_2_ + (uint)auVar53._0_2_ + uVar3) >> 5);
      auVar51._4_2_ = (short)((int)((uint)auVar41._4_2_ + (uint)auVar53._4_2_ + uVar58) >> 5);
      auVar51._6_2_ = (short)((int)((uint)auVar41._6_2_ + (uint)auVar53._6_2_ + uVar59) >> 5);
      auVar51._8_2_ = (short)((int)((uint)auVar41._8_2_ + (uint)auVar53._8_2_ + uVar1) >> 5);
      auVar51._10_2_ = (short)((int)((uint)auVar41._10_2_ + (uint)auVar53._10_2_ + uVar48) >> 5);
      auVar51._12_2_ = (short)((int)((uint)auVar41._12_2_ + (uint)auVar53._12_2_ + uVar49) >> 5);
      auVar51._14_2_ = (short)((int)((uint)auVar41._14_2_ + (uint)auVar53._14_2_ + uVar50) >> 5);
      auVar44._2_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar21 * (ushort)auVar38[9]) +
                         (uint)(ushort)((ushort)bVar20 * (ushort)auVar12[9]) + uVar16) >> 5);
      auVar44._0_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar19 * (ushort)auVar38[8]) +
                         (uint)(ushort)((ushort)bVar18 * (ushort)auVar12[8]) + uVar15) >> 5);
      auVar44._4_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar23 * (ushort)auVar38[10]) +
                         (uint)(ushort)((ushort)bVar22 * (ushort)auVar12[10]) + uVar56) >> 5);
      auVar44._6_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar25 * (ushort)auVar38[11]) +
                         (uint)(ushort)((ushort)bVar24 * (ushort)auVar12[11]) + uVar57) >> 5);
      auVar44._8_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar27 * (ushort)auVar38[12]) +
                         (uint)(ushort)((ushort)bVar26 * (ushort)auVar12[12]) + uVar2) >> 5);
      auVar44._10_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar29 * (ushort)auVar38[13]) +
                         (uint)(ushort)((ushort)bVar28 * (ushort)auVar12[13]) + uVar45) >> 5);
      auVar44._12_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar31 * (ushort)auVar38[14]) +
                         (uint)(ushort)((ushort)bVar30 * (ushort)auVar12[14]) + uVar46) >> 5);
      auVar44._14_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar33 * (ushort)auVar38[15]) +
                         (uint)(ushort)((ushort)bVar32 * (ushort)auVar12[15]) + uVar47) >> 5);
      auVar42._2_2_ = (short)((int)((uint)auVar39._2_2_ + (uint)auVar52._2_2_ + uVar14) >> 5);
      auVar42._0_2_ = (short)((int)((uint)auVar39._0_2_ + (uint)auVar52._0_2_ + uVar3) >> 5);
      auVar42._4_2_ = (short)((int)((uint)auVar39._4_2_ + (uint)auVar52._4_2_ + uVar58) >> 5);
      auVar42._6_2_ = (short)((int)((uint)auVar39._6_2_ + (uint)auVar52._6_2_ + uVar59) >> 5);
      auVar42._8_2_ = (short)((int)((uint)auVar39._8_2_ + (uint)auVar52._8_2_ + uVar1) >> 5);
      auVar42._10_2_ = (short)((int)((uint)auVar39._10_2_ + (uint)auVar52._10_2_ + uVar48) >> 5);
      auVar42._12_2_ = (short)((int)((uint)auVar39._12_2_ + (uint)auVar52._12_2_ + uVar49) >> 5);
      auVar42._14_2_ = (short)((int)((uint)auVar39._14_2_ + (uint)auVar52._14_2_ + uVar50) >> 5);
      auVar53._2_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar21 * (ushort)(byte)((ulong)uVar34 >> 8)) +
                         (uint)(ushort)((ushort)bVar20 * (ushort)auVar13[9]) + uVar16) >> 5);
      auVar53._0_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar19 * (ushort)(byte)uVar34) +
                         (uint)(ushort)((ushort)bVar18 * (ushort)auVar13[8]) + uVar15) >> 5);
      auVar53._4_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar23 * (ushort)(byte)((ulong)uVar34 >> 0x10)) +
                         (uint)(ushort)((ushort)bVar22 * (ushort)auVar13[10]) + uVar56) >> 5);
      auVar53._6_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar25 * (ushort)(byte)((ulong)uVar34 >> 0x18)) +
                         (uint)(ushort)((ushort)bVar24 * (ushort)auVar13[11]) + uVar57) >> 5);
      auVar53._8_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar27 * (ushort)(byte)((ulong)uVar34 >> 0x20)) +
                         (uint)(ushort)((ushort)bVar26 * (ushort)auVar13[12]) + uVar2) >> 5);
      auVar53._10_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar29 * (ushort)(byte)((ulong)uVar34 >> 0x28)) +
                         (uint)(ushort)((ushort)bVar28 * (ushort)auVar13[13]) + uVar45) >> 5);
      auVar53._12_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar31 * (ushort)(byte)((ulong)uVar34 >> 0x30)) +
                         (uint)(ushort)((ushort)bVar30 * (ushort)auVar13[14]) + uVar46) >> 5);
      auVar53._14_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar33 * (ushort)(byte)((ulong)uVar34 >> 0x38)) +
                         (uint)(ushort)((ushort)bVar32 * (ushort)auVar13[15]) + uVar47) >> 5);
      auVar41._2_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar21 * (ushort)(byte)((ulong)uVar55 >> 8)) +
                         (uint)(ushort)((ushort)bVar20 * (ushort)(byte)((ulong)uVar54 >> 8)) +
                        uVar16) >> 5);
      auVar41._0_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar19 * (ushort)(byte)uVar55) +
                         (uint)(ushort)((ushort)bVar18 * (ushort)(byte)uVar54) + uVar15) >> 5);
      auVar41._4_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar23 * (ushort)(byte)((ulong)uVar55 >> 0x10)) +
                         (uint)(ushort)((ushort)bVar22 * (ushort)(byte)((ulong)uVar54 >> 0x10)) +
                        uVar56) >> 5);
      auVar41._6_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar25 * (ushort)(byte)((ulong)uVar55 >> 0x18)) +
                         (uint)(ushort)((ushort)bVar24 * (ushort)(byte)((ulong)uVar54 >> 0x18)) +
                        uVar57) >> 5);
      auVar41._8_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar27 * (ushort)(byte)((ulong)uVar55 >> 0x20)) +
                         (uint)(ushort)((ushort)bVar26 * (ushort)(byte)((ulong)uVar54 >> 0x20)) +
                        uVar2) >> 5);
      auVar41._10_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar29 * (ushort)(byte)((ulong)uVar55 >> 0x28)) +
                         (uint)(ushort)((ushort)bVar28 * (ushort)(byte)((ulong)uVar54 >> 0x28)) +
                        uVar45) >> 5);
      auVar41._12_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar31 * (ushort)(byte)((ulong)uVar55 >> 0x30)) +
                         (uint)(ushort)((ushort)bVar30 * (ushort)(byte)((ulong)uVar54 >> 0x30)) +
                        uVar46) >> 5);
      auVar41._14_2_ =
           (short)((int)((uint)(ushort)((ushort)bVar33 * (ushort)(byte)((ulong)uVar55 >> 0x38)) +
                         (uint)(ushort)((ushort)bVar32 * (ushort)(byte)((ulong)uVar54 >> 0x38)) +
                        uVar47) >> 5);
      auVar52._2_2_ = (short)((int)((uint)auVar37._2_2_ + (uint)auVar60._2_2_ + uVar14) >> 5);
      auVar52._0_2_ = (short)((int)((uint)auVar37._0_2_ + (uint)auVar60._0_2_ + uVar3) >> 5);
      auVar52._4_2_ = (short)((int)((uint)auVar37._4_2_ + (uint)auVar60._4_2_ + uVar58) >> 5);
      auVar52._6_2_ = (short)((int)((uint)auVar37._6_2_ + (uint)auVar60._6_2_ + uVar59) >> 5);
      auVar52._8_2_ = (short)((int)((uint)auVar37._8_2_ + (uint)auVar60._8_2_ + uVar1) >> 5);
      auVar52._10_2_ = (short)((int)((uint)auVar37._10_2_ + (uint)auVar60._10_2_ + uVar48) >> 5);
      auVar52._12_2_ = (short)((int)((uint)auVar37._12_2_ + (uint)auVar60._12_2_ + uVar49) >> 5);
      auVar52._14_2_ = (short)((int)((uint)auVar37._14_2_ + (uint)auVar60._14_2_ + uVar50) >> 5);
      auVar37._8_2_ = 0x3f;
      auVar37._0_8_ = 0x3f003f003f003f;
      auVar37._10_2_ = 0x3f;
      auVar37._12_2_ = 0x3f;
      auVar37._14_2_ = 0x3f;
      auVar51 = NEON_umin(auVar51,auVar37,2);
      auVar38._8_2_ = 0x3f;
      auVar38._0_8_ = 0x3f003f003f003f;
      auVar38._10_2_ = 0x3f;
      auVar38._12_2_ = 0x3f;
      auVar38._14_2_ = 0x3f;
      auVar44 = NEON_umin(auVar44,auVar38,2);
      auVar40._8_2_ = 0x3f;
      auVar40._0_8_ = 0x3f003f003f003f;
      auVar40._10_2_ = 0x3f;
      auVar40._12_2_ = 0x3f;
      auVar40._14_2_ = 0x3f;
      auVar42 = NEON_umin(auVar42,auVar40,2);
      auVar12._8_2_ = 0x3f;
      auVar12._0_8_ = 0x3f003f003f003f;
      auVar12._10_2_ = 0x3f;
      auVar12._12_2_ = 0x3f;
      auVar12._14_2_ = 0x3f;
      auVar40 = NEON_umin(auVar53,auVar12,2);
      auVar13._8_2_ = 0x3f;
      auVar13._0_8_ = 0x3f003f003f003f;
      auVar13._10_2_ = 0x3f;
      auVar13._12_2_ = 0x3f;
      auVar13._14_2_ = 0x3f;
      auVar38 = NEON_umin(auVar52,auVar13,2);
      auVar39._8_2_ = 0x3f;
      auVar39._0_8_ = 0x3f003f003f003f;
      auVar39._10_2_ = 0x3f;
      auVar39._12_2_ = 0x3f;
      auVar39._14_2_ = 0x3f;
      auVar37 = NEON_umin(auVar41,auVar39,2);
      puVar11 = *param_1 + lVar17;
      puVar11[0x10] = auVar44[0];
      puVar11[0x11] = auVar44[2];
      puVar11[0x12] = auVar44[4];
      puVar11[0x13] = auVar44[6];
      puVar11[0x14] = auVar44[8];
      puVar11[0x15] = auVar44[10];
      puVar11[0x16] = auVar44[12];
      puVar11[0x17] = auVar44[14];
      *puVar11 = auVar51[0];
      puVar11[1] = auVar51[2];
      puVar11[2] = auVar51[4];
      puVar11[3] = auVar51[6];
      puVar11[4] = auVar51[8];
      puVar11[5] = auVar51[10];
      puVar11[6] = auVar51[12];
      puVar11[7] = auVar51[14];
      *(ulong *)((long)(*pauVar6 + lVar17) + 8) =
           CONCAT17(auVar40[14],
                    CONCAT16(auVar40[12],
                             CONCAT15(auVar40[10],
                                      CONCAT14(auVar40[8],
                                               CONCAT13(auVar40[6],
                                                        CONCAT12(auVar40[4],
                                                                 CONCAT11(auVar40[2],auVar40[0])))))
                            ));
      *(ulong *)(*pauVar6 + lVar17) =
           CONCAT17(auVar42[14],
                    CONCAT16(auVar42[12],
                             CONCAT15(auVar42[10],
                                      CONCAT14(auVar42[8],
                                               CONCAT13(auVar42[6],
                                                        CONCAT12(auVar42[4],
                                                                 CONCAT11(auVar42[2],auVar42[0])))))
                            ));
      *(ulong *)((long)(*pauVar8 + lVar17) + 8) =
           CONCAT17(auVar37[14],
                    CONCAT16(auVar37[12],
                             CONCAT15(auVar37[10],
                                      CONCAT14(auVar37[8],
                                               CONCAT13(auVar37[6],
                                                        CONCAT12(auVar37[4],
                                                                 CONCAT11(auVar37[2],auVar37[0])))))
                            ));
      *(ulong *)(*pauVar8 + lVar17) =
           CONCAT17(auVar38[14],
                    CONCAT16(auVar38[12],
                             CONCAT15(auVar38[10],
                                      CONCAT14(auVar38[8],
                                               CONCAT13(auVar38[6],
                                                        CONCAT12(auVar38[4],
                                                                 CONCAT11(auVar38[2],auVar38[0])))))
                            ));
      lVar17 = lVar17 + 0x10;
      param_2 = param_2 + 1;
    } while (lVar17 != 0x100);
    return;
  }
  lVar17 = 0;
  do {
    bVar18 = (*param_4)[lVar17];
    bVar19 = (*param_3)[lVar17];
    iVar4 = (uint)(byte)(*param_5)[lVar17] * 0x3f + 0x10;
    uVar1 = (uint)(byte)param_2[0x30][0] * (uint)bVar18 + (uint)(byte)(*param_2)[0] * (uint)bVar19 +
            iVar4;
    uVar2 = (uint)(byte)param_2[0x40][0] * (uint)bVar18 +
            (uint)(byte)param_2[0x10][0] * (uint)bVar19 + iVar4;
    uVar3 = (uint)(byte)param_2[0x50][0] * (uint)bVar18 +
            (uint)(byte)param_2[0x20][0] * (uint)bVar19 + iVar4;
    uVar9 = (undefined)((int)uVar1 >> 5);
    if (0x7ff < uVar1) {
      uVar9 = 0x3f;
    }
    uVar10 = (undefined)((int)uVar2 >> 5);
    (*param_1)[lVar17] = uVar9;
    if (0x7ff < uVar2) {
      uVar10 = 0x3f;
    }
    uVar9 = (undefined)((int)uVar3 >> 5);
    (*pauVar6)[lVar17] = uVar10;
    if (0x7ff < uVar3) {
      uVar9 = 0x3f;
    }
    (*pauVar8)[lVar17] = uVar9;
    lVar17 = lVar17 + 1;
    param_2 = (undefined (*) [16])(*param_2 + 1);
  } while (lVar17 != 0x100);
  return;
}


