/*
 * Ghidra decompilation
 *
 * Function : render_polygon_toon_highlight
 * Address  : 08052fd4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable toon_cache_r:u8 *[r0:4] conflicts with parameter, skipped. */

void render_polygon_toon_highlight(u8 *toon_cache,u32 *colors,u8 *interpolated_r,u32 pixels)

{
  byte *pbVar1;
  uint uVar2;
  u32 b;
  byte *pbVar3;
  uint uVar4;
  u32 g;
  u32 r;
  uint uVar5;
  u32 color;
  
  if (pixels != 0) {
    pbVar3 = interpolated_r;
    do {
      pbVar1 = pbVar3 + 1;
      uVar5 = *colors;
      pbVar3 = toon_cache + (*pbVar3 >> 1);
      uVar4 = (uint)*pbVar3 + (uVar5 & 0x3f);
      if (uVar4 < 0x40) {
        uVar4 = uVar5 & 0x1f000000 | uVar4;
      }
      else {
        uVar4 = uVar5 & 0x1f000000 | 0x3f;
      }
      uVar2 = (uint)pbVar3[0x20] + ((uVar5 << 0x12) >> 0x1a);
      uVar5 = (uint)pbVar3[0x40] + ((uVar5 << 10) >> 0x1a);
      if (0x3e < uVar2) {
        uVar2 = 0x3f;
      }
      if (0x3e < uVar5) {
        uVar5 = 0x3f;
      }
      *colors = uVar4 | uVar2 << 8 | uVar5 << 0x10;
      colors = colors + 1;
      pbVar3 = pbVar1;
    } while (interpolated_r + pixels != pbVar1);
    return;
  }
  return;
}


