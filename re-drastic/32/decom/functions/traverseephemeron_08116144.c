/*
 * Ghidra decompilation
 *
 * Function : traverseephemeron
 * Address  : 08116144
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int traverseephemeron(global_State *g,Table *h)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  GCObject *pGVar4;
  Node *pNVar5;
  uint uVar6;
  Node *pNVar7;
  Node *limit;
  int iVar8;
  uint uVar9;
  
  uVar9 = h->sizearray;
  pNVar5 = h->node;
  pNVar7 = (Node *)((int)&(pNVar5->i_val).value_ + (0x14 << h->lsizenode));
  if (uVar9 == 0) {
    iVar8 = 0;
  }
  else {
    uVar6 = 0;
    iVar8 = 0;
    do {
      while (((h->array[uVar6].tt_ & 0x40U) == 0 ||
             (pGVar4 = h->array[uVar6].value_.gc, (pGVar4->marked & 3) == 0))) {
        uVar6 = uVar6 + 1;
        if (uVar9 <= uVar6) goto LAB_081161d8;
      }
      uVar6 = uVar6 + 1;
      reallymarkobject(g,pGVar4);
      uVar9 = h->sizearray;
      iVar8 = 1;
    } while (uVar6 < uVar9);
LAB_081161d8:
    pNVar5 = h->node;
  }
  if (pNVar5 < pNVar7) {
    bVar3 = false;
    bVar2 = false;
    pNVar5 = pNVar5 + 1;
    do {
      while (uVar9 = pNVar5[-1].i_val.tt_, uVar9 == 0) {
        if (((pNVar5[-1].i_key.nk.tt_ & 0x40U) != 0) &&
           (((pNVar5[-1].i_key.nk.value_.gc)->marked & 3) != 0)) {
          pNVar5[-1].i_key.nk.tt_ = 10;
        }
LAB_08116204:
        bVar1 = pNVar7 <= pNVar5;
        pNVar5 = pNVar5 + 1;
        if (bVar1) goto LAB_08116274;
      }
      uVar6 = pNVar5[-1].i_key.nk.tt_;
      if ((uVar6 & 0x40) == 0) {
LAB_081162f4:
        if (((uVar9 & 0x40) != 0) &&
           (pGVar4 = pNVar5[-1].i_val.value_.gc, (pGVar4->marked & 3) != 0)) {
          iVar8 = 1;
          reallymarkobject(g,pGVar4);
        }
        goto LAB_08116204;
      }
      if ((uVar6 & 0xf) == 4) {
        pGVar4 = *(GCObject **)&pNVar5[-1].i_key;
        if ((pGVar4 != (GCObject *)0x0) && ((pGVar4->marked & 3) != 0)) {
          reallymarkobject(g,pGVar4);
          uVar9 = pNVar5[-1].i_val.tt_;
        }
        goto LAB_081162f4;
      }
      if (((pNVar5[-1].i_key.nk.value_.gc)->marked & 3) == 0) goto LAB_081162f4;
      if (((uVar9 & 0x40) != 0) && (((pNVar5[-1].i_val.value_.gc)->marked & 3) != 0)) {
        bVar2 = true;
        bVar3 = bVar2;
        goto LAB_08116204;
      }
      bVar2 = true;
      bVar1 = pNVar5 < pNVar7;
      pNVar5 = pNVar5 + 1;
    } while (bVar1);
LAB_08116274:
    if (g->gcstate != '\0') {
      if (bVar3) {
        h->gclist = g->ephemeron;
        g->ephemeron = (GCObject *)h;
        return iVar8;
      }
      if (!bVar2) {
        return iVar8;
      }
      h->gclist = g->allweak;
      g->allweak = (GCObject *)h;
      return iVar8;
    }
  }
  else if (g->gcstate != '\0') {
    return iVar8;
  }
  h->gclist = g->grayagain;
  g->grayagain = (GCObject *)h;
  return iVar8;
}


