/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_palette_lookup_8bpp
 * Address  : 080b8958
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _render_scanline_palette_lookup_8bpp(u16 *dest,u16 *src,u16 *palette,u32 width)

{
  u16 *puVar1;
  ushort *puVar2;
  uint uVar3;
  
  puVar2 = src + -1;
  puVar1 = dest + -1;
  uVar3 = 0;
  do {
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = palette[*puVar2];
  } while (uVar3 <= width);
  return;
}


