/*
 * Ghidra decompilation
 *
 * Function : reset_ipc
 * Address  : 08022a04
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_ipc(ipc_struct *ipc)

{
  *(undefined8 *)ipc->fifo_data = 0;
  *(undefined8 *)(ipc->fifo_data + 2) = 0;
  *(undefined8 *)(ipc->fifo_data + 4) = 0;
  *(undefined8 *)(ipc->fifo_data + 6) = 0;
  *(undefined8 *)(ipc->fifo_data + 8) = 0;
  *(undefined8 *)(ipc->fifo_data + 10) = 0;
  *(undefined8 *)(ipc->fifo_data + 0xc) = 0;
  *(undefined8 *)(ipc->fifo_data + 0xe) = 0;
  ipc->fifo_read_position = '\0';
  ipc->fifo_write_position = '\0';
  ipc->status = '\x01';
  return;
}


