/*
 * Ghidra decompilation
 *
 * Function : render_polygon_toon_highlight_untextured
 * Address  : 080530c4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable toon_cache_r:u8 *[r0:4] conflicts with parameter, skipped. */

void render_polygon_toon_highlight_untextured
               (u8 *toon_cache,u32 *colors,u8 *interpolated_rgb,u32 pixel_block_size_2b,
               u32 polygon_alpha,u32 pixels)

{
  u8 *interpolated_r;
  byte *pbVar1;
  uint uVar3;
  u8 *interpolated_g;
  byte *pbVar4;
  uint uVar5;
  u32 r;
  byte *pbVar6;
  u32 index;
  uint uVar7;
  u32 g;
  byte *pbVar8;
  byte *pbVar2;
  
  if (pixels != 0) {
    pbVar8 = interpolated_rgb + pixel_block_size_2b * 2 + -1;
    pbVar4 = interpolated_rgb + (pixel_block_size_2b - 1);
    pbVar2 = interpolated_rgb;
    do {
      pbVar1 = pbVar2 + 1;
      pbVar4 = pbVar4 + 1;
      pbVar8 = pbVar8 + 1;
      pbVar6 = toon_cache + (*pbVar2 >> 1);
      uVar5 = (uint)*pbVar6 + (uint)*pbVar2;
      if (uVar5 < 0x40) {
        uVar5 = polygon_alpha << 0x18 | uVar5;
      }
      else {
        uVar5 = polygon_alpha << 0x18 | 0x3f;
      }
      uVar7 = (uint)pbVar6[0x20] + (uint)*pbVar4;
      uVar3 = (uint)pbVar6[0x40] + (uint)*pbVar8;
      if (0x3e < uVar7) {
        uVar7 = 0x3f;
      }
      if (0x3e < uVar3) {
        uVar3 = 0x3f;
      }
      *colors = uVar5 | uVar7 << 8 | uVar3 << 0x10;
      colors = colors + 1;
      pbVar2 = pbVar1;
    } while (interpolated_rgb + pixels != pbVar1);
  }
  return;
}


