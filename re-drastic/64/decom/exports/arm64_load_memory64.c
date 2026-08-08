/*
 * Ghidra decompilation
 *
 * Function : arm64_load_memory64
 * Address  : 0018d07c
 * Program  : drastic64
 */


void arm64_load_memory64(int param_1)

{
  undefined4 uVar1;
  long unaff_x28;
  undefined8 unaff_x30;
  
  *(undefined8 *)(unaff_x28 + 0x2338) = unaff_x30;
  *(int *)(unaff_x28 + 0x2334) = param_1 + 4;
  uVar1 = arm64_load_memory32_unsigned();
  *(undefined4 *)(unaff_x28 + 0x2340) = uVar1;
  arm64_load_memory32_unsigned(*(undefined4 *)(unaff_x28 + 0x2334));
  return;
}


