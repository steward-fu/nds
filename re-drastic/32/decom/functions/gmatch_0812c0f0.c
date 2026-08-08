/*
 * Ghidra decompilation
 *
 * Function : gmatch
 * Address  : 0812c0f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int gmatch(lua_State *L)

{
  luaL_checklstring(L,1,(size_t *)0x0);
  luaL_checklstring(L,2,(size_t *)0x0);
  lua_settop(L,2);
  lua_pushinteger(L,0);
  lua_pushcclosure(L,gmatch_aux,3);
  return 1;
}


