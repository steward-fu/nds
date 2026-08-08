/*
 * Ghidra decompilation
 *
 * Function : render_sprite_set_alpha
 * Address  : 08071360
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_sprite_set_alpha(u32 *texels,u32 polygon_alpha,u32 pixels)

{
  u32 uVar1;
  u32 *texel;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  u32 unaff_r4;
  uint uVar5;
  uint uVar6;
  u32 *puVar7;
  
  uVar3 = polygon_alpha << 0x18 | 0xffffff;
  if (pixels == 0) {
    return;
  }
  uVar4 = ((int)texels << 0x1d) >> 0x1f & 3;
  if (pixels <= uVar4) {
    uVar4 = pixels;
  }
  uVar1 = pixels;
  if ((pixels < 5) || (puVar7 = texels, uVar1 = uVar4, uVar4 != 0)) {
    puVar7 = texels + 1;
    *texels = *texels & uVar3;
    uVar4 = uVar1;
    if (uVar1 != 1) {
      puVar7 = texels + 2;
      texels[1] = texels[1] & uVar3;
      if (uVar1 != 2) {
        puVar7 = texels + 3;
        if (uVar1 != 4) {
          unaff_r4 = 3;
        }
        texels[2] = texels[2] & uVar3;
        uVar4 = unaff_r4;
        if (uVar1 == 4) {
          puVar7 = texels + 4;
          texels[3] = texels[3] & uVar3;
          uVar4 = uVar1;
        }
      }
    }
    if (pixels == uVar1) {
      return;
    }
  }
  uVar6 = ((pixels - uVar1) - 4 >> 2) + 1;
  if (2 < (pixels - 1) - uVar1) {
    uVar5 = 0;
    puVar2 = (undefined8 *)(texels + uVar1);
    do {
      uVar5 = uVar5 + 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    } while (uVar5 < uVar6);
    puVar7 = puVar7 + uVar6 * 4;
    uVar4 = uVar4 + uVar6 * 4;
    if (pixels - uVar1 == uVar6 * 4) {
      return;
    }
  }
  *puVar7 = *puVar7 & uVar3;
  if ((uVar4 + 1 < pixels) && (puVar7[1] = puVar7[1] & uVar3, uVar4 + 2 < pixels)) {
    puVar7[2] = uVar3 & puVar7[2];
  }
  return;
}


