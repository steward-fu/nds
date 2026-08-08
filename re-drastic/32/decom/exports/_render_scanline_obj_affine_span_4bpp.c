/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_obj_affine_span_4bpp
 * Address  : 080bb87c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _render_scanline_obj_affine_span_4bpp
               (u16 *obj_pixels,u16 *obj_palette_ptr,u8 *obj_pixel_shifts,u8 *obj_base_ptr,u32 width
               )

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  
  if (width != 0) {
    pbVar1 = obj_pixel_shifts;
    do {
      pbVar2 = pbVar1 + 1;
      uVar4 = (int)(uint)obj_base_ptr[*obj_pixels] >> (-(uint)*pbVar1 & 0xff) & 0xf;
      bVar5 = uVar4 != 0;
      if (bVar5) {
        uVar4 = (uint)obj_palette_ptr[uVar4];
      }
      uVar3 = (ushort)uVar4;
      if (bVar5) {
        uVar3 = uVar3 | 0x8000;
      }
      *obj_pixels = uVar3;
      obj_pixels = obj_pixels + 1;
      pbVar1 = pbVar2;
    } while (obj_pixel_shifts + width != pbVar2);
  }
  return;
}


