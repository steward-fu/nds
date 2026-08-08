/*
 * Ghidra decompilation
 *
 * Function : pack
 * Address  : 08130850
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int pack(lua_State *L)

{
  int narray;
  int n;
  int n_00;
  int i;
  
  narray = lua_gettop(L);
  lua_createtable(L,narray,1);
  lua_rotate(L,1,1);
  n_00 = narray;
  if (0 < narray) {
    do {
      lua_rawseti(L,1,n_00);
      n_00 = n_00 + -1;
    } while (n_00 != 0);
  }
  lua_pushinteger(L,narray);
  lua_setfield(L,1,"n");
  return 1;
}


