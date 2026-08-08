/*
 * Ghidra decompilation
 *
 * Function : lua_upvalueid
 * Address  : 08111884
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * lua_upvalueid(lua_State *L,int fidx,int n)

{
  TValue *o;
  CClosure **f;
  TValue *pTVar1;
  CallInfo *ci;
  uint uVar2;
  StkId pTVar3;
  lua_CFunction p_Var4;
  CClosure *func;
  
  if (fidx < 1) {
    if (fidx < -0xf4627) {
      if (fidx == -0xf4628) {
        pTVar1 = &L->l_G->l_registry;
      }
      else {
        pTVar3 = L->ci->func;
        if ((pTVar3->tt_ == 0x16) ||
           (p_Var4 = (pTVar3->value_).f, (int)(uint)(byte)p_Var4[6] < -0xf4628 - fidx)) {
          pTVar1 = &luaO_nilobject_;
        }
        else {
          pTVar1 = (TValue *)(p_Var4 + (-0xf4627 - fidx) * 8);
        }
      }
    }
    else {
      pTVar1 = L->top + fidx;
    }
  }
  else {
    pTVar1 = L->ci->func + fidx;
    if (L->top <= pTVar1) {
      pTVar1 = &luaO_nilobject_;
    }
  }
  uVar2 = pTVar1->tt_ & 0x3f;
  if (uVar2 != 6) {
    if (uVar2 != 0x26) {
      return (void *)0x0;
    }
    return (pTVar1->value_).gc + n + 1;
  }
  return *(void **)(&(pTVar1->value_).gc[1].tt + n * 4);
}


