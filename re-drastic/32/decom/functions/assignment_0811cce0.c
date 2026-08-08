/*
 * Ghidra decompilation
 *
 * Function : assignment
 * Address  : 0811cce0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void assignment(LexState *ls,LHS_assign *lh,int nvars)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  OpCode op;
  int iVar4;
  int iVar5;
  int reg;
  LHS_assign *pLVar6;
  char *what;
  int nresults;
  FuncState *fs_1;
  int nexps;
  int extra;
  FuncState *pFVar7;
  FuncState *fs;
  expdesc e;
  
  iVar3 = __stack_chk_guard;
  if (2 < (lh->v).k + ~VNONRELOC) {
                    /* WARNING: Subroutine does not return */
    luaX_syntaxerror(ls,"syntax error");
  }
  iVar4 = (ls->t).token;
  if (iVar4 == 0x2c) {
    luaX_next(ls);
    e.k = (expkind)lh;
    suffixedexp(ls,(expdesc *)&e.u.ind);
    if (e.u.info != 10) {
      pFVar7 = ls->fs;
      bVar1 = pFVar7->freereg;
      if (e.u.info == 8) {
        bVar2 = false;
        pLVar6 = lh;
        do {
          if ((pLVar6->v).k == VINDEXED) {
            if (((pLVar6->v).u.ind.vt == '\b') && ((uint)(pLVar6->v).u.ind.t == e.t)) {
              bVar2 = true;
              (pLVar6->v).u.ind.t = bVar1;
              (pLVar6->v).u.ind.vt = '\b';
            }
            if ((pLVar6->v).u.ind.idx == e.t) {
              bVar2 = true;
              *(ushort *)&(pLVar6->v).u = (ushort)bVar1;
            }
          }
          pLVar6 = pLVar6->prev;
        } while (pLVar6 != (LHS_assign *)0x0);
        op = OP_MOVE;
        if (bVar2) goto LAB_0811ce9c;
      }
      else {
        bVar2 = false;
        pLVar6 = lh;
        do {
          if ((((pLVar6->v).k == VINDEXED) && (e.u.info == (uint)(pLVar6->v).u.ind.vt)) &&
             (e.t == (uint)(pLVar6->v).u.ind.t)) {
            bVar2 = true;
            (pLVar6->v).u.ind.t = bVar1;
            (pLVar6->v).u.ind.vt = '\b';
          }
          pLVar6 = pLVar6->prev;
        } while (pLVar6 != (LHS_assign *)0x0);
        if (bVar2) {
          op = OP_GETUPVAL;
LAB_0811ce9c:
          luaK_codeABC(pFVar7,op,(uint)bVar1,e.t,0);
          luaK_reserveregs(pFVar7,1);
        }
      }
    }
    what = (char *)((uint)ls->L->nCcalls + nvars);
    if (200 < (int)what) {
                    /* WARNING: Subroutine does not return */
      checklimit(ls->fs,200,0x8146118,what);
    }
    assignment(ls,(LHS_assign *)&e,nvars + 1);
  }
  else {
    if (iVar4 != 0x3d) {
                    /* WARNING: Subroutine does not return */
      error_expected(ls,0x3d);
    }
    iVar4 = 1;
    luaX_next(ls);
    subexpr(ls,&e,0);
    iVar5 = (ls->t).token;
    while (iVar5 == 0x2c) {
      iVar4 = iVar4 + 1;
      luaX_next(ls);
      luaK_exp2nextreg(ls->fs,&e);
      subexpr(ls,&e,0);
      iVar5 = (ls->t).token;
    }
    if (nvars == iVar4) {
      luaK_setoneret(ls->fs,&e);
      luaK_storevar(ls->fs,&lh->v,&e);
      goto LAB_0811cf14;
    }
    iVar5 = nvars - iVar4;
    pFVar7 = ls->fs;
    if (e.k + ~VRELOCABLE < 2) {
      nresults = iVar5 + 1;
      if (nresults < 0) {
        luaK_setreturns(pFVar7,&e,0);
      }
      else {
        luaK_setreturns(pFVar7,&e,nresults);
        if (1 < nresults) {
          luaK_reserveregs(pFVar7,iVar5);
        }
      }
    }
    else {
      if (e.k != VVOID) {
        luaK_exp2nextreg(pFVar7,&e);
      }
      if (0 < iVar5) {
        bVar1 = pFVar7->freereg;
        luaK_reserveregs(pFVar7,iVar5);
        luaK_nil(pFVar7,(uint)bVar1,iVar5);
      }
    }
    if (nvars < iVar4) {
      ls->fs->freereg = (ls->fs->freereg + (char)nvars) - (char)iVar4;
    }
  }
  e.k = VNONRELOC;
  e.t = -1;
  e.f = -1;
  e.u.info = ls->fs->freereg - 1;
  luaK_storevar(ls->fs,&lh->v,&e);
LAB_0811cf14:
  if (iVar3 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


