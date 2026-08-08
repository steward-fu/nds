/*
 * Ghidra decompilation
 *
 * Function : FUN_001475cc
 * Address  : 001475cc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001475cc(undefined8 *param_1,short *param_2,ulong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  ushort uVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  short *psVar17;
  uint uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined auVar28 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  short sVar50;
  undefined2 uVar51;
  undefined auVar52 [16];
  undefined auVar53 [16];
  byte bVar54;
  byte bVar55;
  undefined4 uVar23;
  undefined6 uVar24;
  undefined8 uVar25;
  undefined auVar26 [12];
  undefined auVar27 [14];
  undefined auVar29 [16];
  byte bVar30;
  
  lVar14 = ___stack_chk_guard;
  uVar15 = (uint)param_3;
  if (uVar15 != 0) {
    iVar3 = param_5 - 1;
    uVar13 = (ushort)iVar3;
    sVar50 = (short)param_4;
    if (uVar15 - 1 < 7) {
      uVar18 = 0;
    }
    else {
      uVar51 = (undefined2)(param_4 >> 0x10);
      puVar16 = param_1;
      psVar17 = param_2;
      do {
        auVar33._0_2_ = *psVar17;
        sVar19 = psVar17[1];
        auVar33._2_2_ = psVar17[2];
        bVar30 = (byte)psVar17[3];
        bVar35 = (byte)((ushort)psVar17[3] >> 8);
        auVar33._4_2_ = psVar17[4];
        bVar36 = (byte)psVar17[5];
        bVar37 = (byte)((ushort)psVar17[5] >> 8);
        auVar33._6_2_ = psVar17[6];
        bVar38 = (byte)psVar17[7];
        bVar39 = (byte)((ushort)psVar17[7] >> 8);
        auVar33._8_2_ = psVar17[8];
        sVar20 = psVar17[9];
        bVar40 = (byte)((ushort)sVar20 >> 8);
        auVar33._10_2_ = psVar17[10];
        bVar41 = (byte)psVar17[0xb];
        bVar42 = (byte)((ushort)psVar17[0xb] >> 8);
        auVar33._12_2_ = psVar17[0xc];
        bVar43 = (byte)psVar17[0xd];
        bVar44 = (byte)((ushort)psVar17[0xd] >> 8);
        auVar33._14_2_ = psVar17[0xe];
        bVar45 = (byte)psVar17[0xf];
        bVar46 = (byte)((ushort)psVar17[0xf] >> 8);
        psVar17 = psVar17 + 0x10;
        uVar23 = CONCAT13(bVar35,CONCAT12(bVar30,sVar19));
        uVar24 = CONCAT15(bVar37,CONCAT14(bVar36,uVar23));
        auVar52._0_4_ = (int)sVar19;
        auVar52._4_4_ = (int)(short)((uint)uVar23 >> 0x10);
        auVar52._8_4_ = (int)(short)((uint6)uVar24 >> 0x20);
        auVar52._12_4_ = (int)(short)(CONCAT17(bVar39,CONCAT16(bVar38,uVar24)) >> 0x30);
        uVar23 = CONCAT13(bVar42,CONCAT12(bVar41,sVar20));
        uVar24 = CONCAT15(bVar44,CONCAT14(bVar43,uVar23));
        auVar47._0_4_ = (int)sVar20;
        auVar47._4_4_ = (int)(short)((uint)uVar23 >> 0x10);
        auVar47._8_4_ = (int)(short)((uint6)uVar24 >> 0x20);
        auVar47._12_4_ = (int)(short)(CONCAT17(bVar46,CONCAT16(bVar45,uVar24)) >> 0x30);
        auVar31 = NEON_smax(ZEXT816(0),auVar33,2);
        bVar54 = (byte)iVar3;
        bVar55 = (byte)((uint)iVar3 >> 8);
        auVar10._4_4_ = param_5;
        auVar10._0_4_ = param_5;
        auVar10._8_4_ = param_5;
        auVar10._12_4_ = param_5;
        auVar53 = NEON_cmtst(auVar52,auVar10,4);
        auVar11._4_4_ = param_5;
        auVar11._0_4_ = param_5;
        auVar11._8_4_ = param_5;
        auVar11._12_4_ = param_5;
        auVar48 = NEON_cmtst(auVar47,auVar11,4);
        auVar28._2_2_ = auVar53._4_2_;
        auVar28._0_2_ = auVar53._0_2_;
        auVar28._4_2_ = auVar53._8_2_;
        auVar28._6_2_ = auVar53._12_2_;
        auVar28._8_2_ = auVar48._0_2_;
        auVar28._10_2_ = auVar48._4_2_;
        auVar28._12_2_ = auVar48._8_2_;
        auVar28._14_2_ = auVar48._12_2_;
        auVar49._4_2_ = sVar50;
        auVar49._0_4_ = param_4;
        auVar49._6_2_ = uVar51;
        auVar49._8_2_ = sVar50;
        auVar49._10_2_ = uVar51;
        auVar49._12_2_ = sVar50;
        auVar49._14_2_ = uVar51;
        auVar8._4_4_ = (int)auVar31._2_2_;
        auVar8._0_4_ = (int)auVar31._0_2_;
        auVar8._8_4_ = (int)auVar31._4_2_;
        auVar8._12_4_ = (int)auVar31._6_2_;
        auVar49 = NEON_cmhi(auVar49,auVar8,4);
        auVar53._4_4_ = (int)auVar31._10_2_;
        auVar53._0_4_ = (int)auVar31._8_2_;
        auVar53._8_4_ = (int)auVar31._12_2_;
        auVar53._12_4_ = (int)auVar31._14_2_;
        auVar6._4_2_ = sVar50;
        auVar6._0_4_ = param_4;
        auVar6._6_2_ = uVar51;
        auVar6._8_2_ = sVar50;
        auVar6._10_2_ = uVar51;
        auVar6._12_2_ = sVar50;
        auVar6._14_2_ = uVar51;
        auVar53 = NEON_cmhi(auVar6,auVar53,4);
        auVar48[2] = bVar30;
        auVar48._0_2_ = sVar19;
        auVar48[3] = bVar35;
        auVar48[4] = bVar36;
        auVar48[5] = bVar37;
        auVar48[6] = bVar38;
        auVar48[7] = bVar39;
        auVar48[8] = (byte)sVar20;
        auVar48[9] = bVar40;
        auVar48[10] = bVar41;
        auVar48[11] = bVar42;
        auVar48[12] = bVar43;
        auVar48[13] = bVar44;
        auVar48[14] = bVar45;
        auVar48[15] = bVar46;
        auVar12[1] = bVar55 ^ (byte)((ushort)sVar19 >> 8);
        auVar12[0] = bVar54 ^ (byte)sVar19;
        auVar12[2] = bVar54 ^ bVar30;
        auVar12[3] = bVar55 ^ bVar35;
        auVar12[4] = bVar54 ^ bVar36;
        auVar12[5] = bVar55 ^ bVar37;
        auVar12[6] = bVar54 ^ bVar38;
        auVar12[7] = bVar55 ^ bVar39;
        auVar12[8] = bVar54 ^ (byte)sVar20;
        auVar12[9] = bVar55 ^ bVar40;
        auVar12[10] = bVar54 ^ bVar41;
        auVar12[11] = bVar55 ^ bVar42;
        auVar12[12] = bVar54 ^ bVar43;
        auVar12[13] = bVar55 ^ bVar44;
        auVar12[14] = bVar54 ^ bVar45;
        auVar12[15] = bVar55 ^ bVar46;
        auVar48 = NEON_bsl(auVar28,auVar12,auVar48,1);
        auVar5._4_4_ = (int)auVar31._10_2_;
        auVar5._0_4_ = (int)auVar31._8_2_;
        auVar5._8_4_ = (int)auVar31._12_2_;
        auVar5._12_4_ = (int)auVar31._14_2_;
        auVar7._4_2_ = sVar50 + -1;
        auVar7._0_4_ = (int)(short)(sVar50 + -1);
        auVar7._6_2_ = (short)(sVar50 + -1) >> 0xf;
        auVar7._8_2_ = sVar50 + -1;
        auVar7._10_2_ = (short)(sVar50 + -1) >> 0xf;
        auVar7._12_2_ = sVar50 + -1;
        auVar7._14_2_ = (short)(sVar50 + -1) >> 0xf;
        auVar53 = NEON_bsl(auVar53,auVar5,auVar7,1);
        bVar30 = auVar48[1] & bVar55;
        sVar22 = CONCAT11(bVar30,auVar48[0] & bVar54);
        uVar23 = CONCAT13(auVar48[3] & bVar55,CONCAT12(auVar48[2] & bVar54,sVar22));
        uVar24 = CONCAT15(auVar48[5] & bVar55,CONCAT14(auVar48[4] & bVar54,uVar23));
        uVar25 = CONCAT17(auVar48[7] & bVar55,CONCAT16(auVar48[6] & bVar54,uVar24));
        auVar26._0_10_ = CONCAT19(auVar48[9] & bVar55,CONCAT18(auVar48[8] & bVar54,uVar25));
        auVar26[10] = auVar48[10] & bVar54;
        auVar26[11] = auVar48[11] & bVar55;
        auVar27[12] = auVar48[12] & bVar54;
        auVar27._0_12_ = auVar26;
        auVar27[13] = auVar48[13] & bVar55;
        auVar29[14] = auVar48[14] & bVar54;
        auVar29._0_14_ = auVar27;
        auVar29[15] = auVar48[15] & bVar55;
        auVar9._4_4_ = (int)auVar31._2_2_;
        auVar9._0_4_ = (int)auVar31._0_2_;
        auVar9._8_4_ = (int)auVar31._4_2_;
        auVar9._12_4_ = (int)auVar31._6_2_;
        auVar31._4_4_ = (int)(short)(sVar50 + -1);
        auVar31._0_4_ = (int)(short)(sVar50 + -1);
        auVar31._8_4_ = (int)(short)(sVar50 + -1);
        auVar31._12_4_ = (int)(short)(sVar50 + -1);
        auVar48 = NEON_bsl(auVar49,auVar9,auVar31,1);
        sVar19 = (short)((uint)uVar23 >> 0x10);
        sVar20 = (short)((uint6)uVar24 >> 0x20);
        sVar21 = (short)((ulong)uVar25 >> 0x30);
        auVar34._0_8_ =
             CONCAT44(auVar48._4_4_ + CONCAT13(sVar19 >> 0xf,(int3)sVar19) * param_4,
                      auVar48._0_4_ + CONCAT13((short)(char)bVar30 >> 7,(int3)sVar22) * param_4);
        auVar34._8_4_ = auVar48._8_4_ + CONCAT13(sVar20 >> 0xf,(int3)sVar20) * param_4;
        auVar34._12_4_ = auVar48._12_4_ + CONCAT13(sVar21 >> 0xf,(int3)sVar21) * param_4;
        auVar32._0_8_ =
             CONCAT44(auVar53._4_4_ + (int)auVar26._10_2_ * param_4,
                      auVar53._0_4_ + (int)(short)((unkuint10)auVar26._0_10_ >> 0x40) * param_4);
        auVar32._8_4_ = auVar53._8_4_ + (int)auVar27._12_2_ * param_4;
        auVar32._12_4_ = auVar53._12_4_ + (int)auVar29._14_2_ * param_4;
        puVar16[1] = auVar34._8_8_;
        *puVar16 = auVar34._0_8_;
        puVar16[3] = auVar32._8_8_;
        puVar16[2] = auVar32._0_8_;
        puVar16 = puVar16 + 4;
      } while (psVar17 != param_2 + (ulong)((uVar15 >> 3) - 1) * 0x10 + 0x10);
      param_1 = (undefined8 *)((long)param_1 + (param_3 & 0xfffffff8) * 4);
      param_2 = param_2 + (param_3 & 0xfffffff8) * 2;
      uVar18 = uVar15 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_001478c0;
    }
    sVar19 = *param_2;
    uVar2 = param_2[1];
    if (sVar19 < 0) {
      sVar19 = 0;
    }
    uVar4 = (uint)(short)(sVar50 + -1);
    uVar1 = uVar4;
    if ((uint)(int)sVar19 < param_4) {
      uVar1 = (int)sVar19;
    }
    if (((int)(short)uVar2 & param_5) != 0) {
      uVar2 = uVar13 ^ uVar2;
    }
    *(uint *)param_1 = uVar1 + (int)(short)(uVar13 & uVar2) * param_4;
    if (uVar18 + 1 < uVar15) {
      sVar50 = param_2[2];
      uVar2 = param_2[3];
      if (sVar50 < 0) {
        sVar50 = 0;
      }
      uVar1 = uVar4;
      if ((uint)(int)sVar50 < param_4) {
        uVar1 = (int)sVar50;
      }
      if (((int)(short)uVar2 & param_5) != 0) {
        uVar2 = uVar2 ^ uVar13;
      }
      *(uint *)((long)param_1 + 4) = uVar1 + (int)(short)(uVar2 & uVar13) * param_4;
      if (uVar18 + 2 < uVar15) {
        sVar50 = param_2[4];
        uVar2 = param_2[5];
        if (sVar50 < 0) {
          sVar50 = 0;
        }
        uVar1 = uVar4;
        if ((uint)(int)sVar50 < param_4) {
          uVar1 = (int)sVar50;
        }
        if (((int)(short)uVar2 & param_5) != 0) {
          uVar2 = uVar13 ^ uVar2;
        }
        *(uint *)(param_1 + 1) = uVar1 + (int)(short)(uVar13 & uVar2) * param_4;
        if (uVar18 + 3 < uVar15) {
          sVar50 = param_2[6];
          uVar2 = param_2[7];
          if (sVar50 < 0) {
            sVar50 = 0;
          }
          uVar1 = uVar4;
          if ((uint)(int)sVar50 < param_4) {
            uVar1 = (int)sVar50;
          }
          if (((int)(short)uVar2 & param_5) != 0) {
            uVar2 = uVar13 ^ uVar2;
          }
          *(uint *)((long)param_1 + 0xc) = uVar1 + (int)(short)(uVar13 & uVar2) * param_4;
          if (uVar18 + 4 < uVar15) {
            sVar50 = param_2[8];
            uVar2 = param_2[9];
            if (sVar50 < 0) {
              sVar50 = 0;
            }
            uVar1 = uVar4;
            if ((uint)(int)sVar50 < param_4) {
              uVar1 = (int)sVar50;
            }
            if (((int)(short)uVar2 & param_5) != 0) {
              uVar2 = uVar13 ^ uVar2;
            }
            *(uint *)(param_1 + 2) = uVar1 + (int)(short)(uVar13 & uVar2) * param_4;
            if (uVar18 + 5 < uVar15) {
              sVar50 = param_2[10];
              uVar2 = param_2[0xb];
              if (sVar50 < 0) {
                sVar50 = 0;
              }
              uVar1 = uVar4;
              if ((uint)(int)sVar50 < param_4) {
                uVar1 = (int)sVar50;
              }
              if (((int)(short)uVar2 & param_5) != 0) {
                uVar2 = uVar13 ^ uVar2;
              }
              *(uint *)((long)param_1 + 0x14) = uVar1 + (int)(short)(uVar13 & uVar2) * param_4;
              if (uVar18 + 6 < uVar15) {
                sVar50 = param_2[0xc];
                uVar2 = param_2[0xd];
                if (sVar50 < 0) {
                  sVar50 = 0;
                }
                if ((uint)(int)sVar50 < param_4) {
                  uVar4 = (int)sVar50;
                }
                if (((int)(short)uVar2 & param_5) != 0) {
                  uVar2 = uVar13 ^ uVar2;
                }
                *(uint *)(param_1 + 3) = uVar4 + (int)(short)(uVar13 & uVar2) * param_4;
              }
            }
          }
        }
      }
    }
  }
LAB_001478c0:
  if (lVar14 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar14 - ___stack_chk_guard,0);
}


