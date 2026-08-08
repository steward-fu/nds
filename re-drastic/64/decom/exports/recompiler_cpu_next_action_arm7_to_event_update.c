/*
 * Ghidra decompilation
 *
 * Function : recompiler_cpu_next_action_arm7_to_event_update
 * Address  : 0018cc40
 * Program  : drastic64
 */


void recompiler_cpu_next_action_arm7_to_event_update(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  int iVar4;
  int in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 in_w16;
  undefined4 in_w17;
  undefined4 in_w18;
  undefined4 unaff_w19;
  long lVar5;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  undefined4 unaff_w27;
  long unaff_x28;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    *(code **)(unaff_x28 + 0x2298) = UNRECOVERED_JUMPTABLE;
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
    *(int *)(unaff_x28 + 0x2290) = in_w12;
    lVar5 = *(long *)(unaff_x28 + 0x2258);
    execute_events(lVar5,param_2);
    if (*(int *)(nds_system + lVar5 + 0x10cde58) != 0) {
      if ((*(uint *)(nds_system + lVar5 + 0x10ce110) >> 7 & 1) == 0) {
        if (*(long *)(nds_system + lVar5 + 0x10cdfe8) != 0) {
          *(undefined4 *)(nds_system + lVar5 + 0x10ce10c) =
               *(undefined4 *)
                (*(long *)(nds_system + lVar5 + 0x10ce0b0) +
                 (ulong)*(uint *)(*(long *)(nds_system + lVar5 + 0x10cdfe8) + -0xc) + 4);
        }
        *(uint *)(nds_system + lVar5 + 0x10ce110) =
             *(uint *)(nds_system + lVar5 + 0x10ce108) & 0xf0000000 |
             *(uint *)(nds_system + lVar5 + 0x10ce110) & 0xfffffff;
        execute_arm_raise_interrupt(lVar5 + 0x15c7d50);
        lVar3 = *(long *)(nds_system + lVar5 + 0x10cdfd0);
      }
      else {
        if (*(int *)(nds_system + lVar5 + 0x10cde60) == 0) goto LAB_0018cd00;
        lVar3 = cpu_block_lookup_base
                          (lVar5 + 0x15c7d50,*(undefined4 *)(nds_system + lVar5 + 0x10ce10c));
      }
      *(undefined4 *)(nds_system + lVar5 + 0x10cde60) = 0;
      *(long *)(nds_system + lVar5 + 0x10cdfe8) = lVar3 + 8;
    }
LAB_0018cd00:
    if (*(int *)(nds_system + lVar5 + 0x20d4448) != 0) {
      if ((*(uint *)(nds_system + lVar5 + 0x20d4700) >> 7 & 1) == 0) {
        if (*(long *)(nds_system + lVar5 + 0x20d45d8) != 0) {
          *(undefined4 *)(nds_system + lVar5 + 0x20d46fc) =
               *(undefined4 *)
                (*(long *)(nds_system + lVar5 + 0x20d46a0) +
                 (ulong)*(uint *)(*(long *)(nds_system + lVar5 + 0x20d45d8) + -0xc) + 4);
        }
        if ((*(int *)(nds_system + lVar5 + 0x20d4450) != 0) &&
           (event_force_task_switch_function(lVar5),
           (*(uint *)(nds_system + lVar5 + 0x20d4450) >> 1 & 1) != 0)) {
          *(int *)(nds_system + lVar5 + 0x10cde60) = *(int *)(nds_system + lVar5 + 0x10cde60) + -2;
        }
        *(uint *)(nds_system + lVar5 + 0x20d4700) =
             *(uint *)(nds_system + lVar5 + 0x20d46f8) & 0xf0000000 |
             *(uint *)(nds_system + lVar5 + 0x20d4700) & 0xfffffff;
        execute_arm_raise_interrupt(lVar5 + 0x25ce340);
        lVar3 = *(long *)(nds_system + lVar5 + 0x20d45c0);
      }
      else {
        if (*(int *)(nds_system + lVar5 + 0x20d4450) == 0) goto LAB_0018cdac;
        event_force_task_switch_function(lVar5);
        if ((*(uint *)(nds_system + lVar5 + 0x20d4450) >> 1 & 1) != 0) {
          *(int *)(nds_system + lVar5 + 0x10cde60) = *(int *)(nds_system + lVar5 + 0x10cde60) + -2;
        }
        lVar3 = cpu_block_lookup_base
                          (lVar5 + 0x25ce340,*(undefined4 *)(nds_system + lVar5 + 0x20d46fc));
      }
      *(undefined4 *)(nds_system + lVar5 + 0x20d4450) = 0;
      *(long *)(nds_system + lVar5 + 0x20d45d8) = lVar3 + 8;
    }
LAB_0018cdac:
    iVar1 = **(int **)(lVar5 + 0x318);
    iVar4 = *(int *)(nds_system + lVar5 + 0x10cdfe0);
    *(int *)(lVar5 + 0x10) = iVar1;
    iVar4 = iVar4 + iVar1;
    nzcv = (ulong)*(uint *)(nds_system + lVar5 + 0x10ce108);
    if (-1 < iVar4) {
      if (*(int *)(nds_system + lVar5 + 0x10cde60) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0018ce04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(nds_system + lVar5 + 0x10cdfe8))
                  (0,(ulong)*(uint *)(nds_system + lVar5 + 0x10ce108));
        return;
      }
      iVar4 = -1;
    }
    *(code **)(nds_system + lVar5 + 0x10cdfe8) = *(code **)(nds_system + lVar5 + 0x10cdfe8);
    uVar2 = nzcv;
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0c0) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0c0);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0c4) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0c4);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0c8) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0c8);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0cc) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0cc);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0d0) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0d0);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0d4) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0d4);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0d8) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0d8);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0dc) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0dc);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0e0) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0e0);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0e4) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0e4);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0e8) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0e8);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0ec) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0ec);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0f0) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0f0);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0f4) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0f4);
    *(undefined4 *)(nds_system + lVar5 + 0x10ce0f8) =
         *(undefined4 *)(nds_system + lVar5 + 0x10ce0f8);
    *(int *)(nds_system + lVar5 + 0x10ce108) = (int)uVar2;
    *(int *)(nds_system + lVar5 + 0x10cdfe0) = iVar4;
    unaff_x28 = *(long *)(nds_system + lVar5 + 0x10cdff0);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x28 + 0x2298);
    in_w12 = *(int *)(unaff_x28 + 0x2290) + *(int *)(*(long *)(unaff_x28 + 0x2258) + 0x10);
    in_x9 = unaff_x28 + 0x23d0;
    param_2 = (ulong)*(uint *)(unaff_x28 + 0x23b8);
    in_w13 = *(undefined4 *)(unaff_x28 + 0x2370);
    in_w14 = *(undefined4 *)(unaff_x28 + 0x2374);
    in_w15 = *(undefined4 *)(unaff_x28 + 0x2378);
    in_w16 = *(undefined4 *)(unaff_x28 + 0x237c);
    in_w17 = *(undefined4 *)(unaff_x28 + 0x2380);
    in_w18 = *(undefined4 *)(unaff_x28 + 0x2384);
    unaff_w19 = *(undefined4 *)(unaff_x28 + 0x2388);
    unaff_w20 = *(undefined4 *)(unaff_x28 + 0x238c);
    unaff_w21 = *(undefined4 *)(unaff_x28 + 0x2390);
    unaff_w22 = *(undefined4 *)(unaff_x28 + 0x2394);
    unaff_w23 = *(undefined4 *)(unaff_x28 + 0x2398);
    unaff_w24 = *(undefined4 *)(unaff_x28 + 0x239c);
    unaff_w25 = *(undefined4 *)(unaff_x28 + 0x23a0);
    unaff_w26 = *(undefined4 *)(unaff_x28 + 0x23a4);
    unaff_w27 = *(undefined4 *)(unaff_x28 + 0x23a8);
    nzcv = param_2;
    if (-1 < in_w12) {
      if (*(int *)(unaff_x28 + 0x2110) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0018cc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      in_w12 = -1;
    }
  } while( true );
}


