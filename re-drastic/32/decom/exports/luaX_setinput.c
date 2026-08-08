/*
 * Ghidra decompilation
 *
 * Function : luaX_setinput
 * Address  : 0813a8ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaX_setinput(lua_State *L,LexState *ls,ZIO *z,TString *source,int firstchar)

{
  TString *pTVar1;
  char *pcVar2;
  size_t osize;
  Mbuffer *pMVar3;
  Mbuffer *pMVar4;
  
  ls->current = firstchar;
  ls->linenumber = 1;
  ls->lastline = 1;
  (ls->t).token = 0;
  (ls->lookahead).token = 0x121;
  ls->fs = (FuncState *)0x0;
  ls->L = L;
  ls->z = z;
  ls->source = source;
  ls->decpoint = '.';
  pTVar1 = luaS_new(L,"_ENV");
  pMVar4 = ls->buff;
  pcVar2 = pMVar4->buffer;
  osize = pMVar4->buffsize;
  ls->envn = pTVar1;
  pcVar2 = (char *)luaM_realloc_(ls->L,pcVar2,osize,0x20);
  pMVar3 = ls->buff;
  pMVar4->buffer = pcVar2;
  pMVar3->buffsize = 0x20;
  return;
}


