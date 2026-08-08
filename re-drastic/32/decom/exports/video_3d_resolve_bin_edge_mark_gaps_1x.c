/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_gaps_1x
 * Address  : 08073638
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_resolve_bin_edge_mark_gaps_1x(video_3d_struct *video_3d)

{
  int iVar1;
  u32 *depth_buffer_spill;
  u32 *puVar2;
  u8 *edge_ids;
  u64 *puVar3;
  u32 *dest;
  u32 *color_buffer_spill;
  u32 *puVar4;
  u8 *puVar5;
  u8 *edge_cache;
  u32 clear_depth_id;
  u32 uVar6;
  u64 _aligned_storage [33];
  
  iVar1 = __stack_chk_guard;
  puVar3 = _aligned_storage;
  puVar2 = video_3d->depth_buffer_spill;
  uVar6 = video_3d->clear_depth_id;
  puVar4 = video_3d->color_buffer_spill;
  puVar5 = (video_3d->render_targets[0].geometry)->edge_cache;
  if (((uint)puVar3 & 8) != 0) {
    puVar3 = _aligned_storage + 1;
  }
  dest = video_3d->color_buffer_render + 0xf00;
  do {
    video_3d_edge_identify_1x(puVar3,puVar2,puVar2 + 0x100,puVar2 + 0x200,uVar6);
    video_3d_edge_mark_1x(dest,puVar4,puVar3,puVar5);
    video_3d_edge_identify_1x(puVar3,puVar2 + 0x100,puVar2 + 0x200,puVar2 + 0x300,uVar6);
    video_3d_edge_mark_1x(dest + 0x100,puVar4 + 0x100,puVar3,puVar5);
    puVar2 = puVar2 + 0x400;
    puVar4 = puVar4 + 0x200;
    dest = dest + 0x1000;
  } while (video_3d->depth_buffer_spill + 0x2c00 != puVar2);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


