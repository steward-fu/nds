/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_flip_clamp_c
 * Address  : 00146d80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_generate_texture_addresses_flip_clamp_c
               (undefined8 *param_1,ushort *param_2,ulong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  ushort uVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  uint uVar15;
  short sVar16;
  undefined auVar22 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  short sVar36;
  undefined2 uVar37;
  byte bVar38;
  byte bVar39;
  undefined4 uVar17;
  undefined6 uVar18;
  undefined8 uVar19;
  undefined auVar20 [12];
  undefined auVar21 [14];
  undefined auVar23 [16];
  
  lVar11 = ___stack_chk_guard;
  uVar12 = (uint)param_3;
  if (uVar12 != 0) {
    iVar4 = param_4 - 1;
    uVar10 = (ushort)iVar4;
    sVar36 = (short)param_5;
    if (uVar12 - 1 < 7) {
      uVar15 = 0;
    }
    else {
      uVar37 = (undefined2)(param_5 >> 0x10);
      puVar13 = param_1;
      puVar14 = param_2;
      do {
        auVar27._0_2_ = *puVar14;
        auVar30._0_2_ = puVar14[1];
        auVar27._2_2_ = puVar14[2];
        auVar30._2_2_ = puVar14[3];
        auVar27._4_2_ = puVar14[4];
        auVar30._4_2_ = puVar14[5];
        auVar27._6_2_ = puVar14[6];
        auVar30._6_2_ = puVar14[7];
        auVar27._8_2_ = puVar14[8];
        auVar30._8_2_ = puVar14[9];
        auVar27._10_2_ = puVar14[10];
        auVar30._10_2_ = puVar14[0xb];
        auVar27._12_2_ = puVar14[0xc];
        auVar30._12_2_ = puVar14[0xd];
        auVar27._14_2_ = puVar14[0xe];
        auVar30._14_2_ = puVar14[0xf];
        puVar14 = puVar14 + 0x10;
        auVar34._0_4_ = (int)(short)auVar27._0_2_;
        auVar34._4_4_ = (int)(short)auVar27._2_2_;
        auVar34._8_4_ = (int)(short)auVar27._4_2_;
        auVar34._12_4_ = (int)(short)auVar27._6_2_;
        auVar31._0_4_ = (int)(short)auVar27._8_2_;
        auVar31._4_4_ = (int)(short)auVar27._10_2_;
        auVar31._8_4_ = (int)(short)auVar27._12_2_;
        auVar31._12_4_ = (int)(short)auVar27._14_2_;
        auVar25 = NEON_smax(ZEXT816(0),auVar30,2);
        bVar38 = (byte)iVar4;
        bVar39 = (byte)((uint)iVar4 >> 8);
        auVar32._4_4_ = param_4;
        auVar32._0_4_ = param_4;
        auVar32._8_4_ = param_4;
        auVar32._12_4_ = param_4;
        auVar35 = NEON_cmtst(auVar34,auVar32,4);
        auVar28._4_4_ = param_4;
        auVar28._0_4_ = param_4;
        auVar28._8_4_ = param_4;
        auVar28._12_4_ = param_4;
        auVar32 = NEON_cmtst(auVar31,auVar28,4);
        auVar26._0_4_ = (int)auVar25._8_2_;
        auVar26._4_4_ = (int)auVar25._10_2_;
        auVar26._8_4_ = (int)auVar25._12_2_;
        auVar26._12_4_ = (int)auVar25._14_2_;
        auVar22._2_2_ = auVar35._4_2_;
        auVar22._0_2_ = auVar35._0_2_;
        auVar22._4_2_ = auVar35._8_2_;
        auVar22._6_2_ = auVar35._12_2_;
        auVar22._8_2_ = auVar32._0_2_;
        auVar22._10_2_ = auVar32._4_2_;
        auVar22._12_2_ = auVar32._8_2_;
        auVar22._14_2_ = auVar32._12_2_;
        auVar33._4_4_ = (int)auVar25._2_2_;
        auVar33._0_4_ = (int)auVar25._0_2_;
        auVar33._8_4_ = (int)auVar25._4_2_;
        auVar33._12_4_ = (int)auVar25._6_2_;
        auVar7._4_2_ = sVar36;
        auVar7._0_4_ = param_5;
        auVar7._6_2_ = uVar37;
        auVar7._8_2_ = sVar36;
        auVar7._10_2_ = uVar37;
        auVar7._12_2_ = sVar36;
        auVar7._14_2_ = uVar37;
        auVar33 = NEON_cmhi(auVar7,auVar33,4);
        auVar9[1] = bVar39 ^ (byte)(auVar27._0_2_ >> 8);
        auVar9[0] = bVar38 ^ (byte)auVar27._0_2_;
        auVar9[2] = bVar38 ^ (byte)auVar27._2_2_;
        auVar9[3] = bVar39 ^ (byte)(auVar27._2_2_ >> 8);
        auVar9[4] = bVar38 ^ (byte)auVar27._4_2_;
        auVar9[5] = bVar39 ^ (byte)(auVar27._4_2_ >> 8);
        auVar9[6] = bVar38 ^ (byte)auVar27._6_2_;
        auVar9[7] = bVar39 ^ (byte)(auVar27._6_2_ >> 8);
        auVar9[8] = bVar38 ^ (byte)auVar27._8_2_;
        auVar9[9] = bVar39 ^ (byte)(auVar27._8_2_ >> 8);
        auVar9[10] = bVar38 ^ (byte)auVar27._10_2_;
        auVar9[11] = bVar39 ^ (byte)(auVar27._10_2_ >> 8);
        auVar9[12] = bVar38 ^ (byte)auVar27._12_2_;
        auVar9[13] = bVar39 ^ (byte)(auVar27._12_2_ >> 8);
        auVar9[14] = bVar38 ^ (byte)auVar27._14_2_;
        auVar9[15] = bVar39 ^ (byte)(auVar27._14_2_ >> 8);
        auVar32 = NEON_bsl(auVar22,auVar9,auVar27,1);
        auVar8._4_2_ = sVar36;
        auVar8._0_4_ = param_5;
        auVar8._6_2_ = uVar37;
        auVar8._8_2_ = sVar36;
        auVar8._10_2_ = uVar37;
        auVar8._12_2_ = sVar36;
        auVar8._14_2_ = uVar37;
        auVar28 = NEON_cmhi(auVar8,auVar26,4);
        sVar16 = CONCAT11(auVar32[1] & bVar39,auVar32[0] & bVar38);
        uVar17 = CONCAT13(auVar32[3] & bVar39,CONCAT12(auVar32[2] & bVar38,sVar16));
        uVar18 = CONCAT15(auVar32[5] & bVar39,CONCAT14(auVar32[4] & bVar38,uVar17));
        uVar19 = CONCAT17(auVar32[7] & bVar39,CONCAT16(auVar32[6] & bVar38,uVar18));
        auVar20._0_10_ = CONCAT19(auVar32[9] & bVar39,CONCAT18(auVar32[8] & bVar38,uVar19));
        auVar20[10] = auVar32[10] & bVar38;
        auVar20[11] = auVar32[11] & bVar39;
        auVar21[12] = auVar32[12] & bVar38;
        auVar21._0_12_ = auVar20;
        auVar21[13] = auVar32[13] & bVar39;
        auVar23[14] = auVar32[14] & bVar38;
        auVar23._0_14_ = auVar21;
        auVar23[15] = auVar32[15] & bVar39;
        auVar35._4_2_ = sVar36 + -1;
        auVar35._0_4_ = (int)(short)(sVar36 + -1);
        auVar35._6_2_ = (short)(sVar36 + -1) >> 0xf;
        auVar35._8_2_ = sVar36 + -1;
        auVar35._10_2_ = (short)(sVar36 + -1) >> 0xf;
        auVar35._12_2_ = sVar36 + -1;
        auVar35._14_2_ = (short)(sVar36 + -1) >> 0xf;
        auVar32 = NEON_bif(auVar26,auVar35,auVar28,1);
        auVar6._4_4_ = (int)auVar25._2_2_;
        auVar6._0_4_ = (int)auVar25._0_2_;
        auVar6._8_4_ = (int)auVar25._4_2_;
        auVar6._12_4_ = (int)auVar25._6_2_;
        auVar25._4_4_ = (int)(short)(sVar36 + -1);
        auVar25._0_4_ = (int)(short)(sVar36 + -1);
        auVar25._8_4_ = (int)(short)(sVar36 + -1);
        auVar25._12_4_ = (int)(short)(sVar36 + -1);
        auVar28 = NEON_bsl(auVar33,auVar6,auVar25,1);
        auVar29._0_8_ =
             CONCAT44((int)(short)((uint)uVar17 >> 0x10) + auVar28._4_4_ * param_4,
                      (int)sVar16 + auVar28._0_4_ * param_4);
        auVar29._8_4_ = (int)(short)((uint6)uVar18 >> 0x20) + auVar28._8_4_ * param_4;
        auVar29._12_4_ = (int)(short)((ulong)uVar19 >> 0x30) + auVar28._12_4_ * param_4;
        auVar24._0_8_ =
             CONCAT44((int)auVar20._10_2_ + auVar32._4_4_ * param_4,
                      (int)(short)((unkuint10)auVar20._0_10_ >> 0x40) + auVar32._0_4_ * param_4);
        auVar24._8_4_ = (int)auVar21._12_2_ + auVar32._8_4_ * param_4;
        auVar24._12_4_ = (int)auVar23._14_2_ + auVar32._12_4_ * param_4;
        puVar13[1] = auVar29._8_8_;
        *puVar13 = auVar29._0_8_;
        puVar13[3] = auVar24._8_8_;
        puVar13[2] = auVar24._0_8_;
        puVar13 = puVar13 + 4;
      } while (puVar14 != param_2 + (ulong)((uVar12 >> 3) - 1) * 0x10 + 0x10);
      param_1 = (undefined8 *)((long)param_1 + (param_3 & 0xfffffff8) * 4);
      param_2 = param_2 + (param_3 & 0xfffffff8) * 2;
      uVar15 = uVar12 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_00147070;
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    if (((int)(short)uVar2 & param_4) != 0) {
      uVar2 = uVar10 ^ uVar2;
    }
    if ((short)uVar3 < 0) {
      uVar3 = 0;
    }
    uVar5 = (uint)(short)(sVar36 + -1);
    uVar1 = uVar5;
    if ((uint)(int)(short)uVar3 < param_5) {
      uVar1 = (int)(short)uVar3;
    }
    *(uint *)param_1 = param_4 * uVar1 + (int)(short)(uVar10 & uVar2);
    if (uVar15 + 1 < uVar12) {
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      if (((int)(short)uVar2 & param_4) != 0) {
        uVar2 = uVar2 ^ uVar10;
      }
      if ((short)uVar3 < 0) {
        uVar3 = 0;
      }
      uVar1 = uVar5;
      if ((uint)(int)(short)uVar3 < param_5) {
        uVar1 = (int)(short)uVar3;
      }
      *(uint *)((long)param_1 + 4) = param_4 * uVar1 + (int)(short)(uVar2 & uVar10);
      if (uVar15 + 2 < uVar12) {
        uVar2 = param_2[4];
        uVar3 = param_2[5];
        if (((int)(short)uVar2 & param_4) != 0) {
          uVar2 = uVar10 ^ uVar2;
        }
        if ((short)uVar3 < 0) {
          uVar3 = 0;
        }
        uVar1 = uVar5;
        if ((uint)(int)(short)uVar3 < param_5) {
          uVar1 = (int)(short)uVar3;
        }
        *(uint *)(param_1 + 1) = param_4 * uVar1 + (int)(short)(uVar10 & uVar2);
        if (uVar15 + 3 < uVar12) {
          uVar2 = param_2[6];
          uVar3 = param_2[7];
          if (((int)(short)uVar2 & param_4) != 0) {
            uVar2 = uVar10 ^ uVar2;
          }
          if ((short)uVar3 < 0) {
            uVar3 = 0;
          }
          uVar1 = uVar5;
          if ((uint)(int)(short)uVar3 < param_5) {
            uVar1 = (int)(short)uVar3;
          }
          *(uint *)((long)param_1 + 0xc) = param_4 * uVar1 + (int)(short)(uVar10 & uVar2);
          if (uVar15 + 4 < uVar12) {
            uVar2 = param_2[8];
            uVar3 = param_2[9];
            if (((int)(short)uVar2 & param_4) != 0) {
              uVar2 = uVar10 ^ uVar2;
            }
            if ((short)uVar3 < 0) {
              uVar3 = 0;
            }
            uVar1 = uVar5;
            if ((uint)(int)(short)uVar3 < param_5) {
              uVar1 = (int)(short)uVar3;
            }
            *(uint *)(param_1 + 2) = param_4 * uVar1 + (int)(short)(uVar10 & uVar2);
            if (uVar15 + 5 < uVar12) {
              uVar2 = param_2[10];
              uVar3 = param_2[0xb];
              if (((int)(short)uVar2 & param_4) != 0) {
                uVar2 = uVar10 ^ uVar2;
              }
              if ((short)uVar3 < 0) {
                uVar3 = 0;
              }
              uVar1 = uVar5;
              if ((uint)(int)(short)uVar3 < param_5) {
                uVar1 = (int)(short)uVar3;
              }
              *(uint *)((long)param_1 + 0x14) = param_4 * uVar1 + (int)(short)(uVar10 & uVar2);
              if (uVar15 + 6 < uVar12) {
                uVar2 = param_2[0xc];
                uVar3 = param_2[0xd];
                if (((int)(short)uVar2 & param_4) != 0) {
                  uVar2 = uVar10 ^ uVar2;
                }
                if ((short)uVar3 < 0) {
                  uVar3 = 0;
                }
                if ((uint)(int)(short)uVar3 < param_5) {
                  uVar5 = (int)(short)uVar3;
                }
                *(uint *)(param_1 + 3) = param_4 * uVar5 + (int)(short)(uVar10 & uVar2);
              }
            }
          }
        }
      }
    }
  }
LAB_00147070:
  if (lVar11 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar11 - ___stack_chk_guard,0);
}


