/*
 * Ghidra decompilation
 *
 * Function : initialize_dma
 * Address  : 00123ed0
 * Program  : drastic64
 */


void initialize_dma(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   long param_5)

{
  int iVar1;
  
  *(undefined *)((long)param_1 + 0x35) = 0;
  param_1[3] = param_5;
  param_1[4] = param_4 + 0xb0;
  if (*(int *)(param_5 + 0x210c) == 1) {
    initialize_event(*(long *)(param_5 + 0x2258) + 0x18,0xc,event_dma_complete_function,param_1 + 2)
    ;
    *(undefined *)((long)param_1 + 0x5d) = 1;
    param_1[8] = param_5;
    param_1[9] = param_4 + 0xbc;
    iVar1 = *(int *)(param_5 + 0x210c);
  }
  else {
    *(undefined *)((long)param_1 + 0x5d) = 1;
    param_1[8] = param_5;
    param_1[9] = param_4 + 0xbc;
    iVar1 = *(int *)(param_5 + 0x210c);
  }
  if (iVar1 == 1) {
    initialize_event(*(long *)(param_5 + 0x2258) + 0x18,0xd,event_dma_complete_function,param_1 + 7)
    ;
    *(undefined *)((long)param_1 + 0x85) = 2;
    param_1[0xd] = param_5;
    param_1[0xe] = param_4 + 200;
    iVar1 = *(int *)(param_5 + 0x210c);
  }
  else {
    *(undefined *)((long)param_1 + 0x85) = 2;
    param_1[0xd] = param_5;
    param_1[0xe] = param_4 + 200;
    iVar1 = *(int *)(param_5 + 0x210c);
  }
  if (iVar1 == 1) {
    initialize_event(*(long *)(param_5 + 0x2258) + 0x18,0xe,event_dma_complete_function,
                     param_1 + 0xc);
    *(undefined *)((long)param_1 + 0xad) = 3;
    iVar1 = *(int *)(param_5 + 0x210c);
    param_1[0x12] = param_5;
    param_1[0x13] = param_4 + 0xd4;
  }
  else {
    *(undefined *)((long)param_1 + 0xad) = 3;
    iVar1 = *(int *)(param_5 + 0x210c);
    param_1[0x12] = param_5;
    param_1[0x13] = param_4 + 0xd4;
  }
  if (iVar1 == 1) {
    initialize_event(*(long *)(param_5 + 0x2258) + 0x18,0xf,event_dma_complete_function,
                     param_1 + 0x11);
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


