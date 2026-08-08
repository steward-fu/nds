/*
 * Ghidra decompilation
 *
 * Function : render_scanline_bitmap_8bpp
 * Address  : 080445c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_bitmap_8bpp
               (video_2d_bg_layer_struct *bg_layer,u16 *render_buffer,u32 *render_visibility,
               u32 line)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  u32 wrap_mask_x;
  uint uVar6;
  u32 map_pitch_shift;
  undefined4 *puVar7;
  s32 edge_x1;
  int iVar8;
  s32 edge_y2;
  u8 *puVar9;
  u32 pixel_2;
  s32 right_edge_1;
  uint uVar10;
  u32 uVar11;
  u32 pixel;
  undefined4 *puVar12;
  s32 left_edge;
  s32 width;
  int iVar13;
  s32 dy;
  byte *pbVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  u32 pixel_1;
  int iVar17;
  s32 right_edge;
  u32 block_visibility;
  u32 block_visibility_1;
  int iVar18;
  s32 source_x;
  uint uVar19;
  s32 pixel_x;
  uint uVar20;
  undefined4 *puVar21;
  u16 *puVar22;
  u32 right_block;
  int iVar23;
  s32 source_y;
  vram_map_type puVar24;
  u8 *pixel_ptr;
  u32 right_block_1;
  u16 *puVar25;
  u16 *tile_palette_ptr;
  int d;
  s32 dx;
  uint uVar26;
  u32 wrap_mask_y;
  s32 edge_y1;
  undefined4 *puVar27;
  s32 left_edge_1;
  undefined *puVar28;
  undefined *puVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  int iVar32;
  u32 pixel_3;
  u32 block;
  byte *pbVar33;
  longlong lVar34;
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined in_q8 [16];
  undefined auVar45 [16];
  s64 sVar46;
  undefined in_q9 [16];
  undefined in_q10 [16];
  undefined in_q11 [16];
  undefined auVar47 [16];
  undefined in_q12 [16];
  undefined auVar48 [16];
  undefined8 uVar49;
  undefined in_q13 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined8 uVar52;
  undefined in_q14 [16];
  undefined auVar53 [16];
  undefined in_q15 [16];
  undefined auVar54 [16];
  int local_1a0;
  s32 edge_x2;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_174;
  u8 pixel_visibility_buffer [256];
  int local_6c;
  
  d = (int)bg_layer->affine_dx;
  iVar13 = (int)bg_layer->affine_dy;
  uVar26 = (uint)bg_layer->bitmap_wrap_mask_y;
  puVar28 = &stack0xfffffe30;
  uVar6 = (uint)bg_layer->bitmap_pitch_shift;
  puVar24 = bg_layer->vram_map;
  puVar25 = bg_layer->palette;
  uVar11 = bg_layer->bitmap_base;
  iVar18 = bg_layer->affine_current_x;
  iVar23 = bg_layer->affine_current_y;
  puVar5 = (undefined4 *)(uint)bg_layer->bitmap_wrap_mask_x;
  local_6c = __stack_chk_guard;
  if (d == 0x100 && iVar13 == 0) {
    uVar10 = iVar23 >> 8;
    uVar20 = iVar18 >> 8;
    if ((bg_layer->bg_control & 0x2000) == 0) {
      *(undefined8 *)render_visibility = 0;
      *(undefined8 *)(render_visibility + 2) = 0;
      *(undefined8 *)(render_visibility + 4) = 0;
      *(undefined8 *)(render_visibility + 6) = 0;
      puVar29 = &stack0xfffffe30;
      if (((uint)(uVar26 < uVar10) | uVar10 >> 0x1f) == 0) {
        uVar26 = (int)puVar5 - uVar20;
        uVar19 = -uVar20 & ~((int)-uVar20 >> 0x1f);
        if (0xfe < (int)uVar26) {
          uVar26 = 0xff;
        }
        puVar5 = (undefined4 *)(uVar19 & 7);
        puVar29 = &stack0xfffffe30;
        if (-1 < (int)(uVar26 - uVar19)) {
          pbVar14 = (byte *)((int)&uStack_174 + 3 + (int)puVar5);
          puVar22 = render_buffer + uVar19;
          pixel_ptr = puVar24 + uVar11 + (uVar10 << uVar6) + uVar20 + uVar19;
          do {
            pixel_ptr = pixel_ptr + 1;
            bVar3 = *pixel_ptr;
            pbVar14 = pbVar14 + 1;
            *pbVar14 = bVar3;
            *puVar22 = puVar25[bVar3];
            puVar22 = puVar22 + 1;
            pixel_ptr = pixel_ptr;
          } while (pixel_visibility_buffer + (int)puVar5 + (uVar26 - uVar19) != pbVar14);
          if (uVar19 >> 3 <= uVar26 >> 3) {
            puVar9 = pixel_visibility_buffer;
            pbVar14 = (byte *)((int)render_visibility + (uVar19 >> 3));
            do {
              puVar9 = puVar9 + 8;
              uVar6 = (*(uint *)(puVar9 + -4) | *(uint *)(puVar9 + -4) << 4) & 0xf0f0f0f0 |
                      (*(uint *)(puVar9 + -8) | *(uint *)(puVar9 + -8) >> 4) & 0xf0f0f0f;
              uVar6 = uVar6 | uVar6 >> 2;
              uVar6 = (uVar6 | uVar6 >> 1) & 0x11111111;
              uVar6 = uVar6 | uVar6 >> 7;
              pbVar33 = pbVar14 + 1;
              *pbVar14 = (byte)uVar6 | (byte)(uVar6 >> 0xe);
              pbVar14 = pbVar33;
            } while ((uint)((int)pbVar33 - (int)render_visibility) <= uVar26 >> 3);
          }
          uVar6 = uVar26 + 7;
          if (-1 < (int)uVar26) {
            uVar6 = uVar26;
          }
          uVar10 = uVar26 & 7;
          if ((int)uVar26 < 1) {
            uVar10 = -(-uVar26 & 7);
          }
          puVar5 = (undefined4 *)
                   ((uint)*(byte *)((int)render_visibility + ((int)uVar19 >> 3)) &
                   0xff << (int)puVar5);
          *(char *)((int)render_visibility + ((int)uVar19 >> 3)) = (char)puVar5;
          *(byte *)((int)render_visibility + ((int)uVar6 >> 3)) =
               *(byte *)((int)render_visibility + ((int)uVar6 >> 3)) &
               ~(byte)(0xfe << (uVar10 & 0xff));
          puVar29 = &stack0xfffffe30;
        }
      }
      goto LAB_08044928;
    }
    pbVar14 = (byte *)((int)&uStack_174 + 3);
    do {
      uVar19 = (uint)puVar5 & uVar20;
      uVar20 = uVar19 + 1;
      bVar3 = puVar24[uVar11 + ((uVar26 & uVar10) << uVar6) + uVar19];
      pbVar14 = pbVar14 + 1;
      *pbVar14 = bVar3;
      *render_buffer = puVar25[bVar3];
      render_buffer = render_buffer + 1;
    } while (pixel_visibility_buffer + 0xff != pbVar14);
LAB_08044690:
    puVar30 = (undefined4 *)pixel_visibility_buffer;
    puVar7 = (undefined4 *)(pixel_visibility_buffer + 0x20);
    puVar21 = (undefined4 *)(pixel_visibility_buffer + 0x60);
    auVar51 = SIMDExpandImmediate(0,0xe,0xf);
    auVar36 = SIMDExpandImmediate(0,0xe,0xf0);
    puVar15 = (undefined4 *)(pixel_visibility_buffer + 0x40);
    puVar5 = (undefined4 *)(pixel_visibility_buffer + 0x80);
    puVar1 = (undefined4 *)0x3c0;
    puVar2 = (undefined4 *)0x3d0;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x3c8;
    puVar2 = (undefined4 *)0x3d8;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar27 = (undefined4 *)(puVar28 + 0x100);
    puVar7 = (undefined4 *)(puVar28 + 0x120);
    puVar12 = (undefined4 *)(puVar28 + 0x140);
    puVar1 = (undefined4 *)0x380;
    puVar2 = (undefined4 *)0x390;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar21;
      puVar21 = puVar21 + 1;
      *puVar2 = *puVar21;
      puVar21 = puVar21 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x388;
    puVar2 = (undefined4 *)0x398;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar21;
      puVar21 = puVar21 + 1;
      *puVar2 = *puVar21;
      puVar21 = puVar21 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x3a0;
    puVar2 = (undefined4 *)0x3b0;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar15;
      puVar15 = puVar15 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x3a8;
    puVar2 = (undefined4 *)0x3b8;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar15;
      puVar15 = puVar15 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x3e0;
    puVar2 = (undefined4 *)0x3f0;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar30;
      puVar30 = puVar30 + 1;
      *puVar2 = *puVar30;
      puVar30 = puVar30 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x3e8;
    puVar2 = (undefined4 *)0x3f8;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar30;
      puVar30 = puVar30 + 1;
      *puVar2 = *puVar30;
      puVar30 = puVar30 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar31 = *(undefined8 **)(puVar28 + 0x10);
    auVar38 = VectorShiftLeft(in_q13,4,0x20,0);
    auVar41 = VectorShiftRight(in_q12,4);
    auVar43 = VectorShiftLeft(in_q9,4,0x20,0);
    auVar37 = VectorShiftRight(in_q8,4);
    puVar16 = puVar31 + 2;
    auVar35 = VectorShiftLeft(in_q11,4,0x20,0);
    auVar48 = VectorShiftRight(in_q10,4);
    auVar45 = VectorShiftRight(in_q14,4);
    auVar39 = (auVar38 | in_q13) & auVar36;
    auVar35 = auVar35 | in_q11;
    auVar41 = (auVar41 | in_q12) & auVar51;
    auVar47 = VectorShiftLeft(in_q15,4,0x20,0);
    auVar38 = (auVar43 | in_q9) & auVar36;
    auVar43 = auVar48 | in_q10;
    auVar37 = (auVar37 | in_q8) & auVar51;
    auVar45 = auVar45 | in_q14;
    puVar1 = (undefined4 *)0x3c0;
    puVar2 = (undefined4 *)0x3d0;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar27;
      puVar27 = puVar27 + 1;
      *puVar2 = *puVar27;
      puVar27 = puVar27 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x3c8;
    puVar2 = (undefined4 *)0x3d8;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar27;
      puVar27 = puVar27 + 1;
      *puVar2 = *puVar27;
      puVar27 = puVar27 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    auVar35 = auVar35 & auVar36;
    auVar39 = auVar39 | auVar41;
    auVar41 = auVar47 | in_q15;
    puVar1 = (undefined4 *)0x3e0;
    puVar2 = (undefined4 *)0x3f0;
    lVar34 = 2;
    puVar15 = puVar5;
    while( true ) {
      *puVar1 = *puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar15;
      puVar15 = puVar15 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x3e8;
    puVar2 = (undefined4 *)0x3f8;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar15;
      puVar15 = puVar15 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    auVar43 = auVar43 & auVar51;
    auVar38 = auVar38 | auVar37;
    auVar45 = auVar45 & auVar51;
    auVar37 = VectorShiftRight(auVar39,2);
    auVar41 = auVar41 & auVar36;
    auVar35 = auVar35 | auVar43;
    puVar1 = (undefined4 *)0x3a0;
    puVar2 = (undefined4 *)0x3b0;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x3a8;
    puVar2 = (undefined4 *)0x3b8;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(longlong *)(puVar28 + 0x10) = auVar38._0_8_;
    *(longlong *)(puVar28 + 0x18) = auVar38._8_8_;
    auVar38 = SIMDExpandImmediate(0,0xe,0x11);
    auVar37 = auVar37 | auVar39;
    auVar39 = auVar41 | auVar45;
    puVar1 = (undefined4 *)0x380;
    puVar2 = (undefined4 *)0x390;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x388;
    puVar2 = (undefined4 *)0x398;
    lVar34 = 2;
    while( true ) {
      *puVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      lVar34 = lVar34 + -1;
      if (lVar34 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    auVar44 = VectorShiftLeft(in_q15,4,0x20,0);
    auVar40 = VectorShiftRight(auVar37,1);
    auVar42 = VectorShiftRight(in_q14,4);
    auVar37 = (auVar40 | auVar37) & auVar38;
    auVar40 = VectorShiftRight(auVar37,7);
    auVar40 = auVar40 | auVar37;
    auVar44 = (auVar44 | in_q15) & auVar36 | (auVar42 | in_q14) & auVar51;
    auVar54 = VectorShiftLeft(in_q13,4,0x20,0);
    auVar53 = VectorShiftRight(auVar40,0xe);
    auVar37 = VectorShiftRight(auVar39,2);
    auVar42 = VectorShiftRight(auVar48,4);
    auVar50 = VectorShiftRight(auVar37 | auVar39,1);
    auVar50 = (auVar50 | auVar37 | auVar39) & auVar38;
    auVar42 = (auVar54 | in_q13) & auVar36 | (auVar42 | auVar48) & auVar51;
    auVar54 = VectorShiftLeft(auVar47,4,0x20,0);
    auVar37 = VectorShiftRight(auVar43,4);
    auVar39 = VectorShiftRight(auVar50,7);
    auVar39 = auVar39 | auVar50;
    auVar48 = VectorShiftRight(auVar39,0xe);
    auVar47 = (auVar54 | auVar47) & auVar36 | (auVar37 | auVar43) & auVar51;
    auVar50 = VectorShiftLeft(auVar41,4,0x20,0);
    auVar48._0_8_ = VectorCopyNarrow(auVar48 | auVar39,4);
    auVar48._8_8_ = VectorCopyNarrow(auVar53 | auVar40,4);
    auVar43 = VectorShiftRight(auVar35,2);
    auVar37 = VectorShiftRight(auVar44,2);
    auVar39 = VectorShiftRight(auVar45,4);
    auVar37 = auVar37 | auVar44;
    auVar40 = VectorShiftRight(auVar43 | auVar35,1);
    auVar39 = (auVar50 | auVar41) & auVar36 | (auVar39 | auVar45) & auVar51;
    auVar36 = VectorShiftRight(auVar42,2);
    auVar41 = (auVar40 | auVar43 | auVar35) & auVar38;
    auVar50 = VectorShiftRight(auVar39,2);
    auVar36 = auVar36 | auVar42;
    auVar51 = VectorShiftRight(*(undefined (*) [16])(puVar28 + 0x10),2);
    auVar43 = VectorShiftRight(auVar41,7);
    auVar45 = VectorShiftRight(auVar37,1);
    auVar50 = auVar50 | auVar39;
    auVar39 = VectorShiftRight(auVar36,1);
    auVar51 = auVar51 | *(undefined (*) [16])(puVar28 + 0x10);
    auVar35 = VectorShiftRight(auVar47,2);
    auVar43 = auVar43 | auVar41;
    auVar35 = auVar35 | auVar47;
    auVar40 = VectorShiftRight(auVar51,1);
    auVar44 = VectorShiftRight(auVar43,0xe);
    auVar47 = (auVar45 | auVar37) & auVar38;
    auVar39 = (auVar39 | auVar36) & auVar38;
    auVar45 = VectorShiftRight(auVar35,1);
    auVar41 = VectorShiftRight(auVar50,1);
    auVar36 = VectorShiftRight(auVar47,7);
    auVar42 = (auVar40 | auVar51) & auVar38;
    auVar37 = VectorShiftRight(auVar39,7);
    auVar36 = auVar36 | auVar47;
    auVar35 = (auVar45 | auVar35) & auVar38;
    auVar51 = VectorShiftRight(auVar42,7);
    auVar38 = (auVar41 | auVar50) & auVar38;
    auVar37 = auVar37 | auVar39;
    auVar40 = VectorShiftRight(auVar36,0xe);
    auVar41 = VectorShiftRight(auVar35,7);
    auVar51 = auVar51 | auVar42;
    auVar39 = VectorShiftRight(auVar38,7);
    auVar41 = auVar41 | auVar35;
    auVar42 = VectorShiftRight(auVar51,0xe);
    auVar39 = auVar39 | auVar38;
    auVar47 = VectorShiftRight(auVar37,0xe);
    auVar45 = VectorShiftRight(auVar41,0xe);
    auVar38 = VectorShiftRight(auVar39,0xe);
    auVar35._0_8_ = VectorCopyNarrow(auVar44 | auVar43,4);
    auVar35._8_8_ = VectorCopyNarrow(auVar42 | auVar51,4);
    uVar49 = VectorCopyNarrow(auVar48,2);
    uVar52 = VectorCopyNarrow(auVar35,2);
    auVar36._0_8_ = VectorCopyNarrow(auVar40 | auVar36,4);
    auVar36._8_8_ = VectorCopyNarrow(auVar47 | auVar37,4);
    *puVar31 = uVar49;
    puVar31[1] = uVar52;
    auVar51._0_8_ = VectorCopyNarrow(auVar45 | auVar41,4);
    auVar51._8_8_ = VectorCopyNarrow(auVar38 | auVar39,4);
    uVar49 = VectorCopyNarrow(auVar36,2);
    uVar52 = VectorCopyNarrow(auVar51,2);
    *puVar16 = uVar49;
    puVar16[1] = uVar52;
    puVar29 = puVar28;
  }
  else {
    if ((bg_layer->bg_control & 0x2000) != 0) {
      pbVar14 = (byte *)((int)&uStack_174 + 3);
      do {
        uVar10 = iVar23 >> 8;
        uVar20 = iVar18 >> 8;
        iVar23 = iVar23 + iVar13;
        iVar18 = iVar18 + d;
        bVar3 = puVar24[((uint)puVar5 & uVar20) + ((uVar26 & uVar10) << uVar6) + uVar11];
        pbVar14 = pbVar14 + 1;
        *pbVar14 = bVar3;
        *render_buffer = puVar25[bVar3];
        render_buffer = render_buffer + 1;
      } while (pbVar14 != pixel_visibility_buffer + 0xff);
      goto LAB_08044690;
    }
    if (bg_layer->affine_settings_dirty != '\0') {
      video_2d_bg_layer_affine_setup_edges
                (iVar18,d,(int)puVar5 * 0x100 + 0xff,(int)bg_layer->affine_dmx,
                 &bg_layer->affine_edge_current_x,&bg_layer->affine_edge_step_x,
                 &bg_layer->affine_edge_width_x);
      video_2d_bg_layer_affine_setup_edges
                (bg_layer->affine_current_y,(int)bg_layer->affine_dy,uVar26 * 0x100 + 0xff,
                 (int)bg_layer->affine_dmy,&bg_layer->affine_edge_current_y,
                 &bg_layer->affine_edge_step_y,&bg_layer->affine_edge_width_y);
      bg_layer->affine_settings_dirty = '\0';
    }
    iVar17 = *(int *)((int)&bg_layer->affine_edge_current_x + 4);
    uVar26 = *(uint *)&bg_layer->affine_edge_current_y;
    left_edge = *(int *)((int)&bg_layer->affine_edge_current_y + 4);
    right_edge = *(int *)((int)&bg_layer->affine_edge_width_x + 4) + iVar17 +
                 (uint)CARRY4(*(uint *)&bg_layer->affine_edge_width_x,
                              *(uint *)&bg_layer->affine_edge_current_x);
    uStack_174 = *(undefined4 *)((int)&bg_layer->affine_edge_step_y + 4);
    puVar5 = (undefined4 *)(*(uint *)&bg_layer->affine_edge_width_y + uVar26);
    iVar8 = *(int *)((int)&bg_layer->affine_edge_width_y + 4) + left_edge +
            (uint)CARRY4(*(uint *)&bg_layer->affine_edge_width_y,uVar26);
    uVar49 = VectorAdd(bg_layer->affine_edge_step_x,bg_layer->affine_edge_current_x,8);
    sVar46 = VectorAdd(bg_layer->affine_edge_step_y,bg_layer->affine_edge_current_y,8);
    if (left_edge < iVar17) {
      left_edge = iVar17;
    }
    bg_layer->affine_edge_current_y = sVar46;
    local_188 = (undefined4)uVar49;
    uStack_184 = (undefined4)((ulonglong)uVar49 >> 0x20);
    if (iVar8 < right_edge) {
      right_edge = iVar8;
    }
    *(undefined4 *)&bg_layer->affine_edge_current_x = local_188;
    *(undefined4 *)((int)&bg_layer->affine_edge_current_x + 4) = uStack_184;
    *(undefined8 *)render_visibility = 0;
    *(undefined8 *)(render_visibility + 2) = 0;
    *(undefined8 *)(render_visibility + 4) = 0;
    *(undefined8 *)(render_visibility + 6) = 0;
    puVar29 = &stack0xfffffe30;
    if (left_edge <= right_edge) {
      if (left_edge < 0) {
        puVar29 = &stack0xfffffe30;
        if (-1 < right_edge) {
          left_edge = 0;
          iVar8 = 0;
          local_1a0 = 0;
          uVar26 = 0;
          puVar9 = pixel_visibility_buffer;
          bVar3 = 0xff;
          iVar17 = left_edge;
          iVar32 = left_edge;
          goto LAB_08044af4;
        }
      }
      else {
        puVar29 = &stack0xfffffe30;
        if (((uint)(0xff < left_edge) | (uint)right_edge >> 0x1f) == 0) {
          uVar26 = (uint)left_edge >> 3;
          bVar3 = (byte)(0xff << (left_edge & 7U));
          local_1a0 = left_edge * iVar13;
          puVar9 = pixel_visibility_buffer + (left_edge & 7U);
          iVar8 = left_edge << 1;
          iVar17 = left_edge >> 3;
          iVar32 = left_edge * d;
LAB_08044af4:
          iVar18 = iVar18 + iVar32;
          if (0xfe < right_edge) {
            right_edge = 0xff;
          }
          iVar23 = iVar23 + local_1a0;
          if (-1 < right_edge - left_edge) {
            pbVar14 = puVar9 + -1;
            puVar22 = (u16 *)((int)render_buffer + iVar8);
            do {
              iVar8 = iVar23 >> 8;
              iVar32 = iVar18 >> 8;
              iVar23 = iVar23 + iVar13;
              iVar18 = iVar18 + d;
              bVar4 = puVar24[(iVar8 << uVar6) + iVar32 + uVar11];
              pbVar14 = pbVar14 + 1;
              *pbVar14 = bVar4;
              *puVar22 = puVar25[bVar4];
              puVar22 = puVar22 + 1;
            } while (puVar9 + (right_edge - left_edge) != pbVar14);
          }
          if (uVar26 <= (uint)right_edge >> 3) {
            puVar9 = pixel_visibility_buffer;
            pbVar14 = (byte *)((int)render_visibility + uVar26);
            do {
              puVar9 = puVar9 + 8;
              uVar6 = (*(uint *)(puVar9 + -4) | *(uint *)(puVar9 + -4) << 4) & 0xf0f0f0f0 |
                      (*(uint *)(puVar9 + -8) | *(uint *)(puVar9 + -8) >> 4) & 0xf0f0f0f;
              uVar6 = uVar6 | uVar6 >> 2;
              uVar6 = (uVar6 | uVar6 >> 1) & 0x11111111;
              uVar6 = uVar6 | uVar6 >> 7;
              pbVar33 = pbVar14 + 1;
              *pbVar14 = (byte)uVar6 | (byte)(uVar6 >> 0xe);
              pbVar14 = pbVar33;
            } while ((uint)((int)pbVar33 - (int)render_visibility) <= (uint)right_edge >> 3);
          }
          puVar5 = (undefined4 *)0xfe;
          *(byte *)((int)render_visibility + iVar17) =
               bVar3 & *(byte *)((int)render_visibility + iVar17);
          *(byte *)((int)render_visibility + (right_edge >> 3)) =
               *(byte *)((int)render_visibility + (right_edge >> 3)) &
               ~(byte)(0xfe << (right_edge & 7U));
          if (local_6c == __stack_chk_guard) {
            fflush(stdout);
            return;
          }
          goto LAB_08044e34;
        }
      }
    }
  }
LAB_08044928:
  if (*(int *)(puVar29 + 0x164) == **(int **)(puVar29 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x08044958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar29 + 0x1cc))();
    return;
  }
LAB_08044e34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


