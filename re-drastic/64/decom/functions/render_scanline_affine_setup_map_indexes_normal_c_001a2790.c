/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_map_indexes_normal_c
 * Address  : 001a2790
 * Program  : drastic64
 */


void render_scanline_affine_setup_map_indexes_normal_c
               (undefined (*param_1) [16],short *param_2,uint param_3,uint param_4,uint param_5,
               int param_6,int param_7,uint param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  uint3 uVar8;
  bool bVar9;
  ushort uVar10;
  uint uVar11;
  short *psVar12;
  uint uVar13;
  uint uVar14;
  undefined (*pauVar15) [16];
  long lVar17;
  byte bVar18;
  byte bVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined auVar24 [16];
  short sVar31;
  uint uVar32;
  uint uVar33;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined auVar39 [16];
  uint uVar47;
  uint uVar48;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined auVar49 [16];
  undefined auVar50 [16];
  uint uVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  short sVar61;
  uint uVar62;
  short sVar63;
  short sVar64;
  uint uVar67;
  uint uVar68;
  undefined (*pauVar16) [16];
  undefined4 uVar34;
  undefined6 uVar35;
  undefined8 uVar36;
  undefined auVar37 [12];
  undefined auVar38 [14];
  undefined auVar40 [16];
  undefined4 uVar65;
  undefined6 uVar66;
  
  uVar10 = (ushort)param_8;
  *param_2 = (short)((param_8 & param_5 >> 0xb) << (ulong)(param_9 & 0x1f)) +
             (uVar10 & (ushort)(param_4 >> 0xb));
  if (param_3 != 0) {
    psVar12 = param_2 + 1;
    bVar9 = psVar12 < (short *)((long)*param_1 + (ulong)param_3);
    if ((param_1 < (undefined (*) [16])(param_2 + (ulong)param_3 + 1) && bVar9 || param_3 - 1 < 0xe)
        || (param_1 >= (undefined (*) [16])(param_2 + (ulong)param_3 + 1) || !bVar9) &&
           param_3 - 1 == 0xe) {
      lVar17 = 0;
      do {
        uVar14 = (uint)*(byte *)((long)*param_1 + lVar17);
        psVar12[lVar17] =
             (short)((param_8 & param_5 + param_7 * uVar14 >> 0xb) << (ulong)(param_9 & 0x1f)) +
             (uVar10 & (ushort)(param_4 + param_6 * uVar14 >> 0xb));
        lVar17 = lVar17 + 1;
      } while ((uint)lVar17 < param_3);
      return;
    }
    pauVar15 = param_1;
    do {
      pauVar16 = pauVar15 + 1;
      auVar21 = *pauVar15;
      uVar8 = CONCAT12(auVar21[1],auVar21._0_2_) & 0xff00ff;
      bVar19 = auVar21[5];
      bVar18 = auVar21[9];
      uVar67 = uVar8 & 0xffff;
      uVar57 = CONCAT12(bVar19,(ushort)auVar21[4]) & 0xffff;
      uVar62 = CONCAT12(bVar18,(ushort)auVar21[8]) & 0xffff;
      uVar68 = (uint)(byte)(uVar8 >> 0x10);
      uVar47 = param_5 + uVar67 * param_7;
      uVar51 = param_5 + uVar68 * param_7;
      uVar53 = param_5 + (uint)auVar21[2] * param_7;
      uVar55 = param_5 + (uint)auVar21[3] * param_7;
      uVar32 = param_5 + uVar57 * param_7;
      uVar41 = param_5 + (uint)bVar19 * param_7;
      uVar43 = param_5 + (uint)auVar21[6] * param_7;
      uVar45 = param_5 + (uint)auVar21[7] * param_7;
      uVar14 = param_5 + uVar62 * param_7;
      uVar13 = param_5 + (uint)bVar18 * param_7;
      uVar2 = param_5 + (uint)auVar21[10] * param_7;
      uVar4 = param_5 + (uint)auVar21[11] * param_7;
      uVar22 = param_5 + (uint)auVar21[12] * param_7;
      uVar25 = param_5 + (uint)auVar21[13] * param_7;
      uVar27 = param_5 + (uint)auVar21[14] * param_7;
      uVar29 = param_5 + (uint)auVar21[15] * param_7;
      uVar48 = uVar47 >> 0xb;
      uVar52 = uVar51 >> 0xb;
      uVar54 = uVar53 >> 0xb;
      uVar56 = uVar55 >> 0xb;
      uVar33 = uVar32 >> 0xb;
      uVar42 = uVar41 >> 0xb;
      uVar44 = uVar43 >> 0xb;
      uVar46 = uVar45 >> 0xb;
      uVar23 = uVar22 >> 0xb;
      uVar26 = uVar25 >> 0xb;
      uVar28 = uVar27 >> 0xb;
      uVar30 = uVar29 >> 0xb;
      uVar11 = uVar14 >> 0xb;
      uVar1 = uVar13 >> 0xb;
      uVar3 = uVar2 >> 0xb;
      uVar5 = uVar4 >> 0xb;
      bVar58 = (byte)param_8;
      auVar49[0] = (byte)uVar48 & bVar58;
      bVar59 = (byte)(param_8 >> 8);
      auVar49[1] = (byte)(uVar48 >> 8) & bVar59;
      bVar60 = (byte)(param_8 >> 0x10);
      auVar49[2] = (byte)(uVar47 >> 0x1b) & bVar60;
      auVar49[3] = 0;
      auVar49[4] = (byte)uVar52 & bVar58;
      auVar49[5] = (byte)(uVar52 >> 8) & bVar59;
      auVar49[6] = (byte)(uVar51 >> 0x1b) & bVar60;
      auVar49[7] = 0;
      auVar49[8] = (byte)uVar54 & bVar58;
      auVar49[9] = (byte)(uVar54 >> 8) & bVar59;
      auVar49[10] = (byte)(uVar53 >> 0x1b) & bVar60;
      auVar49[11] = 0;
      auVar49[12] = (byte)uVar56 & bVar58;
      auVar49[13] = (byte)(uVar56 >> 8) & bVar59;
      auVar49[14] = (byte)(uVar55 >> 0x1b) & bVar60;
      auVar49[15] = 0;
      auVar39[0] = (byte)uVar33 & bVar58;
      auVar39[1] = (byte)(uVar33 >> 8) & bVar59;
      auVar39[2] = (byte)(uVar32 >> 0x1b) & bVar60;
      auVar39[3] = 0;
      auVar39[4] = (byte)uVar42 & bVar58;
      auVar39[5] = (byte)(uVar42 >> 8) & bVar59;
      auVar39[6] = (byte)(uVar41 >> 0x1b) & bVar60;
      auVar39[7] = 0;
      auVar39[8] = (byte)uVar44 & bVar58;
      auVar39[9] = (byte)(uVar44 >> 8) & bVar59;
      auVar39[10] = (byte)(uVar43 >> 0x1b) & bVar60;
      auVar39[11] = 0;
      auVar39[12] = (byte)uVar46 & bVar58;
      auVar39[13] = (byte)(uVar46 >> 8) & bVar59;
      auVar39[14] = (byte)(uVar45 >> 0x1b) & bVar60;
      auVar39[15] = 0;
      auVar20[0] = (byte)uVar23 & bVar58;
      auVar20[1] = (byte)(uVar23 >> 8) & bVar59;
      auVar20[2] = (byte)(uVar22 >> 0x1b) & bVar60;
      auVar20[3] = 0;
      auVar20[4] = (byte)uVar26 & bVar58;
      auVar20[5] = (byte)(uVar26 >> 8) & bVar59;
      auVar20[6] = (byte)(uVar25 >> 0x1b) & bVar60;
      auVar20[7] = 0;
      auVar20[8] = (byte)uVar28 & bVar58;
      auVar20[9] = (byte)(uVar28 >> 8) & bVar59;
      auVar20[10] = (byte)(uVar27 >> 0x1b) & bVar60;
      auVar20[11] = 0;
      auVar20[12] = (byte)uVar30 & bVar58;
      auVar20[13] = (byte)(uVar30 >> 8) & bVar59;
      auVar20[14] = (byte)(uVar29 >> 0x1b) & bVar60;
      auVar20[15] = 0;
      uVar22 = param_4 + (uint)auVar21[12] * param_6 >> 0xb;
      uVar23 = param_4 + (uint)auVar21[13] * param_6 >> 0xb;
      uVar25 = param_4 + (uint)auVar21[14] * param_6 >> 0xb;
      uVar26 = param_4 + (uint)auVar21[15] * param_6 >> 0xb;
      uVar43 = param_4 + uVar67 * param_6 >> 0xb;
      uVar44 = param_4 + uVar68 * param_6 >> 0xb;
      uVar45 = param_4 + (uint)auVar21[2] * param_6 >> 0xb;
      uVar46 = param_4 + (uint)auVar21[3] * param_6 >> 0xb;
      uVar32 = param_4 + uVar57 * param_6 >> 0xb;
      uVar33 = param_4 + (uint)bVar19 * param_6 >> 0xb;
      uVar41 = param_4 + (uint)auVar21[6] * param_6 >> 0xb;
      uVar42 = param_4 + (uint)auVar21[7] * param_6 >> 0xb;
      uVar27 = param_4 + uVar62 * param_6 >> 0xb;
      uVar28 = param_4 + (uint)bVar18 * param_6 >> 0xb;
      uVar29 = param_4 + (uint)auVar21[10] * param_6 >> 0xb;
      uVar30 = param_4 + (uint)auVar21[11] * param_6 >> 0xb;
      auVar24._4_4_ = param_9;
      auVar24._0_4_ = param_9;
      auVar24._8_4_ = param_9;
      auVar24._12_4_ = param_9;
      auVar39 = NEON_sshl(auVar39,auVar24,4);
      auVar50._4_4_ = param_9;
      auVar50._0_4_ = param_9;
      auVar50._8_4_ = param_9;
      auVar50._12_4_ = param_9;
      auVar50 = NEON_sshl(auVar49,auVar50,4);
      auVar21[1] = (byte)(uVar11 >> 8) & bVar59;
      auVar21[0] = (byte)uVar11 & bVar58;
      auVar21[2] = (byte)(uVar14 >> 0x1b) & bVar60;
      auVar21[3] = 0;
      auVar21[4] = (byte)uVar1 & bVar58;
      auVar21[5] = (byte)(uVar1 >> 8) & bVar59;
      auVar21[6] = (byte)(uVar13 >> 0x1b) & bVar60;
      auVar21[7] = 0;
      auVar21[8] = (byte)uVar3 & bVar58;
      auVar21[9] = (byte)(uVar3 >> 8) & bVar59;
      auVar21[10] = (byte)(uVar2 >> 0x1b) & bVar60;
      auVar21[11] = 0;
      auVar21[12] = (byte)uVar5 & bVar58;
      auVar21[13] = (byte)(uVar5 >> 8) & bVar59;
      auVar21[14] = (byte)(uVar4 >> 0x1b) & bVar60;
      auVar21[15] = 0;
      auVar6._4_4_ = param_9;
      auVar6._0_4_ = param_9;
      auVar6._8_4_ = param_9;
      auVar6._12_4_ = param_9;
      auVar24 = NEON_sshl(auVar21,auVar6,4);
      auVar7._4_4_ = param_9;
      auVar7._0_4_ = param_9;
      auVar7._8_4_ = param_9;
      auVar7._12_4_ = param_9;
      auVar21 = NEON_sshl(auVar20,auVar7,4);
      sVar31 = CONCAT11((byte)(uVar27 >> 8) & bVar59,(byte)uVar27 & bVar58);
      uVar34 = CONCAT13((byte)(uVar28 >> 8) & bVar59,CONCAT12((byte)uVar28 & bVar58,sVar31));
      uVar35 = CONCAT15((byte)(uVar29 >> 8) & bVar59,CONCAT14((byte)uVar29 & bVar58,uVar34));
      uVar36 = CONCAT17((byte)(uVar30 >> 8) & bVar59,CONCAT16((byte)uVar30 & bVar58,uVar35));
      auVar37._0_10_ = CONCAT19((byte)(uVar22 >> 8) & bVar59,CONCAT18((byte)uVar22 & bVar58,uVar36))
      ;
      auVar37[10] = (byte)uVar23 & bVar58;
      auVar37[11] = (byte)(uVar23 >> 8) & bVar59;
      auVar38[12] = (byte)uVar25 & bVar58;
      auVar38._0_12_ = auVar37;
      auVar38[13] = (byte)(uVar25 >> 8) & bVar59;
      auVar40[14] = (byte)uVar26 & bVar58;
      auVar40._0_14_ = auVar38;
      auVar40[15] = (byte)(uVar26 >> 8) & bVar59;
      sVar61 = CONCAT11((byte)(uVar43 >> 8) & bVar59,(byte)uVar43 & bVar58);
      sVar63 = CONCAT11((byte)(uVar45 >> 8) & bVar59,(byte)uVar45 & bVar58);
      sVar64 = CONCAT11((byte)(uVar32 >> 8) & bVar59,(byte)uVar32 & bVar58);
      uVar65 = CONCAT13((byte)(uVar33 >> 8) & bVar59,CONCAT12((byte)uVar33 & bVar58,sVar64));
      uVar66 = CONCAT15((byte)(uVar41 >> 8) & bVar59,CONCAT14((byte)uVar41 & bVar58,uVar65));
      psVar12[8] = auVar39._0_2_ + sVar64;
      psVar12[9] = auVar39._4_2_ + (short)((uint)uVar65 >> 0x10);
      psVar12[10] = auVar39._8_2_ + (short)((uint6)uVar66 >> 0x20);
      psVar12[0xb] = auVar39._12_2_ +
                     (short)(CONCAT17((byte)(uVar42 >> 8) & bVar59,
                                      CONCAT16((byte)uVar42 & bVar58,uVar66)) >> 0x30);
      *psVar12 = auVar50._0_2_ + sVar61;
      psVar12[1] = auVar50._4_2_ +
                   (short)(CONCAT13((byte)(uVar44 >> 8) & bVar59,
                                    CONCAT12((byte)uVar44 & bVar58,sVar61)) >> 0x10);
      psVar12[2] = auVar50._8_2_ + sVar63;
      psVar12[3] = auVar50._12_2_ +
                   (short)(CONCAT13((byte)(uVar46 >> 8) & bVar59,
                                    CONCAT12((byte)uVar46 & bVar58,sVar63)) >> 0x10);
      psVar12[0x10] = auVar21._0_2_ + (short)((unkuint10)auVar37._0_10_ >> 0x40);
      psVar12[0x11] = auVar21._4_2_ + auVar37._10_2_;
      psVar12[0x12] = auVar21._8_2_ + auVar38._12_2_;
      psVar12[0x13] = auVar21._12_2_ + auVar40._14_2_;
      psVar12[8] = auVar24._0_2_ + sVar31;
      psVar12[9] = auVar24._4_2_ + (short)((uint)uVar34 >> 0x10);
      psVar12[10] = auVar24._8_2_ + (short)((uint6)uVar35 >> 0x20);
      psVar12[0xb] = auVar24._12_2_ + (short)((ulong)uVar36 >> 0x30);
      psVar12 = psVar12 + 0x10;
      pauVar15 = pauVar16;
    } while (pauVar16 != param_1 + (param_3 >> 4));
    uVar14 = param_3 & 0xfffffff0;
    if ((param_3 & 0xf) != 0) {
      uVar11 = (uint)*(byte *)((long)*param_1 + (ulong)uVar14);
      param_2[uVar14 + 1] =
           (short)((param_8 & param_5 + uVar11 * param_7 >> 0xb) << (ulong)(param_9 & 0x1f)) +
           (uVar10 & (ushort)(param_4 + uVar11 * param_6 >> 0xb));
      if (uVar14 + 1 < param_3) {
        uVar11 = uVar14 + 2;
        uVar13 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar14 + 1));
        param_2[uVar11] =
             (short)((param_8 & param_5 + param_7 * uVar13 >> 0xb) << (ulong)(param_9 & 0x1f)) +
             (uVar10 & (ushort)(param_4 + param_6 * uVar13 >> 0xb));
        if (uVar11 < param_3) {
          uVar11 = (uint)*(byte *)((long)*param_1 + (ulong)uVar11);
          param_2[uVar14 + 3] =
               (short)((param_8 & param_5 + param_7 * uVar11 >> 0xb) << (ulong)(param_9 & 0x1f)) +
               (uVar10 & (ushort)(param_4 + param_6 * uVar11 >> 0xb));
          if (uVar14 + 3 < param_3) {
            uVar11 = uVar14 + 4;
            uVar13 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar14 + 3));
            param_2[uVar11] =
                 (short)((param_8 & param_5 + param_7 * uVar13 >> 0xb) << (ulong)(param_9 & 0x1f)) +
                 (uVar10 & (ushort)(param_4 + param_6 * uVar13 >> 0xb));
            if (uVar11 < param_3) {
              uVar11 = (uint)*(byte *)((long)*param_1 + (ulong)uVar11);
              param_2[uVar14 + 5] =
                   (short)((param_8 & param_5 + param_7 * uVar11 >> 0xb) << (ulong)(param_9 & 0x1f))
                   + (uVar10 & (ushort)(param_4 + param_6 * uVar11 >> 0xb));
              if (uVar14 + 5 < param_3) {
                uVar11 = uVar14 + 6;
                uVar13 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar14 + 5));
                param_2[uVar11] =
                     (short)((param_8 & param_5 + param_7 * uVar13 >> 0xb) <<
                            (ulong)(param_9 & 0x1f)) +
                     (uVar10 & (ushort)(param_4 + param_6 * uVar13 >> 0xb));
                if (uVar11 < param_3) {
                  uVar11 = (uint)*(byte *)((long)*param_1 + (ulong)uVar11);
                  param_2[uVar14 + 7] =
                       (short)((param_8 & param_5 + param_7 * uVar11 >> 0xb) <<
                              (ulong)(param_9 & 0x1f)) +
                       (uVar10 & (ushort)(param_4 + param_6 * uVar11 >> 0xb));
                  if (uVar14 + 7 < param_3) {
                    uVar11 = uVar14 + 8;
                    uVar13 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar14 + 7));
                    param_2[uVar11] =
                         (short)((param_8 & param_5 + param_7 * uVar13 >> 0xb) <<
                                (ulong)(param_9 & 0x1f)) +
                         (uVar10 & (ushort)(param_4 + param_6 * uVar13 >> 0xb));
                    if (uVar11 < param_3) {
                      uVar11 = (uint)*(byte *)((long)*param_1 + (ulong)uVar11);
                      param_2[uVar14 + 9] =
                           (short)((param_8 & param_5 + param_7 * uVar11 >> 0xb) <<
                                  (ulong)(param_9 & 0x1f)) +
                           (uVar10 & (ushort)(param_4 + param_6 * uVar11 >> 0xb));
                      if (uVar14 + 9 < param_3) {
                        uVar11 = uVar14 + 10;
                        uVar13 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar14 + 9));
                        param_2[uVar11] =
                             (short)((param_8 & param_5 + param_7 * uVar13 >> 0xb) <<
                                    (ulong)(param_9 & 0x1f)) +
                             (uVar10 & (ushort)(param_4 + param_6 * uVar13 >> 0xb));
                        if (uVar11 < param_3) {
                          uVar11 = (uint)*(byte *)((long)*param_1 + (ulong)uVar11);
                          param_2[uVar14 + 0xb] =
                               (short)((param_8 & param_5 + param_7 * uVar11 >> 0xb) <<
                                      (ulong)(param_9 & 0x1f)) +
                               (uVar10 & (ushort)(param_4 + param_6 * uVar11 >> 0xb));
                          if (uVar14 + 0xb < param_3) {
                            uVar11 = uVar14 + 0xc;
                            uVar13 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar14 + 0xb));
                            param_2[uVar11] =
                                 (short)((param_8 & param_5 + param_7 * uVar13 >> 0xb) <<
                                        (ulong)(param_9 & 0x1f)) +
                                 (uVar10 & (ushort)(param_4 + param_6 * uVar13 >> 0xb));
                            if (uVar11 < param_3) {
                              uVar11 = (uint)*(byte *)((long)*param_1 + (ulong)uVar11);
                              param_2[uVar14 + 0xd] =
                                   (short)((param_8 & param_5 + param_7 * uVar11 >> 0xb) <<
                                          (ulong)(param_9 & 0x1f)) +
                                   (uVar10 & (ushort)(param_4 + param_6 * uVar11 >> 0xb));
                              if (uVar14 + 0xd < param_3) {
                                uVar11 = uVar14 + 0xe;
                                uVar13 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar14 + 0xd));
                                param_2[uVar11] =
                                     (short)((param_8 & param_5 + param_7 * uVar13 >> 0xb) <<
                                            (ulong)(param_9 & 0x1f)) +
                                     (uVar10 & (ushort)(param_4 + param_6 * uVar13 >> 0xb));
                                if (uVar11 < param_3) {
                                  uVar11 = (uint)*(byte *)((long)*param_1 + (ulong)uVar11);
                                  param_2[uVar14 + 0xf] =
                                       (short)((param_8 & param_5 + param_7 * uVar11 >> 0xb) <<
                                              (ulong)(param_9 & 0x1f)) +
                                       (uVar10 & (ushort)(param_4 + param_6 * uVar11 >> 0xb));
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
  return;
}


