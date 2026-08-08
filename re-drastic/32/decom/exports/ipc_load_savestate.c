/*
 * Ghidra decompilation
 *
 * Function : ipc_load_savestate
 * Address  : 08022a40
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void ipc_load_savestate(ipc_struct *ipc,mem_file_struct *savestate_file,u32 version)

{
  u32 *puVar1;
  u32 *puVar2;
  u32 *puVar3;
  u32 *puVar4;
  u8 *puVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uVar8;
  
  puVar2 = (u32 *)savestate_file->buffer_ptr;
  puVar1 = ipc->fifo_data;
  puVar3 = puVar2;
  do {
    puVar4 = puVar3 + 4;
    uVar7 = puVar3[1];
    uVar6 = puVar3[2];
    uVar8 = puVar3[3];
    *puVar1 = *puVar3;
    puVar1[1] = uVar7;
    puVar1[2] = uVar6;
    puVar1[3] = uVar8;
    puVar1 = puVar1 + 4;
    puVar3 = puVar4;
  } while (puVar4 != puVar2 + 0x10);
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 0x40;
  ipc->fifo_read_position = puVar5[0x40];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  ipc->fifo_write_position = puVar5[1];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  ipc->status = puVar5[1];
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
  return;
}


