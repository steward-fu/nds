/*
 * Ghidra decompilation
 *
 * Function : luaH_getn
 * Address  : 0811f9b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaH_getn(Table *t)

{
  GCObject *pGVar1;
  Node *n;
  Node *n_1;
  Node *pNVar2;
  Node *n_2;
  Node *pNVar3;
  int nx;
  int iVar4;
  int nx_1;
  uint m_1;
  int nx_2;
  int iVar5;
  Node *pNVar6;
  uint m;
  GCObject *pGVar7;
  GCObject *pGVar8;
  uint i_1;
  uint j;
  GCObject *pGVar9;
  uint i;
  
  pGVar9 = (GCObject *)t->sizearray;
  if (pGVar9 != (GCObject *)0x0) {
    pGVar7 = (GCObject *)t->array[(int)&pGVar9[-1].field_0x7].tt_;
    if (pGVar7 == (GCObject *)0x0) {
      while (pGVar1 = pGVar7,
            pGVar8 = (GCObject *)((uint)((int)&pGVar1->next + (int)&pGVar9->next) >> 1),
            1 < (uint)((int)pGVar9 - (int)pGVar1)) {
        pGVar7 = pGVar8;
        if (t->array[(int)&pGVar8[-1].field_0x7].tt_ == 0) {
          pGVar7 = pGVar1;
          pGVar9 = pGVar8;
        }
      }
      return (int)pGVar1;
    }
  }
  pNVar6 = t->node;
  if (pNVar6 == &dummynode_) {
    return (int)pGVar9;
  }
  pGVar8 = (GCObject *)((int)&pGVar9->next + 1);
  pGVar7 = pGVar9;
  do {
    pGVar1 = pGVar8;
    if (&pGVar1[-1].field_0x7 < pGVar9) {
      pNVar3 = (Node *)(t->array + (int)&pGVar1[0x3ffffff].field_0x7);
LAB_0811fa18:
      if ((pNVar3->i_val).tt_ == 0) {
LAB_0811faa8:
        while( true ) {
          pGVar8 = pGVar7;
          if ((uint)((int)pGVar1 - (int)pGVar8) < 2) {
            return (int)pGVar8;
          }
          pGVar7 = (GCObject *)((uint)((int)&pGVar8->next + (int)&pGVar1->next) >> 1);
          if (pGVar9 <= &pGVar7[-1].field_0x7) break;
          pNVar2 = (Node *)(t->array + (int)&pGVar7[0x3ffffff].field_0x7);
LAB_0811fac4:
          if ((pNVar2->i_val).tt_ == 0) {
            pGVar1 = pGVar7;
            pGVar7 = pGVar8;
          }
        }
        pNVar3 = pNVar6 + ((1 << t->lsizenode) - 1U & (uint)pGVar7);
        do {
          if ((pNVar3->i_key).nk.tt_ == 0x13) {
            pNVar2 = pNVar3;
            if (pGVar7 == (pNVar3->i_key).nk.value_.gc) goto LAB_0811fac4;
            iVar4 = (pNVar3->i_key).nk.next;
          }
          else {
            iVar4 = (pNVar3->i_key).nk.next;
          }
          pNVar2 = (Node *)&luaO_nilobject_;
          if (iVar4 == 0) goto LAB_0811fac4;
          pNVar3 = pNVar3 + iVar4;
        } while( true );
      }
    }
    else {
      pNVar3 = pNVar6 + ((1 << t->lsizenode) - 1U & (uint)pGVar1);
      while( true ) {
        if ((pNVar3->i_key).nk.tt_ == 0x13) {
          if (pGVar1 == (pNVar3->i_key).nk.value_.gc) goto LAB_0811fa18;
          iVar4 = (pNVar3->i_key).nk.next;
        }
        else {
          iVar4 = (pNVar3->i_key).nk.next;
        }
        if (iVar4 == 0) break;
        pNVar3 = pNVar3 + iVar4;
      }
      if (luaO_nilobject_.tt_ == 0) goto LAB_0811faa8;
    }
    if ((GCObject *)0x3fffffff < pGVar1) {
      iVar4 = 0;
      for (pGVar7 = (GCObject *)0x1; &pGVar7[-1].field_0x7 < pGVar9;
          pGVar7 = (GCObject *)((int)&pGVar7->next + 1)) {
        pNVar2 = (Node *)((int)&t->array->value_ + iVar4);
LAB_0811fbb0:
        iVar4 = iVar4 + 8;
        if ((pNVar2->i_val).tt_ == 0) {
          return (int)&pGVar7[-1].field_0x7;
        }
      }
      pNVar3 = pNVar6 + ((1 << t->lsizenode) - 1U & (uint)pGVar7);
      do {
        if ((pNVar3->i_key).nk.tt_ == 0x13) {
          pNVar2 = pNVar3;
          if (pGVar7 == (pNVar3->i_key).nk.value_.gc) goto LAB_0811fbb0;
          iVar5 = (pNVar3->i_key).nk.next;
        }
        else {
          iVar5 = (pNVar3->i_key).nk.next;
        }
        pNVar2 = (Node *)&luaO_nilobject_;
        if (iVar5 == 0) goto LAB_0811fbb0;
        pNVar3 = pNVar3 + iVar5;
      } while( true );
    }
    pGVar8 = (GCObject *)((int)pGVar1 << 1);
    pGVar7 = pGVar1;
  } while( true );
}


