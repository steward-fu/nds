/*
 * Ghidra decompilation
 *
 * Function : lua_newuserdata
 * Address  : 081114ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * lua_newuserdata(lua_State *L,size_t size)

{
  Udata *pUVar1;
  Udata *u;
  TValue *io;
  StkId pTVar2;
  StkId pTVar3;
  
  if (0 < L->l_G->GCdebt) {
    luaC_step(L);
  }
  pUVar1 = luaS_newudata(L,size);
  pTVar2 = L->top;
  (pTVar2->value_).gc = (GCObject *)pUVar1;
  pTVar3 = L->top;
  pTVar2->tt_ = 0x47;
  L->top = pTVar3 + 1;
  return &pUVar1[1].tt;
}


