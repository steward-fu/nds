/*
 * Ghidra decompilation
 *
 * Function : luaB_pairs
 * Address  : 081282fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_pairs(lua_State *L)

{
  int iVar1;
  
  iVar1 = luaL_getmetafield(L,1,"__pairs");
  if (iVar1 == 0) {
    luaL_checktype(L,1,5);
    lua_pushcclosure(L,luaB_next,0);
    lua_pushvalue(L,1);
    lua_pushnil(L);
  }
  else {
    lua_pushvalue(L,1);
    lua_callk(L,1,3,0,(lua_KFunction)0x0);
  }
  return 3;
}


