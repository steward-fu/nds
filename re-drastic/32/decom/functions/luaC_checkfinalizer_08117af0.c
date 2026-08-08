/*
 * Ghidra decompilation
 *
 * Function : luaC_checkfinalizer
 * Address  : 08117af0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_checkfinalizer(lua_State *L,GCObject *o,Table *mt)

{
  byte bVar1;
  TValue *pTVar2;
  GCObject *pGVar3;
  global_State *block;
  UpVal *uv;
  GCObject **p;
  GCObject *pGVar4;
  uint uVar5;
  StkId pTVar6;
  global_State *pgVar7;
  GCObject *curr;
  lua_State *L1;
  lua_State *plVar8;
  lua_State *plVar9;
  int iVar10;
  global_State **ppgVar11;
  
  uVar5 = ((uint)o->marked << 0x1c) >> 0x1f;
  if (mt == (Table *)0x0) {
    uVar5 = 1;
  }
  if (uVar5 != 0) {
    return;
  }
  if ((mt->flags & 4) != 0) {
    return;
  }
  pgVar7 = L->l_G;
  pTVar2 = luaT_gettm(mt,TM_GC,pgVar7->tmname[2]);
  if (pTVar2 != (TValue *)0x0) {
    if (pgVar7->gcstate - 2 < 4) {
      o->marked = o->marked & 0xf8 | pgVar7->currentwhite & 3;
      plVar8 = (lua_State *)pgVar7->sweepgc;
      plVar9 = (lua_State *)o;
      if (plVar8 == (lua_State *)o) {
        do {
          L1 = (lua_State *)plVar9->next;
          bVar1 = L->l_G->currentwhite;
          if (L1 == (lua_State *)0x0) break;
          if ((byte)((bVar1 ^ 3) & (L1->marked ^ 3)) == 0) {
            pGVar3 = L1->next;
            plVar9->next = pGVar3;
            switch(L1->tt) {
            case '\x04':
              luaS_remove(L,(TString *)L1);
            case '\x14':
              luaM_realloc_(L,L1,(size_t)((int)&(L1->l_G->strt).hash + 1),0);
              pGVar3 = plVar9->next;
              break;
            case '\x05':
              luaH_free(L,(Table *)L1);
              pGVar3 = plVar9->next;
              break;
            case '\x06':
              uVar5 = (uint)L1->status;
              if (uVar5 != 0) {
                ppgVar11 = &L1->l_G;
                iVar10 = 0;
                do {
                  ppgVar11 = ppgVar11 + 1;
                  block = *ppgVar11;
                  if (block != (global_State *)0x0) {
                    pTVar6 = (StkId)((int)&((StkId)block->ud)[-1].tt_ + 3);
                    block->ud = pTVar6;
                    if ((pTVar6 == (StkId)0x0) &&
                       ((StkId)block->frealloc == (StkId)&block->totalbytes)) {
                      luaM_realloc_(L,block,0x10,0);
                    }
                    uVar5 = (uint)L1->status;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < (int)uVar5);
              }
              luaM_realloc_(L,L1,uVar5 * 4 + 0x10,0);
              pGVar3 = plVar9->next;
              break;
            case '\a':
              luaM_realloc_(L,L1,(size_t)&L1->l_G->strt,0);
              pGVar3 = plVar9->next;
              break;
            case '\b':
              luaE_freethread(L,L1);
              pGVar3 = plVar9->next;
              break;
            case '\t':
              luaF_freeproto(L,(Proto *)L1);
              pGVar3 = plVar9->next;
              break;
            case '&':
              luaM_realloc_(L,L1,(uint)L1->status * 8 + 0x10,0);
              pGVar3 = plVar9->next;
            }
          }
          else {
            pGVar3 = L1->next;
            L1->marked = L1->marked & 0xf8 | bVar1 & 3;
            plVar9 = L1;
          }
          L1 = plVar9;
          if (pGVar3 == (GCObject *)0x0) {
            L1 = (lua_State *)0x0;
            break;
          }
          plVar9 = plVar8;
        } while (plVar8 == L1);
        pgVar7->sweepgc = &L1->next;
      }
    }
    pGVar3 = pgVar7->allgc;
    if (o == pgVar7->allgc) {
      pGVar4 = (GCObject *)&pgVar7->allgc;
    }
    else {
      do {
        pGVar4 = pGVar3;
        pGVar3 = pGVar4->next;
      } while (o != pGVar4->next);
    }
    pGVar4->next = o->next;
    o->next = pgVar7->finobj;
    pgVar7->finobj = o;
    o->marked = o->marked | 8;
  }
  return;
}


