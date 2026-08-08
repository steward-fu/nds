/*
 * Ghidra decompilation
 *
 * Function : lua_rawset
 * Address  : 08110624
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_rawset(lua_State *L,int idx)

{
  TValue *pTVar1;
  TValue *io1;
  TValue *o;
  StkId pTVar2;
  CallInfo *ci;
  lua_CFunction p_Var3;
  CClosure *func;
  Table *t_00;
  Table *t;
  int iVar4;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar2 = L->top;
        pTVar1 = &L->l_G->l_registry;
      }
      else {
        pTVar2 = L->ci->func;
        if ((pTVar2->tt_ == 0x16) ||
           (p_Var3 = (pTVar2->value_).f, (int)(uint)(byte)p_Var3[6] < -0xf4628 - idx)) {
          pTVar2 = L->top;
          pTVar1 = &luaO_nilobject_;
        }
        else {
          pTVar2 = L->top;
          pTVar1 = (TValue *)(p_Var3 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar2 = L->top;
      pTVar1 = pTVar2 + idx;
    }
  }
  else {
    pTVar2 = L->top;
    pTVar1 = L->ci->func + idx;
    if (pTVar2 <= pTVar1) {
      pTVar1 = &luaO_nilobject_;
    }
  }
  t_00 = (Table *)(pTVar1->value_).gc;
  pTVar1 = luaH_set(L,t_00,pTVar2 + -2);
  iVar4 = L->top[-1].tt_;
  pTVar1->value_ = L->top[-1].value_;
  pTVar1->tt_ = iVar4;
  t_00->flags = '\0';
  pTVar2 = L->top;
  if ((((pTVar2[-1].tt_ & 0x40U) != 0) && ((t_00->marked & 4) != 0)) &&
     (((pTVar2[-1].value_.gc)->marked & 3) != 0)) {
    luaC_barrierback_(L,t_00);
    pTVar2 = L->top;
  }
  L->top = pTVar2 + -2;
  return;
}


