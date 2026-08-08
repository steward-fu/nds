/*
 * Ghidra decompilation
 *
 * Function : reset_dma
 * Address  : 00124080
 * Program  : drastic64
 */


void reset_dma(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined *)(param_1 + 0x34) = 0;
  *(undefined *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined *)(param_1 + 0x84) = 0;
  *(undefined *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined *)(param_1 + 0xac) = 0;
  *(undefined *)(param_1 + 0xae) = 0;
  return;
}


