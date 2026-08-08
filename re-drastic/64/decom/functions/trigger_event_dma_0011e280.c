/*
 * Ghidra decompilation
 *
 * Function : trigger_event_dma
 * Address  : 0011e280
 * Program  : drastic64
 */


void trigger_event_dma(long param_1,uint param_2)

{
  if ((*(int *)(param_1 + 0x30) < 0) && (param_2 == *(byte *)(param_1 + 0x34))) {
    dma_transfer(param_1,param_1 + 0x10);
  }
  if ((*(int *)(param_1 + 0x58) < 0) && (param_2 == *(byte *)(param_1 + 0x5c))) {
    dma_transfer(param_1,param_1 + 0x38);
  }
  if ((*(int *)(param_1 + 0x80) < 0) && (param_2 == *(byte *)(param_1 + 0x84))) {
    dma_transfer(param_1,param_1 + 0x60);
  }
  if ((*(int *)(param_1 + 0xa8) < 0) && (*(byte *)(param_1 + 0xac) == param_2)) {
    dma_transfer(param_1,param_1 + 0x88);
    return;
  }
  return;
}


