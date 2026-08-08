/*
 * Ghidra decompilation
 *
 * Function : lua_isnumber
 * Address  : 0810e354
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_isnumber(lua_State *L,int idx)

{
  TValue *o;
  int iVar1;
  lua_CFunction p_Var2;
  CClosure *func;
  TValue *obj;
  CallInfo *ci;
  StkId pTVar3;
  lua_Number n;
  int local_c;
  
  local_c = __stack_chk_guard;
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        obj = &L->l_G->l_registry;
      }
      else {
        pTVar3 = L->ci->func;
        if ((pTVar3->tt_ == 0x16) ||
           (p_Var2 = (pTVar3->value_).f, (int)(uint)(byte)p_Var2[6] < -0xf4628 - idx)) {
          obj = &luaO_nilobject_;
        }
        else {
          obj = (TValue *)(p_Var2 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      obj = L->top + idx;
    }
  }
  else {
    obj = L->ci->func + idx;
    if (L->top <= obj) {
      obj = &luaO_nilobject_;
    }
  }
  if (obj->tt_ == 3) {
    iVar1 = 1;
  }
  else {
    iVar1 = luaV_tonumber_(obj,&n);
  }
  if (local_c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


