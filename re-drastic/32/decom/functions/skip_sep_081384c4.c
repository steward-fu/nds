/*
 * Ghidra decompilation
 *
 * Function : skip_sep
 * Address  : 081384c4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int skip_sep(LexState *ls)

{
  int *s;
  char *pcVar1;
  ZIO *pZVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  byte *pbVar7;
  Mbuffer *pMVar8;
  Mbuffer *b;
  Mbuffer *b_1;
  size_t newsize;
  uint uVar9;
  uint uVar10;
  size_t newsize_1;
  
  pMVar8 = ls->buff;
  sVar6 = pMVar8->n;
  sVar5 = pMVar8->buffsize;
  uVar10 = ls->current;
  sVar4 = sVar6 + 1;
  if (sVar5 < sVar4) {
    if (0x3ffffffe < sVar5) {
LAB_08138650:
                    /* WARNING: Subroutine does not return */
      lexerror(ls,"lexical element too long",0);
    }
    pcVar1 = (char *)luaM_realloc_(ls->L,pMVar8->buffer,sVar5,sVar5 << 1);
    sVar6 = pMVar8->n;
    pMVar8->buffer = pcVar1;
    pMVar8->buffsize = sVar5 << 1;
    sVar4 = sVar6 + 1;
  }
  else {
    pcVar1 = pMVar8->buffer;
  }
  pMVar8->n = sVar4;
  pcVar1[sVar6] = (char)uVar10;
  pZVar2 = ls->z;
  sVar4 = pZVar2->n;
  pZVar2->n = sVar4 - 1;
  if (sVar4 == 0) {
    uVar3 = luaZ_fill(pZVar2);
  }
  else {
    pbVar7 = (byte *)pZVar2->p;
    pZVar2->p = (char *)(pbVar7 + 1);
    uVar3 = (uint)*pbVar7;
  }
  ls->current = uVar3;
  if (uVar3 == 0x3d) {
    uVar9 = 0;
    do {
      while( true ) {
        pMVar8 = ls->buff;
        sVar6 = pMVar8->n;
        sVar5 = pMVar8->buffsize;
        sVar4 = sVar6 + 1;
        if (sVar5 < sVar4) {
          if (0x3ffffffe < sVar5) goto LAB_08138650;
          pcVar1 = (char *)luaM_realloc_(ls->L,pMVar8->buffer,sVar5,sVar5 << 1);
          sVar6 = pMVar8->n;
          pMVar8->buffer = pcVar1;
          pMVar8->buffsize = sVar5 << 1;
          sVar4 = sVar6 + 1;
        }
        else {
          pcVar1 = pMVar8->buffer;
        }
        pMVar8->n = sVar4;
        pcVar1[sVar6] = '=';
        pZVar2 = ls->z;
        sVar4 = pZVar2->n;
        pZVar2->n = sVar4 - 1;
        if (sVar4 == 0) break;
        pbVar7 = (byte *)pZVar2->p;
        uVar9 = uVar9 + 1;
        pZVar2->p = (char *)(pbVar7 + 1);
        uVar3 = (uint)*pbVar7;
        ls->current = uVar3;
        if (uVar3 != 0x3d) goto LAB_08138614;
      }
      uVar3 = luaZ_fill(pZVar2);
      uVar9 = uVar9 + 1;
      ls->current = uVar3;
    } while (uVar3 == 0x3d);
  }
  else {
    uVar9 = 0;
  }
LAB_08138614:
  if (uVar10 != uVar3) {
    uVar9 = ~uVar9;
  }
  return uVar9;
}


