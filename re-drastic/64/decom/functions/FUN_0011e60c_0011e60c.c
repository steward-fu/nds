/*
 * Ghidra decompilation
 *
 * Function : FUN_0011e60c
 * Address  : 0011e60c
 * Program  : drastic64
 */


void FUN_0011e60c(long param_1)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  char *pcVar5;
  uint *puVar6;
  long lVar7;
  
  puVar6 = *(uint **)(param_1 + 0x318);
  lVar7 = *(long *)(param_1 + 8);
  __printf_chk(1,"scheduler state (%lx cycles in):\n",lVar7);
  do {
    if (puVar6 == (uint *)0x0) {
      return;
    }
    pcVar4 = *(code **)(puVar6 + 2);
    if (pcVar4 == event_timer_overflow_function) {
      lVar3 = *(long *)(puVar6 + 4);
      pcVar1 = "timer ARM9 0 overflow";
      if (lVar3 != param_1 + 0x15c7d50) {
        pcVar1 = (char *)0x0;
      }
      pcVar5 = "timer ARM9 1 overflow";
      if (lVar3 != param_1 + 0x15c7d70) {
        pcVar5 = pcVar1;
      }
      pcVar1 = "timer ARM9 2 overflow";
      if (lVar3 != param_1 + 0x15c7d90) {
        pcVar1 = pcVar5;
      }
      pcVar5 = "timer ARM9 3 overflow";
      if (lVar3 != param_1 + 0x15c7db0) {
        pcVar5 = pcVar1;
      }
      pcVar1 = "timer ARM7 0 overflow";
      if (lVar3 != param_1 + 0x25ce340) {
        pcVar1 = pcVar5;
      }
      pcVar5 = "timer ARM7 1 overflow";
      if (lVar3 != param_1 + 0x25ce360) {
        pcVar5 = pcVar1;
      }
      pcVar1 = "timer ARM7 2 overflow";
      if (lVar3 != param_1 + 0x25ce380) {
        pcVar1 = pcVar5;
      }
      pcVar5 = "timer ARM7 3 overflow";
      if (lVar3 != param_1 + 0x25ce3a0) {
        pcVar5 = pcVar1;
      }
LAB_0011e7d4:
      if (pcVar4 == event_force_task_switch_function) {
        pcVar5 = "force task switch";
      }
    }
    else {
      if (pcVar4 == event_dma_complete_function) {
        lVar3 = *(long *)(puVar6 + 4);
        pcVar1 = "dma";
        if (lVar3 == param_1 + 0x36d1bd8) {
          pcVar1 = "dma 0";
        }
        pcVar5 = "dma 1";
        if (lVar3 != param_1 + 0x36d1c00) {
          pcVar5 = pcVar1;
        }
        pcVar1 = "dma 2";
        if (lVar3 != param_1 + 0x36d1c28) {
          pcVar1 = pcVar5;
        }
        pcVar5 = "dma 3";
        if (lVar3 != param_1 + 0x36d1c50) {
          pcVar5 = pcVar1;
        }
        goto LAB_0011e7d4;
      }
      pcVar5 = "gamecard IRQ";
      if (pcVar4 != event_gamecard_irq_function) {
        if (pcVar4 == event_hblank_start_function) {
          pcVar5 = "hblank_start";
        }
        else {
          if (pcVar4 != event_scanline_start_function) {
            pcVar5 = (char *)0x0;
            goto LAB_0011e7d4;
          }
          pcVar5 = "scanline_start";
        }
      }
    }
    __printf_chk(1,"  event %s in %d cycles",pcVar5,*puVar6);
    lVar7 = lVar7 + (ulong)*puVar6;
    __printf_chk(1,"  (%lx)\n",lVar7);
    bVar2 = *(uint **)(puVar6 + 6) == puVar6;
    puVar6 = *(uint **)(puVar6 + 6);
    if (bVar2) {
      puts("Found loop, terminating.");
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  } while( true );
}


