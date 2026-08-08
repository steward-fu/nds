/*
 * Ghidra decompilation
 *
 * Function : ipc_fifo_queue
 * Address  : 08022818
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void ipc_fifo_queue(ipc_struct *ipc,u32 value)

{
  byte bVar1;
  uint uVar2;
  
  if ((ipc->status & 2) == 0) {
    bVar1 = ipc->status & 0xfe;
    uVar2 = ipc->fifo_write_position + 1 & 0xf;
    ipc->fifo_data[ipc->fifo_write_position] = value;
    ipc->fifo_write_position = (u8)uVar2;
    ipc->status = bVar1;
    if (uVar2 == (ipc->fifo_read_position - 1 & 0xf)) {
      ipc->status = bVar1 | 2;
    }
  }
  return;
}


