/*
 * Ghidra decompilation
 *
 * Function : luaopen_utf8
 * Address  : 002136d0
 * Program  : drastic64
 */


undefined8 luaopen_utf8(undefined8 param_1)

{
  luaL_checkversion_(0x43fb8000,param_1,0x44);
  lua_createtable(param_1,0,6);
  luaL_setfuncs(param_1,&funcs,0);
  lua_pushlstring(param_1,&DAT_0022b900,0xe);
  lua_setfield(param_1,0xfffffffe,"charpattern");
  return 1;
}


