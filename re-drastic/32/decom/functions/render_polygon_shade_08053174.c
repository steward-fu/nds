/*
 * Ghidra decompilation
 *
 * Function : render_polygon_shade
 * Address  : 08053174
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_shade
               (video_3d_struct *video_3d,geometry_struct *geometry,geometry_polygon_struct *polygon
               ,u32 *colors,u32 *texels,u8 *interpolated_rgb,u32 pixel_block_size_2b,
               u32 polygon_alpha,u32 pixels)

{
  u32 texel_a;
  u32 color;
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar5;
  uint uVar6;
  u32 texel;
  u8 *puVar7;
  uint uVar8;
  u32 r_1;
  u32 g;
  u32 b_1;
  u32 r;
  u8 *interpolated_g;
  byte *pbVar9;
  u32 g_1;
  uint uVar10;
  int iVar11;
  u32 b;
  byte *pbVar4;
  
  uVar5 = (polygon->attribute << 0x1a) >> 0x1e;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      if ((video_3d->display_3d_control & 2) != 0) {
        render_polygon_modulate_red(colors,texels,interpolated_rgb,polygon_alpha,pixels);
        if (pixels == 0) {
          return;
        }
        pbVar4 = interpolated_rgb;
        do {
          pbVar3 = pbVar4 + 1;
          uVar5 = *colors;
          puVar7 = geometry->toon_cache + (*pbVar4 >> 1);
          uVar8 = (uint)*puVar7 + (uVar5 & 0x3f);
          if (uVar8 < 0x40) {
            uVar8 = uVar5 & 0x1f000000 | uVar8;
          }
          else {
            uVar8 = uVar5 & 0x1f000000 | 0x3f;
          }
          uVar10 = (uint)puVar7[0x20] + ((uVar5 << 0x12) >> 0x1a);
          uVar5 = (uint)puVar7[0x40] + ((uVar5 << 10) >> 0x1a);
          if (0x3e < uVar10) {
            uVar10 = 0x3f;
          }
          if (0x3e < uVar5) {
            uVar5 = 0x3f;
          }
          *colors = uVar8 | uVar10 << 8 | uVar5 << 0x10;
          pbVar4 = pbVar3;
          colors = colors + 1;
        } while (interpolated_rgb + pixels != pbVar3);
        return;
      }
      render_polygon_toon_load(geometry->toon_cache,interpolated_rgb,pixel_block_size_2b,pixels);
    }
    render_polygon_modulate(colors,texels,interpolated_rgb,pixel_block_size_2b);
    return;
  }
  if (pixels != 0) {
    pbVar3 = interpolated_rgb + pixel_block_size_2b * 2 + -1;
    puVar1 = texels + -1;
    pbVar9 = interpolated_rgb + (pixel_block_size_2b - 1);
    pbVar4 = interpolated_rgb;
    do {
      puVar1 = puVar1 + 1;
      uVar8 = *puVar1;
      iVar11 = 0x20;
      pbVar2 = pbVar4 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar3 = pbVar3 + 1;
      uVar5 = uVar8 >> 0x18;
      if (uVar5 == 0x1f) {
        uVar10 = 0x20;
LAB_080532c0:
        iVar11 = 0x1f - uVar5;
        uVar5 = uVar10 * ((uVar8 << 8) >> 0x18);
        uVar6 = uVar10 * (uVar8 & 0xff);
        uVar10 = uVar10 * ((uVar8 << 0x10) >> 0x18);
      }
      else {
        uVar10 = uVar5;
        uVar6 = uVar5;
        if (uVar5 != 0) goto LAB_080532c0;
      }
      *colors = polygon_alpha << 0x18 | iVar11 * (uint)*pbVar4 + uVar6 >> 5 |
                (iVar11 * (uint)*pbVar9 + uVar10 >> 5) << 8 |
                (iVar11 * (uint)*pbVar3 + uVar5 >> 5) << 0x10;
      pbVar4 = pbVar2;
      colors = colors + 1;
    } while (interpolated_rgb + pixels != pbVar2);
  }
  return;
}


