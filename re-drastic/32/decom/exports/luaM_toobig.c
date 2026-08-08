/*
 * Ghidra decompilation
 *
 * Function : luaM_toobig
 * Address  : 08118680
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaM_toobig(lua_State *L)

{
                    /* WARNING: Subroutine does not return */
  luaG_runerror(L,"memory allocation error: block too big");
}


