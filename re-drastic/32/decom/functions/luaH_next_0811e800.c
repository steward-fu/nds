/*
 * Ghidra decompilation
 *
 * Function : luaH_next
 * Address  : 0811e800
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaH_next(lua_State *L,Table *t,StkId key)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *n;
  int iVar3;
  Value *pVVar4;
  int iVar5;
  int nx;
  GCObject *pGVar6;
  uint i;
  TValue *pTVar7;
  Value VVar8;
  TValue *io;
  TValue *io1;
  
  if (key->tt_ == 0) {
    pGVar6 = (GCObject *)t->sizearray;
    i = 0;
  }
  else if (((key->tt_ != 0x13) || (i = (uint)(key->value_).gc, (int)i < 1)) ||
          (pGVar6 = (GCObject *)t->sizearray, pGVar6 < i)) {
    for (pNVar2 = mainposition(t,key);
        (iVar3 = luaV_equalobj((lua_State *)0x0,&(pNVar2->i_key).tvk,key), iVar3 == 0 &&
        ((((pNVar2->i_key).nk.tt_ != 10 || ((key->tt_ & 0x40U) == 0)) ||
         ((pNVar2->i_key).nk.value_.gc != (key->value_).gc)))); pNVar2 = pNVar2 + iVar3) {
      iVar3 = (pNVar2->i_key).nk.next;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        luaG_runerror(L,"invalid key to \'next\'");
      }
    }
    pGVar6 = (GCObject *)t->sizearray;
    i = (int)pGVar6 + ((int)pNVar2 - (int)t->node >> 2) * -0x33333333 + 1;
  }
  if (i < pGVar6) {
    iVar5 = t->array[i].tt_;
    iVar3 = i * 8;
    while (iVar5 == 0) {
      i = (int)(GCObject **)i + 1;
      if ((GCObject *)i == pGVar6) goto LAB_0811e908;
      iVar5 = *(int *)((int)&t->array[1].tt_ + iVar3);
      iVar3 = iVar3 + 8;
    }
    iVar5 = 1;
    (key->value_).gc = (GCObject *)((int)(GCObject **)i + 1);
    pTVar7 = t->array;
    key->tt_ = 0x13;
    pVVar4 = (Value *)((int)&pTVar7->value_ + iVar3);
    VVar8 = pVVar4[1];
    key[1].value_ = *pVVar4;
    key[1].tt_ = (int)VVar8;
  }
  else {
LAB_0811e908:
    iVar5 = i - (int)pGVar6;
    iVar3 = 1 << t->lsizenode;
    if (iVar5 < iVar3) {
      pNVar2 = t->node + iVar5;
      if ((pNVar2->i_val).tt_ == 0) {
        pNVar1 = t->node + iVar5 + 1;
        do {
          pNVar2 = pNVar1;
          iVar5 = iVar5 + 1;
          if (iVar3 <= iVar5) {
            return 0;
          }
          pNVar1 = pNVar2 + 1;
        } while ((pNVar2->i_val).tt_ == 0);
      }
      iVar3 = (pNVar2->i_key).nk.tt_;
      iVar5 = 1;
      key->value_ = (pNVar2->i_key).nk.value_;
      key->tt_ = iVar3;
      iVar3 = (pNVar2->i_val).tt_;
      key[1].value_ = (pNVar2->i_val).value_;
      key[1].tt_ = iVar3;
    }
    else {
      iVar5 = 0;
    }
  }
  return iVar5;
}


