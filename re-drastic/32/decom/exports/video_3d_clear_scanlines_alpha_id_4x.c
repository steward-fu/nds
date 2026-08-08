/*
 * Ghidra decompilation
 *
 * Function : video_3d_clear_scanlines_alpha_id_4x
 * Address  : 08076c48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_clear_scanlines_alpha_id_4x
               (video_3d_render_target_struct *render_target,u32 y,u32 height)

{
  u8 *puVar1;
  u32 uVar2;
  
  if (height == 0) {
    return;
  }
  puVar1 = render_target->polygon_alpha_id_tile;
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
    render_polygon_set_buffer8(puVar1,0xff,0x200);
    puVar1 = puVar1 + 0x200;
  } while (height != uVar2);
  return;
}


