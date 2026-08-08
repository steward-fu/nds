/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_fog_alpha_4x
 * Address  : 080776bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_resolve_bin_edge_mark_fog_alpha_4x
               (video_3d_render_target_struct *render_target,u32 *dest,u32 bin_index)

{
  int iVar1;
  video_struct *pvVar2;
  u32 uVar3;
  uint uVar4;
  video_3d_render_target_struct *pvVar5;
  u32 *puVar6;
  u64 *puVar7;
  u8 *fog_weights;
  u32 *puVar8;
  u32 *puVar9;
  u32 *puVar10;
  geometry_struct *pgVar11;
  u8 *puVar12;
  u8 *puVar13;
  u32 *color_buffer_tile;
  u64 _aligned_storage [65];
  
  iVar1 = __stack_chk_guard;
  if ((render_target->fog_active == 0) ||
     (pvVar2 = render_target->video, (pvVar2->video_3d).fog_table_constant == 0)) {
    video_3d_resolve_bin_edge_mark_4x(render_target,dest,bin_index);
  }
  else {
    pgVar11 = render_target->geometry;
    puVar7 = _aligned_storage;
    if (((uint)puVar7 & 8) != 0) {
      puVar7 = _aligned_storage + 1;
    }
    puVar10 = render_target->depth_buffer_tile;
    uVar3 = (pvVar2->video_3d).clear_depth_id;
    puVar13 = pgVar11->edge_cache;
    puVar12 = pgVar11->fog_table;
    uVar4 = ((pvVar2->video_3d).display_3d_control << 0x14) >> 0x1c;
    uVar4 = uVar4 | ((pgVar11->fog_offset & 0x7fff) + (0x400 >> uVar4)) * 0x10000;
    if (bin_index == 0) {
      video_3d_fog_calculate_weights_4x(puVar10,puVar7,puVar12);
      video_3d_fog_modulate_alpha_intermediate_4x
                (render_target,render_target,puVar7,pgVar11->fog_color);
      video_3d_edge_identify_top_4x(puVar7,puVar10,render_target->depth_buffer_tile + 0x200,uVar3);
      video_3d_edge_mark_4x(dest,render_target,puVar7,puVar13);
    }
    else {
      memcpy((pvVar2->video_3d).render_targets[3].polygon_alpha_id_tile +
             bin_index * 0x2000 + 0x30c0,puVar10,0x1000);
      memcpy((pvVar2->video_3d).depth_buffer_spill + bin_index * 0x400 + 0x5600,render_target,0x800)
      ;
    }
    puVar8 = dest + 0x200;
    pvVar5 = render_target;
    do {
      pvVar5 = (video_3d_render_target_struct *)(pvVar5->color_buffer_tile + 0x200);
      puVar6 = puVar10 + 0x200;
      video_3d_fog_calculate_weights_4x(puVar6,puVar7,puVar12,uVar4);
      video_3d_fog_modulate_alpha_intermediate_4x(pvVar5,pvVar5,puVar7,pgVar11->fog_color);
      video_3d_edge_identify_4x(puVar7,puVar10,puVar6,puVar10 + 0x400,uVar3);
      puVar9 = puVar8 + 0x200;
      video_3d_edge_mark_4x(puVar8,pvVar5,puVar7,puVar13);
      puVar8 = puVar9;
      puVar10 = puVar6;
    } while (puVar9 != dest + 0x3e00);
    puVar8 = render_target->depth_buffer_tile + 0x3c00;
    puVar10 = render_target->color_buffer_tile + 0x3e00;
    if (bin_index == 0xb) {
      video_3d_fog_calculate_weights_4x(puVar8,puVar7,puVar12,uVar4);
      video_3d_fog_modulate_alpha_intermediate_4x(puVar10,puVar10,puVar7,pgVar11->fog_color);
      video_3d_edge_identify_bottom_4x
                (puVar7,puVar8,render_target->depth_buffer_tile + 0x3e00,uVar3);
      video_3d_edge_mark_4x(puVar9,puVar10,puVar7,puVar13);
    }
    else {
      memcpy((pvVar2->video_3d).depth_buffer_spill + bin_index * 0x800,puVar8,0x1000);
      memcpy((pvVar2->video_3d).color_buffer_spill + bin_index * 0x400,puVar10,0x800);
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


