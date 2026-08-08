/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_obj_affine_span_16bpp
 * Address  : 080bb918
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _render_scanline_obj_affine_span_16bpp(u16 *obj_pixels,u8 *obj_base_ptr,u32 width)

{
  u32 uVar1;
  
  if (width != 0) {
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      *obj_pixels = *(ushort *)(obj_base_ptr + *obj_pixels);
      obj_pixels = obj_pixels + 1;
    } while (width != uVar1);
  }
  return;
}


