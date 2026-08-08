/*
 * Ghidra decompilation
 *
 * Function : lua_rotate
 * Address  : 0810dd08
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable p:StkId[r1:4] conflicts with parameter, skipped. */

void lua_rotate(lua_State *L,int idx,int n)

{
  StkId pTVar1;
  StkId pTVar2;
  TValue *o;
  TValue *pTVar3;
  StkId m;
  StkId pTVar4;
  StkId pTVar5;
  Value VVar6;
  int iVar7;
  StkId pTVar8;
  StkId t;
  int iVar9;
  CallInfo *ci;
  StkId pTVar10;
  lua_CFunction p_Var11;
  CClosure *func;
  TValue *io1;
  TValue *io1_1;
  TValue *io1_2;
  bool bVar12;
  TValue temp;
  
  pTVar5 = L->top;
  pTVar8 = pTVar5 + -1;
  if (idx < 1) {
    if (idx < -0xf4627) {
      if (idx == -0xf4628) {
        pTVar3 = &L->l_G->l_registry;
      }
      else {
        pTVar2 = L->ci->func;
        if ((pTVar2->tt_ == 0x16) ||
           (p_Var11 = (pTVar2->value_).f, (int)(uint)(byte)p_Var11[6] < -0xf4628 - idx)) {
          pTVar3 = &luaO_nilobject_;
        }
        else {
          pTVar3 = (TValue *)(p_Var11 + (-0xf4627 - idx) * 8);
        }
      }
    }
    else {
      pTVar3 = pTVar5 + idx;
    }
  }
  else {
    pTVar3 = L->ci->func + idx;
    if (pTVar5 <= pTVar3) {
      pTVar3 = &luaO_nilobject_;
    }
  }
  if (n < 0) {
    m = pTVar3 + -(n + 1);
  }
  else {
    m = pTVar8 + -n;
  }
  pTVar2 = m;
  pTVar4 = pTVar3;
  if (pTVar3 < m) {
    do {
      pTVar10 = pTVar4 + 1;
      pTVar1 = pTVar2 + -1;
      VVar6 = pTVar4->value_;
      iVar7 = pTVar4->tt_;
      iVar9 = pTVar2->tt_;
      pTVar4->value_ = pTVar2->value_;
      pTVar4->tt_ = iVar9;
      pTVar2->value_ = VVar6;
      pTVar2->tt_ = iVar7;
      pTVar2 = pTVar1;
      pTVar4 = pTVar10;
    } while (pTVar10 < pTVar1);
  }
  if (m + 1 < pTVar8) {
    pTVar2 = pTVar5 + -2;
    pTVar4 = m + 2;
    do {
      VVar6 = pTVar4[-1].value_;
      iVar7 = pTVar4[-1].tt_;
      bVar12 = pTVar4 < pTVar2;
      iVar9 = pTVar2[1].tt_;
      pTVar4[-1].value_ = pTVar2[1].value_;
      pTVar4[-1].tt_ = iVar9;
      pTVar2[1].value_ = VVar6;
      pTVar2[1].tt_ = iVar7;
      pTVar2 = pTVar2 + -1;
      pTVar4 = pTVar4 + 1;
    } while (bVar12);
  }
  if (pTVar3 < pTVar8) {
    pTVar5 = pTVar5 + -2;
    do {
      VVar6 = pTVar3->value_;
      iVar7 = pTVar3->tt_;
      bVar12 = pTVar3 + 1 < pTVar5;
      iVar9 = pTVar5[1].tt_;
      pTVar3->value_ = pTVar5[1].value_;
      pTVar3->tt_ = iVar9;
      pTVar5[1].value_ = VVar6;
      pTVar5[1].tt_ = iVar7;
      pTVar5 = pTVar5 + -1;
      pTVar3 = pTVar3 + 1;
    } while (bVar12);
  }
  return;
}


