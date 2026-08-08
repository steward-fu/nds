/*
 * Ghidra decompilation
 *
 * Function : reset_debug
 * Address  : 00185fb0
 * Program  : drastic64
 */


void reset_debug(long param_1)

{
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}


