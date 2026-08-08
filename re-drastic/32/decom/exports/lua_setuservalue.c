/*
 * Ghidra decompilation
 *
 * Function : lua_setuservalue
 * Address  : 08110bb0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_setuservalue(lua_State *L,int idx)

{
  lua_CFunction p_Var1;
  Udata *iu;
  TValue *o;
  TValue *pTVar2;
  StkId pTVar3;
  Value VVar4;
  CallInfo *ci;
  CClosure *func;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar3 = L->top;
        pTVar2 = &L->l_G->l_registry;
      }
      else {
        pTVar3 = L->ci->func;
        if ((pTVar3->tt_ == 0x16) ||
           (p_Var1 = (pTVar3->value_).f, (int)(uint)(byte)p_Var1[6] < -0xf4628 - idx)) {
          pTVar3 = L->top;
          pTVar2 = &luaO_nilobject_;
        }
        else {
          pTVar3 = L->top;
          pTVar2 = (TValue *)(p_Var1 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar3 = L->top;
      pTVar2 = pTVar3 + idx;
    }
  }
  else {
    pTVar3 = L->top;
    pTVar2 = L->ci->func + idx;
    if (pTVar3 <= pTVar2) {
      pTVar2 = &luaO_nilobject_;
    }
  }
  VVar4 = pTVar3[-1].value_;
  p_Var1 = (pTVar2->value_).f;
  p_Var1[6] = SUB41(pTVar3[-1].tt_,0);
  pTVar3 = L->top;
  *(Value *)(p_Var1 + 0x10) = VVar4;
  if ((((pTVar3[-1].tt_ & 0x40U) != 0) && ((((pTVar2->value_).gc)->marked & 4) != 0)) &&
     (((pTVar3[-1].value_.gc)->marked & 3) != 0)) {
    luaC_barrier_(L,(pTVar2->value_).gc,pTVar3[-1].value_.gc);
    pTVar3 = L->top;
  }
  L->top = pTVar3 + -1;
  return;
}


