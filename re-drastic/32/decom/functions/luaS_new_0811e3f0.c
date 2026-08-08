/*
 * Ghidra decompilation
 *
 * Function : luaS_new
 * Address  : 0811e3f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

TString * luaS_new(lua_State *L,char *str)

{
  byte *pbVar1;
  size_t __n;
  TString *pTVar2;
  TString *ts;
  size_t l1;
  TString *ts_2;
  int iVar3;
  size_t step;
  size_t totalsize;
  char *pcVar4;
  byte bVar5;
  int iVar6;
  TString *ts_1;
  global_State *pgVar7;
  global_State *g;
  uint uVar8;
  uint h;
  uint uVar9;
  uint h_1;
  TString **ppTVar10;
  TString **list;
  TString **ppTVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  
  __n = strlen(str);
  if (__n < 0x29) {
    pgVar7 = L->l_G;
    uVar8 = (__n >> 5) + 1;
    uVar9 = pgVar7->seed ^ __n;
    if (uVar8 <= __n) {
      pcVar4 = str + __n;
      do {
        pbVar1 = (byte *)(pcVar4 + -1);
        pcVar4 = pcVar4 + -uVar8;
        uVar9 = uVar9 ^ (uVar9 >> 2) + uVar9 * 0x20 + (uint)*pbVar1;
      } while (uVar8 <= (uint)((int)pcVar4 - (int)str));
    }
    ppTVar10 = (pgVar7->strt).hash;
    iVar12 = (pgVar7->strt).size;
    uVar8 = iVar12 - 1U & uVar9;
    ppTVar11 = ppTVar10 + uVar8;
    for (pTVar2 = ppTVar10[uVar8]; pTVar2 != (TString *)0x0; pTVar2 = pTVar2->hnext) {
      if ((__n == pTVar2->len) && (iVar3 = memcmp(str,&pTVar2[1].tt,__n), iVar3 == 0)) {
        bVar5 = pTVar2->marked ^ 3;
        if ((bVar5 & (pgVar7->currentwhite ^ 3)) != 0) {
          return pTVar2;
        }
        pTVar2->marked = bVar5;
        return pTVar2;
      }
    }
    iVar6 = (pgVar7->strt).nuse;
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
      ppTVar11 = (pgVar7->strt).hash + ((pgVar7->strt).size - 1U & uVar9);
    }
    pTVar2 = (TString *)luaC_newobj(L,4,__n + 0x19);
    pTVar2->extra = '\0';
    pTVar2->len = __n;
    pTVar2->hash = uVar9;
    memcpy(&pTVar2[1].tt,str,__n);
    (&pTVar2[1].tt)[__n] = '\0';
    iVar12 = (pgVar7->strt).nuse;
    pTVar2->hnext = *ppTVar11;
    *ppTVar11 = pTVar2;
    (pgVar7->strt).nuse = iVar12 + 1;
  }
  else {
    if (0x7fffffea < __n + 1 && __n != 0x7fffffea) {
                    /* WARNING: Subroutine does not return */
      luaM_toobig(L);
    }
    uVar8 = L->l_G->seed;
    pTVar2 = (TString *)luaC_newobj(L,0x14,__n + 0x19);
    pTVar2->extra = '\0';
    pTVar2->hash = uVar8;
    pTVar2->len = __n;
    memcpy(&pTVar2[1].tt,str,__n);
    (&pTVar2[1].tt)[__n] = '\0';
  }
  return pTVar2;
}


