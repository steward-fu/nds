/*
 * Ghidra decompilation
 *
 * Function : lua_createtable
 * Address  : 08110010
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_createtable(lua_State *L,int narray,int nrec)

{
  Table *t_00;
  Table *t;
  Table *x_;
  StkId pTVar1;
  TValue *io;
  StkId pTVar2;
  bool bVar3;
  bool bVar4;
  
  if (0 < L->l_G->GCdebt) {
    luaC_step(L);
  }
  t_00 = luaH_new(L);
  pTVar1 = L->top;
  bVar3 = nrec < 0;
  bVar4 = nrec == 0;
  if (nrec < 1) {
    bVar3 = narray < 0;
    bVar4 = narray == 0;
  }
  (pTVar1->value_).gc = (GCObject *)t_00;
  pTVar2 = L->top;
  pTVar1->tt_ = 0x45;
  L->top = pTVar2 + 1;
  if (bVar4 || bVar3) {
    return;
  }
  luaH_resize(L,t_00,narray,nrec);
  return;
}


