/*
 * Ghidra decompilation
 *
 * Function : luaM_toobig
 * Address  : 001fa910
 * Program  : drastic64
 */


void luaM_toobig(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  luaG_runerror(param_1,"memory allocation error: block too big");
}


