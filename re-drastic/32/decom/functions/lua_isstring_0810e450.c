/*
 * Ghidra decompilation
 *
 * Function : lua_isstring
 * Address  : 0810e450
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_isstring(lua_State *L,int idx)

{
  TValue *o;
  TValue *pTVar1;
  CallInfo *ci;
  StkId pTVar2;
  lua_CFunction p_Var3;
  CClosure *func;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar1 = &L->l_G->l_registry;
      }
      else {
        pTVar2 = L->ci->func;
        if ((pTVar2->tt_ == 0x16) ||
           (p_Var3 = (pTVar2->value_).f, (int)(uint)(byte)p_Var3[6] < -0xf4628 - idx)) {
          pTVar1 = &luaO_nilobject_;
        }
        else {
          pTVar1 = (TValue *)(p_Var3 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar1 = L->top + idx;
    }
  }
  else {
    pTVar1 = L->ci->func + idx;
    if (L->top <= pTVar1) {
      pTVar1 = &luaO_nilobject_;
    }
  }
  return (uint)((pTVar1->tt_ & 0xfU) - 3 < 2);
}


