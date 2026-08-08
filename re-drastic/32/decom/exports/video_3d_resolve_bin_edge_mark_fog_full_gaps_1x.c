/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_fog_full_gaps_1x
 * Address  : 08073b84
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_resolve_bin_edge_mark_fog_full_gaps_1x(video_3d_struct *video_3d)

{
  int iVar1;
  uint uVar2;
  u32 fog_shift;
  u32 fog_shift_offset;
  u32 *puVar3;
  u64 *puVar4;
  u8 *fog_weights;
  u32 *puVar5;
  u32 *depth_buffer_spill;
  u32 *puVar6;
  u32 *color_buffer_spill;
  u32 *puVar7;
  u32 uVar8;
  u32 *dest;
  u32 *puVar9;
  u32 *puVar10;
  u8 *edge_cache;
  geometry_struct *pgVar11;
  geometry_struct *geometry;
  u64 _aligned_storage [33];
  
  iVar1 = __stack_chk_guard;
  uVar8 = video_3d->clear_depth_id;
  pgVar11 = video_3d->render_targets[0].geometry;
  puVar4 = _aligned_storage;
  if (((uint)puVar4 & 8) != 0) {
    puVar4 = _aligned_storage + 1;
  }
  uVar2 = (video_3d->display_3d_control << 0x14) >> 0x1c;
  uVar2 = uVar2 | ((pgVar11->fog_offset & 0x7fff) + (0x400 >> uVar2)) * 0x10000;
  puVar6 = video_3d->depth_buffer_spill;
  puVar7 = video_3d->color_buffer_spill;
  dest = video_3d->color_buffer_render + 0xf00;
  do {
    puVar9 = puVar6 + 0x100;
    puVar10 = puVar6 + 0x200;
    video_3d_fog_calculate_weights_1x(puVar9,puVar4,pgVar11->fog_table,uVar2);
    puVar5 = puVar7 + 0x100;
    video_3d_fog_modulate_full_resolve_1x(puVar7,puVar7,puVar4,pgVar11->fog_color);
    video_3d_edge_identify_1x(puVar4,puVar6,puVar9,puVar10,uVar8);
    video_3d_edge_mark_1x(dest,puVar7,puVar4,pgVar11->edge_cache);
    video_3d_fog_calculate_weights_1x(puVar10,puVar4,pgVar11->fog_table,uVar2);
    puVar7 = puVar7 + 0x200;
    video_3d_fog_modulate_full_resolve_1x(puVar5,puVar5,puVar4,pgVar11->fog_color);
    puVar3 = puVar6 + 0x300;
    puVar6 = puVar6 + 0x400;
    video_3d_edge_identify_1x(puVar4,puVar9,puVar10,puVar3,uVar8);
    video_3d_edge_mark_1x(dest + 0x100,puVar5,puVar4,pgVar11->edge_cache);
    dest = dest + 0x1000;
  } while (video_3d->depth_buffer_spill + 0x2c00 != puVar6);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


