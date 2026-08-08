/*
 * Ghidra decompilation
 *
 * Function : arm_mrs_cpsr
 * Address  : 080aece4
 * Program  : drastic
 */


uint arm_mrs_cpsr(void)

{
  int unaff_r11;
  
  return *(uint *)(unaff_r11 + -0x58) & 0xf0000000 | *(uint *)(unaff_r11 + -0x80) & 0xfffffff;
}


