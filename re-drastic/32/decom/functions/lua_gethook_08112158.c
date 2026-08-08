/*
 * Ghidra decompilation
 *
 * Function : lua_gethook
 * Address  : 08112158
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Hook lua_gethook(lua_State *L)

{
  return L->hook;
}


