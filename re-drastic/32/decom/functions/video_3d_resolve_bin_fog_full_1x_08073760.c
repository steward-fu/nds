/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_fog_full_1x
 * Address  : 08073760
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_resolve_bin_fog_full_1x(video_3d_render_target_struct *render_target,u32 *dest)

{
  ushort uVar1;
  int iVar2;
  u32 *color_buffer_tile;
  u32 *puVar3;
  u32 *puVar4;
  u32 *puVar5;
  u64 *puVar6;
  uint uVar7;
  geometry_struct *pgVar8;
  u64 _aligned_storage [33];
  
  iVar2 = __stack_chk_guard;
  if ((render_target->fog_active == 0) || ((render_target->video->video_3d).fog_table_constant == 0)
     ) {
    video_3d_resolve_bin_1x(dest,render_target);
  }
  else {
    pgVar8 = render_target->geometry;
    puVar6 = _aligned_storage;
    uVar1 = pgVar8->fog_offset;
    if (((uint)puVar6 & 8) != 0) {
      puVar6 = _aligned_storage + 1;
    }
    uVar7 = ((render_target->video->video_3d).display_3d_control << 0x14) >> 0x1c;
    puVar3 = dest;
    puVar5 = render_target->depth_buffer_tile;
    do {
      video_3d_fog_calculate_weights_1x
                (puVar5,puVar6,pgVar8->fog_table,
                 uVar7 | ((uVar1 & 0x7fff) + (0x400 >> uVar7)) * 0x10000);
      puVar4 = puVar3 + 0x100;
      video_3d_fog_modulate_full_resolve_1x(puVar3,render_target,puVar6,pgVar8->fog_color);
      render_target = (video_3d_render_target_struct *)(render_target->color_buffer_tile + 0x100);
      puVar3 = puVar4;
      puVar5 = puVar5 + 0x100;
    } while (puVar4 != dest + 0x1000);
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


