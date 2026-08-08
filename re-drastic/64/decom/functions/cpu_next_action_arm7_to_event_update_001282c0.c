/*
 * Ghidra decompilation
 *
 * Function : cpu_next_action_arm7_to_event_update
 * Address  : 001282c0
 * Program  : drastic64
 */


void cpu_next_action_arm7_to_event_update(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  execute_events();
  if (*(int *)(nds_system + param_1 + 0x10cde58) != 0) {
    uVar1 = *(uint *)(nds_system + param_1 + 0x10ce110);
    uVar2 = *(uint *)(nds_system + param_1 + 0x10cde60);
    *(undefined4 *)(nds_system + param_1 + 0x10cde60) = 0;
    *(undefined4 *)(nds_system + param_1 + 0x10cdff8) = 0;
    iVar3 = *(int *)(nds_system + param_1 + 0x10cde5c);
    if ((uVar1 >> 7 & 1) == 0) {
      uVar5 = *(uint *)(nds_system + param_1 + 0x10ce10c);
      uVar6 = *(uint *)(nds_system + param_1 + 0x10cde54);
      if ((uVar5 & 1) == 0) {
        iVar7 = uVar5 + 4;
        if (uVar6 != 2) goto LAB_001284d8;
        *(int *)(nds_system + param_1 + 0x10ce0f8) = iVar7;
LAB_00128658:
        *(uint *)(nds_system + param_1 + 0x10cde40) = uVar1;
      }
      else {
        *(uint *)(nds_system + param_1 + 0x10ce10c) = uVar5 & 0xfffffffe;
        iVar7 = (uVar5 & 0xfffffffe) + 4;
        if (uVar6 == 2) {
          *(int *)(nds_system + param_1 + 0x10ce0f8) = iVar7;
        }
        else {
LAB_001284d8:
          *(undefined8 *)(nds_system + param_1 + (ulong)uVar6 * 8 + 0x10cdde0) =
               *(undefined8 *)(nds_system + param_1 + 0x10ce0f4);
          if (uVar6 == 1) {
            if (param_1 + 0x15c9e18U < param_1 + 0x15ca0f0U &&
                param_1 + 0x15ca0e0U < param_1 + 0x15c9e28U) {
              *(undefined8 *)(nds_system + param_1 + 0x10ce0e0) =
                   *(undefined8 *)(nds_system + param_1 + 0x10cde18);
              *(undefined8 *)(nds_system + param_1 + 0x10ce0e8) =
                   *(undefined8 *)(nds_system + param_1 + 0x10cde20);
              *(undefined8 *)(nds_system + param_1 + 0x10ce0f0) =
                   *(undefined8 *)(nds_system + param_1 + 0x10cde28);
            }
            else {
              *(undefined8 *)(nds_system + param_1 + 0x10ce0e8) =
                   *(undefined8 *)(nds_system + param_1 + 0x10cde20);
              *(undefined8 *)(nds_system + param_1 + 0x10ce0e0) =
                   *(undefined8 *)(nds_system + param_1 + 0x10cde18);
              *(undefined8 *)(nds_system + param_1 + 0x10ce0f0) =
                   *(undefined8 *)(nds_system + param_1 + 0x10cde28);
            }
          }
          else {
            *(undefined4 *)(nds_system + param_1 + 0x10ce0f4) =
                 *(undefined4 *)(nds_system + param_1 + 0x10cddf0);
          }
          *(undefined4 *)(nds_system + param_1 + 0x10cde54) = 2;
          *(int *)(nds_system + param_1 + 0x10ce0f8) = iVar7;
          if ((uVar5 & 1) == 0) goto LAB_00128658;
        }
        *(uint *)(nds_system + param_1 + 0x10cde40) = uVar1 | 0x20;
      }
      iVar7 = 0x18;
      if (iVar3 == 1) {
        iVar7 = *(int *)(*(long *)(nds_system + param_1 + 0x10cdfa0) + 0x10) + 0x18;
      }
      *(int *)(nds_system + param_1 + 0x10ce10c) = iVar7;
      *(uint *)(nds_system + param_1 + 0x10ce110) = uVar1 & 0xffffffc0 | 0x92;
      if (iVar3 == 0 && uVar2 != 0) goto LAB_001285a4;
    }
    else if (iVar3 == 0 && uVar2 != 0) {
LAB_001285a4:
      if (1 < uVar2) {
        *(uint *)(*(long *)(nds_system + param_1 + 0x10cdff0) + 0x2110) =
             *(uint *)(*(long *)(nds_system + param_1 + 0x10cdff0) + 0x2110) & 0xfffffffd;
      }
      event_force_task_switch_function(*(undefined8 *)(nds_system + param_1 + 0x10cdfa8),0);
    }
  }
  if (*(int *)(nds_system + param_1 + 0x20d4448) == 0) goto LAB_00128344;
  uVar1 = *(uint *)(nds_system + param_1 + 0x20d4700);
  uVar2 = *(uint *)(nds_system + param_1 + 0x20d4450);
  *(undefined4 *)(nds_system + param_1 + 0x20d4450) = 0;
  *(undefined4 *)(nds_system + param_1 + 0x20d45e8) = 0;
  iVar3 = *(int *)(nds_system + param_1 + 0x20d444c);
  if ((uVar1 >> 7 & 1) == 0) {
    uVar5 = *(uint *)(nds_system + param_1 + 0x20d46fc);
    uVar6 = *(uint *)(nds_system + param_1 + 0x20d4444);
    if ((uVar5 & 1) == 0) {
      iVar7 = uVar5 + 4;
      if (uVar6 != 2) goto LAB_001283e8;
      *(int *)(nds_system + param_1 + 0x20d46e8) = iVar7;
LAB_00128634:
      *(uint *)(nds_system + param_1 + 0x20d4430) = uVar1;
    }
    else {
      *(uint *)(nds_system + param_1 + 0x20d46fc) = uVar5 & 0xfffffffe;
      iVar7 = (uVar5 & 0xfffffffe) + 4;
      if (uVar6 == 2) {
        *(int *)(nds_system + param_1 + 0x20d46e8) = iVar7;
      }
      else {
LAB_001283e8:
        *(undefined8 *)(nds_system + param_1 + (ulong)uVar6 * 8 + 0x20d43d0) =
             *(undefined8 *)(nds_system + param_1 + 0x20d46e4);
        if (uVar6 == 1) {
          if (param_1 + 0x25d0408U < param_1 + 0x25d06e0U &&
              param_1 + 0x25d06d0U < param_1 + 0x25d0418U) {
            *(undefined8 *)(nds_system + param_1 + 0x20d46d0) =
                 *(undefined8 *)(nds_system + param_1 + 0x20d4408);
            *(undefined8 *)(nds_system + param_1 + 0x20d46d8) =
                 *(undefined8 *)(nds_system + param_1 + 0x20d4410);
            *(undefined8 *)(nds_system + param_1 + 0x20d46e0) =
                 *(undefined8 *)(nds_system + param_1 + 0x20d4418);
          }
          else {
            *(undefined8 *)(nds_system + param_1 + 0x20d46e0) =
                 *(undefined8 *)(nds_system + param_1 + 0x20d4418);
            *(undefined8 *)(nds_system + param_1 + 0x20d46d8) =
                 *(undefined8 *)(nds_system + param_1 + 0x20d4410);
            *(undefined8 *)(nds_system + param_1 + 0x20d46d0) =
                 *(undefined8 *)(nds_system + param_1 + 0x20d4408);
          }
        }
        else {
          *(undefined4 *)(nds_system + param_1 + 0x20d46e4) =
               *(undefined4 *)(nds_system + param_1 + 0x20d43e0);
        }
        *(undefined4 *)(nds_system + param_1 + 0x20d4444) = 2;
        *(int *)(nds_system + param_1 + 0x20d46e8) = iVar7;
        if ((uVar5 & 1) == 0) goto LAB_00128634;
      }
      *(uint *)(nds_system + param_1 + 0x20d4430) = uVar1 | 0x20;
    }
    iVar7 = 0x18;
    if (iVar3 == 1) {
      iVar7 = *(int *)(*(long *)(nds_system + param_1 + 0x20d4590) + 0x10) + 0x18;
    }
    *(int *)(nds_system + param_1 + 0x20d46fc) = iVar7;
    *(uint *)(nds_system + param_1 + 0x20d4700) = uVar1 & 0xffffffc0 | 0x92;
    if (iVar3 != 0 || uVar2 == 0) goto LAB_00128344;
  }
  else if (iVar3 != 0 || uVar2 == 0) goto LAB_00128344;
  if (1 < uVar2) {
    *(uint *)(*(long *)(nds_system + param_1 + 0x20d45e0) + 0x2110) =
         *(uint *)(*(long *)(nds_system + param_1 + 0x20d45e0) + 0x2110) & 0xfffffffd;
  }
  event_force_task_switch_function(*(undefined8 *)(nds_system + param_1 + 0x20d4598),0);
LAB_00128344:
  iVar3 = **(int **)(param_1 + 0x318);
  iVar7 = *(int *)(nds_system + param_1 + 0x10cde60);
  iVar4 = *(int *)(nds_system + param_1 + 0x10cdfe0);
  *(int *)(param_1 + 0x10) = iVar3;
  *(int *)(nds_system + param_1 + 0x10cdfe0) = iVar4 + iVar3;
  if (iVar7 != 0) {
    *(undefined4 *)(nds_system + param_1 + 0x10cdfe0) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0012838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(nds_system + param_1 + 0x10ce100))(param_1);
    return;
  }
  _execute_cpu(param_1 + 0x15c7d50);
                    /* WARNING: Could not recover jumptable at 0x001283c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(nds_system + param_1 + 0x10ce100))(*(undefined8 *)(nds_system + param_1 + 0x10cdfa8))
  ;
  return;
}


