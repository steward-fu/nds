/*
 * Ghidra decompilation
 *
 * Function : reset_dma_channel
 * Address  : 00124060
 * Program  : drastic64
 */


void reset_dma_channel(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined *)((long)param_1 + 0x24) = 0;
  *(undefined *)((long)param_1 + 0x26) = 0;
  return;
}


