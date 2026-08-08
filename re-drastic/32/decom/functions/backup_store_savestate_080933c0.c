/*
 * Ghidra decompilation
 *
 * Function : backup_store_savestate
 * Address  : 080933c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_store_savestate(backup_struct *backup,mem_file_struct *savestate_file,u32 version)

{
  u8 *puVar1;
  
  *(u32 *)savestate_file->buffer_ptr = backup->access_address;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  *(u16 *)(puVar1 + 4) = backup->mode;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 2;
  puVar1[2] = backup->state;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 1;
  puVar1[1] = backup->status;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 1;
  puVar1[1] = backup->state_step;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
  return;
}


