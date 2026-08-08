/*
 * Ghidra decompilation
 *
 * Function : luaD_precall
 * Address  : 08113978
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaD_precall(lua_State *L,StkId func,int nresults)

{
  byte bVar1;
  TValue *pTVar2;
  TValue *tm;
  StkId pTVar3;
  StkId res;
  TValue *io1_2;
  StkId pTVar4;
  int size;
  StkId pTVar5;
  int size_3;
  int newsize_3;
  int size_2;
  int newsize_2;
  int iVar6;
  int needed;
  int size_1;
  int newsize_1;
  StkId pTVar7;
  size_t __n;
  Value VVar8;
  int wanted;
  int i;
  CallInfo *pCVar9;
  uint uVar10;
  Instruction *pIVar11;
  int needed_3;
  int needed_2;
  int newsize;
  int iVar12;
  int needed_1;
  TValue *io1_1;
  int iVar13;
  int n;
  CallInfo *pCVar14;
  CallInfo *ci;
  lua_CFunction f;
  CallInfo *ci_1;
  ptrdiff_t fr;
  TValue *io1;
  int iVar15;
  ptrdiff_t funcr;
  StkId p;
  Proto *p_1;
  StkId base;
  int nfixargs;
  int iVar16;
  
  while( true ) {
    pTVar7 = L->stack;
    uVar10 = func->tt_ & 0x3f;
    iVar15 = (int)func - (int)pTVar7;
    if (uVar10 == 0x16) break;
    if (uVar10 == 0x26) {
      f = *(lua_CFunction *)((func->value_).f + 0xc);
      goto Cfunc;
    }
    if (uVar10 == 6) {
      pTVar3 = L->top;
      iVar6 = *(int *)((func->value_).f + 0xc);
      iVar13 = ((int)pTVar3 - (int)func >> 3) + -1;
      if ((int)L->stack_last - (int)pTVar3 >> 3 <= (int)(uint)*(byte *)(iVar6 + 8)) {
        if (1000000 < L->stacksize) goto LAB_08113ed8;
        iVar16 = L->stacksize * 2;
        iVar12 = (uint)*(byte *)(iVar6 + 8) + ((int)pTVar3 - (int)pTVar7 >> 3) + 5;
        if (999999 < iVar16) {
          iVar16 = 1000000;
        }
        if ((iVar16 < iVar12) && (iVar16 = iVar12, 1000000 < iVar12)) goto LAB_08113e20;
        luaD_reallocstack(L,iVar16);
      }
      uVar10 = (uint)*(byte *)(iVar6 + 6);
      if (iVar13 < (int)uVar10) {
        pTVar7 = L->top;
        do {
          iVar13 = iVar13 + 1;
          L->top = pTVar7 + 1;
          pTVar7->tt_ = 0;
          uVar10 = (uint)*(byte *)(iVar6 + 6);
          pTVar7 = pTVar7 + 1;
        } while (iVar13 < (int)uVar10);
      }
      if (*(char *)(iVar6 + 7) == '\0') {
        pTVar7 = (StkId)((int)L->stack + iVar15);
        base = pTVar7 + 1;
      }
      else {
        base = L->top;
        if ((int)L->stack_last - (int)base >> 3 <= (int)(uint)*(byte *)(iVar6 + 8)) {
          if (1000000 < L->stacksize) goto LAB_08113ed8;
          iVar16 = L->stacksize * 2;
          if (999999 < iVar16) {
            iVar16 = 1000000;
          }
          iVar12 = (uint)*(byte *)(iVar6 + 8) + ((int)base - (int)L->stack >> 3) + 5;
          if ((iVar16 < iVar12) && (iVar16 = iVar12, 1000000 < iVar12)) goto LAB_08113e20;
          luaD_reallocstack(L,iVar16);
          base = L->top;
        }
        if (uVar10 != 0) {
          pTVar7 = base;
          pTVar3 = base + -iVar13;
          do {
            VVar8 = pTVar3->value_;
            iVar16 = pTVar3->tt_;
            pTVar4 = pTVar3 + 1;
            L->top = pTVar7 + 1;
            pTVar7->value_ = VVar8;
            pTVar7->tt_ = iVar16;
            pTVar3->tt_ = 0;
            pTVar7 = pTVar7 + 1;
            pTVar3 = pTVar4;
          } while (pTVar4 != base + (uVar10 - iVar13));
        }
        pTVar7 = (StkId)((int)L->stack + iVar15);
      }
      pCVar14 = L->ci->next;
      if (pCVar14 == (CallInfo *)0x0) {
        pCVar14 = luaE_extendCI(L);
      }
      L->ci = pCVar14;
      (pCVar14->u).l.base = base;
      pIVar11 = *(Instruction **)(iVar6 + 0x30);
      pCVar14->func = pTVar7;
      pCVar14->nresults = (short)nresults;
      bVar1 = *(byte *)(iVar6 + 8);
      (pCVar14->u).l.savedpc = pIVar11;
      pCVar14->callstatus = '\x02';
      iVar15 = L->l_G->GCdebt;
      pCVar14->top = base + bVar1;
      L->top = base + bVar1;
      if (0 < iVar15) {
        luaC_step(L);
      }
      if ((L->hookmask & 1) == 0) {
        return L->hookmask & 1;
      }
      pCVar9 = pCVar14->previous;
      (pCVar14->u).l.savedpc = (Instruction *)((pCVar14->u).c.old_errfunc + 4);
      bVar1 = pCVar9->callstatus;
      uVar10 = bVar1 & 2;
      if ((bVar1 & 2) != 0) {
        if ((*(uint *)((pCVar9->u).c.old_errfunc + -4) & 0x3f) == 0x25) {
          uVar10 = 4;
          pCVar14->callstatus = pCVar14->callstatus | 0x20;
        }
        else {
          uVar10 = 0;
        }
      }
      luaD_hook(L,uVar10,-1);
      (pCVar14->u).l.savedpc = (Instruction *)((pCVar14->u).c.old_errfunc + -4);
      return 0;
    }
    if ((int)L->stack_last - (int)L->top < 0x10) {
      if (1000000 < L->stacksize) goto LAB_08113ed8;
      iVar13 = L->stacksize * 2;
      iVar6 = ((int)L->top - (int)pTVar7 >> 3) + 6;
      if (999999 < iVar13) {
        iVar13 = 1000000;
      }
      if ((iVar13 < iVar6) && (iVar13 = iVar6, 1000000 < iVar6)) goto LAB_08113e20;
      luaD_reallocstack(L,iVar13);
      pTVar7 = L->stack;
    }
    func = (StkId)((int)pTVar7 + iVar15);
    pTVar2 = luaT_gettmbyobj(L,func,TM_CALL);
    if ((pTVar2->tt_ & 0xfU) != 6) {
                    /* WARNING: Subroutine does not return */
      luaG_typeerror(L,func,"call");
    }
    pTVar7 = L->top;
    if (func < pTVar7) {
      uVar10 = (int)pTVar7 + (-1 - (int)func) & 0xfffffff8;
      __n = uVar10 + 8;
      memmove((void *)((int)pTVar7 - uVar10),(void *)((int)pTVar7 - __n),__n);
    }
    VVar8 = pTVar2->value_;
    iVar15 = pTVar2->tt_;
    L->top = pTVar7 + 1;
    func->value_ = VVar8;
    func->tt_ = iVar15;
  }
  f = (func->value_).f;
Cfunc:
  if ((int)L->stack_last - (int)L->top < 0xa8) {
    if (1000000 < L->stacksize) {
LAB_08113ed8:
                    /* WARNING: Subroutine does not return */
      luaD_throw(L,6);
    }
    iVar13 = L->stacksize * 2;
    iVar6 = ((int)L->top - (int)pTVar7 >> 3) + 0x19;
    if (999999 < iVar13) {
      iVar13 = 1000000;
    }
    if ((iVar13 < iVar6) && (iVar13 = iVar6, 1000000 < iVar6)) {
LAB_08113e20:
      luaD_reallocstack(L,0xf4308);
                    /* WARNING: Subroutine does not return */
      luaG_runerror(L,"stack overflow");
    }
    luaD_reallocstack(L,iVar13);
  }
  pCVar14 = L->ci->next;
  if (pCVar14 == (CallInfo *)0x0) {
    pCVar14 = luaE_extendCI(L);
  }
  pTVar7 = L->top;
  L->ci = pCVar14;
  pTVar3 = L->stack;
  pCVar14->nresults = (short)nresults;
  pCVar14->callstatus = '\0';
  iVar13 = L->l_G->GCdebt;
  pCVar14->func = (StkId)((int)pTVar3 + iVar15);
  pCVar14->top = pTVar7 + 0x14;
  if (0 < iVar13) {
    luaC_step(L);
  }
  if ((L->hookmask & 1) != 0) {
    luaD_hook(L,0,-1);
  }
  iVar15 = (*f)(L);
  pCVar14 = L->ci;
  pTVar7 = L->top + -iVar15;
  if ((L->hookmask & 6) == 0) {
    pCVar9 = pCVar14->previous;
  }
  else {
    if ((L->hookmask & 2) != 0) {
      pTVar3 = L->stack;
      luaD_hook(L,1,-1);
      pTVar7 = (StkId)((int)L->stack + ((int)pTVar7 - (int)pTVar3));
    }
    pCVar9 = pCVar14->previous;
    L->oldpc = (pCVar9->u).l.savedpc;
  }
  iVar15 = (int)pCVar14->nresults;
  pTVar3 = pCVar14->func;
  L->ci = pCVar9;
  if (iVar15 != 0) {
    pTVar5 = L->top;
    pTVar4 = pTVar3;
    do {
      if (pTVar5 <= pTVar7) {
        iVar13 = iVar15 + -1;
        pTVar3 = pTVar4;
        pTVar7 = pTVar4;
        if (0 < iVar15) {
          do {
            iVar13 = iVar13 + -1;
            pTVar7->tt_ = 0;
            pTVar7 = pTVar7 + 1;
          } while (iVar13 != -1);
          pTVar3 = pTVar4 + iVar15;
        }
        break;
      }
      iVar13 = pTVar7->tt_;
      iVar15 = iVar15 + -1;
      pTVar3 = pTVar4 + 1;
      pTVar4->value_ = pTVar7->value_;
      pTVar4->tt_ = iVar13;
      pTVar4 = pTVar3;
      pTVar7 = pTVar7 + 1;
    } while (iVar15 != 0);
  }
  L->top = pTVar3;
  return 1;
}


