/*
 * Ghidra decompilation
 *
 * Function : render_polygon_shade_untextured
 * Address  : 080538e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_shade_untextured
               (video_3d_struct *video_3d,geometry_struct *geometry,geometry_polygon_struct *polygon
               ,u32 *colors,u8 *interpolated_rgb,u32 pixel_block_size_2b,u32 polygon_alpha,
               u32 pixels)

{
  u8 *toon_cache_r;
  u8 *toon_cache_r_1;
  byte *pbVar1;
  byte *pbVar2;
  u32 index;
  uint uVar4;
  u32 index_1;
  uint uVar5;
  u32 r;
  u8 *interpolated_g;
  byte *pbVar6;
  u8 *interpolated_r;
  uint uVar7;
  u32 g;
  u8 *puVar8;
  byte *pbVar3;
  
  if ((polygon->attribute << 0x1a) >> 0x1e == 2) {
    if ((video_3d->display_3d_control & 2) == 0) {
      if (pixels != 0) {
        pbVar3 = interpolated_rgb;
        do {
          pbVar1 = pbVar3 + 1;
          uVar4 = (uint)(*pbVar3 >> 1);
          *colors = (uint)geometry->toon_cache[uVar4] | polygon_alpha << 0x18 |
                    (uint)geometry->toon_cache[uVar4 + 0x20] << 8 |
                    (uint)geometry->toon_cache[uVar4 + 0x40] << 0x10;
          pbVar3 = pbVar1;
          colors = colors + 1;
        } while (interpolated_rgb + pixels != pbVar1);
      }
    }
    else if (pixels != 0) {
      pbVar1 = interpolated_rgb + pixel_block_size_2b * 2 + -1;
      pbVar6 = interpolated_rgb + (pixel_block_size_2b - 1);
      pbVar3 = interpolated_rgb;
      do {
        pbVar2 = pbVar3 + 1;
        pbVar6 = pbVar6 + 1;
        pbVar1 = pbVar1 + 1;
        puVar8 = geometry->toon_cache + (*pbVar3 >> 1);
        index_1 = (u32)*puVar8;
        uVar5 = index_1 + *pbVar3;
        uVar7 = (uint)puVar8[0x20] + (uint)*pbVar6;
        uVar4 = (uint)puVar8[0x40] + (uint)*pbVar1;
        if (0x3e < uVar7) {
          uVar7 = 0x3f;
        }
        if (uVar5 < 0x40) {
          uVar5 = polygon_alpha << 0x18 | uVar5;
        }
        else {
          uVar5 = polygon_alpha << 0x18 | 0x3f;
        }
        if (0x3e < uVar4) {
          uVar4 = 0x3f;
        }
        *colors = uVar5 | uVar7 << 8 | uVar4 << 0x10;
        pbVar3 = pbVar2;
        colors = colors + 1;
      } while (interpolated_rgb + pixels != pbVar2);
    }
    return;
  }
  render_polygon_combine_colors(colors,interpolated_rgb);
  return;
}


