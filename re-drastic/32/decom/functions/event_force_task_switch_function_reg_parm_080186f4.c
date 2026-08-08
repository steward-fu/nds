/*
 * Ghidra decompilation
 *
 * Function : event_force_task_switch_function_reg_parm
 * Address  : 080186f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void event_force_task_switch_function_reg_parm(system_struct *system,void *data)

{
  uint uVar1;
  uint uVar2;
  u32 cycle_delta;
  event_struct *peVar3;
  event_struct *current_event;
  event_struct *peVar4;
  event_struct *peVar5;
  event_struct *new_event;
  
  peVar5 = (system->event_list).event_storage + 2;
  peVar3 = (system->event_list).base;
  uVar2 = 0x80 - (*(uint *)&system->global_cycles & 0x7f);
  if ((peVar3 == (event_struct *)0x0) || (uVar1 = peVar3->cycles_forward, uVar2 <= uVar1)) {
    (system->event_list).event_storage[2].cycles_forward = uVar2;
    (system->event_list).event_storage[2].next = peVar3;
    (system->event_list).event_storage[2].previous = (event_struct *)0x0;
    (system->event_list).base = peVar5;
  }
  else {
    do {
      peVar4 = peVar3;
      peVar3 = peVar4->next;
      uVar2 = uVar2 - uVar1;
      if (peVar3 == (event_struct *)0x0) break;
      uVar1 = peVar3->cycles_forward;
    } while (uVar1 < uVar2);
    (system->event_list).event_storage[2].cycles_forward = uVar2;
    (system->event_list).event_storage[2].next = peVar3;
    (system->event_list).event_storage[2].previous = peVar4;
    peVar4->next = peVar5;
  }
  if (peVar3 != (event_struct *)0x0) {
    peVar3->previous = peVar5;
    peVar3->cycles_forward = peVar3->cycles_forward - uVar2;
  }
  return;
}


