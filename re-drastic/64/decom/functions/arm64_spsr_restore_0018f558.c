/*
 * Ghidra decompilation
 *
 * Function : arm64_spsr_restore
 * Address  : 0018f558
 * Program  : drastic64
 */


void arm64_spsr_restore(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
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
  *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
  uVar1 = *(uint *)(in_x9 + -0x2e8 + (ulong)*(uint *)(unaff_x28 + 0x2104) * 4);
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = uVar1 & 0xffffffdf;
    param_1 = param_1 | 1;
  }
  *(uint *)(unaff_x28 + 0x23c0) = uVar1;
  *(uint *)(unaff_x28 + 0x23b8) = uVar1;
  *(uint *)(unaff_x28 + 0x23bc) = param_1;
  execute_arm_set_cpu_mode_from_cpsr();
  if ((*(int *)(unaff_x28 + 0x2108) != 0) && ((*(uint *)(unaff_x28 + 0x23c0) >> 7 & 1) == 0)) {
    execute_arm_raise_interrupt();
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x23b8);
                    /* WARNING: Could not recover jumptable at 0x0018f608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x28 + 0x2280))
              (*(code **)(unaff_x28 + 0x2280),(ulong)*(uint *)(unaff_x28 + 0x23b8));
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)cpu_block_lookup_base();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x23b8);
                    /* WARNING: Could not recover jumptable at 0x0018f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,(ulong)*(uint *)(unaff_x28 + 0x23b8));
  return;
}


