/*
 * Ghidra decompilation
 *
 * Function : lua_setglobal
 * Address  : 08110298
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_setglobal(lua_State *L,char *name)

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
  luaV_settable(L,t,pTVar2 + -1,pTVar2 + -2);
  L->top = L->top + -2;
  return;
}


