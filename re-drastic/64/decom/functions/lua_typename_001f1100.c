/*
 * Ghidra decompilation
 *
 * Function : lua_typename
 * Address  : 001f1100
 * Program  : drastic64
 */


undefined8 lua_typename(undefined8 param_1,int param_2)

{
  return *(undefined8 *)(luaT_typenames_ + (long)(param_2 + 1) * 8);
}


