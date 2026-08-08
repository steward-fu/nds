/*
 * Ghidra decompilation
 *
 * Function : execute_arm_msr_op
 * Address  : 00126470
 * Program  : drastic64
 */


void execute_arm_msr_op(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x2104);
  param_3 = *(uint *)(psr_masks_11490 + (param_2 >> 0x10 & 0xf) * 4) & param_3;
  uVar2 = ~*(uint *)(psr_masks_11490 + (param_2 >> 0x10 & 0xf) * 4);
  if (((uint)param_2 >> 0x16 & 1) != 0) {
    param_1 = param_1 + (ulong)uVar3 * 4;
    *(uint *)(param_1 + 0x20e8) = uVar2 & *(uint *)(param_1 + 0x20e8) | param_3;
    return;
  }
  param_3 = uVar2 & *(uint *)(param_1 + 0x23c0) | param_3;
  *(uint *)(param_1 + 0x23c0) = param_3;
  uVar2 = (param_3 & 0x1f) - 0x10;
  if (uVar2 < 0x10) {
    uVar2 = *(uint *)(&CSWTCH_70 + (ulong)uVar2 * 4);
    uVar5 = (ulong)uVar2;
    if (uVar2 != uVar3) {
      if (uVar2 != 1) goto LAB_001265e4;
      *(undefined8 *)(param_1 + 0x20c8) = *(undefined8 *)(param_1 + 0x2390);
      *(undefined8 *)(param_1 + 0x20d0) = *(undefined8 *)(param_1 + 0x2398);
      *(undefined8 *)(param_1 + 0x20d8) = *(undefined8 *)(param_1 + 0x23a0);
      *(undefined4 *)(param_1 + 0x20e0) = *(undefined4 *)(param_1 + 0x23a8);
LAB_00126508:
      if (uVar3 == 1) {
        *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
        *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x20e0);
        *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
        *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      }
      else {
        lVar1 = uVar5 * 8 + 0x2090;
        *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + lVar1);
        *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + lVar1 + 4);
      }
      uVar3 = (uint)uVar5;
      *(uint *)(param_1 + 0x2104) = uVar3;
    }
  }
  else {
    uVar5 = 6;
    if (uVar3 != 6) {
LAB_001265e4:
      *(undefined8 *)(param_1 + (ulong)uVar3 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
      goto LAB_00126508;
    }
  }
  if (((param_3 >> 7 & 1) != 0) || (*(int *)(param_1 + 0x2108) == 0)) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x23bc);
  *(uint *)(param_1 + 0x22a8) = *(uint *)(param_1 + 0x22a8) | 8;
  if ((uVar2 & 1) == 0) {
    iVar4 = uVar2 + 4;
    if (uVar3 == 2) {
      *(int *)(param_1 + 0x23a8) = iVar4;
    }
    else {
LAB_00126568:
      *(undefined8 *)(param_1 + (ulong)uVar3 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
      if (uVar3 == 1) {
        *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
        *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
        *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      }
      else {
        *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20a0);
      }
      *(undefined4 *)(param_1 + 0x2104) = 2;
      *(int *)(param_1 + 0x23a8) = iVar4;
      if ((uVar2 & 1) != 0) goto LAB_0012659c;
    }
    *(uint *)(param_1 + 0x20f0) = param_3;
  }
  else {
    *(uint *)(param_1 + 0x23bc) = uVar2 & 0xfffffffe;
    iVar4 = (uVar2 & 0xfffffffe) + 4;
    if (uVar3 != 2) goto LAB_00126568;
    *(int *)(param_1 + 0x23a8) = iVar4;
LAB_0012659c:
    *(uint *)(param_1 + 0x20f0) = param_3 | 0x20;
  }
  iVar4 = 0x18;
  if (*(int *)(param_1 + 0x210c) == 1) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x2250) + 0x10) + 0x18;
  }
  *(int *)(param_1 + 0x23bc) = iVar4;
  *(uint *)(param_1 + 0x23c0) = param_3 & 0xffffffc0 | 0x92;
  return;
}


