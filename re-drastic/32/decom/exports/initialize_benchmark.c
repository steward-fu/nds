/*
 * Ghidra decompilation
 *
 * Function : initialize_benchmark
 * Address  : 08097228
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_benchmark
               (benchmark_struct *benchmark,system_struct *system,u32 interval_frames,
               u32 benchmark_phases,u32 savestate_load_index)

{
  benchmark->system = system;
  benchmark->interval_frames = interval_frames;
  benchmark->phases_active = benchmark_phases;
  benchmark->current_phase = 0;
  benchmark->current_frame = 0;
  benchmark->disable = 0;
  benchmark->active = 1;
  return;
}


