/*
 * Ghidra decompilation
 *
 * Function : luaB_next
 * Address  : 00209310
 * Program  : drastic64
 */


undefined8 luaB_next(undefined8 param_1)

{
  int iVar1;
  
  luaL_checktype(param_1,1,5);
  lua_settop(param_1,2);
  iVar1 = lua_next(param_1,1);
  if (iVar1 != 0) {
    return 2;
  }
  lua_pushnil(param_1);
  return 1;
}


