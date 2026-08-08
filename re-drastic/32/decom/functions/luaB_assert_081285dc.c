/*
 * Ghidra decompilation
 *
 * Function : luaB_assert
 * Address  : 081285dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_assert(lua_State *L)

{
  int iVar1;
  lua_Integer level_00;
  int level;
  int iVar2;
  
  iVar1 = lua_toboolean(L,1);
  if (iVar1 == 0) {
    luaL_checkany(L,1);
    lua_rotate(L,1,-1);
    lua_settop(L,-2);
    lua_pushlstring(L,"assertion failed!",0x11);
    lua_settop(L,1);
    level_00 = luaL_optinteger(L,2,1);
    lua_settop(L,1);
    iVar2 = lua_isstring(L,1);
    iVar1 = iVar2;
    if (iVar2 != 0) {
      iVar1 = level_00;
    }
    if ((iVar2 != 0 && level_00 != 0) && -1 < iVar1) {
      luaL_where(L,level_00);
      lua_pushvalue(L,1);
      lua_concat(L,2);
    }
                    /* WARNING: Subroutine does not return */
    lua_error(L);
  }
  iVar1 = lua_gettop(L);
  return iVar1;
}


