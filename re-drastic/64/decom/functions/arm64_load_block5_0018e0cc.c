/*
 * Ghidra decompilation
 *
 * Function : arm64_load_block5
 * Address  : 0018e0cc
 * Program  : drastic64
 */


long arm64_load_block5(ulong param_1)

{
  long lVar1;
  long in_x9;
  undefined4 unaff_w21;
  long unaff_x28;
  
  lVar1 = *(long *)(in_x9 + (param_1 >> 0xb & 0x1fffff) * 8) * 4;
  if (lVar1 != 0) {
    return lVar1 + (ulong)((uint)param_1 & 0xfffffffc);
  }
  *(undefined4 *)(unaff_x28 + 0x2340) = unaff_w21;
  lVar1 = arm64_load_block_extended();
  return lVar1;
}


