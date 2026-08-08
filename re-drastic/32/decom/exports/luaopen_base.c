/*
 * Ghidra decompilation
 *
 * Function : luaopen_base
 * Address  : 081286d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaopen_base(lua_State *L)

{
  char *s;
  int i;
  
  i = 0;
  lua_rawgeti(L,-0xf4628,2);
  luaL_setfuncs(L,base_funcs,0);
  lua_pushvalue(L,-1);
  lua_setfield(L,-2,"_G");
  lua_pushlstring(L,"Lua 5.3",7);
  lua_setfield(L,-2,"_VERSION");
  do {
    s = lua_typename(L,i);
    i = i + 1;
    lua_pushstring(L,s);
  } while (i != 9);
  lua_pushcclosure(L,luaB_type,9);
  lua_setfield(L,-2,"type");
  return 1;
}


