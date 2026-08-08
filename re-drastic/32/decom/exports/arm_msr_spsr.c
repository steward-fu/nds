/*
 * Ghidra decompilation
 *
 * Function : arm_msr_spsr
 * Address  : 080aeca4
 * Program  : drastic
 */


void arm_msr_spsr(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  int unaff_r11;
  
  *(undefined4 *)(unaff_r11 + -0x140) = param_3;
  if ((*(uint *)(unaff_r11 + -0x58) & 0xf) != 0) {
    *(undefined4 *)(unaff_r11 + -0x13c) = param_4;
    *(undefined4 *)(unaff_r11 + -0x138) = unaff_r4;
    *(uint *)(unaff_r11 + -0x2a0 + *(int *)(unaff_r11 + -0x284) * 4) =
         *(uint *)(unaff_r11 + -0x2a0 + *(int *)(unaff_r11 + -0x284) * 4) & param_2 | param_1;
  }
  return;
}


