/*
 * Ghidra decompilation
 *
 * Function : reset_system
 * Address  : 0010fd50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_system(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_430;
  undefined auStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(auStack_428,1,0x420,"%s.cfg",param_1 + 0x11670);
  load_config_file(param_1,"drastic.cfg",0);
  load_config_file(param_1,auStack_428,1);
  puVar1 = param_1 + 0x2b8faa;
  reset_cpu(puVar1);
  puVar2 = param_1 + 0x4b9c68;
  reset_cpu(puVar2);
  reset_cpu_block(puVar1);
  reset_translation_cache(param_1 + 0x11800);
  reset_memory(param_1 + 0x6ba926);
  reset_video(param_1 + 0x6da3d8);
  reset_gamecard(param_1 + 100);
  reset_spi_peripherals(param_1 + 0x61a);
  reset_spu(param_1 + 0x2b0e00);
  reset_input(param_1 + 0xaaa);
  reset_rtc(param_1 + 0xaa5,*(undefined4 *)((long)param_1 + 0x85a64),param_1[0x10b4d]);
  reset_event_list(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)((long)param_1 + 0x14) = 0x106;
  update_screens();
  event_force_task_switch_function(param_1,0);
  event_scanline_start_function(param_1,0);
  gamecard_load_program(param_1 + 100);
  apply_cycle_adjustment_hacks(param_1);
  if (*(char *)(param_1 + 0x765535) == '\0') {
    param_1[0x2b93fd] = 0;
    param_1[0x4ba0bb] = 0;
    param_1[0x2b9420] = cpu_next_action_arm9_to_arm7;
    param_1[0x4ba0de] = cpu_next_action_arm7_to_event_update;
  }
  else {
    iVar3 = *(int *)(param_1[0x2b93f4] + 0x10);
    param_1[0x2b9420] = recompiler_cpu_next_action_arm9_to_arm7;
    param_1[0x4ba0de] = recompiler_cpu_next_action_arm7_to_event_update;
    __printf_chk(1,"Performing recompiler base block translation (%x %x).\n",
                 *(undefined4 *)((long)param_1 + 0x15ca10c),
                 *(undefined4 *)((long)param_1 + 0x25d06fc));
    uVar4 = cpu_block_lookup_base(puVar1,iVar3 + 8);
    param_1[0x2b93fb] = uVar4;
    uVar4 = cpu_block_lookup_base(puVar1,iVar3 + 0x18);
    param_1[0x2b93fa] = uVar4;
    uVar4 = cpu_block_lookup_base(puVar2,8);
    param_1[0x4ba0b9] = uVar4;
    uVar4 = cpu_block_lookup_base(puVar2,0x18);
    param_1[0x4ba0b8] = uVar4;
    lVar5 = cpu_block_lookup_base(puVar1,*(undefined4 *)((long)param_1 + 0x15ca10c));
    param_1[0x2b93fd] = lVar5 + 8;
    lVar5 = cpu_block_lookup_base(puVar2,*(undefined4 *)((long)param_1 + 0x25d06fc));
    param_1[0x4ba0bb] = lVar5 + 8;
  }
  set_font_narrow_small();
  screen_wait_for_vsync();
  get_ticks_us(&local_430);
  param_1[0x76552f] = local_430 * 3;
  param_1[0x765530] = 0;
  *(undefined *)((long)param_1 + 0x3b2a9a1) = 0;
  *(undefined *)((long)param_1 + 0x3b2a9a3) = 0;
  *(undefined4 *)((long)param_1 + 0x3b2a9a4) = 0;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


