/*
 * Ghidra decompilation
 *
 * Function : render_scanline
 * Address  : 0804c9f0
 * Program  : drastic
 */


/* WARNING: Removing unreachable block (ram,0x0804ca58) */
/* WARNING: Unknown calling convention */

void render_scanline(video_2d_struct *video_2d,void *_dest,u32 line,
                    capture_settings_struct *capture_settings)

{
  undefined auVar1 [16];
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  u32 uVar10;
  u32 bytes_per_pixel;
  video_struct *video;
  s32 sVar11;
  undefined (*pauVar12) [16];
  u32 *scanline_3d;
  u32 pixel;
  s32 sVar13;
  u32 *puVar14;
  undefined (*pauVar15) [16];
  u16 *puVar16;
  uint uVar17;
  u32 pixel_1;
  undefined *puVar18;
  undefined *puVar19;
  u32 uVar20;
  s32 sVar21;
  uint uVar22;
  vram_address_space_type_enum vVar23;
  u32 shade_coefficient_6;
  u32 vram_bank;
  u32 shade_coefficient_4;
  u32 shade_coefficient_7;
  undefined8 *puVar24;
  int iVar25;
  u32 shade_coefficient_5;
  uint *puVar26;
  u16 *vram_ptr;
  u64 *puVar27;
  size_t __n;
  u32 uVar28;
  u32 display_control;
  uint uVar29;
  undefined (*pauVar30) [16];
  u8 *aligned_storage;
  u8 *scanline_buffer;
  u8 *scanline_buffer_a;
  undefined (*pauVar31) [16];
  u32 shade_coefficient_2;
  int iVar32;
  undefined (*pauVar33) [16];
  u32 shade_coefficient_3;
  u32 shade_coefficient;
  u32 shade_coefficient_1;
  memory_struct **memory;
  memory_struct **memory_1;
  u32 half_pitch_1;
  u32 half_pitch;
  u32 fifo_pixel;
  memory_struct *pmVar34;
  u64 *puVar35;
  dma_struct *dma_00;
  dma_struct *dma;
  u64 *puVar36;
  config_struct *pcVar37;
  config_struct *config;
  u64 *puVar38;
  int iVar39;
  uint *puVar40;
  undefined (*pauVar41) [16];
  longlong lVar42;
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  int iVar49;
  u32 *dest_3;
  u32 local_1a70;
  u16 *local_1a6c;
  u16 main_memory_buffer [256];
  u64 _aligned_storage [770];
  
  iVar9 = __stack_chk_guard;
  uVar10 = get_screen_bytes_per_pixel();
  uVar28 = video_2d->display_control;
  video = video_2d->video;
  pmVar34 = video->memory;
  pcVar37 = video->config;
  dma_00 = &pmVar34->dma_arm9;
  if ((video_2d->engine_number == '\0') && (pcVar37->bypass_3d != 0)) {
    pauVar12 = (undefined (*) [16])render_scanline_3d(video,line);
    if ((pcVar37->hires_3d & 1) == 0) {
      if (_dest < pauVar12 + 1 && pauVar12 < (undefined (*) [16])((int)_dest + 0x10)) {
        puVar40 = (uint *)((int)_dest + -4);
        puVar26 = (uint *)(pauVar12[-1] + 0xc);
        do {
          puVar26 = puVar26 + 1;
          uVar22 = *puVar26;
          puVar40 = puVar40 + 1;
          *puVar40 = ((uVar22 << 0x12) >> 0x1a) << 10 | ((uVar22 << 10) >> 0x1a) << 2 |
                     (uVar22 & 0x3f) << 0x12;
        } while ((uint *)(pauVar12[0x3f] + 0xc) != puVar26);
      }
      else {
        uVar29 = ((int)_dest << 0x1d) >> 0x1f & 3;
        uVar22 = uVar29;
        if (uVar29 == 0) {
          iVar39 = 0x100;
          uVar17 = 0x40;
          iVar32 = iVar39;
          iVar49 = iVar39;
        }
        else {
          uVar17 = *(uint *)*pauVar12;
          *(uint *)_dest =
               ((uVar17 << 0x12) >> 0x1a) << 10 | ((uVar17 << 10) >> 0x1a) << 2 |
               (uVar17 & 0x3f) << 0x12;
          if (uVar29 == 1) {
            iVar39 = 0xff;
          }
          else {
            uVar17 = *(uint *)(*pauVar12 + 4);
            *(uint *)((int)_dest + 4) =
                 ((uVar17 << 0x12) >> 0x1a) << 10 | ((uVar17 << 10) >> 0x1a) << 2 |
                 (uVar17 & 0x3f) << 0x12;
            if (uVar29 == 3) {
              uVar17 = *(uint *)(*pauVar12 + 8);
              iVar39 = 0xfd;
              *(uint *)((int)_dest + 8) =
                   ((uVar17 << 0x12) >> 0x1a) << 10 | ((uVar17 << 10) >> 0x1a) << 2 |
                   (uVar17 & 0x3f) << 0x12;
            }
            else {
              iVar39 = 0xfe;
              uVar22 = 2;
            }
          }
          uVar17 = 0x3f;
          iVar32 = 0xfc;
          iVar49 = 0x100 - uVar29;
        }
        auVar1 = SIMDExpandImmediate(0,0,0x3f);
        uVar29 = 0;
        pauVar30 = (undefined (*) [16])(*pauVar12 + uVar29 * 4);
        puVar24 = (undefined8 *)((int)_dest + uVar29 * 4);
        do {
          auVar44 = *pauVar30;
          uVar29 = uVar29 + 1;
          pauVar30 = pauVar30 + 1;
          auVar43 = VectorShiftRight(auVar44,0x10);
          auVar45 = VectorShiftRight(auVar44,8);
          auVar46 = VectorShiftLeft(auVar44 & auVar1,0x12,0x20,0);
          auVar43 = VectorShiftLeft(auVar43 & auVar1,2,0x20,0);
          auVar44 = VectorShiftLeft(auVar45 & auVar1,10,0x20,0);
          auVar46 = auVar43 | auVar44 | auVar46;
          *puVar24 = auVar46._0_8_;
          puVar24[1] = auVar46._8_8_;
          puVar24 = puVar24 + 2;
        } while (uVar29 < uVar17);
        iVar25 = uVar22 + iVar32;
        if (iVar49 != iVar32) {
          uVar22 = *(uint *)(*pauVar12 + iVar25 * 4);
          *(uint *)((int)_dest + iVar25 * 4) =
               ((uVar22 << 10) >> 0x1a) << 2 | ((uVar22 << 0x12) >> 0x1a) << 10 |
               (uVar22 & 0x3f) << 0x12;
          if (iVar39 - iVar32 != 1) {
            uVar22 = *(uint *)(*pauVar12 + iVar25 * 4 + 4);
            *(uint *)((int)_dest + (iVar25 + 1) * 4) =
                 ((uVar22 << 0x12) >> 0x1a) << 10 | ((uVar22 << 10) >> 0x1a) << 2 |
                 (uVar22 & 0x3f) << 0x12;
            if (iVar39 - iVar32 != 2) {
              uVar22 = *(uint *)(*pauVar12 + iVar25 * 4 + 8);
              *(uint *)((int)_dest + (iVar25 + 2) * 4) =
                   ((uVar22 << 0x12) >> 0x1a) << 10 | ((uVar22 << 10) >> 0x1a) << 2 |
                   (uVar22 & 0x3f) << 0x12;
            }
          }
        }
      }
    }
    else {
      auVar1 = SIMDExpandImmediate(0,0,0x3f);
      pauVar30 = (undefined (*) [16])_dest;
      do {
        pauVar33 = pauVar12 + 0x80;
        pauVar31 = pauVar30 + 0x80;
        if (pauVar30 < pauVar33 && pauVar12 < pauVar31) {
          puVar40 = (uint *)(pauVar12[-1] + 0xc);
          puVar26 = (uint *)(pauVar12[0x3f] + 0xc);
          puVar18 = *pauVar30 + 8;
          do {
            puVar40 = puVar40 + 1;
            uVar22 = *puVar40;
            puVar19 = puVar18 + 8;
            *(uint *)*(undefined (*) [16])(puVar18 + -8) =
                 ((uVar22 << 10) >> 0x1a) << 2 | ((uVar22 << 0x12) >> 0x1a) << 10 |
                 (uVar22 & 0x3f) << 0x12;
            puVar26 = puVar26 + 1;
            uVar22 = *puVar26;
            *(uint *)(puVar18 + -4) =
                 ((uVar22 << 10) >> 0x1a) << 2 | ((uVar22 << 0x12) >> 0x1a) << 10 |
                 (uVar22 & 0x3f) << 0x12;
            puVar18 = puVar19;
          } while (puVar19 != pauVar30[0x80] + 8);
        }
        else {
          pauVar15 = pauVar12 + 0x40;
          do {
            pauVar41 = pauVar12 + 0x40;
            auVar44 = *pauVar12;
            pauVar12 = pauVar12 + 1;
            auVar46 = *pauVar41;
            auVar48 = VectorShiftRight(auVar44,8);
            auVar47 = VectorShiftRight(auVar44,0x10);
            auVar45 = VectorShiftRight(auVar46,8);
            auVar43 = VectorShiftRight(auVar46,0x10);
            VectorShiftLeft(auVar44 & auVar1,0x12,0x20,0);
            VectorShiftLeft(auVar46 & auVar1,0x12,0x20,0);
            VectorShiftLeft(auVar48 & auVar1,10,0x20,0);
            VectorShiftLeft(auVar47 & auVar1,2,0x20,0);
            VectorShiftLeft(auVar45 & auVar1,10,0x20,0);
            VectorShiftLeft(auVar43 & auVar1,2,0x20,0);
            puVar2 = (undefined4 *)0x340;
            puVar3 = (undefined4 *)0x350;
            lVar42 = 2;
            pauVar41 = pauVar30;
            while( true ) {
              *(undefined4 *)*pauVar41 = *puVar2;
              *(undefined4 *)(*pauVar41 + 4) = *puVar3;
              pauVar41 = (undefined (*) [16])(*pauVar41 + 8);
              lVar42 = lVar42 + -1;
              if (lVar42 == 0) break;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
            }
            puVar2 = (undefined4 *)0x348;
            puVar3 = (undefined4 *)0x358;
            lVar42 = 2;
            while( true ) {
              *(undefined4 *)*pauVar41 = *puVar2;
              *(undefined4 *)(*pauVar41 + 4) = *puVar3;
              pauVar41 = (undefined (*) [16])(*pauVar41 + 8);
              lVar42 = lVar42 + -1;
              if (lVar42 == 0) break;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
            }
            pauVar30 = pauVar30 + 2;
          } while (pauVar15 != pauVar12);
        }
        pauVar12 = pauVar33;
        pauVar30 = pauVar31;
      } while (pauVar31 != (undefined (*) [16])((int)_dest + 0x1000));
    }
  }
  else {
    puVar14 = &pcVar37->hires_3d;
    if (capture_settings == (capture_settings_struct *)0x0) {
      pcVar37 = (config_struct *)0x0;
    }
    local_1a70 = *puVar14 & 1;
    if ((capture_settings != (capture_settings_struct *)0x0) &&
       (pcVar37 = (config_struct *)(uint)capture_settings->mode_a, pcVar37 != (config_struct *)0x0))
    {
      pcVar37 = (config_struct *)0x1;
    }
    uVar20 = (pmVar34->dma_arm9).channels[0].control;
    puVar35 = _aligned_storage;
    puVar36 = _aligned_storage;
    puVar38 = _aligned_storage;
    if (line == 0xbf) {
      if (((int)uVar20 < 0) && ((pmVar34->dma_arm9).channels[0].start_type == '\x04')) {
        local_1a6c = dma_transfer_display(dma_00,(pmVar34->dma_arm9).channels,0xbf);
        puVar14 = (pmVar34->dma_arm9).channels[0].io_region;
        uVar22 = (pmVar34->dma_arm9).channels[0].control & 0x7fffffff;
        (pmVar34->dma_arm9).channels[0].control = uVar22;
        puVar14[2] = uVar22;
      }
      else {
        local_1a6c = (u16 *)0x0;
      }
      if (((int)(pmVar34->dma_arm9).channels[1].control < 0) &&
         ((pmVar34->dma_arm9).channels[1].start_type == '\x04')) {
        local_1a6c = dma_transfer_display(dma_00,(pmVar34->dma_arm9).channels + 1,0xbf);
        puVar14 = (pmVar34->dma_arm9).channels[1].io_region;
        uVar22 = (pmVar34->dma_arm9).channels[1].control & 0x7fffffff;
        (pmVar34->dma_arm9).channels[1].control = uVar22;
        puVar14[2] = uVar22;
      }
      if (((int)(pmVar34->dma_arm9).channels[2].control < 0) &&
         ((pmVar34->dma_arm9).channels[2].start_type == '\x04')) {
        local_1a6c = dma_transfer_display(dma_00,(pmVar34->dma_arm9).channels + 2,0xbf);
        puVar14 = (pmVar34->dma_arm9).channels[2].io_region;
        uVar22 = (pmVar34->dma_arm9).channels[2].control & 0x7fffffff;
        (pmVar34->dma_arm9).channels[2].control = uVar22;
        puVar14[2] = uVar22;
      }
      if (((int)(pmVar34->dma_arm9).channels[3].control < 0) &&
         ((pmVar34->dma_arm9).channels[3].start_type == '\x04')) {
        local_1a6c = dma_transfer_display(dma_00,(pmVar34->dma_arm9).channels + 3,0xbf);
        puVar14 = (pmVar34->dma_arm9).channels[3].io_region;
        uVar22 = (pmVar34->dma_arm9).channels[3].control & 0x7fffffff;
        (pmVar34->dma_arm9).channels[3].control = uVar22;
        puVar14[2] = uVar22;
      }
LAB_0804cd14:
      sVar5 = video_2d->bg_layers[2].affine_dmy;
      iVar32 = video_2d->bg_layers[2].affine_current_y;
      sVar6 = video_2d->bg_layers[3].affine_dmx;
      sVar7 = video_2d->bg_layers[3].affine_dmy;
      iVar39 = video_2d->bg_layers[3].affine_current_x;
      iVar49 = video_2d->bg_layers[3].affine_current_y;
      video_2d->bg_layers[2].affine_current_x =
           video_2d->bg_layers[2].affine_current_x + (int)video_2d->bg_layers[2].affine_dmx;
      video_2d->bg_layers[2].affine_current_y = iVar32 + sVar5;
      video_2d->bg_layers[3].affine_current_x = iVar39 + sVar6;
      video_2d->bg_layers[3].affine_current_y = iVar49 + sVar7;
      if (pcVar37 != (config_struct *)0x0) goto LAB_0804cb90;
LAB_0804cd64:
      uVar22 = (uVar28 << 0xe) >> 0x1e;
      if (uVar22 != 2) {
        if (uVar22 != 3) {
          if (uVar22 != 1) goto LAB_0804cd84;
          goto LAB_0804cbf0;
        }
        goto LAB_0804d0d4;
      }
LAB_0804d0fc:
      render_scanline_expand_6bit_split(_aligned_storage,video_2d->vram_block_ptr + line * 0x200);
      if (((uint)pcVar37 & local_1a70) == 0) {
        if (pcVar37 == (config_struct *)0x0) goto LAB_0804cda0;
      }
      else {
        uVar22 = (video_2d->display_control << 0xc) >> 0x1e;
        if (((int)(uint)capture_settings->hires_valid[uVar22] >> (line >> 5 & 0xff) & 1U) != 0) {
          puVar16 = capture_settings->hires_bank_ptrs[uVar22] + line * 0x300;
          render_scanline_expand_6bit_split(_aligned_storage + 0x60,puVar16);
          render_scanline_expand_6bit_split(_aligned_storage + 0xc0,puVar16 + 0x100);
          render_scanline_expand_6bit_split(_aligned_storage + 0x120,puVar16 + 0x200);
          puVar35 = _aligned_storage + 0x60;
          puVar36 = _aligned_storage + 0xc0;
          puVar38 = _aligned_storage + 0x120;
        }
      }
      render_scanline_2d(video_2d,(u8 *)(_aligned_storage + 0x180),line,capture_settings,local_1a70)
      ;
    }
    else {
      if (((int)uVar20 < 0) && ((pmVar34->dma_arm9).channels[0].start_type == '\x04')) {
        local_1a6c = dma_transfer_display(dma_00,(pmVar34->dma_arm9).channels,line);
      }
      else {
        local_1a6c = (u16 *)0x0;
      }
      if (((int)(pmVar34->dma_arm9).channels[1].control < 0) &&
         ((pmVar34->dma_arm9).channels[1].start_type == '\x04')) {
        local_1a6c = dma_transfer_display(dma_00,(pmVar34->dma_arm9).channels + 1,line);
      }
      if (((int)(pmVar34->dma_arm9).channels[2].control < 0) &&
         ((pmVar34->dma_arm9).channels[2].start_type == '\x04')) {
        local_1a6c = dma_transfer_display(dma_00,(pmVar34->dma_arm9).channels + 2,line);
      }
      if (((int)(pmVar34->dma_arm9).channels[3].control < 0) &&
         ((pmVar34->dma_arm9).channels[3].start_type == '\x04')) {
        local_1a6c = dma_transfer_display(dma_00,(pmVar34->dma_arm9).channels + 3,line);
      }
      if (line != 0) goto LAB_0804cd14;
      if (0xbfff < video_2d->window_vertical_endpoints[0]) {
        video_2d->windows_y_active = video_2d->windows_y_active | 1;
      }
      if (0xbf < (video_2d->window_vertical_endpoints[0] & 0xff)) {
        video_2d->windows_y_active = video_2d->windows_y_active & 0xfe;
      }
      uVar4 = video_2d->window_vertical_endpoints[1];
      if (0xbfff < uVar4) {
        video_2d->windows_y_active = video_2d->windows_y_active | 2;
      }
      if (0xbf < (uVar4 & 0xff)) {
        video_2d->windows_y_active = video_2d->windows_y_active & 0xfd;
      }
      sVar11 = video_2d->bg_layers[2].affine_reference_y;
      sVar13 = video_2d->bg_layers[3].affine_reference_x;
      video_2d->bg_layers[2].affine_current_x = video_2d->bg_layers[2].affine_reference_x;
      video_2d->bg_layers[2].affine_settings_dirty = '\x01';
      video_2d->bg_layers[3].affine_settings_dirty = '\x01';
      sVar21 = video_2d->bg_layers[3].affine_reference_y;
      video_2d->bg_layers[2].affine_current_y = sVar11;
      video_2d->bg_layers[3].affine_current_x = sVar13;
      video_2d->bg_layers[3].affine_current_y = sVar21;
      if (pcVar37 == (config_struct *)0x0) goto LAB_0804cd64;
LAB_0804cb90:
      if (capture_settings->mode_b != '\0') {
        if (capture_settings->mode_b == '\x03') {
          puVar16 = (u16 *)(video_2d->vram_block_ptr + line * 0x200);
          vVar23 = video_2d->video->vram_bank_maps[capture_settings->source_bank].address_space_type
          ;
          capture_settings->source_ptr = puVar16;
          if (vVar23 != VRAM_ADDRESS_SPACE_ARM9) {
            puVar16 = (u16 *)0x0;
            capture_settings->source_ptr = (u16 *)0x0;
          }
        }
        else {
          if (local_1a6c == (u16 *)0x0) {
            puVar27 = (u64 *)main_memory_buffer;
            do {
              *puVar27 = 0;
              puVar27[1] = 0;
              puVar27 = puVar27 + 2;
            } while (puVar27 != _aligned_storage);
            local_1a6c = main_memory_buffer;
          }
          capture_settings->source_ptr = local_1a6c;
          puVar16 = local_1a6c;
        }
        if ((capture_settings->blend == '\0') && (line < capture_settings->height)) {
          memcpy(capture_settings->dest_ptr,puVar16,(uint)capture_settings->width << 1);
        }
      }
      uVar22 = (uVar28 << 0xe) >> 0x1e;
      if (uVar22 == 2) goto LAB_0804d0fc;
      if (uVar22 == 3) {
        local_1a70 = render_scanline_2d(video_2d,(u8 *)_aligned_storage,line,capture_settings,
                                        local_1a70);
LAB_0804d0d4:
        if (local_1a6c == (u16 *)0x0) {
          uVar22 = *(uint *)(video_2d->video->memory->arm9_io_registers + 0x68);
          memset(_aligned_storage,(uVar22 & 0x1f) << 1,0x100);
          memset(_aligned_storage + 0x20,((uVar22 << 0x16) >> 0x1b) << 1,0x100);
          memset(_aligned_storage + 0x40,((uVar22 << 0x11) >> 0x1b) << 1,0x100);
        }
        else {
          render_scanline_expand_6bit_split(_aligned_storage,local_1a6c);
        }
      }
      else if (uVar22 == 1) {
LAB_0804cbf0:
        uVar28 = render_scanline_2d(video_2d,(u8 *)_aligned_storage,line,capture_settings,local_1a70
                                   );
        if (uVar28 != 0) {
          puVar35 = _aligned_storage + 0x60;
          puVar36 = _aligned_storage + 0xc0;
          puVar38 = _aligned_storage + 0x120;
        }
      }
      else {
        render_scanline_2d(video_2d,(u8 *)_aligned_storage,line,capture_settings,local_1a70);
LAB_0804cd84:
        memset(_aligned_storage,0xff,0x300);
      }
    }
LAB_0804cda0:
    if (local_1a70 == 0) {
      uVar4 = video_2d->master_brightness;
      uVar22 = (uint)uVar4;
      uVar8 = uVar4 >> 0xe;
      iVar32 = 0;
      if (uVar10 == 2) {
        if (uVar8 == 1) {
          uVar22 = uVar22 & 0x1f;
          if (0x1f < uVar22 * 2) {
            if (iVar9 == __stack_chk_guard) {
              __n = 0x200;
              iVar32 = 0xff;
              goto LAB_0804d6e8;
            }
            goto LAB_0804d878;
          }
          if ((uVar4 & 0x1f) != 0) {
            render_scanline_color_convert_shade_16_1x
                      (_aligned_storage,_dest,uVar22 * -2 + 0x20,uVar22 * 0x7e + 0x10);
            goto LAB_0804cfa4;
          }
        }
        else if (uVar8 == 2) {
          if (0x1f < (uVar22 & 0x1f) * 2) {
            if (iVar9 == __stack_chk_guard) {
              __n = 0x200;
              goto LAB_0804d6e8;
            }
            goto LAB_0804d878;
          }
          if ((uVar4 & 0x1f) != 0) {
            render_scanline_color_convert_shade_16_1x
                      (_aligned_storage,_dest,(uVar22 & 0x1f) * -2 + 0x20,0x10);
            goto LAB_0804cfa4;
          }
        }
        render_scanline_color_convert_direct_16_1x(_aligned_storage,_dest);
      }
      else {
        if (uVar8 == 1) {
          uVar22 = uVar22 & 0x1f;
          if (0x1f < uVar22 * 2) {
            if (iVar9 == __stack_chk_guard) {
              __n = 0x400;
              iVar32 = 0xff;
LAB_0804d6e8:
              memset(_dest,iVar32,__n);
              return;
            }
            goto LAB_0804d878;
          }
          if ((uVar4 & 0x1f) != 0) {
            render_scanline_color_convert_shade_32_1x
                      (_aligned_storage,_dest,uVar22 * -2 + 0x20,uVar22 * 0x7e + 0x10);
            goto LAB_0804cfa4;
          }
        }
        else if (uVar8 == 2) {
          if (0x1f < (uVar22 & 0x1f) * 2) {
            if (iVar9 == __stack_chk_guard) {
              __n = 0x400;
              goto LAB_0804d6e8;
            }
            goto LAB_0804d878;
          }
          if ((uVar4 & 0x1f) != 0) {
            render_scanline_color_convert_shade_32_1x
                      (_aligned_storage,_dest,(uVar22 & 0x1f) * -2 + 0x20,0x10);
            goto LAB_0804cfa4;
          }
        }
        render_scanline_color_convert_direct_32_1x(_aligned_storage,_dest);
      }
    }
    else {
      uVar4 = video_2d->master_brightness;
      uVar22 = (uint)uVar4;
      uVar8 = uVar4 >> 0xe;
      if (uVar10 == 2) {
        uVar29 = video_2d->screen_pitch >> 2;
        if (uVar8 == 1) {
          uVar22 = uVar22 & 0x1f;
          if (uVar22 * 2 < 0x20) {
            if ((uVar4 & 0x1f) == 0) goto LAB_0804d224;
            iVar49 = uVar22 * 0x7e + 0x10;
            iVar32 = uVar22 * -2 + 0x20;
            render_scanline_color_convert_shade_16_2x(_aligned_storage,puVar35,_dest,iVar32,iVar49);
LAB_0804d20c:
            render_scanline_color_convert_shade_16_2x
                      (puVar36,puVar38,(void *)((int)_dest + uVar29 * 2),iVar32,iVar49);
          }
          else {
            memset(_dest,0xff,0x400);
            memset((void *)((int)_dest + uVar29 * 2),0xff,0x400);
          }
        }
        else {
          if (uVar8 == 2) {
            if (0x1f < (uVar22 & 0x1f) * 2) {
              memset(_dest,0,0x400);
              memset((void *)((int)_dest + uVar29 * 2),0,0x400);
              goto LAB_0804cfa4;
            }
            if ((uVar4 & 0x1f) != 0) {
              iVar32 = (uVar22 & 0x1f) * -2 + 0x20;
              render_scanline_color_convert_shade_16_2x(_aligned_storage,puVar35,_dest,iVar32,0x10);
              iVar49 = 0x10;
              goto LAB_0804d20c;
            }
          }
LAB_0804d224:
          render_scanline_color_convert_direct_16_2x(_aligned_storage,puVar35,_dest);
          render_scanline_color_convert_direct_16_2x
                    (puVar36,puVar38,(void *)((int)_dest + uVar29 * 2));
        }
      }
      else {
        uVar29 = video_2d->screen_pitch >> 3;
        if (uVar8 == 1) {
          uVar22 = uVar22 & 0x1f;
          if (uVar22 * 2 < 0x20) {
            if ((uVar4 & 0x1f) == 0) goto LAB_0804d048;
            iVar49 = uVar22 * 0x7e + 0x10;
            iVar32 = uVar22 * -2 + 0x20;
            render_scanline_color_convert_shade_32_2x(_aligned_storage,puVar35,_dest,iVar32,iVar49);
LAB_0804ce18:
            render_scanline_color_convert_shade_32_2x
                      (puVar36,puVar38,(void *)((int)_dest + uVar29 * 4),iVar32,iVar49);
          }
          else {
            memset(_dest,0xff,0x800);
            memset((void *)((int)_dest + uVar29 * 4),0xff,0x800);
          }
        }
        else {
          if (uVar8 == 2) {
            if (0x1f < (uVar22 & 0x1f) * 2) {
              memset(_dest,0,0x800);
              memset((void *)((int)_dest + uVar29 * 4),0,0x800);
              goto LAB_0804cfa4;
            }
            if ((uVar4 & 0x1f) != 0) {
              iVar32 = (uVar22 & 0x1f) * -2 + 0x20;
              render_scanline_color_convert_shade_32_2x(_aligned_storage,puVar35,_dest,iVar32,0x10);
              iVar49 = 0x10;
              goto LAB_0804ce18;
            }
          }
LAB_0804d048:
          render_scanline_color_convert_direct_32_2x(_aligned_storage,puVar35,_dest);
          render_scanline_color_convert_direct_32_2x
                    (puVar36,puVar38,(void *)((int)_dest + uVar29 * 4));
        }
      }
    }
  }
LAB_0804cfa4:
  if (iVar9 == __stack_chk_guard) {
    return;
  }
LAB_0804d878:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


