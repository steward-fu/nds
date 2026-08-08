/*
 * Ghidra decompilation
 *
 * Function : gethexa
 * Address  : 08138724
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int gethexa(LexState *ls)

{
  byte *msg;
  ZIO *z;
  uint c;
  size_t sVar1;
  size_t osize;
  size_t sVar2;
  byte *pbVar3;
  Mbuffer *pMVar4;
  Mbuffer *b;
  int iVar5;
  size_t newsize;
  
  pMVar4 = ls->buff;
  sVar2 = pMVar4->n;
  osize = pMVar4->buffsize;
  iVar5 = ls->current;
  sVar1 = sVar2 + 1;
  if (osize < sVar1) {
    if (0x3ffffffe < osize) {
                    /* WARNING: Subroutine does not return */
      lexerror(ls,"lexical element too long",0);
    }
    msg = (byte *)luaM_realloc_(ls->L,pMVar4->buffer,osize,osize << 1);
    sVar2 = pMVar4->n;
    pMVar4->buffer = (char *)msg;
    pMVar4->buffsize = osize << 1;
    sVar1 = sVar2 + 1;
  }
  else {
    msg = (byte *)pMVar4->buffer;
  }
  pMVar4->n = sVar1;
  msg[sVar2] = (byte)iVar5;
  z = ls->z;
  sVar1 = z->n;
  z->n = sVar1 - 1;
  if (sVar1 == 0) {
    c = luaZ_fill(z);
  }
  else {
    pbVar3 = (byte *)z->p;
    msg = pbVar3 + 1;
    z->p = (char *)msg;
    c = (uint)*pbVar3;
  }
  ls->current = c;
  if ((""[c + 1] & 0x10) != 0) {
    iVar5 = luaO_hexavalue(c);
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  esccheck(ls,0x8147fc8,(char *)msg);
}


