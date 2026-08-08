/*
 * Ghidra decompilation
 *
 * Function : luaL_checkversion_
 * Address  : 00208b20
 * Program  : drastic64
 */


void luaL_checkversion_(float param_1,undefined8 param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)lua_version();
  if (param_3 != 0x44) {
    luaL_error(param_2,"core and library have incompatible numeric types");
  }
  pfVar2 = (float *)lua_version(0);
  if (pfVar1 != pfVar2) {
    luaL_error(param_2,"multiple Lua VMs detected");
    return;
  }
  if (*pfVar1 == param_1) {
    return;
  }
  luaL_error((double)param_1,(double)*pfVar1,param_2,
             "version mismatch: app. needs %f, Lua core provides %f");
  return;
}


