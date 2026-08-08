/*
 * Ghidra decompilation
 *
 * Function : backup_data_store_savestate
 * Address  : 08093298
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_data_store_savestate(backup_struct *backup,mem_file_struct *savestate_file,u32 version)

{
  u8 *puVar1;
  u32 uVar2;
  u8 *puVar3;
  
  *(backup_type_enum *)savestate_file->buffer_ptr = backup->type;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  *(u32 *)(puVar1 + 4) = backup->address_mask;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)backup->jedec_id;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  puVar1[4] = backup->address_bytes;
  puVar3 = savestate_file->buffer_ptr;
  uVar2 = backup->address_mask;
  puVar1 = backup->data;
  savestate_file->buffer_ptr = puVar3 + 1;
  memcpy(puVar3 + 1,puVar1,uVar2 + 1);
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + backup->address_mask + 1;
  return;
}


