/*
 * Ghidra decompilation
 *
 * Function : backup_load_savestate
 * Address  : 08093344
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_load_savestate(backup_struct *backup,mem_file_struct *savestate_file,u32 version)

{
  u8 *puVar1;
  
  backup->access_address = *(u32 *)savestate_file->buffer_ptr;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  backup->mode = *(u16 *)(puVar1 + 4);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 2;
  backup->state = puVar1[2];
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 1;
  backup->status = puVar1[1];
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 1;
  backup->state_step = puVar1[1];
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
  return;
}


