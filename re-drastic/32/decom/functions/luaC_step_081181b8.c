/*
 * Ghidra decompilation
 *
 * Function : luaC_step
 * Address  : 081181b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_step(lua_State *L)

{
  byte bVar1;
  lu_byte lVar2;
  lu_byte lVar3;
  TValue TVar4;
  int iVar5;
  int iVar6;
  lu_mem work;
  lu_mem lVar7;
  TValue *pTVar8;
  TValue *tm;
  int status;
  uint uVar9;
  char *msg;
  int iVar10;
  l_mem debt_1;
  Value VVar11;
  StkId pTVar12;
  l_mem debt;
  global_State *pgVar13;
  l_mem estimate;
  global_State *pgVar14;
  global_State *g;
  uint uVar15;
  int iVar16;
  int stepmul;
  global_State *g_1;
  lu_byte oldah;
  StkId pTVar17;
  TValue *io1;
  TValue v;
  
  iVar5 = __stack_chk_guard;
  pgVar14 = L->l_G;
  iVar10 = pgVar14->GCdebt;
  iVar16 = pgVar14->gcstepmul;
  iVar6 = __aeabi_idiv(0x7fffffff,iVar16);
  iVar10 = iVar10 / 200 + 1;
  if (iVar10 < iVar6) {
    iVar10 = iVar10 * iVar16;
  }
  else {
    iVar10 = 0x7fffffff;
  }
  if (pgVar14->gcrunning == '\0') {
    luaE_setdebt(pgVar14,-20000);
  }
  else {
    do {
      lVar7 = singlestep(L);
      iVar10 = iVar10 - lVar7;
      if (iVar10 < -1999) {
        if (pgVar14->gcstate != '\a') {
          iVar6 = __aeabi_idiv(iVar10,pgVar14->gcstepmul);
          luaE_setdebt(pgVar14,iVar6 * 200);
          pgVar14 = L->l_G;
          VVar11 = (Value)pgVar14->tobefnz;
          if (VVar11.gc == (GCObject *)0x0) goto LAB_081183fc;
          uVar9 = pgVar14->gcfinnum;
          if (uVar9 == 0) goto LAB_081183c4;
          uVar15 = 0;
          pgVar13 = pgVar14;
          goto LAB_081182d8;
        }
        break;
      }
    } while (pgVar14->gcstate != '\a');
    iVar10 = pgVar14->gcpause;
    uVar9 = pgVar14->GCestimate / 100;
    iVar6 = __aeabi_idiv(0x7fffffff,uVar9,pgVar14->GCestimate * 0x51eb851f);
    if (iVar10 < iVar6) {
      iVar10 = iVar10 * uVar9;
    }
    else {
      iVar10 = 0x7fffffff;
    }
    luaE_setdebt(pgVar14,(pgVar14->totalbytes + pgVar14->GCdebt) - iVar10);
  }
  goto LAB_081183cc;
LAB_081182d8:
  pgVar13->tobefnz = (VVar11.gc)->next;
  (VVar11.gc)->next = pgVar13->allgc;
  pgVar13->allgc = (GCObject *)VVar11;
  bVar1 = (VVar11.gc)->marked;
  (VVar11.gc)->marked = bVar1 & 0xf7;
  if (pgVar13->gcstate - 2 < 4) {
    (VVar11.gc)->marked = pgVar13->currentwhite & 3 | bVar1 & 0xf0;
  }
  v.tt_ = (VVar11.gc)->tt | 0x40;
  v.value_ = VVar11;
  pTVar8 = luaT_gettmbyobj(L,&v,TM_GC);
  if ((pTVar8 != (TValue *)0x0) && ((pTVar8->tt_ & 0xfU) == 6)) {
    lVar2 = pgVar13->gcrunning;
    lVar3 = L->allowhook;
    L->allowhook = '\0';
    pgVar13->gcrunning = '\0';
    pTVar17 = L->top;
    pTVar12 = L->stack;
    *pTVar17 = *pTVar8;
    TVar4.tt_ = v.tt_;
    TVar4.value_.gc = v.value_.gc;
    pTVar17[1] = TVar4;
    L->top = pTVar17 + 2;
    iVar6 = luaD_pcall(L,dothecall,(void *)0x0,(int)pTVar17 - (int)pTVar12,0);
    L->allowhook = lVar3;
    pgVar13->gcrunning = lVar2;
    if (iVar6 != 0) {
      if (iVar6 == 2) {
        if ((L->top[-1].tt_ & 0xfU) == 4) {
          msg = (char *)(L->top[-1].value_.f + 0x18);
        }
        else {
          msg = "no message";
        }
        luaO_pushfstring(L,"error in __gc metamethod (%s)",msg);
        iVar6 = 5;
      }
                    /* WARNING: Subroutine does not return */
      luaD_throw(L,iVar6);
    }
  }
  uVar15 = uVar15 + 1;
  if (pgVar14->tobefnz == (GCObject *)0x0) goto LAB_081183fc;
  uVar9 = pgVar14->gcfinnum;
  if (uVar9 <= uVar15) goto LAB_081183c4;
  pgVar13 = L->l_G;
  VVar11 = (Value)pgVar13->tobefnz;
  goto LAB_081182d8;
LAB_081183fc:
  uVar9 = 0;
  goto LAB_081183c8;
LAB_081183c4:
  uVar9 = uVar9 << 1;
LAB_081183c8:
  pgVar14->gcfinnum = uVar9;
LAB_081183cc:
  if (iVar5 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


