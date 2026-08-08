/*
 * Ghidra decompilation
 *
 * Function : ll_require
 * Address  : 081323d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int ll_require(lua_State *L)

{
  char *k;
  char *name;
  int iVar1;
  
  k = luaL_checklstring(L,1,(size_t *)0x0);
  lua_settop(L,1);
  lua_getfield(L,-0xf4628,"_LOADED");
  lua_getfield(L,2,k);
  iVar1 = lua_toboolean(L,-1);
  if (iVar1 == 0) {
    lua_settop(L,-2);
    findloader(L,k);
    lua_pushstring(L,k);
    lua_rotate(L,-2,1);
    lua_callk(L,2,1,0,(lua_KFunction)0x0);
    iVar1 = lua_type(L,-1);
    if (iVar1 != 0) {
      lua_setfield(L,2,k);
    }
    iVar1 = lua_getfield(L,2,k);
    if (iVar1 == 0) {
      lua_pushboolean(L,1);
      lua_pushvalue(L,-1);
      lua_setfield(L,2,k);
    }
  }
  return 1;
}


