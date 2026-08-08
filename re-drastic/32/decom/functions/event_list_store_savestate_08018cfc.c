/*
 * Ghidra decompilation
 *
 * Function : event_list_store_savestate
 * Address  : 08018cfc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void event_list_store_savestate
               (event_list_struct *event_list,mem_file_struct *savestate_file,u32 version)

{
  int iVar1;
  int iVar2;
  event_struct *peVar3;
  event_struct *current_event;
  event_struct *peVar4;
  event_struct *peVar5;
  u8 *puVar6;
  u8 uVar7;
  u32 event_cycles_forward [16];
  u8 event_types [16];
  
  iVar1 = __stack_chk_guard;
  peVar3 = event_list->base;
  event_cycles_forward[4] = 0;
  event_cycles_forward[5] = 0;
  event_types[0] = '\0';
  event_types[1] = '\0';
  event_types[2] = '\0';
  event_types[3] = '\0';
  event_types[4] = '\0';
  event_types[5] = '\0';
  event_types[6] = '\0';
  event_types[7] = '\0';
  event_types[8] = '\0';
  event_types[9] = '\0';
  event_types[10] = '\0';
  event_types[11] = '\0';
  event_types[12] = '\0';
  event_types[13] = '\0';
  event_types[14] = '\0';
  event_types[15] = '\0';
  event_cycles_forward[6] = 0;
  event_cycles_forward[7] = 0;
  event_cycles_forward[0] = 0;
  event_cycles_forward[1] = 0;
  event_cycles_forward[2] = 0;
  event_cycles_forward[3] = 0;
  event_cycles_forward[8] = 0;
  event_cycles_forward[9] = 0;
  event_cycles_forward[10] = 0;
  event_cycles_forward[11] = 0;
  event_cycles_forward[12] = 0;
  event_cycles_forward[13] = 0;
  event_cycles_forward[14] = 0;
  event_cycles_forward[15] = 0;
  if (peVar3 == (event_struct *)0x0) {
    uVar7 = '\0';
  }
  else {
    uVar7 = '\0';
    peVar4 = peVar3;
    do {
      peVar4 = peVar4->next;
      uVar7 = uVar7 + '\x01';
    } while (peVar4 != (event_struct *)0x0);
    peVar4 = peVar3->next;
    event_cycles_forward[0] = peVar3->cycles_forward;
    event_cycles_forward[1] = 0;
    event_types[1] = '\0';
    event_types[2] = '\0';
    event_types[3] = '\0';
    event_types[4] = '\0';
    event_types[5] = '\0';
    event_types[6] = '\0';
    event_types[7] = '\0';
    event_types[0] = peVar3->type;
    if (peVar4 != (event_struct *)0x0) {
      peVar5 = peVar4->next;
      event_cycles_forward[1] = peVar4->cycles_forward;
      event_types[1] = peVar4->type;
      event_types[2] = '\0';
      event_types[3] = '\0';
      event_types[4] = '\0';
      event_types[5] = '\0';
      event_types[6] = '\0';
      event_types[7] = '\0';
      if (peVar5 != (event_struct *)0x0) {
        peVar3 = peVar5->next;
        event_cycles_forward[2] = peVar5->cycles_forward;
        event_cycles_forward[3] = 0;
        event_types[2] = peVar5->type;
        event_types[3] = '\0';
        event_types[4] = '\0';
        event_types[5] = '\0';
        event_types[6] = '\0';
        event_types[7] = '\0';
        if (peVar3 != (event_struct *)0x0) {
          peVar4 = peVar3->next;
          event_cycles_forward[3] = peVar3->cycles_forward;
          event_types[3] = peVar3->type;
          event_types[4] = '\0';
          event_types[5] = '\0';
          event_types[6] = '\0';
          event_types[7] = '\0';
          if (peVar4 != (event_struct *)0x0) {
            peVar3 = peVar4->next;
            event_cycles_forward[4] = peVar4->cycles_forward;
            event_cycles_forward[5] = 0;
            event_types[4] = peVar4->type;
            event_types[5] = '\0';
            event_types[6] = '\0';
            event_types[7] = '\0';
            if (peVar3 != (event_struct *)0x0) {
              peVar4 = peVar3->next;
              event_cycles_forward[5] = peVar3->cycles_forward;
              event_types[5] = peVar3->type;
              event_types[6] = '\0';
              event_types[7] = '\0';
              if (peVar4 != (event_struct *)0x0) {
                peVar3 = peVar4->next;
                event_cycles_forward[6] = peVar4->cycles_forward;
                event_cycles_forward[7] = 0;
                event_types[6] = peVar4->type;
                event_types[7] = '\0';
                if (peVar3 != (event_struct *)0x0) {
                  peVar4 = peVar3->next;
                  event_cycles_forward[7] = peVar3->cycles_forward;
                  event_types[7] = peVar3->type;
                  if (peVar4 != (event_struct *)0x0) {
                    peVar3 = peVar4->next;
                    event_cycles_forward[8] = peVar4->cycles_forward;
                    event_cycles_forward[9] = 0;
                    event_types[9] = '\0';
                    event_types[10] = '\0';
                    event_types[11] = '\0';
                    event_types[12] = '\0';
                    event_types[13] = '\0';
                    event_types[14] = '\0';
                    event_types[15] = '\0';
                    event_types[8] = peVar4->type;
                    if (peVar3 != (event_struct *)0x0) {
                      peVar5 = peVar3->next;
                      event_cycles_forward[9] = peVar3->cycles_forward;
                      event_types[9] = peVar3->type;
                      event_types[10] = '\0';
                      event_types[11] = '\0';
                      event_types[12] = '\0';
                      event_types[13] = '\0';
                      event_types[14] = '\0';
                      event_types[15] = '\0';
                      if (peVar5 != (event_struct *)0x0) {
                        peVar3 = peVar5->next;
                        event_cycles_forward[10] = peVar5->cycles_forward;
                        event_cycles_forward[11] = 0;
                        event_types[10] = peVar5->type;
                        event_types[11] = '\0';
                        event_types[12] = '\0';
                        event_types[13] = '\0';
                        event_types[14] = '\0';
                        event_types[15] = '\0';
                        if (peVar3 != (event_struct *)0x0) {
                          peVar4 = peVar3->next;
                          event_cycles_forward[11] = peVar3->cycles_forward;
                          event_types[11] = peVar3->type;
                          event_types[12] = '\0';
                          event_types[13] = '\0';
                          event_types[14] = '\0';
                          event_types[15] = '\0';
                          if (peVar4 != (event_struct *)0x0) {
                            peVar3 = peVar4->next;
                            event_cycles_forward[12] = peVar4->cycles_forward;
                            event_cycles_forward[13] = 0;
                            event_types[12] = peVar4->type;
                            event_types[13] = '\0';
                            event_types[14] = '\0';
                            event_types[15] = '\0';
                            if (peVar3 != (event_struct *)0x0) {
                              peVar4 = peVar3->next;
                              event_cycles_forward[13] = peVar3->cycles_forward;
                              event_types[13] = peVar3->type;
                              event_types[14] = '\0';
                              event_types[15] = '\0';
                              if (peVar4 != (event_struct *)0x0) {
                                peVar3 = peVar4->next;
                                event_cycles_forward[14] = peVar4->cycles_forward;
                                event_cycles_forward[15] = 0;
                                event_types[14] = peVar4->type;
                                event_types[15] = '\0';
                                if (peVar3 != (event_struct *)0x0) {
                                  event_cycles_forward[15] = peVar3->cycles_forward;
                                  event_types[15] = peVar3->type;
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
  }
  *savestate_file->buffer_ptr = uVar7;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  *(undefined4 *)(puVar6 + 1) = event_types._0_4_;
  *(undefined4 *)(puVar6 + 5) = event_types._4_4_;
  *(undefined4 *)(puVar6 + 9) = event_types._8_4_;
  *(undefined4 *)(puVar6 + 0xd) = event_types._12_4_;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 0x10;
  *(u32 *)(puVar6 + 0x10) = event_cycles_forward[0];
  *(u32 *)(puVar6 + 0x14) = event_cycles_forward[1];
  *(u32 *)(puVar6 + 0x18) = event_cycles_forward[2];
  *(u32 *)(puVar6 + 0x1c) = event_cycles_forward[3];
  *(u32 *)(puVar6 + 0x20) = event_cycles_forward[4];
  *(u32 *)(puVar6 + 0x24) = event_cycles_forward[5];
  *(u32 *)(puVar6 + 0x28) = event_cycles_forward[6];
  *(u32 *)(puVar6 + 0x2c) = event_cycles_forward[7];
  *(u32 *)(puVar6 + 0x30) = event_cycles_forward[8];
  *(u32 *)(puVar6 + 0x34) = event_cycles_forward[9];
  *(u32 *)(puVar6 + 0x38) = event_cycles_forward[10];
  *(u32 *)(puVar6 + 0x3c) = event_cycles_forward[11];
  *(u32 *)(puVar6 + 0x40) = event_cycles_forward[12];
  *(u32 *)(puVar6 + 0x44) = event_cycles_forward[13];
  iVar2 = __stack_chk_guard;
  *(u32 *)(puVar6 + 0x48) = event_cycles_forward[14];
  *(u32 *)(puVar6 + 0x4c) = event_cycles_forward[15];
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 0x40;
  if (iVar1 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


