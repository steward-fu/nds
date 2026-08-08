/*
 * Ghidra decompilation
 *
 * Function : luaB_collectgarbage
 * Address  : 08127df4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_collectgarbage(lua_State *L)

{
  int iVar1;
  lua_Integer data;
  int ex;
  int res;
  int b;
  int iVar2;
  int o;
  
  iVar1 = luaL_checkoption(L,1,"collect",luaB_collectgarbage::opts);
  iVar2 = luaB_collectgarbage::optsnum[iVar1];
  data = luaL_optinteger(L,2,0);
  iVar1 = lua_gc(L,iVar2,data);
  if ((iVar2 == 5) || (iVar2 == 9)) {
    lua_pushboolean(L,iVar1);
  }
  else if (iVar2 == 3) {
    iVar2 = lua_gc(L,4,0);
    lua_pushnumber(L,(float)(longlong)iVar1 + (float)(longlong)iVar2 * 0.0009765625);
  }
  else {
    lua_pushinteger(L,iVar1);
  }
  return 1;
}


