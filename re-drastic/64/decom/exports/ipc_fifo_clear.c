/*
 * Ghidra decompilation
 *
 * Function : ipc_fifo_clear
 * Address  : 00129ce0
 * Program  : drastic64
 */


void ipc_fifo_clear(long param_1)

{
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xfd | 1;
  return;
}


