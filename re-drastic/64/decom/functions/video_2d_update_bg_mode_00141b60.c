/*
 * Ghidra decompilation
 *
 * Function : video_2d_update_bg_mode
 * Address  : 00141b60
 * Program  : drastic64
 */


void video_2d_update_bg_mode(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ushort uVar3;
  
  *(code **)(param_1 + 0xf0) = render_scanline_tiled_ext;
  *(code **)(param_1 + 0x1a0) = render_scanline_tiled_ext;
  uVar1 = *(uint *)(param_1 + 0x90) & 7;
  if (uVar1 == 3) {
    uVar3 = *(ushort *)(param_1 + 0x368);
    *(code **)(param_1 + 0x250) = render_scanline_tiled_ext;
  }
  else {
    if ((*(uint *)(param_1 + 0x90) >> 2 & 1) == 0) {
      if (uVar1 == 1) {
        *(code **)(param_1 + 0x250) = render_scanline_tiled_ext;
        *(code **)(param_1 + 0x300) = render_scanline_affine_normal_ext;
        return;
      }
      if (uVar1 == 2) {
        *(code **)(param_1 + 0x250) = render_scanline_affine_normal_ext;
        *(code **)(param_1 + 0x300) = render_scanline_affine_normal_ext;
      }
      else if (uVar1 == 0) {
        *(code **)(param_1 + 0x250) = render_scanline_tiled_ext;
        *(code **)(param_1 + 0x300) = render_scanline_tiled_ext;
        return;
      }
      return;
    }
    if (uVar1 == 5) {
      if ((*(ushort *)(param_1 + 0x2b8) >> 7 & 1) == 0) {
        *(code **)(param_1 + 0x250) = render_scanline_affine_extended_ext;
      }
      else {
        pcVar2 = render_scanline_bitmap_16bpp;
        if ((*(ushort *)(param_1 + 0x2b8) & 4) == 0) {
          pcVar2 = render_scanline_bitmap_8bpp;
        }
        *(code **)(param_1 + 0x250) = pcVar2;
      }
      uVar3 = *(ushort *)(param_1 + 0x368);
    }
    else {
      if (uVar1 == 6) {
        *(code **)(param_1 + 0x1a0) = render_scanline_null;
        *(code **)(param_1 + 0x250) = render_scanline_bitmap_8bpp;
        *(code **)(param_1 + 0x300) = render_scanline_null;
        return;
      }
      if (uVar1 != 4) {
        return;
      }
      uVar3 = *(ushort *)(param_1 + 0x368);
      *(code **)(param_1 + 0x250) = render_scanline_affine_normal_ext;
    }
  }
  if ((uVar3 >> 7 & 1) == 0) {
    *(code **)(param_1 + 0x300) = render_scanline_affine_extended_ext;
    return;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    *(code **)(param_1 + 0x300) = render_scanline_bitmap_16bpp;
    return;
  }
  *(code **)(param_1 + 0x300) = render_scanline_bitmap_8bpp;
  return;
}


