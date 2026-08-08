/*
 * Ghidra decompilation
 *
 * Function : lua_close
 * Address  : 001fffa0
 * Program  : drastic64
 */


void lua_close(long param_1)

{
  close_state(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xe0));
  return;
}


