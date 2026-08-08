/*
 * Ghidra decompilation
 *
 * Function : luaC_freeallobjects
 * Address  : 08117e2c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_freeallobjects(lua_State *L)

{
  byte bVar1;
  lu_byte lVar2;
  lu_byte lVar3;
  TValue TVar4;
  int iVar5;
  TValue *tm;
  TValue *pTVar6;
  GCObject **lastnext;
  Value VVar7;
  GCObject *curr_2;
  GCObject *pGVar8;
  GCObject *curr_3;
  Value VVar9;
  GCObject *curr;
  Value o;
  StkId pTVar10;
  GCObject *pGVar11;
  global_State *g_2;
  global_State *g_3;
  int iVar12;
  global_State *pgVar13;
  global_State *g;
  lu_byte oldah;
  GCObject **p;
  GCObject **curr_1;
  Value VVar14;
  global_State *pgVar15;
  global_State *g_1;
  global_State *pgVar16;
  StkId pTVar17;
  TValue *io1;
  TValue v;
  
  iVar5 = __stack_chk_guard;
  pgVar13 = L->l_G;
  o = (Value)pgVar13->tobefnz;
  VVar14.gc = (GCObject *)&pgVar13->finobj;
  VVar9 = o;
  if (o.gc == (GCObject *)0x0) {
    VVar9 = (Value)pgVar13->finobj;
    VVar7.gc = (GCObject *)&pgVar13->tobefnz;
    o.gc = (GCObject *)0x0;
    if (VVar9.gc == (GCObject *)0x0) goto LAB_08117fdc;
LAB_08117e94:
    do {
      pgVar13->finobj = (VVar9.gc)->next;
      (VVar9.gc)->next = (VVar7.gc)->next;
      (VVar7.gc)->next = (GCObject *)VVar9;
      VVar7 = VVar9;
      VVar9.gc = pgVar13->finobj;
    } while (pgVar13->finobj != (GCObject *)0x0);
    pgVar15 = L->l_G;
    o = (Value)pgVar15->tobefnz;
    pgVar16 = pgVar15;
    if (o.gc == (GCObject *)0x0) goto LAB_08117fdc;
  }
  else {
    do {
      VVar7 = VVar9;
      VVar9.gc = (VVar7.gc)->next;
    } while (VVar9.gc != (GCObject *)0x0);
    VVar9.gc = pgVar13->finobj;
    pgVar15 = pgVar13;
    pgVar16 = pgVar13;
    if (pgVar13->finobj != (GCObject *)0x0) goto LAB_08117e94;
  }
  while( true ) {
    pgVar15->tobefnz = (o.gc)->next;
    (o.gc)->next = pgVar15->allgc;
    pgVar15->allgc = (GCObject *)o;
    bVar1 = (o.gc)->marked;
    (o.gc)->marked = bVar1 & 0xf7;
    if (pgVar15->gcstate - 2 < 4) {
      (o.gc)->marked = pgVar15->currentwhite & 3 | bVar1 & 0xf0;
    }
    v.tt_ = (o.gc)->tt | 0x40;
    v.value_ = o;
    pTVar6 = luaT_gettmbyobj(L,&v,TM_GC);
    if ((pTVar6 == (TValue *)0x0) || ((pTVar6->tt_ & 0xfU) != 6)) {
      pGVar11 = pgVar16->tobefnz;
    }
    else {
      lVar2 = pgVar15->gcrunning;
      lVar3 = L->allowhook;
      L->allowhook = '\0';
      pgVar15->gcrunning = '\0';
      pTVar17 = L->top;
      pTVar10 = L->stack;
      *pTVar17 = *pTVar6;
      TVar4.tt_ = v.tt_;
      TVar4.value_.gc = v.value_.gc;
      pTVar17[1] = TVar4;
      L->top = pTVar17 + 2;
      luaD_pcall(L,dothecall,(void *)0x0,(int)pTVar17 - (int)pTVar10,0);
      L->allowhook = lVar3;
      pgVar15->gcrunning = lVar2;
      pGVar11 = pgVar16->tobefnz;
    }
    if (pGVar11 == (GCObject *)0x0) break;
    o = (Value)L->l_G->tobefnz;
    pgVar15 = L->l_G;
  }
  o = (Value)pgVar13->finobj;
LAB_08117fdc:
  pgVar13->currentwhite = '\x03';
  pgVar13->gckind = '\0';
  bVar1 = L->l_G->currentwhite;
  for (iVar12 = 0; (o.gc != (GCObject *)0x0 && (iVar12 != -1)); iVar12 = iVar12 + 1) {
    if ((byte)((bVar1 ^ 3) & ((o.gc)->marked ^ 3)) == 0) {
      (VVar14.gc)->next = (o.gc)->next;
      freeobj(L,o.gc);
    }
    else {
      (o.gc)->marked = (o.gc)->marked & 0xf8 | bVar1 & 3;
      VVar14 = o;
    }
    o = (Value)(VVar14.gc)->next;
  }
  bVar1 = L->l_G->currentwhite;
  pGVar11 = (GCObject *)&pgVar13->allgc;
  for (iVar12 = 0; (pGVar8 = pGVar11->next, pGVar8 != (GCObject *)0x0 && (iVar12 != -1));
      iVar12 = iVar12 + 1) {
    if ((byte)((bVar1 ^ 3) & (pGVar8->marked ^ 3)) == 0) {
      pGVar11->next = pGVar8->next;
      freeobj(L,pGVar8);
      pGVar8 = pGVar11;
    }
    else {
      pGVar8->marked = pGVar8->marked & 0xf8 | bVar1 & 3;
    }
    pGVar11 = pGVar8;
  }
  bVar1 = L->l_G->currentwhite;
  pGVar11 = (GCObject *)&pgVar13->fixedgc;
  for (iVar12 = 0; (pGVar8 = pGVar11->next, pGVar8 != (GCObject *)0x0 && (iVar12 != -1));
      iVar12 = iVar12 + 1) {
    if ((byte)((bVar1 ^ 3) & (pGVar8->marked ^ 3)) == 0) {
      pGVar11->next = pGVar8->next;
      freeobj(L,pGVar8);
      pGVar8 = pGVar11;
    }
    else {
      pGVar8->marked = pGVar8->marked & 0xf8 | bVar1 & 3;
    }
    pGVar11 = pGVar8;
  }
  if (iVar5 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


