/*
 * Ghidra decompilation
 *
 * Function : luaopen_bit32
 * Address  : 0020a5f0
 * Program  : drastic64
 */


undefined8 luaopen_bit32(undefined8 param_1)

{
  luaL_checkversion_(0x43fb8000,param_1,0x44);
  lua_createtable(param_1,0,0xc);
  luaL_setfuncs(param_1,&bitlib,0);
  return 1;
}


