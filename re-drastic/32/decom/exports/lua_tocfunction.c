/*
 * Ghidra decompilation
 *
 * Function : lua_tocfunction
 * Address  : 0810ef54
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_CFunction lua_tocfunction(lua_State *L,int idx)

{
  lua_CFunction p_Var1;
  TValue *o;
  TValue *pTVar2;
  CallInfo *ci;
  int iVar3;
  StkId pTVar4;
  CClosure *func;
  
  if (idx < 1) {
    if (-0xf4628 < idx) {
      pTVar2 = L->top + idx;
      iVar3 = pTVar2->tt_;
      goto joined_r0x0810f004;
    }
    if (idx == -0xf4628) {
      pTVar2 = &L->l_G->l_registry;
    }
    else {
      pTVar4 = L->ci->func;
      if ((pTVar4->tt_ == 0x16) ||
         (p_Var1 = (pTVar4->value_).f, (int)(uint)(byte)p_Var1[6] < -0xf4628 - idx)) {
        pTVar2 = &luaO_nilobject_;
      }
      else {
        pTVar2 = (TValue *)(p_Var1 + (-0xf4627 - idx) * 8);
      }
    }
  }
  else {
    pTVar2 = L->ci->func + idx;
    if (L->top <= pTVar2) {
      pTVar2 = &luaO_nilobject_;
    }
  }
  iVar3 = pTVar2->tt_;
joined_r0x0810f004:
  if (iVar3 != 0x16) {
    if (iVar3 == 0x66) {
      p_Var1 = *(lua_CFunction *)((pTVar2->value_).f + 0xc);
    }
    else {
      p_Var1 = (lua_CFunction)0x0;
    }
    return p_Var1;
  }
  return (lua_CFunction)(pTVar2->value_).gc;
}


