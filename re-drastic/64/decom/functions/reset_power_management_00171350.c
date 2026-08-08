/*
 * Ghidra decompilation
 *
 * Function : reset_power_management
 * Address  : 00171350
 * Program  : drastic64
 */


void reset_power_management(undefined4 *param_1)

{
  *param_1 = 0x7f0000;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined *)((long)param_1 + 6) = 0xf;
  return;
}


