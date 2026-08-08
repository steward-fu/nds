/*
 * Ghidra decompilation
 *
 * Function : arm64_step_debug
 * Address  : 0018f93c
 * Program  : drastic64
 */


ulong arm64_step_debug(undefined8 param_1,undefined8 param_2)

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
  
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar1 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar1;
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
  *(uint *)(unaff_x28 + 0x23c0) =
       *(uint *)(unaff_x28 + 0x23b8) & 0xf0000000 | *(uint *)(unaff_x28 + 0x23c0) & 0xfffffff;
  step_debug(unaff_x28 + 0x2118,param_2,in_w12);
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  return (ulong)*(uint *)(unaff_x28 + 0x2354);
}


