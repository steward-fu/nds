/*
 * Ghidra decompilation
 *
 * Function : ipc_fifo_clear
 * Address  : 080228a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void ipc_fifo_clear(ipc_struct *ipc)

{
  ipc->fifo_read_position = '\0';
  ipc->fifo_write_position = '\0';
  ipc->status = ipc->status & 0xfd | 1;
  return;
}


