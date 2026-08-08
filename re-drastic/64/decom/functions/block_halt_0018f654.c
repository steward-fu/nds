/*
 * Ghidra decompilation
 *
 * Function : block_halt
 * Address  : 0018f654
 * Program  : drastic64
 */


void block_halt(undefined4 param_1)

{
  undefined8 uVar1;
  long unaff_x28;
  
  *(undefined4 *)(unaff_x28 + 0x23bc) = param_1;
  uVar1 = nzcv;
  *(uint *)(unaff_x28 + 0x23c0) =
       (uint)uVar1 & 0xf0000000 | *(uint *)(unaff_x28 + 0x23c0) & 0xfffffff;
                    /* WARNING: Could not recover jumptable at 0x0018f674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x28 + 0x23b0))();
  return;
}


