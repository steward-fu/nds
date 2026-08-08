/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_perspective_steps_asm
 * Address  : 00199df0
 * Program  : drastic64
 */


void render_polygon_setup_perspective_steps_asm
               (undefined2 *param_1,undefined (*param_2) [16],undefined (*param_3) [16],int param_4)

{
  bool bVar1;
  int iVar2;
  undefined (*pauVar3) [16];
  undefined (*pauVar5) [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined (*pauVar4) [16];
  
  do {
    auVar6 = *param_2;
    auVar7 = param_2[1];
    auVar18 = *param_3;
    auVar16 = *param_3;
    auVar10 = *param_3;
    pauVar3 = param_3 + 1;
    pauVar4 = param_3 + 2;
    auVar8 = param_2[2];
    auVar9 = param_2[3];
    param_2 = param_2 + 4;
    pauVar5 = param_3 + 3;
    param_3 = param_3 + 4;
    auVar10 = NEON_frecpe(auVar10,4);
    auVar12 = NEON_frecpe(*pauVar3,4);
    auVar14 = NEON_frecpe(*pauVar4,4);
    auVar15 = NEON_frecpe(*pauVar5,4);
    auVar16 = NEON_frecps(auVar10,auVar16,4);
    auVar17 = NEON_frecps(auVar12,*pauVar3,4);
    auVar19 = NEON_frecps(auVar14,*pauVar4,4);
    auVar20 = NEON_frecps(auVar15,*pauVar5,4);
    auVar11._0_4_ = auVar10._0_4_ * auVar16._0_4_;
    auVar11._4_4_ = auVar10._4_4_ * auVar16._4_4_;
    auVar11._8_4_ = auVar10._8_4_ * auVar16._8_4_;
    auVar11._12_4_ = auVar10._12_4_ * auVar16._12_4_;
    auVar13._0_4_ = auVar12._0_4_ * auVar17._0_4_;
    auVar13._4_4_ = auVar12._4_4_ * auVar17._4_4_;
    auVar13._8_4_ = auVar12._8_4_ * auVar17._8_4_;
    auVar13._12_4_ = auVar12._12_4_ * auVar17._12_4_;
    auVar17._0_4_ = auVar14._0_4_ * auVar19._0_4_;
    auVar17._4_4_ = auVar14._4_4_ * auVar19._4_4_;
    auVar17._8_4_ = auVar14._8_4_ * auVar19._8_4_;
    auVar17._12_4_ = auVar14._12_4_ * auVar19._12_4_;
    auVar14._0_4_ = auVar15._0_4_ * auVar20._0_4_;
    auVar14._4_4_ = auVar15._4_4_ * auVar20._4_4_;
    auVar14._8_4_ = auVar15._8_4_ * auVar20._8_4_;
    auVar14._12_4_ = auVar15._12_4_ * auVar20._12_4_;
    auVar16 = NEON_frecps(auVar11,auVar18,4);
    auVar18 = NEON_frecps(auVar13,*pauVar3,4);
    auVar12 = NEON_frecps(auVar17,*pauVar4,4);
    auVar15 = NEON_frecps(auVar14,*pauVar5,4);
    auVar10._0_4_ = auVar6._0_4_ * auVar11._0_4_ * auVar16._0_4_;
    auVar10._4_4_ = auVar6._4_4_ * auVar11._4_4_ * auVar16._4_4_;
    auVar10._8_4_ = auVar6._8_4_ * auVar11._8_4_ * auVar16._8_4_;
    auVar10._12_4_ = auVar6._12_4_ * auVar11._12_4_ * auVar16._12_4_;
    auVar16._0_4_ = auVar7._0_4_ * auVar13._0_4_ * auVar18._0_4_;
    auVar16._4_4_ = auVar7._4_4_ * auVar13._4_4_ * auVar18._4_4_;
    auVar16._8_4_ = auVar7._8_4_ * auVar13._8_4_ * auVar18._8_4_;
    auVar16._12_4_ = auVar7._12_4_ * auVar13._12_4_ * auVar18._12_4_;
    auVar18._0_4_ = auVar8._0_4_ * auVar17._0_4_ * auVar12._0_4_;
    auVar18._4_4_ = auVar8._4_4_ * auVar17._4_4_ * auVar12._4_4_;
    auVar18._8_4_ = auVar8._8_4_ * auVar17._8_4_ * auVar12._8_4_;
    auVar18._12_4_ = auVar8._12_4_ * auVar17._12_4_ * auVar12._12_4_;
    auVar12._0_4_ = auVar9._0_4_ * auVar14._0_4_ * auVar15._0_4_;
    auVar12._4_4_ = auVar9._4_4_ * auVar14._4_4_ * auVar15._4_4_;
    auVar12._8_4_ = auVar9._8_4_ * auVar14._8_4_ * auVar15._8_4_;
    auVar12._12_4_ = auVar9._12_4_ * auVar14._12_4_ * auVar15._12_4_;
    auVar6 = NEON_fcvtzs(auVar10,0xf,4);
    auVar7 = NEON_fcvtzs(auVar16,0xf,4);
    auVar8 = NEON_fcvtzs(auVar18,0xf,4);
    auVar9 = NEON_fcvtzs(auVar12,0xf,4);
    *param_1 = auVar6._0_2_;
    param_1[1] = auVar6._4_2_;
    param_1[2] = auVar6._8_2_;
    param_1[3] = auVar6._12_2_;
    param_1[4] = auVar7._0_2_;
    param_1[5] = auVar7._4_2_;
    param_1[6] = auVar7._8_2_;
    param_1[7] = auVar7._12_2_;
    param_1[8] = auVar8._0_2_;
    param_1[9] = auVar8._4_2_;
    param_1[10] = auVar8._8_2_;
    param_1[0xb] = auVar8._12_2_;
    param_1[0xc] = auVar9._0_2_;
    param_1[0xd] = auVar9._4_2_;
    param_1[0xe] = auVar9._8_2_;
    param_1[0xf] = auVar9._12_2_;
    param_1 = param_1 + 0x10;
    iVar2 = param_4 + -0x10;
    bVar1 = 0xf < param_4;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


