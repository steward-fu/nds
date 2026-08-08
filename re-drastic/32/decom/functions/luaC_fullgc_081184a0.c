/*
 * Ghidra decompilation
 *
 * Function : luaC_fullgc
 * Address  : 081184a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_fullgc(lua_State *L,int isemergency)

{
  int iVar1;
  GCObject *curr;
  uint uVar2;
  global_State *pgVar3;
  global_State *pgVar4;
  int iVar5;
  l_mem estimate;
  global_State *g_00;
  global_State *g;
  GCObject **old;
  
  g_00 = L->l_G;
  if (isemergency != 0) {
    g_00->gckind = '\x01';
  }
  pgVar3 = g_00;
  if (isemergency != 0) {
    pgVar3 = L->l_G;
  }
  pgVar4 = pgVar3;
  if (g_00->gcstate < 2) {
    curr = pgVar3->allgc;
    pgVar3->gcstate = '\x02';
    do {
      while( true ) {
        pgVar4 = L->l_G;
        if (curr == (GCObject *)0x0) goto LAB_08118668;
        if ((byte)((pgVar4->currentwhite ^ 3) & (curr->marked ^ 3)) == 0) break;
        curr->marked = curr->marked & 0xf8 | pgVar4->currentwhite & 3;
        if (curr->next == (GCObject *)0x0) {
          pgVar4 = L->l_G;
          curr = (GCObject *)0x0;
          goto LAB_08118668;
        }
        if ((GCObject *)&pgVar3->allgc != curr) goto LAB_08118664;
        curr = pgVar3->allgc;
      }
      pgVar3->allgc = curr->next;
      freeobj(L,curr);
      curr = pgVar3->allgc;
    } while (curr != (GCObject *)0x0);
LAB_08118664:
    pgVar4 = L->l_G;
LAB_08118668:
    pgVar3->sweepgc = &curr->next;
  }
  uVar2 = (uint)pgVar4->gcstate;
  if (uVar2 != 7) {
    do {
      singlestep(L);
    } while ((0x80 >> pgVar4->gcstate & 1U) == 0);
    pgVar4 = L->l_G;
    uVar2 = (uint)pgVar4->gcstate;
  }
  if ((-0x81 >> uVar2 & 1U) == 0) {
    do {
      singlestep(L);
    } while ((-0x81 >> pgVar4->gcstate & 1U) == 0);
    pgVar4 = L->l_G;
    uVar2 = (uint)pgVar4->gcstate;
  }
  if (uVar2 != 6) {
    do {
      singlestep(L);
    } while ((0x40 >> pgVar4->gcstate & 1U) == 0);
    pgVar4 = L->l_G;
    uVar2 = (uint)pgVar4->gcstate;
  }
  if (uVar2 != 7) {
    do {
      singlestep(L);
    } while ((0x80 >> pgVar4->gcstate & 1U) == 0);
  }
  iVar5 = g_00->gcpause;
  g_00->gckind = '\0';
  uVar2 = g_00->GCestimate / 100;
  iVar1 = __aeabi_idiv(0x7fffffff,uVar2,g_00->GCestimate * 0x51eb851f);
  if (iVar5 < iVar1) {
    iVar5 = iVar5 * uVar2;
  }
  else {
    iVar5 = 0x7fffffff;
  }
  luaE_setdebt(g_00,(g_00->totalbytes + g_00->GCdebt) - iVar5);
  return;
}


