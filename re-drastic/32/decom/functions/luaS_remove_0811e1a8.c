/*
 * Ghidra decompilation
 *
 * Function : luaS_remove
 * Address  : 0811e1a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaS_remove(lua_State *L,TString *ts)

{
  uint uVar1;
  TString **p;
  TString *pTVar2;
  TString *pTVar3;
  int iVar4;
  TString **ppTVar5;
  global_State *pgVar6;
  
  pgVar6 = L->l_G;
  ppTVar5 = (pgVar6->strt).hash;
  uVar1 = ts->hash & (pgVar6->strt).size - 1U;
  pTVar2 = ppTVar5[uVar1];
  ppTVar5 = ppTVar5 + uVar1;
  if (ts != pTVar2) {
    do {
      pTVar3 = pTVar2;
      pTVar2 = pTVar3->hnext;
    } while (ts != pTVar2);
    ppTVar5 = &pTVar3->hnext;
    ts = pTVar2;
  }
  iVar4 = (pgVar6->strt).nuse;
  *ppTVar5 = ts->hnext;
  (pgVar6->strt).nuse = iVar4 + -1;
  return;
}


