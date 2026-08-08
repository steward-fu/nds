/*
 * Ghidra decompilation
 *
 * Function : luaD_protectedparser
 * Address  : 08114a00
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaD_protectedparser(lua_State *L,ZIO *z,char *name,char *mode)

{
  lu_byte lVar1;
  int iVar2;
  int iVar3;
  int status_1;
  TString *pTVar4;
  TString *x_;
  TString *x__1;
  StkId pTVar5;
  ushort uVar6;
  ushort old_nny;
  int status;
  ptrdiff_t pVar7;
  ptrdiff_t old_errfunc;
  CallInfo *pCVar8;
  CallInfo *old_ci;
  CallInfo *ci;
  StkId pTVar9;
  StkId oldtop;
  TValue *io1;
  StkId lim;
  int iVar10;
  TValue *io;
  TValue *io_1;
  StkId pTVar11;
  int iVar12;
  bool bVar13;
  StkId *ppTVar14;
  lu_byte old_allowhooks;
  SParser p;
  
  iVar2 = __stack_chk_guard;
  pCVar8 = L->ci;
  pTVar11 = L->top;
  uVar6 = L->nny + 1;
  pTVar9 = L->stack;
  lVar1 = L->allowhook;
  L->nny = uVar6;
  pVar7 = L->errfunc;
  p.buff.buffer = (char *)0x0;
  p.buff.buffsize = 0;
  p.dyd.actvar.arr = (Vardesc *)0x0;
  p.dyd.actvar.size = 0;
  p.dyd.gt.arr = (Labeldesc *)0x0;
  p.dyd.gt.size = 0;
  p.dyd.label.arr = (Labeldesc *)0x0;
  p.dyd.label.size = 0;
  p.z = z;
  p.mode = mode;
  p.name = name;
  iVar3 = luaD_rawrunprotected(L,f_parser,&p);
  if (iVar3 != 0) {
    pTVar5 = L->stack;
    iVar12 = (int)pTVar11 - (int)pTVar9;
    pTVar9 = (StkId)((int)pTVar5 + iVar12);
    luaF_close(L,pTVar9);
    if (iVar3 == 4) {
      pTVar4 = L->l_G->memerrmsg;
      *(TString **)((int)pTVar5 + iVar12) = pTVar4;
      pTVar9->tt_ = pTVar4->tt | 0x40;
    }
    else if (iVar3 == 6) {
      pTVar4 = luaS_newlstr(L,"error in error handling",0x17);
      *(TString **)((int)pTVar5 + iVar12) = pTVar4;
      pTVar9->tt_ = pTVar4->tt | 0x40;
    }
    else {
      iVar12 = L->top[-1].tt_;
      pTVar9->value_ = L->top[-1].value_;
      pTVar9->tt_ = iVar12;
    }
    L->top = pTVar9 + 1;
    L->ci = pCVar8;
    L->nny = uVar6;
    L->allowhook = lVar1;
    pTVar9 = pTVar9 + 1;
    while (pCVar8 != (CallInfo *)0x0) {
      ppTVar14 = &pCVar8->top;
      pCVar8 = pCVar8->previous;
      if (pTVar9 < *ppTVar14) {
        pTVar9 = *ppTVar14;
      }
    }
    iVar12 = (int)pTVar9 - (int)L->stack >> 3;
    iVar10 = iVar12 + 1;
    if (L->stacksize < 0xf4241) {
      luaE_shrinkCI(L);
    }
    else {
      luaE_freeCI(L);
    }
    if (iVar10 < 0xf4241) {
      iVar12 = iVar12 + 8;
      if (-1 < iVar10) {
        iVar12 = iVar10;
      }
      iVar12 = iVar10 + (iVar12 >> 3) + 10;
      if (999999 < iVar12) {
        iVar12 = 1000000;
      }
      if (iVar12 < L->stacksize) {
        luaD_reallocstack(L,iVar12);
      }
    }
  }
  L->errfunc = pVar7;
  p.buff.buffer = (char *)luaM_realloc_(L,p.buff.buffer,p.buff.buffsize,0);
  p.buff.buffsize = 0;
  luaM_realloc_(L,p.dyd.actvar.arr,p.dyd.actvar.size << 1,0);
  luaM_realloc_(L,p.dyd.gt.arr,p.dyd.gt.size << 4,0);
  luaM_realloc_(L,p.dyd.label.arr,p.dyd.label.size << 4,0);
  bVar13 = iVar2 == __stack_chk_guard;
  L->nny = L->nny - 1;
  if (bVar13) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


