/*
 * Ghidra decompilation
 *
 * Function : lua_tolstring
 * Address  : 0810ec8c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * lua_tolstring(lua_State *L,int idx,size_t *len)

{
  CallInfo *pCVar1;
  CallInfo *ci;
  uint uVar2;
  TValue *o_1;
  TValue *o_2;
  StkId o;
  CClosure *func;
  lua_CFunction p_Var3;
  CClosure *func_1;
  TValue *obj;
  
  pCVar1 = L->ci;
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        o = &L->l_G->l_registry;
      }
      else if ((pCVar1->func->tt_ == 0x16) ||
              (p_Var3 = (pCVar1->func->value_).f, (int)(uint)(byte)p_Var3[6] < -0xf4628 - idx)) {
        o = &luaO_nilobject_;
      }
      else {
        o = (StkId)(p_Var3 + (-0xf4627 - idx) * 8);
      }
    }
    else {
      o = L->top + idx;
    }
  }
  else {
    o = pCVar1->func + idx;
    if (L->top <= o) {
      o = &luaO_nilobject_;
    }
  }
  uVar2 = o->tt_ & 0xf;
  if (uVar2 != 4) {
    if (uVar2 != 3) {
      if (len != (size_t *)0x0) {
        *len = 0;
        return (char *)0x0;
      }
      return (char *)0x0;
    }
    if (0 < L->l_G->GCdebt) {
      luaC_step(L);
      pCVar1 = L->ci;
    }
    if (idx < 1) {
      if (idx < -0xf4627) {
        if (idx == -0xf4628) {
          obj = &L->l_G->l_registry;
        }
        else if ((pCVar1->func->tt_ == 0x16) ||
                (p_Var3 = (pCVar1->func->value_).f, (int)(uint)(byte)p_Var3[6] < -0xf4628 - idx)) {
          obj = &luaO_nilobject_;
        }
        else {
          obj = (TValue *)(p_Var3 + (-0xf4627 - idx) * 8);
        }
      }
      else {
        obj = L->top + idx;
      }
    }
    else {
      obj = pCVar1->func + idx;
      if (L->top <= pCVar1->func + idx) {
        obj = &luaO_nilobject_;
      }
    }
    luaO_tostring(L,obj);
    o = obj;
  }
  if (len != (size_t *)0x0) {
    *len = *(size_t *)((o->value_).f + 0xc);
  }
  return (char *)((o->value_).f + 0x18);
}


