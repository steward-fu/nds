/*
 * Ghidra decompilation
 *
 * Function : lua_type
 * Address  : 0810e118
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_type(lua_State *L,int idx)

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
        if (pTVar2->tt_ == 0x16) {
          return -1;
        }
        p_Var3 = (pTVar2->value_).f;
        if ((int)(uint)(byte)p_Var3[6] < -0xf4628 - idx) {
          return -1;
        }
        pTVar1 = (TValue *)(p_Var3 + (-0xf4627 - idx) * 8);
      }
    }
    else {
      pTVar1 = L->top + idx;
    }
  }
  else {
    pTVar1 = L->ci->func + idx;
    if (L->top <= pTVar1) {
      return -1;
    }
  }
  if (pTVar1 == &luaO_nilobject_) {
    return -1;
  }
  return pTVar1->tt_ & 0xf;
}


