/*
 * Ghidra decompilation
 *
 * Function : esccheck
 * Address  : 08138664
 * Program  : drastic
 */


void esccheck(LexState *ls,int c,char *msg)

{
  char *pcVar1;
  ZIO *z;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  byte *pbVar5;
  Mbuffer *pMVar6;
  Mbuffer *b;
  int iVar7;
  size_t newsize;
  
  iVar7 = ls->current;
  if (iVar7 != -1) {
    pMVar6 = ls->buff;
    sVar4 = pMVar6->n;
    sVar3 = pMVar6->buffsize;
    if (sVar3 < sVar4 + 1) {
      if (0x3ffffffe < sVar3) {
                    /* WARNING: Subroutine does not return */
        lexerror(ls,"lexical element too long",0);
      }
      pcVar1 = (char *)luaM_realloc_(ls->L,pMVar6->buffer,sVar3,sVar3 << 1);
      sVar4 = pMVar6->n;
      pMVar6->buffer = pcVar1;
      pMVar6->buffsize = sVar3 << 1;
    }
    pMVar6->n = sVar4 + 1;
    pMVar6->buffer[sVar4] = (char)iVar7;
    z = ls->z;
    sVar3 = z->n;
    z->n = sVar3 - 1;
    if (sVar3 == 0) {
      uVar2 = luaZ_fill(z);
    }
    else {
      pbVar5 = (byte *)z->p;
      z->p = (char *)(pbVar5 + 1);
      uVar2 = (uint)*pbVar5;
    }
    ls->current = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  lexerror(ls,(char *)c,0x125);
}


