/*
 * Ghidra decompilation
 *
 * Function : lua_gethookmask
 * Address  : 08112160
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_gethookmask(lua_State *L)

{
  return (uint)L->hookmask;
}


