/*
 * Ghidra decompilation
 *
 * Function : luaopen_bit32
 * Address  : 08128d74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaopen_bit32(lua_State *L)

{
  luaL_checkversion_(L,503.0,0x44);
  lua_createtable(L,0,0xc);
  luaL_setfuncs(L,bitlib,0);
  return 1;
}


