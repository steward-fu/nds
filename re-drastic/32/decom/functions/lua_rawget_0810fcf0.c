/*
 * Ghidra decompilation
 *
 * Function : lua_rawget
 * Address  : 0810fcf0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_rawget(lua_State *L,int idx)

{
  TValue *pTVar1;
  TValue *o;
  int iVar2;
  CallInfo *ci;
  StkId pTVar3;
  lua_CFunction p_Var4;
  CClosure *func;
  StkId pTVar5;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar5 = L->top;
        pTVar1 = &L->l_G->l_registry;
      }
      else {
        pTVar5 = L->ci->func;
        if ((pTVar5->tt_ == 0x16) ||
           (p_Var4 = (pTVar5->value_).f, (int)(uint)(byte)p_Var4[6] < -0xf4628 - idx)) {
          pTVar5 = L->top;
          pTVar1 = &luaO_nilobject_;
        }
        else {
          pTVar5 = L->top;
          pTVar1 = (TValue *)(p_Var4 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar5 = L->top;
      pTVar1 = pTVar5 + idx;
    }
  }
  else {
    pTVar5 = L->top;
    pTVar1 = L->ci->func + idx;
    if (pTVar5 <= pTVar1) {
      pTVar1 = &luaO_nilobject_;
    }
  }
  pTVar1 = luaH_get((Table *)(pTVar1->value_).gc,pTVar5 + -1);
  iVar2 = pTVar1->tt_;
  pTVar3 = L->top;
  pTVar5[-1].value_ = pTVar1->value_;
  pTVar5[-1].tt_ = iVar2;
  return pTVar3[-1].tt_ & 0xf;
}


