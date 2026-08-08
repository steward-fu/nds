/*
 * Ghidra decompilation
 *
 * Function : luaS_newlstr
 * Address  : 0811e208
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

TString * luaS_newlstr(lua_State *L,char *str,size_t l)

{
  byte *pbVar1;
  TString *pTVar2;
  TString *ts;
  TString *ts_2;
  int iVar3;
  size_t step;
  size_t totalsize;
  size_t l1;
  char *pcVar4;
  byte bVar5;
  int iVar6;
  TString *ts_1;
  uint h;
  uint uVar7;
  uint h_1;
  uint uVar8;
  global_State *pgVar9;
  global_State *g;
  TString **ppTVar10;
  TString **list;
  TString **ppTVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  
  if (l < 0x29) {
    pgVar9 = L->l_G;
    uVar8 = (l >> 5) + 1;
    uVar7 = pgVar9->seed ^ l;
    if (uVar8 <= l) {
      pcVar4 = str + l;
      do {
        pbVar1 = (byte *)(pcVar4 + -1);
        pcVar4 = pcVar4 + -uVar8;
        uVar7 = uVar7 ^ (uVar7 >> 2) + uVar7 * 0x20 + (uint)*pbVar1;
      } while (uVar8 <= (uint)((int)pcVar4 - (int)str));
    }
    ppTVar10 = (pgVar9->strt).hash;
    iVar12 = (pgVar9->strt).size;
    uVar8 = iVar12 - 1U & uVar7;
    ppTVar11 = ppTVar10 + uVar8;
    for (pTVar2 = ppTVar10[uVar8]; pTVar2 != (TString *)0x0; pTVar2 = pTVar2->hnext) {
      if ((l == pTVar2->len) && (iVar3 = memcmp(str,&pTVar2[1].tt,l), iVar3 == 0)) {
        bVar5 = pTVar2->marked ^ 3;
        if ((bVar5 & (pgVar9->currentwhite ^ 3)) != 0) {
          return pTVar2;
        }
        pTVar2->marked = bVar5;
        return pTVar2;
      }
    }
    iVar6 = (pgVar9->strt).nuse;
    bVar14 = SBORROW4(iVar12,iVar6);
    iVar3 = iVar12 - iVar6;
    bVar13 = iVar12 == iVar6;
    if (iVar12 <= iVar6) {
      bVar14 = SCARRY4(iVar12,-0x3fffffff);
      iVar3 = iVar12 + -0x3fffffff;
      bVar13 = iVar12 == 0x3fffffff;
    }
    if (bVar13 || iVar3 < 0 != bVar14) {
      luaS_resize(L,iVar12 << 1);
      ppTVar11 = (pgVar9->strt).hash + ((pgVar9->strt).size - 1U & uVar7);
    }
    pTVar2 = (TString *)luaC_newobj(L,4,l + 0x19);
    pTVar2->extra = '\0';
    pTVar2->len = l;
    pTVar2->hash = uVar7;
    memcpy(&pTVar2[1].tt,str,l);
    (&pTVar2[1].tt)[l] = '\0';
    iVar12 = (pgVar9->strt).nuse;
    pTVar2->hnext = *ppTVar11;
    *ppTVar11 = pTVar2;
    (pgVar9->strt).nuse = iVar12 + 1;
  }
  else {
    if (0x7fffffea < l + 1 && l != 0x7fffffea) {
                    /* WARNING: Subroutine does not return */
      luaM_toobig(L);
    }
    uVar8 = L->l_G->seed;
    pTVar2 = (TString *)luaC_newobj(L,0x14,l + 0x19);
    pTVar2->extra = '\0';
    pTVar2->hash = uVar8;
    pTVar2->len = l;
    memcpy(&pTVar2[1].tt,str,l);
    (&pTVar2[1].tt)[l] = '\0';
  }
  return pTVar2;
}


