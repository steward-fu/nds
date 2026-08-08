/*
 * Ghidra decompilation
 *
 * Function : initialize_event
 * Address  : 0011e1f0
 * Program  : drastic64
 */


void initialize_event(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  param_1 = param_1 + (ulong)param_2 * 0x30;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(char *)(param_1 + 0x28) = (char)param_2;
  return;
}


