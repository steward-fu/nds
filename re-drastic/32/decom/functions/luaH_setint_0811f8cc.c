/*
 * Ghidra decompilation
 *
 * Function : luaH_setint
 * Address  : 0811f8cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaH_setint(lua_State *L,Table *t,lua_Integer key,TValue *value)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int nx;
  TValue *cell;
  Node *n;
  bool bVar4;
  TValue k;
  
  iVar1 = __stack_chk_guard;
  if (key - 1U < t->sizearray) {
    cell = t->array + key + 0x1fffffff;
LAB_0811f904:
    if (cell != &luaO_nilobject_) goto LAB_0811f914;
  }
  else {
    cell = &t->node->i_val;
    uVar3 = key & ~(-1 << t->lsizenode);
    do {
      while (cell = (TValue *)((int)cell + uVar3 * 0x14),
            (((TKey *)((int)cell + 8))->nk).tt_ == 0x13) {
        if ((GCObject *)key == (((TKey *)((int)cell + 8))->nk).value_.gc) goto LAB_0811f904;
        uVar3 = (((TKey *)((int)cell + 8))->nk).next;
        if (uVar3 == 0) goto LAB_0811f988;
      }
      uVar3 = (((TKey *)((int)cell + 8))->nk).next;
    } while (uVar3 != 0);
  }
LAB_0811f988:
  k.tt_ = 0x13;
  k.value_.i = key;
  cell = luaH_newkey(L,t,&k);
LAB_0811f914:
  iVar2 = value->tt_;
  bVar4 = iVar1 == __stack_chk_guard;
  cell->value_ = value->value_;
  cell->tt_ = iVar2;
  if (bVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


