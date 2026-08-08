/*
 * Ghidra decompilation
 *
 * Function : lua_gethookcount
 * Address  : 08112168
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_gethookcount(lua_State *L)

{
  return L->basehookcount;
}


