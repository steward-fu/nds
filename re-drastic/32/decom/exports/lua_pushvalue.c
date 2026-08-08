/*
 * Ghidra decompilation
 *
 * Function : lua_pushvalue
 * Address  : 0810e05c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_pushvalue(lua_State *L,int idx)

{
  TValue *o;
  TValue *pTVar1;
  CallInfo *ci;
  StkId pTVar2;
  lua_CFunction p_Var3;
  CClosure *func;
  StkId pTVar4;
  TValue *io1;
  int iVar5;
  
  pTVar4 = L->top;
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
      pTVar1 = pTVar4 + idx;
    }
  }
  else {
    pTVar1 = L->ci->func + idx;
    if (pTVar4 <= pTVar1) {
      pTVar1 = &luaO_nilobject_;
    }
  }
  iVar5 = pTVar1->tt_;
  pTVar4->value_ = pTVar1->value_;
  pTVar4->tt_ = iVar5;
  L->top = pTVar4 + 1;
  return;
}


