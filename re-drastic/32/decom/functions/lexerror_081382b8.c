/*
 * Ghidra decompilation
 *
 * Function : lexerror
 * Address  : 081382b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lexerror(LexState *ls,char *msg,int token)

{
  char *pcVar1;
  char *pcVar2;
  size_t osize;
  size_t sVar3;
  Mbuffer *pMVar4;
  Mbuffer *b;
  lua_State *L;
  size_t newsize;
  char buff [60];
  
  luaO_chunkid(buff,(char *)&ls->source[1].tt,0x3c);
  pcVar1 = luaO_pushfstring(ls->L,"%s:%d: %s",buff,ls->linenumber,msg);
  if (token != 0) {
    L = ls->L;
    if (token - 0x122U < 4) {
      pMVar4 = ls->buff;
      sVar3 = pMVar4->n;
      osize = pMVar4->buffsize;
      if (osize < sVar3 + 1) {
        if (0x3ffffffe < osize) {
                    /* WARNING: Subroutine does not return */
          lexerror(ls,"lexical element too long",0);
        }
        pcVar2 = (char *)luaM_realloc_(L,pMVar4->buffer,osize,osize << 1);
        sVar3 = pMVar4->n;
        pMVar4->buffer = pcVar2;
        pMVar4->buffsize = osize << 1;
      }
      pMVar4->n = sVar3 + 1;
      pMVar4->buffer[sVar3] = '\0';
      pcVar2 = luaO_pushfstring(ls->L,"\'%s\'",ls->buff->buffer,ls->buff,msg);
    }
    else {
      pcVar2 = luaX_token2str(ls,token);
    }
    luaO_pushfstring(L,"%s near %s",pcVar1,pcVar2,msg);
  }
                    /* WARNING: Subroutine does not return */
  luaD_throw(ls->L,3);
}


