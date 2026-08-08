/*
 * Ghidra decompilation
 *
 * Function : execute_arm_set_cpu_mode_from_cpsr
 * Address  : 001249b0
 * Program  : drastic64
 */


void execute_arm_set_cpu_mode_from_cpsr(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x2104);
  uVar4 = (*(uint *)(param_1 + 0x23c0) & 0x1f) - 0x10;
  if (uVar4 < 0x10) {
    uVar4 = *(uint *)(&CSWTCH_70 + (ulong)uVar4 * 4);
    uVar5 = (ulong)uVar4;
    if (uVar4 == uVar2) {
      return;
    }
    if (uVar4 == 1) {
      *(undefined8 *)(param_1 + 0x20c8) = *(undefined8 *)(param_1 + 0x2390);
      *(undefined8 *)(param_1 + 0x20d0) = *(undefined8 *)(param_1 + 0x2398);
      *(undefined8 *)(param_1 + 0x20d8) = *(undefined8 *)(param_1 + 0x23a0);
      *(undefined4 *)(param_1 + 0x20e0) = *(undefined4 *)(param_1 + 0x23a8);
      goto joined_r0x00124a60;
    }
  }
  else {
    uVar5 = 6;
    if (uVar2 == 6) {
      return;
    }
  }
  *(undefined8 *)(param_1 + (ulong)uVar2 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
joined_r0x00124a60:
  if (uVar2 == 1) {
    *(int *)(param_1 + 0x2104) = (int)uVar5;
    *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
    *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
    *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
    *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x20e0);
  }
  else {
    lVar1 = uVar5 * 8 + 0x2090;
    *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + lVar1);
    uVar3 = *(undefined4 *)(param_1 + lVar1 + 4);
    *(int *)(param_1 + 0x2104) = (int)uVar5;
    *(undefined4 *)(param_1 + 0x23a8) = uVar3;
  }
  return;
}


