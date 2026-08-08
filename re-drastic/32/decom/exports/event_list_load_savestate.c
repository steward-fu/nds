/*
 * Ghidra decompilation
 *
 * Function : event_list_load_savestate
 * Address  : 08019024
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void event_list_load_savestate
               (event_list_struct *event_list,mem_file_struct *savestate_file,u32 version)

{
  u8 uVar1;
  int iVar2;
  event_struct *peVar3;
  u8 *__src;
  event_struct *next_event;
  event_struct *peVar4;
  event_struct *current_event;
  event_struct *peVar5;
  u8 num_events;
  u8 *__src_00;
  size_t __n;
  bool bVar6;
  u32 event_cycles_forward [16];
  u8 event_types [16];
  
  iVar2 = __stack_chk_guard;
  bVar6 = 3 < version;
  if (!bVar6) {
    version = 0xb;
  }
  if (bVar6) {
    version = 0x10;
    __n = 0x40;
  }
  else {
    __n = 0x2c;
  }
  __src = savestate_file->buffer_ptr + 1;
  uVar1 = *savestate_file->buffer_ptr;
  __src_00 = __src + version;
  savestate_file->buffer_ptr = __src;
  memcpy(event_types,__src,version);
  savestate_file->buffer_ptr = __src_00;
  memcpy(event_cycles_forward,__src_00,__n);
  savestate_file->buffer_ptr = __src_00 + __n;
  if (uVar1 == '\0') {
    event_list->base = (event_struct *)0x0;
  }
  else {
    peVar4 = event_list->event_storage + event_types[0];
    peVar4->previous = (event_struct *)0x0;
    event_list->event_storage[event_types[0]].cycles_forward = event_cycles_forward[0];
    event_list->base = peVar4;
    peVar5 = peVar4;
    if (uVar1 != '\x01') {
      peVar5 = event_list->event_storage + event_types[1];
      peVar4->next = peVar5;
      peVar5->previous = peVar4;
      event_list->event_storage[event_types[1]].cycles_forward = event_cycles_forward[1];
      if (uVar1 != '\x02') {
        peVar4 = event_list->event_storage + event_types[2];
        peVar5->next = peVar4;
        peVar4->previous = peVar5;
        event_list->event_storage[event_types[2]].cycles_forward = event_cycles_forward[2];
        peVar5 = peVar4;
        if (uVar1 != '\x03') {
          peVar5 = event_list->event_storage + event_types[3];
          peVar4->next = peVar5;
          peVar5->previous = peVar4;
          event_list->event_storage[event_types[3]].cycles_forward = event_cycles_forward[3];
          if (uVar1 != '\x04') {
            peVar4 = event_list->event_storage + event_types[4];
            peVar5->next = peVar4;
            peVar4->previous = peVar5;
            event_list->event_storage[event_types[4]].cycles_forward = event_cycles_forward[4];
            peVar5 = peVar4;
            if (uVar1 != '\x05') {
              peVar5 = event_list->event_storage + event_types[5];
              peVar4->next = peVar5;
              peVar5->previous = peVar4;
              event_list->event_storage[event_types[5]].cycles_forward = event_cycles_forward[5];
              if (uVar1 != '\x06') {
                peVar4 = event_list->event_storage + event_types[6];
                peVar5->next = peVar4;
                peVar4->previous = peVar5;
                event_list->event_storage[event_types[6]].cycles_forward = event_cycles_forward[6];
                peVar5 = peVar4;
                if (uVar1 != '\a') {
                  peVar5 = event_list->event_storage + event_types[7];
                  peVar4->next = peVar5;
                  peVar5->previous = peVar4;
                  event_list->event_storage[event_types[7]].cycles_forward = event_cycles_forward[7]
                  ;
                  if (uVar1 != '\b') {
                    peVar4 = event_list->event_storage + event_types[8];
                    peVar5->next = peVar4;
                    peVar4->previous = peVar5;
                    event_list->event_storage[event_types[8]].cycles_forward =
                         event_cycles_forward[8];
                    peVar5 = peVar4;
                    if (uVar1 != '\t') {
                      peVar5 = event_list->event_storage + event_types[9];
                      peVar4->next = peVar5;
                      peVar5->previous = peVar4;
                      event_list->event_storage[event_types[9]].cycles_forward =
                           event_cycles_forward[9];
                      if (uVar1 != '\n') {
                        peVar4 = event_list->event_storage + event_types[10];
                        peVar5->next = peVar4;
                        peVar4->previous = peVar5;
                        event_list->event_storage[event_types[10]].cycles_forward =
                             event_cycles_forward[10];
                        peVar5 = peVar4;
                        if (uVar1 != '\v') {
                          peVar5 = event_list->event_storage + event_types[11];
                          peVar4->next = peVar5;
                          peVar5->previous = peVar4;
                          event_list->event_storage[event_types[11]].cycles_forward =
                               event_cycles_forward[11];
                          if (uVar1 != '\f') {
                            peVar4 = event_list->event_storage + event_types[12];
                            peVar5->next = peVar4;
                            peVar4->previous = peVar5;
                            event_list->event_storage[event_types[12]].cycles_forward =
                                 event_cycles_forward[12];
                            peVar5 = peVar4;
                            if (uVar1 != '\r') {
                              peVar3 = event_list->event_storage + event_types[13];
                              peVar4->next = peVar3;
                              peVar3->previous = peVar4;
                              event_list->event_storage[event_types[13]].cycles_forward =
                                   event_cycles_forward[13];
                              peVar5 = peVar3;
                              if (uVar1 != '\x0e') {
                                peVar5 = event_list->event_storage + event_types[14];
                                peVar3->next = peVar5;
                                peVar5->previous = peVar3;
                                event_list->event_storage[event_types[14]].cycles_forward =
                                     event_cycles_forward[14];
                                if (uVar1 != '\x0f') {
                                  peVar4 = event_list->event_storage + event_types[15];
                                  peVar5->next = peVar4;
                                  peVar4->previous = peVar5;
                                  event_list->event_storage[event_types[15]].cycles_forward =
                                       event_cycles_forward[15];
                                  peVar5 = peVar4;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    peVar5->next = (event_struct *)0x0;
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


