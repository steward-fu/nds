/*
 * Ghidra decompilation
 *
 * Function : reset_spu_channel
 * Address  : 0016d8e0
 * Program  : drastic64
 */


void reset_spu_channel(long param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xbd) = 3;
  *(undefined *)(param_1 + 0xc0) = 0;
  return;
}


