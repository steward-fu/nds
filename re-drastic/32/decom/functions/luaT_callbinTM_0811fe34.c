/*
 * Ghidra decompilation
 *
 * Function : luaT_callbinTM
 * Address  : 0811fe34
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaT_callbinTM(lua_State *L,TValue *p1,TValue *p2,StkId res,TMS event)

{
  Table *mt;
  TValue *tm;
  Table *mt_1;
  StkId pTVar1;
  Value VVar2;
  uint uVar3;
  StkId pTVar4;
  TValue *io1;
  ptrdiff_t result;
  Value VVar5;
  Value *pVVar6;
  TValue *io1_1;
  int iVar7;
  CallInfo *pCVar8;
  
  uVar3 = p1->tt_ & 0xf;
  if (uVar3 == 5) {
    mt = *(Table **)((p1->value_).f + 0x18);
LAB_0811fe80:
    if (mt != (Table *)0x0) goto LAB_0811fe88;
LAB_0811ff38:
    tm = &luaO_nilobject_;
    if (luaO_nilobject_.tt_ != 0) goto LAB_0811fea4;
  }
  else {
    if (uVar3 != 7) {
      mt = L->l_G->mt[uVar3];
      goto LAB_0811fe80;
    }
    mt = *(Table **)((p1->value_).f + 8);
    if (mt == (Table *)0x0) goto LAB_0811ff38;
LAB_0811fe88:
    tm = luaH_getstr(mt,L->l_G->tmname[event]);
    if (tm->tt_ != 0) goto LAB_0811fea4;
  }
  uVar3 = p2->tt_ & 0xf;
  if (uVar3 == 5) {
    mt_1 = *(Table **)((p2->value_).f + 0x18);
  }
  else if (uVar3 == 7) {
    mt_1 = *(Table **)((p2->value_).f + 8);
  }
  else {
    mt_1 = L->l_G->mt[uVar3];
  }
  if (mt_1 == (Table *)0x0) {
    tm = &luaO_nilobject_;
  }
  else {
    tm = luaH_getstr(mt_1,L->l_G->tmname[event]);
  }
  if (tm->tt_ == 0) {
    return 0;
  }
LAB_0811fea4:
  pTVar4 = L->top;
  iVar7 = tm->tt_;
  pCVar8 = L->ci;
  pTVar1 = L->stack;
  pTVar4->value_ = tm->value_;
  pTVar4->tt_ = iVar7;
  iVar7 = p1->tt_;
  pTVar4[1].value_ = p1->value_;
  pTVar4[1].tt_ = iVar7;
  VVar5 = p2->value_;
  iVar7 = p2->tt_;
  L->top = pTVar4 + 3;
  pTVar4[2].value_ = VVar5;
  pTVar4[2].tt_ = iVar7;
  luaD_call(L,pTVar4,1,pCVar8->callstatus & 2);
  pTVar4 = L->top;
  VVar5 = pTVar4[-1].value_;
  VVar2 = (Value)pTVar4[-1].tt_;
  pVVar6 = (Value *)((int)L->stack + ((int)res - (int)pTVar1));
  L->top = pTVar4 + -1;
  *pVVar6 = VVar5;
  pVVar6[1] = VVar2;
  return 1;
}


