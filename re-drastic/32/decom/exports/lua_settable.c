/*
 * Ghidra decompilation
 *
 * Function : lua_settable
 * Address  : 08110328
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_settable(lua_State *L,int idx)

{
  TValue *o;
  TValue *t;
  StkId pTVar1;
  CallInfo *ci;
  lua_CFunction p_Var2;
  CClosure *func;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar1 = L->top;
        t = &L->l_G->l_registry;
      }
      else {
        pTVar1 = L->ci->func;
        if ((pTVar1->tt_ == 0x16) ||
           (p_Var2 = (pTVar1->value_).f, (int)(uint)(byte)p_Var2[6] < -0xf4628 - idx)) {
          pTVar1 = L->top;
          t = &luaO_nilobject_;
        }
        else {
          pTVar1 = L->top;
          t = (TValue *)(p_Var2 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar1 = L->top;
      t = pTVar1 + idx;
    }
  }
  else {
    pTVar1 = L->top;
    t = L->ci->func + idx;
    if (pTVar1 <= t) {
      t = &luaO_nilobject_;
    }
  }
  luaV_settable(L,t,pTVar1 + -2,pTVar1 + -1);
  L->top = L->top + -2;
  return;
}


