/*
 * Ghidra decompilation
 *
 * Function : render_polygon_decal
 * Address  : 08052edc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_decal
               (u32 *colors,u32 *texels,u8 *interpolated_rgb,u32 pixel_block_size_2b,
               u32 polygon_alpha,u32 pixels)

{
  u32 *puVar1;
  u8 *interpolated_r;
  byte *pbVar2;
  byte *pbVar3;
  u32 texel_a;
  uint uVar4;
  u32 g;
  u32 texel;
  uint uVar5;
  uint uVar6;
  u32 r;
  u32 b;
  byte *pbVar7;
  u8 *interpolated_g;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  
  if (pixels != 0) {
    pbVar7 = interpolated_rgb + pixel_block_size_2b * 2 + -1;
    puVar1 = texels + -1;
    pbVar8 = interpolated_rgb + (pixel_block_size_2b - 1);
    pbVar2 = interpolated_rgb;
    do {
      puVar1 = puVar1 + 1;
      uVar5 = *puVar1;
      iVar9 = 0x20;
      pbVar3 = pbVar2 + 1;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
      uVar4 = uVar5 >> 0x18;
      if (uVar4 == 0x1f) {
        uVar10 = 0x20;
LAB_08052f98:
        iVar9 = 0x1f - uVar4;
        uVar4 = uVar10 * (uVar5 & 0xff);
        uVar6 = uVar10 * ((uVar5 << 0x10) >> 0x18);
        uVar10 = uVar10 * ((uVar5 << 8) >> 0x18);
      }
      else {
        uVar6 = uVar4;
        uVar10 = uVar4;
        if (uVar4 != 0) goto LAB_08052f98;
      }
      *colors = polygon_alpha << 0x18 | (uint)*pbVar2 * iVar9 + uVar4 >> 5 |
                ((uint)*pbVar8 * iVar9 + uVar6 >> 5) << 8 |
                ((uint)*pbVar7 * iVar9 + uVar10 >> 5) << 0x10;
      colors = colors + 1;
      pbVar2 = pbVar3;
    } while (interpolated_rgb + pixels != pbVar3);
  }
  return;
}


