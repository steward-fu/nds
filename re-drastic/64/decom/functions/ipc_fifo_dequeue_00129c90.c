/*
 * Ghidra decompilation
 *
 * Function : ipc_fifo_dequeue
 * Address  : 00129c90
 * Program  : drastic64
 */


undefined4 ipc_fifo_dequeue(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x5a) & 0xfd;
    bVar2 = *(char *)(param_1 + 0x58) + 1U & 0xf;
    if (*(byte *)(param_1 + 0x59) == bVar2) {
      bVar1 = bVar1 | 1;
    }
    uVar3 = *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x58) * 4 + 0x18);
    *(byte *)(param_1 + 0x58) = bVar2;
    *(byte *)(param_1 + 0x5a) = bVar1;
    return uVar3;
  }
  return 0;
}


