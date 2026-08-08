/*
 * Ghidra decompilation
 *
 * Function : luaH_getint
 * Address  : 0811ead0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

TValue * luaH_getint(Table *t,lua_Integer key)

{
  Node *pNVar1;
  Node *n;
  uint uVar2;
  int nx;
  
  if (key - 1U < t->sizearray) {
    return t->array + key + 0x1fffffff;
  }
  pNVar1 = t->node;
  uVar2 = key & ~(-1 << t->lsizenode);
  while ((pNVar1 = pNVar1 + uVar2, (pNVar1->i_key).nk.tt_ != 0x13 ||
         ((GCObject *)key != (pNVar1->i_key).nk.value_.gc))) {
    uVar2 = (pNVar1->i_key).nk.next;
    if (uVar2 == 0) {
      return &luaO_nilobject_;
    }
  }
  return &pNVar1->i_val;
}


