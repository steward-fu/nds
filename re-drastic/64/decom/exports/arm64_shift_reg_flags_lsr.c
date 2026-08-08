/*
 * Ghidra decompilation
 *
 * Function : arm64_shift_reg_flags_lsr
 * Address  : 0018f8b0
 * Program  : drastic64
 */


void arm64_shift_reg_flags_lsr(void)

{
  uint in_w3;
  
  if ((in_w3 != 0) && ((in_w3 & 0xe0) != 0)) {
    if (in_w3 != 0x20) {
      return;
    }
    return;
  }
  return;
}


