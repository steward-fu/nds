/*
 * Ghidra decompilation
 *
 * Function : iter_codes
 * Address  : 08131794
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int iter_codes(lua_State *L)

{
  luaL_checklstring(L,1,(size_t *)0x0);
  lua_pushcclosure(L,iter_aux,0);
  lua_pushvalue(L,1);
  lua_pushinteger(L,0);
  return 3;
}


