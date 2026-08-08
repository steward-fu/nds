/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_normal
 * Address  : 080ba048
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_affine_normal
               (video_2d_bg_layer_struct *bg_layer,u16 *render_buffer,u32 *render_visibility,
               u32 line)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  u8 *puVar5;
  s32 sVar6;
  u64 *puVar7;
  s32 dy_1;
  u32 tiles_y_1;
  undefined4 uVar8;
  u32 tiles_y;
  u64 *puVar9;
  s32 right_edge;
  u64 *puVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  u16 *palette;
  undefined8 *puVar14;
  uint uVar15;
  u32 block_visibility;
  u8 *tile_offsets;
  u64 *puVar16;
  u32 uVar17;
  int *piVar18;
  u8 *tile_widths;
  uint uVar19;
  s32 source_x;
  u8 *aligned_storage_2;
  uint uVar20;
  s32 source_y;
  int iVar21;
  s32 left_edge;
  u32 block;
  s32 dx;
  uint uVar22;
  u64 *puVar23;
  uint uVar24;
  u32 right_block;
  u32 *puVar25;
  u32 *puVar26;
  u8 *aligned_storage;
  u64 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  uint *puVar30;
  longlong lVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined in_q8 [16];
  undefined auVar41 [16];
  undefined in_q9 [16];
  undefined in_q10 [16];
  undefined in_q11 [16];
  undefined auVar42 [16];
  undefined in_q12 [16];
  undefined auVar43 [16];
  undefined8 uVar44;
  undefined in_q13 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined8 uVar47;
  undefined in_q14 [16];
  undefined auVar48 [16];
  undefined in_q15 [16];
  undefined auVar49 [16];
  u32 local_868;
  u64 *local_864;
  vram_map_type local_860;
  uint local_85c;
  uint local_858;
  u16 *local_850;
  u8 *tile_base_ptr;
  u8 *map_base_ptr;
  vram_map_type local_83c;
  s32 dx_1;
  s32 edge_x2;
  u64 *local_830;
  s32 dy;
  u8 *tile_widths_y;
  s32 edge_y2;
  u32 inv_dyp;
  uint uStack_81c;
  u32 tiles_x;
  int iStack_814;
  u8 *tile_widths_x;
  int iStack_80c;
  u32 inv_dyp_1;
  u32 tiles_x_1;
  u32 local_800;
  u32 local_7fc;
  u64 _aligned_storage_1 [73];
  u64 _aligned_storage [168];
  
  piVar18 = &__stack_chk_guard;
  uVar4 = bg_layer->bg_control;
  puVar26 = &local_868;
  puVar25 = &local_868;
  puVar16 = _aligned_storage;
  uVar19 = bg_layer->affine_current_x;
  tile_widths_y = (u8 *)render_buffer;
  local_830 = _aligned_storage + 0x20;
  uVar20 = bg_layer->affine_current_y;
  puVar9 = _aligned_storage + 0x62;
  local_83c = bg_layer->vram_map + bg_layer->tile_base;
  edge_y2 = (int)bg_layer->affine_dx;
  dx_1 = (s32)(bg_layer->vram_map + bg_layer->map_base);
  local_850 = bg_layer->palette;
  edge_x2 = (s32)(_aligned_storage + 0x86);
  inv_dyp_1 = (int)bg_layer->affine_dy;
  if (bg_layer->affine_settings_dirty != '\0') {
    render_scanline_update_affine_variables(bg_layer);
  }
  uVar22 = uVar4 & 0x2000;
  if ((uVar4 & 0x2000) == 0) {
    dy = *(int *)((int)&bg_layer->affine_edge_current_x + 4) +
         *(int *)((int)&bg_layer->affine_edge_width_x + 4) +
         (uint)CARRY4(*(uint *)&bg_layer->affine_edge_current_x,
                      *(uint *)&bg_layer->affine_edge_width_x);
    local_830 = (u64 *)(*(uint *)&bg_layer->affine_edge_current_x +
                       *(uint *)&bg_layer->affine_edge_width_x);
    uStack_81c = *(int *)((int)&bg_layer->affine_edge_width_y + 4) +
                 *(int *)((int)&bg_layer->affine_edge_current_y + 4) +
                 (uint)CARRY4(*(uint *)&bg_layer->affine_edge_width_y,
                              *(uint *)&bg_layer->affine_edge_current_y);
    inv_dyp = *(uint *)&bg_layer->affine_edge_width_y + *(uint *)&bg_layer->affine_edge_current_y;
    tiles_x = *(uint *)&bg_layer->affine_edge_step_x + *(uint *)&bg_layer->affine_edge_current_x;
    iStack_814 = *(int *)((int)&bg_layer->affine_edge_step_x + 4) +
                 *(int *)((int)&bg_layer->affine_edge_current_x + 4) +
                 (uint)CARRY4(*(uint *)&bg_layer->affine_edge_step_x,
                              *(uint *)&bg_layer->affine_edge_current_x);
    tile_widths_x =
         (u8 *)(*(uint *)&bg_layer->affine_edge_step_y + *(uint *)&bg_layer->affine_edge_current_y);
    iStack_80c = *(int *)((int)&bg_layer->affine_edge_step_y + 4) +
                 *(int *)((int)&bg_layer->affine_edge_current_y + 4) +
                 (uint)CARRY4(*(uint *)&bg_layer->affine_edge_step_y,
                              *(uint *)&bg_layer->affine_edge_current_y);
    left_edge = *(int *)((int)&bg_layer->affine_edge_current_x + 4);
    iVar21 = *(int *)((int)&bg_layer->affine_edge_current_y + 4);
    if (left_edge <= iVar21) {
      left_edge = iVar21;
    }
    uVar15 = uStack_81c;
    if (dy <= (int)uStack_81c) {
      uVar15 = dy;
    }
    *(u32 *)&bg_layer->affine_edge_current_x = tiles_x;
    *(int *)((int)&bg_layer->affine_edge_current_x + 4) = iStack_814;
    *(u8 **)&bg_layer->affine_edge_current_y = tile_widths_x;
    *(int *)((int)&bg_layer->affine_edge_current_y + 4) = iStack_80c;
    *(undefined8 *)render_visibility = 0;
    *(undefined8 *)(render_visibility + 2) = 0;
    *(undefined8 *)(render_visibility + 4) = 0;
    *(undefined8 *)(render_visibility + 6) = 0;
    if (left_edge < 0) {
      uVar11 = uVar22;
      left_edge = uVar22;
      uVar24 = uVar22;
      if ((int)uVar15 < 0) goto LAB_080ba470;
    }
    else {
      puVar26 = &local_868;
      if (((uint)(0xff < left_edge) | uVar15 >> 0x1f) != 0) goto LAB_080ba470;
      uVar22 = left_edge * edge_y2;
      uVar11 = left_edge * inv_dyp_1;
      uVar24 = left_edge << 1;
    }
    if (0xfe < (int)uVar15) {
      uVar15 = 0xff;
    }
    tiles_x = uVar15;
    edge_y2 = uVar15 - left_edge;
    puVar26 = &local_868;
    if (-1 < edge_y2) {
      local_830 = (u64 *)(int)bg_layer->affine_dx;
      puVar7 = _aligned_storage_1;
      tile_widths_x = (u8 *)(left_edge & 7);
      uVar17 = uVar20 + uVar11;
      local_800 = bg_layer->inv_dyp;
      if (((uint)puVar7 & 8) != 0) {
        puVar7 = _aligned_storage_1 + 1;
      }
      uVar20 = left_edge >> 3;
      local_868 = bg_layer->inv_dxp;
      tiles_x_1 = (u32)(tile_widths_x + edge_x2);
      inv_dyp = uVar19 + uVar22;
      tile_widths_y = tile_widths_y + uVar24;
      inv_dyp_1 = (u32)bg_layer->affine_dy;
      edge_x2 = (s32)puVar7;
      local_7fc = local_868;
      local_7fc = render_scanline_affine_setup_tile_widths(local_830,inv_dyp,edge_y2,puVar7);
      local_868 = local_800;
      local_868 = render_scanline_affine_setup_tile_widths(inv_dyp_1,uVar17,edge_y2,puVar7 + 0x24);
      uVar8 = render_scanline_affine_merge_tile_widths(edge_x2,puVar7 + 0x24,puVar9,local_7fc);
      local_858 = (uint)bg_layer->affine_map_pitch_shift;
      local_85c = (uint)bg_layer->affine_wrap_mask;
      local_864 = local_830;
      local_860 = (vram_map_type)inv_dyp_1;
      local_868 = uVar17;
      render_scanline_affine_setup_map_indexes_normal(puVar9,_aligned_storage + 0x20,uVar8,inv_dyp);
      sVar6 = edge_y2;
      render_scanline_affine_diff_tile_widths(puVar9,uVar8,edge_y2);
      local_864 = (u64 *)sVar6;
      local_868 = inv_dyp_1;
      render_scanline_affine_setup_tile_offsets(puVar16,inv_dyp,uVar17,local_830);
      puVar5 = tile_widths_y;
      local_868 = tiles_x_1;
      local_864 = (u64 *)dx_1;
      local_860 = local_83c;
      render_scanline_affine_render_tiles_normal_normal
                (tile_widths_y,puVar16,puVar9,_aligned_storage + 0x20);
      render_scanline_palette_lookup_8bpp(puVar5,puVar5,local_850,sVar6);
      uVar19 = (int)tiles_x >> 3;
      if (uVar20 <= uVar19) {
        puVar16 = _aligned_storage + 0x87;
        pbVar12 = (byte *)((int)render_visibility + uVar20);
        do {
          puVar30 = (uint *)((int)puVar16 + -4);
          puVar9 = puVar16 + -1;
          puVar16 = puVar16 + 1;
          uVar22 = (*puVar30 | *puVar30 << 4) & 0xf0f0f0f0 |
                   (*(uint *)puVar9 | *(uint *)puVar9 >> 4) & 0xf0f0f0f;
          uVar22 = uVar22 | uVar22 >> 2;
          uVar22 = (uVar22 | uVar22 >> 1) & 0x11111111;
          uVar22 = uVar22 | uVar22 >> 7;
          pbVar13 = pbVar12 + 1;
          *pbVar12 = (byte)uVar22 | (byte)(uVar22 >> 0xe);
          pbVar12 = pbVar13;
        } while ((uint)((int)pbVar13 - (int)render_visibility) <= uVar19);
      }
      *(byte *)((int)render_visibility + uVar20) =
           *(byte *)((int)render_visibility + uVar20) & (byte)(0xff << ((uint)tile_widths_x & 0xff))
      ;
      *(byte *)((int)render_visibility + uVar19) =
           *(byte *)((int)render_visibility + uVar19) & ~(byte)(0xfe << (tiles_x & 7));
      puVar26 = &local_868;
    }
    goto LAB_080ba470;
  }
  iVar21 = (int)bg_layer->affine_dx;
  if ((iVar21 - 0xf801U & 0xffff) < 0xfff) {
    edge_y2 = (s32)bg_layer->affine_dy;
    if (0xffe < (edge_y2 - 0xf801U & 0xffff)) goto LAB_080ba130;
    inv_dyp_1 = (u32)_aligned_storage_1;
    local_868 = bg_layer->inv_dxp;
    tiles_x = bg_layer->inv_dyp;
    if ((inv_dyp_1 & 8) != 0) {
      inv_dyp_1 = (u32)(_aligned_storage_1 + 1);
    }
    inv_dyp = inv_dyp_1 + 0x120;
    tile_widths_x = (u8 *)render_scanline_affine_setup_tile_widths(iVar21,uVar19,0xff);
    local_868 = tiles_x;
    local_868 = render_scanline_affine_setup_tile_widths(edge_y2,uVar20,0xff,inv_dyp);
    inv_dyp_1 = render_scanline_affine_merge_tile_widths(inv_dyp_1,inv_dyp,puVar9,tile_widths_x);
    local_858 = (uint)bg_layer->affine_map_pitch_shift;
    local_85c = (uint)bg_layer->affine_wrap_mask;
    uVar17 = edge_y2;
    local_860 = (vram_map_type)edge_y2;
    local_868 = uVar20;
    local_864 = (u64 *)iVar21;
    render_scanline_affine_setup_map_indexes_normal(puVar9,_aligned_storage + 0x20,inv_dyp_1,uVar19)
    ;
    render_scanline_affine_diff_tile_widths(puVar9,inv_dyp_1,0xff);
    local_864 = (u64 *)0xff;
    local_868 = uVar17;
  }
  else {
    edge_y2 = (s32)bg_layer->affine_dy;
LAB_080ba130:
    memset(puVar9,1,0x100);
    _aligned_storage[130]._0_1_ = 0;
    puVar7 = _aligned_storage + 0x20;
    sVar1 = ((ushort)bg_layer->affine_wrap_mask & (ushort)(uVar19 >> 0xb)) +
            (short)(((uint)bg_layer->affine_wrap_mask & uVar20 >> 0xb) <<
                   bg_layer->affine_map_pitch_shift);
    uVar8 = CONCAT22(sVar1,sVar1);
    in_q8._4_4_ = uVar8;
    in_q8._0_4_ = uVar8;
    in_q8._8_8_ = 0;
    in_q8 = in_q8 & in_q8 << 0x40;
    do {
      *puVar7 = 0;
      puVar7[1] = in_q8._8_8_;
      puVar7 = puVar7 + 2;
    } while (_aligned_storage + 0x60 != puVar7);
    local_864 = (u64 *)0x100;
    local_868 = edge_y2;
  }
  render_scanline_affine_setup_tile_offsets(puVar16,uVar19,uVar20,iVar21);
  puVar5 = tile_widths_y;
  puVar29 = (undefined4 *)edge_x2;
  local_868 = edge_x2;
  local_864 = (u64 *)dx_1;
  local_860 = local_83c;
  render_scanline_affine_render_tiles_normal_normal(tile_widths_y,puVar16,puVar9,local_830);
  render_scanline_palette_lookup_8bpp(puVar5,puVar5,local_850,0xff);
  puVar7 = _aligned_storage + 0x8a;
  puVar23 = _aligned_storage + 0x92;
  auVar46 = SIMDExpandImmediate(0,0xe,0xf);
  auVar33 = SIMDExpandImmediate(0,0xe,0xf0);
  puVar27 = _aligned_storage + 0x8e;
  puVar9 = _aligned_storage + 0x96;
  puVar2 = (undefined4 *)0x3c0;
  puVar3 = (undefined4 *)0x3d0;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar7;
    puVar28 = (undefined4 *)((int)puVar7 + 4);
    *puVar3 = *puVar28;
    puVar7 = (u64 *)(puVar28 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)0x3c8;
  puVar3 = (undefined4 *)0x3d8;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar7;
    puVar28 = (undefined4 *)((int)puVar7 + 4);
    *puVar3 = *puVar28;
    puVar7 = (u64 *)(puVar28 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar7 = puVar16 + 0x9a;
  puVar10 = puVar16 + 0x9e;
  puVar16 = puVar16 + 0xa2;
  puVar2 = (undefined4 *)0x380;
  puVar3 = (undefined4 *)0x390;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar23;
    puVar28 = (undefined4 *)((int)puVar23 + 4);
    *puVar3 = *puVar28;
    puVar23 = (u64 *)(puVar28 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)0x388;
  puVar3 = (undefined4 *)0x398;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar23;
    puVar28 = (undefined4 *)((int)puVar23 + 4);
    *puVar3 = *puVar28;
    puVar23 = (u64 *)(puVar28 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar14 = (undefined8 *)((int)render_visibility + 0x10);
  puVar2 = (undefined4 *)0x3a0;
  puVar3 = (undefined4 *)0x3b0;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar27;
    puVar28 = (undefined4 *)((int)puVar27 + 4);
    *puVar3 = *puVar28;
    puVar27 = (u64 *)(puVar28 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)0x3a8;
  puVar3 = (undefined4 *)0x3b8;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar27;
    puVar28 = (undefined4 *)((int)puVar27 + 4);
    *puVar3 = *puVar28;
    puVar27 = (u64 *)(puVar28 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)0x3e0;
  puVar3 = (undefined4 *)0x3f0;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *puVar29;
    puVar29 = puVar29 + 1;
    *puVar3 = *puVar29;
    puVar29 = puVar29 + 1;
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)0x3e8;
  puVar3 = (undefined4 *)0x3f8;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *puVar29;
    puVar29 = puVar29 + 1;
    *puVar3 = *puVar29;
    puVar29 = puVar29 + 1;
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar35 = VectorShiftRight(in_q12,4);
  auVar37 = VectorShiftLeft(in_q13,4,0x20,0);
  auVar39 = VectorShiftRight(in_q8,4);
  auVar34 = VectorShiftLeft(in_q9,4,0x20,0);
  auVar32 = VectorShiftRight(in_q10,4);
  auVar43 = VectorShiftLeft(in_q11,4,0x20,0);
  auVar41 = VectorShiftLeft(in_q15,4,0x20,0);
  auVar36 = (auVar35 | in_q12) & auVar46;
  auVar32 = auVar32 | in_q10;
  auVar37 = (auVar37 | in_q13) & auVar33;
  in_q11 = auVar43 | in_q11;
  auVar42 = VectorShiftRight(in_q14,4);
  auVar35 = (auVar39 | in_q8) & auVar46;
  auVar34 = (auVar34 | in_q9) & auVar33;
  auVar41 = auVar41 | in_q15;
  puVar2 = (undefined4 *)0x3c0;
  puVar3 = (undefined4 *)0x3d0;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar7;
    puVar29 = (undefined4 *)((int)puVar7 + 4);
    *puVar3 = *puVar29;
    puVar7 = (u64 *)(puVar29 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)0x3c8;
  puVar3 = (undefined4 *)0x3d8;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar7;
    puVar29 = (undefined4 *)((int)puVar7 + 4);
    *puVar3 = *puVar29;
    puVar7 = (u64 *)(puVar29 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar32 = auVar32 & auVar46;
  auVar36 = auVar36 | auVar37;
  in_q11 = in_q11 & auVar33;
  auVar37 = auVar42 | in_q14;
  puVar2 = (undefined4 *)0x3e0;
  puVar3 = (undefined4 *)0x3f0;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar9;
    puVar29 = (undefined4 *)((int)puVar9 + 4);
    *puVar3 = *puVar29;
    puVar9 = (u64 *)(puVar29 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)0x3e8;
  puVar3 = (undefined4 *)0x3f8;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar9;
    puVar29 = (undefined4 *)((int)puVar9 + 4);
    *puVar3 = *puVar29;
    puVar9 = (u64 *)(puVar29 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar35 = auVar35 | auVar34;
  auVar41 = auVar41 & auVar33;
  auVar34 = VectorShiftRight(auVar36,2);
  auVar32 = auVar32 | in_q11;
  auVar37 = auVar37 & auVar46;
  puVar2 = (undefined4 *)0x3a0;
  puVar3 = (undefined4 *)0x3b0;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar10;
    puVar29 = (undefined4 *)((int)puVar10 + 4);
    *puVar3 = *puVar29;
    puVar10 = (u64 *)(puVar29 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)0x3a8;
  puVar3 = (undefined4 *)0x3b8;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar10;
    puVar29 = (undefined4 *)((int)puVar10 + 4);
    *puVar3 = *puVar29;
    puVar10 = (u64 *)(puVar29 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(longlong *)((int)puVar25 + 0x18) = auVar35._0_8_;
  *(longlong *)((int)puVar25 + 0x20) = auVar35._8_8_;
  auVar35 = SIMDExpandImmediate(0,0xe,0x11);
  auVar34 = auVar34 | auVar36;
  auVar36 = auVar37 | auVar41;
  puVar2 = (undefined4 *)0x380;
  puVar3 = (undefined4 *)0x390;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar16;
    puVar29 = (undefined4 *)((int)puVar16 + 4);
    *puVar3 = *puVar29;
    puVar16 = (u64 *)(puVar29 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)0x388;
  puVar3 = (undefined4 *)0x398;
  lVar31 = 2;
  while( true ) {
    *puVar2 = *(undefined4 *)puVar16;
    puVar29 = (undefined4 *)((int)puVar16 + 4);
    *puVar3 = *puVar29;
    puVar16 = (u64 *)(puVar29 + 1);
    lVar31 = lVar31 + -1;
    if (lVar31 == 0) break;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar40 = VectorShiftLeft(in_q15,4,0x20,0);
  auVar39 = VectorShiftRight(auVar34,1);
  auVar38 = VectorShiftRight(in_q14,4);
  auVar34 = (auVar39 | auVar34) & auVar35;
  auVar39 = VectorShiftRight(auVar34,7);
  auVar39 = auVar39 | auVar34;
  auVar40 = (auVar40 | in_q15) & auVar33 | (auVar38 | in_q14) & auVar46;
  auVar49 = VectorShiftLeft(in_q13,4,0x20,0);
  auVar48 = VectorShiftRight(auVar39,0xe);
  auVar34 = VectorShiftRight(auVar36,2);
  auVar38 = VectorShiftRight(auVar43,4);
  auVar45 = VectorShiftRight(auVar34 | auVar36,1);
  auVar45 = (auVar45 | auVar34 | auVar36) & auVar35;
  auVar38 = (auVar49 | in_q13) & auVar33 | (auVar38 | auVar43) & auVar46;
  auVar49 = VectorShiftLeft(auVar42,4,0x20,0);
  auVar34 = VectorShiftRight(in_q11,4);
  auVar36 = VectorShiftRight(auVar45,7);
  auVar36 = auVar36 | auVar45;
  auVar43 = VectorShiftRight(auVar36,0xe);
  auVar42 = (auVar49 | auVar42) & auVar33 | (auVar34 | in_q11) & auVar46;
  auVar45 = VectorShiftLeft(auVar37,4,0x20,0);
  auVar43._0_8_ = VectorCopyNarrow(auVar43 | auVar36,4);
  auVar43._8_8_ = VectorCopyNarrow(auVar48 | auVar39,4);
  auVar39 = VectorShiftRight(auVar32,2);
  auVar34 = VectorShiftRight(auVar40,2);
  auVar36 = VectorShiftRight(auVar41,4);
  auVar34 = auVar34 | auVar40;
  auVar40 = VectorShiftRight(auVar39 | auVar32,1);
  auVar36 = (auVar45 | auVar37) & auVar33 | (auVar36 | auVar41) & auVar46;
  auVar33 = VectorShiftRight(auVar38,2);
  auVar37 = (auVar40 | auVar39 | auVar32) & auVar35;
  auVar48 = VectorShiftRight(auVar36,2);
  auVar33 = auVar33 | auVar38;
  auVar46 = VectorShiftRight(*(undefined (*) [16])((int)puVar25 + 0x18),2);
  auVar39 = VectorShiftRight(auVar37,7);
  auVar41 = VectorShiftRight(auVar34,1);
  auVar48 = auVar48 | auVar36;
  auVar36 = VectorShiftRight(auVar33,1);
  auVar46 = auVar46 | *(undefined (*) [16])((int)puVar25 + 0x18);
  auVar32 = VectorShiftRight(auVar42,2);
  auVar39 = auVar39 | auVar37;
  auVar32 = auVar32 | auVar42;
  auVar38 = VectorShiftRight(auVar46,1);
  auVar45 = VectorShiftRight(auVar39,0xe);
  auVar42 = (auVar41 | auVar34) & auVar35;
  auVar36 = (auVar36 | auVar33) & auVar35;
  auVar41 = VectorShiftRight(auVar32,1);
  auVar37 = VectorShiftRight(auVar48,1);
  auVar33 = VectorShiftRight(auVar42,7);
  auVar40 = (auVar38 | auVar46) & auVar35;
  auVar34 = VectorShiftRight(auVar36,7);
  auVar33 = auVar33 | auVar42;
  auVar32 = (auVar41 | auVar32) & auVar35;
  auVar46 = VectorShiftRight(auVar40,7);
  auVar35 = (auVar37 | auVar48) & auVar35;
  auVar34 = auVar34 | auVar36;
  auVar38 = VectorShiftRight(auVar33,0xe);
  auVar37 = VectorShiftRight(auVar32,7);
  auVar46 = auVar46 | auVar40;
  auVar36 = VectorShiftRight(auVar35,7);
  auVar37 = auVar37 | auVar32;
  auVar40 = VectorShiftRight(auVar46,0xe);
  auVar36 = auVar36 | auVar35;
  auVar42 = VectorShiftRight(auVar34,0xe);
  auVar41 = VectorShiftRight(auVar37,0xe);
  auVar35 = VectorShiftRight(auVar36,0xe);
  auVar32._0_8_ = VectorCopyNarrow(auVar45 | auVar39,4);
  auVar32._8_8_ = VectorCopyNarrow(auVar40 | auVar46,4);
  uVar44 = VectorCopyNarrow(auVar43,2);
  uVar47 = VectorCopyNarrow(auVar32,2);
  auVar33._0_8_ = VectorCopyNarrow(auVar38 | auVar33,4);
  auVar33._8_8_ = VectorCopyNarrow(auVar42 | auVar34,4);
  *(undefined8 *)render_visibility = uVar44;
  *(undefined8 *)((int)render_visibility + 8) = uVar47;
  auVar46._0_8_ = VectorCopyNarrow(auVar41 | auVar37,4);
  auVar46._8_8_ = VectorCopyNarrow(auVar35 | auVar36,4);
  uVar44 = VectorCopyNarrow(auVar33,2);
  uVar47 = VectorCopyNarrow(auVar46,2);
  *puVar14 = uVar44;
  puVar14[1] = uVar47;
  puVar26 = puVar25;
LAB_080ba470:
  if (*(int *)((int)puVar26 + 0x7fc) == *piVar18) {
                    /* WARNING: Could not recover jumptable at 0x080ba4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)puVar26 + 0x864))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


