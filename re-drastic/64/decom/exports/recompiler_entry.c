/*
 * Ghidra decompilation
 *
 * Function : recompiler_entry
 * Address  : 0018f9cc
 * Program  : drastic64
 */


void recompiler_entry(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  *(undefined8 *)(nds_system + param_1 + 0x20d4698) = param_2;
  *(long *)(nds_system + param_1 + 0x20d46a0) = param_1 + 0x8c000;
  uVar4 = 0x15c7d50;
  *(undefined8 *)(nds_system + param_1 + 0x10ce0a8) = param_2;
  *(long *)(nds_system + param_1 + 0x10ce0b0) = param_1 + 0x8c000;
  do {
    execute_events(param_1,uVar4);
    if (*(int *)(nds_system + param_1 + 0x10cde58) != 0) {
      if ((*(uint *)(nds_system + param_1 + 0x10ce110) >> 7 & 1) == 0) {
        if (*(long *)(nds_system + param_1 + 0x10cdfe8) != 0) {
          *(undefined4 *)(nds_system + param_1 + 0x10ce10c) =
               *(undefined4 *)
                (*(long *)(nds_system + param_1 + 0x10ce0b0) +
                 (ulong)*(uint *)(*(long *)(nds_system + param_1 + 0x10cdfe8) + -0xc) + 4);
        }
        *(uint *)(nds_system + param_1 + 0x10ce110) =
             *(uint *)(nds_system + param_1 + 0x10ce108) & 0xf0000000 |
             *(uint *)(nds_system + param_1 + 0x10ce110) & 0xfffffff;
        execute_arm_raise_interrupt(param_1 + 0x15c7d50);
        lVar3 = *(long *)(nds_system + param_1 + 0x10cdfd0);
      }
      else {
        if (*(int *)(nds_system + param_1 + 0x10cde60) == 0) goto LAB_0018cd00;
        lVar3 = cpu_block_lookup_base
                          (param_1 + 0x15c7d50,*(undefined4 *)(nds_system + param_1 + 0x10ce10c));
      }
      *(undefined4 *)(nds_system + param_1 + 0x10cde60) = 0;
      *(long *)(nds_system + param_1 + 0x10cdfe8) = lVar3 + 8;
    }
LAB_0018cd00:
    if (*(int *)(nds_system + param_1 + 0x20d4448) != 0) {
      if ((*(uint *)(nds_system + param_1 + 0x20d4700) >> 7 & 1) == 0) {
        if (*(long *)(nds_system + param_1 + 0x20d45d8) != 0) {
          *(undefined4 *)(nds_system + param_1 + 0x20d46fc) =
               *(undefined4 *)
                (*(long *)(nds_system + param_1 + 0x20d46a0) +
                 (ulong)*(uint *)(*(long *)(nds_system + param_1 + 0x20d45d8) + -0xc) + 4);
        }
        if ((*(int *)(nds_system + param_1 + 0x20d4450) != 0) &&
           (event_force_task_switch_function(param_1),
           (*(uint *)(nds_system + param_1 + 0x20d4450) >> 1 & 1) != 0)) {
          *(int *)(nds_system + param_1 + 0x10cde60) =
               *(int *)(nds_system + param_1 + 0x10cde60) + -2;
        }
        *(uint *)(nds_system + param_1 + 0x20d4700) =
             *(uint *)(nds_system + param_1 + 0x20d46f8) & 0xf0000000 |
             *(uint *)(nds_system + param_1 + 0x20d4700) & 0xfffffff;
        execute_arm_raise_interrupt(param_1 + 0x25ce340);
        lVar3 = *(long *)(nds_system + param_1 + 0x20d45c0);
      }
      else {
        if (*(int *)(nds_system + param_1 + 0x20d4450) == 0) goto LAB_0018cdac;
        event_force_task_switch_function(param_1);
        if ((*(uint *)(nds_system + param_1 + 0x20d4450) >> 1 & 1) != 0) {
          *(int *)(nds_system + param_1 + 0x10cde60) =
               *(int *)(nds_system + param_1 + 0x10cde60) + -2;
        }
        lVar3 = cpu_block_lookup_base
                          (param_1 + 0x25ce340,*(undefined4 *)(nds_system + param_1 + 0x20d46fc));
      }
      *(undefined4 *)(nds_system + param_1 + 0x20d4450) = 0;
      *(long *)(nds_system + param_1 + 0x20d45d8) = lVar3 + 8;
    }
LAB_0018cdac:
    iVar1 = **(int **)(param_1 + 0x318);
    iVar5 = *(int *)(nds_system + param_1 + 0x10cdfe0);
    *(int *)(param_1 + 0x10) = iVar1;
    iVar5 = iVar5 + iVar1;
    nzcv = (ulong)*(uint *)(nds_system + param_1 + 0x10ce108);
    if (-1 < iVar5) {
      if (*(int *)(nds_system + param_1 + 0x10cde60) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0018ce04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(nds_system + param_1 + 0x10cdfe8))
                  (0,(ulong)*(uint *)(nds_system + param_1 + 0x10ce108));
        return;
      }
      iVar5 = -1;
    }
    *(code **)(nds_system + param_1 + 0x10cdfe8) = *(code **)(nds_system + param_1 + 0x10cdfe8);
    uVar2 = nzcv;
    *(undefined4 *)(nds_system + param_1 + 0x10ce0c0) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0c0);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0c4) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0c4);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0c8) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0c8);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0cc) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0cc);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0d0) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0d0);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0d4) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0d4);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0d8) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0d8);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0dc) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0dc);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0e0) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0e0);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0e4) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0e4);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0e8) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0e8);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0ec) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0ec);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0f0) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0f0);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0f4) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0f4);
    *(undefined4 *)(nds_system + param_1 + 0x10ce0f8) =
         *(undefined4 *)(nds_system + param_1 + 0x10ce0f8);
    *(int *)(nds_system + param_1 + 0x10ce108) = (int)uVar2;
    *(int *)(nds_system + param_1 + 0x10cdfe0) = iVar5;
    lVar3 = *(long *)(nds_system + param_1 + 0x10cdff0);
    iVar5 = *(int *)(lVar3 + 0x2290) + *(int *)(*(long *)(lVar3 + 0x2258) + 0x10);
    uVar4 = (ulong)*(uint *)(lVar3 + 0x23b8);
    nzcv = uVar4;
    if (-1 < iVar5) {
      if (*(int *)(lVar3 + 0x2110) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0018cc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x2298))();
        return;
      }
      iVar5 = -1;
    }
    *(code **)(lVar3 + 0x2298) = *(code **)(lVar3 + 0x2298);
    uVar2 = nzcv;
    *(undefined4 *)(lVar3 + 0x2370) = *(undefined4 *)(lVar3 + 0x2370);
    *(undefined4 *)(lVar3 + 0x2374) = *(undefined4 *)(lVar3 + 0x2374);
    *(undefined4 *)(lVar3 + 0x2378) = *(undefined4 *)(lVar3 + 0x2378);
    *(undefined4 *)(lVar3 + 0x237c) = *(undefined4 *)(lVar3 + 0x237c);
    *(undefined4 *)(lVar3 + 0x2380) = *(undefined4 *)(lVar3 + 0x2380);
    *(undefined4 *)(lVar3 + 0x2384) = *(undefined4 *)(lVar3 + 0x2384);
    *(undefined4 *)(lVar3 + 0x2388) = *(undefined4 *)(lVar3 + 0x2388);
    *(undefined4 *)(lVar3 + 0x238c) = *(undefined4 *)(lVar3 + 0x238c);
    *(undefined4 *)(lVar3 + 0x2390) = *(undefined4 *)(lVar3 + 0x2390);
    *(undefined4 *)(lVar3 + 0x2394) = *(undefined4 *)(lVar3 + 0x2394);
    *(undefined4 *)(lVar3 + 0x2398) = *(undefined4 *)(lVar3 + 0x2398);
    *(undefined4 *)(lVar3 + 0x239c) = *(undefined4 *)(lVar3 + 0x239c);
    *(undefined4 *)(lVar3 + 0x23a0) = *(undefined4 *)(lVar3 + 0x23a0);
    *(undefined4 *)(lVar3 + 0x23a4) = *(undefined4 *)(lVar3 + 0x23a4);
    *(undefined4 *)(lVar3 + 0x23a8) = *(undefined4 *)(lVar3 + 0x23a8);
    *(int *)(lVar3 + 0x23b8) = (int)uVar2;
    *(int *)(lVar3 + 0x2290) = iVar5;
    param_1 = *(long *)(lVar3 + 0x2258);
  } while( true );
}


