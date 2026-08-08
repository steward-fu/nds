/*
 * Ghidra decompilation
 *
 * Function : luaX_lookahead
 * Address  : 0813a9d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaX_lookahead(LexState *ls)

{
  int iVar1;
  
  iVar1 = llex(ls,&(ls->lookahead).seminfo);
  (ls->lookahead).token = iVar1;
  return iVar1;
}


