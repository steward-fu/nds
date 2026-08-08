/*
 * Ghidra decompilation
 *
 * Function : luaL_callmeta
 * Address  : 002082a0
 * Program  : drastic64
 */


undefined4 luaL_callmeta(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = lua_absindex();
  iVar2 = lua_getmetatable(param_1,uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  lua_pushstring(param_1,param_3);
  iVar2 = lua_rawget(param_1,0xfffffffe);
  if (iVar2 == 0) {
    lua_settop(param_1,0xfffffffd);
    return 0;
  }
  lua_rotate(param_1,0xfffffffe,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  lua_pushvalue(param_1,uVar1);
  lua_callk(param_1,1,1,0,0);
  return 1;
}


