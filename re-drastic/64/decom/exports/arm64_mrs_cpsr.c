/*
 * Ghidra decompilation
 *
 * Function : arm64_mrs_cpsr
 * Address  : 0018f548
 * Program  : drastic64
 */


uint arm64_mrs_cpsr(void)

{
  undefined8 uVar1;
  long unaff_x28;
  
  uVar1 = nzcv;
  return *(uint *)(unaff_x28 + 0x23c0) & 0xf0000000 | (uint)uVar1 & 0xfffffff;
}


