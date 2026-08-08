/*
 * Ghidra decompilation
 *
 * Function : render_sprite_modulate_alpha
 * Address  : 08071148
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_sprite_modulate_alpha(u32 *texels,u32 polygon_alpha,u32 pixels)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined (*pauVar5) [16];
  uint uVar6;
  undefined (*pauVar7) [16];
  u32 texel_a;
  uint uVar8;
  uint uVar9;
  u32 texel;
  uint uVar10;
  u32 *puVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  if (pixels == 0) {
    return;
  }
  uVar6 = ((int)texels << 0x1d) >> 0x1f & 3;
  if (pixels <= uVar6) {
    uVar6 = pixels;
  }
  uVar10 = pixels;
  if ((pixels < 5) || (puVar11 = texels, uVar10 = uVar6, uVar6 != 0)) {
    uVar6 = (*texels << 3) >> 0x1b;
    puVar11 = texels + 1;
    *texels = *texels & 0xffffff | (uVar6 * polygon_alpha + polygon_alpha + uVar6 >> 5) << 0x18;
    uVar6 = uVar10;
    if (uVar10 != 1) {
      puVar11 = texels + 2;
      uVar8 = (texels[1] << 3) >> 0x1b;
      texels[1] = texels[1] & 0xffffff |
                  (uVar8 * polygon_alpha + polygon_alpha + uVar8 >> 5) << 0x18;
      if (uVar10 != 2) {
        puVar11 = texels + 3;
        uVar6 = (texels[2] << 3) >> 0x1b;
        uVar6 = uVar6 * polygon_alpha + polygon_alpha + uVar6 >> 5;
        uVar8 = uVar6 << 0x18;
        if (uVar10 != 4) {
          uVar6 = 3;
        }
        texels[2] = texels[2] & 0xffffff | uVar8;
        if (uVar10 == 4) {
          puVar11 = texels + 4;
          uVar6 = (texels[3] << 3) >> 0x1b;
          texels[3] = texels[3] & 0xffffff |
                      (uVar6 * polygon_alpha + polygon_alpha + uVar6 >> 5) << 0x18;
          uVar6 = uVar10;
        }
      }
    }
    if (pixels == uVar10) {
      return;
    }
  }
  uVar8 = ((pixels - uVar10) - 4 >> 2) + 1;
  if (2 < (pixels - 1) - uVar10) {
    auVar3._4_4_ = polygon_alpha;
    auVar3._0_4_ = polygon_alpha;
    auVar3._8_8_ = 0;
    pauVar7 = (undefined (*) [16])(texels + uVar10);
    auVar1 = SIMDExpandImmediate(0,0,0x1f);
    uVar9 = 0;
    pauVar5 = pauVar7;
    do {
      auVar4 = *pauVar7;
      uVar9 = uVar9 + 1;
      pauVar7 = pauVar7 + 1;
      auVar12 = VectorShiftRight(auVar4,0x18);
      auVar2 = SIMDExpandImmediate(1,7,0xff);
      auVar13 = VectorMultiplyAccumulate(auVar12 & auVar1,auVar3 & auVar3 << 0x40,4,0);
      auVar12 = VectorAdd(auVar13,auVar12 & auVar1,4);
      auVar12 = VectorShiftRight(auVar12,5);
      auVar12 = VectorShiftLeft(auVar12,0x18,0x20,0);
      auVar12 = auVar12 | auVar4 & ~auVar2;
      *(longlong *)*pauVar5 = auVar12._0_8_;
      *(longlong *)(*pauVar5 + 8) = auVar12._8_8_;
      pauVar5 = pauVar5 + 1;
    } while (uVar9 < uVar8);
    puVar11 = puVar11 + uVar8 * 4;
    uVar6 = uVar6 + uVar8 * 4;
    if (pixels - uVar10 == uVar8 * 4) {
      return;
    }
  }
  uVar10 = (*puVar11 << 3) >> 0x1b;
  *puVar11 = *puVar11 & 0xffffff | (uVar10 * polygon_alpha + polygon_alpha + uVar10 >> 5) << 0x18;
  if ((uVar6 + 1 < pixels) &&
     (uVar10 = (puVar11[1] << 3) >> 0x1b,
     puVar11[1] = puVar11[1] & 0xffffff |
                  (uVar10 * polygon_alpha + polygon_alpha + uVar10 >> 5) << 0x18, uVar6 + 2 < pixels
     )) {
    uVar6 = (puVar11[2] << 3) >> 0x1b;
    puVar11[2] = puVar11[2] & 0xffffff |
                 (uVar6 * polygon_alpha + polygon_alpha + uVar6 >> 5) << 0x18;
  }
  return;
}


