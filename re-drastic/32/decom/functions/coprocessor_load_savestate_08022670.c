/*
 * Ghidra decompilation
 *
 * Function : coprocessor_load_savestate
 * Address  : 08022670
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void coprocessor_load_savestate
               (coprocessor_struct *coprocessor,mem_file_struct *savestate_file,u32 version)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  u32 control;
  uint dtcm_base;
  u32 uVar4;
  u32 old_exception_vector_offset;
  u32 dtcm_in_mapped_memory;
  u32 uVar5;
  u8 *puVar6;
  
  uVar4 = coprocessor->exception_vector_offset;
  coprocessor->control = *(u32 *)savestate_file->buffer_ptr;
  puVar6 = savestate_file->buffer_ptr;
  uVar3 = coprocessor->control;
  uVar5 = uVar3 & 0x2000;
  savestate_file->buffer_ptr = puVar6 + 4;
  if (uVar5 != 0) {
    uVar5 = 0xffff0000;
  }
  coprocessor->dtcm_control = *(u32 *)(puVar6 + 4);
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 4;
  coprocessor->itcm_control = *(u32 *)(puVar6 + 4);
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 4;
  coprocessor->exception_vector_offset = uVar5;
  coprocessor->dtcm_enable = (uVar3 << 0xf) >> 0x1f;
  coprocessor->dtcm_mode = (uVar3 << 0xe) >> 0x1f;
  coprocessor->itcm_enable = (uVar3 << 0xd) >> 0x1f;
  coprocessor->itcm_mode = (uVar3 << 0xc) >> 0x1f;
  if (uVar4 != uVar5) {
    __printf_chk(1,"Changing exception vector offset from %08x to %08x\n");
  }
  uVar3 = 0x200 << ((coprocessor->itcm_control << 0x1a) >> 0x1b);
  if (uVar3 < 0x1000) {
    uVar3 = 0x1000;
    coprocessor->itcm_virtual_size = 0x1000;
  }
  else {
    coprocessor->itcm_virtual_size = uVar3;
  }
  remap_itcm(coprocessor->memory,uVar3);
  dtcm_base = coprocessor->dtcm_control & 0xfffff000;
  uVar3 = 0x200 << ((coprocessor->dtcm_control << 0x1a) >> 0x1b);
  coprocessor->dtcm_offset = dtcm_base;
  coprocessor->dtcm_virtual_size = uVar3;
  if (uVar3 < 0x1000) {
    uVar3 = 0x1000;
    coprocessor->dtcm_virtual_size = 0x1000;
  }
  remap_dtcm(coprocessor->memory,dtcm_base,uVar3);
  bVar2 = coprocessor->dtcm_in_mapped_memory;
  bVar1 = coprocessor->dtcm_offset + coprocessor->dtcm_virtual_size < 0x4000000;
  dtcm_in_mapped_memory = (u32)bVar1;
  coprocessor->dtcm_in_mapped_memory = bVar1;
  if (dtcm_in_mapped_memory != bVar2) {
    __printf_chk(1,"DTCM in mapped memory status changed (to %d)\n");
    return;
  }
  return;
}


