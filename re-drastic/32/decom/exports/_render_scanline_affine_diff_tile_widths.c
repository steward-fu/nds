/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_affine_diff_tile_widths
 * Address  : 080b9d58
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _render_scanline_affine_diff_tile_widths(u8 *tile_widths,u32 tiles,u32 width)

{
  u8 uVar1;
  u8 *puVar2;
  u8 *puVar3;
  u8 uVar4;
  u32 next_tile_width;
  
  uVar4 = (char)width + '\x01';
  tile_widths[tiles] = uVar4;
  (tile_widths + tiles)[1] = uVar4;
  if (tiles + 2 != 0) {
    puVar2 = tile_widths;
    uVar4 = '\0';
    do {
      uVar1 = *puVar2;
      puVar3 = puVar2 + 1;
      *puVar2 = uVar1 - uVar4;
      puVar2 = puVar3;
      uVar4 = uVar1;
    } while (tile_widths + tiles + 2 != puVar3);
  }
  return;
}


