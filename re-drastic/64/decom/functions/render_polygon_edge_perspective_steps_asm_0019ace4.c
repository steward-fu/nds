/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_perspective_steps_asm
 * Address  : 0019ace4
 * Program  : drastic64
 */


void render_polygon_edge_perspective_steps_asm(undefined2 *param_1,float *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  float *pfVar5;
  float *pfVar9;
  float fVar12;
  undefined auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar10;
  float *pfVar11;
  
  do {
    fVar12 = *param_2;
    fVar14 = param_2[1];
    pfVar5 = param_2 + 2;
    fVar15 = param_2[3];
    pfVar6 = param_2 + 4;
    fVar16 = param_2[5];
    pfVar7 = param_2 + 6;
    fVar17 = param_2[7];
    pfVar8 = param_2 + 8;
    fVar19 = param_2[9];
    pfVar9 = param_2 + 10;
    fVar20 = param_2[0xb];
    pfVar10 = param_2 + 0xc;
    fVar21 = param_2[0xd];
    pfVar11 = param_2 + 0xe;
    fVar22 = param_2[0xf];
    param_2 = param_2 + 0x10;
    auVar23._4_4_ = fVar15;
    auVar23._0_4_ = fVar14;
    auVar23._8_4_ = fVar16;
    auVar23._12_4_ = fVar17;
    auVar23 = NEON_frecpe(auVar23,4);
    auVar28._4_4_ = fVar20;
    auVar28._0_4_ = fVar19;
    auVar28._8_4_ = fVar21;
    auVar28._12_4_ = fVar22;
    auVar25 = NEON_frecpe(auVar28,4);
    auVar27._4_4_ = fVar15;
    auVar27._0_4_ = fVar14;
    auVar27._8_4_ = fVar16;
    auVar27._12_4_ = fVar17;
    auVar27 = NEON_frecps(auVar23,auVar27,4);
    auVar3._4_4_ = fVar20;
    auVar3._0_4_ = fVar19;
    auVar3._8_4_ = fVar21;
    auVar3._12_4_ = fVar22;
    auVar28 = NEON_frecps(auVar25,auVar3,4);
    auVar24._0_4_ = auVar23._0_4_ * auVar27._0_4_;
    auVar24._4_4_ = auVar23._4_4_ * auVar27._4_4_;
    auVar24._8_4_ = auVar23._8_4_ * auVar27._8_4_;
    auVar24._12_4_ = auVar23._12_4_ * auVar27._12_4_;
    auVar26._0_4_ = auVar25._0_4_ * auVar28._0_4_;
    auVar26._4_4_ = auVar25._4_4_ * auVar28._4_4_;
    auVar26._8_4_ = auVar25._8_4_ * auVar28._8_4_;
    auVar26._12_4_ = auVar25._12_4_ * auVar28._12_4_;
    auVar25._4_4_ = fVar15;
    auVar25._0_4_ = fVar14;
    auVar25._8_4_ = fVar16;
    auVar25._12_4_ = fVar17;
    auVar23 = NEON_frecps(auVar24,auVar25,4);
    auVar4._4_4_ = fVar20;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = fVar21;
    auVar4._12_4_ = fVar22;
    auVar27 = NEON_frecps(auVar26,auVar4,4);
    auVar13._0_4_ = fVar12 * auVar24._0_4_ * auVar23._0_4_;
    auVar13._4_4_ = *pfVar5 * auVar24._4_4_ * auVar23._4_4_;
    auVar13._8_4_ = *pfVar6 * auVar24._8_4_ * auVar23._8_4_;
    auVar13._12_4_ = *pfVar7 * auVar24._12_4_ * auVar23._12_4_;
    auVar18._0_4_ = *pfVar8 * auVar26._0_4_ * auVar27._0_4_;
    auVar18._4_4_ = *pfVar9 * auVar26._4_4_ * auVar27._4_4_;
    auVar18._8_4_ = *pfVar10 * auVar26._8_4_ * auVar27._8_4_;
    auVar18._12_4_ = *pfVar11 * auVar26._12_4_ * auVar27._12_4_;
    auVar23 = NEON_fcvtzs(auVar13,0xf,4);
    auVar27 = NEON_fcvtzs(auVar18,0xf,4);
    *param_1 = auVar23._0_2_;
    param_1[1] = auVar23._4_2_;
    param_1[2] = auVar23._8_2_;
    param_1[3] = auVar23._12_2_;
    param_1[4] = auVar27._0_2_;
    param_1[5] = auVar27._4_2_;
    param_1[6] = auVar27._8_2_;
    param_1[7] = auVar27._12_2_;
    param_1 = param_1 + 8;
    iVar2 = param_3 + -8;
    bVar1 = 7 < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


