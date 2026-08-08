/*
 * Ghidra decompilation
 *
 * Function : luaopen_math
 * Address  : 0020d310
 * Program  : drastic64
 */


undefined8 luaopen_math(undefined8 param_1)

{
  luaL_checkversion_(0x43fb8000,param_1,0x44);
  lua_createtable(param_1,0,0x23);
  luaL_setfuncs(param_1,&mathlib,0);
  lua_pushnumber(0x40490fdb,param_1);
  lua_setfield(param_1,0xfffffffe,&DAT_0022aea0);
  lua_pushnumber(0x7f800000,param_1);
  lua_setfield(param_1,0xfffffffe,&DAT_0022aea8);
  lua_pushinteger(param_1,0x7fffffff);
  lua_setfield(param_1,0xfffffffe,"maxinteger");
  lua_pushinteger(param_1,0x80000000);
  lua_setfield(param_1,0xfffffffe,"mininteger");
  return 1;
}


