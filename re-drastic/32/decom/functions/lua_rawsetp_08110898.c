/*
 * Ghidra decompilation
 *
 * Function : lua_rawsetp
 * Address  : 08110898
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_rawsetp(lua_State *L,int idx,void *p)

{
  int iVar1;
  TValue *pTVar2;
  TValue *io1;
  TValue *o;
  CallInfo *ci;
  StkId pTVar3;
  lua_CFunction p_Var4;
  CClosure *func;
  Table *t_00;
  Table *t;
  int iVar5;
  TValue k;
  
  iVar1 = __stack_chk_guard;
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar2 = &L->l_G->l_registry;
      }
      else {
        pTVar3 = L->ci->func;
        if ((pTVar3->tt_ == 0x16) ||
           (p_Var4 = (pTVar3->value_).f, (int)(uint)(byte)p_Var4[6] < -0xf4628 - idx)) {
          pTVar2 = &luaO_nilobject_;
        }
        else {
          pTVar2 = (TValue *)(p_Var4 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar2 = L->top + idx;
    }
  }
  else {
    pTVar2 = L->ci->func + idx;
    if (L->top <= pTVar2) {
      pTVar2 = &luaO_nilobject_;
    }
  }
  t_00 = (Table *)(pTVar2->value_).gc;
  k.tt_ = 2;
  k.value_.p = p;
  pTVar2 = luaH_set(L,t_00,&k);
  pTVar3 = L->top;
  iVar5 = pTVar3[-1].tt_;
  pTVar2->value_ = pTVar3[-1].value_;
  pTVar2->tt_ = iVar5;
  if ((((pTVar3[-1].tt_ & 0x40U) != 0) && ((t_00->marked & 4) != 0)) &&
     (((pTVar3[-1].value_.gc)->marked & 3) != 0)) {
    luaC_barrierback_(L,t_00);
    pTVar3 = L->top;
  }
  iVar5 = __stack_chk_guard;
  L->top = pTVar3 + -1;
  if (iVar1 == iVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


