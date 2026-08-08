/*
 * Ghidra decompilation
 *
 * Function : execute_arm_trigger_interrupts
 * Address  : 00125560
 * Program  : drastic64
 */


void execute_arm_trigger_interrupts(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x2108) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x23c0);
  uVar2 = *(uint *)(param_1 + 0x2110);
  *(undefined4 *)(param_1 + 0x2110) = 0;
  *(undefined4 *)(param_1 + 0x22a8) = 0;
  iVar3 = *(int *)(param_1 + 0x210c);
  if ((uVar1 >> 7 & 1) != 0) {
    if (uVar2 == 0 || iVar3 != 0) {
      return;
    }
    goto LAB_00125628;
  }
  uVar4 = *(uint *)(param_1 + 0x23bc);
  uVar5 = *(uint *)(param_1 + 0x2104);
  if ((uVar4 & 1) == 0) {
    iVar6 = uVar4 + 4;
    if (uVar5 != 2) goto LAB_001255b4;
    *(int *)(param_1 + 0x23a8) = iVar6;
LAB_0012565c:
    *(uint *)(param_1 + 0x20f0) = uVar1;
  }
  else {
    *(uint *)(param_1 + 0x23bc) = uVar4 & 0xfffffffe;
    iVar6 = (uVar4 & 0xfffffffe) + 4;
    if (uVar5 == 2) {
      *(int *)(param_1 + 0x23a8) = iVar6;
    }
    else {
LAB_001255b4:
      *(undefined8 *)(param_1 + (ulong)uVar5 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
      if (uVar5 == 1) {
        *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
        *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
        *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      }
      else {
        *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20a0);
      }
      *(undefined4 *)(param_1 + 0x2104) = 2;
      *(int *)(param_1 + 0x23a8) = iVar6;
      if ((uVar4 & 1) == 0) goto LAB_0012565c;
    }
    *(uint *)(param_1 + 0x20f0) = uVar1 | 0x20;
  }
  iVar6 = 0x18;
  if (iVar3 == 1) {
    iVar6 = *(int *)(*(long *)(param_1 + 0x2250) + 0x10) + 0x18;
  }
  *(int *)(param_1 + 0x23bc) = iVar6;
  *(uint *)(param_1 + 0x23c0) = uVar1 & 0xffffffc0 | 0x92;
  if (uVar2 == 0 || iVar3 != 0) {
    return;
  }
LAB_00125628:
  if (1 < uVar2) {
    *(uint *)(*(long *)(param_1 + 0x22a0) + 0x2110) =
         *(uint *)(*(long *)(param_1 + 0x22a0) + 0x2110) & 0xfffffffd;
  }
  event_force_task_switch_function(*(undefined8 *)(param_1 + 0x2258),0);
  return;
}


