/*
 * Ghidra decompilation
 *
 * Function : lua_rawgeti
 * Address  : 0810fde0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_rawgeti(lua_State *L,int idx,lua_Integer n)

{
  TValue *pTVar1;
  uint uVar2;
  lua_CFunction p_Var3;
  CClosure *func;
  int iVar4;
  CallInfo *ci;
  TValue *o;
  StkId pTVar5;
  StkId pTVar6;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar6 = L->top;
        pTVar1 = &L->l_G->l_registry;
      }
      else {
        pTVar6 = L->ci->func;
        if ((pTVar6->tt_ == 0x16) ||
           (p_Var3 = (pTVar6->value_).f, (int)(uint)(byte)p_Var3[6] < -0xf4628 - idx)) {
          pTVar6 = L->top;
          pTVar1 = &luaO_nilobject_;
        }
        else {
          pTVar6 = L->top;
          pTVar1 = (TValue *)(p_Var3 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar6 = L->top;
      pTVar1 = pTVar6 + idx;
    }
  }
  else {
    pTVar6 = L->top;
    pTVar1 = L->ci->func + idx;
    if (pTVar6 <= pTVar1) {
      pTVar1 = &luaO_nilobject_;
    }
  }
  pTVar1 = luaH_getint((Table *)(pTVar1->value_).gc,n);
  iVar4 = pTVar1->tt_;
  pTVar5 = L->top;
  pTVar6->value_ = pTVar1->value_;
  pTVar6->tt_ = iVar4;
  uVar2 = pTVar5->tt_;
  L->top = pTVar5 + 1;
  return uVar2 & 0xf;
}


