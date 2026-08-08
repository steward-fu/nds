/*
 * Ghidra decompilation
 *
 * Function : luaD_pcall
 * Address  : 0811486c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable x__1:TString *[r2:4] conflicts with parameter, skipped. */

int luaD_pcall(lua_State *L,Pfunc func,void *u,ptrdiff_t old_top,ptrdiff_t ef)

{
  lu_byte lVar1;
  ushort uVar2;
  int iVar3;
  int status;
  TString *pTVar4;
  TString *x_;
  StkId lim;
  StkId pTVar5;
  int iVar6;
  TValue *io_1;
  StkId level;
  StkId oldtop;
  TValue *io1;
  int iVar7;
  TValue *io;
  ptrdiff_t pVar8;
  ptrdiff_t old_errfunc;
  CallInfo *pCVar9;
  CallInfo *old_ci;
  CallInfo *ci;
  lu_byte old_allowhooks;
  ushort old_nny;
  StkId *ppTVar10;
  
  pVar8 = L->errfunc;
  pCVar9 = L->ci;
  uVar2 = L->nny;
  lVar1 = L->allowhook;
  L->errfunc = ef;
  iVar3 = luaD_rawrunprotected(L,func,u);
  if (iVar3 != 0) {
    pTVar5 = L->stack;
    level = (StkId)((int)&pTVar5->value_ + old_top);
    luaF_close(L,level);
    if (iVar3 == 4) {
      pTVar4 = L->l_G->memerrmsg;
      *(TString **)((int)&pTVar5->value_ + old_top) = pTVar4;
      level->tt_ = pTVar4->tt | 0x40;
    }
    else if (iVar3 == 6) {
      pTVar4 = luaS_newlstr(L,"error in error handling",0x17);
      *(TString **)((int)&pTVar5->value_ + old_top) = pTVar4;
      level->tt_ = pTVar4->tt | 0x40;
    }
    else {
      iVar6 = L->top[-1].tt_;
      level->value_ = L->top[-1].value_;
      level->tt_ = iVar6;
    }
    L->top = level + 1;
    L->ci = pCVar9;
    L->nny = uVar2;
    L->allowhook = lVar1;
    pTVar5 = level + 1;
    while (pCVar9 != (CallInfo *)0x0) {
      ppTVar10 = &pCVar9->top;
      pCVar9 = pCVar9->previous;
      if (pTVar5 < *ppTVar10) {
        pTVar5 = *ppTVar10;
      }
    }
    iVar6 = (int)pTVar5 - (int)L->stack >> 3;
    iVar7 = iVar6 + 1;
    if (L->stacksize < 0xf4241) {
      luaE_shrinkCI(L);
    }
    else {
      luaE_freeCI(L);
    }
    if (iVar7 < 0xf4241) {
      iVar6 = iVar6 + 8;
      if (-1 < iVar7) {
        iVar6 = iVar7;
      }
      iVar6 = iVar7 + (iVar6 >> 3) + 10;
      if (999999 < iVar6) {
        iVar6 = 1000000;
      }
      if (iVar6 < L->stacksize) {
        luaD_reallocstack(L,iVar6);
      }
    }
  }
  L->errfunc = pVar8;
  return iVar3;
}


