/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_1x
 * Address  : 0807344c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_resolve_bin_edge_mark_1x
               (video_3d_render_target_struct *render_target,u32 *dest,u32 bin_index)

{
  int iVar1;
  video_struct *pvVar2;
  u32 *puVar3;
  u32 *puVar4;
  u32 *depth_buffer_tile;
  u32 *__src;
  u32 *puVar5;
  u8 *edge_ids;
  u64 *puVar6;
  u8 *puVar7;
  u8 *edge_cache;
  u32 uVar8;
  u32 clear_depth_id;
  u32 *color_buffer_tile;
  u64 _aligned_storage [33];
  
  iVar1 = __stack_chk_guard;
  puVar6 = _aligned_storage;
  pvVar2 = render_target->video;
  if (((uint)puVar6 & 8) != 0) {
    puVar6 = _aligned_storage + 1;
  }
  __src = render_target->depth_buffer_tile;
  puVar7 = render_target->geometry->edge_cache;
  uVar8 = (pvVar2->video_3d).clear_depth_id;
  if (bin_index == 0) {
    video_3d_edge_identify_top_1x(puVar6,__src,render_target->depth_buffer_tile + 0x100,uVar8);
    video_3d_edge_mark_1x(dest,render_target,puVar6,puVar7);
  }
  else {
    memcpy((pvVar2->video_3d).render_targets[3].polygon_alpha_id_tile + bin_index * 0x1000 + 0x38c0,
           __src,0x800);
    memcpy((pvVar2->video_3d).depth_buffer_spill + bin_index * 0x200 + 0x5700,render_target,0x400);
  }
  puVar5 = render_target->color_buffer_tile;
  puVar3 = dest + 0x100;
  do {
    puVar5 = puVar5 + 0x100;
    video_3d_edge_identify_1x(puVar6,__src,__src + 0x100,__src + 0x200,uVar8);
    puVar4 = puVar3 + 0x100;
    video_3d_edge_mark_1x(puVar3,puVar5,puVar6,puVar7);
    puVar3 = puVar4;
    __src = __src + 0x100;
  } while (puVar4 != dest + 0xf00);
  if (bin_index == 0xb) {
    video_3d_edge_identify_bottom_1x
              (puVar6,render_target->depth_buffer_tile + 0xe00,
               render_target->depth_buffer_tile + 0xf00,uVar8);
    video_3d_edge_mark_1x(puVar4,render_target->color_buffer_tile + 0xf00,puVar6,puVar7);
  }
  else {
    memcpy((pvVar2->video_3d).depth_buffer_spill + bin_index * 0x400,
           render_target->depth_buffer_tile + 0xe00,0x800);
    memcpy((pvVar2->video_3d).color_buffer_spill + bin_index * 0x200,
           render_target->color_buffer_tile + 0xf00,0x400);
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


