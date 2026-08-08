/*
 * Ghidra decompilation
 *
 * Function : gctm
 * Address  : 081328d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int gctm(lua_State *L)

{
  lua_Integer n_00;
  lua_Integer n;
  
  n_00 = luaL_len(L,1);
  if (0 < n_00) {
    do {
      lua_rawgeti(L,1,n_00);
      lua_touserdata(L,-1);
      dlclose();
      lua_settop(L,-2);
      n_00 = n_00 + -1;
    } while (n_00 != 0);
  }
  return 0;
}


