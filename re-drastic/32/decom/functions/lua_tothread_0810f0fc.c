/*
 * Ghidra decompilation
 *
 * Function : lua_tothread
 * Address  : 0810f0fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_State * lua_tothread(lua_State *L,int idx)

{
  lua_State *plVar1;
  TValue *o;
  TValue *pTVar2;
  CallInfo *ci;
  StkId pTVar3;
  lua_CFunction p_Var4;
  CClosure *func;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar2 = &L->l_G->l_registry;
      }
      else {
        pTVar3 = L->ci->func;
        if ((pTVar3->tt_ == 0x16) ||
           (p_Var4 = (pTVar3->value_).f, (int)(uint)(byte)p_Var4[6] < -0xf4628 - idx)) {
          pTVar2 = &luaO_nilobject_;
        }
        else {
          pTVar2 = (TValue *)(p_Var4 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar2 = L->top + idx;
    }
  }
  else {
    pTVar2 = L->ci->func + idx;
    if (L->top <= pTVar2) {
      pTVar2 = &luaO_nilobject_;
    }
  }
  if (pTVar2->tt_ == 0x48) {
    plVar1 = (lua_State *)(pTVar2->value_).gc;
  }
  else {
    plVar1 = (lua_State *)0x0;
  }
  return plVar1;
}


