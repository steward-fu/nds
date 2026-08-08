/*
 * Ghidra decompilation
 *
 * Function : lua_setmetatable
 * Address  : 08110a04
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_setmetatable(lua_State *L,int objindex)

{
  uint uVar1;
  GCObject *o_00;
  CallInfo *ci;
  StkId pTVar2;
  TValue *o;
  lua_CFunction p_Var3;
  CClosure *func;
  TValue *pTVar4;
  Table *mt_00;
  Table *mt;
  
  if (objindex < 1) {
    if (objindex < -0xf4627) {
      if (objindex == -0xf4628) {
        pTVar2 = L->top;
        pTVar4 = &L->l_G->l_registry;
      }
      else {
        pTVar2 = L->ci->func;
        if ((pTVar2->tt_ == 0x16) ||
           (p_Var3 = (pTVar2->value_).f, (int)(uint)(byte)p_Var3[6] < -0xf4628 - objindex)) {
          pTVar2 = L->top;
          pTVar4 = &luaO_nilobject_;
        }
        else {
          pTVar2 = L->top;
          pTVar4 = (TValue *)(p_Var3 + (-0xf4627 - objindex) * 8);
        }
      }
    }
    else {
      pTVar2 = L->top;
      pTVar4 = pTVar2 + objindex;
    }
  }
  else {
    pTVar2 = L->top;
    pTVar4 = L->ci->func + objindex;
    if (pTVar2 <= pTVar4) {
      pTVar4 = &luaO_nilobject_;
    }
  }
  uVar1 = pTVar4->tt_;
  if (pTVar2[-1].tt_ == 0) {
    if ((uVar1 & 0xf) == 5) {
      *(undefined4 *)((pTVar4->value_).f + 0x18) = 0;
      pTVar2 = L->top;
      goto LAB_08110acc;
    }
    if ((uVar1 & 0xf) != 7) {
      mt_00 = (Table *)0x0;
      goto LAB_08110b08;
    }
    *(undefined4 *)((pTVar4->value_).f + 8) = 0;
  }
  else {
    mt_00 = (Table *)pTVar2[-1].value_.gc;
    if ((uVar1 & 0xf) == 5) {
      *(Table **)((pTVar4->value_).f + 0x18) = mt_00;
    }
    else {
      if ((uVar1 & 0xf) != 7) {
LAB_08110b08:
        L->l_G->mt[uVar1 & 0xf] = mt_00;
        goto LAB_08110acc;
      }
      *(Table **)((pTVar4->value_).f + 8) = mt_00;
    }
    if (mt_00 != (Table *)0x0) {
      o_00 = (pTVar4->value_).gc;
      if (((o_00->marked & 4) != 0) && ((mt_00->marked & 3) != 0)) {
        luaC_barrier_(L,o_00,(GCObject *)mt_00);
        o_00 = (pTVar4->value_).gc;
      }
      luaC_checkfinalizer(L,o_00,mt_00);
      pTVar2 = L->top;
      goto LAB_08110acc;
    }
  }
  pTVar2 = L->top;
LAB_08110acc:
  L->top = pTVar2 + -1;
  return 1;
}


