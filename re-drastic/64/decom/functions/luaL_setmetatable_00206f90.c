/*
 * Ghidra decompilation
 *
 * Function : luaL_setmetatable
 * Address  : 00206f90
 * Program  : drastic64
 */


void luaL_setmetatable(undefined8 param_1,undefined8 param_2)

{
  lua_getfield(param_1,0xfff0b9d8,param_2);
  lua_setmetatable(param_1,0xfffffffe);
  return;
}


