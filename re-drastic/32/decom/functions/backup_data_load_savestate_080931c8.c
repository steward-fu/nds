/*
 * Ghidra decompilation
 *
 * Function : backup_data_load_savestate
 * Address  : 080931c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_data_load_savestate(backup_struct *backup,mem_file_struct *savestate_file,u32 version)

{
  u32 uVar1;
  u8 *__dest;
  u32 uVar2;
  u32 address_mask_pre_load;
  u8 *puVar3;
  
  uVar2 = backup->address_mask;
  backup->type = *(backup_type_enum *)savestate_file->buffer_ptr;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 4;
  backup->address_mask = *(u32 *)(puVar3 + 4);
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 4;
  *(undefined4 *)backup->jedec_id = *(undefined4 *)(puVar3 + 4);
  puVar3 = savestate_file->buffer_ptr;
  uVar1 = backup->address_mask;
  savestate_file->buffer_ptr = puVar3 + 4;
  backup->address_bytes = puVar3[4];
  puVar3 = savestate_file->buffer_ptr + 1;
  savestate_file->buffer_ptr = puVar3;
  if (uVar2 == uVar1) {
    __dest = backup->data;
  }
  else {
    __dest = (u8 *)realloc(backup->data,uVar1 + 1);
    uVar2 = backup->address_mask;
    puVar3 = savestate_file->buffer_ptr;
    backup->data = __dest;
  }
  memcpy(__dest,puVar3,uVar2 + 1);
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + backup->address_mask + 1;
  return;
}


