/*
 * Ghidra decompilation
 *
 * Function : ipc_store_savestate
 * Address  : 08022ae0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void ipc_store_savestate(ipc_struct *ipc,mem_file_struct *savestate_file,u32 version)

{
  u32 *puVar1;
  u32 *puVar2;
  u32 *puVar3;
  u8 *puVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  
  puVar1 = (u32 *)savestate_file->buffer_ptr;
  puVar2 = ipc->fifo_data;
  do {
    puVar3 = puVar2 + 4;
    uVar6 = puVar2[1];
    uVar5 = puVar2[2];
    uVar7 = puVar2[3];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1[2] = uVar5;
    puVar1[3] = uVar7;
    puVar1 = puVar1 + 4;
    puVar2 = puVar3;
  } while (puVar3 != (u32 *)&ipc->fifo_read_position);
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 0x40;
  puVar4[0x40] = ipc->fifo_read_position;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 1;
  puVar4[1] = ipc->fifo_write_position;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 1;
  puVar4[1] = ipc->status;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
  return;
}


