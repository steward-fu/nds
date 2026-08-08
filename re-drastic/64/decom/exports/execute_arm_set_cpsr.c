/*
 * Ghidra decompilation
 *
 * Function : execute_arm_set_cpsr
 * Address  : 00125690
 * Program  : drastic64
 */


void execute_arm_set_cpsr(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  *(uint *)(param_1 + 0x23c0) = param_2;
  uVar2 = (param_2 & 0x1f) - 0x10;
  uVar3 = *(uint *)(param_1 + 0x2104);
  if (uVar2 < 0x10) {
    uVar2 = *(uint *)(&CSWTCH_70 + (ulong)uVar2 * 4);
    uVar5 = (ulong)uVar2;
    if (uVar2 != uVar3) {
      if (uVar2 != 1) goto LAB_001256b4;
      *(undefined8 *)(param_1 + 0x20c8) = *(undefined8 *)(param_1 + 0x2390);
      *(undefined8 *)(param_1 + 0x20d0) = *(undefined8 *)(param_1 + 0x2398);
      *(undefined8 *)(param_1 + 0x20d8) = *(undefined8 *)(param_1 + 0x23a0);
      *(undefined4 *)(param_1 + 0x20e0) = *(undefined4 *)(param_1 + 0x23a8);
      if (uVar3 == 1) goto LAB_00125754;
LAB_001256d0:
      lVar1 = uVar5 * 8 + 0x2090;
      *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + lVar1);
      *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + lVar1 + 4);
      goto LAB_001256f0;
    }
  }
  else {
    uVar5 = 6;
    if (uVar3 != 6) {
LAB_001256b4:
      *(undefined8 *)(param_1 + (ulong)uVar3 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
      if (uVar3 != 1) goto LAB_001256d0;
LAB_00125754:
      *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
      *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x20e0);
      *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
      *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
LAB_001256f0:
      uVar3 = (uint)uVar5;
      *(uint *)(param_1 + 0x2104) = uVar3;
    }
  }
  if (((param_2 >> 7 & 1) != 0) || (*(int *)(param_1 + 0x2108) == 0)) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x23bc);
  *(uint *)(param_1 + 0x22a8) = *(uint *)(param_1 + 0x22a8) | 8;
  if ((uVar2 & 1) == 0) {
    iVar4 = uVar2 + 4;
    if (uVar3 != 2) goto LAB_001257a0;
    *(int *)(param_1 + 0x23a8) = iVar4;
LAB_00125820:
    *(uint *)(param_1 + 0x20f0) = param_2;
  }
  else {
    *(uint *)(param_1 + 0x23bc) = uVar2 & 0xfffffffe;
    iVar4 = (uVar2 & 0xfffffffe) + 4;
    if (uVar3 == 2) {
      *(int *)(param_1 + 0x23a8) = iVar4;
    }
    else {
LAB_001257a0:
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
      if ((uVar2 & 1) == 0) goto LAB_00125820;
    }
    *(uint *)(param_1 + 0x20f0) = param_2 | 0x20;
  }
  iVar4 = 0x18;
  if (*(int *)(param_1 + 0x210c) == 1) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x2250) + 0x10) + 0x18;
  }
  *(int *)(param_1 + 0x23bc) = iVar4;
  *(uint *)(param_1 + 0x23c0) = param_2 & 0xffffffc0 | 0x92;
  return;
}


