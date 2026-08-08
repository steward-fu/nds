/*
 * Ghidra decompilation
 *
 * Function : system_initialize_frame_sync_counters
 * Address  : 0010ebf0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void system_initialize_frame_sync_counters(long param_1)

{
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  screen_wait_for_vsync(0);
  get_ticks_us(&local_10);
  *(long *)(nds_system + param_1 + 0x362e978) = local_10 * 3;
  *(undefined8 *)(nds_system + param_1 + 0x362e980) = 0;
  nds_system[param_1 + 0x362e9a1] = 0;
  nds_system[param_1 + 0x362e9a3] = 0;
  *(undefined4 *)(nds_system + param_1 + 0x362e9a4) = 0;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


