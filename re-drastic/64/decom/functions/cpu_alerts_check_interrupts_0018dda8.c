/*
 * Ghidra decompilation
 *
 * Function : cpu_alerts_check_interrupts
 * Address  : 0018dda8
 * Program  : drastic64
 */


void cpu_alerts_check_interrupts(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
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
  
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  if (*(int *)(unaff_x28 + 0x2108) == 0) {
    return;
  }
  if ((*(uint *)(unaff_x28 + 0x23c0) >> 7 & 1) != 0) {
    return;
  }
  *(uint *)(unaff_x28 + 0x23c0) =
       *(uint *)(unaff_x28 + 0x23b8) & 0xf0000000 | *(uint *)(unaff_x28 + 0x23c0) & 0xfffffff;
  uVar1 = nzcv;
  *(undefined4 *)(unaff_x28 + 0x2370) = *(undefined4 *)(unaff_x28 + 0x22f4);
  *(undefined4 *)(unaff_x28 + 0x2374) = *(undefined4 *)(unaff_x28 + 0x22f8);
  *(undefined4 *)(unaff_x28 + 0x2378) = *(undefined4 *)(unaff_x28 + 0x22fc);
  *(undefined4 *)(unaff_x28 + 0x237c) = *(undefined4 *)(unaff_x28 + 0x2300);
  *(undefined4 *)(unaff_x28 + 0x2380) = *(undefined4 *)(unaff_x28 + 0x2304);
  *(undefined4 *)(unaff_x28 + 0x2384) = *(undefined4 *)(unaff_x28 + 0x2308);
  *(undefined4 *)(unaff_x28 + 0x2388) = unaff_w19;
  *(undefined4 *)(unaff_x28 + 0x238c) = unaff_w20;
  *(undefined4 *)(unaff_x28 + 0x2390) = unaff_w21;
  *(undefined4 *)(unaff_x28 + 0x2394) = unaff_w22;
  *(undefined4 *)(unaff_x28 + 0x2398) = unaff_w23;
  *(undefined4 *)(unaff_x28 + 0x239c) = unaff_w24;
  *(undefined4 *)(unaff_x28 + 0x23a0) = unaff_w25;
  *(undefined4 *)(unaff_x28 + 0x23a4) = unaff_w26;
  *(undefined4 *)(unaff_x28 + 0x23a8) = unaff_w27;
  *(int *)(unaff_x28 + 0x23b8) = (int)uVar1;
  *(undefined4 *)(unaff_x28 + 0x2290) = *(undefined4 *)(unaff_x28 + 0x22f0);
  uVar2 = cpu_translate_get_pc
                    (*(undefined8 *)(unaff_x28 + 0x2368),*(undefined8 *)(unaff_x28 + 0x2360));
  *(undefined4 *)(unaff_x28 + 0x23bc) = uVar2;
  execute_arm_raise_interrupt();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x23b8);
                    /* WARNING: Could not recover jumptable at 0x0018de78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x28 + 0x2280))
            (*(code **)(unaff_x28 + 0x2280),(ulong)*(uint *)(unaff_x28 + 0x23b8));
  return;
}


