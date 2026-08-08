/*
 * Ghidra decompilation
 *
 * Function : initialize_input
 * Address  : 00188e60
 * Program  : drastic64
 */


void initialize_input(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x80008) = param_2;
  *(undefined8 *)(param_1 + 0x80048) = 0;
  *(undefined *)(param_1 + 0x80050) = 0;
  platform_initialize_input();
  return;
}


