/*
 * Ghidra decompilation
 *
 * Function : propagatemark
 * Address  : 08116350
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void propagatemark(global_State *g)

{
  CallInfo **ppCVar1;
  byte bVar2;
  StkId *ppTVar3;
  StkId pTVar4;
  CallInfo *pCVar5;
  StkId pTVar6;
  char *pcVar7;
  char *weakkey;
  char *pcVar8;
  char *weakvalue;
  Table *events;
  UpVal *uv;
  GCObject *pGVar9;
  StkId pTVar10;
  global_State *pgVar11;
  StkId lim;
  lu_mem size;
  uint uVar12;
  UpVal *pUVar13;
  lua_State *L;
  GCObject *o;
  Proto *p;
  CClosure *cl;
  Table *h;
  LClosure *cl_1;
  lua_State *th;
  lua_State *plVar14;
  TValue *pTVar15;
  lua_CFunction p_Var16;
  Node *n;
  CallInfo *pCVar17;
  int i;
  int iVar18;
  CallInfo *pCVar19;
  Node *limit;
  global_State **ppgVar20;
  StkId o_1;
  int iVar21;
  int hasclears;
  Node *limit_1;
  
  L = (lua_State *)g->gray;
  L->marked = L->marked | 4;
  switch(L->tt) {
  case '\x05':
    events = (Table *)L->stack_last;
    g->gray = (GCObject *)L->stack;
    if (events == (Table *)0x0) {
LAB_08116528:
      pTVar6 = L->top;
      pCVar5 = L->ci;
      pCVar19 = (CallInfo *)((int)&pCVar5->func + (0x14 << L->field_0x7));
      if (pTVar6 != (StkId)0x0) {
        pTVar10 = (StkId)0x0;
        do {
          while ((((uint)(&L->l_G->ud)[(int)pTVar10 * 2] & 0x40) == 0 ||
                 (pGVar9 = (GCObject *)(&L->l_G->frealloc)[(int)pTVar10 * 2],
                 (pGVar9->marked & 3) == 0))) {
            pTVar10 = (StkId)((int)&pTVar10->value_ + 1);
            if (pTVar6 <= pTVar10) goto LAB_08116594;
          }
          pTVar10 = (StkId)((int)&pTVar10->value_ + 1);
          reallymarkobject(g,pGVar9);
          pTVar6 = L->top;
        } while (pTVar10 < pTVar6);
LAB_08116594:
        pCVar5 = L->ci;
      }
      if (pCVar5 < pCVar19) {
        do {
          while (pTVar6 = pCVar5->top, pTVar6 == (StkId)0x0) {
            if ((((uint)pCVar5->next & 0x40) != 0) &&
               ((*(byte *)((int)&pCVar5->previous->top + 1) & 3) != 0)) {
              pCVar5->next = (CallInfo *)0xa;
            }
LAB_081165b4:
            pCVar5 = (CallInfo *)((int)&pCVar5->u + 4);
            if (pCVar19 <= pCVar5) goto LAB_08116614;
          }
          if ((((uint)pCVar5->next & 0x40) != 0) &&
             ((*(lu_byte *)((int)&pCVar5->previous->top + 1) & 3) != 0)) {
            reallymarkobject(g,(GCObject *)pCVar5->previous);
            pTVar6 = pCVar5->top;
          }
          if ((((uint)pTVar6 & 0x40) == 0) ||
             (ppTVar3 = &pCVar5->func, (((GCObject *)*ppTVar3)->marked & 3) == 0))
          goto LAB_081165b4;
          pCVar5 = (CallInfo *)((int)&pCVar5->u + 4);
          reallymarkobject(g,(GCObject *)*ppTVar3);
        } while (pCVar5 < pCVar19);
LAB_08116614:
        pTVar6 = L->top;
      }
    }
    else {
      if ((events->flags & 8) == 0) {
        pTVar15 = luaT_gettm(events,TM_MODE,g->tmname[3]);
        events = (Table *)L->stack_last;
        if ((events != (Table *)0x0) && ((events->marked & 3) != 0)) goto LAB_08116508;
      }
      else {
        if ((events->marked & 3) == 0) goto LAB_08116528;
        pTVar15 = (TValue *)0x0;
LAB_08116508:
        reallymarkobject(g,(GCObject *)events);
      }
      if ((pTVar15 == (TValue *)0x0) || ((pTVar15->tt_ & 0xfU) != 4)) goto LAB_08116528;
      p_Var16 = (pTVar15->value_).f;
      pcVar7 = strchr((char *)(p_Var16 + 0x18),0x6b);
      pcVar8 = strchr((char *)(p_Var16 + 0x18),0x76);
      if (pcVar8 == (char *)0x0 && pcVar7 == (char *)0x0) goto LAB_08116528;
      L->marked = L->marked & 0xfb;
      if (pcVar7 == (char *)0x0) {
        pCVar5 = L->ci;
        pTVar6 = L->top;
        pCVar19 = (CallInfo *)((int)&pCVar5->func + (0x14 << L->field_0x7));
        hasclears = (int)pTVar6;
        if (pTVar6 != (StkId)0x0) {
          hasclears = 1;
        }
        if (pCVar5 < pCVar19) {
          do {
            pCVar17 = (CallInfo *)((int)&pCVar5->u + 4);
            if (pCVar5->top == (StkId)0x0) {
              if ((((uint)pCVar5->next & 0x40) != 0) &&
                 ((*(byte *)((int)&pCVar5->previous->top + 1) & 3) != 0)) {
                pCVar5->next = (CallInfo *)0xa;
              }
            }
            else {
              if ((((uint)pCVar5->next & 0x40) != 0) &&
                 ((*(lu_byte *)((int)&pCVar5->previous->top + 1) & 3) != 0)) {
                reallymarkobject(g,(GCObject *)pCVar5->previous);
              }
              if (hasclears == 0) {
                if (((uint)pCVar5->top & 0x40) != 0) {
                  if (((uint)pCVar5->top & 0xf) == 4) {
                    pGVar9 = (GCObject *)pCVar5->func;
                    if ((pGVar9 != (GCObject *)0x0) && ((pGVar9->marked & 3) != 0)) {
                      reallymarkobject(g,pGVar9);
                    }
                  }
                  else {
                    bVar2 = pCVar5->func->tt_;
                    hasclears = bVar2 & 3;
                    if ((bVar2 & 3) != 0) {
                      hasclears = 1;
                    }
                  }
                }
              }
              else {
                hasclears = 1;
              }
            }
            pCVar5 = pCVar17;
          } while (pCVar17 < pCVar19);
          pTVar6 = L->top;
        }
        if (g->gcstate == '\0') {
          L->stack = (StkId)g->grayagain;
          g->grayagain = (GCObject *)L;
        }
        else if (hasclears != 0) {
          L->stack = (StkId)g->weak;
          g->weak = (GCObject *)L;
        }
      }
      else if (pcVar8 == (char *)0x0) {
        traverseephemeron(g,(Table *)L);
        pTVar6 = L->top;
      }
      else {
        pTVar6 = L->top;
        L->stack = (StkId)g->allweak;
        g->allweak = (GCObject *)L;
      }
    }
    size = (0x14 << L->field_0x7) + (int)&pTVar6->tt_ * 8;
    break;
  case '\x06':
    pgVar11 = L->l_G;
    g->gray = (GCObject *)L->top;
    if ((pgVar11 != (global_State *)0x0) && ((*(lu_byte *)((int)&pgVar11->ud + 1) & 3) != 0)) {
      reallymarkobject(g,(GCObject *)pgVar11);
    }
    uVar12 = (uint)L->status;
    if (uVar12 != 0) {
      ppgVar20 = &L->l_G;
      iVar18 = 0;
      do {
        ppgVar20 = ppgVar20 + 1;
        pgVar11 = *ppgVar20;
        if (pgVar11 != (global_State *)0x0) {
          pTVar6 = (StkId)pgVar11->frealloc;
          if ((pTVar6 == (StkId)&pgVar11->totalbytes) || (g->gcstate == '\b')) {
            if (((pTVar6->tt_ & 0x40U) != 0) && ((((pTVar6->value_).gc)->marked & 3) != 0)) {
              reallymarkobject(g,(pTVar6->value_).gc);
              uVar12 = (uint)L->status;
            }
          }
          else {
            pgVar11->GCdebt = 1;
            uVar12 = (uint)L->status;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)uVar12);
    }
    size = uVar12 * 4 + 0x10;
    break;
  default:
    goto switchD_08116384_caseD_7;
  case '\b':
    pTVar6 = L->stack;
    g->gray = L->gclist;
    L->gclist = g->grayagain;
    g->grayagain = (GCObject *)L;
    L->marked = L->marked & 0xfb;
    if (pTVar6 == (StkId)0x0) {
      size = 1;
    }
    else {
      pTVar10 = L->top;
      if (pTVar6 < pTVar10) {
        pTVar4 = pTVar6 + 1;
        do {
          while ((pTVar6 = pTVar4, (pTVar6[-1].tt_ & 0x40U) == 0 ||
                 (((pTVar6[-1].value_.gc)->marked & 3) == 0))) {
            pTVar4 = pTVar6 + 1;
            if (pTVar10 <= pTVar6) goto LAB_08116754;
          }
          reallymarkobject(g,pTVar6[-1].value_.gc);
          pTVar10 = L->top;
          pTVar4 = pTVar6 + 1;
        } while (pTVar6 < pTVar10);
      }
LAB_08116754:
      if (g->gcstate == '\b') {
        pTVar10 = L->stack;
        iVar18 = L->stacksize;
        if (pTVar6 < pTVar10 + iVar18) {
          do {
            pTVar6->tt_ = 0;
            pTVar6 = pTVar6 + 1;
          } while (pTVar6 < pTVar10 + iVar18);
          iVar18 = L->stacksize;
        }
        if ((L == L->twups) && (L->openupval != (UpVal *)0x0)) {
          L->twups = g->twups;
          g->twups = L;
        }
      }
      else {
        if (g->gckind != '\x01') {
          luaD_shrinkstack(L);
        }
        iVar18 = L->stacksize;
      }
      size = (iVar18 + 0xe) * 8;
    }
    break;
  case '\t':
    iVar18 = (L->base_ci).u.c.old_errfunc;
    g->gray = (GCObject *)(L->base_ci).extra;
    if ((iVar18 != 0) && ((*(byte *)(iVar18 + 5) & 3) != 0)) {
      (L->base_ci).u.l.savedpc = (Instruction *)0x0;
    }
    pGVar9 = (GCObject *)(L->base_ci).u.c.ctx;
    if ((pGVar9 != (GCObject *)0x0) && ((pGVar9->marked & 3) != 0)) {
      reallymarkobject(g,pGVar9);
    }
    pCVar5 = L->ci;
    if (0 < (int)pCVar5) {
      iVar18 = 0;
      do {
        while (((L->errorJmp->b[0].__jmpbuf[iVar18 * 2 + -1] & 0x40U) == 0 ||
               (pGVar9 = (GCObject *)L->errorJmp->b[0].__jmpbuf[iVar18 * 2 + -2],
               (pGVar9->marked & 3) == 0))) {
          iVar18 = iVar18 + 1;
          if ((int)pCVar5 <= iVar18) goto LAB_0811681c;
        }
        iVar18 = iVar18 + 1;
        reallymarkobject(g,pGVar9);
        pCVar5 = L->ci;
      } while (iVar18 < (int)pCVar5);
    }
LAB_0811681c:
    pgVar11 = L->l_G;
    if (0 < (int)pgVar11) {
      iVar18 = 0;
      do {
        while( true ) {
          pGVar9 = (L->base_ci).u.l.base[iVar18].value_.gc;
          iVar18 = iVar18 + 1;
          if ((pGVar9 == (GCObject *)0x0) || ((pGVar9->marked & 3) == 0)) break;
          reallymarkobject(g,pGVar9);
          pgVar11 = L->l_G;
          if ((int)pgVar11 <= iVar18) goto LAB_0811686c;
        }
      } while (iVar18 < (int)pgVar11);
    }
LAB_0811686c:
    pTVar6 = L->stack;
    if (0 < (int)pTVar6) {
      iVar18 = 0;
      do {
        while( true ) {
          pGVar9 = (&((L->base_ci).top)->value_)[iVar18].gc;
          iVar18 = iVar18 + 1;
          if ((pGVar9 == (GCObject *)0x0) || ((pGVar9->marked & 3) == 0)) break;
          reallymarkobject(g,pGVar9);
          pTVar6 = L->stack;
          if ((int)pTVar6 <= iVar18) goto LAB_081168bc;
        }
      } while (iVar18 < (int)pTVar6);
    }
LAB_081168bc:
    pUVar13 = L->openupval;
    if (0 < (int)pUVar13) {
      iVar18 = 0;
      iVar21 = 0;
      do {
        iVar21 = iVar21 + 1;
        pGVar9 = *(GCObject **)((int)&((L->base_ci).next)->func + iVar18);
        iVar18 = iVar18 + 0xc;
        if ((pGVar9 != (GCObject *)0x0) && ((pGVar9->marked & 3) != 0)) {
          reallymarkobject(g,pGVar9);
          pUVar13 = L->openupval;
        }
      } while (iVar21 < (int)pUVar13);
      pTVar6 = L->stack;
    }
    size = ((int)&pTVar6[2].tt_ +
           (int)pUVar13 * 3 +
           (int)L->oldpc + (int)L->stack_last + ((int)&L->l_G->frealloc + (int)&L->ci->func) * 2) *
           4;
    break;
  case '&':
    g->gray = (GCObject *)L->top;
    uVar12 = (uint)L->status;
    if (uVar12 != 0) {
      iVar18 = 0;
      plVar14 = L;
      do {
        while ((iVar18 = iVar18 + 1, ((uint)plVar14->oldpc & 0x40) == 0 ||
               (ppCVar1 = &plVar14->ci, (*(lu_byte *)((int)&(*ppCVar1)->top + 1) & 3) == 0))) {
          plVar14 = (lua_State *)&plVar14->top;
          if ((int)uVar12 <= iVar18) goto LAB_081164cc;
        }
        plVar14 = (lua_State *)&plVar14->top;
        reallymarkobject(g,(GCObject *)*ppCVar1);
        uVar12 = (uint)L->status;
      } while (iVar18 < (int)uVar12);
    }
LAB_081164cc:
    size = uVar12 * 8 + 0x10;
  }
  g->GCmemtrav = g->GCmemtrav + size;
switchD_08116384_caseD_7:
  return;
}


