/*
 * Ghidra decompilation
 *
 * Function : reset_cpu
 * Address  : 001288e0
 * Program  : drastic64
 */


void reset_cpu(long param_1)

{
  *(undefined8 *)(param_1 + 0x2370) = 0;
  *(undefined8 *)(param_1 + 0x2378) = 0;
  *(undefined8 *)(param_1 + 0x2380) = 0;
  *(undefined8 *)(param_1 + 0x2388) = 0;
  *(undefined8 *)(param_1 + 0x2390) = 0;
  *(undefined8 *)(param_1 + 0x2398) = 0;
  *(undefined8 *)(param_1 + 0x23a0) = 0;
  *(undefined8 *)(param_1 + 0x23a8) = 0;
  *(undefined4 *)(param_1 + 0x2110) = 0;
  *(undefined4 *)(param_1 + 0x2290) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23a4) = 0x2400000;
  *(undefined4 *)(param_1 + 0x23c0) = 0x1f;
  *(undefined8 *)(param_1 + 0x2104) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0x10000;
  *(undefined *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0x10000;
  *(undefined *)(param_1 + 0x3c) = 0;
  *(undefined *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0x10000;
  *(undefined *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0x10000;
  *(undefined *)(param_1 + 0x7c) = 0;
  *(undefined *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x22a8) = 0;
  *(undefined8 *)(param_1 + 0x23b8) = 0;
  reset_debug(param_1 + 0x2118);
  return;
}


