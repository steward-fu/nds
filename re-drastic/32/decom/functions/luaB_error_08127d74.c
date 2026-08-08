/*
 * Ghidra decompilation
 *
 * Function : luaB_error
 * Address  : 08127d74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_error(lua_State *L)

{
  lua_Integer level_00;
  int level;
  int iVar1;
  int iVar2;
  
  level_00 = luaL_optinteger(L,2,1);
  lua_settop(L,1);
  iVar1 = lua_isstring(L,1);
  iVar2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = level_00;
  }
  if ((iVar1 != 0 && level_00 != 0) && -1 < iVar2) {
    luaL_where(L,level_00);
    lua_pushvalue(L,1);
    lua_concat(L,2);
  }
                    /* WARNING: Subroutine does not return */
  lua_error(L);
}


