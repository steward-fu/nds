/*
 * Ghidra decompilation
 *
 * Function : arm64_msr_spsr
 * Address  : 0018f520
 * Program  : drastic64
 */


void arm64_msr_spsr(uint param_1,uint param_2)

{
  long in_x9;
  long unaff_x28;
  
  if ((*(uint *)(unaff_x28 + 0x23c0) & 0xf) != 0) {
    *(uint *)(in_x9 + -0x2e8 + (ulong)*(uint *)(unaff_x28 + 0x2104) * 4) =
         *(uint *)(in_x9 + -0x2e8 + (ulong)*(uint *)(unaff_x28 + 0x2104) * 4) & param_2 | param_1;
  }
  return;
}


