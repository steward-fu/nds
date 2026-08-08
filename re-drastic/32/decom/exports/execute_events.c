/*
 * Ghidra decompilation
 *
 * Function : execute_events
 * Address  : 08018c74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void execute_events(system_struct *system)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  u32 cycles_executed;
  event_callback_type p_Var4;
  event_struct *peVar5;
  event_struct *current_event;
  uint uVar6;
  int iVar7;
  
  uVar3 = system->cycles_to_next_event;
  peVar5 = (system->event_list).base;
  uVar6 = *(uint *)&system->global_cycles;
  iVar7 = *(int *)((int)&system->global_cycles + 4);
  uVar1 = peVar5->cycles_forward;
  *(uint *)&system->global_cycles = uVar6 + uVar3;
  *(uint *)((int)&system->global_cycles + 4) = iVar7 + (uint)CARRY4(uVar6,uVar3);
  if (uVar3 < uVar1) {
    peVar5->cycles_forward = uVar1 - uVar3;
  }
  else {
    do {
      p_Var4 = peVar5->callback;
      pvVar2 = peVar5->data;
      (system->event_list).base = peVar5->next;
      (*p_Var4)(system,pvVar2);
      peVar5 = (system->event_list).base;
      if (peVar5 == (event_struct *)0x0) {
        return;
      }
      peVar5->previous = (event_struct *)0x0;
    } while (peVar5->cycles_forward == 0);
  }
  return;
}


