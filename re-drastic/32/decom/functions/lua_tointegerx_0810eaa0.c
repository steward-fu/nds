/*
 * Ghidra decompilation
 *
 * Function : lua_tointegerx
 * Address  : 0810eaa0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Integer lua_tointegerx(lua_State *L,int idx,int *pisnum)

{
  TValue *o;
  int iVar1;
  int isnum;
  lua_Integer res;
  lua_CFunction p_Var2;
  CClosure *func;
  TValue *obj;
  CallInfo *ci;
  StkId pTVar3;
  GCObject *pGStack_18;
  int local_14;
  
  local_14 = __stack_chk_guard;
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
  if (obj->tt_ == 0x13) {
    iVar1 = 1;
    pGStack_18 = (obj->value_).gc;
  }
  else {
    iVar1 = luaV_tointeger_(obj,(lua_Integer *)&pGStack_18);
    if (iVar1 == 0) {
      pGStack_18 = (GCObject *)0x0;
    }
  }
  if (pisnum != (int *)0x0) {
    *pisnum = iVar1;
  }
  if (local_14 == __stack_chk_guard) {
    return (lua_Integer)pGStack_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


