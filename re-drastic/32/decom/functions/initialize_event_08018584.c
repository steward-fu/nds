/*
 * Ghidra decompilation
 *
 * Function : initialize_event
 * Address  : 08018584
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_event(event_list_struct *event_list,u32 event_type,event_callback_type callback,
                     void *data)

{
  event_list->event_storage[event_type].callback = callback;
  event_list->event_storage[event_type].data = data;
  event_list->event_storage[event_type].type = (u8)event_type;
  return;
}


