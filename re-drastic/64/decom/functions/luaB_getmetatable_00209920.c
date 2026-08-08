/*
 * Ghidra decompilation
 *
 * Function : luaB_getmetatable
 * Address  : 00209920
 * Program  : drastic64
 */


undefined8 luaB_getmetatable(undefined8 param_1)

{
  int iVar1;
  
  luaL_checkany(param_1,1);
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 != 0) {
    luaL_getmetafield(param_1,1,"__metatable");
    return 1;
  }
  lua_pushnil(param_1);
  return 1;
}


