/*
 * Ghidra decompilation
 *
 * Function : lua_resume
 * Address  : 081144f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_resume(lua_State *L,lua_State *from,int nargs)

{
  byte bVar1;
  ushort uVar2;
  TString *x_;
  TString *pTVar3;
  TString *x__2;
  int iVar4;
  CallInfo *ci;
  CallInfo *pCVar5;
  void *ud;
  TString *x__1;
  ushort uVar6;
  uint uVar7;
  StkId lim;
  TString *x__3;
  CallInfo *pCVar8;
  CallInfo *ci_1;
  StkId pTVar9;
  TValue *io1_1;
  TValue *io_2;
  TValue *io_3;
  StkId oldtop;
  TValue *io;
  TValue *io1;
  TValue *io_1;
  int iVar10;
  StkId pTVar11;
  bool bVar12;
  StkId *ppTVar13;
  int status;
  uint local_2c;
  
  bVar12 = from == (lua_State *)0x0;
  uVar2 = L->nny;
  local_2c = __stack_chk_guard;
  uVar7 = __stack_chk_guard;
  if (!bVar12) {
    uVar7 = (uint)from->nCcalls;
  }
  uVar6 = (ushort)uVar7;
  if (bVar12) {
    uVar6 = 1;
  }
  L->nny = 0;
  if (!bVar12) {
    uVar6 = uVar6 + 1;
  }
  L->nCcalls = uVar6;
  status = luaD_rawrunprotected(L,resume,L->top + -nargs);
  if (status == -1) {
    iVar4 = 2;
  }
  else {
    iVar4 = status;
    if (1 < status) {
      do {
        pCVar8 = L->ci;
        while( true ) {
          status = iVar4;
          if (pCVar8 == (CallInfo *)0x0) {
            pTVar9 = L->top;
            L->status = (lu_byte)iVar4;
            if (iVar4 == 4) {
              pTVar3 = L->l_G->memerrmsg;
              (pTVar9->value_).gc = (GCObject *)pTVar3;
              pTVar9->tt_ = pTVar3->tt | 0x40;
            }
            else if (iVar4 == 6) {
              pTVar3 = luaS_newlstr(L,"error in error handling",0x17);
              (pTVar9->value_).gc = (GCObject *)pTVar3;
              pTVar9->tt_ = pTVar3->tt | 0x40;
            }
            else {
              iVar4 = pTVar9[-1].tt_;
              pTVar9->value_ = pTVar9[-1].value_;
              pTVar9->tt_ = iVar4;
            }
            L->top = pTVar9 + 1;
            L->ci->top = pTVar9 + 1;
            iVar4 = status;
            goto LAB_081146b4;
          }
          if ((pCVar8->callstatus & 0x10) != 0) break;
          pCVar8 = pCVar8->previous;
        }
        iVar10 = pCVar8->extra;
        pTVar11 = L->stack;
        pTVar9 = (StkId)((int)&pTVar11->value_ + iVar10);
        luaF_close(L,pTVar9);
        if (iVar4 == 4) {
          pTVar3 = L->l_G->memerrmsg;
          *(TString **)((int)&pTVar11->value_ + iVar10) = pTVar3;
          pTVar9->tt_ = pTVar3->tt | 0x40;
        }
        else if (iVar4 == 6) {
          pTVar3 = luaS_newlstr(L,"error in error handling",0x17);
          *(TString **)((int)&pTVar11->value_ + iVar10) = pTVar3;
          pTVar9->tt_ = pTVar3->tt | 0x40;
        }
        else {
          iVar4 = L->top[-1].tt_;
          pTVar9->value_ = L->top[-1].value_;
          pTVar9->tt_ = iVar4;
        }
        pTVar9 = pTVar9 + 1;
        L->top = pTVar9;
        L->ci = pCVar8;
        bVar1 = pCVar8->callstatus;
        L->nny = 0;
        L->allowhook = bVar1 & 1;
        pCVar5 = pCVar8;
        do {
          ppTVar13 = &pCVar5->top;
          pCVar5 = pCVar5->previous;
          if (pTVar9 < *ppTVar13) {
            pTVar9 = *ppTVar13;
          }
        } while (pCVar5 != (CallInfo *)0x0);
        ud = (void *)L->stacksize;
        iVar4 = (int)pTVar9 - (int)L->stack >> 3;
        iVar10 = iVar4 + 1;
        if ((int)ud < 0xf4241) {
          luaE_shrinkCI(L);
        }
        else {
          luaE_freeCI(L);
        }
        if (iVar10 < 0xf4241) {
          iVar4 = iVar4 + 8;
          if (-1 < iVar10) {
            iVar4 = iVar10;
          }
          iVar4 = iVar10 + (iVar4 >> 3) + 10;
          if (999999 < iVar4) {
            iVar4 = 1000000;
          }
          if (iVar4 < L->stacksize) {
            luaD_reallocstack(L,iVar4);
          }
        }
        L->errfunc = (ptrdiff_t)(pCVar8->u).l.savedpc;
        iVar4 = luaD_rawrunprotected(L,(Pfunc)&status,ud);
        status = iVar4;
      } while (1 < iVar4);
    }
  }
LAB_081146b4:
  L->nny = uVar2;
  uVar7 = __stack_chk_guard;
  L->nCcalls = L->nCcalls - 1;
  if (local_2c != uVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


