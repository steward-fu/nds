/*
 * Ghidra decompilation
 *
 * Function : system_initialize_frame_sync_counters
 * Address  : 080067ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void system_initialize_frame_sync_counters(system_struct *system)

{
  int iVar1;
  u64 real_frame_ticks;
  int local_1c;
  
  local_1c = __stack_chk_guard;
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
  if (local_1c == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


