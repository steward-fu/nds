/*
 * Ghidra decompilation
 *
 * Function : update_frame
 * Address  : 0803605c
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

void update_frame(video_struct *video)

{
  int iVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  u32 ticks_delta;
  int iVar6;
  uint uVar7;
  u32 coverage_shift;
  u32 uVar8;
  system_struct *system;
  system_struct *psVar9;
  uint uVar10;
  u32 coverage_map;
  int iVar11;
  double dVar12;
  double dVar13;
  
  psVar9 = video->memory->system;
  video_render_scanlines(video,0xbf);
  if ((video->capture_settings).capturing != '\0') {
    (video->capture_settings).capturing = '\0';
    *(uint *)(video->memory->arm9_io_registers + 100) =
         *(uint *)(video->memory->arm9_io_registers + 100) & 0x7fffffff;
    if ((video->config->hires_3d & 1) != 0) {
      uVar5 = (uint)(video->capture_settings).dest_bank;
      bVar4 = (video->capture_settings).hires_valid[uVar5];
      uVar7 = ((video->capture_settings).dest_offset << 1) >> 0xe;
      uVar10 = ~(-1 << ((int)((uint)(video->capture_settings).height *
                             (uint)(video->capture_settings).width) >> 0xd & 0xffU));
      if ((bVar4 == 0) &&
         (video->vram_bank_maps[uVar5].address_space_type == VRAM_ADDRESS_SPACE_ARM9)) {
        unmap_memory_page_region
                  (video->memory->memory_interface_arm9,
                   (video->vram_bank_maps[uVar5].region_offset + 0x1800) * 0x4000,
                   video->vram_bank_maps[uVar5].region_size << 10);
        uVar5 = (uint)(video->capture_settings).dest_bank;
        bVar4 = (video->capture_settings).hires_valid[uVar5];
      }
      (video->capture_settings).hires_valid[uVar5] =
           bVar4 | (byte)(uVar10 << (uVar7 & 0xff)) | (byte)(uVar10 >> (8 - uVar7 & 0xff));
    }
  }
  remap_palette_oam_direct(video->memory);
  if (((psVar9->benchmark).disable & 0x20) == 0) {
    if ((psVar9->config).show_frame_counter != 0) {
      update_frame::lexical_block_1::count_frames = update_frame::lexical_block_1::count_frames - 1;
      get_ticks_us(update_frame::lexical_block_1::tick_history +
                   update_frame::lexical_block_1::count_frames);
      update_frame::lexical_block_1::frames_total = update_frame::lexical_block_1::frames_total + 1;
      if (psVar9->skip_current_frame == '\0') {
        update_frame::lexical_block_1::frames_rendered =
             update_frame::lexical_block_1::frames_rendered + 1;
      }
      uVar5 = *(uint *)&(psVar9->cpu_arm7).debug.instruction_count;
      iVar6 = *(int *)((int)&(psVar9->cpu_arm7).debug.instruction_count + 4);
      iVar11 = uVar5 - (uint)update_frame::lexical_block_1::last_instructions_arm7;
      iVar1 = update_frame::lexical_block_1::last_instructions_arm7._4_4_ +
              (uint)(uVar5 < (uint)update_frame::lexical_block_1::last_instructions_arm7);
      fVar2 = 3.166667e+07 /
              (float)(ulonglong)
                     (uint)(*(int *)(update_frame::lexical_block_1::tick_history +
                                    update_frame::lexical_block_1::count_frames) -
                           *(int *)(update_frame::lexical_block_1::tick_history +
                                   (update_frame::lexical_block_1::count_frames + 0x13) % 0x14));
      fVar3 = ((float)(ulonglong)update_frame::lexical_block_1::frames_rendered * 100.0) /
              (float)(ulonglong)update_frame::lexical_block_1::frames_total;
      video->realtime_speed_percentage = fVar2;
      video->rendered_frames_percentage = fVar3;
      dVar13 = (double)__aeabi_ul2d(iVar11,iVar6 - iVar1);
      dVar13 = dVar13 / 16666.66666666667;
      uVar5 = *(uint *)&(psVar9->cpu_arm9).debug.instruction_count;
      dVar12 = (double)__aeabi_ul2d(uVar5 - (uint)update_frame::lexical_block_1::
                                                  last_instructions_arm9,
                                    *(int *)((int)&(psVar9->cpu_arm9).debug.instruction_count + 4) -
                                    (update_frame::lexical_block_1::last_instructions_arm9._4_4_ +
                                    (uint)(uVar5 < (uint)update_frame::lexical_block_1::
                                                         last_instructions_arm9)));
      __sprintf_chk(update_frame::lexical_block_1::print_buffer,1,0x80,
                    "%05.1lf%% %05.1lf%% %.2lfm/%.2lfm",(double)fVar2,(double)fVar3,
                    dVar12 / 16666.66666666667,dVar13);
      update_frame::lexical_block_1::last_instructions_arm9 =
           (psVar9->cpu_arm9).debug.instruction_count;
      update_frame::lexical_block_1::last_instructions_arm7._0_4_ =
           *(uint *)&(psVar9->cpu_arm7).debug.instruction_count;
      update_frame::lexical_block_1::last_instructions_arm7._4_4_ =
           *(int *)((int)&(psVar9->cpu_arm7).debug.instruction_count + 4);
      uVar8 = update_frame::lexical_block_1::count_frames;
      if (update_frame::lexical_block_1::count_frames == 0) {
        update_frame::lexical_block_1::count_frames = 0x14;
        update_frame::lexical_block_1::frames_total = uVar8;
        update_frame::lexical_block_1::frames_rendered = uVar8;
      }
      print_string(update_frame::lexical_block_1::print_buffer,0xffff,0,0,0);
    }
    if (psVar9->skip_current_frame == '\0') {
      update_screen();
    }
  }
  if (((psVar9->config).threaded_3d != 0) && (((psVar9->benchmark).disable & 8) == 0)) {
    video_3d_finish_rendering(&video->video_3d);
  }
  update_frame_geometry(&video->geometry);
  return;
}


