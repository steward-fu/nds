/*
 * Ghidra decompilation
 *
 * Function : lua_geti
 * Address  : 0810fbf8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_geti(lua_State *L,int idx,lua_Integer n)

{
  TValue *o;
  TValue *t;
  CallInfo *ci;
  TValue *key;
  lua_CFunction p_Var1;
  CClosure *func;
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
  (pTVar2->value_).i = n;
  key = L->top;
  pTVar2->tt_ = 0x13;
  L->top = key + 1;
  luaV_gettable(L,t,key,key);
  return L->top[-1].tt_ & 0xf;
}


