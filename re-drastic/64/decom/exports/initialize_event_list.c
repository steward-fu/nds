/*
 * Ghidra decompilation
 *
 * Function : initialize_event_list
 * Address  : 0011e210
 * Program  : drastic64
 */


void initialize_event_list(long param_1,long param_2)

{
  *(code **)(param_1 + 8) = event_hblank_start_function;
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined *)(param_1 + 0x28) = 0;
  *(code **)(param_1 + 0x38) = event_scanline_start_function;
  *(long *)(param_1 + 0x40) = param_2;
  *(undefined *)(param_1 + 0x58) = 1;
  *(code **)(param_1 + 0x68) = event_force_task_switch_function;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined *)(param_1 + 0x88) = 2;
  *(code **)(param_1 + 0x218) = event_gamecard_irq_function;
  *(long *)(param_1 + 0x220) = param_2 + 800;
  *(undefined *)(param_1 + 0x238) = 0xb;
  *(undefined8 *)(param_1 + 0x300) = 0;
  return;
}


