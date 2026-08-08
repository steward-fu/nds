/*
 * Ghidra decompilation
 *
 * Function : luaB_next
 * Address  : 08127bcc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_next(lua_State *L)

{
  int iVar1;
  
  luaL_checktype(L,1,5);
  lua_settop(L,2);
  iVar1 = lua_next(L,1);
  if (iVar1 == 0) {
    lua_pushnil(L);
    return 1;
  }
  return 2;
}


