/*
 * Ghidra decompilation
 *
 * Function : lua_install_platform_module
 * Address  : 00189d20
 * Program  : drastic64
 */


void lua_install_platform_module(undefined8 param_1,undefined8 param_2,int param_3)

{
  if ((DAT_004ec3f0 != 0) && (DAT_004ec3f8 == '\0')) {
    luaL_checkversion_(0x43fb8000,DAT_004ec3f0,0x44);
    lua_createtable(DAT_004ec3f0,0,param_3 + -1);
    luaL_setfuncs(DAT_004ec3f0,param_2,0);
    lua_setglobal(DAT_004ec3f0,param_1);
    return;
  }
  return;
}


