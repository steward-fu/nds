/*
 * Ghidra decompilation
 *
 * Function : lua_touserdata
 * Address  : 0810f028
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * lua_touserdata(lua_State *L,int idx)

{
  code *pcVar1;
  TValue *o;
  TValue *pTVar2;
  CallInfo *ci;
  uint uVar3;
  StkId pTVar4;
  lua_CFunction p_Var5;
  CClosure *func;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar2 = &L->l_G->l_registry;
      }
      else {
        pTVar4 = L->ci->func;
        if ((pTVar4->tt_ == 0x16) ||
           (p_Var5 = (pTVar4->value_).f, (int)(uint)(byte)p_Var5[6] < -0xf4628 - idx)) {
          pTVar2 = &luaO_nilobject_;
        }
        else {
          pTVar2 = (TValue *)(p_Var5 + (-0xf4627 - idx) * 8);
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
  uVar3 = pTVar2->tt_ & 0xf;
  if (uVar3 == 2) {
    return (pTVar2->value_).gc;
  }
  if (uVar3 == 7) {
    pcVar1 = (pTVar2->value_).f + 0x18;
  }
  else {
    pcVar1 = (code *)0x0;
  }
  return pcVar1;
}


