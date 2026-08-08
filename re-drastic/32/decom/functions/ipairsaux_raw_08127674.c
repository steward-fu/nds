/*
 * Ghidra decompilation
 *
 * Function : ipairsaux_raw
 * Address  : 08127674
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int ipairsaux_raw(lua_State *L)

{
  lua_Integer lVar1;
  int iVar2;
  lua_Integer i;
  
  lVar1 = luaL_checkinteger(L,2);
  luaL_checktype(L,1,5);
  lua_pushinteger(L,lVar1 + 1);
  iVar2 = lua_rawgeti(L,1,lVar1 + 1);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
  }
  return iVar2;
}


