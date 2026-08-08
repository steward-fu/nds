/*
 * Ghidra decompilation
 *
 * Function : luaX_syntaxerror
 * Address  : 0813a834
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaX_syntaxerror(LexState *ls,char *msg)

{
                    /* WARNING: Subroutine does not return */
  lexerror(ls,msg,(ls->t).token);
}


