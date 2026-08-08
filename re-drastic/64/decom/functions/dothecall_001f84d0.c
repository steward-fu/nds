/*
 * Ghidra decompilation
 *
 * Function : dothecall
 * Address  : 001f84d0
 * Program  : drastic64
 */


void dothecall(long param_1)

{
  luaD_call(param_1,*(long *)(param_1 + 0x10) + -0x20,0,0);
  return;
}


