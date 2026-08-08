/*
 * Ghidra decompilation
 *
 * Function : lua_len
 * Address  : 081113a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_len(lua_State *L,int idx)

{
  StkId pTVar1;
  TValue *o;
  TValue *rb;
  CallInfo *ci;
  lua_CFunction p_Var2;
  CClosure *func;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar1 = L->top;
        rb = &L->l_G->l_registry;
      }
      else {
        pTVar1 = L->ci->func;
        if ((pTVar1->tt_ == 0x16) ||
           (p_Var2 = (pTVar1->value_).f, (int)(uint)(byte)p_Var2[6] < -0xf4628 - idx)) {
          pTVar1 = L->top;
          rb = &luaO_nilobject_;
        }
        else {
          pTVar1 = L->top;
          rb = (TValue *)(p_Var2 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar1 = L->top;
      rb = pTVar1 + idx;
    }
  }
  else {
    pTVar1 = L->top;
    rb = L->ci->func + idx;
    if (pTVar1 <= rb) {
      rb = &luaO_nilobject_;
    }
  }
  luaV_objlen(L,pTVar1,rb);
  L->top = L->top + 1;
  return;
}


