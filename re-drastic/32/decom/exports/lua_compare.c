/*
 * Ghidra decompilation
 *
 * Function : lua_compare
 * Address  : 0810e7a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_compare(lua_State *L,int index1,int index2,int op)

{
  int iVar1;
  TValue *o;
  TValue *l;
  TValue *o_1;
  TValue *r;
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
        l = &L->l_G->l_registry;
      }
      else if ((pCVar3->func->tt_ == 0x16) ||
              (p_Var2 = (pCVar3->func->value_).f, (int)(uint)(byte)p_Var2[6] < -0xf4628 - index1)) {
        l = &luaO_nilobject_;
      }
      else {
        l = (TValue *)(p_Var2 + (-0xf4627 - index1) * 8);
      }
    }
    else {
      l = L->top + index1;
    }
  }
  else {
    l = pCVar3->func + index1;
    if (L->top <= pCVar3->func + index1) {
      l = &luaO_nilobject_;
    }
  }
  if (index2 < 1) {
    if (index2 < -0xf4627) {
      if (index2 == -0xf4628) {
        r = &L->l_G->l_registry;
      }
      else {
        if (pCVar3->func->tt_ == 0x16) {
          return 0;
        }
        p_Var2 = (pCVar3->func->value_).f;
        if ((int)(uint)(byte)p_Var2[6] < -0xf4628 - index2) {
          return 0;
        }
        r = (TValue *)(p_Var2 + (-0xf4627 - index2) * 8);
      }
    }
    else {
      r = L->top + index2;
    }
  }
  else {
    r = pCVar3->func + index2;
    if (L->top <= r) {
      return 0;
    }
  }
  if (r != &luaO_nilobject_ && l != &luaO_nilobject_) {
    if (op == 1) {
      iVar1 = luaV_lessthan(L,l,r);
      return iVar1;
    }
    if (op == 2) {
      iVar1 = luaV_lessequal(L,l,r);
      return iVar1;
    }
    if (op == 0) {
      iVar1 = luaV_equalobj(L,l,r);
      return iVar1;
    }
  }
  return 0;
}


