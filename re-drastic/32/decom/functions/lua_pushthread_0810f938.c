/*
 * Ghidra decompilation
 *
 * Function : lua_pushthread
 * Address  : 0810f938
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_pushthread(lua_State *L)

{
  lua_State *x_;
  global_State *pgVar1;
  StkId pTVar2;
  TValue *io;
  lua_State *plVar3;
  StkId pTVar4;
  
  pTVar2 = L->top;
  (pTVar2->value_).gc = (GCObject *)L;
  pTVar4 = L->top;
  pgVar1 = L->l_G;
  pTVar2->tt_ = 0x48;
  plVar3 = pgVar1->mainthread;
  L->top = pTVar4 + 1;
  return (uint)(plVar3 == L);
}


