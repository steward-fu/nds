/*
 * Ghidra decompilation
 *
 * Function : lua_getuservalue
 * Address  : 081101c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_getuservalue(lua_State *L,int idx)

{
  uint uVar1;
  TValue *o;
  TValue *pTVar2;
  StkId pTVar3;
  CallInfo *ci;
  lua_CFunction p_Var4;
  Udata *iu;
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
           (p_Var4 = (pTVar3->value_).f, (int)(uint)(byte)p_Var4[6] < -0xf4628 - idx)) {
          pTVar3 = L->top;
          pTVar2 = &luaO_nilobject_;
        }
        else {
          pTVar3 = L->top;
          pTVar2 = (TValue *)(p_Var4 + (-0xf4627 - idx) * 8);
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
  p_Var4 = (pTVar2->value_).f;
  pTVar3->value_ = *(Value *)(p_Var4 + 0x10);
  uVar1 = (uint)(byte)p_Var4[6];
  pTVar3->tt_ = uVar1;
  L->top = pTVar3 + 1;
  return uVar1 & 0xf;
}


