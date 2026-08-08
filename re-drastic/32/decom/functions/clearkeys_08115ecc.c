/*
 * Ghidra decompilation
 *
 * Function : clearkeys
 * Address  : 08115ecc
 * Program  : drastic
 */


void clearkeys(global_State *g,GCObject *l,GCObject *f)

{
  GCObject *o;
  uint uVar1;
  int iVar2;
  Node *pNVar3;
  Node *n;
  Node *pNVar4;
  Node *pNVar5;
  Node *limit;
  Table *h;
  
  h = (Table *)l;
  if (l != (GCObject *)0x0) {
    do {
      pNVar3 = h->node;
      pNVar5 = (Node *)((int)&(pNVar3->i_val).value_ + (0x14 << h->lsizenode));
      for (; pNVar3 < pNVar5; pNVar3 = pNVar3 + 1) {
        while( true ) {
          if (((pNVar3->i_val).tt_ == 0) || (uVar1 = (pNVar3->i_key).nk.tt_, (uVar1 & 0x40) == 0))
          goto LAB_08115f10;
          if ((uVar1 & 0xf) == 4) break;
          iVar2 = *(int *)&pNVar3->i_key;
          if ((*(byte *)(iVar2 + 5) & 3) == 0) goto LAB_08115f10;
          (pNVar3->i_val).tt_ = 0;
          pNVar4 = pNVar3 + 1;
          if ((*(byte *)(iVar2 + 5) & 3) != 0) {
            (pNVar3->i_key).nk.tt_ = 10;
          }
          pNVar3 = pNVar4;
          if (pNVar5 <= pNVar4) goto LAB_08115f6c;
        }
        o = *(GCObject **)&pNVar3->i_key;
        if ((o != (GCObject *)0x0) && ((o->marked & 3) != 0)) {
          reallymarkobject(g,o);
        }
LAB_08115f10:
      }
LAB_08115f6c:
      h = (Table *)h->gclist;
    } while (h != (Table *)0x0);
  }
  return;
}


