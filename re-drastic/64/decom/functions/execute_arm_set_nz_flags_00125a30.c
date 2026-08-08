/*
 * Ghidra decompilation
 *
 * Function : execute_arm_set_nz_flags
 * Address  : 00125a30
 * Program  : drastic64
 */


void execute_arm_set_nz_flags(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
  }
  *(uint *)(param_1 + 0x23c0) = param_2 & 0x80000000 | uVar1 & 0x7fffffff;
  return;
}


