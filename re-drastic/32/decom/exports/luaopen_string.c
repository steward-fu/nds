/*
 * Ghidra decompilation
 *
 * Function : luaopen_string
 * Address  : 081305e0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaopen_string(lua_State *L)

{
  luaL_checkversion_(L,503.0,0x44);
  lua_createtable(L,0,0x11);
  luaL_setfuncs(L,strlib,0);
  lua_createtable(L,0,1);
  lua_pushlstring(L,"",0);
  lua_pushvalue(L,-2);
  lua_setmetatable(L,-2);
  lua_settop(L,-2);
  lua_pushvalue(L,-2);
  lua_setfield(L,-2,"__index");
  lua_settop(L,-2);
  return 1;
}


