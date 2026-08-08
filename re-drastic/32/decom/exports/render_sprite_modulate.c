/*
 * Ghidra decompilation
 *
 * Function : render_sprite_modulate
 * Address  : 08053394
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_sprite_modulate(u32 *colors,u32 *texels,u32 color,u32 pixels)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined (*pauVar5) [16];
  u32 *puVar6;
  uint uVar7;
  u32 b;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  u32 texel;
  u32 *puVar11;
  u32 uVar12;
  uint uVar13;
  u32 texel_b;
  uint uVar14;
  u32 texel_g;
  uint uVar15;
  u32 texel_r;
  uint uVar16;
  u32 g;
  uint uVar17;
  u32 r;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  
  uVar16 = (color << 0x12) >> 0x1a;
  uVar17 = color & 0x3f;
  uVar7 = (color << 10) >> 0x1a;
  if (pixels != 0) {
    if (pixels < 6 || texels < colors + 4 && colors < texels + 4) {
      puVar6 = texels + -1;
      uVar12 = 0;
      do {
        puVar6 = puVar6 + 1;
        uVar8 = *puVar6;
        uVar12 = uVar12 + 1;
        uVar15 = (uVar8 << 0x10) >> 0x18;
        uVar10 = (uVar8 << 8) >> 0x18;
        *colors = uVar8 & 0xff000000 | (uVar8 & 0xff) * uVar17 + uVar17 + (uVar8 & 0xff) >> 6 |
                  (uVar15 * uVar16 + uVar16 + uVar15 >> 6) << 8 |
                  (uVar10 * uVar7 + uVar7 + uVar10 >> 6) << 0x10;
        colors = colors + 1;
      } while (pixels != uVar12);
    }
    else {
      uVar8 = ((int)texels << 0x1d) >> 0x1f & 3;
      if (pixels <= uVar8) {
        uVar8 = pixels;
      }
      puVar6 = colors;
      puVar11 = texels;
      uVar15 = uVar8;
      if (uVar8 != 0) {
        uVar10 = *texels;
        uVar14 = (uVar10 << 0x10) >> 0x18;
        uVar13 = (uVar10 << 8) >> 0x18;
        *colors = uVar10 & 0xff000000 | (uVar10 & 0xff) * uVar17 + uVar17 + (uVar10 & 0xff) >> 6 |
                  (uVar14 * uVar16 + uVar16 + uVar14 >> 6) << 8 |
                  (uVar13 * uVar7 + uVar7 + uVar13 >> 6) << 0x10;
        puVar6 = colors + 1;
        puVar11 = texels + 1;
        if (uVar8 != 1) {
          uVar13 = texels[1];
          uVar15 = (uVar13 << 0x10) >> 0x18;
          uVar14 = (uVar13 << 8) >> 0x18;
          uVar15 = uVar15 * uVar16 + uVar16 + uVar15 >> 6;
          uVar10 = uVar15 << 8;
          if (uVar8 != 3) {
            uVar15 = 2;
          }
          colors[1] = uVar13 & 0xff000000 | (uVar13 & 0xff) * uVar17 + uVar17 + (uVar13 & 0xff) >> 6
                      | uVar10 | (uVar14 * uVar7 + uVar7 + uVar14 >> 6) << 0x10;
          puVar6 = colors + 2;
          puVar11 = texels + 2;
          if (uVar8 == 3) {
            uVar15 = texels[2];
            uVar10 = (uVar15 << 0x10) >> 0x18;
            uVar13 = (uVar15 << 8) >> 0x18;
            colors[2] = uVar15 & 0xff000000 |
                        (uVar15 & 0xff) * uVar17 + uVar17 + (uVar15 & 0xff) >> 6 |
                        (uVar10 * uVar16 + uVar16 + uVar10 >> 6) << 8 |
                        (uVar13 * uVar7 + uVar7 + uVar13 >> 6) << 0x10;
            puVar6 = colors + 3;
            puVar11 = texels + 3;
            uVar15 = uVar8;
          }
        }
      }
      uVar10 = ((pixels - uVar8) - 4 >> 2) + 1;
      if (pixels - 3 != uVar8) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(color,color) & 0x3f0000003f;
        auVar3._4_4_ = uVar16;
        auVar3._0_4_ = uVar16;
        auVar3._8_8_ = 0;
        uVar13 = 0;
        auVar4._4_4_ = uVar7;
        auVar4._0_4_ = uVar7;
        auVar4._8_8_ = 0;
        pauVar5 = (undefined (*) [16])(texels + uVar8);
        auVar1 = SIMDExpandImmediate(0,0,0xff);
        puVar9 = (undefined8 *)(colors + uVar8);
        do {
          auVar19 = *pauVar5;
          uVar13 = uVar13 + 1;
          pauVar5 = pauVar5 + 1;
          auVar21 = VectorShiftRight(auVar19,8);
          auVar20 = VectorShiftRight(auVar19,0x10);
          auVar22 = VectorShiftRight(auVar19,0x18);
          auVar18 = VectorMultiplyAccumulate(auVar19 & auVar1,auVar2 & auVar2 << 0x40,4,0);
          auVar23 = VectorShiftLeft(auVar22,0x18,0x20,0);
          auVar22 = VectorMultiplyAccumulate(auVar21 & auVar1,auVar3 & auVar3 << 0x40,4,0);
          auVar18 = VectorAdd(auVar18,auVar19 & auVar1,4);
          auVar19 = VectorMultiplyAccumulate(auVar20 & auVar1,auVar4 & auVar4 << 0x40,4,0);
          auVar21 = VectorAdd(auVar22,auVar21 & auVar1,4);
          auVar22 = VectorShiftRight(auVar18,6);
          auVar18 = VectorShiftRight(auVar21,6);
          auVar19 = VectorAdd(auVar19,auVar20 & auVar1,4);
          auVar18 = VectorShiftLeft(auVar18,8,0x20,0);
          auVar19 = VectorShiftRight(auVar19,6);
          auVar19 = VectorShiftLeft(auVar19,0x10,0x20,0);
          auVar19 = auVar22 | auVar23 | auVar18 | auVar19;
          *puVar9 = auVar19._0_8_;
          puVar9[1] = auVar19._8_8_;
          puVar9 = puVar9 + 2;
        } while (uVar13 < uVar10);
        uVar15 = uVar15 + uVar10 * 4;
        puVar6 = puVar6 + uVar10 * 4;
        puVar11 = puVar11 + uVar10 * 4;
        if (pixels - uVar8 == uVar10 * 4) {
          return;
        }
      }
      uVar10 = *puVar11;
      uVar8 = (uVar10 << 0x10) >> 0x18;
      uVar13 = (uVar10 << 8) >> 0x18;
      *puVar6 = uVar10 & 0xff000000 | (uVar10 & 0xff) * uVar17 + uVar17 + (uVar10 & 0xff) >> 6 |
                (uVar8 * uVar16 + uVar16 + uVar8 >> 6) << 8 |
                (uVar13 * uVar7 + uVar7 + uVar13 >> 6) << 0x10;
      if (uVar15 + 1 < pixels) {
        uVar10 = puVar11[1];
        uVar8 = (uVar10 << 0x10) >> 0x18;
        uVar13 = (uVar10 << 8) >> 0x18;
        puVar6[1] = uVar10 & 0xff000000 | (uVar10 & 0xff) * uVar17 + uVar17 + (uVar10 & 0xff) >> 6 |
                    (uVar8 * uVar16 + uVar16 + uVar8 >> 6) << 8 |
                    (uVar13 * uVar7 + uVar7 + uVar13 >> 6) << 0x10;
        if (uVar15 + 2 < pixels) {
          uVar10 = puVar11[2];
          uVar15 = (uVar10 << 0x10) >> 0x18;
          uVar8 = (uVar10 << 8) >> 0x18;
          puVar6[2] = uVar10 & 0xff000000 | (uVar10 & 0xff) * uVar17 + uVar17 + (uVar10 & 0xff) >> 6
                      | (uVar15 * uVar16 + uVar16 + uVar15 >> 6) << 8 |
                      (uVar8 * uVar7 + uVar7 + uVar8 >> 6) << 0x10;
        }
      }
    }
  }
  return;
}


