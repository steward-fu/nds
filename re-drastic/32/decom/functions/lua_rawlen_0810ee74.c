/*
 * Ghidra decompilation
 *
 * Function : lua_rawlen
 * Address  : 0810ee74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

size_t lua_rawlen(lua_State *L,int idx)

{
  size_t sVar1;
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
  if (uVar3 != 5) {
    if ((uVar3 != 7) && (uVar3 != 4)) {
      return 0;
    }
    return *(size_t *)((pTVar2->value_).f + 0xc);
  }
  sVar1 = luaH_getn((Table *)(pTVar2->value_).gc);
  return sVar1;
}


