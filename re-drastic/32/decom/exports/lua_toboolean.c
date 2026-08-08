/*
 * Ghidra decompilation
 *
 * Function : lua_toboolean
 * Address  : 0810ebbc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_toboolean(lua_State *L,int idx)

{
  int iVar1;
  GCObject *pGVar2;
  TValue *o;
  TValue *pTVar3;
  CallInfo *ci;
  StkId pTVar4;
  lua_CFunction p_Var5;
  CClosure *func;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar3 = &L->l_G->l_registry;
      }
      else {
        pTVar4 = L->ci->func;
        if ((pTVar4->tt_ == 0x16) ||
           (p_Var5 = (pTVar4->value_).f, (int)(uint)(byte)p_Var5[6] < -0xf4628 - idx)) {
          pTVar3 = &luaO_nilobject_;
        }
        else {
          pTVar3 = (TValue *)(p_Var5 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar3 = L->top + idx;
    }
  }
  else {
    pTVar3 = L->ci->func + idx;
    if (L->top <= pTVar3) {
      pTVar3 = &luaO_nilobject_;
    }
  }
  iVar1 = pTVar3->tt_;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pGVar2 = (pTVar3->value_).gc;
      if (pGVar2 != (GCObject *)0x0) {
        pGVar2 = (GCObject *)0x1;
      }
      return (int)pGVar2;
    }
    iVar1 = 1;
  }
  return iVar1;
}


