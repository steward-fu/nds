/*
 * Ghidra decompilation
 *
 * Function : lua_tonumberx
 * Address  : 0810e980
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Number lua_tonumberx(lua_State *L,int idx,int *pisnum)

{
  int iVar1;
  TValue *o;
  int iVar2;
  int isnum;
  lua_CFunction p_Var3;
  CClosure *func;
  TValue *obj;
  CallInfo *ci;
  StkId pTVar4;
  lua_Number n;
  GCObject *local_18;
  int local_14;
  
  local_14 = __stack_chk_guard;
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        obj = &L->l_G->l_registry;
      }
      else {
        pTVar4 = L->ci->func;
        if ((pTVar4->tt_ == 0x16) ||
           (p_Var3 = (pTVar4->value_).f, (int)(uint)(byte)p_Var3[6] < -0xf4628 - idx)) {
          obj = &luaO_nilobject_;
        }
        else {
          obj = (TValue *)(p_Var3 + (-0xf4627 - idx) * 8);
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
    local_18 = (obj->value_).gc;
    iVar2 = 1;
  }
  else {
    iVar2 = luaV_tonumber_(obj,(lua_Number *)&local_18);
    if (iVar2 == 0) {
      local_18 = (GCObject *)0x0;
    }
  }
  iVar1 = __stack_chk_guard;
  if (pisnum != (int *)0x0) {
    *pisnum = iVar2;
  }
  if (local_14 == iVar1) {
    return (lua_Number)local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


