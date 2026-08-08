/*
 * Ghidra decompilation
 *
 * Function : luaH_getstr
 * Address  : 0811eb44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

TValue * luaH_getstr(Table *t,TString *key)

{
  Node *pNVar1;
  Node *n;
  uint uVar2;
  int nx;
  
  pNVar1 = t->node;
  uVar2 = key->hash & ~(-1 << t->lsizenode);
  while ((pNVar1 = pNVar1 + uVar2, (pNVar1->i_key).nk.tt_ != 0x44 ||
         (key != (TString *)(pNVar1->i_key).nk.value_.gc))) {
    uVar2 = (pNVar1->i_key).nk.next;
    if (uVar2 == 0) {
      return &luaO_nilobject_;
    }
  }
  return &pNVar1->i_val;
}


