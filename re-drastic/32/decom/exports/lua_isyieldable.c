/*
 * Ghidra decompilation
 *
 * Function : lua_isyieldable
 * Address  : 081147ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_isyieldable(lua_State *L)

{
  return (uint)(L->nny == 0);
}


