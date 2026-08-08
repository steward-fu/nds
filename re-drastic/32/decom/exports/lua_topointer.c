/*
 * Ghidra decompilation
 *
 * Function : lua_topointer
 * Address  : 0810f1b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * lua_topointer(lua_State *L,int idx)

{
  uint uVar1;
  CallInfo *ci;
  TValue *o;
  StkId pTVar2;
  TValue *pTVar3;
  lua_CFunction p_Var4;
  CClosure *func;
  CClosure *func_1;
  
  if (idx < 1) {
    if (-0xf4628 < idx) {
      pTVar3 = L->top + idx;
      uVar1 = pTVar3->tt_;
      switch(pTVar3->tt_ & 0x3f) {
      case 2:
      case 7:
        goto switchD_0810f298_caseD_2;
      default:
        goto switchD_0810f298_caseD_3;
      case 5:
      case 6:
      case 8:
      case 0x16:
      case 0x26:
        goto switchD_0810f298_caseD_5;
      }
    }
    if (idx == -0xf4628) {
      uVar1 = (L->l_G->l_registry).tt_;
      pTVar3 = &L->l_G->l_registry;
      switch(uVar1 & 0x3f) {
      case 2:
      case 7:
        goto switchD_0810f298_caseD_2;
      default:
        goto switchD_0810f298_caseD_3;
      case 5:
      case 6:
      case 8:
      case 0x16:
      case 0x26:
        goto switchD_0810f298_caseD_5;
      }
    }
    pTVar2 = L->ci->func;
    if (pTVar2->tt_ != 0x16) {
      p_Var4 = (pTVar2->value_).f;
      if ((int)(uint)(byte)p_Var4[6] < -0xf4628 - idx) {
        pTVar3 = &luaO_nilobject_;
      }
      else {
        pTVar3 = (TValue *)(p_Var4 + (-0xf4627 - idx) * 8);
      }
      switch(pTVar3->tt_ & 0x3f) {
      case 2:
      case 7:
        goto switchD_0810f3b0_caseD_2;
      default:
        goto switchD_0810f298_caseD_3;
      case 5:
      case 6:
      case 8:
      case 0x16:
      case 0x26:
        goto switchD_0810f298_caseD_5;
      }
    }
  }
  else {
    pTVar3 = L->ci->func + idx;
    if (pTVar3 < L->top) {
      uVar1 = pTVar3->tt_;
      switch(pTVar3->tt_ & 0x3f) {
      case 2:
      case 7:
        goto switchD_0810f298_caseD_2;
      default:
        goto switchD_0810f298_caseD_3;
      case 5:
      case 6:
      case 8:
      case 0x16:
      case 0x26:
        goto switchD_0810f298_caseD_5;
      }
    }
  }
  switch(luaO_nilobject_.tt_ & 0x3f) {
  case 2:
  case 7:
    goto LAB_0810f500;
  default:
    goto switchD_0810f298_caseD_3;
  case 5:
  case 6:
  case 8:
  case 0x16:
  case 0x26:
    pTVar3 = &luaO_nilobject_;
    goto switchD_0810f298_caseD_5;
  }
switchD_0810f3b0_caseD_2:
  if ((int)(uint)(byte)p_Var4[6] < -0xf4628 - idx) {
LAB_0810f500:
    pTVar3 = &luaO_nilobject_;
    uVar1 = luaO_nilobject_.tt_;
  }
  else {
    pTVar3 = (TValue *)(p_Var4 + (-0xf4627 - idx) * 8);
    uVar1 = pTVar3->tt_;
  }
switchD_0810f298_caseD_2:
  if ((uVar1 & 0xf) != 2) {
    if ((uVar1 & 0xf) == 7) {
      return (pTVar3->value_).f + 0x18;
    }
switchD_0810f298_caseD_3:
    return (void *)0x0;
  }
switchD_0810f298_caseD_5:
  return (pTVar3->value_).gc;
}


