/*
 * Ghidra decompilation
 *
 * Function : luaB_ipairs
 * Address  : 00209bc0
 * Program  : drastic64
 */


undefined8 luaB_ipairs(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = luaL_getmetafield(param_1,1,"__index");
  pcVar1 = ipairsaux;
  if (iVar2 == 0) {
    pcVar1 = ipairsaux_raw;
  }
  iVar2 = luaL_getmetafield(param_1,1,"__ipairs");
  if (iVar2 == 0) {
    luaL_checktype(param_1,1,5);
    lua_pushcclosure(param_1,pcVar1,0);
    lua_pushvalue(param_1,1);
    lua_pushinteger(param_1,0);
    return 3;
  }
  lua_pushvalue(param_1,1);
  lua_callk(param_1,1,3,0,0);
  return 3;
}


