/*
 * Ghidra decompilation
 *
 * Function : update_coprocessor_dtcm_control
 * Address  : 08022210
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 update_coprocessor_dtcm_control(coprocessor_struct *coprocessor)

{
  bool bVar1;
  u32 control;
  uint dtcm_base;
  uint uVar2;
  u32 dtcm_in_mapped_memory;
  
  dtcm_base = coprocessor->dtcm_control & 0xfffff000;
  uVar2 = 0x200 << ((coprocessor->dtcm_control << 0x1a) >> 0x1b);
  coprocessor->dtcm_offset = dtcm_base;
  coprocessor->dtcm_virtual_size = uVar2;
  if (uVar2 < 0x1000) {
    uVar2 = 0x1000;
    coprocessor->dtcm_virtual_size = 0x1000;
  }
  remap_dtcm(coprocessor->memory,dtcm_base,uVar2);
  bVar1 = coprocessor->dtcm_offset + coprocessor->dtcm_virtual_size < 0x4000000;
  uVar2 = (uint)(coprocessor->dtcm_in_mapped_memory ^ bVar1);
  coprocessor->dtcm_in_mapped_memory = bVar1;
  if (uVar2 != 0) {
    __printf_chk(1,"DTCM in mapped memory status changed (to %d)\n");
  }
  return uVar2;
}


