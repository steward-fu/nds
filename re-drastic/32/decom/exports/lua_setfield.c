/*
 * Ghidra decompilation
 *
 * Function : lua_setfield
 * Address  : 0811040c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_setfield(lua_State *L,int idx,char *k)

{
  TString *pTVar1;
  TString *x_;
  StkId pTVar2;
  CallInfo *ci;
  TValue *o;
  lua_CFunction p_Var3;
  CClosure *func;
  TValue *t;
  StkId pTVar4;
  
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar4 = L->top;
        t = &L->l_G->l_registry;
      }
      else {
        pTVar4 = L->ci->func;
        if ((pTVar4->tt_ == 0x16) ||
           (p_Var3 = (pTVar4->value_).f, (int)(uint)(byte)p_Var3[6] < -0xf4628 - idx)) {
          pTVar4 = L->top;
          t = &luaO_nilobject_;
        }
        else {
          pTVar4 = L->top;
          t = (TValue *)(p_Var3 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar4 = L->top;
      t = pTVar4 + idx;
    }
  }
  else {
    pTVar4 = L->top;
    pTVar2 = L->ci->func + idx;
    t = &luaO_nilobject_;
    if (pTVar2 < pTVar4) {
      t = pTVar2;
    }
  }
  L->top = pTVar4 + 1;
  pTVar1 = luaS_new(L,k);
  (pTVar4->value_).gc = (GCObject *)pTVar1;
  pTVar2 = L->top;
  pTVar4->tt_ = pTVar1->tt | 0x40;
  luaV_settable(L,t,pTVar2 + -1,pTVar2 + -2);
  L->top = L->top + -2;
  return;
}


