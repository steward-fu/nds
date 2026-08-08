/*
 * Ghidra decompilation
 *
 * Function : ipc_fifo_dequeue
 * Address  : 08022860
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 ipc_fifo_dequeue(ipc_struct *ipc)

{
  u32 uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  
  if ((ipc->status & 1) == 0) {
    bVar3 = ipc->status & 0xfd;
    uVar2 = ipc->fifo_read_position + 1 & 0xf;
    bVar4 = ipc->fifo_write_position == uVar2;
    uVar1 = ipc->fifo_data[ipc->fifo_read_position];
    ipc->status = bVar3;
    if (bVar4) {
      bVar3 = bVar3 | 1;
    }
    ipc->fifo_read_position = (u8)uVar2;
    if (bVar4) {
      ipc->status = bVar3;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


