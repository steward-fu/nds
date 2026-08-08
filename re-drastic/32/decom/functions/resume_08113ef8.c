/*
 * Ghidra decompilation
 *
 * Function : resume
 * Address  : 08113ef8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void resume(lua_State *L,void *ud)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int n;
  StkId pTVar4;
  StkId res;
  int n_1;
  StkId firstArg;
  StkId pTVar5;
  ptrdiff_t ci_top;
  int size;
  int newsize;
  int newsize_00;
  int wanted;
  int i;
  Instruction *pIVar6;
  StkId pTVar7;
  StkId pTVar8;
  int iVar9;
  int needed;
  int wanted_1;
  int i_1;
  lua_Hook p_Var10;
  lua_Hook hook;
  CallInfo *pCVar11;
  ptrdiff_t fr_1;
  int iVar12;
  lua_KFunction p_Var13;
  ptrdiff_t fr;
  CallInfo *ci_1;
  CallInfo *ci_2;
  StkId res_1;
  CallInfo *pCVar14;
  CallInfo *ci;
  ptrdiff_t top;
  lua_Debug ar;
  
  iVar2 = __stack_chk_guard;
  pCVar11 = L->ci;
  if (199 < L->nCcalls) {
                    /* WARNING: Subroutine does not return */
    resume_error(L,"C stack overflow",(StkId)ud);
  }
  if (L->status == '\0') {
    if (pCVar11 != &L->base_ci) {
                    /* WARNING: Subroutine does not return */
      resume_error(L,"cannot resume non-suspended coroutine",(StkId)ud);
    }
    iVar3 = luaD_precall(L,(StkId)((int)ud + -8),-1);
    if (iVar3 == 0) {
      luaV_execute(L);
    }
  }
  else {
    if (L->status != '\x01') {
                    /* WARNING: Subroutine does not return */
      resume_error(L,"cannot resume dead coroutine",(StkId)ud);
    }
    L->status = '\0';
    pCVar11->func = (StkId)((int)&L->stack->value_ + pCVar11->extra);
    if ((pCVar11->callstatus & 2) == 0) {
      p_Var13 = (pCVar11->u).c.k;
      if (p_Var13 != (lua_KFunction)0x0) {
        iVar3 = (*p_Var13)(L,1,(pCVar11->u).c.ctx);
        pCVar11 = L->ci;
        ud = L->top + -iVar3;
      }
      if ((L->hookmask & 6) == 0) {
        pCVar14 = pCVar11->previous;
      }
      else {
        if ((L->hookmask & 2) != 0) {
          pTVar4 = L->stack;
          luaD_hook(L,1,-1);
          ud = (void *)((int)L->stack + ((int)ud - (int)pTVar4));
        }
        pCVar14 = pCVar11->previous;
        L->oldpc = (pCVar14->u).l.savedpc;
      }
      iVar3 = (int)pCVar11->nresults;
      pTVar4 = pCVar11->func;
      L->ci = pCVar14;
      if (iVar3 != 0) {
        pTVar5 = L->top;
        pTVar7 = pTVar4;
        do {
          if (pTVar5 <= ud) {
            iVar12 = iVar3 + -1;
            pTVar4 = pTVar7;
            if (0 < iVar3) {
              do {
                iVar12 = iVar12 + -1;
                pTVar4->tt_ = 0;
                pTVar4 = pTVar4 + 1;
              } while (iVar12 != -1);
              pTVar4 = pTVar7 + iVar3;
            }
            break;
          }
          iVar12 = *(int *)((int)ud + 4);
          iVar3 = iVar3 + -1;
          pTVar4 = pTVar7 + 1;
          pTVar7->value_ = *(Value *)ud;
          pTVar7->tt_ = iVar12;
          pTVar7 = pTVar4;
          ud = (StkId)((int)ud + 8);
        } while (iVar3 != 0);
      }
      L->top = pTVar4;
    }
    else {
      luaV_execute(L);
      pCVar14 = L->ci;
    }
    while (&L->base_ci != pCVar14) {
      bVar1 = pCVar14->callstatus;
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 0x10) != 0) {
          pIVar6 = (pCVar14->u).l.savedpc;
          pCVar14->callstatus = bVar1 & 0xef;
          L->errfunc = (ptrdiff_t)pIVar6;
        }
        if (pCVar14->nresults == -1) {
          if (L->ci->top < L->top) {
            L->ci->top = L->top;
          }
        }
        iVar3 = (*(pCVar14->u).c.k)(L,1,(pCVar14->u).c.ctx);
        pTVar7 = L->top;
        pCVar11 = L->ci;
        pTVar4 = pTVar7 + -iVar3;
        if ((L->hookmask & 6) == 0) {
          pCVar14 = pCVar11->previous;
        }
        else {
          if ((L->hookmask & 2) != 0) {
            pTVar5 = L->stack;
            p_Var10 = L->hook;
            iVar3 = (int)pTVar4 - (int)pTVar5;
            if ((p_Var10 != (lua_Hook)0x0) && (L->allowhook != '\0')) {
              ar.event = 1;
              pTVar4 = pCVar11->top;
              ar.currentline = -1;
              iVar12 = (int)pTVar7 - (int)pTVar5;
              ar.i_ci = pCVar11;
              if ((int)L->stack_last - (int)pTVar7 < 0xa8) {
                if (1000000 < L->stacksize) {
                    /* WARNING: Subroutine does not return */
                  luaD_throw(L,6);
                }
                newsize_00 = L->stacksize * 2;
                iVar9 = (iVar12 >> 3) + 0x19;
                if (999999 < newsize_00) {
                  newsize_00 = 1000000;
                }
                if ((newsize_00 < iVar9) && (newsize_00 = iVar9, 1000000 < iVar9)) {
                  luaD_reallocstack(L,0xf4308);
                    /* WARNING: Subroutine does not return */
                  luaG_runerror(L,"stack overflow");
                }
                luaD_reallocstack(L,newsize_00);
                pTVar7 = L->top;
              }
              pCVar11->top = pTVar7 + 0x14;
              L->allowhook = '\0';
              pCVar11->callstatus = pCVar11->callstatus | 4;
              (*p_Var10)(L,&ar);
              pTVar7 = L->stack;
              L->allowhook = '\x01';
              pCVar11->top = (StkId)((int)pTVar7 + ((int)pTVar4 - (int)pTVar5));
              L->top = (StkId)((int)pTVar7 + iVar12);
              pCVar11->callstatus = pCVar11->callstatus & 0xfb;
              pTVar5 = L->stack;
            }
            pTVar4 = (StkId)((int)pTVar5 + iVar3);
          }
          pCVar14 = pCVar11->previous;
          L->oldpc = (pCVar14->u).l.savedpc;
        }
        iVar3 = (int)pCVar11->nresults;
        pTVar7 = pCVar11->func;
        L->ci = pCVar14;
        if (iVar3 != 0) {
          pTVar8 = L->top;
          pTVar5 = pTVar7;
          do {
            if (pTVar8 <= pTVar4) {
              iVar12 = iVar3 + -1;
              pTVar4 = pTVar5;
              pTVar7 = pTVar5;
              if (0 < iVar3) {
                do {
                  iVar12 = iVar12 + -1;
                  pTVar4->tt_ = 0;
                  pTVar4 = pTVar4 + 1;
                } while (iVar12 != -1);
                pTVar7 = pTVar5 + iVar3;
              }
              break;
            }
            iVar12 = pTVar4->tt_;
            iVar3 = iVar3 + -1;
            pTVar7 = pTVar5 + 1;
            pTVar5->value_ = pTVar4->value_;
            pTVar5->tt_ = iVar12;
            pTVar5 = pTVar7;
            pTVar4 = pTVar4 + 1;
          } while (iVar3 != 0);
        }
        L->top = pTVar7;
      }
      else {
        luaV_finishOp(L);
        luaV_execute(L);
        pCVar14 = L->ci;
      }
    }
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


