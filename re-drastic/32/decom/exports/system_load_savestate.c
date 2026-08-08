/*
 * Ghidra decompilation
 *
 * Function : system_load_savestate
 * Address  : 08007aa0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void system_load_savestate(system_struct *system,mem_file_struct *savestate_file,u32 version)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  u8 *puVar4;
  undefined4 *puVar5;
  cpu_struct *cpu;
  cpu_struct *cpu_00;
  u32 uVar6;
  u32 exception_vector_offset;
  u64 real_frame_ticks;
  int local_34;
  
  local_34 = __stack_chk_guard;
  if (system->use_recompiler != '\0') {
    (system->cpu_arm7).block_resume_ptr = (void *)0x0;
    cpu_block_flush(&system->cpu_arm9,0xffffffff);
  }
  cpu = &system->cpu_arm9;
  cpu_00 = &system->cpu_arm7;
  cpu_load_savestate(cpu,savestate_file,version);
  cpu_load_savestate(cpu_00,savestate_file,version);
  memory_load_savestate(&system->memory,savestate_file,version);
  video_load_savestate(&system->video,savestate_file,version);
  spu_load_savestate(&system->spu,savestate_file,version);
  gamecard_load_savestate(&system->gamecard,savestate_file,version);
  spi_peripherals_load_savestate(&system->spi_peripherals,savestate_file,version);
  rtc_load_savestate(&system->rtc,savestate_file,version);
  event_list_load_savestate(&system->event_list,savestate_file,version);
  uVar3 = *(undefined4 *)((int)savestate_file->buffer_ptr + 4);
  *(undefined4 *)&system->frame_number = *(undefined4 *)savestate_file->buffer_ptr;
  *(undefined4 *)((int)&system->frame_number + 4) = uVar3;
  puVar4 = savestate_file->buffer_ptr;
  puVar5 = (undefined4 *)(puVar4 + 8);
  savestate_file->buffer_ptr = (u8 *)puVar5;
  uVar3 = *(undefined4 *)(puVar4 + 0xc);
  *(undefined4 *)&system->global_cycles = *puVar5;
  *(undefined4 *)((int)&system->global_cycles + 4) = uVar3;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 8;
  system->scanline_number = *(u16 *)(puVar4 + 8);
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 2;
  if (system->use_recompiler != '\0') {
    uVar6 = ((system->cpu_arm9).coprocessor)->exception_vector_offset;
    (system->cpu_arm9).cpsr = (system->cpu_arm9).cpsr & 0xffffffdf;
    (system->cpu_arm7).cpsr = (system->cpu_arm7).cpsr & 0xffffffdf;
    puVar4 = (u8 *)cpu_block_lookup_base(cpu,uVar6 + 8);
    (system->cpu_arm9).swi_block_ptr = puVar4;
    puVar4 = (u8 *)cpu_block_lookup_base(cpu,uVar6 + 0x18);
    (system->cpu_arm9).irq_block_ptr = puVar4;
    puVar4 = (u8 *)cpu_block_lookup_base(cpu_00,8);
    (system->cpu_arm7).swi_block_ptr = puVar4;
    puVar4 = (u8 *)cpu_block_lookup_base(cpu_00,0x18);
    uVar6 = (system->cpu_arm9).pc;
    (system->cpu_arm7).irq_block_ptr = puVar4;
    pvVar2 = cpu_block_lookup_base(cpu,uVar6);
    uVar6 = (system->cpu_arm7).pc;
    (system->cpu_arm9).block_resume_ptr = (void *)((int)pvVar2 + 8);
    pvVar2 = cpu_block_lookup_base(cpu_00,uVar6);
    (system->cpu_arm7).block_resume_ptr = (void *)((int)pvVar2 + 8);
  }
  (system->cpu_arm9).debug.instruction_count = 0;
  (system->cpu_arm7).debug.instruction_count = 0;
  screen_wait_for_vsync();
  get_ticks_us(&real_frame_ticks);
  iVar1 = __stack_chk_guard;
  system->virtual_frame_ticks = 0;
  *(uint *)&system->real_frame_ticks_base = (uint)real_frame_ticks * 3;
  *(uint *)((int)&system->real_frame_ticks_base + 4) =
       real_frame_ticks._4_4_ * 3 + (uint)CARRY4((uint)real_frame_ticks,(uint)real_frame_ticks) +
       (uint)CARRY4((uint)real_frame_ticks * 2,(uint)real_frame_ticks);
  system->audio_critical = '\0';
  system->skip_current_frame = '\0';
  system->skip_alternate = '\0';
  system->captureless_count = '\0';
  system->frameskip_count = '\0';
  if (local_34 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


