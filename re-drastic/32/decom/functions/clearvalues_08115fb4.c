/*
 * Ghidra decompilation
 *
 * Function : clearvalues
 * Address  : 08115fb4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void clearvalues(global_State *g,GCObject *l,GCObject *f)

{
  bool bVar1;
  TValue *o;
  TValue *pTVar2;
  GCObject *pGVar3;
  Node *pNVar4;
  uint uVar5;
  Table *h;
  Node *pNVar6;
  Node *limit;
  uint uVar7;
  
  h = (Table *)l;
  if (l == f) {
    return;
  }
  do {
    uVar7 = h->sizearray;
    pNVar4 = h->node;
    pNVar6 = (Node *)((int)&(pNVar4->i_val).value_ + (0x14 << h->lsizenode));
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        while( true ) {
          pTVar2 = h->array;
          if ((pTVar2[uVar5].tt_ & 0x40U) != 0) break;
LAB_08116018:
          uVar5 = uVar5 + 1;
          if (uVar7 <= uVar5) goto LAB_08116078;
        }
        if ((pTVar2[uVar5].tt_ & 0xfU) != 4) {
          if (((pTVar2[uVar5].value_.gc)->marked & 3) != 0) {
            pTVar2[uVar5].tt_ = 0;
          }
          goto LAB_08116018;
        }
        pGVar3 = pTVar2[uVar5].value_.gc;
        if ((pGVar3 == (GCObject *)0x0) || ((pGVar3->marked & 3) == 0)) goto LAB_08116018;
        uVar5 = uVar5 + 1;
        reallymarkobject(g,pGVar3);
        uVar7 = h->sizearray;
      } while (uVar5 < uVar7);
LAB_08116078:
      pNVar4 = h->node;
    }
    if (pNVar4 < pNVar6) {
      pNVar4 = pNVar4 + 1;
LAB_0811609c:
      do {
        uVar7 = pNVar4[-1].i_val.tt_;
        if ((uVar7 != 0) && ((uVar7 & 0x40) != 0)) {
          if ((uVar7 & 0xf) == 4) {
            pGVar3 = pNVar4[-1].i_val.value_.gc;
            if ((pGVar3 != (GCObject *)0x0) && ((pGVar3->marked & 3) != 0)) {
              reallymarkobject(g,pGVar3);
            }
          }
          else if ((((pNVar4[-1].i_val.value_.gc)->marked & 3) != 0) &&
                  (pNVar4[-1].i_val.tt_ = 0, (pNVar4[-1].i_key.nk.tt_ & 0x40U) != 0)) {
            if (((pNVar4[-1].i_key.nk.value_.gc)->marked & 3) != 0) {
              pNVar4[-1].i_key.nk.tt_ = 10;
            }
            bVar1 = pNVar6 <= pNVar4;
            pNVar4 = pNVar4 + 1;
            if (bVar1) break;
            goto LAB_0811609c;
          }
        }
        bVar1 = pNVar4 < pNVar6;
        pNVar4 = pNVar4 + 1;
      } while (bVar1);
    }
    h = (Table *)h->gclist;
    if ((Table *)f == h) {
      return;
    }
  } while( true );
}


