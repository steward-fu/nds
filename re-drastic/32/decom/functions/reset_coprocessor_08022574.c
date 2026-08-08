/*
 * Ghidra decompilation
 *
 * Function : reset_coprocessor
 * Address  : 08022574
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_coprocessor(coprocessor_struct *coprocessor)

{
  bool bVar1;
  byte bVar2;
  u32 dtcm_in_mapped_memory;
  uint itcm_size;
  
  coprocessor->dtcm_in_mapped_memory = '\x01';
  coprocessor->exception_vector_offset = 0xffff0000;
  coprocessor->control = 0x12078;
  coprocessor->dtcm_control = 0x27e000a;
  coprocessor->itcm_control = 0x20;
  coprocessor->dtcm_offset = 0x27e0000;
  coprocessor->dtcm_enable = 1;
  coprocessor->dtcm_mode = 0;
  coprocessor->dtcm_virtual_size = 0x4000;
  coprocessor->itcm_enable = 0;
  coprocessor->itcm_mode = 0;
  remap_dtcm(coprocessor->memory,0x27e0000,0x4000);
  bVar2 = coprocessor->dtcm_in_mapped_memory;
  bVar1 = coprocessor->dtcm_offset + coprocessor->dtcm_virtual_size < 0x4000000;
  dtcm_in_mapped_memory = (u32)bVar1;
  coprocessor->dtcm_in_mapped_memory = bVar1;
  if (dtcm_in_mapped_memory != bVar2) {
    __printf_chk(1,"DTCM in mapped memory status changed (to %d)\n");
  }
  itcm_size = 0x200 << ((coprocessor->itcm_control << 0x1a) >> 0x1b);
  if (itcm_size < 0x1000) {
    itcm_size = 0x1000;
    coprocessor->itcm_virtual_size = 0x1000;
  }
  else {
    coprocessor->itcm_virtual_size = itcm_size;
  }
  remap_itcm(coprocessor->memory,itcm_size);
  return;
}


