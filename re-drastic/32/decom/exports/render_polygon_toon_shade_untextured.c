/*
 * Ghidra decompilation
 *
 * Function : render_polygon_toon_shade_untextured
 * Address  : 0805306c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable toon_cache_r:u8 *[r0:4] conflicts with parameter, skipped. */

void render_polygon_toon_shade_untextured
               (u8 *toon_cache,u32 *colors,u8 *interpolated_r,u32 polygon_alpha,u32 pixels)

{
  uint uVar1;
  byte *pbVar2;
  u32 index;
  byte *pbVar3;
  
  if (pixels != 0) {
    pbVar3 = interpolated_r;
    do {
      pbVar2 = pbVar3 + 1;
      uVar1 = (uint)(*pbVar3 >> 1);
      *colors = (uint)toon_cache[uVar1] | polygon_alpha << 0x18 |
                (uint)toon_cache[uVar1 + 0x20] << 8 | (uint)toon_cache[uVar1 + 0x40] << 0x10;
      colors = colors + 1;
      pbVar3 = pbVar2;
    } while (interpolated_r + pixels != pbVar2);
  }
  return;
}


