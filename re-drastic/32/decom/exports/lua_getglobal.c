/*
 * Ghidra decompilation
 *
 * Function : lua_getglobal
 * Address  : 0810f96c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_getglobal(lua_State *L,char *name)

{
  TValue *t;
  TValue *gt;
  TString *pTVar1;
  TString *x_;
  StkId pTVar2;
  TValue *io;
  StkId pTVar3;
  
  t = luaH_getint((Table *)(L->l_G->l_registry).value_.gc,2);
  pTVar3 = L->top;
  L->top = pTVar3 + 1;
  pTVar1 = luaS_new(L,name);
  (pTVar3->value_).gc = (GCObject *)pTVar1;
  pTVar2 = L->top;
  pTVar3->tt_ = pTVar1->tt | 0x40;
  luaV_gettable(L,t,pTVar2 + -1,pTVar2 + -1);
  return L->top[-1].tt_ & 0xf;
}


