/*
 * Ghidra decompilation
 *
 * Function : luaH_set
 * Address  : 0811f638
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

TValue * luaH_set(lua_State *L,Table *t,TValue *key)

{
  Node *n_1;
  TValue *pTVar1;
  Node *pNVar2;
  Node *n_3;
  int iVar3;
  Node *n;
  lua_Integer k;
  uint uVar4;
  int nx;
  int nx_2;
  GCObject *pGVar5;
  int nx_1;
  int iVar6;
  int nx_3;
  Node *n_2;
  float fVar7;
  float __x;
  
  switch(key->tt_ & 0x3f) {
  case 0:
    goto switchD_0811f664_caseD_0;
  default:
switchD_0811f664_caseD_1:
    pNVar2 = mainposition(t,key);
    while (iVar3 = luaV_equalobj((lua_State *)0x0,&(pNVar2->i_key).tvk,key), iVar3 == 0) {
      iVar3 = *(int *)((int)&pNVar2->i_key + 8);
      if (iVar3 == 0) goto switchD_0811f664_caseD_0;
      pNVar2 = pNVar2 + iVar3;
    }
    break;
  case 3:
    __x = (key->value_).n;
    fVar7 = floorf(__x);
    if (((__x != fVar7) || (__x < -2.147484e+09 != NAN(__x))) || (2.147484e+09 <= __x))
    goto switchD_0811f664_caseD_1;
    pGVar5 = (GCObject *)(int)__x;
    if ((undefined *)t->sizearray <= &pGVar5[-1].field_0x7) {
      pNVar2 = t->node;
      uVar4 = (uint)pGVar5 & ~(-1 << t->lsizenode);
      do {
        pNVar2 = pNVar2 + uVar4;
        if (((pNVar2->i_key).nk.tt_ == 0x13) && (pGVar5 == (pNVar2->i_key).nk.value_.gc))
        goto LAB_0811f6dc;
        uVar4 = *(uint *)((int)&pNVar2->i_key + 8);
      } while (uVar4 != 0);
      goto switchD_0811f664_caseD_0;
    }
    pNVar2 = (Node *)(t->array + (int)&pGVar5[0x3ffffff].field_0x7);
    break;
  case 4:
    pNVar2 = t->node;
    iVar3 = ((uint)((GCObject *)(key->value_).f)[1].next & ~(-1 << t->lsizenode)) * 5;
    do {
      while (pNVar2 = (Node *)(&(pNVar2->i_val).value_ + iVar3), (pNVar2->i_key).nk.tt_ == 0x44) {
        if ((GCObject *)(key->value_).f == (pNVar2->i_key).nk.value_.gc) goto LAB_0811f6dc;
        iVar6 = *(int *)((int)&pNVar2->i_key + 8);
        iVar3 = iVar6 * 5;
        if (iVar6 == 0) goto switchD_0811f664_caseD_0;
      }
      iVar6 = *(int *)((int)&pNVar2->i_key + 8);
      iVar3 = iVar6 * 5;
    } while (iVar6 != 0);
    goto switchD_0811f664_caseD_0;
  case 0x13:
    pGVar5 = (GCObject *)(key->value_).f;
    if ((undefined *)t->sizearray <= &pGVar5[-1].field_0x7) {
      pNVar2 = t->node;
      uVar4 = (uint)pGVar5 & ~(-1 << t->lsizenode);
      do {
        pNVar2 = pNVar2 + uVar4;
        if (((pNVar2->i_key).nk.tt_ == 0x13) && (pGVar5 == (pNVar2->i_key).nk.value_.gc))
        goto LAB_0811f6dc;
        uVar4 = *(uint *)((int)&pNVar2->i_key + 8);
      } while (uVar4 != 0);
      goto switchD_0811f664_caseD_0;
    }
    pNVar2 = (Node *)(t->array + (int)&pGVar5[0x3ffffff].field_0x7);
  }
LAB_0811f6dc:
  if (pNVar2 != (Node *)&luaO_nilobject_) {
    return &pNVar2->i_val;
  }
switchD_0811f664_caseD_0:
  pTVar1 = luaH_newkey(L,t,key);
  return pTVar1;
}


