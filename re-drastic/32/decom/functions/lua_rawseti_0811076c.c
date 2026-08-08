/*
 * Ghidra decompilation
 *
 * Function : lua_rawseti
 * Address  : 0811076c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_rawseti(lua_State *L,int idx,lua_Integer n)

{
  lua_CFunction p_Var1;
  CClosure *func;
  TValue *o;
  TValue *pTVar2;
  CallInfo *ci;
  StkId pTVar3;
  Table *t_00;
  Table *t;
  
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
  t_00 = (Table *)(pTVar2->value_).gc;
  luaH_setint(L,t_00,n,pTVar3 + -1);
  pTVar3 = L->top;
  if ((((pTVar3[-1].tt_ & 0x40U) != 0) && ((t_00->marked & 4) != 0)) &&
     (((pTVar3[-1].value_.gc)->marked & 3) != 0)) {
    luaC_barrierback_(L,t_00);
    pTVar3 = L->top;
  }
  L->top = pTVar3 + -1;
  return;
}


