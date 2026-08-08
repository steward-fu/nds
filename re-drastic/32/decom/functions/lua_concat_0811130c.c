/*
 * Ghidra decompilation
 *
 * Function : lua_concat
 * Address  : 0811130c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable x_:TString *[r0:4] conflicts with parameter, skipped. */

void lua_concat(lua_State *L,int n)

{
  TString *pTVar1;
  StkId pTVar2;
  TValue *io;
  StkId pTVar3;
  
  if (1 < n) {
    if (0 < L->l_G->GCdebt) {
      luaC_step(L);
    }
    luaV_concat(L,n);
    return;
  }
  if (n == 0) {
    pTVar3 = L->top;
    pTVar1 = luaS_newlstr(L,"",0);
    (pTVar3->value_).gc = (GCObject *)pTVar1;
    pTVar2 = L->top;
    pTVar3->tt_ = pTVar1->tt | 0x40;
    L->top = pTVar2 + 1;
  }
  return;
}


