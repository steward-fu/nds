/*
 * Ghidra decompilation
 *
 * Function : initialize_event_list
 * Address  : 08018598
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_event_list(event_list_struct *event_list,system_struct *system)

{
  event_list->event_storage[0].callback = event_hblank_start_function;
  event_list->event_storage[0].data = system;
  event_list->event_storage[1].type = '\x01';
  event_list->event_storage[1].callback = event_scanline_start_function;
  event_list->event_storage[2].type = '\x02';
  event_list->event_storage[0xb].data = &system->gamecard;
  event_list->event_storage[0].type = '\0';
  event_list->event_storage[1].data = system;
  event_list->event_storage[2].callback = event_force_task_switch_function;
  event_list->event_storage[2].data = (void *)0x0;
  event_list->event_storage[0xb].callback = event_gamecard_irq_function;
  event_list->event_storage[0xb].type = '\v';
  event_list->base = (event_struct *)0x0;
  return;
}


