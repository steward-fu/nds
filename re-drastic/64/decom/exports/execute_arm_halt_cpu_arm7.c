/*
 * Ghidra decompilation
 *
 * Function : execute_arm_halt_cpu_arm7
 * Address  : 00125540
 * Program  : drastic64
 */


void execute_arm_halt_cpu_arm7(long param_1)

{
  *(undefined4 *)(param_1 + 0x2110) = 1;
  remove_event(*(long *)(param_1 + 0x2258) + 0x18,2);
  return;
}


