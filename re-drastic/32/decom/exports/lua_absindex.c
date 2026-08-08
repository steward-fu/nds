/*
 * Ghidra decompilation
 *
 * Function : lua_absindex
 * Address  : 0810dc68
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_absindex(lua_State *L,int idx)

{
  if (idx + 0xf4627U < 0xf4628) {
    idx = idx + ((int)L->top - (int)L->ci->func >> 3);
  }
  return idx;
}


