/*
 * Ghidra decompilation
 *
 * Function : lua_arith
 * Address  : 0810e73c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_arith(lua_State *L,int op)

{
  StkId pTVar1;
  TValue *io1;
  StkId pTVar2;
  int iVar3;
  
  pTVar1 = L->top;
  pTVar2 = pTVar1;
  if (op - 0xcU < 2) {
    iVar3 = pTVar1[-1].tt_;
    pTVar2 = pTVar1 + 1;
    pTVar1->value_ = pTVar1[-1].value_;
    pTVar1->tt_ = iVar3;
    L->top = pTVar2;
  }
  luaO_arith(L,op,pTVar2 + -2,pTVar2 + -1,pTVar2 + -2);
  L->top = L->top + -1;
  return;
}


