/*
 * Ghidra decompilation
 *
 * Function : luaL_checkudata
 * Address  : 00207070
 * Program  : drastic64
 */


long luaL_checkudata(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = lua_touserdata();
  if ((lVar2 != 0) && (iVar1 = lua_getmetatable(param_1,param_2), iVar1 != 0)) {
    lua_getfield(param_1,0xfff0b9d8,param_3);
    iVar1 = lua_rawequal(param_1,0xffffffff,0xfffffffe);
    if (iVar1 != 0) {
      lua_settop(param_1,0xfffffffd);
      return lVar2;
    }
    lua_settop(param_1,0xfffffffd);
  }
  typeerror(param_1,param_2,param_3);
  return 0;
}


