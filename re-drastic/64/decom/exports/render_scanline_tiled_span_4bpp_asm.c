/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_span_4bpp_asm
 * Address  : 0019efa0
 * Program  : drastic64
 */


void render_scanline_tiled_span_4bpp_asm
               (undefined *param_1,byte *param_2,long param_3,long param_4,ulong *param_5,
               uint *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined8 uVar13;
  undefined auVar14 [16];
  undefined8 uVar15;
  undefined auVar16 [16];
  undefined8 uVar17;
  undefined auVar18 [16];
  undefined8 uVar19;
  undefined auVar20 [16];
  undefined8 uVar21;
  undefined auVar22 [16];
  undefined8 uVar23;
  undefined *puVar24;
  byte *pbVar25;
  ulong *puVar26;
  uint *puVar27;
  int iVar28;
  ulong uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined auVar33 [16];
  byte bVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  undefined auVar41 [16];
  undefined auVar42 [16];
  byte bVar43;
  byte bVar44;
  undefined8 uVar45;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined auVar46 [16];
  undefined auVar47 [16];
  
  iVar28 = 0x20;
  do {
    pbVar25 = param_2;
    puVar24 = param_1;
    puVar27 = param_6 + 1;
    uVar38 = *param_6;
    puVar26 = param_5 + 1;
    uVar29 = *param_5;
    auVar46._4_4_ = uVar38;
    auVar46._0_4_ = uVar38;
    auVar46._8_4_ = uVar38;
    auVar46._12_4_ = uVar38;
    uVar5 = *(undefined4 *)(param_4 + (uVar29 & 0xffff));
    uVar6 = *(undefined4 *)(param_4 + (uVar29 >> 0x10 & 0xffff));
    uVar7 = *(undefined4 *)(param_4 + (uVar29 >> 0x20 & 0xffff));
    uVar8 = *(undefined4 *)(param_4 + (uVar29 >> 0x30));
    auVar33._4_4_ = uVar6;
    auVar33._0_4_ = uVar5;
    auVar33._8_4_ = uVar7;
    auVar33._12_4_ = uVar8;
    auVar41[0] = (byte)uVar5 >> 4;
    auVar41[1] = (byte)((uint)uVar5 >> 8) >> 4;
    auVar41[2] = (byte)((uint)uVar5 >> 0x10) >> 4;
    auVar41[3] = (byte)((uint)uVar5 >> 0x1c);
    auVar41[4] = (byte)uVar6 >> 4;
    auVar41[5] = (byte)((uint)uVar6 >> 8) >> 4;
    auVar41[6] = (byte)((uint)uVar6 >> 0x10) >> 4;
    auVar41[7] = (byte)((uint)uVar6 >> 0x1c);
    auVar41[8] = (byte)uVar7 >> 4;
    auVar41[9] = (byte)((uint)uVar7 >> 8) >> 4;
    auVar41[10] = (byte)((uint)uVar7 >> 0x10) >> 4;
    auVar41[11] = (byte)((uint)uVar7 >> 0x1c);
    auVar41[12] = (byte)uVar8 >> 4;
    auVar41[13] = (byte)((uint)uVar8 >> 8) >> 4;
    auVar41[14] = (byte)((uint)uVar8 >> 0x10) >> 4;
    auVar41[15] = (byte)((uint)uVar8 >> 0x1c);
    auVar42._8_4_ = 0x40000;
    auVar42._0_8_ = 0x40000000004;
    auVar42._12_4_ = 0x4000000;
    auVar47 = NEON_cmtst(auVar46,auVar42,4);
    auVar42 = NEON_sli(auVar41,auVar33,4,1);
    auVar42 = NEON_rev32(auVar42,1);
    puVar1 = (undefined *)(param_3 + ((ulong)(uVar38 >> 4) & 0xf) * 0x20);
    puVar2 = (undefined *)(param_3 + ((ulong)(uVar38 >> 0xc) & 0xf) * 0x20);
    auVar42 = NEON_bit(auVar33,auVar42,auVar47,1);
    puVar3 = (undefined *)(param_3 + ((ulong)(uVar38 >> 0x14) & 0xf) * 0x20);
    puVar4 = (undefined *)(param_3 + (ulong)(uVar38 >> 0x1c) * 0x20);
    *pbVar25 = auVar42[0];
    pbVar25[1] = auVar42[1];
    pbVar25[2] = auVar42[2];
    pbVar25[3] = auVar42[3];
    pbVar25[4] = auVar42[4];
    pbVar25[5] = auVar42[5];
    pbVar25[6] = auVar42[6];
    pbVar25[7] = auVar42[7];
    bVar49 = auVar42[8];
    pbVar25[8] = bVar49;
    bVar51 = auVar42[9];
    pbVar25[9] = bVar51;
    bVar53 = auVar42[10];
    pbVar25[10] = bVar53;
    bVar44 = auVar42[11];
    pbVar25[0xb] = bVar44;
    bVar34 = auVar42[12];
    pbVar25[0xc] = bVar34;
    bVar35 = auVar42[13];
    pbVar25[0xd] = bVar35;
    bVar36 = auVar42[14];
    pbVar25[0xe] = bVar36;
    bVar37 = auVar42[15];
    pbVar25[0xf] = bVar37;
    bVar43 = auVar42[0] >> 4;
    bVar48 = auVar42[1] >> 4;
    bVar50 = auVar42[2] >> 4;
    bVar52 = auVar42[3] >> 4;
    uVar39 = auVar42._0_8_ & 0xf0f0f0f0f0f0f0f;
    uVar30 = (undefined)(uVar39 >> 8);
    uVar31 = (undefined)(uVar39 >> 0x10);
    uVar32 = (undefined)(uVar39 >> 0x18);
    uVar15 = CONCAT17(auVar42[7] >> 4,
                      CONCAT16((char)(uVar39 >> 0x38),
                               CONCAT15(auVar42[6] >> 4,
                                        CONCAT14((char)(uVar39 >> 0x30),
                                                 CONCAT13(auVar42[5] >> 4,
                                                          CONCAT12((char)(uVar39 >> 0x28),
                                                                   CONCAT11(auVar42[4] >> 4,
                                                                            (char)(uVar39 >> 0x20)))
                                                         )))));
    uVar29 = CONCAT17(bVar37 >> 4,
                      CONCAT16(bVar37,CONCAT15(bVar36 >> 4,
                                               CONCAT14(bVar36,CONCAT13(bVar35 >> 4,
                                                                        CONCAT12(bVar35,CONCAT11(
                                                  bVar34 >> 4,bVar34))))))) & 0xff0fff0fff0fff0f;
    auVar47[1] = puVar1[2];
    auVar47[0] = *puVar1;
    auVar47[2] = puVar1[4];
    auVar47[3] = puVar1[6];
    auVar47[4] = puVar1[8];
    auVar47[5] = puVar1[10];
    auVar47[6] = puVar1[0xc];
    auVar47[7] = puVar1[0xe];
    auVar47[8] = puVar1[0x10];
    auVar47[9] = puVar1[0x12];
    auVar47[10] = puVar1[0x14];
    auVar47[11] = puVar1[0x16];
    auVar47[12] = puVar1[0x18];
    auVar47[13] = puVar1[0x1a];
    auVar47[14] = puVar1[0x1c];
    auVar47[15] = puVar1[0x1e];
    uVar40 = a64_TBL(ZEXT816(0),auVar47,
                     CONCAT17(bVar52,CONCAT16(uVar32,CONCAT15(bVar50,CONCAT14(uVar31,CONCAT13(bVar48
                                                  ,CONCAT12(uVar30,CONCAT11(bVar43,(char)uVar39)))))
                                             )));
    auVar12[1] = puVar2[2];
    auVar12[0] = *puVar2;
    auVar12[2] = puVar2[4];
    auVar12[3] = puVar2[6];
    auVar12[4] = puVar2[8];
    auVar12[5] = puVar2[10];
    auVar12[6] = puVar2[0xc];
    auVar12[7] = puVar2[0xe];
    auVar12[8] = puVar2[0x10];
    auVar12[9] = puVar2[0x12];
    auVar12[10] = puVar2[0x14];
    auVar12[11] = puVar2[0x16];
    auVar12[12] = puVar2[0x18];
    auVar12[13] = puVar2[0x1a];
    auVar12[14] = puVar2[0x1c];
    auVar12[15] = puVar2[0x1e];
    uVar13 = a64_TBL(ZEXT816(0),auVar12,uVar15);
    auVar16[1] = puVar3[2];
    auVar16[0] = *puVar3;
    auVar16[2] = puVar3[4];
    auVar16[3] = puVar3[6];
    auVar16[4] = puVar3[8];
    auVar16[5] = puVar3[10];
    auVar16[6] = puVar3[0xc];
    auVar16[7] = puVar3[0xe];
    auVar16[8] = puVar3[0x10];
    auVar16[9] = puVar3[0x12];
    auVar16[10] = puVar3[0x14];
    auVar16[11] = puVar3[0x16];
    auVar16[12] = puVar3[0x18];
    auVar16[13] = puVar3[0x1a];
    auVar16[14] = puVar3[0x1c];
    auVar16[15] = puVar3[0x1e];
    uVar17 = a64_TBL(ZEXT816(0),auVar16,
                     CONCAT17(bVar44 >> 4,
                              CONCAT16(bVar44,CONCAT15(bVar53 >> 4,
                                                       CONCAT14(bVar53,CONCAT13(bVar51 >> 4,
                                                                                CONCAT12(bVar51,
                                                  CONCAT11(bVar49 >> 4,bVar49))))))) &
                     0xff0fff0fff0fff0f);
    auVar20[1] = puVar4[2];
    auVar20[0] = *puVar4;
    auVar20[2] = puVar4[4];
    auVar20[3] = puVar4[6];
    auVar20[4] = puVar4[8];
    auVar20[5] = puVar4[10];
    auVar20[6] = puVar4[0xc];
    auVar20[7] = puVar4[0xe];
    auVar20[8] = puVar4[0x10];
    auVar20[9] = puVar4[0x12];
    auVar20[10] = puVar4[0x14];
    auVar20[11] = puVar4[0x16];
    auVar20[12] = puVar4[0x18];
    auVar20[13] = puVar4[0x1a];
    auVar20[14] = puVar4[0x1c];
    auVar20[15] = puVar4[0x1e];
    uVar21 = a64_TBL(ZEXT816(0),auVar20,uVar29);
    auVar10[1] = puVar1[3];
    auVar10[0] = puVar1[1];
    auVar10[2] = puVar1[5];
    auVar10[3] = puVar1[7];
    auVar10[4] = puVar1[9];
    auVar10[5] = puVar1[0xb];
    auVar10[6] = puVar1[0xd];
    auVar10[7] = puVar1[0xf];
    auVar10[8] = puVar1[0x11];
    auVar10[9] = puVar1[0x13];
    auVar10[10] = puVar1[0x15];
    auVar10[11] = puVar1[0x17];
    auVar10[12] = puVar1[0x19];
    auVar10[13] = puVar1[0x1b];
    auVar10[14] = puVar1[0x1d];
    auVar10[15] = puVar1[0x1f];
    uVar45 = a64_TBL(ZEXT816(0),auVar10,
                     CONCAT17(bVar52,CONCAT16(uVar32,CONCAT15(bVar50,CONCAT14(uVar31,CONCAT13(bVar48
                                                  ,CONCAT12(uVar30,CONCAT11(bVar43,(char)uVar39)))))
                                             )));
    auVar14[1] = puVar2[3];
    auVar14[0] = puVar2[1];
    auVar14[2] = puVar2[5];
    auVar14[3] = puVar2[7];
    auVar14[4] = puVar2[9];
    auVar14[5] = puVar2[0xb];
    auVar14[6] = puVar2[0xd];
    auVar14[7] = puVar2[0xf];
    auVar14[8] = puVar2[0x11];
    auVar14[9] = puVar2[0x13];
    auVar14[10] = puVar2[0x15];
    auVar14[11] = puVar2[0x17];
    auVar14[12] = puVar2[0x19];
    auVar14[13] = puVar2[0x1b];
    auVar14[14] = puVar2[0x1d];
    auVar14[15] = puVar2[0x1f];
    uVar15 = a64_TBL(ZEXT816(0),auVar14,uVar15);
    auVar18[1] = puVar3[3];
    auVar18[0] = puVar3[1];
    auVar18[2] = puVar3[5];
    auVar18[3] = puVar3[7];
    auVar18[4] = puVar3[9];
    auVar18[5] = puVar3[0xb];
    auVar18[6] = puVar3[0xd];
    auVar18[7] = puVar3[0xf];
    auVar18[8] = puVar3[0x11];
    auVar18[9] = puVar3[0x13];
    auVar18[10] = puVar3[0x15];
    auVar18[11] = puVar3[0x17];
    auVar18[12] = puVar3[0x19];
    auVar18[13] = puVar3[0x1b];
    auVar18[14] = puVar3[0x1d];
    auVar18[15] = puVar3[0x1f];
    uVar19 = a64_TBL(ZEXT816(0),auVar18,
                     CONCAT17(bVar44 >> 4,
                              CONCAT16(bVar44,CONCAT15(bVar53 >> 4,
                                                       CONCAT14(bVar53,CONCAT13(bVar51 >> 4,
                                                                                CONCAT12(bVar51,
                                                  CONCAT11(bVar49 >> 4,bVar49))))))) &
                     0xff0fff0fff0fff0f);
    auVar22[1] = puVar4[3];
    auVar22[0] = puVar4[1];
    auVar22[2] = puVar4[5];
    auVar22[3] = puVar4[7];
    auVar22[4] = puVar4[9];
    auVar22[5] = puVar4[0xb];
    auVar22[6] = puVar4[0xd];
    auVar22[7] = puVar4[0xf];
    auVar22[8] = puVar4[0x11];
    auVar22[9] = puVar4[0x13];
    auVar22[10] = puVar4[0x15];
    auVar22[11] = puVar4[0x17];
    auVar22[12] = puVar4[0x19];
    auVar22[13] = puVar4[0x1b];
    auVar22[14] = puVar4[0x1d];
    auVar22[15] = puVar4[0x1f];
    uVar23 = a64_TBL(ZEXT816(0),auVar22,uVar29);
    *puVar24 = (char)uVar40;
    puVar24[1] = (char)uVar45;
    puVar24[2] = (char)((ulong)uVar40 >> 8);
    puVar24[3] = (char)((ulong)uVar45 >> 8);
    puVar24[4] = (char)((ulong)uVar40 >> 0x10);
    puVar24[5] = (char)((ulong)uVar45 >> 0x10);
    puVar24[6] = (char)((ulong)uVar40 >> 0x18);
    puVar24[7] = (char)((ulong)uVar45 >> 0x18);
    puVar24[8] = (char)((ulong)uVar40 >> 0x20);
    puVar24[9] = (char)((ulong)uVar45 >> 0x20);
    puVar24[10] = (char)((ulong)uVar40 >> 0x28);
    puVar24[0xb] = (char)((ulong)uVar45 >> 0x28);
    puVar24[0xc] = (char)((ulong)uVar40 >> 0x30);
    puVar24[0xd] = (char)((ulong)uVar45 >> 0x30);
    puVar24[0xe] = (char)((ulong)uVar40 >> 0x38);
    puVar24[0xf] = (char)((ulong)uVar45 >> 0x38);
    puVar24[0x10] = (char)uVar13;
    puVar24[0x11] = (char)uVar15;
    puVar24[0x12] = (char)((ulong)uVar13 >> 8);
    puVar24[0x13] = (char)((ulong)uVar15 >> 8);
    puVar24[0x14] = (char)((ulong)uVar13 >> 0x10);
    puVar24[0x15] = (char)((ulong)uVar15 >> 0x10);
    puVar24[0x16] = (char)((ulong)uVar13 >> 0x18);
    puVar24[0x17] = (char)((ulong)uVar15 >> 0x18);
    puVar24[0x18] = (char)((ulong)uVar13 >> 0x20);
    puVar24[0x19] = (char)((ulong)uVar15 >> 0x20);
    puVar24[0x1a] = (char)((ulong)uVar13 >> 0x28);
    puVar24[0x1b] = (char)((ulong)uVar15 >> 0x28);
    puVar24[0x1c] = (char)((ulong)uVar13 >> 0x30);
    puVar24[0x1d] = (char)((ulong)uVar15 >> 0x30);
    puVar24[0x1e] = (char)((ulong)uVar13 >> 0x38);
    puVar24[0x1f] = (char)((ulong)uVar15 >> 0x38);
    puVar24[0x20] = (char)uVar17;
    puVar24[0x21] = (char)uVar19;
    puVar24[0x22] = (char)((ulong)uVar17 >> 8);
    puVar24[0x23] = (char)((ulong)uVar19 >> 8);
    puVar24[0x24] = (char)((ulong)uVar17 >> 0x10);
    puVar24[0x25] = (char)((ulong)uVar19 >> 0x10);
    puVar24[0x26] = (char)((ulong)uVar17 >> 0x18);
    puVar24[0x27] = (char)((ulong)uVar19 >> 0x18);
    puVar24[0x28] = (char)((ulong)uVar17 >> 0x20);
    puVar24[0x29] = (char)((ulong)uVar19 >> 0x20);
    puVar24[0x2a] = (char)((ulong)uVar17 >> 0x28);
    puVar24[0x2b] = (char)((ulong)uVar19 >> 0x28);
    puVar24[0x2c] = (char)((ulong)uVar17 >> 0x30);
    puVar24[0x2d] = (char)((ulong)uVar19 >> 0x30);
    puVar24[0x2e] = (char)((ulong)uVar17 >> 0x38);
    puVar24[0x2f] = (char)((ulong)uVar19 >> 0x38);
    puVar24[0x30] = (char)uVar21;
    puVar24[0x31] = (char)uVar23;
    puVar24[0x32] = (char)((ulong)uVar21 >> 8);
    puVar24[0x33] = (char)((ulong)uVar23 >> 8);
    puVar24[0x34] = (char)((ulong)uVar21 >> 0x10);
    puVar24[0x35] = (char)((ulong)uVar23 >> 0x10);
    puVar24[0x36] = (char)((ulong)uVar21 >> 0x18);
    puVar24[0x37] = (char)((ulong)uVar23 >> 0x18);
    puVar24[0x38] = (char)((ulong)uVar21 >> 0x20);
    puVar24[0x39] = (char)((ulong)uVar23 >> 0x20);
    puVar24[0x3a] = (char)((ulong)uVar21 >> 0x28);
    puVar24[0x3b] = (char)((ulong)uVar23 >> 0x28);
    puVar24[0x3c] = (char)((ulong)uVar21 >> 0x30);
    puVar24[0x3d] = (char)((ulong)uVar23 >> 0x30);
    puVar24[0x3e] = (char)((ulong)uVar21 >> 0x38);
    puVar24[0x3f] = (char)((ulong)uVar23 >> 0x38);
    iVar28 = iVar28 + -4;
    param_1 = puVar24 + 0x40;
    param_2 = pbVar25 + 0x10;
    param_5 = puVar26;
    param_6 = puVar27;
  } while (iVar28 != 0);
  uVar38 = *puVar27;
  uVar5 = *(undefined4 *)(param_4 + (*puVar26 & 0xffff));
  bVar49 = (byte)((uint)uVar5 >> 8);
  bVar51 = (byte)((uint)uVar5 >> 0x10);
  bVar53 = (byte)((uint)uVar5 >> 0x18);
  uVar45 = NEON_cmtst(CONCAT44(uVar38,uVar38),0x40000000004,4);
  uVar40 = NEON_sli(CONCAT17(bVar53 >> 4,
                             CONCAT16(bVar51 >> 4,
                                      CONCAT15(bVar49 >> 4,
                                               CONCAT14((byte)uVar5 >> 4,
                                                        CONCAT13(bVar53 >> 4,
                                                                 CONCAT12(bVar51 >> 4,
                                                                          CONCAT11(bVar49 >> 4,
                                                                                   (byte)uVar5 >> 4)
                                                                         )))))),
                    CONCAT44(uVar5,uVar5),4,1);
  uVar40 = NEON_rev32(uVar40,1);
  puVar1 = (undefined *)(param_3 + ((ulong)(uVar38 >> 4) & 0xf) * 0x20);
  uVar40 = NEON_bit(CONCAT44(uVar5,uVar5),uVar40,uVar45,1);
  pbVar25[0x10] = (byte)uVar40;
  bVar49 = (byte)((ulong)uVar40 >> 8);
  pbVar25[0x11] = bVar49;
  bVar51 = (byte)((ulong)uVar40 >> 0x10);
  pbVar25[0x12] = bVar51;
  bVar53 = (byte)((ulong)uVar40 >> 0x18);
  pbVar25[0x13] = bVar53;
  pbVar25[0x14] = (byte)((ulong)uVar40 >> 0x20);
  pbVar25[0x15] = (byte)((ulong)uVar40 >> 0x28);
  pbVar25[0x16] = (byte)((ulong)uVar40 >> 0x30);
  pbVar25[0x17] = (byte)((ulong)uVar40 >> 0x38);
  bVar44 = (byte)uVar40 >> 4;
  bVar49 = bVar49 >> 4;
  bVar51 = bVar51 >> 4;
  bVar53 = bVar53 >> 4;
  uVar38 = (uint)uVar40 & 0xf0f0f0f;
  uVar30 = (undefined)(uVar38 >> 8);
  uVar31 = (undefined)(uVar38 >> 0x10);
  uVar32 = (undefined)(uVar38 >> 0x18);
  auVar9[1] = puVar1[2];
  auVar9[0] = *puVar1;
  auVar9[2] = puVar1[4];
  auVar9[3] = puVar1[6];
  auVar9[4] = puVar1[8];
  auVar9[5] = puVar1[10];
  auVar9[6] = puVar1[0xc];
  auVar9[7] = puVar1[0xe];
  auVar9[8] = puVar1[0x10];
  auVar9[9] = puVar1[0x12];
  auVar9[10] = puVar1[0x14];
  auVar9[11] = puVar1[0x16];
  auVar9[12] = puVar1[0x18];
  auVar9[13] = puVar1[0x1a];
  auVar9[14] = puVar1[0x1c];
  auVar9[15] = puVar1[0x1e];
  uVar40 = a64_TBL(ZEXT816(0),auVar9,
                   CONCAT17(bVar53,CONCAT16(uVar32,CONCAT15(bVar51,CONCAT14(uVar31,CONCAT13(bVar49,
                                                  CONCAT12(uVar30,CONCAT11(bVar44,(char)uVar38))))))
                           ));
  auVar11[1] = puVar1[3];
  auVar11[0] = puVar1[1];
  auVar11[2] = puVar1[5];
  auVar11[3] = puVar1[7];
  auVar11[4] = puVar1[9];
  auVar11[5] = puVar1[0xb];
  auVar11[6] = puVar1[0xd];
  auVar11[7] = puVar1[0xf];
  auVar11[8] = puVar1[0x11];
  auVar11[9] = puVar1[0x13];
  auVar11[10] = puVar1[0x15];
  auVar11[11] = puVar1[0x17];
  auVar11[12] = puVar1[0x19];
  auVar11[13] = puVar1[0x1b];
  auVar11[14] = puVar1[0x1d];
  auVar11[15] = puVar1[0x1f];
  uVar45 = a64_TBL(ZEXT816(0),auVar11,
                   CONCAT17(bVar53,CONCAT16(uVar32,CONCAT15(bVar51,CONCAT14(uVar31,CONCAT13(bVar49,
                                                  CONCAT12(uVar30,CONCAT11(bVar44,(char)uVar38))))))
                           ));
  puVar24[0x40] = (char)uVar40;
  puVar24[0x41] = (char)uVar45;
  puVar24[0x42] = (char)((ulong)uVar40 >> 8);
  puVar24[0x43] = (char)((ulong)uVar45 >> 8);
  puVar24[0x44] = (char)((ulong)uVar40 >> 0x10);
  puVar24[0x45] = (char)((ulong)uVar45 >> 0x10);
  puVar24[0x46] = (char)((ulong)uVar40 >> 0x18);
  puVar24[0x47] = (char)((ulong)uVar45 >> 0x18);
  puVar24[0x48] = (char)((ulong)uVar40 >> 0x20);
  puVar24[0x49] = (char)((ulong)uVar45 >> 0x20);
  puVar24[0x4a] = (char)((ulong)uVar40 >> 0x28);
  puVar24[0x4b] = (char)((ulong)uVar45 >> 0x28);
  puVar24[0x4c] = (char)((ulong)uVar40 >> 0x30);
  puVar24[0x4d] = (char)((ulong)uVar45 >> 0x30);
  puVar24[0x4e] = (char)((ulong)uVar40 >> 0x38);
  puVar24[0x4f] = (char)((ulong)uVar45 >> 0x38);
  return;
}


