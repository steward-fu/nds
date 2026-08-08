/*
 * Ghidra decompilation
 *
 * Function : inclinenumber
 * Address  : 081383ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void inclinenumber(LexState *ls)

{
  ZIO *pZVar1;
  uint uVar2;
  size_t sVar3;
  byte *pbVar4;
  int iVar5;
  int old;
  uint uVar6;
  
  pZVar1 = ls->z;
  uVar6 = ls->current;
  sVar3 = pZVar1->n;
  pZVar1->n = sVar3 - 1;
  if (sVar3 == 0) {
    uVar2 = luaZ_fill(pZVar1);
  }
  else {
    pbVar4 = (byte *)pZVar1->p;
    pZVar1->p = (char *)(pbVar4 + 1);
    uVar2 = (uint)*pbVar4;
  }
  ls->current = uVar2;
  if (uVar2 != uVar6 && (uVar2 == 0xd || uVar2 == 10)) {
    pZVar1 = ls->z;
    sVar3 = pZVar1->n;
    pZVar1->n = sVar3 - 1;
    if (sVar3 == 0) {
      uVar6 = luaZ_fill(pZVar1);
    }
    else {
      pbVar4 = (byte *)pZVar1->p;
      pZVar1->p = (char *)(pbVar4 + 1);
      uVar6 = (uint)*pbVar4;
    }
    ls->current = uVar6;
  }
  iVar5 = ls->linenumber;
  ls->linenumber = iVar5 + 1;
  if (iVar5 == 0x7ffffffe) {
                    /* WARNING: Subroutine does not return */
    lexerror(ls,"chunk has too many lines",0);
  }
  return;
}


