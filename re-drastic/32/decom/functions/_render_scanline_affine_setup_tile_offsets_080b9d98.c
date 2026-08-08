/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_affine_setup_tile_offsets
 * Address  : 080b9d98
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _render_scanline_affine_setup_tile_offsets
               (u8 *tile_offsets,s32 source_x,s32 source_y,s32 dx,s32 dy,u32 width)

{
  u8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = tile_offsets + -1;
  uVar4 = 0;
  do {
    iVar2 = source_y << 0x15;
    iVar3 = source_x << 0x15;
    uVar4 = uVar4 + 1;
    source_y = source_y + dy;
    source_x = source_x + dx;
    puVar1 = puVar1 + 1;
    *puVar1 = (byte)((uint)iVar3 >> 0x1d) + (byte)((uint)iVar2 >> 0x1d) * '\b';
  } while (uVar4 <= width);
  return;
}


