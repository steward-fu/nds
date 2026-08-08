/*
 * Ghidra decompilation
 *
 * Function : coprocessor_store_savestate
 * Address  : 080227d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void coprocessor_store_savestate
               (coprocessor_struct *coprocessor,mem_file_struct *savestate_file,u32 version)

{
  u8 *puVar1;
  
  *(u32 *)savestate_file->buffer_ptr = coprocessor->control;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  *(u32 *)(puVar1 + 4) = coprocessor->dtcm_control;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  *(u32 *)(puVar1 + 4) = coprocessor->itcm_control;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 4;
  return;
}


