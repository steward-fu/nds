/*
 * Ghidra decompilation
 *
 * Function : reset_system
 * Address  : 08007798
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_system(system_struct *system)

{
  int iVar1;
  int iVar2;
  u8 *puVar3;
  void *pvVar4;
  u32 uVar5;
  u32 uVar6;
  cpu_struct *cpu;
  cpu_struct *cpu_00;
  u32 uVar7;
  u32 exception_vector_offset;
  u64 real_frame_ticks;
  char path [1024];
  
  iVar1 = __stack_chk_guard;
  cpu = &system->cpu_arm9;
  __sprintf_chk(path,1,0x400,"%s.cfg",system->gamecard_name);
  load_config_file(system,"drastic.cfg",0);
  load_config_file(system,path,1);
  cpu_00 = &system->cpu_arm7;
  reset_cpu(cpu);
  reset_cpu(cpu_00);
  reset_cpu_block(cpu);
  reset_translation_cache(&system->translation_cache);
  reset_memory(&system->memory);
  reset_video(&system->video);
  reset_gamecard(&system->gamecard);
  reset_spi_peripherals(&system->spi_peripherals);
  reset_spu(&system->spu);
  reset_input(&system->input);
  reset_rtc(&system->rtc,(system->config).use_rtc_custom_time,(system->config).rtc_custom_time);
  reset_event_list(&system->event_list);
  system->frame_number = 0;
  system->global_cycles = 0;
  system->cycles_to_next_event = 0;
  system->scanline_number = 0x106;
  system->microphone_status = '\0';
  update_screen();
  event_force_task_switch_function(system,0);
  event_scanline_start_function(system,(void *)0x0);
  audio_unpause(&(system->spu).audio);
  gamecard_load_program(&system->gamecard);
  apply_cycle_adjustment_hacks(system);
  if (system->use_recompiler == '\0') {
    (system->cpu_arm9).block_resume_ptr = (void *)0x0;
    (system->cpu_arm7).block_resume_ptr = (void *)0x0;
    (system->cpu_arm9).next_action_callback = cpu_next_action_arm9_to_arm7;
    (system->cpu_arm7).next_action_callback = cpu_next_action_arm7_to_event_update;
  }
  else {
    uVar5 = (system->cpu_arm9).pc;
    uVar6 = (system->cpu_arm7).pc;
    uVar7 = ((system->cpu_arm9).coprocessor)->exception_vector_offset;
    (system->cpu_arm9).next_action_callback = recompiler_cpu_next_action_arm9_to_arm7;
    (system->cpu_arm7).next_action_callback = recompiler_cpu_next_action_arm7_to_event_update;
    __printf_chk(1,"Performing recompiler base block translation (%x %x).\n",uVar5,uVar6);
    puVar3 = (u8 *)cpu_block_lookup_base(cpu,uVar7 + 8);
    (system->cpu_arm9).swi_block_ptr = puVar3;
    puVar3 = (u8 *)cpu_block_lookup_base(cpu,uVar7 + 0x18);
    (system->cpu_arm9).irq_block_ptr = puVar3;
    puVar3 = (u8 *)cpu_block_lookup_base(cpu_00,8);
    (system->cpu_arm7).swi_block_ptr = puVar3;
    puVar3 = (u8 *)cpu_block_lookup_base(cpu_00,0x18);
    uVar5 = (system->cpu_arm9).pc;
    (system->cpu_arm7).irq_block_ptr = puVar3;
    pvVar4 = cpu_block_lookup_base(cpu,uVar5);
    uVar5 = (system->cpu_arm7).pc;
    (system->cpu_arm9).block_resume_ptr = (void *)((int)pvVar4 + 8);
    pvVar4 = cpu_block_lookup_base(cpu_00,uVar5);
    (system->cpu_arm7).block_resume_ptr = (void *)((int)pvVar4 + 8);
  }
  set_font_narrow_small();
  screen_wait_for_vsync();
  get_ticks_us(&real_frame_ticks);
  iVar2 = __stack_chk_guard;
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
  if (iVar1 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


