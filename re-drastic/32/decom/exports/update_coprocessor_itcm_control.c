/*
 * Ghidra decompilation
 *
 * Function : update_coprocessor_itcm_control
 * Address  : 080222a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void update_coprocessor_itcm_control(coprocessor_struct *coprocessor)

{
  uint itcm_size;
  
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


