/*
 * Ghidra decompilation
 *
 * Function : block_halt
 * Address  : 080aee2c
 * Program  : drastic
 */


void block_halt(undefined4 param_1)

{
  int unaff_r11;
  
  *(undefined4 *)(unaff_r11 + -0x5c) = param_1;
  *(uint *)(unaff_r11 + -0x58) =
       *(uint *)(unaff_r11 + -0x80) & 0xf0000000 | *(uint *)(unaff_r11 + -0x58) & 0xfffffff;
                    /* WARNING: Could not recover jumptable at 0x080aee4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r11 + -0xc))();
  return;
}


