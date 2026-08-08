/*
 * Ghidra decompilation
 *
 * Function : arm64_set_cpu_mode
 * Address  : 0018f7f4
 * Program  : drastic64
 */


ulong arm64_set_cpu_mode(void)

{
  undefined8 uVar1;
  long in_x9;
  undefined4 in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 in_w16;
  undefined4 in_w17;
  undefined4 in_w18;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined8 unaff_x30;
  
  uVar1 = nzcv;
  *(undefined4 *)(in_x9 + -0x60) = in_w13;
  *(undefined4 *)(in_x9 + -0x5c) = in_w14;
  *(undefined4 *)(in_x9 + -0x58) = in_w15;
  *(undefined4 *)(in_x9 + -0x54) = in_w16;
  *(undefined4 *)(in_x9 + -0x50) = in_w17;
  *(undefined4 *)(in_x9 + -0x4c) = in_w18;
  *(undefined4 *)(in_x9 + -0x48) = unaff_w19;
  *(undefined4 *)(in_x9 + -0x44) = unaff_w20;
  *(undefined4 *)(in_x9 + -0x40) = unaff_w21;
  *(undefined4 *)(in_x9 + -0x3c) = unaff_w22;
  *(undefined4 *)(in_x9 + -0x38) = unaff_w23;
  *(undefined4 *)(in_x9 + -0x34) = unaff_w24;
  *(undefined4 *)(in_x9 + -0x30) = unaff_w25;
  *(undefined4 *)(in_x9 + -0x2c) = unaff_w26;
  *(undefined4 *)(in_x9 + -0x28) = unaff_w27;
  *(int *)(unaff_x28 + 0x23b8) = (int)uVar1;
  *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  execute_arm_set_cpu_mode();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x23b8);
  return (ulong)*(uint *)(unaff_x28 + 0x23b8);
}


