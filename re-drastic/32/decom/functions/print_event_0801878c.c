/*
 * Ghidra decompilation
 *
 * Function : print_event
 * Address  : 0801878c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void print_event(system_struct *system,event_struct *event)

{
  void *event_data;
  char *pcVar1;
  cpu_struct *pcVar2;
  event_callback_type p_Var3;
  event_callback_type event_callback;
  undefined *puVar4;
  void *event_data_1;
  
  p_Var3 = event->callback;
  if (p_Var3 == event_timer_overflow_function) {
    puVar4 = (undefined *)event->data;
    if (system == (system_struct *)0x0) {
      pcVar1 = "timer (unknown)";
    }
    else {
      pcVar2 = &system->cpu_arm9;
      pcVar1 = (char *)pcVar2;
      if ((cpu_struct *)puVar4 == pcVar2) {
        pcVar1 = "timer ARM9 0 overflow";
      }
      if ((cpu_struct *)puVar4 != pcVar2) {
        pcVar1 = (char *)0x0;
      }
      if ((timer_struct *)puVar4 == (system->cpu_arm9).timers + 1) {
        pcVar1 = "timer ARM9 1 overflow";
      }
      if ((timer_struct *)puVar4 == (system->cpu_arm9).timers + 2) {
        pcVar1 = "timer ARM9 2 overflow";
      }
      if ((timer_struct *)puVar4 == (system->cpu_arm9).timers + 3) {
        pcVar1 = "timer ARM9 3 overflow";
      }
      if ((cpu_struct *)puVar4 == &system->cpu_arm7) {
        pcVar1 = "timer ARM7 0 overflow";
      }
      if ((timer_struct *)puVar4 == (system->cpu_arm7).timers + 1) {
        pcVar1 = "timer ARM7 1 overflow";
      }
      if ((timer_struct *)puVar4 == (system->cpu_arm7).timers + 2) {
        pcVar1 = "timer ARM7 2 overflow";
      }
      if ((timer_struct *)puVar4 == (system->cpu_arm7).timers + 3) {
        pcVar1 = "timer ARM7 3 overflow";
      }
    }
  }
  else if (p_Var3 == event_dma_complete_function) {
    puVar4 = (undefined *)event->data;
    pcVar1 = (char *)&UNK_0813b9b8;
    if ((dma_channel_struct *)puVar4 == (system->memory).dma_arm9.channels) {
      pcVar1 = (char *)&UNK_0813b9bc;
    }
    if ((dma_channel_struct *)puVar4 == (system->memory).dma_arm9.channels + 1) {
      pcVar1 = (char *)&UNK_0813b9c4;
    }
    if ((dma_channel_struct *)puVar4 == (system->memory).dma_arm9.channels + 2) {
      pcVar1 = (char *)&UNK_0813b9cc;
    }
    if ((dma_channel_struct *)puVar4 == (system->memory).dma_arm9.channels + 3) {
      pcVar1 = (char *)&UNK_0813ba40;
    }
  }
  else {
    if (p_Var3 == event_gamecard_irq_function) {
      pcVar1 = "gamecard IRQ";
      goto LAB_08018808;
    }
    if (p_Var3 == event_hblank_start_function) {
      pcVar1 = "hblank_start";
      goto LAB_08018808;
    }
    if (p_Var3 == event_scanline_start_function) {
      pcVar1 = "scanline_start";
      goto LAB_08018808;
    }
    pcVar1 = (char *)(cpu_struct *)0x0;
  }
  if (p_Var3 == event_force_task_switch_function) {
    pcVar1 = "force task switch";
  }
LAB_08018808:
  __printf_chk(1,"  event %s in %d cycles",pcVar1,event->cycles_forward);
  return;
}


