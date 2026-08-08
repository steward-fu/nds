/*
 * Ghidra decompilation
 *
 * Function : ipc_fifo_queue
 * Address  : 00129c40
 * Program  : drastic64
 */


void ipc_fifo_queue(long param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  if ((*(byte *)(param_1 + 0x5a) >> 1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x5a) & 0xfe;
    bVar2 = *(char *)(param_1 + 0x59) + 1U & 0xf;
    *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x59) * 4 + 0x18) = param_2;
    *(byte *)(param_1 + 0x59) = bVar2;
    bVar3 = bVar1 | 2;
    if (bVar2 != (*(char *)(param_1 + 0x58) - 1U & 0xf)) {
      bVar3 = bVar1;
    }
    *(byte *)(param_1 + 0x5a) = bVar3;
  }
  return;
}


