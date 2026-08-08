/*
 * Ghidra decompilation
 *
 * Function : remove_event
 * Address  : 0801852c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void remove_event(event_list_struct *event_list,u32 event_type)

{
  event_struct *peVar1;
  event_struct *peVar2;
  
  peVar2 = event_list->event_storage[event_type].previous;
  peVar1 = event_list->event_storage[event_type].next;
  if (peVar2 == (event_struct *)0x0) {
    event_list->base = peVar1;
  }
  else {
    peVar2->next = peVar1;
  }
  peVar1 = event_list->event_storage[event_type].next;
  if (peVar1 != (event_struct *)0x0) {
    peVar1->previous = event_list->event_storage[event_type].previous;
    peVar1 = event_list->event_storage[event_type].next;
    peVar1->cycles_forward =
         peVar1->cycles_forward + event_list->event_storage[event_type].cycles_forward;
  }
  return;
}


