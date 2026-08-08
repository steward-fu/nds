/*
 * Ghidra decompilation
 *
 * Function : lua_pushlstring
 * Address  : 0810f66c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable io:TValue *[r1:4] conflicts with parameter, skipped. */

char * lua_pushlstring(lua_State *L,char *s,size_t len)

{
  TString *pTVar1;
  TString *ts;
  StkId pTVar2;
  StkId pTVar3;
  
  if (0 < L->l_G->GCdebt) {
    luaC_step(L);
  }
  pTVar1 = luaS_newlstr(L,s,len);
  pTVar2 = L->top;
  ts = (TString *)&pTVar1[1].tt;
  (pTVar2->value_).gc = (GCObject *)pTVar1;
  pTVar3 = L->top;
  pTVar2->tt_ = pTVar1->tt | 0x40;
  L->top = pTVar3 + 1;
  return (char *)ts;
}


