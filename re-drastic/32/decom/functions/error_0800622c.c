/*
 * Ghidra decompilation
 *
 * Function : error
 * Address  : 0800622c
 * Program  : drastic
 */


/* DWARF original prototype: noreturn void error(LoadState * S, char * why, LoadState * S) */

void error(LoadState *S,char *why,LoadState *S_1)

{
  luaO_pushfstring(S->L,"%s: %s precompiled chunk",why,S_1);
                    /* WARNING: Subroutine does not return */
  luaD_throw(S->L,3);
}


