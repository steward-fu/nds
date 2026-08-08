/*
 * Ghidra decompilation
 *
 * Function : luaS_resize
 * Address  : 0811e080
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaS_resize(lua_State *L,int newsize)

{
  TString **ppTVar1;
  TString *pTVar2;
  TString *hnext;
  int iVar3;
  uint uVar4;
  int iVar5;
  int i;
  int iVar6;
  TString *pTVar7;
  TString *p;
  global_State *pgVar8;
  
  pgVar8 = L->l_G;
  iVar5 = (pgVar8->strt).size;
  if (iVar5 < newsize) {
    if (0x3ffffffe < newsize + 1U && newsize != 0x3ffffffe) goto LAB_0811e1a0;
    ppTVar1 = (TString **)luaM_realloc_(L,(pgVar8->strt).hash,iVar5 << 2,newsize << 2);
    iVar5 = (pgVar8->strt).size;
    (pgVar8->strt).hash = ppTVar1;
    if (iVar5 < newsize) {
      iVar3 = iVar5 << 2;
      iVar6 = iVar5;
      while( true ) {
        iVar6 = iVar6 + 1;
        *(undefined4 *)((int)ppTVar1 + iVar3) = 0;
        iVar3 = iVar3 + 4;
        if (newsize == iVar6) break;
        ppTVar1 = (pgVar8->strt).hash;
      }
    }
  }
  if (0 < iVar5) {
    iVar3 = 0;
    do {
      ppTVar1 = (pgVar8->strt).hash;
      pTVar7 = ppTVar1[iVar3];
      ppTVar1[iVar3] = (TString *)0x0;
      while (pTVar7 != (TString *)0x0) {
        ppTVar1 = (pgVar8->strt).hash;
        pTVar2 = pTVar7->hnext;
        uVar4 = pTVar7->hash & newsize - 1U;
        pTVar7->hnext = ppTVar1[uVar4];
        ppTVar1[uVar4] = pTVar7;
        pTVar7 = pTVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar5);
  }
  if (newsize < iVar5) {
    if (0x3ffffffe < newsize + 1U && newsize != 0x3ffffffe) {
LAB_0811e1a0:
                    /* WARNING: Subroutine does not return */
      luaM_toobig(L);
    }
    ppTVar1 = (TString **)luaM_realloc_(L,(pgVar8->strt).hash,iVar5 << 2,newsize << 2);
    (pgVar8->strt).hash = ppTVar1;
  }
  (pgVar8->strt).size = newsize;
  return;
}


