/*
 * Ghidra decompilation
 *
 * Function : lua_rawequal
 * Address  : 0810e5cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_rawequal(lua_State *L,int index1,int index2)

{
  int iVar1;
  TValue *o;
  TValue *t1;
  TValue *o_1;
  TValue *t2;
  lua_CFunction p_Var2;
  CClosure *func_1;
  CClosure *func;
  CallInfo *pCVar3;
  CallInfo *ci;
  CallInfo *ci_1;
  
  pCVar3 = L->ci;
  if (index1 < 1) {
    if (index1 < -0xf4627) {
      if (index1 == -0xf4628) {
        t1 = &L->l_G->l_registry;
      }
      else if ((pCVar3->func->tt_ == 0x16) ||
              (p_Var2 = (pCVar3->func->value_).f, (int)(uint)(byte)p_Var2[6] < -0xf4628 - index1)) {
        t1 = &luaO_nilobject_;
      }
      else {
        t1 = (TValue *)(p_Var2 + (-0xf4627 - index1) * 8);
      }
    }
    else {
      t1 = L->top + index1;
    }
  }
  else {
    t1 = pCVar3->func + index1;
    if (L->top <= pCVar3->func + index1) {
      t1 = &luaO_nilobject_;
    }
  }
  if (index2 < 1) {
    if (index2 < -0xf4627) {
      if (index2 == -0xf4628) {
        t2 = &L->l_G->l_registry;
      }
      else {
        if (pCVar3->func->tt_ == 0x16) {
          return 0;
        }
        p_Var2 = (pCVar3->func->value_).f;
        if ((int)(uint)(byte)p_Var2[6] < -0xf4628 - index2) {
          return 0;
        }
        t2 = (TValue *)(p_Var2 + (-0xf4627 - index2) * 8);
      }
    }
    else {
      t2 = L->top + index2;
    }
  }
  else {
    t2 = pCVar3->func + index2;
    if (L->top <= t2) {
      return 0;
    }
  }
  if (t2 == &luaO_nilobject_ || t1 == &luaO_nilobject_) {
    return 0;
  }
  iVar1 = luaV_equalobj((lua_State *)0x0,t1,t2);
  return iVar1;
}


