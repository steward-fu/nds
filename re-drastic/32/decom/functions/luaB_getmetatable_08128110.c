/*
 * Ghidra decompilation
 *
 * Function : luaB_getmetatable
 * Address  : 08128110
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_getmetatable(lua_State *L)

{
  int iVar1;
  
  luaL_checkany(L,1);
  iVar1 = lua_getmetatable(L,1);
  if (iVar1 != 0) {
    luaL_getmetafield(L,1,"__metatable");
    return 1;
  }
  lua_pushnil(L);
  return 1;
}


