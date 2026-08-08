/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_clamp_clamp_c
 * Address  : 001464c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_generate_texture_addresses_clamp_clamp_c
               (undefined8 *param_1,short *param_2,ulong param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  short *psVar16;
  uint uVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  short sVar29;
  undefined2 uVar30;
  undefined auVar31 [16];
  undefined auVar32 [16];
  short sVar33;
  undefined2 uVar34;
  
  lVar12 = ___stack_chk_guard;
  uVar13 = (uint)param_3;
  if (uVar13 != 0) {
    uVar14 = (uint)param_4;
    sVar29 = (short)param_4;
    sVar33 = (short)param_5;
    if (uVar13 - 1 < 7) {
      uVar17 = 0;
    }
    else {
      uVar30 = (undefined2)((ulong)param_4 >> 0x10);
      uVar34 = (undefined2)(param_5 >> 0x10);
      puVar15 = param_1;
      psVar16 = param_2;
      do {
        auVar23._0_2_ = *psVar16;
        auVar27._0_2_ = psVar16[1];
        auVar23._2_2_ = psVar16[2];
        auVar27._2_2_ = psVar16[3];
        auVar23._4_2_ = psVar16[4];
        auVar27._4_2_ = psVar16[5];
        auVar23._6_2_ = psVar16[6];
        auVar27._6_2_ = psVar16[7];
        auVar23._8_2_ = psVar16[8];
        auVar27._8_2_ = psVar16[9];
        auVar23._10_2_ = psVar16[10];
        auVar27._10_2_ = psVar16[0xb];
        auVar23._12_2_ = psVar16[0xc];
        auVar27._12_2_ = psVar16[0xd];
        auVar23._14_2_ = psVar16[0xe];
        auVar27._14_2_ = psVar16[0xf];
        psVar16 = psVar16 + 0x10;
        auVar18 = NEON_smax(ZEXT816(0),auVar23,2);
        auVar24 = NEON_smax(ZEXT816(0),auVar27,2);
        auVar28._0_4_ = (int)auVar18._8_2_;
        auVar28._4_4_ = (int)auVar18._10_2_;
        auVar28._8_4_ = (int)auVar18._12_2_;
        auVar28._12_4_ = (int)auVar18._14_2_;
        auVar25._0_4_ = (int)auVar24._8_2_;
        auVar25._4_4_ = (int)auVar24._10_2_;
        auVar25._8_4_ = (int)auVar24._12_2_;
        auVar25._12_4_ = (int)auVar24._14_2_;
        auVar19._4_2_ = sVar29;
        auVar19._0_4_ = uVar14;
        auVar19._6_2_ = uVar30;
        auVar19._8_2_ = sVar29;
        auVar19._10_2_ = uVar30;
        auVar19._12_2_ = sVar29;
        auVar19._14_2_ = uVar30;
        auVar19 = NEON_cmhi(auVar19,auVar28,4);
        auVar31._4_4_ = (int)auVar24._2_2_;
        auVar31._0_4_ = (int)auVar24._0_2_;
        auVar31._8_4_ = (int)auVar24._4_2_;
        auVar31._12_4_ = (int)auVar24._6_2_;
        auVar32._4_2_ = sVar33;
        auVar32._0_4_ = param_5;
        auVar32._6_2_ = uVar34;
        auVar32._8_2_ = sVar33;
        auVar32._10_2_ = uVar34;
        auVar32._12_2_ = sVar33;
        auVar32._14_2_ = uVar34;
        auVar32 = NEON_cmhi(auVar32,auVar31,4);
        auVar21._4_2_ = sVar29;
        auVar21._0_4_ = uVar14;
        auVar21._6_2_ = uVar30;
        auVar21._8_2_ = sVar29;
        auVar21._10_2_ = uVar30;
        auVar21._12_2_ = sVar29;
        auVar21._14_2_ = uVar30;
        auVar8._4_4_ = (int)auVar18._2_2_;
        auVar8._0_4_ = (int)auVar18._0_2_;
        auVar8._8_4_ = (int)auVar18._4_2_;
        auVar8._12_4_ = (int)auVar18._6_2_;
        auVar21 = NEON_cmhi(auVar21,auVar8,4);
        auVar10._4_2_ = sVar33;
        auVar10._0_4_ = param_5;
        auVar10._6_2_ = uVar34;
        auVar10._8_2_ = sVar33;
        auVar10._10_2_ = uVar34;
        auVar10._12_2_ = sVar33;
        auVar10._14_2_ = uVar34;
        auVar31 = NEON_cmhi(auVar10,auVar25,4);
        auVar26._4_2_ = sVar29 + -1;
        auVar26._0_4_ = (int)(short)(sVar29 + -1);
        auVar26._6_2_ = (short)(sVar29 + -1) >> 0xf;
        auVar26._8_2_ = sVar29 + -1;
        auVar26._10_2_ = (short)(sVar29 + -1) >> 0xf;
        auVar26._12_2_ = sVar29 + -1;
        auVar26._14_2_ = (short)(sVar29 + -1) >> 0xf;
        auVar19 = NEON_bsl(auVar19,auVar28,auVar26,1);
        auVar9._4_4_ = (int)auVar18._2_2_;
        auVar9._0_4_ = (int)auVar18._0_2_;
        auVar9._8_4_ = (int)auVar18._4_2_;
        auVar9._12_4_ = (int)auVar18._6_2_;
        auVar11._4_4_ = (int)(short)(sVar29 + -1);
        auVar11._0_4_ = (int)(short)(sVar29 + -1);
        auVar11._8_4_ = (int)(short)(sVar29 + -1);
        auVar11._12_4_ = (int)(short)(sVar29 + -1);
        auVar21 = NEON_bsl(auVar21,auVar9,auVar11,1);
        auVar18._4_2_ = sVar33 + -1;
        auVar18._0_4_ = (int)(short)(sVar33 + -1);
        auVar18._6_2_ = (short)(sVar33 + -1) >> 0xf;
        auVar18._8_2_ = sVar33 + -1;
        auVar18._10_2_ = (short)(sVar33 + -1) >> 0xf;
        auVar18._12_2_ = sVar33 + -1;
        auVar18._14_2_ = (short)(sVar33 + -1) >> 0xf;
        auVar26 = NEON_bif(auVar25,auVar18,auVar31,1);
        auVar7._4_4_ = (int)auVar24._2_2_;
        auVar7._0_4_ = (int)auVar24._0_2_;
        auVar7._8_4_ = (int)auVar24._4_2_;
        auVar7._12_4_ = (int)auVar24._6_2_;
        auVar24._4_4_ = (int)(short)(sVar33 + -1);
        auVar24._0_4_ = (int)(short)(sVar33 + -1);
        auVar24._8_4_ = (int)(short)(sVar33 + -1);
        auVar24._12_4_ = (int)(short)(sVar33 + -1);
        auVar18 = NEON_bsl(auVar32,auVar7,auVar24,1);
        auVar20._0_8_ =
             CONCAT44(auVar19._4_4_ + auVar26._4_4_ * uVar14,auVar19._0_4_ + auVar26._0_4_ * uVar14)
        ;
        auVar20._8_4_ = auVar19._8_4_ + auVar26._8_4_ * uVar14;
        auVar20._12_4_ = auVar19._12_4_ + auVar26._12_4_ * uVar14;
        auVar22._0_8_ =
             CONCAT44(auVar21._4_4_ + auVar18._4_4_ * uVar14,auVar21._0_4_ + auVar18._0_4_ * uVar14)
        ;
        auVar22._8_4_ = auVar21._8_4_ + auVar18._8_4_ * uVar14;
        auVar22._12_4_ = auVar21._12_4_ + auVar18._12_4_ * uVar14;
        puVar15[1] = auVar22._8_8_;
        *puVar15 = auVar22._0_8_;
        puVar15[3] = auVar20._8_8_;
        puVar15[2] = auVar20._0_8_;
        puVar15 = puVar15 + 4;
      } while (psVar16 != param_2 + (ulong)((uVar13 >> 3) - 1) * 0x10 + 0x10);
      param_1 = (undefined8 *)((long)param_1 + (param_3 & 0xfffffff8) * 4);
      param_2 = param_2 + (param_3 & 0xfffffff8) * 2;
      uVar17 = uVar13 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_00146794;
    }
    sVar3 = *param_2;
    if (sVar3 < 0) {
      sVar3 = 0;
    }
    sVar4 = param_2[1];
    uVar5 = (uint)(short)(sVar29 + -1);
    uVar1 = uVar5;
    if ((uint)(int)sVar3 < uVar14) {
      uVar1 = (int)sVar3;
    }
    if (sVar4 < 0) {
      sVar4 = 0;
    }
    uVar6 = (uint)(short)(sVar33 + -1);
    uVar2 = uVar6;
    if ((uint)(int)sVar4 < param_5) {
      uVar2 = (int)sVar4;
    }
    *(uint *)param_1 = uVar1 + uVar14 * uVar2;
    if (uVar17 + 1 < uVar13) {
      sVar29 = param_2[2];
      sVar33 = param_2[3];
      if (sVar29 < 0) {
        sVar29 = 0;
      }
      uVar1 = uVar5;
      if ((uint)(int)sVar29 < uVar14) {
        uVar1 = (int)sVar29;
      }
      if (sVar33 < 0) {
        sVar33 = 0;
      }
      uVar2 = uVar6;
      if ((uint)(int)sVar33 < param_5) {
        uVar2 = (int)sVar33;
      }
      *(uint *)((long)param_1 + 4) = uVar1 + uVar2 * uVar14;
      if (uVar17 + 2 < uVar13) {
        sVar29 = param_2[4];
        sVar33 = param_2[5];
        if (sVar29 < 0) {
          sVar29 = 0;
        }
        uVar1 = uVar5;
        if ((uint)(int)sVar29 < uVar14) {
          uVar1 = (int)sVar29;
        }
        if (sVar33 < 0) {
          sVar33 = 0;
        }
        uVar2 = uVar6;
        if ((uint)(int)sVar33 < param_5) {
          uVar2 = (int)sVar33;
        }
        *(uint *)(param_1 + 1) = uVar1 + uVar14 * uVar2;
        if (uVar17 + 3 < uVar13) {
          sVar29 = param_2[6];
          sVar33 = param_2[7];
          if (sVar29 < 0) {
            sVar29 = 0;
          }
          uVar1 = uVar5;
          if ((uint)(int)sVar29 < uVar14) {
            uVar1 = (int)sVar29;
          }
          if (sVar33 < 0) {
            sVar33 = 0;
          }
          uVar2 = uVar6;
          if ((uint)(int)sVar33 < param_5) {
            uVar2 = (int)sVar33;
          }
          *(uint *)((long)param_1 + 0xc) = uVar1 + uVar14 * uVar2;
          if (uVar17 + 4 < uVar13) {
            sVar29 = param_2[8];
            sVar33 = param_2[9];
            if (sVar29 < 0) {
              sVar29 = 0;
            }
            uVar1 = uVar5;
            if ((uint)(int)sVar29 < uVar14) {
              uVar1 = (int)sVar29;
            }
            if (sVar33 < 0) {
              sVar33 = 0;
            }
            uVar2 = uVar6;
            if ((uint)(int)sVar33 < param_5) {
              uVar2 = (int)sVar33;
            }
            *(uint *)(param_1 + 2) = uVar1 + uVar14 * uVar2;
            if (uVar17 + 5 < uVar13) {
              sVar29 = param_2[10];
              sVar33 = param_2[0xb];
              if (sVar29 < 0) {
                sVar29 = 0;
              }
              uVar1 = uVar5;
              if ((uint)(int)sVar29 < uVar14) {
                uVar1 = (int)sVar29;
              }
              if (sVar33 < 0) {
                sVar33 = 0;
              }
              uVar2 = uVar6;
              if ((uint)(int)sVar33 < param_5) {
                uVar2 = (int)sVar33;
              }
              *(uint *)((long)param_1 + 0x14) = uVar1 + uVar14 * uVar2;
              if (uVar17 + 6 < uVar13) {
                sVar29 = param_2[0xc];
                sVar33 = param_2[0xd];
                if (sVar29 < 0) {
                  sVar29 = 0;
                }
                if ((uint)(int)sVar29 < uVar14) {
                  uVar5 = (int)sVar29;
                }
                if (sVar33 < 0) {
                  sVar33 = 0;
                }
                if ((uint)(int)sVar33 < param_5) {
                  uVar6 = (int)sVar33;
                }
                *(uint *)(param_1 + 3) = uVar5 + uVar14 * uVar6;
              }
            }
          }
        }
      }
    }
  }
LAB_00146794:
  if (lVar12 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar12 - ___stack_chk_guard,0);
}


