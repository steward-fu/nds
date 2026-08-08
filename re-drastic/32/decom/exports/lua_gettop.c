/*
 * Ghidra decompilation
 *
 * Function : lua_gettop
 * Address  : 0810dc98
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_gettop(lua_State *L)

{
  return (int)L->top - (int)(L->ci->func + 1) >> 3;
}


