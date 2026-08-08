/*
 * Ghidra decompilation
 *
 * Function : lua_isyieldable
 * Address  : 001f6fd0
 * Program  : drastic64
 */


bool lua_isyieldable(long param_1)

{
  return *(short *)(param_1 + 0xc4) == 0;
}


