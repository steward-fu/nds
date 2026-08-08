/*
 * Ghidra decompilation
 *
 * Function : luaB_ipairs
 * Address  : 0812839c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_ipairs(lua_State *L)

{
  int iVar1;
  lua_CFunction iter;
  
  iVar1 = luaL_getmetafield(L,1,"__index");
  iter = ipairsaux_raw;
  if (iVar1 != 0) {
    iter = ipairsaux;
  }
  iVar1 = luaL_getmetafield(L,1,"__ipairs");
  if (iVar1 == 0) {
    luaL_checktype(L,1,5);
    lua_pushcclosure(L,iter,0);
    lua_pushvalue(L,1);
    lua_pushinteger(L,0);
  }
  else {
    lua_pushvalue(L,1);
    lua_callk(L,1,3,0,(lua_KFunction)0x0);
  }
  return 3;
}


