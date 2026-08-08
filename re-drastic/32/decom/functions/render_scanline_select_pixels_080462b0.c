/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_pixels
 * Address  : 080462b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_select_pixels
               (video_2d_struct *video_2d,u8 *pixel_buffer_rgb,u32 (*select_sets) [8],
               u16 **layer_buffer_ptrs,u32 *layer_buffer_3d,u8 *pixel_alpha,u32 active_sets)

{
  u64 uVar1;
  undefined4 uVar2;
  u64 *puVar3;
  u64 *puVar4;
  u16 *source;
  uint uVar5;
  undefined2 *puVar6;
  u32 (*pauVar7) [8];
  int iVar8;
  u64 *puVar9;
  u8 *aligned_storage;
  u64 _aligned_storage [65];
  int local_2c;
  
  puVar9 = _aligned_storage;
  if (((uint)puVar9 & 8) != 0) {
    puVar9 = _aligned_storage + 1;
  }
  local_2c = __stack_chk_guard;
  if (active_sets != 0) {
    iVar8 = 0;
    puVar4 = (u64 *)0x0;
    uVar5 = active_sets;
    pauVar7 = select_sets;
    do {
      if ((uVar5 & 1) != 0) {
        puVar3 = (u64 *)(*layer_buffer_ptrs + 8);
        if (iVar8 != 0) {
          render_scanline_select_pixels_binary(puVar9,puVar4,*layer_buffer_ptrs + 8,pauVar7);
          puVar3 = puVar9;
        }
        puVar4 = puVar3;
        iVar8 = iVar8 + 1;
      }
      uVar5 = uVar5 >> 1;
      layer_buffer_ptrs = layer_buffer_ptrs + 1;
      pauVar7 = pauVar7 + 1;
    } while (uVar5 != 0);
    if (iVar8 != 0) {
      render_scanline_select_pixels_binary_scalar(puVar9,puVar4,*video_2d->palette,select_sets + 5);
      goto LAB_080463a4;
    }
  }
  puVar4 = (u64 *)video_2d->palette;
  if (puVar4 < puVar9 + 0x40 && puVar9 < (u64 *)((int)puVar4 + 2)) {
    puVar6 = (undefined2 *)((int)puVar9 + -2);
    do {
      puVar6 = puVar6 + 1;
      *puVar6 = *(undefined2 *)puVar4;
    } while ((undefined2 *)((int)puVar9 + 0x1fe) != puVar6);
  }
  else {
    uVar2 = CONCAT22(*(undefined2 *)puVar4,*(undefined2 *)puVar4);
    uVar1 = CONCAT44(uVar2,uVar2);
    puVar4 = puVar9;
    do {
      *puVar4 = uVar1;
      puVar4[1] = uVar1;
      puVar4 = puVar4 + 2;
    } while (puVar9 + 0x40 != puVar4);
  }
LAB_080463a4:
  render_scanline_expand_6bit_split(pixel_buffer_rgb,puVar9);
  if (layer_buffer_3d == (u32 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = active_sets & 1;
  }
  if (uVar5 != 0) {
    render_scanline_select_pixels_binary32(pixel_buffer_rgb,pixel_alpha,layer_buffer_3d,select_sets)
    ;
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


