/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_obj_affine_span_8bpp
 * Address  : 080bb8d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _render_scanline_obj_affine_span_8bpp
               (u16 *obj_pixels,u16 *obj_palette_ptr,u8 *obj_base_ptr,u32 width)

{
  ushort uVar1;
  uint uVar2;
  u32 uVar3;
  bool bVar4;
  
  if (width == 0) {
    return;
  }
  uVar3 = 0;
  do {
    uVar3 = uVar3 + 1;
    uVar2 = (uint)obj_base_ptr[*obj_pixels];
    bVar4 = uVar2 != 0;
    if (bVar4) {
      uVar2 = (uint)obj_palette_ptr[uVar2];
    }
    uVar1 = (ushort)uVar2;
    if (bVar4) {
      uVar1 = uVar1 | 0x8000;
    }
    *obj_pixels = uVar1;
    obj_pixels = obj_pixels + 1;
  } while (width != uVar3);
  return;
}


