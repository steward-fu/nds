/*
 * Ghidra decompilation
 *
 * Function : luaX_next
 * Address  : 0813a984
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaX_next(LexState *ls)

{
  SemInfo SVar1;
  int iVar2;
  
  iVar2 = (ls->lookahead).token;
  ls->lastline = ls->linenumber;
  if (iVar2 != 0x121) {
    SVar1 = (ls->lookahead).seminfo;
    (ls->t).token = (ls->lookahead).token;
    (ls->t).seminfo = SVar1;
    (ls->lookahead).token = 0x121;
    return;
  }
  iVar2 = llex(ls,&(ls->t).seminfo);
  (ls->t).token = iVar2;
  return;
}


