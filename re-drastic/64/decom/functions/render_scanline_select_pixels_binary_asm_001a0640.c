/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_pixels_binary_asm
 * Address  : 001a0640
 * Program  : drastic64
 */


void render_scanline_select_pixels_binary_asm
               (undefined param_1 [16],undefined param_2 [16],undefined param_3 [16],
               undefined (*param_4) [16],undefined (*param_5) [16],undefined (*param_6) [16],
               int *param_7)

{
  int iVar1;
  undefined2 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined (*pauVar7) [16];
  undefined (*pauVar10) [16];
  int iVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  undefined (*pauVar11) [16];
  undefined (*pauVar12) [16];
  
  iVar13 = 0x100;
  if (param_5 != param_4) {
    do {
      while( true ) {
        iVar1 = *param_7;
        uVar2 = *(undefined2 *)((long)param_7 + 2);
        param_7 = param_7 + 1;
        auVar15 = *param_5;
        auVar14 = param_5[1];
        auVar17 = param_5[2];
        auVar20 = param_5[3];
        param_5 = param_5 + 4;
        if (iVar1 != 0) break;
        param_6 = param_6 + 4;
        *(short *)*param_4 = auVar15._0_2_;
        *(short *)(*param_4 + 2) = auVar15._2_2_;
        *(short *)(*param_4 + 4) = auVar15._4_2_;
        *(short *)(*param_4 + 6) = auVar15._6_2_;
        *(short *)(*param_4 + 8) = auVar15._8_2_;
        *(short *)(*param_4 + 10) = auVar15._10_2_;
        *(short *)(*param_4 + 0xc) = auVar15._12_2_;
        *(short *)(*param_4 + 0xe) = auVar15._14_2_;
        *(short *)param_4[1] = auVar14._0_2_;
        *(short *)(param_4[1] + 2) = auVar14._2_2_;
        *(short *)(param_4[1] + 4) = auVar14._4_2_;
        *(short *)(param_4[1] + 6) = auVar14._6_2_;
        *(short *)(param_4[1] + 8) = auVar14._8_2_;
        *(short *)(param_4[1] + 10) = auVar14._10_2_;
        *(short *)(param_4[1] + 0xc) = auVar14._12_2_;
        *(short *)(param_4[1] + 0xe) = auVar14._14_2_;
        *(short *)param_4[2] = auVar17._0_2_;
        *(short *)(param_4[2] + 2) = auVar17._2_2_;
        *(short *)(param_4[2] + 4) = auVar17._4_2_;
        *(short *)(param_4[2] + 6) = auVar17._6_2_;
        *(short *)(param_4[2] + 8) = auVar17._8_2_;
        *(short *)(param_4[2] + 10) = auVar17._10_2_;
        *(short *)(param_4[2] + 0xc) = auVar17._12_2_;
        *(short *)(param_4[2] + 0xe) = auVar17._14_2_;
        *(short *)param_4[3] = auVar20._0_2_;
        *(short *)(param_4[3] + 2) = auVar20._2_2_;
        *(short *)(param_4[3] + 4) = auVar20._4_2_;
        *(short *)(param_4[3] + 6) = auVar20._6_2_;
        *(short *)(param_4[3] + 8) = auVar20._8_2_;
        *(short *)(param_4[3] + 10) = auVar20._10_2_;
        *(short *)(param_4[3] + 0xc) = auVar20._12_2_;
        *(short *)(param_4[3] + 0xe) = auVar20._14_2_;
        param_4 = param_4 + 4;
        iVar13 = iVar13 + -0x20;
        if (iVar13 == 0) {
          return;
        }
      }
      auVar3 = *param_6;
      pauVar7 = param_6 + 1;
      pauVar8 = param_6 + 2;
      pauVar9 = param_6 + 3;
      param_6 = param_6 + 4;
      auVar16[8] = 0x10;
      auVar16._0_8_ = 0x8000400020001;
      auVar16[9] = 0;
      auVar16[10] = 0x20;
      auVar16[11] = 0;
      auVar16[12] = 0x40;
      auVar16[13] = 0;
      auVar16[14] = 0x80;
      auVar16[15] = 0;
      auVar16 = NEON_cmtst(param_3,auVar16,2);
      auVar18._8_2_ = 0x1000;
      auVar18._0_8_ = 0x800040002000100;
      auVar18._10_2_ = 0x2000;
      auVar18._12_2_ = 0x4000;
      auVar18._14_2_ = 0x8000;
      auVar18 = NEON_cmtst(param_3,auVar18,2);
      auVar19[8] = 0x10;
      auVar19._0_8_ = 0x8000400020001;
      auVar19[9] = 0;
      auVar19[10] = 0x20;
      auVar19[11] = 0;
      auVar19[12] = 0x40;
      auVar19[13] = 0;
      auVar19[14] = 0x80;
      auVar19[15] = 0;
      auVar5._2_2_ = uVar2;
      auVar5._0_2_ = uVar2;
      auVar5._4_2_ = uVar2;
      auVar5._6_2_ = uVar2;
      auVar5._8_2_ = uVar2;
      auVar5._10_2_ = uVar2;
      auVar5._12_2_ = uVar2;
      auVar5._14_2_ = uVar2;
      auVar19 = NEON_cmtst(auVar5,auVar19,2);
      auVar21._8_2_ = 0x1000;
      auVar21._0_8_ = 0x800040002000100;
      auVar21._10_2_ = 0x2000;
      auVar21._12_2_ = 0x4000;
      auVar21._14_2_ = 0x8000;
      auVar6._2_2_ = uVar2;
      auVar6._0_2_ = uVar2;
      auVar6._4_2_ = uVar2;
      auVar6._6_2_ = uVar2;
      auVar6._8_2_ = uVar2;
      auVar6._10_2_ = uVar2;
      auVar6._12_2_ = uVar2;
      auVar6._14_2_ = uVar2;
      auVar21 = NEON_cmtst(auVar6,auVar21,2);
      auVar15 = NEON_bit(auVar15,auVar3,auVar16,1);
      auVar14 = NEON_bit(auVar14,*pauVar7,auVar18,1);
      auVar17 = NEON_bit(auVar17,*pauVar8,auVar19,1);
      auVar20 = NEON_bit(auVar20,*pauVar9,auVar21,1);
      *(short *)*param_4 = auVar15._0_2_;
      *(short *)(*param_4 + 2) = auVar15._2_2_;
      *(short *)(*param_4 + 4) = auVar15._4_2_;
      *(short *)(*param_4 + 6) = auVar15._6_2_;
      *(short *)(*param_4 + 8) = auVar15._8_2_;
      *(short *)(*param_4 + 10) = auVar15._10_2_;
      *(short *)(*param_4 + 0xc) = auVar15._12_2_;
      *(short *)(*param_4 + 0xe) = auVar15._14_2_;
      *(short *)param_4[1] = auVar14._0_2_;
      *(short *)(param_4[1] + 2) = auVar14._2_2_;
      *(short *)(param_4[1] + 4) = auVar14._4_2_;
      *(short *)(param_4[1] + 6) = auVar14._6_2_;
      *(short *)(param_4[1] + 8) = auVar14._8_2_;
      *(short *)(param_4[1] + 10) = auVar14._10_2_;
      *(short *)(param_4[1] + 0xc) = auVar14._12_2_;
      *(short *)(param_4[1] + 0xe) = auVar14._14_2_;
      *(short *)param_4[2] = auVar17._0_2_;
      *(short *)(param_4[2] + 2) = auVar17._2_2_;
      *(short *)(param_4[2] + 4) = auVar17._4_2_;
      *(short *)(param_4[2] + 6) = auVar17._6_2_;
      *(short *)(param_4[2] + 8) = auVar17._8_2_;
      *(short *)(param_4[2] + 10) = auVar17._10_2_;
      *(short *)(param_4[2] + 0xc) = auVar17._12_2_;
      *(short *)(param_4[2] + 0xe) = auVar17._14_2_;
      *(short *)param_4[3] = auVar20._0_2_;
      *(short *)(param_4[3] + 2) = auVar20._2_2_;
      *(short *)(param_4[3] + 4) = auVar20._4_2_;
      *(short *)(param_4[3] + 6) = auVar20._6_2_;
      *(short *)(param_4[3] + 8) = auVar20._8_2_;
      *(short *)(param_4[3] + 10) = auVar20._10_2_;
      *(short *)(param_4[3] + 0xc) = auVar20._12_2_;
      *(short *)(param_4[3] + 0xe) = auVar20._14_2_;
      param_4 = param_4 + 4;
      iVar13 = iVar13 + -0x20;
    } while (iVar13 != 0);
    return;
  }
  do {
    while( true ) {
      iVar1 = *param_7;
      uVar2 = *(undefined2 *)((long)param_7 + 2);
      param_7 = param_7 + 1;
      if (iVar1 != 0) break;
      param_5 = param_5 + 4;
      param_6 = param_6 + 4;
      param_4 = param_4 + 4;
      iVar13 = iVar13 + -0x20;
      if (iVar13 == 0) {
        return;
      }
    }
    auVar16 = *param_5;
    pauVar7 = param_5 + 1;
    pauVar8 = param_5 + 2;
    pauVar9 = param_5 + 3;
    param_5 = param_5 + 4;
    auVar19 = *param_6;
    pauVar10 = param_6 + 1;
    pauVar11 = param_6 + 2;
    pauVar12 = param_6 + 3;
    param_6 = param_6 + 4;
    auVar15[8] = 0x10;
    auVar15._0_8_ = 0x8000400020001;
    auVar15[9] = 0;
    auVar15[10] = 0x20;
    auVar15[11] = 0;
    auVar15[12] = 0x40;
    auVar15[13] = 0;
    auVar15[14] = 0x80;
    auVar15[15] = 0;
    auVar15 = NEON_cmtst(param_3,auVar15,2);
    auVar17._8_2_ = 0x1000;
    auVar17._0_8_ = 0x800040002000100;
    auVar17._10_2_ = 0x2000;
    auVar17._12_2_ = 0x4000;
    auVar17._14_2_ = 0x8000;
    auVar17 = NEON_cmtst(param_3,auVar17,2);
    auVar14[8] = 0x10;
    auVar14._0_8_ = 0x8000400020001;
    auVar14[9] = 0;
    auVar14[10] = 0x20;
    auVar14[11] = 0;
    auVar14[12] = 0x40;
    auVar14[13] = 0;
    auVar14[14] = 0x80;
    auVar14[15] = 0;
    auVar3._2_2_ = uVar2;
    auVar3._0_2_ = uVar2;
    auVar3._4_2_ = uVar2;
    auVar3._6_2_ = uVar2;
    auVar3._8_2_ = uVar2;
    auVar3._10_2_ = uVar2;
    auVar3._12_2_ = uVar2;
    auVar3._14_2_ = uVar2;
    auVar18 = NEON_cmtst(auVar3,auVar14,2);
    auVar20._8_2_ = 0x1000;
    auVar20._0_8_ = 0x800040002000100;
    auVar20._10_2_ = 0x2000;
    auVar20._12_2_ = 0x4000;
    auVar20._14_2_ = 0x8000;
    auVar4._2_2_ = uVar2;
    auVar4._0_2_ = uVar2;
    auVar4._4_2_ = uVar2;
    auVar4._6_2_ = uVar2;
    auVar4._8_2_ = uVar2;
    auVar4._10_2_ = uVar2;
    auVar4._12_2_ = uVar2;
    auVar4._14_2_ = uVar2;
    auVar20 = NEON_cmtst(auVar4,auVar20,2);
    auVar15 = NEON_bit(auVar16,auVar19,auVar15,1);
    auVar14 = NEON_bit(*pauVar7,*pauVar10,auVar17,1);
    auVar17 = NEON_bit(*pauVar8,*pauVar11,auVar18,1);
    auVar20 = NEON_bit(*pauVar9,*pauVar12,auVar20,1);
    *(short *)*param_4 = auVar15._0_2_;
    *(short *)(*param_4 + 2) = auVar15._2_2_;
    *(short *)(*param_4 + 4) = auVar15._4_2_;
    *(short *)(*param_4 + 6) = auVar15._6_2_;
    *(short *)(*param_4 + 8) = auVar15._8_2_;
    *(short *)(*param_4 + 10) = auVar15._10_2_;
    *(short *)(*param_4 + 0xc) = auVar15._12_2_;
    *(short *)(*param_4 + 0xe) = auVar15._14_2_;
    *(short *)param_4[1] = auVar14._0_2_;
    *(short *)(param_4[1] + 2) = auVar14._2_2_;
    *(short *)(param_4[1] + 4) = auVar14._4_2_;
    *(short *)(param_4[1] + 6) = auVar14._6_2_;
    *(short *)(param_4[1] + 8) = auVar14._8_2_;
    *(short *)(param_4[1] + 10) = auVar14._10_2_;
    *(short *)(param_4[1] + 0xc) = auVar14._12_2_;
    *(short *)(param_4[1] + 0xe) = auVar14._14_2_;
    *(short *)param_4[2] = auVar17._0_2_;
    *(short *)(param_4[2] + 2) = auVar17._2_2_;
    *(short *)(param_4[2] + 4) = auVar17._4_2_;
    *(short *)(param_4[2] + 6) = auVar17._6_2_;
    *(short *)(param_4[2] + 8) = auVar17._8_2_;
    *(short *)(param_4[2] + 10) = auVar17._10_2_;
    *(short *)(param_4[2] + 0xc) = auVar17._12_2_;
    *(short *)(param_4[2] + 0xe) = auVar17._14_2_;
    *(short *)param_4[3] = auVar20._0_2_;
    *(short *)(param_4[3] + 2) = auVar20._2_2_;
    *(short *)(param_4[3] + 4) = auVar20._4_2_;
    *(short *)(param_4[3] + 6) = auVar20._6_2_;
    *(short *)(param_4[3] + 8) = auVar20._8_2_;
    *(short *)(param_4[3] + 10) = auVar20._10_2_;
    *(short *)(param_4[3] + 0xc) = auVar20._12_2_;
    *(short *)(param_4[3] + 0xe) = auVar20._14_2_;
    param_4 = param_4 + 4;
    iVar13 = iVar13 + -0x20;
  } while (iVar13 != 0);
  return;
}


