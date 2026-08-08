/*
 * Ghidra decompilation
 *
 * Function : singlestep
 * Address  : 08116b74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lu_mem singlestep(lua_State *L)

{
  byte bVar1;
  lu_byte lVar2;
  lu_byte lVar3;
  bool bVar4;
  TValue TVar5;
  int iVar6;
  char *pcVar7;
  TValue *pTVar8;
  TValue *tm;
  int status;
  undefined *puVar9;
  lua_State *plVar10;
  GCObject *pGVar11;
  Table *pTVar12;
  GCObject *curr;
  GCObject *curr_1;
  int iVar13;
  GCObject *pGVar14;
  GCObject *curr_4;
  GCObject **lastnext;
  GCObject *curr_3;
  int iVar15;
  int iVar16;
  lu_mem lVar17;
  uint uVar18;
  char *msg;
  Value VVar19;
  lua_State *thread;
  GCObject *origweak;
  GCObject *curr_2;
  GCObject *pGVar20;
  global_State *g_4;
  StkId pTVar21;
  int sw;
  GCObject *o;
  int iVar22;
  l_mem olddebt_2;
  UpVal *pUVar23;
  UpVal *uv;
  lu_mem lVar24;
  l_mem work_1;
  GCObject *o_1;
  GCObject *next_1;
  GCObject *w_1;
  uint uVar25;
  global_State *g;
  global_State *g_00;
  global_State *g_1;
  global_State *g_2;
  global_State *g_5;
  GCObject *grayagain;
  GCObject *next;
  GCObject *w;
  Table *pTVar26;
  lu_mem work;
  global_State *pgVar27;
  l_mem olddebt;
  l_mem olddebt_1;
  l_mem olddebt_3;
  global_State *g_3;
  lua_State **p;
  lua_State **pplVar28;
  GCObject *pGVar29;
  GCObject *origall;
  GCObject **old;
  lu_byte oldah;
  GCObject **p_1;
  StkId pTVar30;
  TValue *io1;
  TValue v;
  
  iVar6 = __stack_chk_guard;
  g_00 = L->l_G;
  switch(g_00->gcstate) {
  case '\0':
    g_00->GCmemtrav = 0;
    propagatemark(g_00);
    puVar9 = (undefined *)g_00->GCmemtrav;
    if (g_00->gray == (GCObject *)0x0) {
      g_00->gcstate = '\x01';
    }
    break;
  case '\x01':
    pgVar27 = g_00;
    if (g_00->gray != (GCObject *)0x0) {
      do {
        propagatemark(g_00);
      } while (g_00->gray != (GCObject *)0x0);
      pgVar27 = L->l_G;
    }
    pGVar11 = pgVar27->grayagain;
    pgVar27->GCmemtrav = 0;
    pgVar27->gcstate = '\b';
    if ((L->marked & 3) != 0) {
      reallymarkobject(pgVar27,(GCObject *)L);
    }
    if ((((pgVar27->l_registry).tt_ & 0x40U) != 0) &&
       (pGVar14 = (pgVar27->l_registry).value_.gc, (pGVar14->marked & 3) != 0)) {
      reallymarkobject(pgVar27,pGVar14);
    }
    pTVar12 = pgVar27->mt[0];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(pgVar27,(GCObject *)pTVar12);
    }
    pTVar12 = pgVar27->mt[1];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(pgVar27,(GCObject *)pTVar12);
    }
    pTVar12 = pgVar27->mt[2];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(pgVar27,(GCObject *)pTVar12);
    }
    pTVar12 = pgVar27->mt[3];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(pgVar27,(GCObject *)pTVar12);
    }
    pTVar12 = pgVar27->mt[4];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(pgVar27,(GCObject *)pTVar12);
    }
    pTVar12 = pgVar27->mt[5];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(pgVar27,(GCObject *)pTVar12);
    }
    pTVar12 = pgVar27->mt[6];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(pgVar27,(GCObject *)pTVar12);
    }
    pTVar12 = pgVar27->mt[7];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(pgVar27,(GCObject *)pTVar12);
    }
    pTVar12 = pgVar27->mt[8];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(pgVar27,(GCObject *)pTVar12);
    }
    pplVar28 = &pgVar27->twups;
    while (plVar10 = *pplVar28, plVar10 != (lua_State *)0x0) {
      if (((plVar10->marked & 7) == 0) && (plVar10->openupval != (UpVal *)0x0)) {
        pplVar28 = &plVar10->twups;
      }
      else {
        *pplVar28 = plVar10->twups;
        pUVar23 = plVar10->openupval;
        plVar10->twups = plVar10;
        for (; pUVar23 != (UpVal *)0x0; pUVar23 = (pUVar23->u).open.next) {
          if ((pUVar23->u).open.touched != 0) {
            if (((pUVar23->v->tt_ & 0x40U) != 0) &&
               (pGVar14 = (pUVar23->v->value_).gc, (pGVar14->marked & 3) != 0)) {
              reallymarkobject(pgVar27,pGVar14);
            }
            (pUVar23->u).open.touched = 0;
          }
        }
      }
    }
    pGVar14 = pgVar27->gray;
    while (pGVar14 != (GCObject *)0x0) {
      propagatemark(pgVar27);
      pGVar14 = pgVar27->gray;
    }
    lVar24 = pgVar27->GCmemtrav;
    pgVar27->gray = pGVar11;
    while (pGVar11 != (GCObject *)0x0) {
      propagatemark(pgVar27);
      pGVar11 = pgVar27->gray;
    }
    pgVar27->GCmemtrav = 0;
    do {
      pTVar12 = (Table *)pgVar27->ephemeron;
      pgVar27->ephemeron = (GCObject *)0x0;
      if (pTVar12 == (Table *)0x0) break;
      bVar4 = false;
      do {
        while( true ) {
          pTVar26 = (Table *)pTVar12->gclist;
          iVar15 = traverseephemeron(pgVar27,pTVar12);
          pTVar12 = pTVar26;
          if (iVar15 == 0) break;
          pGVar11 = pgVar27->gray;
          while (pGVar11 != (GCObject *)0x0) {
            propagatemark(pgVar27);
            pGVar11 = pgVar27->gray;
          }
          bVar4 = true;
          if (pTVar26 == (Table *)0x0) goto LAB_081172b8;
        }
      } while (pTVar26 != (Table *)0x0);
LAB_081172b8:
    } while (bVar4);
    clearvalues(pgVar27,pgVar27->weak,(GCObject *)0x0);
    clearvalues(pgVar27,pgVar27->allweak,(GCObject *)0x0);
    pGVar14 = pgVar27->weak;
    pGVar29 = pgVar27->allweak;
    origweak = (GCObject *)(lVar24 + pgVar27->GCmemtrav);
    pGVar11 = pgVar27->tobefnz;
    if (pgVar27->tobefnz == (GCObject *)0x0) {
      lastnext = &pgVar27->tobefnz;
      pGVar20 = (GCObject *)&pgVar27->finobj;
    }
    else {
      do {
        lastnext = &pGVar11->next;
        pGVar11 = *lastnext;
        pGVar20 = (GCObject *)&pgVar27->finobj;
      } while (*lastnext != (GCObject *)0x0);
    }
    while (pGVar11 = pGVar20, pGVar20 = pGVar11->next, pGVar11->next != (GCObject *)0x0) {
      while ((pGVar20->marked & 3) != 0) {
        pGVar11->next = pGVar20->next;
        pGVar20->next = *lastnext;
        *lastnext = pGVar20;
        lastnext = &pGVar20->next;
        pGVar20 = pGVar11->next;
        if (pGVar11->next == (GCObject *)0x0) goto LAB_08117360;
      }
    }
LAB_08117360:
    pGVar11 = pgVar27->tobefnz;
    pgVar27->gcfinnum = 1;
    for (; pGVar11 != (GCObject *)0x0; pGVar11 = pGVar11->next) {
      while ((pGVar11->marked & 3) != 0) {
        reallymarkobject(pgVar27,pGVar11);
        pGVar11 = pGVar11->next;
        if (pGVar11 == (GCObject *)0x0) goto LAB_081173a8;
      }
    }
LAB_081173a8:
    pGVar11 = pgVar27->gray;
    while (pGVar11 != (GCObject *)0x0) {
      propagatemark(pgVar27);
      pGVar11 = pgVar27->gray;
    }
    pGVar11 = (GCObject *)0x0;
    pgVar27->GCmemtrav = 0;
    do {
      pTVar12 = (Table *)pgVar27->ephemeron;
      pgVar27->ephemeron = (GCObject *)0x0;
      if (pTVar12 == (Table *)0x0) {
        pGVar20 = (GCObject *)0x0;
        goto LAB_08117444;
      }
      bVar4 = false;
      do {
        while( true ) {
          pTVar26 = (Table *)pTVar12->gclist;
          iVar15 = traverseephemeron(pgVar27,pTVar12);
          pTVar12 = pTVar26;
          if (iVar15 == 0) break;
          pGVar20 = pgVar27->gray;
          while (pGVar20 != (GCObject *)0x0) {
            propagatemark(pgVar27);
            pGVar20 = pgVar27->gray;
          }
          bVar4 = true;
          if (pTVar26 == (Table *)0x0) goto LAB_08117438;
        }
      } while (pTVar26 != (Table *)0x0);
LAB_08117438:
    } while (bVar4);
    pGVar20 = pgVar27->ephemeron;
LAB_08117444:
    clearkeys(pgVar27,pGVar20,pGVar11);
    clearkeys(pgVar27,pgVar27->allweak,pGVar11);
    clearvalues(pgVar27,pgVar27->weak,pGVar14);
    clearvalues(pgVar27,pgVar27->allweak,pGVar29);
    lVar24 = pgVar27->GCmemtrav;
    pgVar27->currentwhite = pgVar27->currentwhite ^ 3;
    pgVar27 = L->l_G;
    pGVar11 = pgVar27->allgc;
    pgVar27->gcstate = '\x02';
    iVar15 = 0;
    do {
      while( true ) {
        iVar13 = iVar15;
        iVar15 = iVar13 + 1;
        bVar1 = L->l_G->currentwhite;
        g_4 = (global_State *)(uint)bVar1;
        if (pGVar11 == (GCObject *)0x0) goto LAB_0811751c;
        if ((((uint)g_4 ^ 3) & (pGVar11->marked ^ 3)) == 0) break;
        pGVar11->marked = pGVar11->marked & 0xf8 | bVar1 & 3;
        if (pGVar11->next == (GCObject *)0x0) goto LAB_08117518;
        if (pGVar11 != (GCObject *)&pgVar27->allgc) goto LAB_0811751c;
        pGVar11 = pgVar27->allgc;
      }
      pgVar27->allgc = pGVar11->next;
      freeobj(L,pGVar11);
      pGVar11 = pgVar27->allgc;
    } while (pGVar11 != (GCObject *)0x0);
LAB_08117518:
    pGVar11 = (GCObject *)0x0;
LAB_0811751c:
    lVar17 = g_00->totalbytes;
    iVar15 = g_00->GCdebt;
    pgVar27->sweepgc = &pGVar11->next;
    puVar9 = &origweak->field_0x6 + iVar13 * 6 + lVar24;
    g_00->GCestimate = iVar15 + lVar17;
    break;
  case '\x02':
    pGVar11 = (GCObject *)g_00->sweepgc;
    if (pGVar11 != (GCObject *)0x0) {
      bVar1 = g_00->currentwhite;
      iVar15 = 0x54;
      iVar13 = g_00->GCdebt;
      while (pGVar14 = pGVar11->next, pGVar11->next != (GCObject *)0x0) {
        while( true ) {
          pGVar29 = pGVar14;
          iVar15 = iVar15 + -1;
          if (iVar15 == 0) goto LAB_08117808;
          if ((byte)((bVar1 ^ 3) & (pGVar29->marked ^ 3)) == 0) break;
          pGVar29->marked = pGVar29->marked & 0xf8 | bVar1 & 3;
          pGVar14 = pGVar29->next;
          pGVar11 = pGVar29;
          if (pGVar29->next == (GCObject *)0x0) goto LAB_0811719c;
        }
        pGVar11->next = pGVar29->next;
        freeobj(L,pGVar29);
      }
LAB_0811719c:
      g_00->GCestimate = g_00->GCestimate + (g_00->GCdebt - iVar13);
    }
    puVar9 = (undefined *)0x0;
    g_00->gcstate = '\x03';
    g_00->sweepgc = &g_00->finobj;
    break;
  case '\x03':
    pGVar11 = (GCObject *)g_00->sweepgc;
    if (pGVar11 != (GCObject *)0x0) {
      bVar1 = g_00->currentwhite;
      iVar15 = 0x54;
      iVar13 = g_00->GCdebt;
      while (pGVar14 = pGVar11->next, pGVar11->next != (GCObject *)0x0) {
        while( true ) {
          pGVar29 = pGVar14;
          iVar15 = iVar15 + -1;
          if (iVar15 == 0) goto LAB_08117808;
          if ((byte)((bVar1 ^ 3) & (pGVar29->marked ^ 3)) == 0) break;
          pGVar29->marked = pGVar29->marked & 0xf8 | bVar1 & 3;
          pGVar14 = pGVar29->next;
          pGVar11 = pGVar29;
          if (pGVar29->next == (GCObject *)0x0) goto LAB_08116e04;
        }
        pGVar11->next = pGVar29->next;
        freeobj(L,pGVar29);
      }
LAB_08116e04:
      g_00->GCestimate = g_00->GCestimate + (g_00->GCdebt - iVar13);
    }
    puVar9 = (undefined *)0x0;
    g_00->gcstate = '\x04';
    g_00->sweepgc = &g_00->tobefnz;
    break;
  case '\x04':
    pGVar11 = (GCObject *)g_00->sweepgc;
    if (pGVar11 != (GCObject *)0x0) {
      bVar1 = g_00->currentwhite;
      iVar15 = 0x54;
      iVar13 = g_00->GCdebt;
      while (pGVar14 = pGVar11->next, pGVar11->next != (GCObject *)0x0) {
        while( true ) {
          pGVar29 = pGVar14;
          iVar15 = iVar15 + -1;
          if (iVar15 == 0) goto LAB_08117808;
          if ((byte)((bVar1 ^ 3) & (pGVar29->marked ^ 3)) == 0) break;
          pGVar29->marked = pGVar29->marked & 0xf8 | bVar1 & 3;
          pGVar14 = pGVar29->next;
          pGVar11 = pGVar29;
          if (pGVar29->next == (GCObject *)0x0) goto LAB_08116e90;
        }
        pGVar11->next = pGVar29->next;
        freeobj(L,pGVar29);
      }
LAB_08116e90:
      g_00->GCestimate = g_00->GCestimate + (g_00->GCdebt - iVar13);
    }
    puVar9 = (undefined *)0x0;
    g_00->gcstate = '\x05';
    g_00->sweepgc = (GCObject **)0x0;
    break;
  case '\x05':
    g_00->mainthread->marked = g_00->mainthread->marked & 0xf8 | g_00->currentwhite & 3;
    if (g_00->gckind != '\x01') {
      iVar22 = g_00->GCdebt;
      pcVar7 = (char *)luaM_realloc_(L,(g_00->buff).buffer,(g_00->buff).buffsize,0);
      iVar16 = (g_00->strt).nuse;
      (g_00->buff).buffer = pcVar7;
      iVar13 = (g_00->strt).size;
      (g_00->buff).buffsize = 0;
      iVar15 = iVar13 + 3;
      if (-1 < iVar13) {
        iVar15 = iVar13;
      }
      if (iVar16 < iVar15 >> 2) {
        luaS_resize(L,iVar13 / 2);
      }
      g_00->GCestimate = g_00->GCestimate + (g_00->GCdebt - iVar22);
    }
    puVar9 = (undefined *)0x0;
    g_00->gcstate = '\x06';
    break;
  case '\x06':
    VVar19 = (Value)g_00->tobefnz;
    if ((VVar19.gc == (GCObject *)0x0) || (g_00->gckind == '\x01')) {
      puVar9 = (undefined *)0x0;
      g_00->gcstate = '\a';
    }
    else {
      if (g_00->gcfinnum == 0) {
        puVar9 = (undefined *)0x0;
        uVar18 = 0;
      }
      else {
        uVar25 = 0;
        pgVar27 = g_00;
        while( true ) {
          pgVar27->tobefnz = (VVar19.gc)->next;
          (VVar19.gc)->next = pgVar27->allgc;
          pgVar27->allgc = (GCObject *)VVar19;
          bVar1 = (VVar19.gc)->marked;
          (VVar19.gc)->marked = bVar1 & 0xf7;
          if (pgVar27->gcstate - 2 < 4) {
            (VVar19.gc)->marked = pgVar27->currentwhite & 3 | bVar1 & 0xf0;
          }
          v.tt_ = (VVar19.gc)->tt | 0x40;
          v.value_ = VVar19;
          pTVar8 = luaT_gettmbyobj(L,&v,TM_GC);
          if ((pTVar8 != (TValue *)0x0) && ((pTVar8->tt_ & 0xfU) == 6)) {
            lVar2 = pgVar27->gcrunning;
            lVar3 = L->allowhook;
            L->allowhook = '\0';
            pgVar27->gcrunning = '\0';
            pTVar30 = L->top;
            pTVar21 = L->stack;
            *pTVar30 = *pTVar8;
            TVar5.tt_ = v.tt_;
            TVar5.value_.gc = v.value_.gc;
            pTVar30[1] = TVar5;
            L->top = pTVar30 + 2;
            iVar15 = luaD_pcall(L,dothecall,(void *)0x0,(int)pTVar30 - (int)pTVar21,0);
            L->allowhook = lVar3;
            pgVar27->gcrunning = lVar2;
            if (iVar15 != 0) {
              if (iVar15 == 2) {
                if ((L->top[-1].tt_ & 0xfU) == 4) {
                  msg = (char *)(L->top[-1].value_.f + 0x18);
                }
                else {
                  msg = "no message";
                }
                luaO_pushfstring(L,"error in __gc metamethod (%s)",msg);
                iVar15 = 5;
              }
                    /* WARNING: Subroutine does not return */
              luaD_throw(L,iVar15);
            }
          }
          uVar25 = uVar25 + 1;
          if (g_00->tobefnz == (GCObject *)0x0) {
            puVar9 = (undefined *)(uVar25 * 6);
            uVar18 = 0;
            goto LAB_081177d8;
          }
          uVar18 = g_00->gcfinnum;
          if (uVar18 <= uVar25) break;
          pgVar27 = L->l_G;
          VVar19 = (Value)pgVar27->tobefnz;
        }
        puVar9 = (undefined *)(uVar25 * 6);
      }
      uVar18 = uVar18 << 1;
LAB_081177d8:
      g_00->gcfinnum = uVar18;
    }
    break;
  case '\a':
    iVar15 = (g_00->strt).size;
    plVar10 = g_00->mainthread;
    g_00->gray = (GCObject *)0x0;
    g_00->grayagain = (GCObject *)0x0;
    g_00->GCmemtrav = iVar15 << 2;
    g_00->weak = (GCObject *)0x0;
    g_00->ephemeron = (GCObject *)0x0;
    g_00->allweak = (GCObject *)0x0;
    if ((plVar10 != (lua_State *)0x0) && ((plVar10->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)plVar10);
    }
    if ((((g_00->l_registry).tt_ & 0x40U) != 0) &&
       (pGVar11 = (g_00->l_registry).value_.gc, (pGVar11->marked & 3) != 0)) {
      reallymarkobject(g_00,pGVar11);
    }
    pTVar12 = g_00->mt[0];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)pTVar12);
    }
    pTVar12 = g_00->mt[1];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)pTVar12);
    }
    pTVar12 = g_00->mt[2];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)pTVar12);
    }
    pTVar12 = g_00->mt[3];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)pTVar12);
    }
    pTVar12 = g_00->mt[4];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)pTVar12);
    }
    pTVar12 = g_00->mt[5];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)pTVar12);
    }
    pTVar12 = g_00->mt[6];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)pTVar12);
    }
    pTVar12 = g_00->mt[7];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)pTVar12);
    }
    pTVar12 = g_00->mt[8];
    if ((pTVar12 != (Table *)0x0) && ((pTVar12->marked & 3) != 0)) {
      reallymarkobject(g_00,(GCObject *)pTVar12);
    }
    for (pGVar11 = g_00->tobefnz; pGVar11 != (GCObject *)0x0; pGVar11 = pGVar11->next) {
      while ((pGVar11->marked & 3) != 0) {
        reallymarkobject(g_00,pGVar11);
        pGVar11 = pGVar11->next;
        if (pGVar11 == (GCObject *)0x0) goto LAB_08116d44;
      }
    }
LAB_08116d44:
    puVar9 = (undefined *)g_00->GCmemtrav;
    g_00->gcstate = '\0';
    break;
  default:
    puVar9 = (undefined *)0x0;
  }
LAB_08116d78:
  if (iVar6 == __stack_chk_guard) {
    return (lu_mem)puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_08117808:
  puVar9 = (undefined *)0x1f2;
  g_00->sweepgc = &pGVar11->next;
  g_00->GCestimate = g_00->GCestimate + (g_00->GCdebt - iVar13);
  goto LAB_08116d78;
}


