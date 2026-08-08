/*
 * Ghidra decompilation
 *
 * Function : lua_rawgetp
 * Address  : 0810fed8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_rawgetp(lua_State *L,int idx,void *p)

{
  int iVar1;
  int iVar2;
  CallInfo *ci;
  TValue *pTVar3;
  uint uVar4;
  TValue *o;
  StkId pTVar5;
  lua_CFunction p_Var6;
  CClosure *func;
  StkId pTVar7;
  int iVar8;
  TValue k;
  
  iVar1 = __stack_chk_guard;
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar7 = L->top;
        pTVar3 = &L->l_G->l_registry;
      }
      else {
        pTVar7 = L->ci->func;
        if ((pTVar7->tt_ == 0x16) ||
           (p_Var6 = (pTVar7->value_).f, (int)(uint)(byte)p_Var6[6] < -0xf4628 - idx)) {
          pTVar7 = L->top;
          pTVar3 = &luaO_nilobject_;
        }
        else {
          pTVar7 = L->top;
          pTVar3 = (TValue *)(p_Var6 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar7 = L->top;
      pTVar3 = pTVar7 + idx;
    }
  }
  else {
    pTVar7 = L->top;
    pTVar5 = L->ci->func + idx;
    pTVar3 = &luaO_nilobject_;
    if (pTVar5 < pTVar7) {
      pTVar3 = pTVar5;
    }
  }
  k.tt_ = 2;
  k.value_.p = p;
  pTVar3 = luaH_get((Table *)(pTVar3->value_).gc,&k);
  iVar2 = __stack_chk_guard;
  iVar8 = pTVar3->tt_;
  pTVar5 = L->top;
  pTVar7->value_ = pTVar3->value_;
  pTVar7->tt_ = iVar8;
  uVar4 = pTVar5->tt_;
  L->top = pTVar5 + 1;
  if (iVar1 == iVar2) {
    return uVar4 & 0xf;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


