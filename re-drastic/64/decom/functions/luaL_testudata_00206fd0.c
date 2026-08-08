/*
 * Ghidra decompilation
 *
 * Function : luaL_testudata
 * Address  : 00206fd0
 * Program  : drastic64
 */


long luaL_testudata(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = lua_touserdata();
  if ((lVar2 != 0) && (iVar1 = lua_getmetatable(param_1,param_2), iVar1 != 0)) {
    lua_getfield(param_1,0xfff0b9d8,param_3);
    iVar1 = lua_rawequal(param_1,0xffffffff,0xfffffffe);
    if (iVar1 == 0) {
      lVar2 = 0;
    }
    lua_settop(param_1,0xfffffffd);
    return lVar2;
  }
  return 0;
}


