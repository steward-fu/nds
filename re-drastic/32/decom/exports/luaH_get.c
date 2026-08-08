/*
 * Ghidra decompilation
 *
 * Function : luaH_get
 * Address  : 0811eb9c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable n_2:Node *[r0:4] conflicts with parameter, skipped. */

TValue * luaH_get(Table *t,TValue *key)

{
  Node *n_1;
  Node *pNVar1;
  Node *n_3;
  int iVar2;
  Node *n;
  GCObject *pGVar3;
  lua_Integer k;
  uint uVar4;
  int nx_1;
  int nx_3;
  int nx;
  int nx_2;
  float fVar5;
  float __x;
  
  switch(key->tt_ & 0x3f) {
  case 0:
    break;
  case 3:
    __x = (key->value_).n;
    fVar5 = floorf(__x);
    if (((__x == fVar5) && (__x < -2.147484e+09 == NAN(__x))) && (__x < 2.147484e+09)) {
      pGVar3 = (GCObject *)(int)__x;
      if (&pGVar3[-1].field_0x7 < (undefined *)t->sizearray) {
        return t->array + (int)&pGVar3[0x3ffffff].field_0x7;
      }
      pNVar1 = t->node + ((uint)pGVar3 & ~(-1 << t->lsizenode));
      while( true ) {
        if (((pNVar1->i_key).nk.tt_ == 0x13) && (pGVar3 == (pNVar1->i_key).nk.value_.gc)) {
          return &pNVar1->i_val;
        }
        iVar2 = (pNVar1->i_key).nk.next;
        if (iVar2 == 0) break;
        pNVar1 = pNVar1 + iVar2;
      }
      break;
    }
  default:
    pNVar1 = mainposition(t,key);
    while( true ) {
      iVar2 = luaV_equalobj((lua_State *)0x0,&(pNVar1->i_key).tvk,key);
      if (iVar2 != 0) {
        return &pNVar1->i_val;
      }
      iVar2 = (pNVar1->i_key).nk.next;
      if (iVar2 == 0) break;
      pNVar1 = pNVar1 + iVar2;
    }
    break;
  case 4:
    pNVar1 = t->node;
    uVar4 = (uint)((GCObject *)(key->value_).f)[1].next & ~(-1 << t->lsizenode);
    do {
      pNVar1 = pNVar1 + uVar4;
      if (((pNVar1->i_key).nk.tt_ == 0x44) &&
         ((GCObject *)(key->value_).f == (pNVar1->i_key).nk.value_.gc)) {
        return &pNVar1->i_val;
      }
      uVar4 = (pNVar1->i_key).nk.next;
    } while (uVar4 != 0);
    break;
  case 0x13:
    pGVar3 = (GCObject *)(key->value_).f;
    if (&pGVar3[-1].field_0x7 < (undefined *)t->sizearray) {
      return t->array + (int)&pGVar3[0x3ffffff].field_0x7;
    }
    pNVar1 = t->node + ((uint)pGVar3 & ~(-1 << t->lsizenode));
    while( true ) {
      if (((pNVar1->i_key).nk.tt_ == 0x13) && (pGVar3 == (pNVar1->i_key).nk.value_.gc)) {
        return &pNVar1->i_val;
      }
      iVar2 = (pNVar1->i_key).nk.next;
      if (iVar2 == 0) break;
      pNVar1 = pNVar1 + iVar2;
    }
  }
  return &luaO_nilobject_;
}


