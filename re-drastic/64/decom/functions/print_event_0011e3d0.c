/*
 * Ghidra decompilation
 *
 * Function : print_event
 * Address  : 0011e3d0
 * Program  : drastic64
 */


void print_event(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_2 + 2);
  if (pcVar5 == event_timer_overflow_function) {
    lVar4 = *(long *)(param_2 + 4);
    if (param_1 == 0) {
      pcVar3 = "timer (unknown)";
    }
    else {
      pcVar3 = "timer ARM9 0 overflow";
      if (lVar4 != param_1 + 0x15c7d50) {
        pcVar3 = (char *)0x0;
      }
      pcVar1 = "timer ARM9 1 overflow";
      if (lVar4 != param_1 + 0x15c7d70) {
        pcVar1 = pcVar3;
      }
      pcVar3 = "timer ARM9 2 overflow";
      if (lVar4 != param_1 + 0x15c7d90) {
        pcVar3 = pcVar1;
      }
      pcVar1 = "timer ARM9 3 overflow";
      if (lVar4 != param_1 + 0x15c7db0) {
        pcVar1 = pcVar3;
      }
      pcVar3 = "timer ARM7 0 overflow";
      if (lVar4 != param_1 + 0x25ce340) {
        pcVar3 = pcVar1;
      }
      pcVar1 = "timer ARM7 1 overflow";
      if (lVar4 != param_1 + 0x25ce360) {
        pcVar1 = pcVar3;
      }
      pcVar2 = "timer ARM7 2 overflow";
      if (lVar4 != param_1 + 0x25ce380) {
        pcVar2 = pcVar1;
      }
      pcVar3 = "timer ARM7 3 overflow";
      if (lVar4 != param_1 + 0x25ce3a0) {
        pcVar3 = pcVar2;
      }
    }
  }
  else if (pcVar5 == event_dma_complete_function) {
    lVar4 = *(long *)(param_2 + 4);
    pcVar3 = "dma";
    if (lVar4 == param_1 + 0x36d1bd8) {
      pcVar3 = "dma 0";
    }
    pcVar1 = "dma 1";
    if (lVar4 != param_1 + 0x36d1c00) {
      pcVar1 = pcVar3;
    }
    pcVar2 = "dma 2";
    if (lVar4 != param_1 + 0x36d1c28) {
      pcVar2 = pcVar1;
    }
    pcVar3 = "dma 3";
    if (lVar4 != param_1 + 0x36d1c50) {
      pcVar3 = pcVar2;
    }
  }
  else {
    pcVar3 = "gamecard IRQ";
    if (pcVar5 == event_gamecard_irq_function) goto LAB_0011e40c;
    if (pcVar5 == event_hblank_start_function) {
      __printf_chk(1,"  event %s in %d cycles","hblank_start",*param_2);
      return;
    }
    if (pcVar5 == event_scanline_start_function) {
      __printf_chk(1,"  event %s in %d cycles","scanline_start",*param_2);
      return;
    }
    pcVar3 = (char *)0x0;
  }
  if (pcVar5 == event_force_task_switch_function) {
    __printf_chk(1,"  event %s in %d cycles","force task switch",*param_2);
    return;
  }
LAB_0011e40c:
  __printf_chk(1,"  event %s in %d cycles",pcVar3,*param_2);
  return;
}


