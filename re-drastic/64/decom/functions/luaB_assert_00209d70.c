/*
 * Ghidra decompilation
 *
 * Function : luaB_assert
 * Address  : 00209d70
 * Program  : drastic64
 */


void luaB_assert(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lua_toboolean(param_1,1);
  if (iVar1 != 0) {
    lua_gettop(param_1);
    return;
  }
  luaL_checkany(param_1,1);
  lua_rotate(param_1,1,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  lua_pushlstring(param_1,"assertion failed!",0x11);
  lua_settop(param_1,1);
  iVar1 = luaL_optinteger(param_1,2,1);
  lua_settop(param_1,1);
  iVar2 = lua_isstring(param_1,1);
  if ((iVar2 == 0 || iVar1 == 0) || iVar2 != 0 && iVar1 < 0) {
    lua_error(param_1);
    return;
  }
  luaL_where(param_1,iVar1);
  lua_pushvalue(param_1,1);
  lua_concat(param_1,2);
  lua_error(param_1);
  return;
}


