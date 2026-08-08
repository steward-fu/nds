/*
 * Ghidra decompilation
 *
 * Function : luaopen_table
 * Address  : 00212b80
 * Program  : drastic64
 */


undefined8 luaopen_table(undefined8 param_1)

{
  luaL_checkversion_(0x43fb8000,param_1,0x44);
  lua_createtable(param_1,0,7);
  luaL_setfuncs(param_1,&tab_funcs,0);
  return 1;
}


