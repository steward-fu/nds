/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_extended
 * Address  : 080ba89c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_affine_extended
               (video_2d_bg_layer_struct *bg_layer,u16 *render_buffer,u32 *render_visibility,
               u32 line)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  u8 *puVar6;
  s32 sVar7;
  u64 *puVar8;
  u64 *puVar9;
  s32 dx_1;
  u32 tiles_y_1;
  undefined4 uVar10;
  u32 tiles_y_2;
  u32 tiles_y_3;
  s32 dy;
  u32 tiles_y;
  u64 *puVar11;
  s32 edge_y2;
  u64 *puVar12;
  s32 right_edge_1;
  u32 right_block;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  s32 source_y;
  undefined8 *puVar16;
  s32 right_edge;
  s32 dy_1;
  u32 block_visibility_1;
  u32 block_visibility;
  uint uVar17;
  u8 *tile_offsets;
  u64 *puVar18;
  int *piVar19;
  int iVar20;
  s32 left_edge_1;
  u8 *tile_widths_x;
  s32 dx_2;
  s32 dx_3;
  u16 *puVar21;
  u16 *palette;
  int iVar22;
  s32 left_edge;
  u32 uVar23;
  s32 dy_2;
  s32 dy_3;
  u8 *tile_widths;
  uint uVar24;
  u64 *puVar25;
  u32 right_block_1;
  uint uVar26;
  u32 *puVar27;
  u32 *puVar28;
  u32 *puVar29;
  u8 *aligned_storage;
  u32 block_1;
  u32 block;
  undefined4 *puVar30;
  undefined4 *puVar31;
  uint *puVar32;
  longlong lVar33;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined in_q8 [16];
  undefined auVar42 [16];
  undefined in_q9 [16];
  undefined in_q10 [16];
  undefined in_q11 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined in_q12 [16];
  undefined auVar45 [16];
  undefined8 uVar46;
  undefined in_q13 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined8 uVar50;
  undefined in_q14 [16];
  undefined auVar51 [16];
  undefined in_q15 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  u32 local_868;
  u8 *local_864;
  vram_map_type local_860;
  uint local_85c;
  uint local_858;
  uint local_850;
  u8 *tile_base_ptr;
  u8 *map_base_ptr;
  vram_map_type local_838;
  s32 edge_x2_1;
  s32 dx;
  s32 edge_y2_1;
  u8 *tile_widths_y;
  u8 *tile_widths_x_2;
  u8 *tile_widths_y_2;
  u64 *local_81c;
  u32 inv_dyp_3;
  int iStack_814;
  u32 tiles_x_3;
  u32 inv_dyp_1;
  u32 tiles_x_1;
  u32 tiles_x;
  u32 local_800;
  u32 local_7fc;
  u64 _aligned_storage_1 [73];
  u64 _aligned_storage [168];
  
  puVar21 = bg_layer->palette;
  piVar19 = &__stack_chk_guard;
  sVar5 = bg_layer->affine_dx;
  puVar28 = &local_868;
  puVar29 = &local_868;
  puVar27 = &local_868;
  puVar18 = _aligned_storage;
  tile_widths_y_2 = (u8 *)render_buffer;
  uVar4 = bg_layer->bg_control;
  puVar12 = _aligned_storage + 0x62;
  local_838 = bg_layer->vram_map + bg_layer->tile_base;
  map_base_ptr = (u8 *)bg_layer->affine_current_x;
  edge_x2_1 = (s32)(bg_layer->vram_map + bg_layer->map_base);
  tile_widths_y = (u8 *)(_aligned_storage + 0x20);
  local_850 = bg_layer->affine_current_y;
  dx = (s32)(_aligned_storage + 0x86);
  local_81c = (u64 *)(int)bg_layer->affine_dy;
  if (bg_layer->affine_settings_dirty != '\0') {
    render_scanline_update_affine_variables(bg_layer);
  }
  uVar24 = uVar4 & 0x2000;
  if ((uVar4 & 0x2000) != 0) {
    if (bg_layer->use_extended_palette == '\0') {
      iVar20 = (int)bg_layer->affine_dx;
      uVar23 = (u32)bg_layer->affine_dy;
      if (((iVar20 - 0xf801U & 0xffff) < 0xfff) && ((uVar23 - 0xf801 & 0xffff) < 0xfff)) {
        local_81c = _aligned_storage_1;
        local_868 = bg_layer->inv_dxp;
        tiles_x_3 = bg_layer->inv_dyp;
        if (((uint)local_81c & 8) != 0) {
          local_81c = _aligned_storage_1 + 1;
        }
        inv_dyp_3 = (u32)(local_81c + 0x24);
        tiles_x_1 = render_scanline_affine_setup_tile_widths(iVar20,map_base_ptr,0xff);
        local_868 = tiles_x_3;
        local_868 = render_scanline_affine_setup_tile_widths(uVar23,local_850,0xff,inv_dyp_3);
        local_81c = (u64 *)render_scanline_affine_merge_tile_widths
                                     (local_81c,inv_dyp_3,puVar12,tiles_x_1);
        puVar6 = map_base_ptr;
        local_858 = (uint)bg_layer->affine_map_pitch_shift;
        local_868 = local_850;
        local_85c = (uint)bg_layer->affine_wrap_mask;
        local_864 = (u8 *)iVar20;
        local_860 = (vram_map_type)uVar23;
        render_scanline_affine_setup_map_indexes_extended
                  (puVar12,_aligned_storage + 0x20,local_81c,map_base_ptr);
        render_scanline_affine_diff_tile_widths(puVar12,local_81c,0xff);
        local_864 = (u8 *)0xff;
        local_868 = uVar23;
        render_scanline_affine_setup_tile_offsets(puVar18,puVar6,local_850,iVar20);
      }
      else {
        memset(puVar12,1,0x100);
        _aligned_storage[130]._0_1_ = 0;
        puVar9 = _aligned_storage + 0x20;
        sVar5 = (((ushort)bg_layer->affine_wrap_mask & (ushort)((uint)map_base_ptr >> 0xb)) +
                (short)(((uint)bg_layer->affine_wrap_mask & local_850 >> 0xb) <<
                       bg_layer->affine_map_pitch_shift)) * 2;
        uVar10 = CONCAT22(sVar5,sVar5);
        auVar49._4_4_ = uVar10;
        auVar49._0_4_ = uVar10;
        auVar49._8_8_ = 0;
        in_q8 = auVar49 & auVar49 << 0x40;
        do {
          *puVar9 = 0;
          puVar9[1] = in_q8._8_8_;
          puVar9 = puVar9 + 2;
        } while (_aligned_storage + 0x60 != puVar9);
        local_864 = (u8 *)0x100;
        local_868 = uVar23;
        render_scanline_affine_setup_tile_offsets(puVar18,map_base_ptr,local_850,iVar20);
      }
      puVar6 = tile_widths_y_2;
      puVar30 = (undefined4 *)dx;
      local_868 = dx;
      local_864 = (u8 *)edge_x2_1;
      local_860 = local_838;
      render_scanline_affine_render_tiles_extended_normal
                (tile_widths_y_2,puVar18,puVar12,tile_widths_y);
      render_scanline_palette_lookup_8bpp(puVar6,puVar6,puVar21,0xff);
      puVar9 = _aligned_storage + 0x8a;
      puVar25 = _aligned_storage + 0x92;
      auVar49 = SIMDExpandImmediate(0,0xe,0xf);
      auVar34 = SIMDExpandImmediate(0,0xe,0xf0);
      puVar8 = _aligned_storage + 0x8e;
      puVar12 = _aligned_storage + 0x96;
      puVar1 = (undefined4 *)0x3c0;
      puVar2 = (undefined4 *)0x3d0;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar9;
        puVar31 = (undefined4 *)((int)puVar9 + 4);
        *puVar2 = *puVar31;
        puVar9 = (u64 *)(puVar31 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x3c8;
      puVar2 = (undefined4 *)0x3d8;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar9;
        puVar31 = (undefined4 *)((int)puVar9 + 4);
        *puVar2 = *puVar31;
        puVar9 = (u64 *)(puVar31 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar9 = puVar18 + 0x9a;
      puVar11 = puVar18 + 0x9e;
      puVar18 = puVar18 + 0xa2;
      puVar1 = (undefined4 *)0x380;
      puVar2 = (undefined4 *)0x390;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar25;
        puVar31 = (undefined4 *)((int)puVar25 + 4);
        *puVar2 = *puVar31;
        puVar25 = (u64 *)(puVar31 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x388;
      puVar2 = (undefined4 *)0x398;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar25;
        puVar31 = (undefined4 *)((int)puVar25 + 4);
        *puVar2 = *puVar31;
        puVar25 = (u64 *)(puVar31 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar16 = (undefined8 *)((int)render_visibility + 0x10);
      puVar1 = (undefined4 *)0x3a0;
      puVar2 = (undefined4 *)0x3b0;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar8;
        puVar31 = (undefined4 *)((int)puVar8 + 4);
        *puVar2 = *puVar31;
        puVar8 = (u64 *)(puVar31 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x3a8;
      puVar2 = (undefined4 *)0x3b8;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar8;
        puVar31 = (undefined4 *)((int)puVar8 + 4);
        *puVar2 = *puVar31;
        puVar8 = (u64 *)(puVar31 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x3e0;
      puVar2 = (undefined4 *)0x3f0;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *puVar30;
        puVar30 = puVar30 + 1;
        *puVar2 = *puVar30;
        puVar30 = puVar30 + 1;
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x3e8;
      puVar2 = (undefined4 *)0x3f8;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *puVar30;
        puVar30 = puVar30 + 1;
        *puVar2 = *puVar30;
        puVar30 = puVar30 + 1;
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      auVar41 = VectorShiftRight(in_q12,4);
      auVar39 = VectorShiftLeft(in_q13,4,0x20,0);
      auVar42 = VectorShiftRight(in_q8,4);
      auVar36 = VectorShiftLeft(in_q9,4,0x20,0);
      auVar35 = VectorShiftRight(in_q10,4);
      auVar45 = VectorShiftLeft(in_q11,4,0x20,0);
      auVar43 = VectorShiftLeft(in_q15,4,0x20,0);
      auVar37 = (auVar41 | in_q12) & auVar49;
      auVar35 = auVar35 | in_q10;
      auVar39 = (auVar39 | in_q13) & auVar34;
      in_q11 = auVar45 | in_q11;
      auVar44 = VectorShiftRight(in_q14,4);
      auVar41 = (auVar42 | in_q8) & auVar49;
      auVar36 = (auVar36 | in_q9) & auVar34;
      auVar43 = auVar43 | in_q15;
      puVar1 = (undefined4 *)0x3c0;
      puVar2 = (undefined4 *)0x3d0;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar9;
        puVar30 = (undefined4 *)((int)puVar9 + 4);
        *puVar2 = *puVar30;
        puVar9 = (u64 *)(puVar30 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x3c8;
      puVar2 = (undefined4 *)0x3d8;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar9;
        puVar30 = (undefined4 *)((int)puVar9 + 4);
        *puVar2 = *puVar30;
        puVar9 = (u64 *)(puVar30 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      auVar35 = auVar35 & auVar49;
      auVar37 = auVar37 | auVar39;
      in_q11 = in_q11 & auVar34;
      auVar39 = auVar44 | in_q14;
      puVar1 = (undefined4 *)0x3e0;
      puVar2 = (undefined4 *)0x3f0;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar12;
        puVar30 = (undefined4 *)((int)puVar12 + 4);
        *puVar2 = *puVar30;
        puVar12 = (u64 *)(puVar30 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x3e8;
      puVar2 = (undefined4 *)0x3f8;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar12;
        puVar30 = (undefined4 *)((int)puVar12 + 4);
        *puVar2 = *puVar30;
        puVar12 = (u64 *)(puVar30 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      auVar41 = auVar41 | auVar36;
      auVar43 = auVar43 & auVar34;
      auVar36 = VectorShiftRight(auVar37,2);
      auVar35 = auVar35 | in_q11;
      auVar39 = auVar39 & auVar49;
      puVar1 = (undefined4 *)0x3a0;
      puVar2 = (undefined4 *)0x3b0;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar11;
        puVar30 = (undefined4 *)((int)puVar11 + 4);
        *puVar2 = *puVar30;
        puVar11 = (u64 *)(puVar30 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x3a8;
      puVar2 = (undefined4 *)0x3b8;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar11;
        puVar30 = (undefined4 *)((int)puVar11 + 4);
        *puVar2 = *puVar30;
        puVar11 = (u64 *)(puVar30 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      *(longlong *)((int)puVar28 + 0x18) = auVar41._0_8_;
      *(longlong *)((int)puVar28 + 0x20) = auVar41._8_8_;
      auVar41 = SIMDExpandImmediate(0,0xe,0x11);
      auVar36 = auVar36 | auVar37;
      auVar37 = auVar39 | auVar43;
      puVar1 = (undefined4 *)0x380;
      puVar2 = (undefined4 *)0x390;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar18;
        puVar30 = (undefined4 *)((int)puVar18 + 4);
        *puVar2 = *puVar30;
        puVar18 = (u64 *)(puVar30 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x388;
      puVar2 = (undefined4 *)0x398;
      lVar33 = 2;
      while( true ) {
        *puVar1 = *(undefined4 *)puVar18;
        puVar30 = (undefined4 *)((int)puVar18 + 4);
        *puVar2 = *puVar30;
        puVar18 = (u64 *)(puVar30 + 1);
        lVar33 = lVar33 + -1;
        if (lVar33 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      auVar40 = VectorShiftLeft(in_q15,4,0x20,0);
      auVar42 = VectorShiftRight(auVar36,1);
      auVar38 = VectorShiftRight(in_q14,4);
      auVar36 = (auVar42 | auVar36) & auVar41;
      auVar42 = VectorShiftRight(auVar36,7);
      auVar42 = auVar42 | auVar36;
      auVar40 = (auVar40 | in_q15) & auVar34 | (auVar38 | in_q14) & auVar49;
      auVar48 = VectorShiftLeft(in_q13,4,0x20,0);
      auVar52 = VectorShiftRight(auVar42,0xe);
      auVar36 = VectorShiftRight(auVar37,2);
      auVar38 = VectorShiftRight(auVar45,4);
      auVar47 = VectorShiftRight(auVar36 | auVar37,1);
      auVar37 = (auVar47 | auVar36 | auVar37) & auVar41;
      auVar48 = (auVar48 | in_q13) & auVar34 | (auVar38 | auVar45) & auVar49;
      auVar36 = VectorShiftRight(in_q11,4);
      auVar38 = VectorShiftLeft(auVar44,4,0x20,0);
      auVar45 = VectorShiftRight(auVar37,7);
      auVar45 = auVar45 | auVar37;
      auVar37 = VectorShiftRight(auVar45,0xe);
      auVar47 = (auVar38 | auVar44) & auVar34 | (auVar36 | in_q11) & auVar49;
      auVar53 = VectorShiftLeft(auVar39,4,0x20,0);
      auVar44 = VectorShiftRight(auVar35,2);
      auVar38 = VectorShiftRight(auVar43,4);
      auVar51._0_8_ = VectorCopyNarrow(auVar37 | auVar45,4);
      auVar51._8_8_ = VectorCopyNarrow(auVar52 | auVar42,4);
      auVar37 = VectorShiftRight(auVar40,2);
      auVar42 = VectorShiftRight(auVar44 | auVar35,1);
      auVar37 = auVar37 | auVar40;
      auVar36 = VectorShiftRight(auVar47,2);
      auVar39 = (auVar53 | auVar39) & auVar34 | (auVar38 | auVar43) & auVar49;
      auVar34 = VectorShiftRight(auVar48,2);
      auVar35 = (auVar42 | auVar44 | auVar35) & auVar41;
      auVar49 = VectorShiftRight(*(undefined (*) [16])((int)puVar28 + 0x18),2);
      auVar36 = auVar36 | auVar47;
      auVar44 = VectorShiftRight(auVar37,1);
      auVar34 = auVar34 | auVar48;
      auVar42 = VectorShiftRight(auVar35,7);
      auVar49 = auVar49 | *(undefined (*) [16])((int)puVar28 + 0x18);
      auVar47 = VectorShiftRight(auVar39,2);
      auVar43 = VectorShiftRight(auVar36,1);
      auVar42 = auVar42 | auVar35;
      auVar45 = VectorShiftRight(auVar49,1);
      auVar47 = auVar47 | auVar39;
      auVar39 = VectorShiftRight(auVar34,1);
      auVar44 = (auVar44 | auVar37) & auVar41;
      auVar40 = VectorShiftRight(auVar42,0xe);
      auVar43 = (auVar43 | auVar36) & auVar41;
      auVar35 = VectorShiftRight(auVar44,7);
      auVar37 = VectorShiftRight(auVar47,1);
      auVar38 = (auVar45 | auVar49) & auVar41;
      auVar36 = (auVar39 | auVar34) & auVar41;
      auVar35 = auVar35 | auVar44;
      auVar49 = VectorShiftRight(auVar38,7);
      auVar34 = VectorShiftRight(auVar36,7);
      auVar45 = VectorShiftRight(auVar35,0xe);
      auVar41 = (auVar37 | auVar47) & auVar41;
      auVar39 = VectorShiftRight(auVar43,7);
      auVar49 = auVar49 | auVar38;
      auVar34 = auVar34 | auVar36;
      auVar37 = VectorShiftRight(auVar41,7);
      auVar39 = auVar39 | auVar43;
      auVar38 = VectorShiftRight(auVar49,0xe);
      auVar44 = VectorShiftRight(auVar34,0xe);
      auVar37 = auVar37 | auVar41;
      auVar43 = VectorShiftRight(auVar39,0xe);
      auVar41 = VectorShiftRight(auVar37,0xe);
      auVar36._0_8_ = VectorCopyNarrow(auVar40 | auVar42,4);
      auVar36._8_8_ = VectorCopyNarrow(auVar38 | auVar49,4);
      uVar46 = VectorCopyNarrow(auVar51,2);
      uVar50 = VectorCopyNarrow(auVar36,2);
      *(undefined8 *)render_visibility = uVar46;
      *(undefined8 *)((int)render_visibility + 8) = uVar50;
      auVar35._0_8_ = VectorCopyNarrow(auVar45 | auVar35,4);
      auVar35._8_8_ = VectorCopyNarrow(auVar44 | auVar34,4);
      auVar34._0_8_ = VectorCopyNarrow(auVar43 | auVar39,4);
      auVar34._8_8_ = VectorCopyNarrow(auVar41 | auVar37,4);
      uVar46 = VectorCopyNarrow(auVar35,2);
      uVar50 = VectorCopyNarrow(auVar34,2);
      *puVar16 = uVar46;
      puVar16[1] = uVar50;
      puVar29 = puVar28;
    }
    else {
      puVar21 = bg_layer->extended_palette;
      puVar29 = &local_868;
      if (puVar21 != (u16 *)0x0) {
        iVar20 = (int)bg_layer->affine_dx;
        uVar23 = (u32)bg_layer->affine_dy;
        if (((iVar20 - 0xf801U & 0xffff) < 0xfff) && ((uVar23 - 0xf801 & 0xffff) < 0xfff)) {
          local_81c = _aligned_storage_1;
          local_868 = bg_layer->inv_dxp;
          tiles_x_3 = bg_layer->inv_dyp;
          if (((uint)local_81c & 8) != 0) {
            local_81c = _aligned_storage_1 + 1;
          }
          inv_dyp_3 = (u32)(local_81c + 0x24);
          tiles_x_1 = render_scanline_affine_setup_tile_widths(iVar20,map_base_ptr,0xff);
          local_868 = tiles_x_3;
          local_868 = render_scanline_affine_setup_tile_widths(uVar23,local_850,0xff,inv_dyp_3);
          local_81c = (u64 *)render_scanline_affine_merge_tile_widths
                                       (local_81c,inv_dyp_3,puVar12,tiles_x_1);
          puVar6 = map_base_ptr;
          local_858 = (uint)bg_layer->affine_map_pitch_shift;
          local_868 = local_850;
          local_85c = (uint)bg_layer->affine_wrap_mask;
          local_864 = (u8 *)iVar20;
          local_860 = (vram_map_type)uVar23;
          render_scanline_affine_setup_map_indexes_extended
                    (puVar12,_aligned_storage + 0x20,local_81c,map_base_ptr);
          render_scanline_affine_diff_tile_widths(puVar12,local_81c,0xff);
          local_864 = (u8 *)0xff;
          local_868 = uVar23;
          render_scanline_affine_setup_tile_offsets(puVar18,puVar6,local_850,iVar20);
        }
        else {
          memset(puVar12,1,0x100);
          _aligned_storage[130]._0_1_ = 0;
          puVar9 = _aligned_storage + 0x20;
          sVar5 = (((ushort)bg_layer->affine_wrap_mask & (ushort)((uint)map_base_ptr >> 0xb)) +
                  (short)(((uint)bg_layer->affine_wrap_mask & local_850 >> 0xb) <<
                         bg_layer->affine_map_pitch_shift)) * 2;
          uVar10 = CONCAT22(sVar5,sVar5);
          in_q8._4_4_ = uVar10;
          in_q8._0_4_ = uVar10;
          in_q8._8_8_ = 0;
          in_q8 = in_q8 & in_q8 << 0x40;
          do {
            *puVar9 = 0;
            puVar9[1] = in_q8._8_8_;
            puVar9 = puVar9 + 2;
          } while (_aligned_storage + 0x60 != puVar9);
          local_864 = (u8 *)0x100;
          local_868 = uVar23;
          render_scanline_affine_setup_tile_offsets(puVar18,map_base_ptr,local_850,iVar20);
        }
        puVar6 = tile_widths_y_2;
        puVar30 = (undefined4 *)dx;
        local_868 = dx;
        local_864 = (u8 *)edge_x2_1;
        local_860 = local_838;
        render_scanline_affine_render_tiles_extended_extended
                  (tile_widths_y_2,puVar18,puVar12,tile_widths_y);
        render_scanline_palette_lookup_8bpp(puVar6,puVar6,puVar21,0xff);
        puVar12 = _aligned_storage + 0x8a;
        puVar25 = _aligned_storage + 0x8e;
        auVar49 = SIMDExpandImmediate(0,0xe,0xf);
        puVar9 = _aligned_storage + 0x92;
        puVar1 = (undefined4 *)0x3e0;
        puVar2 = (undefined4 *)0x3f0;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *puVar30;
          puVar30 = puVar30 + 1;
          *puVar2 = *puVar30;
          puVar30 = puVar30 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x3e8;
        puVar2 = (undefined4 *)0x3f8;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *puVar30;
          puVar30 = puVar30 + 1;
          *puVar2 = *puVar30;
          puVar30 = puVar30 + 1;
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        auVar34 = SIMDExpandImmediate(0,0xe,0xf0);
        puVar11 = puVar18 + 0x96;
        puVar8 = puVar18 + 0x9a;
        puVar1 = (undefined4 *)0x3c0;
        puVar2 = (undefined4 *)0x3d0;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar12;
          puVar30 = (undefined4 *)((int)puVar12 + 4);
          *puVar2 = *puVar30;
          puVar12 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x3c8;
        puVar2 = (undefined4 *)0x3d8;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar12;
          puVar30 = (undefined4 *)((int)puVar12 + 4);
          *puVar2 = *puVar30;
          puVar12 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar12 = puVar18 + 0x9e;
        puVar18 = puVar18 + 0xa2;
        puVar16 = (undefined8 *)((int)render_visibility + 0x10);
        puVar1 = (undefined4 *)0x3a0;
        puVar2 = (undefined4 *)0x3b0;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar25;
          puVar30 = (undefined4 *)((int)puVar25 + 4);
          *puVar2 = *puVar30;
          puVar25 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x3a8;
        puVar2 = (undefined4 *)0x3b8;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar25;
          puVar30 = (undefined4 *)((int)puVar25 + 4);
          *puVar2 = *puVar30;
          puVar25 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x380;
        puVar2 = (undefined4 *)0x390;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar9;
          puVar30 = (undefined4 *)((int)puVar9 + 4);
          *puVar2 = *puVar30;
          puVar9 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x388;
        puVar2 = (undefined4 *)0x398;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar9;
          puVar30 = (undefined4 *)((int)puVar9 + 4);
          *puVar2 = *puVar30;
          puVar9 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        auVar37 = VectorShiftRight(in_q12,4);
        auVar35 = VectorShiftLeft(in_q13,4,0x20,0);
        auVar39 = VectorShiftLeft(in_q11,4,0x20,0);
        auVar36 = VectorShiftLeft(in_q9,4,0x20,0);
        auVar41 = VectorShiftRight(in_q8,4);
        auVar43 = VectorShiftRight(in_q14,4);
        auVar45 = VectorShiftRight(in_q10,4);
        auVar37 = (auVar37 | in_q12) & auVar49;
        auVar41 = auVar41 | in_q8;
        auVar42 = VectorShiftLeft(in_q15,4,0x20,0);
        auVar43 = auVar43 | in_q14;
        auVar44 = (auVar35 | in_q13) & auVar34;
        auVar35 = (auVar39 | in_q11) & auVar34;
        in_q10 = auVar45 | in_q10;
        auVar36 = (auVar36 | in_q9) & auVar34;
        puVar1 = (undefined4 *)0x3c0;
        puVar2 = (undefined4 *)0x3d0;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar8;
          puVar30 = (undefined4 *)((int)puVar8 + 4);
          *puVar2 = *puVar30;
          puVar8 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x3c8;
        puVar2 = (undefined4 *)0x3d8;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar8;
          puVar30 = (undefined4 *)((int)puVar8 + 4);
          *puVar2 = *puVar30;
          puVar8 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        auVar41 = auVar41 & auVar49;
        auVar42 = auVar42 | in_q15;
        auVar37 = auVar37 | auVar44;
        puVar1 = (undefined4 *)0x3e0;
        puVar2 = (undefined4 *)0x3f0;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar11;
          puVar30 = (undefined4 *)((int)puVar11 + 4);
          *puVar2 = *puVar30;
          puVar11 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x3e8;
        puVar2 = (undefined4 *)0x3f8;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar11;
          puVar30 = (undefined4 *)((int)puVar11 + 4);
          *puVar2 = *puVar30;
          puVar11 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        auVar43 = auVar43 & auVar49;
        in_q10 = in_q10 & auVar49;
        auVar41 = auVar41 | auVar36;
        auVar42 = auVar42 & auVar34;
        auVar36 = VectorShiftRight(auVar37,2);
        auVar35 = auVar35 | in_q10;
        puVar1 = (undefined4 *)0x3a0;
        puVar2 = (undefined4 *)0x3b0;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar12;
          puVar30 = (undefined4 *)((int)puVar12 + 4);
          *puVar2 = *puVar30;
          puVar12 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x3a8;
        puVar2 = (undefined4 *)0x3b8;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar12;
          puVar30 = (undefined4 *)((int)puVar12 + 4);
          *puVar2 = *puVar30;
          puVar12 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        *(longlong *)((int)puVar27 + 0x18) = auVar41._0_8_;
        *(longlong *)((int)puVar27 + 0x20) = auVar41._8_8_;
        auVar36 = auVar36 | auVar37;
        auVar41 = SIMDExpandImmediate(0,0xe,0x11);
        auVar39 = VectorShiftLeft(in_q15,4,0x20,0);
        auVar37 = auVar43 | auVar42;
        puVar1 = (undefined4 *)0x380;
        puVar2 = (undefined4 *)0x390;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar18;
          puVar30 = (undefined4 *)((int)puVar18 + 4);
          *puVar2 = *puVar30;
          puVar18 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x388;
        puVar2 = (undefined4 *)0x398;
        lVar33 = 2;
        while( true ) {
          *puVar1 = *(undefined4 *)puVar18;
          puVar30 = (undefined4 *)((int)puVar18 + 4);
          *puVar2 = *puVar30;
          puVar18 = (u64 *)(puVar30 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        auVar38 = VectorShiftRight(auVar36,1);
        auVar40 = VectorShiftRight(in_q14,4);
        auVar36 = (auVar38 | auVar36) & auVar41;
        auVar38 = VectorShiftRight(auVar36,7);
        auVar38 = auVar38 | auVar36;
        auVar40 = (auVar39 | in_q15) & auVar34 | (auVar40 | in_q14) & auVar49;
        auVar52 = VectorShiftLeft(in_q13,4,0x20,0);
        auVar51 = VectorShiftRight(auVar38,0xe);
        auVar36 = VectorShiftRight(auVar37,2);
        auVar39 = VectorShiftRight(auVar45,4);
        auVar47 = VectorShiftRight(auVar36 | auVar37,1);
        auVar48 = (auVar47 | auVar36 | auVar37) & auVar41;
        auVar47 = (auVar52 | in_q13) & auVar34 | (auVar39 | auVar45) & auVar49;
        auVar45 = VectorShiftLeft(auVar44,4,0x20,0);
        auVar36 = VectorShiftRight(in_q10,4);
        auVar37 = VectorShiftRight(auVar48,7);
        auVar37 = auVar37 | auVar48;
        auVar39 = VectorShiftRight(auVar37,0xe);
        auVar44 = (auVar45 | auVar44) & auVar34 | (auVar36 | in_q10) & auVar49;
        auVar48 = VectorShiftLeft(auVar43,4,0x20,0);
        auVar45._0_8_ = VectorCopyNarrow(auVar39 | auVar37,4);
        auVar45._8_8_ = VectorCopyNarrow(auVar51 | auVar38,4);
        auVar39 = VectorShiftRight(auVar35,2);
        auVar36 = VectorShiftRight(auVar40,2);
        auVar37 = VectorShiftRight(auVar42,4);
        auVar36 = auVar36 | auVar40;
        auVar38 = VectorShiftRight(auVar39 | auVar35,1);
        auVar37 = (auVar48 | auVar43) & auVar34 | (auVar37 | auVar42) & auVar49;
        auVar34 = VectorShiftRight(auVar47,2);
        auVar39 = (auVar38 | auVar39 | auVar35) & auVar41;
        auVar48 = VectorShiftRight(auVar37,2);
        auVar34 = auVar34 | auVar47;
        auVar49 = VectorShiftRight(*(undefined (*) [16])((int)puVar27 + 0x18),2);
        auVar42 = VectorShiftRight(auVar39,7);
        auVar43 = VectorShiftRight(auVar36,1);
        auVar48 = auVar48 | auVar37;
        auVar37 = VectorShiftRight(auVar34,1);
        auVar49 = auVar49 | *(undefined (*) [16])((int)puVar27 + 0x18);
        auVar35 = VectorShiftRight(auVar44,2);
        auVar42 = auVar42 | auVar39;
        auVar35 = auVar35 | auVar44;
        auVar38 = VectorShiftRight(auVar49,1);
        auVar47 = VectorShiftRight(auVar42,0xe);
        auVar44 = (auVar43 | auVar36) & auVar41;
        auVar37 = (auVar37 | auVar34) & auVar41;
        auVar43 = VectorShiftRight(auVar35,1);
        auVar39 = VectorShiftRight(auVar48,1);
        auVar34 = VectorShiftRight(auVar44,7);
        auVar40 = (auVar38 | auVar49) & auVar41;
        auVar36 = VectorShiftRight(auVar37,7);
        auVar34 = auVar34 | auVar44;
        auVar43 = (auVar43 | auVar35) & auVar41;
        auVar49 = VectorShiftRight(auVar40,7);
        auVar41 = (auVar39 | auVar48) & auVar41;
        auVar36 = auVar36 | auVar37;
        auVar38 = VectorShiftRight(auVar34,0xe);
        auVar39 = VectorShiftRight(auVar43,7);
        auVar49 = auVar49 | auVar40;
        auVar35 = VectorShiftRight(auVar41,7);
        auVar39 = auVar39 | auVar43;
        auVar40 = VectorShiftRight(auVar49,0xe);
        auVar35 = auVar35 | auVar41;
        auVar44 = VectorShiftRight(auVar36,0xe);
        auVar43 = VectorShiftRight(auVar39,0xe);
        auVar37 = VectorShiftRight(auVar35,0xe);
        auVar41._0_8_ = VectorCopyNarrow(auVar47 | auVar42,4);
        auVar41._8_8_ = VectorCopyNarrow(auVar40 | auVar49,4);
        uVar46 = VectorCopyNarrow(auVar45,2);
        uVar50 = VectorCopyNarrow(auVar41,2);
        auVar42._0_8_ = VectorCopyNarrow(auVar38 | auVar34,4);
        auVar42._8_8_ = VectorCopyNarrow(auVar44 | auVar36,4);
        *(undefined8 *)render_visibility = uVar46;
        *(undefined8 *)((int)render_visibility + 8) = uVar50;
        auVar39._0_8_ = VectorCopyNarrow(auVar43 | auVar39,4);
        auVar39._8_8_ = VectorCopyNarrow(auVar37 | auVar35,4);
        uVar46 = VectorCopyNarrow(auVar42,2);
        uVar50 = VectorCopyNarrow(auVar39,2);
        *puVar16 = uVar46;
        puVar16[1] = uVar50;
        puVar29 = puVar27;
      }
    }
    goto LAB_080bb118;
  }
  bVar3 = bg_layer->use_extended_palette;
  if (bVar3 == 0) {
    edge_y2_1 = *(int *)((int)&bg_layer->affine_edge_current_x + 4) +
                *(int *)((int)&bg_layer->affine_edge_width_x + 4) +
                (uint)CARRY4(*(uint *)&bg_layer->affine_edge_current_x,
                             *(uint *)&bg_layer->affine_edge_width_x);
    dx = *(uint *)&bg_layer->affine_edge_current_x + *(uint *)&bg_layer->affine_edge_width_x;
    tile_widths_x_2 =
         (u8 *)(*(int *)((int)&bg_layer->affine_edge_width_y + 4) +
                *(int *)((int)&bg_layer->affine_edge_current_y + 4) +
               (uint)CARRY4(*(uint *)&bg_layer->affine_edge_width_y,
                            *(uint *)&bg_layer->affine_edge_current_y));
    tile_widths_y =
         (u8 *)(*(uint *)&bg_layer->affine_edge_width_y + *(uint *)&bg_layer->affine_edge_current_y)
    ;
    inv_dyp_3 = *(uint *)&bg_layer->affine_edge_step_x + *(uint *)&bg_layer->affine_edge_current_x;
    iStack_814 = *(int *)((int)&bg_layer->affine_edge_step_x + 4) +
                 *(int *)((int)&bg_layer->affine_edge_current_x + 4) +
                 (uint)CARRY4(*(uint *)&bg_layer->affine_edge_step_x,
                              *(uint *)&bg_layer->affine_edge_current_x);
    tiles_x_3 = *(uint *)&bg_layer->affine_edge_step_y + *(uint *)&bg_layer->affine_edge_current_y;
    inv_dyp_1 = *(int *)((int)&bg_layer->affine_edge_step_y + 4) +
                *(int *)((int)&bg_layer->affine_edge_current_y + 4) +
                (uint)CARRY4(*(uint *)&bg_layer->affine_edge_step_y,
                             *(uint *)&bg_layer->affine_edge_current_y);
    tiles_x_1 = *(u32 *)((int)&bg_layer->affine_edge_current_x + 4);
    uVar23 = *(u32 *)((int)&bg_layer->affine_edge_current_y + 4);
    if ((int)tiles_x_1 <= (int)uVar23) {
      tiles_x_1 = uVar23;
    }
    right_edge = (s32)tile_widths_x_2;
    if (edge_y2_1 <= (int)tile_widths_x_2) {
      right_edge = edge_y2_1;
    }
    *(u32 *)&bg_layer->affine_edge_current_x = inv_dyp_3;
    *(int *)((int)&bg_layer->affine_edge_current_x + 4) = iStack_814;
    *(u32 *)&bg_layer->affine_edge_current_y = tiles_x_3;
    *(u32 *)((int)&bg_layer->affine_edge_current_y + 4) = inv_dyp_1;
    *(undefined8 *)render_visibility = 0;
    *(undefined8 *)(render_visibility + 2) = 0;
    *(undefined8 *)(render_visibility + 4) = 0;
    *(undefined8 *)(render_visibility + 6) = 0;
    if ((int)tiles_x_1 < 0) {
      if (right_edge < 0) goto LAB_080bb118;
      tiles_x_1 = (uint)bVar3;
      iVar22 = 0;
      iVar13 = 0;
      iVar20 = 0;
    }
    else {
      puVar29 = &local_868;
      if (((uint)(0xff < (int)tiles_x_1) | (uint)right_edge >> 0x1f) != 0) goto LAB_080bb118;
      iVar22 = tiles_x_1 * (int)sVar5;
      iVar20 = tiles_x_1 << 1;
      iVar13 = tiles_x_1 * (int)local_81c;
    }
    if (0xfe < right_edge) {
      right_edge = 0xff;
    }
    dx = right_edge - tiles_x_1;
    puVar29 = &local_868;
    if (dx < 0) goto LAB_080bb118;
    tile_widths_y = (u8 *)(int)bg_layer->affine_dx;
    inv_dyp_3 = tiles_x_1 & 7;
    puVar9 = _aligned_storage_1;
    local_868 = bg_layer->inv_dxp;
    if (((uint)puVar9 & 8) != 0) {
      puVar9 = _aligned_storage_1 + 1;
    }
    tiles_x_3 = (int)_aligned_storage + inv_dyp_3 + 0x430;
    local_81c = (u64 *)(int)bg_layer->affine_dy;
    tile_widths_y_2 = tile_widths_y_2 + iVar20;
    map_base_ptr = map_base_ptr + iVar22;
    local_850 = local_850 + iVar13;
    tiles_x = bg_layer->inv_dyp;
    local_800 = local_868;
    local_800 = render_scanline_affine_setup_tile_widths(tile_widths_y,map_base_ptr,dx,puVar9);
    local_868 = tiles_x;
    local_868 = render_scanline_affine_setup_tile_widths(local_81c,local_850,dx,puVar9 + 0x24);
    uVar10 = render_scanline_affine_merge_tile_widths(puVar9,puVar9 + 0x24,puVar12,local_800);
    local_858 = (uint)bg_layer->affine_map_pitch_shift;
    local_868 = local_850;
    local_85c = (uint)bg_layer->affine_wrap_mask;
    local_864 = tile_widths_y;
    local_860 = (vram_map_type)local_81c;
    render_scanline_affine_setup_map_indexes_extended
              (puVar12,_aligned_storage + 0x20,uVar10,map_base_ptr);
    sVar7 = dx;
    render_scanline_affine_diff_tile_widths(puVar12,uVar10,dx);
    local_864 = (u8 *)sVar7;
    local_868 = (u32)local_81c;
    render_scanline_affine_setup_tile_offsets(puVar18,map_base_ptr,local_850,tile_widths_y);
    puVar6 = tile_widths_y_2;
    local_868 = tiles_x_3;
    local_864 = (u8 *)edge_x2_1;
    local_860 = local_838;
    render_scanline_affine_render_tiles_extended_normal
              (tile_widths_y_2,puVar18,puVar12,_aligned_storage + 0x20);
    render_scanline_palette_lookup_8bpp(puVar6,puVar6,puVar21,sVar7);
    uVar24 = (int)tiles_x_1 >> 3;
    if (uVar24 <= (uint)(right_edge >> 3)) {
      puVar18 = _aligned_storage + 0x87;
      pbVar14 = (byte *)((int)render_visibility + uVar24);
      do {
        puVar32 = (uint *)((int)puVar18 + -4);
        puVar12 = puVar18 + -1;
        puVar18 = puVar18 + 1;
        uVar17 = (*puVar32 | *puVar32 << 4) & 0xf0f0f0f0 |
                 (*(uint *)puVar12 | *(uint *)puVar12 >> 4) & 0xf0f0f0f;
        uVar17 = uVar17 | uVar17 >> 2;
        uVar17 = (uVar17 | uVar17 >> 1) & 0x11111111;
        uVar17 = uVar17 | uVar17 >> 7;
        pbVar15 = pbVar14 + 1;
        *pbVar14 = (byte)uVar17 | (byte)(uVar17 >> 0xe);
        pbVar14 = pbVar15;
      } while ((uint)((int)pbVar15 - (int)render_visibility) <= (uint)(right_edge >> 3));
    }
    bVar3 = *(byte *)((int)render_visibility + uVar24);
    uVar23 = inv_dyp_3;
  }
  else {
    tiles_x_1 = (u32)bg_layer->extended_palette;
    puVar29 = &local_868;
    if (bg_layer->extended_palette == (u16 *)0x0) goto LAB_080bb118;
    tile_widths_x_2 =
         (u8 *)(*(int *)((int)&bg_layer->affine_edge_current_x + 4) +
                *(int *)((int)&bg_layer->affine_edge_width_x + 4) +
               (uint)CARRY4(*(uint *)&bg_layer->affine_edge_current_x,
                            *(uint *)&bg_layer->affine_edge_width_x));
    tile_widths_y =
         (u8 *)(*(uint *)&bg_layer->affine_edge_current_x + *(uint *)&bg_layer->affine_edge_width_x)
    ;
    iVar22 = *(int *)((int)&bg_layer->affine_edge_current_y + 4) +
             *(int *)((int)&bg_layer->affine_edge_width_y + 4) +
             (uint)CARRY4(*(uint *)&bg_layer->affine_edge_current_y,
                          *(uint *)&bg_layer->affine_edge_width_y);
    inv_dyp_3 = *(uint *)&bg_layer->affine_edge_step_x + *(uint *)&bg_layer->affine_edge_current_x;
    iStack_814 = *(int *)((int)&bg_layer->affine_edge_step_x + 4) +
                 *(int *)((int)&bg_layer->affine_edge_current_x + 4) +
                 (uint)CARRY4(*(uint *)&bg_layer->affine_edge_step_x,
                              *(uint *)&bg_layer->affine_edge_current_x);
    tiles_x_3 = *(uint *)&bg_layer->affine_edge_step_y + *(uint *)&bg_layer->affine_edge_current_y;
    iVar20 = *(int *)((int)&bg_layer->affine_edge_current_x + 4);
    inv_dyp_1 = *(int *)((int)&bg_layer->affine_edge_step_y + 4) +
                *(int *)((int)&bg_layer->affine_edge_current_y + 4) +
                (uint)CARRY4(*(uint *)&bg_layer->affine_edge_step_y,
                             *(uint *)&bg_layer->affine_edge_current_y);
    left_edge = *(int *)((int)&bg_layer->affine_edge_current_y + 4);
    if (left_edge < iVar20) {
      left_edge = iVar20;
    }
    right_edge = (s32)tile_widths_x_2;
    if (iVar22 < (int)tile_widths_x_2) {
      right_edge = iVar22;
    }
    *(u32 *)&bg_layer->affine_edge_current_x = inv_dyp_3;
    *(int *)((int)&bg_layer->affine_edge_current_x + 4) = iStack_814;
    *(u32 *)&bg_layer->affine_edge_current_y = tiles_x_3;
    *(u32 *)((int)&bg_layer->affine_edge_current_y + 4) = inv_dyp_1;
    *(undefined8 *)render_visibility = 0;
    *(undefined8 *)(render_visibility + 2) = 0;
    *(undefined8 *)(render_visibility + 4) = 0;
    *(undefined8 *)(render_visibility + 6) = 0;
    if (left_edge < 0) {
      uVar17 = uVar24;
      left_edge = uVar24;
      uVar26 = uVar24;
      puVar29 = &local_868;
      if (right_edge < 0) goto LAB_080bb118;
    }
    else {
      puVar29 = &local_868;
      if (((uint)(0xff < left_edge) | (uint)right_edge >> 0x1f) != 0) goto LAB_080bb118;
      uVar24 = left_edge * sVar5;
      uVar17 = left_edge * (int)local_81c;
      uVar26 = left_edge << 1;
    }
    if (0xfe < right_edge) {
      right_edge = 0xff;
    }
    iVar20 = right_edge - left_edge;
    puVar29 = &local_868;
    if (iVar20 < 0) goto LAB_080bb118;
    tile_widths_y = (u8 *)(int)bg_layer->affine_dx;
    puVar9 = _aligned_storage_1;
    tiles_x_3 = left_edge & 7;
    if (((uint)puVar9 & 8) != 0) {
      puVar9 = _aligned_storage_1 + 1;
    }
    local_868 = bg_layer->inv_dxp;
    tiles_x = dx + tiles_x_3;
    local_81c = (u64 *)(int)bg_layer->affine_dy;
    inv_dyp_3 = (u32)(tile_widths_y_2 + uVar26);
    map_base_ptr = map_base_ptr + uVar24;
    local_850 = local_850 + uVar17;
    local_800 = bg_layer->inv_dyp;
    tile_widths_y_2 = (u8 *)(puVar9 + 0x24);
    dx = (s32)puVar9;
    local_7fc = local_868;
    local_7fc = render_scanline_affine_setup_tile_widths(tile_widths_y,map_base_ptr,iVar20);
    local_868 = local_800;
    local_868 = render_scanline_affine_setup_tile_widths(local_81c,local_850,iVar20,tile_widths_y_2)
    ;
    tile_widths_y_2 =
         (u8 *)render_scanline_affine_merge_tile_widths(dx,tile_widths_y_2,puVar12,local_7fc);
    uVar23 = (u32)local_81c;
    local_858 = (uint)bg_layer->affine_map_pitch_shift;
    local_868 = local_850;
    local_85c = (uint)bg_layer->affine_wrap_mask;
    local_864 = tile_widths_y;
    local_860 = (vram_map_type)local_81c;
    render_scanline_affine_setup_map_indexes_extended
              (puVar12,_aligned_storage + 0x20,tile_widths_y_2,map_base_ptr);
    render_scanline_affine_diff_tile_widths(puVar12,tile_widths_y_2,iVar20);
    local_868 = uVar23;
    local_864 = (u8 *)iVar20;
    render_scanline_affine_setup_tile_offsets(puVar18,map_base_ptr,local_850,tile_widths_y);
    uVar23 = inv_dyp_3;
    local_868 = tiles_x;
    local_864 = (u8 *)edge_x2_1;
    local_860 = local_838;
    render_scanline_affine_render_tiles_extended_extended
              (inv_dyp_3,puVar18,puVar12,_aligned_storage + 0x20);
    render_scanline_palette_lookup_8bpp(uVar23,uVar23,tiles_x_1,iVar20);
    uVar24 = left_edge >> 3;
    if (uVar24 <= (uint)(right_edge >> 3)) {
      puVar18 = _aligned_storage + 0x87;
      pbVar14 = (byte *)((int)render_visibility + uVar24);
      do {
        puVar32 = (uint *)((int)puVar18 + -4);
        puVar12 = puVar18 + -1;
        puVar18 = puVar18 + 1;
        uVar17 = (*puVar32 | *puVar32 << 4) & 0xf0f0f0f0 |
                 (*(uint *)puVar12 | *(uint *)puVar12 >> 4) & 0xf0f0f0f;
        uVar17 = uVar17 | uVar17 >> 2;
        uVar17 = (uVar17 | uVar17 >> 1) & 0x11111111;
        uVar17 = uVar17 | uVar17 >> 7;
        pbVar15 = pbVar14 + 1;
        *pbVar14 = (byte)uVar17 | (byte)(uVar17 >> 0xe);
        pbVar14 = pbVar15;
      } while ((uint)((int)pbVar15 - (int)render_visibility) <= (uint)(right_edge >> 3));
    }
    bVar3 = *(byte *)((int)render_visibility + uVar24);
    uVar23 = tiles_x_3;
  }
  *(byte *)((int)render_visibility + uVar24) = bVar3 & (byte)(0xff << (uVar23 & 0xff));
  *(byte *)((int)render_visibility + (right_edge >> 3)) =
       *(byte *)((int)render_visibility + (right_edge >> 3)) & ~(byte)(0xfe << (right_edge & 7U));
  puVar29 = &local_868;
LAB_080bb118:
  if (*(int *)((int)puVar29 + 0x7fc) == *piVar19) {
                    /* WARNING: Could not recover jumptable at 0x080bb148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)puVar29 + 0x864))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


