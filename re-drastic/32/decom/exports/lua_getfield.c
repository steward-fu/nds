/*
 * Ghidra decompilation
 *
 * Function : lua_getfield
 * Address  : 0810fae0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_getfield(lua_State *L,int idx,char *k)

{
  TString *pTVar1;
  TString *x_;
  CallInfo *ci;
  StkId pTVar2;
  TValue *o;
  TValue *key;
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
  pTVar1 = luaS_new(L,k);
  (pTVar4->value_).gc = (GCObject *)pTVar1;
  key = L->top;
  pTVar4->tt_ = pTVar1->tt | 0x40;
  L->top = key + 1;
  luaV_gettable(L,t,key,key);
  return L->top[-1].tt_ & 0xf;
}


