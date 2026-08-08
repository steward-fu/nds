/*
 * Ghidra decompilation
 *
 * Function : unroll
 * Address  : 081134d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void unroll(lua_State *L,void *ud)

{
  byte bVar1;
  int iVar2;
  Instruction *pIVar3;
  int n;
  StkId pTVar4;
  StkId res;
  int n_1;
  int iVar5;
  StkId pTVar6;
  StkId pTVar7;
  ptrdiff_t ci_top;
  int size;
  int newsize;
  int newsize_00;
  int wanted;
  int i;
  int iVar8;
  int needed;
  CallInfo *pCVar9;
  CallInfo *ci;
  int wanted_1;
  int i_1;
  lua_Hook p_Var10;
  lua_Hook hook;
  CallInfo *pCVar11;
  CallInfo *ci_1;
  ptrdiff_t fr_1;
  int iVar12;
  ptrdiff_t fr;
  CallInfo *ci_2;
  CallInfo *ci_3;
  StkId res_1;
  StkId pTVar13;
  ptrdiff_t top;
  lua_Debug ar;
  
  iVar2 = __stack_chk_guard;
  if (ud == (void *)0x0) {
    pCVar9 = L->ci;
  }
  else {
    pCVar9 = L->ci;
                    /* WARNING: Load size is inaccurate */
    iVar5 = *ud;
    if ((pCVar9->callstatus & 0x10) != 0) {
      pIVar3 = (pCVar9->u).l.savedpc;
      pCVar9->callstatus = pCVar9->callstatus & 0xef;
      L->errfunc = (ptrdiff_t)pIVar3;
    }
    if (pCVar9->nresults == -1) {
      if (L->ci->top < L->top) {
        L->ci->top = L->top;
      }
    }
    iVar5 = (*(pCVar9->u).c.k)(L,iVar5,(pCVar9->u).c.ctx);
    pCVar11 = L->ci;
    pTVar13 = L->top + -iVar5;
    if ((L->hookmask & 6) == 0) {
      pCVar9 = pCVar11->previous;
    }
    else {
      if ((L->hookmask & 2) != 0) {
        pTVar4 = L->stack;
        luaD_hook(L,1,-1);
        pTVar13 = (StkId)((int)L->stack + ((int)pTVar13 - (int)pTVar4));
      }
      pCVar9 = pCVar11->previous;
      L->oldpc = (pCVar9->u).l.savedpc;
    }
    iVar5 = (int)pCVar11->nresults;
    pTVar4 = pCVar11->func;
    L->ci = pCVar9;
    if (iVar5 != 0) {
      pTVar6 = L->top;
      pTVar7 = pTVar4;
      do {
        if (pTVar6 <= pTVar13) {
          iVar12 = iVar5 + -1;
          pTVar4 = pTVar7;
          pTVar13 = pTVar7;
          if (0 < iVar5) {
            do {
              iVar12 = iVar12 + -1;
              pTVar13->tt_ = 0;
              pTVar13 = pTVar13 + 1;
            } while (iVar12 != -1);
            pTVar4 = pTVar7 + iVar5;
          }
          break;
        }
        iVar12 = pTVar13->tt_;
        iVar5 = iVar5 + -1;
        pTVar4 = pTVar7 + 1;
        pTVar7->value_ = pTVar13->value_;
        pTVar7->tt_ = iVar12;
        pTVar7 = pTVar4;
        pTVar13 = pTVar13 + 1;
      } while (iVar5 != 0);
    }
    L->top = pTVar4;
  }
  while (&L->base_ci != pCVar9) {
    while (bVar1 = pCVar9->callstatus, (bVar1 & 2) == 0) {
      if ((bVar1 & 0x10) != 0) {
        pIVar3 = (pCVar9->u).l.savedpc;
        pCVar9->callstatus = bVar1 & 0xef;
        L->errfunc = (ptrdiff_t)pIVar3;
      }
      if (pCVar9->nresults == -1) {
        if (L->ci->top < L->top) {
          L->ci->top = L->top;
        }
      }
      iVar5 = (*(pCVar9->u).c.k)(L,1,(pCVar9->u).c.ctx);
      pTVar4 = L->top;
      pCVar11 = L->ci;
      pTVar13 = pTVar4 + -iVar5;
      if ((L->hookmask & 6) == 0) {
        pCVar9 = pCVar11->previous;
      }
      else {
        if ((L->hookmask & 2) != 0) {
          pTVar7 = L->stack;
          p_Var10 = L->hook;
          iVar5 = (int)pTVar13 - (int)pTVar7;
          if ((p_Var10 != (lua_Hook)0x0) && (L->allowhook != '\0')) {
            ar.event = 1;
            pTVar13 = pCVar11->top;
            ar.currentline = -1;
            iVar12 = (int)pTVar4 - (int)pTVar7;
            ar.i_ci = pCVar11;
            if ((int)L->stack_last - (int)pTVar4 < 0xa8) {
              if (1000000 < L->stacksize) {
                    /* WARNING: Subroutine does not return */
                luaD_throw(L,6);
              }
              newsize_00 = L->stacksize * 2;
              iVar8 = (iVar12 >> 3) + 0x19;
              if (999999 < newsize_00) {
                newsize_00 = 1000000;
              }
              if ((newsize_00 < iVar8) && (newsize_00 = iVar8, 1000000 < iVar8)) {
                luaD_reallocstack(L,0xf4308);
                    /* WARNING: Subroutine does not return */
                luaG_runerror(L,"stack overflow");
              }
              luaD_reallocstack(L,newsize_00);
              pTVar4 = L->top;
            }
            pCVar11->top = pTVar4 + 0x14;
            L->allowhook = '\0';
            pCVar11->callstatus = pCVar11->callstatus | 4;
            (*p_Var10)(L,&ar);
            pTVar4 = L->stack;
            L->allowhook = '\x01';
            pCVar11->top = (StkId)((int)pTVar4 + ((int)pTVar13 - (int)pTVar7));
            L->top = (StkId)((int)pTVar4 + iVar12);
            pCVar11->callstatus = pCVar11->callstatus & 0xfb;
            pTVar7 = L->stack;
          }
          pTVar13 = (StkId)((int)pTVar7 + iVar5);
        }
        pCVar9 = pCVar11->previous;
        L->oldpc = (pCVar9->u).l.savedpc;
      }
      iVar5 = (int)pCVar11->nresults;
      pTVar4 = pCVar11->func;
      L->ci = pCVar9;
      if (iVar5 != 0) {
        pTVar6 = L->top;
        pTVar7 = pTVar4;
        do {
          if (pTVar6 <= pTVar13) {
            iVar12 = iVar5 + -1;
            pTVar13 = pTVar7;
            pTVar4 = pTVar7;
            if (0 < iVar5) {
              do {
                iVar12 = iVar12 + -1;
                pTVar13->tt_ = 0;
                pTVar13 = pTVar13 + 1;
              } while (iVar12 != -1);
              pTVar4 = pTVar7 + iVar5;
            }
            break;
          }
          iVar12 = pTVar13->tt_;
          iVar5 = iVar5 + -1;
          pTVar4 = pTVar7 + 1;
          pTVar7->value_ = pTVar13->value_;
          pTVar7->tt_ = iVar12;
          pTVar7 = pTVar4;
          pTVar13 = pTVar13 + 1;
        } while (iVar5 != 0);
      }
      L->top = pTVar4;
      if (&L->base_ci == pCVar9) goto LAB_08113688;
    }
    luaV_finishOp(L);
    luaV_execute(L);
    pCVar9 = L->ci;
  }
LAB_08113688:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


