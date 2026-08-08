/*
 * Ghidra decompilation
 *
 * Function : luaB_setmetatable
 * Address  : 08127ecc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_setmetatable(lua_State *L)

{
  int iVar1;
  int t;
  
  iVar1 = lua_type(L,2);
  luaL_checktype(L,1,5);
  if (iVar1 != 5 && iVar1 != 0) {
    luaL_argerror(L,2,"nil or table expected");
  }
  iVar1 = luaL_getmetafield(L,1,"__metatable");
  if (iVar1 == 0) {
    lua_settop(L,2);
    lua_setmetatable(L,1);
    return 1;
  }
  iVar1 = luaL_error(L,"cannot change a protected metatable");
  return iVar1;
}


