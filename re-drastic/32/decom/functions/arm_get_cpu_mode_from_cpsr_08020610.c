/*
 * Ghidra decompilation
 *
 * Function : arm_get_cpu_mode_from_cpsr
 * Address  : 08020610
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

arm_cpu_mode_enum arm_get_cpu_mode_from_cpsr(cpu_struct *cpu)

{
  arm_cpu_mode_enum aVar1;
  uint uVar2;
  
  uVar2 = (cpu->cpsr & 0x1f) - 0x10;
  if (uVar2 < 0x10) {
    aVar1 = *(arm_cpu_mode_enum *)(&CSWTCH_4 + uVar2 * 4);
  }
  else {
    aVar1 = ARM_CPU_MODE_INVALID;
  }
  return aVar1;
}


