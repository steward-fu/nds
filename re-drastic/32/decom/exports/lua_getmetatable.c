/*
 * Ghidra decompilation
 *
 * Function : lua_getmetatable
 * Address  : 081100a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_getmetatable(lua_State *L,int objindex)

{
  TValue *o;
  TValue *pTVar1;
  StkId pTVar2;
  TValue *io;
  CallInfo *ci;
  uint uVar3;
  Table *pTVar4;
  Table *mt;
  Table *x_;
  StkId pTVar5;
  lua_CFunction p_Var6;
  CClosure *func;
  
  if (objindex < 1) {
    if (objindex < -0xf4627) {
      if (objindex == -0xf4628) {
        pTVar1 = &L->l_G->l_registry;
      }
      else {
        pTVar2 = L->ci->func;
        if ((pTVar2->tt_ == 0x16) ||
           (p_Var6 = (pTVar2->value_).f, (int)(uint)(byte)p_Var6[6] < -0xf4628 - objindex)) {
          pTVar1 = &luaO_nilobject_;
        }
        else {
          pTVar1 = (TValue *)(p_Var6 + (-0xf4627 - objindex) * 8);
        }
      }
    }
    else {
      pTVar1 = L->top + objindex;
    }
  }
  else {
    pTVar1 = L->ci->func + objindex;
    if (L->top <= pTVar1) {
      pTVar1 = &luaO_nilobject_;
    }
  }
  uVar3 = pTVar1->tt_ & 0xf;
  if (uVar3 == 5) {
    pTVar4 = *(Table **)((pTVar1->value_).f + 0x18);
  }
  else if (uVar3 == 7) {
    pTVar4 = *(Table **)((pTVar1->value_).f + 8);
  }
  else {
    pTVar4 = L->l_G->mt[uVar3];
  }
  if (pTVar4 == (Table *)0x0) {
    return 0;
  }
  pTVar2 = L->top;
  (pTVar2->value_).gc = (GCObject *)pTVar4;
  pTVar5 = L->top;
  pTVar2->tt_ = 0x45;
  L->top = pTVar5 + 1;
  return 1;
}


