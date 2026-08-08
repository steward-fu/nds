/*
 * Ghidra decompilation
 *
 * Function : luaB_pcall
 * Address  : 08128470
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_pcall(lua_State *L)

{
  int iVar1;
  uint uVar2;
  int status;
  
  luaL_checkany(L,1);
  lua_pushboolean(L,1);
  lua_rotate(L,1,1);
  iVar1 = lua_gettop(L);
  uVar2 = lua_pcallk(L,iVar1 + -2,-1,0,0,finishpcall);
  if (1 < uVar2) {
    lua_pushboolean(L,0);
    lua_pushvalue(L,-2);
    return 2;
  }
  iVar1 = lua_gettop(L);
  return iVar1;
}


