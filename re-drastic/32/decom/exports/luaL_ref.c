/*
 * Ghidra decompilation
 *
 * Function : luaL_ref
 * Address  : 08126360
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_ref(lua_State *L,int t)

{
  int iVar1;
  int idx;
  int ref;
  size_t sVar2;
  
  iVar1 = lua_type(L,-1);
  if (iVar1 == 0) {
    lua_settop(L,-2);
    iVar1 = -1;
  }
  else {
    idx = lua_absindex(L,t);
    lua_rawgeti(L,idx,0);
    iVar1 = lua_tointegerx(L,-1,(int *)0x0);
    lua_settop(L,-2);
    if (iVar1 == 0) {
      sVar2 = lua_rawlen(L,idx);
      iVar1 = sVar2 + 1;
    }
    else {
      lua_rawgeti(L,idx,iVar1);
      lua_rawseti(L,idx,0);
    }
    lua_rawseti(L,idx,iVar1);
  }
  return iVar1;
}


