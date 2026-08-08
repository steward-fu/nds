/*
 * Ghidra decompilation
 *
 * Function : luaopen_math
 * Address  : 0812ba04
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaopen_math(lua_State *L)

{
  luaL_checkversion_(L,503.0,0x44);
  lua_createtable(L,0,0x23);
  luaL_setfuncs(L,mathlib,0);
  lua_pushnumber(L,3.141593);
  lua_setfield(L,-2,"pi");
  lua_pushnumber(L,INFINITY);
  lua_setfield(L,-2,"huge");
  lua_pushinteger(L,0x7fffffff);
  lua_setfield(L,-2,"maxinteger");
  lua_pushinteger(L,-0x80000000);
  lua_setfield(L,-2,"mininteger");
  return 1;
}


