/*
 * Ghidra decompilation
 *
 * Function : lua_status
 * Address  : 08111098
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_status(lua_State *L)

{
  return (uint)L->status;
}


