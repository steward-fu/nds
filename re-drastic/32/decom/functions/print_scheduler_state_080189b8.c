/*
 * Ghidra decompilation
 *
 * Function : print_scheduler_state
 * Address  : 080189b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void print_scheduler_state(system_struct *system)

{
  undefined *puVar1;
  void *event_data_1;
  void *event_data;
  char *pcVar2;
  event_callback_type event_callback;
  event_struct *peVar3;
  event_callback_type p_Var4;
  event_struct *peVar5;
  event_struct *current_event;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  peVar5 = (system->event_list).base;
  uVar6 = *(uint *)&system->global_cycles;
  iVar7 = *(int *)((int)&system->global_cycles + 4);
  __printf_chk(1,"scheduler state (%llx cycles in):\n",uVar6,iVar7);
  if (peVar5 != (event_struct *)0x0) {
    do {
      p_Var4 = peVar5->callback;
      if (p_Var4 == event_timer_overflow_function) {
        puVar1 = (undefined *)peVar5->data;
        pcVar2 = "timer ARM9 0 overflow";
        if ((cpu_struct *)puVar1 != &system->cpu_arm9) {
          pcVar2 = (char *)0x0;
        }
        if ((timer_struct *)puVar1 == (system->cpu_arm9).timers + 1) {
          pcVar2 = "timer ARM9 1 overflow";
        }
        if ((timer_struct *)puVar1 == (system->cpu_arm9).timers + 2) {
          pcVar2 = "timer ARM9 2 overflow";
        }
        if ((timer_struct *)puVar1 == (system->cpu_arm9).timers + 3) {
          pcVar2 = "timer ARM9 3 overflow";
        }
        if ((cpu_struct *)puVar1 == &system->cpu_arm7) {
          pcVar2 = "timer ARM7 0 overflow";
        }
        if ((timer_struct *)puVar1 == (system->cpu_arm7).timers + 1) {
          pcVar2 = "timer ARM7 1 overflow";
        }
        if ((timer_struct *)puVar1 == (system->cpu_arm7).timers + 2) {
          pcVar2 = "timer ARM7 2 overflow";
        }
        if ((timer_struct *)puVar1 == (system->cpu_arm7).timers + 3) {
          pcVar2 = "timer ARM7 3 overflow";
        }
LAB_08018a74:
        if (p_Var4 == event_force_task_switch_function) {
          pcVar2 = "force task switch";
        }
      }
      else {
        if (p_Var4 == event_dma_complete_function) {
          puVar1 = (undefined *)peVar5->data;
          pcVar2 = "dma 0";
          if ((dma_channel_struct *)puVar1 != (system->memory).dma_arm9.channels) {
            pcVar2 = "dma";
          }
          if ((dma_channel_struct *)puVar1 == (system->memory).dma_arm9.channels + 1) {
            pcVar2 = "dma 1";
          }
          if ((dma_channel_struct *)puVar1 == (system->memory).dma_arm9.channels + 2) {
            pcVar2 = "dma 2";
          }
          if ((dma_channel_struct *)puVar1 == (system->memory).dma_arm9.channels + 3) {
            pcVar2 = "dma 3";
          }
          goto LAB_08018a74;
        }
        if (p_Var4 == event_gamecard_irq_function) {
          pcVar2 = "gamecard IRQ";
        }
        else if (p_Var4 == event_hblank_start_function) {
          pcVar2 = "hblank_start";
        }
        else {
          if (p_Var4 != event_scanline_start_function) {
            pcVar2 = (char *)0x0;
            goto LAB_08018a74;
          }
          pcVar2 = "scanline_start";
        }
      }
      __printf_chk(1,"  event %s in %d cycles",pcVar2,peVar5->cycles_forward);
      bVar8 = CARRY4(uVar6,peVar5->cycles_forward);
      uVar6 = uVar6 + peVar5->cycles_forward;
      iVar7 = iVar7 + (uint)bVar8;
      __printf_chk(1,"  (%llx)\n",uVar6,iVar7);
      peVar3 = peVar5->next;
      if (peVar3 == peVar5) {
        puts("Found loop, terminating.");
                    /* WARNING: Subroutine does not return */
        exit(-1);
      }
      peVar5 = peVar3;
    } while (peVar3 != (event_struct *)0x0);
  }
  return;
}


