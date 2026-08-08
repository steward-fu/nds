/*
 * Ghidra decompilation
 *
 * Function : arm_get_cpu_mode_from_cpsr
 * Address  : 001248d0
 * Program  : drastic64
 */


undefined4 arm_get_cpu_mode_from_cpsr(long param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)(param_1 + 0x23c0) & 0x1f) - 0x10;
  if (uVar1 < 0x10) {
    return *(undefined4 *)(&CSWTCH_70 + (ulong)uVar1 * 4);
  }
  return 6;
}


