/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_combine_pixels_alpha
 * Address  : 080bc270
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_obj_combine_pixels_alpha
               (u16 *obj_scanline_pixels,u8 *obj_alpha,u16 *obj_pixels,u32 alpha_value,u32 width)

{
  u8 *puVar1;
  u8 *puVar2;
  ushort *puVar3;
  
  if (width != 0) {
    puVar3 = obj_pixels + -1;
    puVar1 = obj_alpha;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar1 + 1;
      if ((*puVar3 & 0x8000) != 0) {
        *obj_scanline_pixels = *puVar3;
        *puVar1 = (u8)alpha_value;
      }
      obj_scanline_pixels = obj_scanline_pixels + 1;
      puVar1 = puVar2;
    } while (puVar2 != obj_alpha + width);
  }
  return;
}


