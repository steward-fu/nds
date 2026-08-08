/*
 * Ghidra decompilation
 *
 * Function : schedule_event
 * Address  : 08018474
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void schedule_event(event_list_struct *event_list,u32 cycles_forward,u32 event_type)

{
  event_struct *new_event;
  event_struct *peVar1;
  uint uVar2;
  event_struct *peVar3;
  event_struct *current_event;
  event_struct *peVar4;
  
  peVar3 = event_list->base;
  peVar1 = event_list->event_storage + event_type;
  if ((peVar3 == (event_struct *)0x0) || (uVar2 = peVar3->cycles_forward, cycles_forward <= uVar2))
  {
    event_list->event_storage[event_type].cycles_forward = cycles_forward;
    event_list->event_storage[event_type].next = peVar3;
    event_list->event_storage[event_type].previous = (event_struct *)0x0;
    event_list->base = peVar1;
  }
  else {
    do {
      peVar4 = peVar3;
      peVar3 = peVar4->next;
      cycles_forward = cycles_forward - uVar2;
      if (peVar3 == (event_struct *)0x0) break;
      uVar2 = peVar3->cycles_forward;
    } while (uVar2 < cycles_forward);
    event_list->event_storage[event_type].cycles_forward = cycles_forward;
    event_list->event_storage[event_type].next = peVar3;
    event_list->event_storage[event_type].previous = peVar4;
    peVar4->next = peVar1;
  }
  if (peVar3 != (event_struct *)0x0) {
    peVar3->previous = peVar1;
    peVar3->cycles_forward = peVar3->cycles_forward - cycles_forward;
  }
  return;
}


