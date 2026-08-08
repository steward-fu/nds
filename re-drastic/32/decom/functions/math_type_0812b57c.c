/*
 * Ghidra decompilation
 *
 * Function : math_type
 * Address  : 0812b57c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_type(lua_State *L)

{
  int iVar1;
  
  iVar1 = lua_type(L,1);
  if (iVar1 != 3) {
    luaL_checkany(L,1);
    lua_pushnil(L);
    return 1;
  }
  iVar1 = lua_isinteger(L,1);
  if (iVar1 != 0) {
    lua_pushlstring(L,"integer",7);
    return 1;
  }
  lua_pushlstring(L,"float",5);
  return 1;
}


