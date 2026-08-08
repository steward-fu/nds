/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_fog_alpha_gaps_4x
 * Address  : 080779bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_resolve_bin_edge_mark_fog_alpha_gaps_4x(video_3d_struct *video_3d)

{
  int iVar1;
  uint uVar2;
  u32 fog_shift;
  u32 fog_shift_offset;
  u32 *color_buffer_spill;
  u32 *puVar3;
  u64 *puVar4;
  u8 *fog_weights;
  u32 *puVar5;
  u32 *depth_buffer_spill;
  u32 *puVar6;
  geometry_struct *pgVar7;
  geometry_struct *geometry;
  u32 *puVar8;
  u32 uVar9;
  u32 *dest;
  u32 *puVar10;
  u32 *puVar11;
  u8 *edge_cache;
  u64 _aligned_storage [65];
  
  iVar1 = __stack_chk_guard;
  pgVar7 = video_3d->render_targets[0].geometry;
  uVar9 = video_3d->clear_depth_id;
  puVar4 = _aligned_storage;
  uVar2 = (video_3d->display_3d_control << 0x14) >> 0x1c;
  if (((uint)puVar4 & 8) != 0) {
    puVar4 = _aligned_storage + 1;
  }
  uVar2 = uVar2 | ((pgVar7->fog_offset & 0x7fff) + (0x400 >> uVar2)) * 0x10000;
  puVar6 = video_3d->depth_buffer_spill;
  puVar8 = video_3d->color_buffer_spill;
  dest = video_3d->color_buffer_render + 0x3e00;
  do {
    puVar10 = puVar6 + 0x200;
    puVar11 = puVar6 + 0x400;
    video_3d_fog_calculate_weights_4x(puVar10,puVar4,pgVar7->fog_table,uVar2);
    puVar5 = puVar8 + 0x200;
    video_3d_fog_modulate_alpha_intermediate_4x(puVar8,puVar8,puVar4,pgVar7->fog_color);
    video_3d_edge_identify_4x(puVar4,puVar6,puVar10,puVar11,uVar9);
    video_3d_edge_mark_4x(dest,puVar8,puVar4,pgVar7->edge_cache);
    video_3d_fog_calculate_weights_4x(puVar11,puVar4,pgVar7->fog_table,uVar2);
    puVar8 = puVar8 + 0x400;
    video_3d_fog_modulate_alpha_intermediate_4x(puVar5,puVar5,puVar4,pgVar7->fog_color);
    puVar3 = puVar6 + 0x600;
    puVar6 = puVar6 + 0x800;
    video_3d_edge_identify_4x(puVar4,puVar10,puVar11,puVar3,uVar9);
    video_3d_edge_mark_4x(dest + 0x200,puVar5,puVar4,pgVar7->edge_cache);
    dest = dest + 0x4000;
  } while (video_3d->color_buffer_spill != puVar6);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


