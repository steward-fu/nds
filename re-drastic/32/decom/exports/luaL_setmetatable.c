/*
 * Ghidra decompilation
 *
 * Function : luaL_setmetatable
 * Address  : 08125510
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_setmetatable(lua_State *L,char *tname)

{
  lua_getfield(L,-0xf4628,tname);
  lua_setmetatable(L,-2);
  return;
}


