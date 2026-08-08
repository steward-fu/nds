/*
 * Ghidra decompilation
 *
 * Function : luaopen_string
 * Address  : 00211aa0
 * Program  : drastic64
 */


undefined8 luaopen_string(undefined8 param_1)

{
  luaL_checkversion_(0x43fb8000,param_1,0x44);
  lua_createtable(param_1,0,0x11);
  luaL_setfuncs(param_1,&strlib,0);
  lua_createtable(param_1,0,1);
  lua_pushlstring(param_1,"",0);
  lua_pushvalue(param_1,0xfffffffe);
  lua_setmetatable(param_1,0xfffffffe);
  lua_settop(param_1,0xfffffffe);
  lua_pushvalue(param_1,0xfffffffe);
  lua_setfield(param_1,0xfffffffe,"__index");
  lua_settop(param_1,0xfffffffe);
  return 1;
}


