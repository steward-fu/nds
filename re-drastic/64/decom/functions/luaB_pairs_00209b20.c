/*
 * Ghidra decompilation
 *
 * Function : luaB_pairs
 * Address  : 00209b20
 * Program  : drastic64
 */


undefined8 luaB_pairs(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = luaL_getmetafield(param_1,1,"__pairs");
  if (iVar1 == 0) {
    luaL_checktype(param_1,1,5);
    lua_pushcclosure(param_1,luaB_next,0);
    lua_pushvalue(param_1,1);
    lua_pushnil(param_1);
    return 3;
  }
  lua_pushvalue(param_1,1);
  lua_callk(param_1,1,3,0,0);
  return 3;
}


