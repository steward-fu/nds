/*
 * Ghidra decompilation
 *
 * Function : recompiler_cpu_next_action_arm9_to_arm7
 * Address  : 0018cbb0
 * Program  : drastic64
 */


void recompiler_cpu_next_action_arm9_to_arm7(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  int in_w12;
  int iVar5;
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
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    *(code **)(unaff_x28 + 0x2298) = UNRECOVERED_JUMPTABLE;
    uVar3 = nzcv;
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
    *(int *)(unaff_x28 + 0x23b8) = (int)uVar3;
    *(int *)(unaff_x28 + 0x2290) = in_w12;
    lVar6 = *(long *)(unaff_x28 + 0x22a0);
    iVar5 = *(int *)(lVar6 + 0x2290) + *(int *)(*(long *)(lVar6 + 0x2258) + 0x10);
    uVar1 = *(uint *)(lVar6 + 0x23b8);
    nzcv = (ulong)uVar1;
    if (-1 < iVar5) {
      if (*(int *)(lVar6 + 0x2110) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0018cc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x2298))();
        return;
      }
      iVar5 = -1;
    }
    *(code **)(lVar6 + 0x2298) = *(code **)(lVar6 + 0x2298);
    uVar3 = nzcv;
    *(undefined4 *)(lVar6 + 0x2370) = *(undefined4 *)(lVar6 + 0x2370);
    *(undefined4 *)(lVar6 + 0x2374) = *(undefined4 *)(lVar6 + 0x2374);
    *(undefined4 *)(lVar6 + 0x2378) = *(undefined4 *)(lVar6 + 0x2378);
    *(undefined4 *)(lVar6 + 0x237c) = *(undefined4 *)(lVar6 + 0x237c);
    *(undefined4 *)(lVar6 + 0x2380) = *(undefined4 *)(lVar6 + 0x2380);
    *(undefined4 *)(lVar6 + 0x2384) = *(undefined4 *)(lVar6 + 0x2384);
    *(undefined4 *)(lVar6 + 0x2388) = *(undefined4 *)(lVar6 + 0x2388);
    *(undefined4 *)(lVar6 + 0x238c) = *(undefined4 *)(lVar6 + 0x238c);
    *(undefined4 *)(lVar6 + 0x2390) = *(undefined4 *)(lVar6 + 0x2390);
    *(undefined4 *)(lVar6 + 0x2394) = *(undefined4 *)(lVar6 + 0x2394);
    *(undefined4 *)(lVar6 + 0x2398) = *(undefined4 *)(lVar6 + 0x2398);
    *(undefined4 *)(lVar6 + 0x239c) = *(undefined4 *)(lVar6 + 0x239c);
    *(undefined4 *)(lVar6 + 0x23a0) = *(undefined4 *)(lVar6 + 0x23a0);
    *(undefined4 *)(lVar6 + 0x23a4) = *(undefined4 *)(lVar6 + 0x23a4);
    *(undefined4 *)(lVar6 + 0x23a8) = *(undefined4 *)(lVar6 + 0x23a8);
    *(int *)(lVar6 + 0x23b8) = (int)uVar3;
    *(int *)(lVar6 + 0x2290) = iVar5;
    lVar6 = *(long *)(lVar6 + 0x2258);
    execute_events(lVar6,(ulong)uVar1);
    unaff_x28 = lVar6 + 0x15c7d50;
    if (*(int *)(nds_system + lVar6 + 0x10cde58) != 0) {
      if ((*(uint *)(nds_system + lVar6 + 0x10ce110) >> 7 & 1) == 0) {
        if (*(long *)(nds_system + lVar6 + 0x10cdfe8) != 0) {
          *(undefined4 *)(nds_system + lVar6 + 0x10ce10c) =
               *(undefined4 *)
                (*(long *)(nds_system + lVar6 + 0x10ce0b0) +
                 (ulong)*(uint *)(*(long *)(nds_system + lVar6 + 0x10cdfe8) + -0xc) + 4);
        }
        *(uint *)(nds_system + lVar6 + 0x10ce110) =
             *(uint *)(nds_system + lVar6 + 0x10ce108) & 0xf0000000 |
             *(uint *)(nds_system + lVar6 + 0x10ce110) & 0xfffffff;
        execute_arm_raise_interrupt(unaff_x28);
        lVar4 = *(long *)(nds_system + lVar6 + 0x10cdfd0);
      }
      else {
        if (*(int *)(nds_system + lVar6 + 0x10cde60) == 0) goto LAB_0018cd00;
        lVar4 = cpu_block_lookup_base(unaff_x28,*(undefined4 *)(nds_system + lVar6 + 0x10ce10c));
      }
      *(undefined4 *)(nds_system + lVar6 + 0x10cde60) = 0;
      *(long *)(nds_system + lVar6 + 0x10cdfe8) = lVar4 + 8;
    }
LAB_0018cd00:
    if (*(int *)(nds_system + lVar6 + 0x20d4448) != 0) {
      if ((*(uint *)(nds_system + lVar6 + 0x20d4700) >> 7 & 1) == 0) {
        if (*(long *)(nds_system + lVar6 + 0x20d45d8) != 0) {
          *(undefined4 *)(nds_system + lVar6 + 0x20d46fc) =
               *(undefined4 *)
                (*(long *)(nds_system + lVar6 + 0x20d46a0) +
                 (ulong)*(uint *)(*(long *)(nds_system + lVar6 + 0x20d45d8) + -0xc) + 4);
        }
        if ((*(int *)(nds_system + lVar6 + 0x20d4450) != 0) &&
           (event_force_task_switch_function(lVar6),
           (*(uint *)(nds_system + lVar6 + 0x20d4450) >> 1 & 1) != 0)) {
          *(int *)(nds_system + lVar6 + 0x10cde60) = *(int *)(nds_system + lVar6 + 0x10cde60) + -2;
        }
        *(uint *)(nds_system + lVar6 + 0x20d4700) =
             *(uint *)(nds_system + lVar6 + 0x20d46f8) & 0xf0000000 |
             *(uint *)(nds_system + lVar6 + 0x20d4700) & 0xfffffff;
        execute_arm_raise_interrupt(lVar6 + 0x25ce340);
        lVar4 = *(long *)(nds_system + lVar6 + 0x20d45c0);
      }
      else {
        if (*(int *)(nds_system + lVar6 + 0x20d4450) == 0) goto LAB_0018cdac;
        event_force_task_switch_function(lVar6);
        if ((*(uint *)(nds_system + lVar6 + 0x20d4450) >> 1 & 1) != 0) {
          *(int *)(nds_system + lVar6 + 0x10cde60) = *(int *)(nds_system + lVar6 + 0x10cde60) + -2;
        }
        lVar4 = cpu_block_lookup_base
                          (lVar6 + 0x25ce340,*(undefined4 *)(nds_system + lVar6 + 0x20d46fc));
      }
      *(undefined4 *)(nds_system + lVar6 + 0x20d4450) = 0;
      *(long *)(nds_system + lVar6 + 0x20d45d8) = lVar4 + 8;
    }
LAB_0018cdac:
    iVar5 = **(int **)(lVar6 + 0x318);
    iVar2 = *(int *)(nds_system + lVar6 + 0x10cdfe0);
    *(int *)(lVar6 + 0x10) = iVar5;
    in_w12 = iVar2 + iVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(nds_system + lVar6 + 0x10cdfe8);
    in_x9 = lVar6 + 0x15ca120;
    in_w13 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0c0);
    in_w14 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0c4);
    in_w15 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0c8);
    in_w16 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0cc);
    in_w17 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0d0);
    in_w18 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0d4);
    unaff_w19 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0d8);
    unaff_w20 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0dc);
    unaff_w21 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0e0);
    unaff_w22 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0e4);
    unaff_w23 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0e8);
    unaff_w24 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0ec);
    unaff_w25 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0f0);
    unaff_w26 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0f4);
    unaff_w27 = *(undefined4 *)(nds_system + lVar6 + 0x10ce0f8);
    nzcv = (ulong)*(uint *)(nds_system + lVar6 + 0x10ce108);
    if (-1 < in_w12) {
      if (*(int *)(nds_system + lVar6 + 0x10cde60) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0018ce04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(0,(ulong)*(uint *)(nds_system + lVar6 + 0x10ce108));
        return;
      }
      in_w12 = -1;
    }
  } while( true );
}


