/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_palette_null
 * Address  : 080880f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void texture_cache_convert_palette_null
               (texture_cache_element_struct *texture_cache_element,u16 *palette,
               u32 color0_transparent,u32 entries)

{
  u32 *puVar1;
  u32 *converted_palette;
  uint uVar2;
  u32 uVar3;
  
  puVar1 = texture_cache_element->palette;
  texture_cache_element->paletted = '\x01';
  if (puVar1 == (u32 *)0x0) {
    puVar1 = (u32 *)malloc(entries << 2);
    texture_cache_element->palette = puVar1;
  }
  uVar2 = (uint)*palette;
  uVar2 = ((uVar2 << 0x11) >> 0x1b) << 0x10 | ((uVar2 << 0x16) >> 0x1b) << 8 | uVar2 & 0x1f;
  uVar3 = (uVar2 + 0x1f1f1f >> 5 & 0x10101) + uVar2 * 2;
  if (color0_transparent == 0) {
    uVar3 = uVar3 | 0x1f000000;
  }
  *puVar1 = uVar3;
  return;
}


