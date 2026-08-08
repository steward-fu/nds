/*
 * Ghidra decompilation
 *
 * Function : start_frame
 * Address  : 08035ad4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void start_frame(video_struct *video)

{
  ushort uVar1;
  int iVar2;
  memory_struct *memory;
  u8 *puVar3;
  u8 *screen_ptr_a;
  u8 *puVar4;
  u8 *screen_ptr_b;
  u32 screen_pitch_a;
  u32 screen_pitch_b;
  uint uVar5;
  u32 dest_bank;
  u8 uVar6;
  u16 *puVar7;
  system_struct *psVar8;
  system_struct *system;
  uint uVar9;
  u32 capture_control;
  uint uVar10;
  u32 uVar11;
  u32 uVar12;
  u32 uVar13;
  u32 capture_widths [4];
  u32 capture_heights [4];
  
  iVar2 = __stack_chk_guard;
  memory = video->memory;
  psVar8 = memory->system;
  uVar1 = *(ushort *)(memory->arm9_io_registers + 0x304);
  uVar9 = *(uint *)(memory->arm9_io_registers + 100);
  remap_palette_oam_deferred(memory);
  if ((uVar1 & 0x8000) == 0) {
    if ((psVar8->config).fix_main_2d_screen == 0) {
      uVar11 = 1;
      uVar12 = 0;
    }
    else {
      uVar11 = 0;
      uVar12 = 1;
    }
  }
  else {
    uVar12 = 1;
    uVar11 = 0;
  }
  set_screen_hires_mode(uVar11,(psVar8->config).hires_3d & 1);
  set_screen_hires_mode(uVar12,(psVar8->config).hires_3d & 1);
  puVar3 = (u8 *)get_screen_ptr(uVar11);
  puVar4 = (u8 *)get_screen_ptr(uVar12);
  uVar11 = get_screen_pitch(uVar11);
  uVar12 = get_screen_pitch(uVar12);
  if (psVar8->skip_current_frame == '\0') {
    if (((psVar8->benchmark).disable & 4) == 0) {
      video_2d_reorder_obj(video->video_2d_engine);
      video_2d_reorder_obj(video->video_2d_engine + 1);
      video_2d_map_bg_direct_layers(video->video_2d_engine);
      video_2d_map_bg_direct_layers(video->video_2d_engine + 1);
    }
    else {
      puVar4 = (u8 *)0x0;
      puVar3 = (u8 *)0x0;
    }
  }
  else {
    puVar4 = (u8 *)0x0;
    puVar3 = puVar4;
  }
  video->video_2d_engine[0].screen_ptr = puVar3;
  video->video_2d_engine[1].screen_ptr = puVar4;
  video->video_2d_engine[0].screen_pitch = uVar11;
  video->video_2d_engine[0].event_list.events_processed = 0;
  video->video_2d_engine[1].screen_pitch = uVar12;
  video->video_2d_engine[1].event_list.events_processed = 0;
  video->video_2d_engine[0].event_list.current_index = 0;
  video->video_2d_engine[1].event_list.current_index = 0;
  video->scanlines_rendered = 0;
  (video->capture_settings).mode_a = '\0';
  (video->capture_settings).mode_b = '\0';
  if (-1 < (int)uVar9) {
    (video->capture_settings).capturing = '\0';
    goto LAB_08035c14;
  }
  uVar5 = (uVar9 << 0xe) >> 0x1e;
  (video->capture_settings).capturing = '\x01';
  if ((video->vram_bank_maps[uVar5].address_space_type != VRAM_ADDRESS_SPACE_ARM9) ||
     (video->vram_bank_maps[uVar5].region_offset < 0x200)) goto LAB_08035c14;
  video->vram_abcd_dirty = video->vram_abcd_dirty | 0xff << (uVar5 << 3);
  uVar10 = (uVar9 << 1) >> 0x1e;
  capture_widths[0] = 0x80;
  capture_widths[1] = 0x100;
  (video->capture_settings).dest_bank_ptr = (u16 *)video->vram_bank_ptrs[uVar5];
  (video->capture_settings).dest_offset = ((uVar9 << 0xc) >> 0x1e) << 0xe;
  capture_widths[2] = 0x100;
  capture_widths[3] = 0x100;
  capture_heights[0] = 0x80;
  capture_heights[1] = 0x40;
  capture_heights[2] = 0x80;
  capture_heights[3] = 0xc0;
  if (uVar10 == 1) {
    if ((uVar9 & 0x2000000) == 0) {
      (video->capture_settings).mode_b = '\x03';
LAB_08035e00:
      (video->capture_settings).blend = '\0';
    }
    else {
      (video->capture_settings).mode_b = '\x04';
      (video->capture_settings).blend = '\0';
    }
  }
  else {
    if ((uVar9 & 0x1000000) == 0) {
      uVar6 = '\x01';
    }
    else {
      uVar6 = '\x02';
    }
    (video->capture_settings).mode_a = uVar6;
    if (uVar10 == 0) {
      (video->capture_settings).blend = (byte)((uVar9 << 1) >> 0x1e);
    }
    else {
      if ((uVar9 & 0x2000000) == 0) {
        uVar6 = '\x03';
      }
      else {
        uVar6 = '\x04';
      }
      (video->capture_settings).mode_b = uVar6;
      if (uVar10 == 1) goto LAB_08035e00;
      uVar10 = uVar9 & 0x1f;
      (video->capture_settings).blend = '\x01';
      uVar6 = (u8)uVar10;
      (video->capture_settings).blend_a = uVar6;
      if (0x10 < uVar10) {
        uVar6 = '\x10';
      }
      (video->capture_settings).blend_b = (byte)((uVar9 << 0x13) >> 0x1b);
      if (0x10 < uVar10) {
        (video->capture_settings).blend_a = uVar6;
      }
      if (0x10 < (uVar9 << 0x13) >> 0x1b) {
        (video->capture_settings).blend_b = '\x10';
      }
    }
  }
  uVar12 = video->video_2d_engine[0].display_control;
  uVar10 = (uVar9 << 10) >> 0x1e;
  (video->capture_settings).dest_bank = (byte)((uVar9 << 0xe) >> 0x1e);
  uVar13 = capture_widths[uVar10];
  uVar11 = capture_heights[uVar10];
  (video->capture_settings).source_bank = (byte)((uVar12 << 0xc) >> 0x1e);
  (video->capture_settings).width = (u16)uVar13;
  (video->capture_settings).height = (u8)uVar11;
  if ((video->config->hires_3d & 1) != 0) {
    puVar7 = (video->capture_settings).hires_bank_ptrs[uVar5];
    if (puVar7 == (u16 *)0x0) {
      puVar7 = (u16 *)memalign(0x10,0x60000);
      (video->capture_settings).hires_bank_ptrs[uVar5] = puVar7;
    }
    (video->capture_settings).dest_bank_hires_ptr = puVar7;
  }
LAB_08035c14:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


