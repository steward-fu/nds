/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_arrays_extended
 * Address  : 080b9de8
 * Program  : drastic
 */


/* WARNING: Variable defined which should be unmapped: inv_dyp */
/* WARNING: Unknown calling convention */

void render_scanline_affine_setup_arrays_extended
               (video_2d_bg_layer_struct *bg_layer,u8 *tile_widths,u16 *map_indexes,u8 *tile_offsets
               ,s32 source_x,s32 source_y,u32 width)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  u32 tiles_y;
  u32 uVar4;
  u8 *aligned_storage;
  u8 *tile_widths_x;
  s32 dx;
  int iVar5;
  int iVar6;
  s32 dy;
  u8 *tile_widths_y;
  u32 inv_dxp;
  u32 inv_dyp;
  u32 tiles_x;
  u64 _aligned_storage [73];
  
  iVar1 = __stack_chk_guard;
  iVar5 = (int)bg_layer->affine_dx;
  uVar4 = bg_layer->inv_dyp;
  tile_widths_x = (u8 *)_aligned_storage;
  iVar6 = (int)bg_layer->affine_dy;
  if (((uint)tile_widths_x & 8) != 0) {
    tile_widths_x = (u8 *)(_aligned_storage + 1);
  }
  uVar2 = render_scanline_affine_setup_tile_widths
                    (iVar5,source_x,width,tile_widths_x,bg_layer->inv_dxp);
  uVar3 = render_scanline_affine_setup_tile_widths(iVar6,source_y,width,tile_widths_x + 0x120,uVar4)
  ;
  uVar2 = render_scanline_affine_merge_tile_widths
                    (tile_widths_x,tile_widths_x + 0x120,tile_widths,uVar2,uVar3);
  render_scanline_affine_setup_map_indexes_extended
            (tile_widths,map_indexes,uVar2,source_x,source_y,iVar5,iVar6,bg_layer->affine_wrap_mask,
             bg_layer->affine_map_pitch_shift);
  render_scanline_affine_diff_tile_widths(tile_widths,uVar2,width);
  render_scanline_affine_setup_tile_offsets(tile_offsets,source_x,source_y,iVar5,iVar6,width);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


