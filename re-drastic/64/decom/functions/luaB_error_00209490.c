/*
 * Ghidra decompilation
 *
 * Function : luaB_error
 * Address  : 00209490
 * Program  : drastic64
 */


void luaB_error(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = luaL_optinteger(param_1,2,1);
  lua_settop(param_1,1);
  iVar2 = lua_isstring(param_1,1);
  if (iVar1 < 1 || iVar2 == 0) {
    lua_error(param_1);
    return;
  }
  luaL_where(param_1,iVar1);
  lua_pushvalue(param_1,1);
  lua_concat(param_1,2);
  lua_error(param_1);
  return;
}


