/*
 * Ghidra decompilation
 *
 * Function : step_debug_arm_remap_restore
 * Address  : 00182b90
 * Program  : drastic64
 */


void step_debug_arm_remap_restore(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_004ec288;
  *(undefined8 *)(param_1 + 0x2370) = _saved_reg;
  *(undefined8 *)(param_1 + 0x2378) = uVar1;
  uVar1 = DAT_004ec298;
  *(undefined8 *)(param_1 + 0x2380) = DAT_004ec290;
  *(undefined8 *)(param_1 + 0x2388) = uVar1;
  uVar1 = DAT_004ec2a8;
  *(undefined8 *)(param_1 + 0x2390) = DAT_004ec2a0;
  *(undefined8 *)(param_1 + 0x2398) = uVar1;
  uVar1 = DAT_004ec2b8;
  *(undefined8 *)(param_1 + 0x23a0) = DAT_004ec2b0;
  *(undefined8 *)(param_1 + 0x23a8) = uVar1;
  return;
}


