/*
 * Ghidra decompilation
 *
 * Function : lua_copy
 * Address  : 0810de98
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_copy(lua_State *L,int fromidx,int toidx)

{
  TValue *pTVar1;
  TValue *o_1;
  global_State *pgVar2;
  TValue *o;
  TValue *pTVar3;
  int iVar4;
  lua_CFunction p_Var5;
  CClosure *func;
  StkId pTVar6;
  CallInfo *pCVar7;
  CallInfo *ci;
  CallInfo *ci_1;
  CClosure *func_1;
  
  pCVar7 = L->ci;
  if (fromidx < 1) {
    if (fromidx < -0xf4627) {
      if (fromidx == -0xf4628) {
        pTVar3 = &L->l_G->l_registry;
      }
      else if ((pCVar7->func->tt_ == 0x16) ||
              (p_Var5 = (pCVar7->func->value_).f, (int)(uint)(byte)p_Var5[6] < -0xf4628 - fromidx))
      {
        pTVar3 = &luaO_nilobject_;
      }
      else {
        pTVar3 = (TValue *)(p_Var5 + (-0xf4627 - fromidx) * 8);
      }
    }
    else {
      pTVar3 = L->top + fromidx;
    }
  }
  else {
    pTVar3 = pCVar7->func + fromidx;
    if (L->top <= pCVar7->func + fromidx) {
      pTVar3 = &luaO_nilobject_;
    }
  }
  if (toidx < 1) {
    if (-0xf4628 < toidx) {
      pTVar6 = L->top;
      iVar4 = pTVar3->tt_;
      pTVar6[toidx].value_ = pTVar3->value_;
      pTVar6[toidx].tt_ = iVar4;
      return;
    }
    if (toidx == -0xf4628) {
      pgVar2 = L->l_G;
      iVar4 = pTVar3->tt_;
      (pgVar2->l_registry).value_ = pTVar3->value_;
      (pgVar2->l_registry).tt_ = iVar4;
    }
    else {
      pTVar6 = pCVar7->func;
      if ((pTVar6->tt_ == 0x16) || ((int)(uint)(byte)(pTVar6->value_).f[6] < -0xf4628 - toidx)) {
        pTVar1 = &luaO_nilobject_;
      }
      else {
        pTVar1 = (TValue *)((pTVar6->value_).f + (-0xf4627 - toidx) * 8);
      }
      iVar4 = pTVar3->tt_;
      pTVar1->value_ = pTVar3->value_;
      pTVar1->tt_ = iVar4;
      if ((((toidx < -0xf4628) && ((pTVar3->tt_ & 0x40U) != 0)) &&
          ((((pTVar6->value_).gc)->marked & 4) != 0)) && ((((pTVar3->value_).gc)->marked & 3) != 0))
      {
        luaC_barrier_(L,(pTVar6->value_).gc,(pTVar3->value_).gc);
        return;
      }
    }
  }
  else {
    iVar4 = pTVar3->tt_;
    pTVar6 = pCVar7->func + toidx;
    if (L->top <= pCVar7->func + toidx) {
      pTVar6 = &luaO_nilobject_;
    }
    pTVar6->value_ = pTVar3->value_;
    pTVar6->tt_ = iVar4;
  }
  return;
}


