/*
 * Ghidra decompilation
 *
 * Function : initialize_video
 * Address  : 080363dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_video(video_struct *video,memory_struct *memory)

{
  system_struct *psVar1;
  u8 *puVar2;
  u8 *puVar3;
  u8 *puVar4;
  u8 *puVar5;
  
  psVar1 = memory->system;
  puVar4 = memory->vram_b;
  puVar2 = memory->vram_c;
  puVar5 = memory->vram_a;
  puVar3 = memory->vram_d;
  video->memory = memory;
  video->config = &psVar1->config;
  video->vram_bank_ptrs[0] = puVar5;
  puVar5 = memory->vram_g;
  video->vram_bank_ptrs[1] = puVar4;
  puVar4 = memory->vram_e;
  video->vram_bank_ptrs[2] = puVar2;
  puVar2 = memory->vram_f;
  video->vram_bank_ptrs[3] = puVar3;
  video->vram_bank_ptrs[4] = puVar4;
  puVar3 = memory->vram_h;
  video->vram_bank_ptrs[5] = puVar2;
  puVar2 = memory->vram_i;
  video->palette_ram[0] = memory->palette_ram;
  video->vram_control_ptrs[1] = memory->arm9_io_registers + 0x241;
  video->vram_bank_ptrs[6] = puVar5;
  video->vram_control_ptrs[5] = memory->arm9_io_registers + 0x245;
  video->vram_bank_ptrs[8] = puVar2;
  video->vram_control_ptrs[2] = memory->arm9_io_registers + 0x242;
  video->vram_bank_ptrs[7] = puVar3;
  video->vram_control_ptrs[6] = memory->arm9_io_registers + 0x246;
  video->vram_control_ptrs[3] = memory->arm9_io_registers + 0x243;
  video->palette_ram[1] = memory->palette_ram + 0x200;
  video->oam_ram[0] = memory->oam_ram;
  video->vram_control_ptrs[0] = memory->arm9_io_registers + 0x240;
  video->vram_control_ptrs[4] = memory->arm9_io_registers + 0x244;
  video->vram_control_ptrs[7] = memory->arm9_io_registers + 0x248;
  video->vram_control_ptrs[8] = memory->arm9_io_registers + 0x249;
  video->oam_ram[1] = memory->oam_ram + 0x200;
  video->vram_abcd_dirty = 0;
  video->vram_efg_dirty = 0;
  pthread_create(&video->render_thread,(pthread_attr_t *)0x0,video_render_thread,video);
  pthread_mutex_init((pthread_mutex_t *)&video->mutex_render_begin,(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)&video->mutex_render_done,(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)&video->cv_render_begin,(pthread_condattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)&video->cv_render_done,(pthread_condattr_t *)0x0);
  video->var_render_begin = '\0';
  video->var_render_done = '\0';
  initialize_video_2d(video->video_2d_engine,0,video);
  initialize_video_2d(video->video_2d_engine + 1,1,video);
  initialize_geometry(&video->geometry,video->memory->system,&video->texture_cache);
  initialize_texture_cache(&video->texture_cache,video);
  initialize_video_3d(video);
  (video->capture_settings).hires_bank_ptrs[0] = (u16 *)0x0;
  (video->capture_settings).hires_bank_ptrs[1] = (u16 *)0x0;
  (video->capture_settings).hires_bank_ptrs[2] = (u16 *)0x0;
  (video->capture_settings).hires_bank_ptrs[3] = (u16 *)0x0;
  return;
}


