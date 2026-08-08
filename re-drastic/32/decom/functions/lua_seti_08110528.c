/*
 * Ghidra decompilation
 *
 * Function : lua_seti
 * Address  : 08110528
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_seti(lua_State *L,int idx,lua_Integer n)

{
  TValue *o;
  TValue *t;
  StkId pTVar1;
  CallInfo *ci;
  lua_CFunction p_Var2;
  CClosure *func;
  StkId pTVar3;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar3 = L->top;
        t = &L->l_G->l_registry;
      }
      else {
        pTVar3 = L->ci->func;
        if ((pTVar3->tt_ == 0x16) ||
           (p_Var2 = (pTVar3->value_).f, (int)(uint)(byte)p_Var2[6] < -0xf4628 - idx)) {
          pTVar3 = L->top;
          t = &luaO_nilobject_;
        }
        else {
          pTVar3 = L->top;
          t = (TValue *)(p_Var2 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar3 = L->top;
      t = pTVar3 + idx;
    }
  }
  else {
    pTVar3 = L->top;
    t = L->ci->func + idx;
    if (pTVar3 <= t) {
      t = &luaO_nilobject_;
    }
  }
  L->top = pTVar3 + 1;
  (pTVar3->value_).i = n;
  pTVar1 = L->top;
  pTVar3->tt_ = 0x13;
  luaV_settable(L,t,pTVar1 + -1,pTVar1 + -2);
  L->top = L->top + -2;
  return;
}


