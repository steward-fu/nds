/*
 * Ghidra decompilation
 *
 * Function : lua_pushstring
 * Address  : 0810f6e0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * lua_pushstring(lua_State *L,char *s)

{
  TString *pTVar1;
  TString *ts;
  StkId pTVar2;
  TValue *io;
  StkId pTVar3;
  
  if (s == (char *)0x0) {
    pTVar2 = L->top;
    pTVar2->tt_ = 0;
    L->top = pTVar2 + 1;
    ts = (TString *)0x0;
  }
  else {
    if (0 < L->l_G->GCdebt) {
      luaC_step(L);
    }
    pTVar1 = luaS_new(L,s);
    pTVar2 = L->top;
    ts = (TString *)&pTVar1[1].tt;
    (pTVar2->value_).gc = (GCObject *)pTVar1;
    pTVar3 = L->top;
    pTVar2->tt_ = pTVar1->tt | 0x40;
    L->top = pTVar3 + 1;
  }
  return (char *)ts;
}


