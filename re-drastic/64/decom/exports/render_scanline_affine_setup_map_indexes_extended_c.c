/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_map_indexes_extended_c
 * Address  : 001a2bd0
 * Program  : drastic64
 */


void render_scanline_affine_setup_map_indexes_extended_c
               (undefined (*param_1) [16],short *param_2,uint param_3,uint param_4,uint param_5,
               int param_6,int param_7,int param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint3 uVar9;
  bool bVar10;
  ushort uVar11;
  uint uVar12;
  short *psVar13;
  uint uVar14;
  uint uVar15;
  undefined (*pauVar16) [16];
  long lVar18;
  byte bVar19;
  byte bVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  uint uVar23;
  uint uVar24;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined auVar25 [16];
  short sVar32;
  uint uVar33;
  uint uVar34;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined auVar40 [16];
  uint uVar48;
  uint uVar49;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  undefined auVar50 [16];
  undefined auVar51 [16];
  uint uVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  short sVar62;
  uint uVar63;
  short sVar64;
  short sVar65;
  uint uVar68;
  uint uVar69;
  undefined (*pauVar17) [16];
  undefined4 uVar35;
  undefined6 uVar36;
  undefined8 uVar37;
  undefined auVar38 [12];
  undefined auVar39 [14];
  undefined auVar41 [16];
  undefined4 uVar66;
  undefined6 uVar67;
  
  uVar1 = param_8 << 1;
  uVar11 = (ushort)uVar1;
  *param_2 = (short)((uVar1 & param_5 >> 10) << (ulong)(param_9 & 0x1f)) +
             (uVar11 & (ushort)(param_4 >> 10));
  if (param_3 != 0) {
    psVar13 = param_2 + 1;
    bVar10 = psVar13 < (short *)((long)*param_1 + (ulong)param_3);
    if ((param_1 < (undefined (*) [16])(param_2 + (ulong)param_3 + 1) && bVar10 || param_3 - 1 < 0xe
        ) || (param_1 >= (undefined (*) [16])(param_2 + (ulong)param_3 + 1) || !bVar10) &&
             param_3 - 1 == 0xe) {
      lVar18 = 0;
      do {
        uVar15 = (uint)*(byte *)((long)*param_1 + lVar18);
        psVar13[lVar18] =
             (short)((uVar1 & param_5 + param_7 * uVar15 >> 10) << (ulong)(param_9 & 0x1f)) +
             (uVar11 & (ushort)(param_4 + param_6 * uVar15 >> 10));
        lVar18 = lVar18 + 1;
      } while ((uint)lVar18 < param_3);
      return;
    }
    pauVar16 = param_1;
    do {
      pauVar17 = pauVar16 + 1;
      auVar22 = *pauVar16;
      uVar9 = CONCAT12(auVar22[1],auVar22._0_2_) & 0xff00ff;
      bVar20 = auVar22[5];
      bVar19 = auVar22[9];
      uVar68 = uVar9 & 0xffff;
      uVar58 = CONCAT12(bVar20,(ushort)auVar22[4]) & 0xffff;
      uVar63 = CONCAT12(bVar19,(ushort)auVar22[8]) & 0xffff;
      uVar69 = (uint)(byte)(uVar9 >> 0x10);
      uVar48 = param_5 + uVar68 * param_7;
      uVar52 = param_5 + uVar69 * param_7;
      uVar54 = param_5 + (uint)auVar22[2] * param_7;
      uVar56 = param_5 + (uint)auVar22[3] * param_7;
      uVar33 = param_5 + uVar58 * param_7;
      uVar42 = param_5 + (uint)bVar20 * param_7;
      uVar44 = param_5 + (uint)auVar22[6] * param_7;
      uVar46 = param_5 + (uint)auVar22[7] * param_7;
      uVar15 = param_5 + uVar63 * param_7;
      uVar14 = param_5 + (uint)bVar19 * param_7;
      uVar3 = param_5 + (uint)auVar22[10] * param_7;
      uVar5 = param_5 + (uint)auVar22[11] * param_7;
      uVar23 = param_5 + (uint)auVar22[12] * param_7;
      uVar26 = param_5 + (uint)auVar22[13] * param_7;
      uVar28 = param_5 + (uint)auVar22[14] * param_7;
      uVar30 = param_5 + (uint)auVar22[15] * param_7;
      uVar49 = uVar48 >> 10;
      uVar53 = uVar52 >> 10;
      uVar55 = uVar54 >> 10;
      uVar57 = uVar56 >> 10;
      uVar34 = uVar33 >> 10;
      uVar43 = uVar42 >> 10;
      uVar45 = uVar44 >> 10;
      uVar47 = uVar46 >> 10;
      uVar24 = uVar23 >> 10;
      uVar27 = uVar26 >> 10;
      uVar29 = uVar28 >> 10;
      uVar31 = uVar30 >> 10;
      uVar12 = uVar15 >> 10;
      uVar2 = uVar14 >> 10;
      uVar4 = uVar3 >> 10;
      uVar6 = uVar5 >> 10;
      bVar59 = (byte)uVar1;
      auVar50[0] = (byte)uVar49 & bVar59;
      bVar60 = (byte)(uVar1 >> 8);
      auVar50[1] = (byte)(uVar49 >> 8) & bVar60;
      bVar61 = (byte)(uVar1 >> 0x10);
      auVar50[2] = (byte)(uVar48 >> 0x1a) & bVar61;
      auVar50[3] = 0;
      auVar50[4] = (byte)uVar53 & bVar59;
      auVar50[5] = (byte)(uVar53 >> 8) & bVar60;
      auVar50[6] = (byte)(uVar52 >> 0x1a) & bVar61;
      auVar50[7] = 0;
      auVar50[8] = (byte)uVar55 & bVar59;
      auVar50[9] = (byte)(uVar55 >> 8) & bVar60;
      auVar50[10] = (byte)(uVar54 >> 0x1a) & bVar61;
      auVar50[11] = 0;
      auVar50[12] = (byte)uVar57 & bVar59;
      auVar50[13] = (byte)(uVar57 >> 8) & bVar60;
      auVar50[14] = (byte)(uVar56 >> 0x1a) & bVar61;
      auVar50[15] = 0;
      auVar40[0] = (byte)uVar34 & bVar59;
      auVar40[1] = (byte)(uVar34 >> 8) & bVar60;
      auVar40[2] = (byte)(uVar33 >> 0x1a) & bVar61;
      auVar40[3] = 0;
      auVar40[4] = (byte)uVar43 & bVar59;
      auVar40[5] = (byte)(uVar43 >> 8) & bVar60;
      auVar40[6] = (byte)(uVar42 >> 0x1a) & bVar61;
      auVar40[7] = 0;
      auVar40[8] = (byte)uVar45 & bVar59;
      auVar40[9] = (byte)(uVar45 >> 8) & bVar60;
      auVar40[10] = (byte)(uVar44 >> 0x1a) & bVar61;
      auVar40[11] = 0;
      auVar40[12] = (byte)uVar47 & bVar59;
      auVar40[13] = (byte)(uVar47 >> 8) & bVar60;
      auVar40[14] = (byte)(uVar46 >> 0x1a) & bVar61;
      auVar40[15] = 0;
      auVar21[0] = (byte)uVar24 & bVar59;
      auVar21[1] = (byte)(uVar24 >> 8) & bVar60;
      auVar21[2] = (byte)(uVar23 >> 0x1a) & bVar61;
      auVar21[3] = 0;
      auVar21[4] = (byte)uVar27 & bVar59;
      auVar21[5] = (byte)(uVar27 >> 8) & bVar60;
      auVar21[6] = (byte)(uVar26 >> 0x1a) & bVar61;
      auVar21[7] = 0;
      auVar21[8] = (byte)uVar29 & bVar59;
      auVar21[9] = (byte)(uVar29 >> 8) & bVar60;
      auVar21[10] = (byte)(uVar28 >> 0x1a) & bVar61;
      auVar21[11] = 0;
      auVar21[12] = (byte)uVar31 & bVar59;
      auVar21[13] = (byte)(uVar31 >> 8) & bVar60;
      auVar21[14] = (byte)(uVar30 >> 0x1a) & bVar61;
      auVar21[15] = 0;
      uVar23 = param_4 + (uint)auVar22[12] * param_6 >> 10;
      uVar24 = param_4 + (uint)auVar22[13] * param_6 >> 10;
      uVar26 = param_4 + (uint)auVar22[14] * param_6 >> 10;
      uVar27 = param_4 + (uint)auVar22[15] * param_6 >> 10;
      uVar44 = param_4 + uVar68 * param_6 >> 10;
      uVar45 = param_4 + uVar69 * param_6 >> 10;
      uVar46 = param_4 + (uint)auVar22[2] * param_6 >> 10;
      uVar47 = param_4 + (uint)auVar22[3] * param_6 >> 10;
      uVar33 = param_4 + uVar58 * param_6 >> 10;
      uVar34 = param_4 + (uint)bVar20 * param_6 >> 10;
      uVar42 = param_4 + (uint)auVar22[6] * param_6 >> 10;
      uVar43 = param_4 + (uint)auVar22[7] * param_6 >> 10;
      uVar28 = param_4 + uVar63 * param_6 >> 10;
      uVar29 = param_4 + (uint)bVar19 * param_6 >> 10;
      uVar30 = param_4 + (uint)auVar22[10] * param_6 >> 10;
      uVar31 = param_4 + (uint)auVar22[11] * param_6 >> 10;
      auVar25._4_4_ = param_9;
      auVar25._0_4_ = param_9;
      auVar25._8_4_ = param_9;
      auVar25._12_4_ = param_9;
      auVar40 = NEON_sshl(auVar40,auVar25,4);
      auVar51._4_4_ = param_9;
      auVar51._0_4_ = param_9;
      auVar51._8_4_ = param_9;
      auVar51._12_4_ = param_9;
      auVar51 = NEON_sshl(auVar50,auVar51,4);
      auVar22[1] = (byte)(uVar12 >> 8) & bVar60;
      auVar22[0] = (byte)uVar12 & bVar59;
      auVar22[2] = (byte)(uVar15 >> 0x1a) & bVar61;
      auVar22[3] = 0;
      auVar22[4] = (byte)uVar2 & bVar59;
      auVar22[5] = (byte)(uVar2 >> 8) & bVar60;
      auVar22[6] = (byte)(uVar14 >> 0x1a) & bVar61;
      auVar22[7] = 0;
      auVar22[8] = (byte)uVar4 & bVar59;
      auVar22[9] = (byte)(uVar4 >> 8) & bVar60;
      auVar22[10] = (byte)(uVar3 >> 0x1a) & bVar61;
      auVar22[11] = 0;
      auVar22[12] = (byte)uVar6 & bVar59;
      auVar22[13] = (byte)(uVar6 >> 8) & bVar60;
      auVar22[14] = (byte)(uVar5 >> 0x1a) & bVar61;
      auVar22[15] = 0;
      auVar7._4_4_ = param_9;
      auVar7._0_4_ = param_9;
      auVar7._8_4_ = param_9;
      auVar7._12_4_ = param_9;
      auVar25 = NEON_sshl(auVar22,auVar7,4);
      auVar8._4_4_ = param_9;
      auVar8._0_4_ = param_9;
      auVar8._8_4_ = param_9;
      auVar8._12_4_ = param_9;
      auVar22 = NEON_sshl(auVar21,auVar8,4);
      sVar32 = CONCAT11((byte)(uVar28 >> 8) & bVar60,(byte)uVar28 & bVar59);
      uVar35 = CONCAT13((byte)(uVar29 >> 8) & bVar60,CONCAT12((byte)uVar29 & bVar59,sVar32));
      uVar36 = CONCAT15((byte)(uVar30 >> 8) & bVar60,CONCAT14((byte)uVar30 & bVar59,uVar35));
      uVar37 = CONCAT17((byte)(uVar31 >> 8) & bVar60,CONCAT16((byte)uVar31 & bVar59,uVar36));
      auVar38._0_10_ = CONCAT19((byte)(uVar23 >> 8) & bVar60,CONCAT18((byte)uVar23 & bVar59,uVar37))
      ;
      auVar38[10] = (byte)uVar24 & bVar59;
      auVar38[11] = (byte)(uVar24 >> 8) & bVar60;
      auVar39[12] = (byte)uVar26 & bVar59;
      auVar39._0_12_ = auVar38;
      auVar39[13] = (byte)(uVar26 >> 8) & bVar60;
      auVar41[14] = (byte)uVar27 & bVar59;
      auVar41._0_14_ = auVar39;
      auVar41[15] = (byte)(uVar27 >> 8) & bVar60;
      sVar62 = CONCAT11((byte)(uVar44 >> 8) & bVar60,(byte)uVar44 & bVar59);
      sVar64 = CONCAT11((byte)(uVar46 >> 8) & bVar60,(byte)uVar46 & bVar59);
      sVar65 = CONCAT11((byte)(uVar33 >> 8) & bVar60,(byte)uVar33 & bVar59);
      uVar66 = CONCAT13((byte)(uVar34 >> 8) & bVar60,CONCAT12((byte)uVar34 & bVar59,sVar65));
      uVar67 = CONCAT15((byte)(uVar42 >> 8) & bVar60,CONCAT14((byte)uVar42 & bVar59,uVar66));
      psVar13[8] = auVar40._0_2_ + sVar65;
      psVar13[9] = auVar40._4_2_ + (short)((uint)uVar66 >> 0x10);
      psVar13[10] = auVar40._8_2_ + (short)((uint6)uVar67 >> 0x20);
      psVar13[0xb] = auVar40._12_2_ +
                     (short)(CONCAT17((byte)(uVar43 >> 8) & bVar60,
                                      CONCAT16((byte)uVar43 & bVar59,uVar67)) >> 0x30);
      *psVar13 = auVar51._0_2_ + sVar62;
      psVar13[1] = auVar51._4_2_ +
                   (short)(CONCAT13((byte)(uVar45 >> 8) & bVar60,
                                    CONCAT12((byte)uVar45 & bVar59,sVar62)) >> 0x10);
      psVar13[2] = auVar51._8_2_ + sVar64;
      psVar13[3] = auVar51._12_2_ +
                   (short)(CONCAT13((byte)(uVar47 >> 8) & bVar60,
                                    CONCAT12((byte)uVar47 & bVar59,sVar64)) >> 0x10);
      psVar13[0x10] = auVar22._0_2_ + (short)((unkuint10)auVar38._0_10_ >> 0x40);
      psVar13[0x11] = auVar22._4_2_ + auVar38._10_2_;
      psVar13[0x12] = auVar22._8_2_ + auVar39._12_2_;
      psVar13[0x13] = auVar22._12_2_ + auVar41._14_2_;
      psVar13[8] = auVar25._0_2_ + sVar32;
      psVar13[9] = auVar25._4_2_ + (short)((uint)uVar35 >> 0x10);
      psVar13[10] = auVar25._8_2_ + (short)((uint6)uVar36 >> 0x20);
      psVar13[0xb] = auVar25._12_2_ + (short)((ulong)uVar37 >> 0x30);
      psVar13 = psVar13 + 0x10;
      pauVar16 = pauVar17;
    } while (pauVar17 != param_1 + (param_3 >> 4));
    uVar15 = param_3 & 0xfffffff0;
    if ((param_3 & 0xf) != 0) {
      uVar12 = (uint)*(byte *)((long)*param_1 + (ulong)uVar15);
      param_2[uVar15 + 1] =
           (short)((uVar1 & param_5 + uVar12 * param_7 >> 10) << (ulong)(param_9 & 0x1f)) +
           (uVar11 & (ushort)(param_4 + uVar12 * param_6 >> 10));
      if (uVar15 + 1 < param_3) {
        uVar12 = uVar15 + 2;
        uVar14 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar15 + 1));
        param_2[uVar12] =
             (short)((uVar1 & param_5 + param_7 * uVar14 >> 10) << (ulong)(param_9 & 0x1f)) +
             (uVar11 & (ushort)(param_4 + param_6 * uVar14 >> 10));
        if (uVar12 < param_3) {
          uVar12 = (uint)*(byte *)((long)*param_1 + (ulong)uVar12);
          param_2[uVar15 + 3] =
               (short)((uVar1 & param_5 + param_7 * uVar12 >> 10) << (ulong)(param_9 & 0x1f)) +
               (uVar11 & (ushort)(param_4 + param_6 * uVar12 >> 10));
          if (uVar15 + 3 < param_3) {
            uVar12 = uVar15 + 4;
            uVar14 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar15 + 3));
            param_2[uVar12] =
                 (short)((uVar1 & param_5 + param_7 * uVar14 >> 10) << (ulong)(param_9 & 0x1f)) +
                 (uVar11 & (ushort)(param_4 + param_6 * uVar14 >> 10));
            if (uVar12 < param_3) {
              uVar12 = (uint)*(byte *)((long)*param_1 + (ulong)uVar12);
              param_2[uVar15 + 5] =
                   (short)((uVar1 & param_5 + param_7 * uVar12 >> 10) << (ulong)(param_9 & 0x1f)) +
                   (uVar11 & (ushort)(param_4 + param_6 * uVar12 >> 10));
              if (uVar15 + 5 < param_3) {
                uVar12 = uVar15 + 6;
                uVar14 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar15 + 5));
                param_2[uVar12] =
                     (short)((uVar1 & param_5 + param_7 * uVar14 >> 10) << (ulong)(param_9 & 0x1f))
                     + (uVar11 & (ushort)(param_4 + param_6 * uVar14 >> 10));
                if (uVar12 < param_3) {
                  uVar12 = (uint)*(byte *)((long)*param_1 + (ulong)uVar12);
                  param_2[uVar15 + 7] =
                       (short)((uVar1 & param_5 + param_7 * uVar12 >> 10) << (ulong)(param_9 & 0x1f)
                              ) + (uVar11 & (ushort)(param_4 + param_6 * uVar12 >> 10));
                  if (uVar15 + 7 < param_3) {
                    uVar12 = uVar15 + 8;
                    uVar14 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar15 + 7));
                    param_2[uVar12] =
                         (short)((uVar1 & param_5 + param_7 * uVar14 >> 10) <<
                                (ulong)(param_9 & 0x1f)) +
                         (uVar11 & (ushort)(param_4 + param_6 * uVar14 >> 10));
                    if (uVar12 < param_3) {
                      uVar12 = (uint)*(byte *)((long)*param_1 + (ulong)uVar12);
                      param_2[uVar15 + 9] =
                           (short)((uVar1 & param_5 + param_7 * uVar12 >> 10) <<
                                  (ulong)(param_9 & 0x1f)) +
                           (uVar11 & (ushort)(param_4 + param_6 * uVar12 >> 10));
                      if (uVar15 + 9 < param_3) {
                        uVar12 = uVar15 + 10;
                        uVar14 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar15 + 9));
                        param_2[uVar12] =
                             (short)((uVar1 & param_5 + param_7 * uVar14 >> 10) <<
                                    (ulong)(param_9 & 0x1f)) +
                             (uVar11 & (ushort)(param_4 + param_6 * uVar14 >> 10));
                        if (uVar12 < param_3) {
                          uVar12 = (uint)*(byte *)((long)*param_1 + (ulong)uVar12);
                          param_2[uVar15 + 0xb] =
                               (short)((uVar1 & param_5 + param_7 * uVar12 >> 10) <<
                                      (ulong)(param_9 & 0x1f)) +
                               (uVar11 & (ushort)(param_4 + param_6 * uVar12 >> 10));
                          if (uVar15 + 0xb < param_3) {
                            uVar12 = uVar15 + 0xc;
                            uVar14 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar15 + 0xb));
                            param_2[uVar12] =
                                 (short)((uVar1 & param_5 + param_7 * uVar14 >> 10) <<
                                        (ulong)(param_9 & 0x1f)) +
                                 (uVar11 & (ushort)(param_4 + param_6 * uVar14 >> 10));
                            if (uVar12 < param_3) {
                              uVar12 = (uint)*(byte *)((long)*param_1 + (ulong)uVar12);
                              param_2[uVar15 + 0xd] =
                                   (short)((uVar1 & param_5 + param_7 * uVar12 >> 10) <<
                                          (ulong)(param_9 & 0x1f)) +
                                   (uVar11 & (ushort)(param_4 + param_6 * uVar12 >> 10));
                              if (uVar15 + 0xd < param_3) {
                                uVar12 = uVar15 + 0xe;
                                uVar14 = (uint)*(byte *)((long)*param_1 + (ulong)(uVar15 + 0xd));
                                param_2[uVar12] =
                                     (short)((uVar1 & param_5 + param_7 * uVar14 >> 10) <<
                                            (ulong)(param_9 & 0x1f)) +
                                     (uVar11 & (ushort)(param_4 + param_6 * uVar14 >> 10));
                                if (uVar12 < param_3) {
                                  uVar12 = (uint)*(byte *)((long)*param_1 + (ulong)uVar12);
                                  param_2[uVar15 + 0xf] =
                                       (short)((uVar1 & param_5 + param_7 * uVar12 >> 10) <<
                                              (ulong)(param_9 & 0x1f)) +
                                       (uVar11 & (ushort)(param_4 + param_6 * uVar12 >> 10));
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


