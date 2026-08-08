/*
 * Ghidra decompilation
 *
 * Function : luaL_unref
 * Address  : 08126438
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_unref(lua_State *L,int t,int ref)

{
  int idx;
  
  if (ref < 0) {
    return;
  }
  idx = lua_absindex(L,t);
  lua_rawgeti(L,idx,0);
  lua_rawseti(L,idx,ref);
  lua_pushinteger(L,ref);
  lua_rawseti(L,idx,0);
  return;
}


