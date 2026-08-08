/*
 * Ghidra decompilation
 *
 * Function : render_scanline_2d
 * Address  : 0804b700
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 render_scanline_2d(video_2d_struct *video_2d,u8 *dest,u32 line,
                      capture_settings_struct *capture_settings,u32 hires_mode)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  ushort uVar6;
  int iVar7;
  uint uVar8;
  u32 blend_mode;
  u32 uVar9;
  u8 uVar10;
  int iVar11;
  u16 *puVar12;
  uint uVar13;
  u32 inhibit_mask;
  u16 (*layer_buffers) [272];
  u8 *puVar14;
  u16 *source_capture_00;
  uint uVar15;
  u32 (*layer_visibility) [8];
  u32 *color_effects_disable;
  u8 *pixel_alpha_obj;
  u32 color_effects_flags;
  u32 display_control_1;
  u32 line_offset;
  u32 *puVar16;
  u32 display_control_2;
  u32 display_control_3;
  uint uVar17;
  u8 *aligned_storage_base;
  u8 *aligned_storage;
  u16 *dest_hires_ptr;
  u16 *dest_ptr;
  u32 uVar18;
  u16 *obj_layer_scanline_ptr;
  u16 *bg_layer_scanline_ptr;
  u16 *source_capture;
  int iVar19;
  u32 uVar20;
  uint uVar21;
  u16 *source_capture_01;
  u16 *source_bank_ptr;
  u32 color_effects_flags_segment;
  uint uVar22;
  u32 display_control;
  u32 *source_3d;
  u16 *obj_layer_scanline_ptr_1;
  u16 *bg_direct_bank_hires_ptr;
  u16 *bg_layer_scanline_ptr_1;
  u16 *puVar23;
  u32 *source_3d_00;
  int iVar24;
  u16 *puVar25;
  u8 *source;
  video_2d_struct *pvVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  u32 blend_control;
  u8 *local_1c6c;
  u32 *local_1c64;
  u16 *obj_layer_ptr;
  u32 *local_1c54;
  u32 *local_1c50;
  u8 *source_d;
  u8 *local_1c38;
  u8 *local_1c28;
  u32 active_layers;
  u16 *bg_direct_bank_ptrs [2];
  u16 *layer_buffer_ptrs [5];
  u64 _aligned_storage [885];
  
  iVar7 = __stack_chk_guard;
  aligned_storage = (u8 *)_aligned_storage;
  if (((uint)aligned_storage & 8) != 0) {
    aligned_storage = (u8 *)(_aligned_storage + 1);
  }
  uVar22 = video_2d->display_control;
  color_effects_disable = (u32 *)(aligned_storage + 0xc90);
  pixel_alpha_obj = (u8 *)(uVar22 << 0x14);
  pixel_alpha_obj = (u8 *)((uint)pixel_alpha_obj >> 0x1c);
  active_layers = (u32)pixel_alpha_obj;
  if (video_2d->oam_dirty != '\0') {
    video_2d_reorder_obj(video_2d);
    video_2d->oam_dirty = '\0';
  }
  uVar6 = video_2d->blend_control;
  local_1c6c = (u8 *)(uint)(video_2d->obj_set).scanline_flags[line];
  puVar25 = video_2d->bg_layers[2].direct_bank_ptr;
  puVar23 = video_2d->bg_layers[3].direct_bank_ptr;
  iVar11 = (int)((uint)video_2d->bg_layers[0].horizontal_offset << 0x17) >> 0x17;
  uVar8 = ((uint)uVar6 << 0x18) >> 0x1e;
  puVar12 = (video_2d->obj_set).obj_layer_ptr;
  bg_direct_bank_ptrs[0] = puVar25;
  bg_direct_bank_ptrs[1] = puVar23;
  if (((uVar22 & 8) == 0) ||
     (((uVar22 & 0x100) == 0 &&
      ((capture_settings == (capture_settings_struct *)0x0 || (capture_settings->mode_a != '\x02')))
      ))) {
    uVar18 = 0;
    local_1c64 = (u32 *)0x0;
    uVar20 = hires_mode;
    if (hires_mode != 0) {
      uVar20 = 1;
    }
  }
  else {
    uVar18 = hires_mode;
    if (hires_mode != 0) {
      uVar18 = 1;
    }
    local_1c64 = render_scanline_3d(video_2d->video,line);
    uVar20 = uVar18;
  }
  render_scanline_bg(video_2d,(u16 (*) [272])(aligned_storage + 0x1e0),
                     (u32 (*) [8])(aligned_storage + 0xda0),line);
  if ((uVar22 & 0x1000) != 0) {
    uVar9 = render_scanline_obj(video_2d,(u16 *)(aligned_storage + 0xa70),aligned_storage + 0xc90,
                                (u32 (*) [8])(aligned_storage + 0xe20),
                                (u32 *)(aligned_storage + 0xec0),(u32 *)(aligned_storage + 0xee0),
                                line);
    active_layers = uVar9 | active_layers;
  }
  if (puVar12 != (u16 *)0x0) {
    active_layers = active_layers | 0x10;
    uVar18 = uVar18 | 0x10;
  }
  if (puVar25 != (u16 *)0x0) {
    uVar18 = uVar18 | 4;
  }
  if (puVar23 != (u16 *)0x0) {
    uVar18 = uVar18 | 8;
  }
  puVar16 = (u32 *)active_layers;
  render_scanline_generate_window_masks
            (video_2d,(u32 (*) [8])(aligned_storage + 0xf00),(u32 *)(aligned_storage + 4000),
             (u32 *)(aligned_storage + 0xea0),active_layers,line);
  uVar22 = (uint)uVar6 & (active_layers | 0xf0f0 | active_layers << 8);
  if (uVar8 == 1) {
    if ((uVar22 & 0x3f) == 0) goto LAB_0804b8c4;
    if ((uVar22 & 0x3f00) == 0) goto LAB_0804bd98;
    local_1c6c = (u8 *)((uint)local_1c6c | 4);
  }
  else {
    if (((1 < uVar8) && ((uVar22 & 0x3f) != 0)) && (video_2d->blend_y != 0)) {
      local_1c6c = (u8 *)((uint)local_1c6c | 8);
    }
LAB_0804b8c4:
    if ((uVar22 & 0x3f00) == 0) {
LAB_0804bd98:
      local_1c6c = (u8 *)((uint)local_1c6c & 0xfffffffe);
    }
  }
  auVar27._4_4_ = aligned_storage;
  auVar27._0_4_ = aligned_storage;
  auVar27._8_8_ = 0;
  uVar8 = uVar18 & active_layers;
  auVar32._8_8_ = 0x84000000620;
  auVar32._0_8_ = 0x400000001e0;
  if (uVar8 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = uVar20 & 1;
  }
  layer_buffer_ptrs[4] = (u16 *)(aligned_storage + 0xa60);
  auVar27 = VectorAdd(auVar27 & auVar27 << 0x40,auVar32,4);
  layer_buffer_ptrs._0_8_ = auVar27._0_8_;
  layer_buffer_ptrs._8_8_ = auVar27._8_8_;
  if (uVar21 == 0) {
    if (local_1c64 != (u32 *)0x0) {
      if (iVar11 != 0) {
        if (iVar11 < 0) {
          memcpy(aligned_storage + iVar11 * -4,local_1c64,(iVar11 + 0x100) * 4);
          __memset_chk(aligned_storage,0,iVar11 * -4,0x1ba8);
          local_1c64 = (u32 *)aligned_storage;
        }
        else {
          iVar1 = (0x100 - iVar11) * 4;
          __memcpy_chk(aligned_storage,local_1c64 + iVar11,iVar1,0x1ba8);
          memset(aligned_storage + iVar1,0,iVar11 * 4);
          local_1c64 = (u32 *)aligned_storage;
        }
      }
      uVar18 = render_scanline_set_3d_visibility(aligned_storage + 0xda0,local_1c64);
      local_1c6c = (u8 *)((uint)local_1c6c | uVar18);
    }
    if (puVar12 != (u16 *)0x0) {
      local_1c6c = (u8 *)((uint)local_1c6c | 0x20);
      render_scanline_set_visibility_full_16bpp
                (puVar12 + line * 0x100,
                 aligned_storage + ((video_2d->obj_set).obj_layer_priority + 4) * 0x20 + 0xda0);
      layer_buffer_ptrs[4] = puVar12 + line * 0x100 + -8;
    }
    if (puVar25 != (u16 *)0x0) {
      render_scanline_set_visibility_full_16bpp(puVar25 + line * 0x100,aligned_storage + 0xde0);
      layer_buffer_ptrs[2] = puVar25 + line * 0x100 + -8;
    }
    if (puVar23 != (u16 *)0x0) {
      render_scanline_set_visibility_full_16bpp(puVar23 + line * 0x100,aligned_storage + 0xe00);
      layer_buffer_ptrs[3] = puVar23 + line * 0x100 + -8;
    }
    puVar14 = aligned_storage + 0xc90;
    if (((uint)local_1c6c & 2) == 0) {
      puVar14 = (u8 *)0x0;
    }
    if ((video_2d->display_control & 0xe000) != 0) {
      if ((active_layers & 1) != 0) {
        uVar21 = *(uint *)(aligned_storage + 0xdb0);
        uVar13 = *(uint *)(aligned_storage + 0xdb4);
        *(uint *)(aligned_storage + 0xda0) =
             *(uint *)(aligned_storage + 0xda0) & ~*(uint *)(aligned_storage + 0xf00);
        *(uint *)(aligned_storage + 0xda4) =
             *(uint *)(aligned_storage + 0xda4) & ~*(uint *)(aligned_storage + 0xf04);
        *(uint *)(aligned_storage + 0xdb0) =
             *(uint *)(aligned_storage + 0xda8) & ~*(uint *)(aligned_storage + 0xf08);
        *(uint *)(aligned_storage + 0xdb4) =
             *(uint *)(aligned_storage + 0xdac) & ~*(uint *)(aligned_storage + 0xf0c);
        *(uint *)(aligned_storage + 0xdb0) = uVar21 & ~*(uint *)(aligned_storage + 0xf10);
        *(uint *)(aligned_storage + 0xdb4) = uVar13 & ~*(uint *)(aligned_storage + 0xf14);
        *(uint *)(aligned_storage + 0xdc0) =
             *(uint *)(aligned_storage + 0xdb8) & ~*(uint *)(aligned_storage + 0xf18);
        *(uint *)(aligned_storage + 0xdc4) =
             *(uint *)(aligned_storage + 0xdbc) & ~*(uint *)(aligned_storage + 0xf1c);
      }
      if ((active_layers >> 1 & 1) != 0) {
        uVar21 = *(uint *)(aligned_storage + 0xdd0);
        uVar13 = *(uint *)(aligned_storage + 0xdd4);
        *(uint *)(aligned_storage + 0xdc0) =
             *(uint *)(aligned_storage + 0xdc0) & ~*(uint *)(aligned_storage + 0xf20);
        *(uint *)(aligned_storage + 0xdc4) =
             *(uint *)(aligned_storage + 0xdc4) & ~*(uint *)(aligned_storage + 0xf24);
        *(uint *)(aligned_storage + 0xdd0) =
             *(uint *)(aligned_storage + 0xdc8) & ~*(uint *)(aligned_storage + 0xf28);
        *(uint *)(aligned_storage + 0xdd4) =
             *(uint *)(aligned_storage + 0xdcc) & ~*(uint *)(aligned_storage + 0xf2c);
        *(uint *)(aligned_storage + 0xdd0) = uVar21 & ~*(uint *)(aligned_storage + 0xf30);
        *(uint *)(aligned_storage + 0xdd4) = uVar13 & ~*(uint *)(aligned_storage + 0xf34);
        *(uint *)(aligned_storage + 0xde0) =
             *(uint *)(aligned_storage + 0xdd8) & ~*(uint *)(aligned_storage + 0xf38);
        *(uint *)(aligned_storage + 0xde4) =
             *(uint *)(aligned_storage + 0xddc) & ~*(uint *)(aligned_storage + 0xf3c);
      }
      if ((active_layers >> 2 & 1) != 0) {
        uVar21 = *(uint *)(aligned_storage + 0xdf0);
        uVar13 = *(uint *)(aligned_storage + 0xdf4);
        *(uint *)(aligned_storage + 0xde0) =
             *(uint *)(aligned_storage + 0xde0) & ~*(uint *)(aligned_storage + 0xf40);
        *(uint *)(aligned_storage + 0xde4) =
             *(uint *)(aligned_storage + 0xde4) & ~*(uint *)(aligned_storage + 0xf44);
        *(uint *)(aligned_storage + 0xdf0) =
             *(uint *)(aligned_storage + 0xde8) & ~*(uint *)(aligned_storage + 0xf48);
        *(uint *)(aligned_storage + 0xdf4) =
             *(uint *)(aligned_storage + 0xdec) & ~*(uint *)(aligned_storage + 0xf4c);
        *(uint *)(aligned_storage + 0xdf0) = uVar21 & ~*(uint *)(aligned_storage + 0xf50);
        *(uint *)(aligned_storage + 0xdf4) = uVar13 & ~*(uint *)(aligned_storage + 0xf54);
        *(uint *)(aligned_storage + 0xe00) =
             *(uint *)(aligned_storage + 0xdf8) & ~*(uint *)(aligned_storage + 0xf58);
        *(uint *)(aligned_storage + 0xe04) =
             *(uint *)(aligned_storage + 0xdfc) & ~*(uint *)(aligned_storage + 0xf5c);
      }
      if ((active_layers >> 3 & 1) != 0) {
        uVar21 = *(uint *)(aligned_storage + 0xe10);
        uVar13 = *(uint *)(aligned_storage + 0xe14);
        *(uint *)(aligned_storage + 0xe00) =
             *(uint *)(aligned_storage + 0xe00) & ~*(uint *)(aligned_storage + 0xf60);
        *(uint *)(aligned_storage + 0xe04) =
             *(uint *)(aligned_storage + 0xe04) & ~*(uint *)(aligned_storage + 0xf64);
        *(uint *)(aligned_storage + 0xe10) =
             *(uint *)(aligned_storage + 0xe08) & ~*(uint *)(aligned_storage + 0xf68);
        *(uint *)(aligned_storage + 0xe14) =
             *(uint *)(aligned_storage + 0xe0c) & ~*(uint *)(aligned_storage + 0xf6c);
        *(uint *)(aligned_storage + 0xe10) = uVar21 & ~*(uint *)(aligned_storage + 0xf70);
        *(uint *)(aligned_storage + 0xe14) = uVar13 & ~*(uint *)(aligned_storage + 0xf74);
        *(uint *)(aligned_storage + 0xe20) =
             *(uint *)(aligned_storage + 0xe18) & ~*(uint *)(aligned_storage + 0xf78);
        *(uint *)(aligned_storage + 0xe24) =
             *(uint *)(aligned_storage + 0xe1c) & ~*(uint *)(aligned_storage + 0xf7c);
      }
      if ((active_layers >> 3 & 2) != 0) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = ~SUB168(*(undefined (*) [16])(aligned_storage + 0xf80),0);
        auVar28._8_8_ = 0;
        auVar28._0_8_ = ~SUB168(*(undefined (*) [16])(aligned_storage + 0xf80),8);
        auVar28 = auVar2 << 8 | auVar28;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe20) & auVar28;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe20) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe28) = auVar27._8_8_;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe40) & auVar28;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe40) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe48) = auVar27._8_8_;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe60) & auVar28;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe60) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe68) = auVar27._8_8_;
        auVar28 = *(undefined (*) [16])(aligned_storage + 0xe80) & auVar28;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe80) = auVar28._0_8_;
        *(longlong *)(aligned_storage + 0xe88) = auVar28._8_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = ~SUB168(*(undefined (*) [16])(aligned_storage + 0xf90),0);
        auVar29._8_8_ = 0;
        auVar29._0_8_ = ~SUB168(*(undefined (*) [16])(aligned_storage + 0xf90),8);
        auVar29 = auVar3 << 8 | auVar29;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe30) & auVar29;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe30) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe38) = auVar27._8_8_;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe50) & auVar29;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe50) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe58) = auVar27._8_8_;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe70) & auVar29;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe70) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe78) = auVar27._8_8_;
        auVar29 = *(undefined (*) [16])(aligned_storage + 0xe90) & auVar29;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe90) = auVar29._0_8_;
        *(longlong *)(aligned_storage + 0xe98) = auVar29._8_8_;
      }
    }
    render_scanline_disable_blank_layers(aligned_storage + 0xda0,&active_layers);
    local_1c50 = local_1c64;
    render_scanline_2d_composite
              (video_2d,dest,aligned_storage,layer_buffer_ptrs,puVar14,active_layers,uVar22,
               (u32)local_1c6c,line);
  }
  else {
    active_layers = active_layers & ~uVar8;
    if ((video_2d->display_control & 0xe000) != 0) {
      if ((active_layers & 1) != 0) {
        uVar21 = *(uint *)(aligned_storage + 0xdb0);
        uVar13 = *(uint *)(aligned_storage + 0xdb4);
        *(uint *)(aligned_storage + 0xda0) =
             *(uint *)(aligned_storage + 0xda0) & ~*(uint *)(aligned_storage + 0xf00);
        *(uint *)(aligned_storage + 0xda4) =
             *(uint *)(aligned_storage + 0xda4) & ~*(uint *)(aligned_storage + 0xf04);
        *(uint *)(aligned_storage + 0xdb0) =
             *(uint *)(aligned_storage + 0xda8) & ~*(uint *)(aligned_storage + 0xf08);
        *(uint *)(aligned_storage + 0xdb4) =
             *(uint *)(aligned_storage + 0xdac) & ~*(uint *)(aligned_storage + 0xf0c);
        *(uint *)(aligned_storage + 0xdb0) = uVar21 & ~*(uint *)(aligned_storage + 0xf10);
        *(uint *)(aligned_storage + 0xdb4) = uVar13 & ~*(uint *)(aligned_storage + 0xf14);
        *(uint *)(aligned_storage + 0xdc0) =
             *(uint *)(aligned_storage + 0xdb8) & ~*(uint *)(aligned_storage + 0xf18);
        *(uint *)(aligned_storage + 0xdc4) =
             *(uint *)(aligned_storage + 0xdbc) & ~*(uint *)(aligned_storage + 0xf1c);
      }
      if ((active_layers >> 1 & 1) != 0) {
        uVar21 = *(uint *)(aligned_storage + 0xdd0);
        uVar13 = *(uint *)(aligned_storage + 0xdd4);
        *(uint *)(aligned_storage + 0xdc0) =
             *(uint *)(aligned_storage + 0xdc0) & ~*(uint *)(aligned_storage + 0xf20);
        *(uint *)(aligned_storage + 0xdc4) =
             *(uint *)(aligned_storage + 0xdc4) & ~*(uint *)(aligned_storage + 0xf24);
        *(uint *)(aligned_storage + 0xdd0) =
             *(uint *)(aligned_storage + 0xdc8) & ~*(uint *)(aligned_storage + 0xf28);
        *(uint *)(aligned_storage + 0xdd4) =
             *(uint *)(aligned_storage + 0xdcc) & ~*(uint *)(aligned_storage + 0xf2c);
        *(uint *)(aligned_storage + 0xdd0) = uVar21 & ~*(uint *)(aligned_storage + 0xf30);
        *(uint *)(aligned_storage + 0xdd4) = uVar13 & ~*(uint *)(aligned_storage + 0xf34);
        *(uint *)(aligned_storage + 0xde0) =
             *(uint *)(aligned_storage + 0xdd8) & ~*(uint *)(aligned_storage + 0xf38);
        *(uint *)(aligned_storage + 0xde4) =
             *(uint *)(aligned_storage + 0xddc) & ~*(uint *)(aligned_storage + 0xf3c);
      }
      if ((active_layers >> 2 & 1) != 0) {
        uVar21 = *(uint *)(aligned_storage + 0xdf0);
        uVar13 = *(uint *)(aligned_storage + 0xdf4);
        *(uint *)(aligned_storage + 0xde0) =
             *(uint *)(aligned_storage + 0xde0) & ~*(uint *)(aligned_storage + 0xf40);
        *(uint *)(aligned_storage + 0xde4) =
             *(uint *)(aligned_storage + 0xde4) & ~*(uint *)(aligned_storage + 0xf44);
        *(uint *)(aligned_storage + 0xdf0) =
             *(uint *)(aligned_storage + 0xde8) & ~*(uint *)(aligned_storage + 0xf48);
        *(uint *)(aligned_storage + 0xdf4) =
             *(uint *)(aligned_storage + 0xdec) & ~*(uint *)(aligned_storage + 0xf4c);
        *(uint *)(aligned_storage + 0xdf0) = uVar21 & ~*(uint *)(aligned_storage + 0xf50);
        *(uint *)(aligned_storage + 0xdf4) = uVar13 & ~*(uint *)(aligned_storage + 0xf54);
        *(uint *)(aligned_storage + 0xe00) =
             *(uint *)(aligned_storage + 0xdf8) & ~*(uint *)(aligned_storage + 0xf58);
        *(uint *)(aligned_storage + 0xe04) =
             *(uint *)(aligned_storage + 0xdfc) & ~*(uint *)(aligned_storage + 0xf5c);
      }
      if ((active_layers >> 3 & 1) != 0) {
        uVar21 = *(uint *)(aligned_storage + 0xe10);
        uVar13 = *(uint *)(aligned_storage + 0xe14);
        *(uint *)(aligned_storage + 0xe00) =
             *(uint *)(aligned_storage + 0xe00) & ~*(uint *)(aligned_storage + 0xf60);
        *(uint *)(aligned_storage + 0xe04) =
             *(uint *)(aligned_storage + 0xe04) & ~*(uint *)(aligned_storage + 0xf64);
        *(uint *)(aligned_storage + 0xe10) =
             *(uint *)(aligned_storage + 0xe08) & ~*(uint *)(aligned_storage + 0xf68);
        *(uint *)(aligned_storage + 0xe14) =
             *(uint *)(aligned_storage + 0xe0c) & ~*(uint *)(aligned_storage + 0xf6c);
        *(uint *)(aligned_storage + 0xe10) = uVar21 & ~*(uint *)(aligned_storage + 0xf70);
        *(uint *)(aligned_storage + 0xe14) = uVar13 & ~*(uint *)(aligned_storage + 0xf74);
        *(uint *)(aligned_storage + 0xe20) =
             *(uint *)(aligned_storage + 0xe18) & ~*(uint *)(aligned_storage + 0xf78);
        *(uint *)(aligned_storage + 0xe24) =
             *(uint *)(aligned_storage + 0xe1c) & ~*(uint *)(aligned_storage + 0xf7c);
      }
      if ((active_layers >> 3 & 2) != 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = ~SUB168(*(undefined (*) [16])(aligned_storage + 0xf80),0);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = ~SUB168(*(undefined (*) [16])(aligned_storage + 0xf80),8);
        auVar30 = auVar4 << 8 | auVar30;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe20) & auVar30;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe20) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe28) = auVar27._8_8_;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe40) & auVar30;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe40) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe48) = auVar27._8_8_;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe60) & auVar30;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe60) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe68) = auVar27._8_8_;
        auVar30 = *(undefined (*) [16])(aligned_storage + 0xe80) & auVar30;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe80) = auVar30._0_8_;
        *(longlong *)(aligned_storage + 0xe88) = auVar30._8_8_;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = ~SUB168(*(undefined (*) [16])(aligned_storage + 0xf90),0);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = ~SUB168(*(undefined (*) [16])(aligned_storage + 0xf90),8);
        auVar31 = auVar5 << 8 | auVar31;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe30) & auVar31;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe30) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe38) = auVar27._8_8_;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe50) & auVar31;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe50) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe58) = auVar27._8_8_;
        auVar27 = *(undefined (*) [16])(aligned_storage + 0xe70) & auVar31;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe70) = auVar27._0_8_;
        *(longlong *)(aligned_storage + 0xe78) = auVar27._8_8_;
        auVar31 = *(undefined (*) [16])(aligned_storage + 0xe90) & auVar31;
        *(longlong *)*(undefined (*) [16])(aligned_storage + 0xe90) = auVar31._0_8_;
        *(longlong *)(aligned_storage + 0xe98) = auVar31._8_8_;
      }
    }
    local_1c28 = aligned_storage + 0xde0;
    render_scanline_disable_blank_layers(aligned_storage + 0xda0,&active_layers);
    iVar1 = (0x100 - iVar11) * 4;
    obj_layer_ptr = (u16 *)((line * 3 + 0x3ffffff) * 0x200);
    active_layers = active_layers | uVar8;
    iVar19 = 0;
    local_1c54 = local_1c64;
    local_1c38 = dest;
    do {
      local_1c50 = local_1c64;
      color_effects_flags_segment = (u32)local_1c6c;
      if (local_1c64 != (u32 *)0x0) {
        local_1c50 = local_1c54;
        if (iVar11 != 0) {
          local_1c50 = (u32 *)aligned_storage;
          if (iVar11 < 0) {
            memcpy(aligned_storage + iVar11 * -4,local_1c54,(iVar11 + 0x100) * 4);
            __memset_chk(aligned_storage,0,iVar11 * -4,0x1ba8,puVar16);
          }
          else {
            __memcpy_chk(aligned_storage,local_1c54 + iVar11,iVar1,0x1ba8);
            memset(aligned_storage + iVar1,0,iVar11 * 4);
          }
        }
        uVar18 = render_scanline_set_3d_visibility(aligned_storage + 0xda0,local_1c50);
        color_effects_flags_segment = (uint)local_1c6c | uVar18;
      }
      if (puVar12 != (u16 *)0x0) {
        puVar23 = puVar12 + line * 0x100;
        if ((iVar19 != 0) &&
           (puVar25 = (video_2d->obj_set).obj_layer_hires_ptr, puVar25 != (u16 *)0x0)) {
          puVar23 = (u16 *)((int)puVar25 + (int)obj_layer_ptr);
        }
        color_effects_flags_segment = color_effects_flags_segment | 0x20;
        render_scanline_set_visibility_full_16bpp
                  (puVar23,aligned_storage + 0xda0 +
                           ((video_2d->obj_set).obj_layer_priority + 4) * 0x20);
        layer_buffer_ptrs[4] = puVar23 + -8;
      }
      iVar24 = 0;
      puVar14 = local_1c28;
      pvVar26 = video_2d;
      do {
        if (*(int *)((int)bg_direct_bank_ptrs + iVar24) != 0) {
          puVar23 = pvVar26->bg_layers[2].direct_bank_hires_ptr;
          if (puVar23 == (u16 *)0x0 || iVar19 == 0) {
            bg_layer_scanline_ptr_1 =
                 (u16 *)(*(int *)((int)bg_direct_bank_ptrs + iVar24) + line * 0x200);
          }
          else {
            bg_layer_scanline_ptr_1 = (u16 *)((int)puVar23 + (int)obj_layer_ptr);
          }
          render_scanline_set_visibility_full_16bpp(bg_layer_scanline_ptr_1,puVar14);
          *(u16 **)((int)layer_buffer_ptrs + iVar24 + 8) = bg_layer_scanline_ptr_1 + -8;
        }
        iVar24 = iVar24 + 4;
        puVar14 = puVar14 + 0x20;
        pvVar26 = (video_2d_struct *)(pvVar26->window_vertical_endpoints + 1);
      } while (iVar24 != 8);
      if ((color_effects_flags_segment & 2) == 0) {
        puVar16 = (u32 *)0x0;
LAB_0804c174:
        if ((video_2d->display_control & 0xe000) != 0) goto LAB_0804c18c;
      }
      else {
        if (iVar19 != 3) {
          memcpy(aligned_storage + 0xfc0,color_effects_disable,0x100);
          puVar16 = (u32 *)(aligned_storage + 0xfc0);
          goto LAB_0804c174;
        }
        puVar16 = color_effects_disable;
        if ((video_2d->display_control & 0xe000) == 0) {
          render_scanline_2d_composite
                    (video_2d,dest + 0x900,aligned_storage,layer_buffer_ptrs,
                     (u8 *)color_effects_disable,active_layers,uVar22,color_effects_flags_segment,
                     line);
          break;
        }
LAB_0804c18c:
        uVar21 = uVar8 & active_layers;
        if ((uVar21 & 1) != 0) {
          *(uint *)(aligned_storage + 0xda0) =
               *(uint *)(aligned_storage + 0xda0) & ~*(uint *)(aligned_storage + 0xf00);
          *(uint *)(aligned_storage + 0xda4) =
               *(uint *)(aligned_storage + 0xda4) & ~*(uint *)(aligned_storage + 0xf04);
          *(uint *)(aligned_storage + 0xda8) =
               *(uint *)(aligned_storage + 0xda8) & ~*(uint *)(aligned_storage + 0xf08);
          *(uint *)(aligned_storage + 0xdac) =
               *(uint *)(aligned_storage + 0xdac) & ~*(uint *)(aligned_storage + 0xf0c);
          *(uint *)(aligned_storage + 0xdb0) =
               *(uint *)(aligned_storage + 0xdb0) & ~*(uint *)(aligned_storage + 0xf10);
          *(uint *)(aligned_storage + 0xdb4) =
               *(uint *)(aligned_storage + 0xdb4) & ~*(uint *)(aligned_storage + 0xf14);
          *(uint *)(aligned_storage + 0xdb8) =
               *(uint *)(aligned_storage + 0xdb8) & ~*(uint *)(aligned_storage + 0xf18);
          *(uint *)(aligned_storage + 0xdbc) =
               *(uint *)(aligned_storage + 0xdbc) & ~*(uint *)(aligned_storage + 0xf1c);
        }
        if ((uVar21 >> 2 & 1) != 0) {
          *(uint *)(aligned_storage + 0xde0) =
               *(uint *)(aligned_storage + 0xde0) & ~*(uint *)(aligned_storage + 0xf40);
          *(uint *)(aligned_storage + 0xde4) =
               *(uint *)(aligned_storage + 0xde4) & ~*(uint *)(aligned_storage + 0xf44);
          *(uint *)(aligned_storage + 0xde8) =
               *(uint *)(aligned_storage + 0xde8) & ~*(uint *)(aligned_storage + 0xf48);
          *(uint *)(aligned_storage + 0xdec) =
               *(uint *)(aligned_storage + 0xdec) & ~*(uint *)(aligned_storage + 0xf4c);
          *(uint *)(aligned_storage + 0xdf0) =
               *(uint *)(aligned_storage + 0xdf0) & ~*(uint *)(aligned_storage + 0xf50);
          *(uint *)(aligned_storage + 0xdf4) =
               *(uint *)(aligned_storage + 0xdf4) & ~*(uint *)(aligned_storage + 0xf54);
          *(uint *)(aligned_storage + 0xdf8) =
               *(uint *)(aligned_storage + 0xdf8) & ~*(uint *)(aligned_storage + 0xf58);
          *(uint *)(aligned_storage + 0xdfc) =
               *(uint *)(aligned_storage + 0xdfc) & ~*(uint *)(aligned_storage + 0xf5c);
        }
        if ((uVar21 >> 3 & 1) != 0) {
          *(uint *)(aligned_storage + 0xe00) =
               *(uint *)(aligned_storage + 0xe00) & ~*(uint *)(aligned_storage + 0xf60);
          *(uint *)(aligned_storage + 0xe04) =
               *(uint *)(aligned_storage + 0xe04) & ~*(uint *)(aligned_storage + 0xf64);
          *(uint *)(aligned_storage + 0xe08) =
               *(uint *)(aligned_storage + 0xe08) & ~*(uint *)(aligned_storage + 0xf68);
          *(uint *)(aligned_storage + 0xe0c) =
               *(uint *)(aligned_storage + 0xe0c) & ~*(uint *)(aligned_storage + 0xf6c);
          *(uint *)(aligned_storage + 0xe10) =
               *(uint *)(aligned_storage + 0xe10) & ~*(uint *)(aligned_storage + 0xf70);
          *(uint *)(aligned_storage + 0xe14) =
               *(uint *)(aligned_storage + 0xe14) & ~*(uint *)(aligned_storage + 0xf74);
          *(uint *)(aligned_storage + 0xe18) =
               *(uint *)(aligned_storage + 0xe18) & ~*(uint *)(aligned_storage + 0xf78);
          *(uint *)(aligned_storage + 0xe1c) =
               *(uint *)(aligned_storage + 0xe1c) & ~*(uint *)(aligned_storage + 0xf7c);
        }
        if (uVar21 >> 4 != 0) {
          uVar13 = ~*(uint *)(aligned_storage + 0xf80);
          uVar17 = ~*(uint *)(aligned_storage + 0xf88);
          uVar15 = ~*(uint *)(aligned_storage + 0xf84);
          *(uint *)(aligned_storage + 0xe20) = *(uint *)(aligned_storage + 0xe20) & uVar13;
          uVar21 = ~*(uint *)(aligned_storage + 0xf8c);
          *(uint *)(aligned_storage + 0xe24) = *(uint *)(aligned_storage + 0xe24) & uVar15;
          *(uint *)(aligned_storage + 0xe28) = *(uint *)(aligned_storage + 0xe28) & uVar17;
          *(uint *)(aligned_storage + 0xe2c) = *(uint *)(aligned_storage + 0xe2c) & uVar21;
          *(uint *)(aligned_storage + 0xe40) = *(uint *)(aligned_storage + 0xe40) & uVar13;
          *(uint *)(aligned_storage + 0xe44) = *(uint *)(aligned_storage + 0xe44) & uVar15;
          *(uint *)(aligned_storage + 0xe48) = *(uint *)(aligned_storage + 0xe48) & uVar17;
          *(uint *)(aligned_storage + 0xe60) = *(uint *)(aligned_storage + 0xe60) & uVar13;
          *(uint *)(aligned_storage + 0xe4c) = *(uint *)(aligned_storage + 0xe4c) & uVar21;
          *(uint *)(aligned_storage + 0xe80) = uVar13 & *(uint *)(aligned_storage + 0xe80);
          *(uint *)(aligned_storage + 0xe64) = *(uint *)(aligned_storage + 0xe64) & uVar15;
          *(uint *)(aligned_storage + 0xe68) = *(uint *)(aligned_storage + 0xe68) & uVar17;
          *(uint *)(aligned_storage + 0xe84) = uVar15 & *(uint *)(aligned_storage + 0xe84);
          *(uint *)(aligned_storage + 0xe88) = uVar17 & *(uint *)(aligned_storage + 0xe88);
          uVar17 = ~*(uint *)(aligned_storage + 0xf94);
          *(uint *)(aligned_storage + 0xe6c) = *(uint *)(aligned_storage + 0xe6c) & uVar21;
          uVar13 = ~*(uint *)(aligned_storage + 0xf98);
          uVar15 = ~*(uint *)(aligned_storage + 0xf90);
          *(uint *)(aligned_storage + 0xe30) = *(uint *)(aligned_storage + 0xe30) & uVar15;
          *(uint *)(aligned_storage + 0xe34) = *(uint *)(aligned_storage + 0xe34) & uVar17;
          *(uint *)(aligned_storage + 0xe8c) = uVar21 & *(uint *)(aligned_storage + 0xe8c);
          *(uint *)(aligned_storage + 0xe38) = *(uint *)(aligned_storage + 0xe38) & uVar13;
          *(uint *)(aligned_storage + 0xe50) = *(uint *)(aligned_storage + 0xe50) & uVar15;
          *(uint *)(aligned_storage + 0xe54) = *(uint *)(aligned_storage + 0xe54) & uVar17;
          *(uint *)(aligned_storage + 0xe58) = *(uint *)(aligned_storage + 0xe58) & uVar13;
          *(uint *)(aligned_storage + 0xe74) = *(uint *)(aligned_storage + 0xe74) & uVar17;
          *(uint *)(aligned_storage + 0xe70) = *(uint *)(aligned_storage + 0xe70) & uVar15;
          *(uint *)(aligned_storage + 0xe90) = uVar15 & *(uint *)(aligned_storage + 0xe90);
          *(uint *)(aligned_storage + 0xe78) = *(uint *)(aligned_storage + 0xe78) & uVar13;
          *(uint *)(aligned_storage + 0xe94) = uVar17 & *(uint *)(aligned_storage + 0xe94);
          *(uint *)(aligned_storage + 0xe98) = uVar13 & *(uint *)(aligned_storage + 0xe98);
          uVar21 = ~*(uint *)(aligned_storage + 0xf9c);
          *(uint *)(aligned_storage + 0xe3c) = *(uint *)(aligned_storage + 0xe3c) & uVar21;
          *(uint *)(aligned_storage + 0xe5c) = *(uint *)(aligned_storage + 0xe5c) & uVar21;
          *(uint *)(aligned_storage + 0xe7c) = *(uint *)(aligned_storage + 0xe7c) & uVar21;
          *(uint *)(aligned_storage + 0xe9c) = uVar21 & *(uint *)(aligned_storage + 0xe9c);
        }
      }
      iVar19 = iVar19 + 1;
      obj_layer_ptr = obj_layer_ptr + 0x100;
      local_1c54 = local_1c54 + 0x100;
      render_scanline_2d_composite
                (video_2d,local_1c38,aligned_storage,layer_buffer_ptrs,(u8 *)puVar16,active_layers,
                 uVar22,color_effects_flags_segment,line);
      puVar16 = local_1c50;
      local_1c38 = local_1c38 + 0x300;
    } while (iVar19 != 4);
  }
  if (((capture_settings == (capture_settings_struct *)0x0) ||
      (uVar10 = capture_settings->mode_a, uVar10 == '\0')) || (capture_settings->height <= line))
  goto LAB_0804bd40;
  puVar23 = capture_settings->source_ptr;
  uVar22 = line * capture_settings->width + capture_settings->dest_offset & 0xffff;
  puVar12 = capture_settings->dest_bank_ptr + uVar22;
  if (hires_mode == 0) {
LAB_0804bd18:
    if (uVar10 != '\x02') {
      if (capture_settings->blend == '\0') {
        render_scanline_capture_direct(capture_settings,puVar12,dest);
      }
      else {
        render_scanline_capture_blended(capture_settings,puVar12,puVar23,dest);
      }
      goto LAB_0804bd40;
    }
  }
  else {
    puVar25 = capture_settings->dest_bank_hires_ptr + uVar22 * 3;
    if (local_1c64 == (u32 *)0x0) {
      puVar16 = (u32 *)0x0;
      source_3d = (u32 *)0x0;
      source_3d_00 = (u32 *)0x0;
      puVar14 = dest;
      source = dest;
      local_1c6c = dest;
    }
    else {
      local_1c6c = dest + 0x900;
      source_3d = local_1c64 + 0x200;
      source_3d_00 = local_1c64 + 0x300;
      puVar16 = local_1c64 + 0x100;
      puVar14 = dest + 0x300;
      source = dest + 0x600;
    }
    if (((int)(uint)capture_settings->hires_valid[capture_settings->source_bank] >>
         (line >> 5 & 0xff) & 1U) == 0) {
      if (uVar10 != '\x02') {
        if (capture_settings->blend == '\0') {
          render_scanline_capture_direct(capture_settings,puVar25);
        }
        else {
          render_scanline_capture_blended(capture_settings,puVar25,puVar23,puVar14);
        }
LAB_0804c6f4:
        if (capture_settings->mode_a == '\x02') goto LAB_0804c868;
        if (capture_settings->blend == '\0') {
          render_scanline_capture_direct(capture_settings,puVar25 + 0x100,source);
        }
        else {
          render_scanline_capture_blended(capture_settings,puVar25 + 0x100,puVar23,source);
        }
LAB_0804c724:
        if (capture_settings->mode_a == '\x02') goto LAB_0804c820;
        source_capture_00 = puVar23;
        if (capture_settings->blend != '\0') goto LAB_0804bd08;
LAB_0804c748:
        render_scanline_capture_direct(capture_settings,puVar25 + 0x200,local_1c6c);
        uVar10 = capture_settings->mode_a;
        goto LAB_0804bd18;
      }
      if (puVar16 != (u32 *)0x0) {
        if (capture_settings->blend == '\0') {
          render_scanline_capture_direct_3d(capture_settings,puVar25,puVar16,puVar16,local_1c50);
        }
        else {
          render_scanline_capture_blended_3d(capture_settings,puVar25,puVar23,puVar16);
        }
        goto LAB_0804c6f4;
      }
LAB_0804c868:
      if (source_3d != (u32 *)0x0) {
        if (capture_settings->blend == '\0') {
          render_scanline_capture_direct_3d(capture_settings,puVar25 + 0x100,source_3d,0,local_1c50)
          ;
        }
        else {
          render_scanline_capture_blended_3d(capture_settings,puVar25 + 0x100,puVar23,source_3d);
        }
        goto LAB_0804c724;
      }
LAB_0804c820:
      if (source_3d_00 != (u32 *)0x0) {
        if (capture_settings->blend != '\0') {
          render_scanline_capture_blended_3d(capture_settings,puVar25 + 0x200,puVar23,source_3d_00);
          uVar10 = capture_settings->mode_a;
          goto LAB_0804bd18;
        }
        goto LAB_0804c930;
      }
    }
    else {
      source_capture_01 =
           capture_settings->hires_bank_ptrs[capture_settings->source_bank] + line * 0x300;
      if (uVar10 == '\x02') {
        if (puVar16 != (u32 *)0x0) {
          if (capture_settings->blend == '\0') {
            render_scanline_capture_direct_3d(capture_settings,puVar25,puVar16,puVar16,local_1c50);
          }
          else {
            render_scanline_capture_blended_3d(capture_settings,puVar25,source_capture_01,puVar16);
          }
          goto LAB_0804bca8;
        }
LAB_0804c8f4:
        if (source_3d != (u32 *)0x0) {
          if (capture_settings->blend == '\0') {
            render_scanline_capture_direct_3d
                      (capture_settings,puVar25 + 0x100,source_3d,0,local_1c50);
          }
          else {
            render_scanline_capture_blended_3d
                      (capture_settings,puVar25 + 0x100,source_capture_01 + 0x100,source_3d);
          }
          goto LAB_0804bcdc;
        }
      }
      else {
        if (capture_settings->blend == '\0') {
          render_scanline_capture_direct(capture_settings,puVar25);
        }
        else {
          render_scanline_capture_blended(capture_settings,puVar25,source_capture_01,puVar14);
        }
LAB_0804bca8:
        if (capture_settings->mode_a == '\x02') goto LAB_0804c8f4;
        if (capture_settings->blend == '\0') {
          render_scanline_capture_direct(capture_settings,puVar25 + 0x100,source);
        }
        else {
          render_scanline_capture_blended
                    (capture_settings,puVar25 + 0x100,source_capture_01 + 0x100,source);
        }
LAB_0804bcdc:
        source_capture_00 = source_capture_01 + 0x200;
        if (capture_settings->mode_a != '\x02') {
          if (capture_settings->blend == '\0') goto LAB_0804c748;
LAB_0804bd08:
          render_scanline_capture_blended
                    (capture_settings,puVar25 + 0x200,source_capture_00,local_1c6c);
          uVar10 = capture_settings->mode_a;
          goto LAB_0804bd18;
        }
      }
      if (source_3d_00 != (u32 *)0x0) {
        if (capture_settings->blend == '\0') {
LAB_0804c930:
          render_scanline_capture_direct_3d(capture_settings,puVar25 + 0x200,source_3d_00);
          uVar10 = capture_settings->mode_a;
        }
        else {
          render_scanline_capture_blended_3d
                    (capture_settings,puVar25 + 0x200,source_capture_01 + 0x200,source_3d_00);
          uVar10 = capture_settings->mode_a;
        }
        goto LAB_0804bd18;
      }
    }
  }
  if (local_1c64 != (u32 *)0x0) {
    if (capture_settings->blend == '\0') {
      render_scanline_capture_direct_3d(capture_settings,puVar12,local_1c64,0,local_1c50);
    }
    else {
      render_scanline_capture_blended_3d(capture_settings,puVar12,puVar23,local_1c64);
    }
  }
LAB_0804bd40:
  if (uVar8 == 0) {
    hires_mode = 0;
  }
  if (iVar7 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return hires_mode;
}


