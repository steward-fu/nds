/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_flip_masks_c
 * Address  : 001a3610
 * Program  : drastic64
 */


void render_scanline_affine_setup_flip_masks_c
               (undefined *param_1,undefined (*param_2) [16],uint param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  bool bVar5;
  ulong uVar6;
  undefined (*pauVar7) [16];
  uint uVar8;
  undefined *puVar9;
  undefined uVar10;
  undefined uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  
  bVar5 = param_1 < *param_2 + (ulong)(param_3 + 1) * 2;
  uVar2 = param_3 - 0xf;
  if ((bVar5 && param_2 < (undefined (*) [16])(param_1 + (param_3 + 1)) || 0xffffffee < uVar2) &&
      (bVar5 && param_2 < (undefined (*) [16])(param_1 + (param_3 + 1)) || uVar2 != 0xffffffef)) {
    uVar6 = 0;
    do {
      uVar1 = *(ushort *)(*param_2 + uVar6 * 2);
      uVar11 = 0x38;
      if ((uVar1 & 0x400) != 0) {
        uVar11 = 0x3f;
      }
      uVar10 = 0;
      if ((uVar1 & 0x400) != 0) {
        uVar10 = 7;
      }
      while ((uVar1 >> 0xb & 1) == 0) {
        param_1[uVar6] = uVar10;
        uVar2 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar2;
        if (param_3 < uVar2) {
          return;
        }
        uVar1 = *(ushort *)(*param_2 + (ulong)uVar2 * 2);
        uVar11 = 0x38;
        if ((uVar1 & 0x400) != 0) {
          uVar11 = 0x3f;
        }
        uVar10 = 0;
        if ((uVar1 & 0x400) != 0) {
          uVar10 = 7;
        }
      }
      param_1[uVar6] = uVar11;
      uVar2 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar2;
    } while (uVar2 <= param_3);
    return;
  }
  uVar2 = (uVar2 >> 4) + 1;
  uVar8 = 0;
  pauVar7 = param_2;
  puVar9 = param_1;
  do {
    auVar15 = *pauVar7;
    auVar17 = pauVar7[1];
    uVar8 = uVar8 + 1;
    pauVar7 = pauVar7 + 2;
    auVar18._0_8_ =
         CONCAT17(auVar15[7],
                  (uint7)(CONCAT15(auVar15[5],
                                   (uint5)(CONCAT13(auVar15[3],(uint3)(auVar15[1] & 4) << 8) &
                                          0x4ffffff)) & 0x4ffffffffff)) & 0x4ffffffffffffff;
    auVar18[8] = 0;
    auVar18[9] = auVar15[9] & 4;
    auVar18[10] = 0;
    auVar18[11] = auVar15[11] & 4;
    auVar18[12] = 0;
    auVar18[13] = auVar15[13] & 4;
    auVar18[14] = 0;
    auVar18[15] = auVar15[15] & 4;
    auVar16._0_8_ =
         CONCAT17(auVar17[7],
                  (uint7)(CONCAT15(auVar17[5],
                                   (uint5)(CONCAT13(auVar17[3],(uint3)(auVar17[1] & 4) << 8) &
                                          0x4ffffff)) & 0x4ffffffffff)) & 0x4ffffffffffffff;
    auVar16[8] = 0;
    auVar16[9] = auVar17[9] & 4;
    auVar16[10] = 0;
    auVar16[11] = auVar17[11] & 4;
    auVar16[12] = 0;
    auVar16[13] = auVar17[13] & 4;
    auVar16[14] = 0;
    auVar16[15] = auVar17[15] & 4;
    auVar13._0_8_ =
         CONCAT17(auVar15[7],
                  (uint7)(CONCAT15(auVar15[5],
                                   (uint5)(CONCAT13(auVar15[3],(uint3)(auVar15[1] & 8) << 8) &
                                          0x8ffffff)) & 0x8ffffffffff)) & 0x8ffffffffffffff;
    auVar13[8] = 0;
    auVar13[9] = auVar15[9] & 8;
    auVar13[10] = 0;
    auVar13[11] = auVar15[11] & 8;
    auVar13[12] = 0;
    auVar13[13] = auVar15[13] & 8;
    auVar13[14] = 0;
    auVar13[15] = auVar15[15] & 8;
    auVar12._0_8_ =
         CONCAT17(auVar17[7],
                  (uint7)(CONCAT15(auVar17[5],
                                   (uint5)(CONCAT13(auVar17[3],(uint3)(auVar17[1] & 8) << 8) &
                                          0x8ffffff)) & 0x8ffffffffff)) & 0x8ffffffffffffff;
    auVar12[8] = 0;
    auVar12[9] = auVar17[9] & 8;
    auVar12[10] = 0;
    auVar12[11] = auVar17[11] & 8;
    auVar12[12] = 0;
    auVar12[13] = auVar17[13] & 8;
    auVar12[14] = 0;
    auVar12[15] = auVar17[15] & 8;
    auVar18 = NEON_cmeq(auVar18,0,2);
    auVar16 = NEON_cmeq(auVar16,0,2);
    auVar14 = NEON_cmeq(auVar13,0,2);
    auVar12 = NEON_cmeq(auVar12,0,2);
    auVar17._8_2_ = 0x3f;
    auVar17._0_8_ = 0x3f003f003f003f;
    auVar17._10_2_ = 0x3f;
    auVar17._12_2_ = 0x3f;
    auVar17._14_2_ = 0x3f;
    auVar19._8_2_ = 0x38;
    auVar19._0_8_ = 0x38003800380038;
    auVar19._10_2_ = 0x38;
    auVar19._12_2_ = 0x38;
    auVar19._14_2_ = 0x38;
    auVar19 = NEON_bsl(auVar18,auVar19,auVar17,1);
    auVar15._8_2_ = 0x3f;
    auVar15._0_8_ = 0x3f003f003f003f;
    auVar15._10_2_ = 0x3f;
    auVar15._12_2_ = 0x3f;
    auVar15._14_2_ = 0x3f;
    auVar3._8_2_ = 0x38;
    auVar3._0_8_ = 0x38003800380038;
    auVar3._10_2_ = 0x38;
    auVar3._12_2_ = 0x38;
    auVar3._14_2_ = 0x38;
    auVar17 = NEON_bsl(auVar16,auVar3,auVar15,1);
    auVar4[7] = 0;
    auVar4._0_7_ = CONCAT16(~auVar18[6],
                            (uint6)(CONCAT14(~auVar18[4],
                                             (uint)(CONCAT12(~auVar18[2],(ushort)(~auVar18[0] & 7))
                                                   & 0x7ffff)) & 0x7ffffffff)) & 0x7ffffffffffff;
    auVar4[8] = ~auVar18[8] & 7;
    auVar4[9] = 0;
    auVar4[10] = ~auVar18[10] & 7;
    auVar4[11] = 0;
    auVar4[12] = ~auVar18[12] & 7;
    auVar4[13] = 0;
    auVar4[14] = ~auVar18[14] & 7;
    auVar4[15] = 0;
    auVar15 = NEON_bsl(auVar14,auVar4,auVar19,1);
    auVar14[7] = 0;
    auVar14._0_7_ =
         CONCAT16(~auVar16[6],
                  (uint6)(CONCAT14(~auVar16[4],
                                   (uint)(CONCAT12(~auVar16[2],(ushort)(~auVar16[0] & 7)) & 0x7ffff)
                                  ) & 0x7ffffffff)) & 0x7ffffffffffff;
    auVar14[8] = ~auVar16[8] & 7;
    auVar14[9] = 0;
    auVar14[10] = ~auVar16[10] & 7;
    auVar14[11] = 0;
    auVar14[12] = ~auVar16[12] & 7;
    auVar14[13] = 0;
    auVar14[14] = ~auVar16[14] & 7;
    auVar14[15] = 0;
    auVar17 = NEON_bsl(auVar12,auVar14,auVar17,1);
    puVar9[0x10] = auVar17[0];
    puVar9[0x11] = auVar17[2];
    puVar9[0x12] = auVar17[4];
    puVar9[0x13] = auVar17[6];
    puVar9[0x14] = auVar17[8];
    puVar9[0x15] = auVar17[10];
    puVar9[0x16] = auVar17[12];
    puVar9[0x17] = auVar17[14];
    *puVar9 = auVar15[0];
    puVar9[1] = auVar15[2];
    puVar9[2] = auVar15[4];
    puVar9[3] = auVar15[6];
    puVar9[4] = auVar15[8];
    puVar9[5] = auVar15[10];
    puVar9[6] = auVar15[12];
    puVar9[7] = auVar15[14];
    puVar9 = puVar9 + 0x10;
  } while (uVar8 < uVar2);
  uVar8 = uVar2 * 0x10;
  if (param_3 + 1 != uVar2 * 0x10) {
    do {
      while( true ) {
        uVar1 = *(ushort *)(*param_2 + (ulong)uVar8 * 2);
        uVar11 = 0x38;
        if ((uVar1 & 0x400) != 0) {
          uVar11 = 0x3f;
        }
        uVar10 = 0;
        if ((uVar1 & 0x400) != 0) {
          uVar10 = 7;
        }
        if ((uVar1 >> 0xb & 1) != 0) break;
        param_1[uVar8] = uVar10;
        uVar8 = uVar8 + 1;
        if (param_3 < uVar8) {
          return;
        }
      }
      param_1[uVar8] = uVar11;
      uVar8 = uVar8 + 1;
    } while (uVar8 <= param_3);
  }
  return;
}


