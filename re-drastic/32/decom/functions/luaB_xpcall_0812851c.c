/*
 * Ghidra decompilation
 *
 * Function : luaB_xpcall
 * Address  : 0812851c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_xpcall(lua_State *L)

{
  int iVar1;
  int n;
  uint uVar2;
  int status;
  
  iVar1 = lua_gettop(L);
  luaL_checktype(L,2,6);
  lua_pushboolean(L,1);
  lua_pushvalue(L,1);
  lua_rotate(L,3,2);
  uVar2 = lua_pcallk(L,iVar1 + -2,-1,2,2,finishpcall);
  if (uVar2 < 2) {
    iVar1 = lua_gettop(L);
    iVar1 = iVar1 + -2;
  }
  else {
    lua_pushboolean(L,0);
    lua_pushvalue(L,-2);
    iVar1 = 2;
  }
  return iVar1;
}


