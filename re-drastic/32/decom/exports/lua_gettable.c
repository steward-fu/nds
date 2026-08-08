/*
 * Ghidra decompilation
 *
 * Function : lua_gettable
 * Address  : 0810f9fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_gettable(lua_State *L,int idx)

{
  TValue *o;
  TValue *t;
  lua_CFunction p_Var1;
  CClosure *func;
  CallInfo *ci;
  StkId pTVar2;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar2 = L->top;
        t = &L->l_G->l_registry;
      }
      else {
        pTVar2 = L->ci->func;
        if ((pTVar2->tt_ == 0x16) ||
           (p_Var1 = (pTVar2->value_).f, (int)(uint)(byte)p_Var1[6] < -0xf4628 - idx)) {
          pTVar2 = L->top;
          t = &luaO_nilobject_;
        }
        else {
          pTVar2 = L->top;
          t = (TValue *)(p_Var1 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar2 = L->top;
      t = pTVar2 + idx;
    }
  }
  else {
    pTVar2 = L->top;
    t = L->ci->func + idx;
    if (pTVar2 <= t) {
      t = &luaO_nilobject_;
    }
  }
  luaV_gettable(L,t,pTVar2 + -1,pTVar2 + -1);
  return L->top[-1].tt_ & 0xf;
}


