/*
 * Ghidra decompilation
 *
 * Function : coprocessor_register_load
 * Address  : 080222d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 coprocessor_register_load(coprocessor_struct *coprocessor,u32 cn,u32 cm,u32 operation)

{
  u32 uVar1;
  
  if (cn == 1) {
    if ((cm | operation) == 0) {
      return coprocessor->control;
    }
  }
  else if (cn == 0) {
    if (cm == 0) {
      if (operation == 1) {
        return 0xf0d2112;
      }
      uVar1 = 0x140180;
      if (operation != 2) {
        uVar1 = 0x41009561;
      }
      return uVar1;
    }
  }
  else if ((cn == 9) && (cm == 1)) {
    if (operation == 0) {
      return coprocessor->dtcm_control;
    }
    if (operation == 1) {
      return coprocessor->itcm_control;
    }
  }
  return 0;
}


