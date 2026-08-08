/*
 * Ghidra decompilation
 *
 * Function : luaB_select
 * Address  : 081275c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_select(lua_State *L)

{
  int iVar1;
  int n;
  int iVar2;
  lua_Integer lVar3;
  lua_Integer i;
  char *pcVar4;
  
  iVar1 = lua_gettop(L);
  iVar2 = lua_type(L,1);
  if ((iVar2 == 4) && (pcVar4 = lua_tolstring(L,1,(size_t *)0x0), *pcVar4 == '#')) {
    lua_pushinteger(L,iVar1 + -1);
    iVar1 = 1;
  }
  else {
    lVar3 = luaL_checkinteger(L,1);
    if (lVar3 < 0) {
      iVar2 = iVar1 + lVar3;
    }
    else {
      iVar2 = iVar1;
      if (lVar3 <= iVar1) {
        iVar2 = lVar3;
      }
    }
    if (iVar2 < 1) {
      luaL_argerror(L,1,"index out of range");
    }
    iVar1 = iVar1 - iVar2;
  }
  return iVar1;
}


