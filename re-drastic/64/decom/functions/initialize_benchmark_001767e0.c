/*
 * Ghidra decompilation
 *
 * Function : initialize_benchmark
 * Address  : 001767e0
 * Program  : drastic64
 */


void initialize_benchmark
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  *(undefined4 *)((long)param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 10) = param_4;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x100000000;
  *(undefined4 *)((long)param_1 + 100) = param_6;
  return;
}


