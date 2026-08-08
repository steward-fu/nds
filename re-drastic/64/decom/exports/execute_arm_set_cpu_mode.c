/*
 * Ghidra decompilation
 *
 * Function : execute_arm_set_cpu_mode
 * Address  : 00124900
 * Program  : drastic64
 */


void execute_arm_set_cpu_mode(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x2104);
  if (uVar2 != param_2) {
    if (param_2 == 1) {
      *(undefined8 *)(param_1 + 0x20c8) = *(undefined8 *)(param_1 + 0x2390);
      *(undefined8 *)(param_1 + 0x20d0) = *(undefined8 *)(param_1 + 0x2398);
      *(undefined8 *)(param_1 + 0x20d8) = *(undefined8 *)(param_1 + 0x23a0);
      *(undefined4 *)(param_1 + 0x20e0) = *(undefined4 *)(param_1 + 0x23a8);
    }
    else {
      *(undefined8 *)(param_1 + (ulong)uVar2 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
    }
    if (uVar2 == 1) {
      *(uint *)(param_1 + 0x2104) = param_2;
      *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
      *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
      *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x20e0);
    }
    else {
      lVar1 = (ulong)param_2 * 8 + 0x2090;
      *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + lVar1);
      uVar3 = *(undefined4 *)(param_1 + lVar1 + 4);
      *(uint *)(param_1 + 0x2104) = param_2;
      *(undefined4 *)(param_1 + 0x23a8) = uVar3;
    }
  }
  return;
}


