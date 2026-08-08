/*
 * Ghidra decompilation
 *
 * Function : arm64_msr_cpsr_low
 * Address  : 0018f43c
 * Program  : drastic64
 */


void arm64_msr_cpsr_low(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
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
  
  uVar1 = *(uint *)(unaff_x28 + 0x23c0);
  *(uint *)(unaff_x28 + 0x23c0) = param_1;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = nzcv;
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
    *(int *)(unaff_x28 + 0x23b8) = (int)uVar2;
    *(undefined4 *)(in_x9 + -0xe0) = in_w12;
    *(undefined4 *)(in_x9 + -0xdc) = in_w13;
    *(undefined4 *)(in_x9 + -0xd8) = in_w14;
    *(undefined4 *)(in_x9 + -0xd4) = in_w15;
    *(undefined4 *)(in_x9 + -0xd0) = in_w16;
    *(undefined4 *)(in_x9 + -0xcc) = in_w17;
    *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
    *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
    uVar2 = nzcv;
    *(int *)(unaff_x28 + 0x2354) = (int)uVar2;
    execute_arm_set_cpu_mode_from_cpsr();
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x23b8);
    cpu_alerts_check_interrupts((ulong)*(uint *)(unaff_x28 + 0x23b8));
    return;
  }
  if (((uVar1 & (param_1 ^ uVar1)) >> 7 & 1) == 0) {
    return;
  }
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar2 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar2;
  cpu_alerts_check_interrupts();
  return;
}


