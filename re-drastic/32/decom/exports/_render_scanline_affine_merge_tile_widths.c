/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_affine_merge_tile_widths
 * Address  : 080b8db0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 _render_scanline_affine_merge_tile_widths
              (u8 *tile_widths_x,u8 *tile_widths_y,u8 *tile_widths,u32 tiles_x,u32 tiles_y)

{
  byte *pbVar1;
  byte bVar2;
  u32 tile_width_y;
  uint uVar3;
  u32 tile_width_x;
  u8 *tile_widths_ptr;
  byte *__dest;
  
  if (tiles_x == 0) {
    memcpy(tile_widths,tile_widths_y,tiles_y);
    tiles_x = tiles_y;
  }
  else if (tiles_y == 0) {
    memcpy(tile_widths,tile_widths_x,tiles_x);
  }
  else {
    uVar3 = (uint)*tile_widths_x;
    bVar2 = *tile_widths_y;
    tile_widths_ptr = tile_widths;
    while( true ) {
      tile_width_y = (u32)bVar2;
      pbVar1 = tile_widths_ptr;
      while (uVar3 < tile_width_y) {
        tiles_x = tiles_x - 1;
        __dest = pbVar1 + 1;
        *pbVar1 = (byte)uVar3;
        if (tiles_x == 0) {
          memcpy(__dest,tile_widths_y,tiles_y);
          return (u32)(__dest + (tiles_y - (int)tile_widths));
        }
        pbVar1 = tile_widths_x + 1;
        tile_widths_x = tile_widths_x + 1;
        uVar3 = (uint)*pbVar1;
        pbVar1 = __dest;
      }
      tile_widths_ptr = pbVar1;
      if (uVar3 != tile_width_y) {
        tile_widths_ptr = pbVar1 + 1;
        *pbVar1 = bVar2;
      }
      tiles_y = tiles_y - 1;
      if (tiles_y == 0) break;
      bVar2 = tile_widths_y[1];
      tile_widths_y = tile_widths_y + 1;
    }
    memcpy(tile_widths_ptr,tile_widths_x,tiles_x);
    tiles_x = (u32)(tile_widths_ptr + (tiles_x - (int)tile_widths));
  }
  return tiles_x;
}


