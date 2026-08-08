/*
 * Ghidra decompilation
 *
 * Function : error_expected
 * Address  : 081197fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void error_expected(LexState *ls,int token)

{
  char *pcVar1;
  lua_State *L;
  
  L = ls->L;
  pcVar1 = luaX_token2str(ls,token);
  pcVar1 = luaO_pushfstring(L,"%s expected",pcVar1);
                    /* WARNING: Subroutine does not return */
  luaX_syntaxerror(ls,pcVar1);
}


