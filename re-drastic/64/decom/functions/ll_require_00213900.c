/*
 * Ghidra decompilation
 *
 * Function : ll_require
 * Address  : 00213900
 * Program  : drastic64
 */


undefined8 ll_require(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = luaL_checklstring(param_1,1,0);
  lua_settop(param_1,1);
  lua_getfield(param_1,0xfff0b9d8,"_LOADED");
  lua_getfield(param_1,2,uVar2);
  iVar1 = lua_toboolean(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffe);
    findloader(param_1,uVar2);
    lua_pushstring(param_1,uVar2);
    lua_rotate(param_1,0xfffffffe,1);
    lua_callk(param_1,2,1,0,0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 != 0) {
      lua_setfield(param_1,2,uVar2);
    }
    iVar1 = lua_getfield(param_1,2,uVar2);
    if (iVar1 == 0) {
      lua_pushboolean(param_1,1);
      lua_pushvalue(param_1,0xffffffff);
      lua_setfield(param_1,2,uVar2);
      return 1;
    }
  }
  return 1;
}


