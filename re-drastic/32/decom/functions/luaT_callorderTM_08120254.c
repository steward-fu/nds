/*
 * Ghidra decompilation
 *
 * Function : luaT_callorderTM
 * Address  : 08120254
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaT_callorderTM(lua_State *L,TValue *p1,TValue *p2,TMS event)

{
  Table *mt;
  TValue *tm;
  GCObject *pGVar1;
  Table *mt_1;
  StkId pTVar2;
  Value VVar3;
  uint uVar4;
  StkId pTVar5;
  TValue *io1;
  ptrdiff_t result;
  Value VVar6;
  StkId pTVar7;
  Value *pVVar8;
  TValue *io1_1;
  int iVar9;
  CallInfo *pCVar10;
  
  pTVar7 = L->top;
  uVar4 = p1->tt_ & 0xf;
  if (uVar4 == 5) {
    mt = *(Table **)((p1->value_).f + 0x18);
LAB_081202a0:
    if (mt != (Table *)0x0) goto LAB_081202a8;
LAB_08120374:
    tm = &luaO_nilobject_;
    if (luaO_nilobject_.tt_ != 0) goto LAB_081202c4;
  }
  else {
    if (uVar4 != 7) {
      mt = L->l_G->mt[uVar4];
      goto LAB_081202a0;
    }
    mt = *(Table **)((p1->value_).f + 8);
    if (mt == (Table *)0x0) goto LAB_08120374;
LAB_081202a8:
    tm = luaH_getstr(mt,L->l_G->tmname[event]);
    if (tm->tt_ != 0) goto LAB_081202c4;
  }
  uVar4 = p2->tt_ & 0xf;
  if (uVar4 == 5) {
    mt_1 = *(Table **)((p2->value_).f + 0x18);
  }
  else if (uVar4 == 7) {
    mt_1 = *(Table **)((p2->value_).f + 8);
  }
  else {
    mt_1 = L->l_G->mt[uVar4];
  }
  if (mt_1 == (Table *)0x0) {
    tm = &luaO_nilobject_;
  }
  else {
    tm = luaH_getstr(mt_1,L->l_G->tmname[event]);
  }
  if (tm->tt_ == 0) {
    return -1;
  }
LAB_081202c4:
  pTVar5 = L->top;
  iVar9 = tm->tt_;
  pCVar10 = L->ci;
  pTVar2 = L->stack;
  pTVar5->value_ = tm->value_;
  pTVar5->tt_ = iVar9;
  iVar9 = p1->tt_;
  pTVar5[1].value_ = p1->value_;
  pTVar5[1].tt_ = iVar9;
  VVar6 = p2->value_;
  iVar9 = p2->tt_;
  L->top = pTVar5 + 3;
  pTVar5[2].value_ = VVar6;
  pTVar5[2].tt_ = iVar9;
  luaD_call(L,pTVar5,1,pCVar10->callstatus & 2);
  pTVar5 = L->top;
  VVar6 = pTVar5[-1].value_;
  VVar3 = (Value)pTVar5[-1].tt_;
  pVVar8 = (Value *)((int)L->stack + ((int)pTVar7 - (int)pTVar2));
  L->top = pTVar5 + -1;
  *pVVar8 = VVar6;
  pVVar8[1] = VVar3;
  pGVar1 = (GCObject *)pTVar5[-1].tt_;
  if (pGVar1 != (GCObject *)0x0) {
    if (pGVar1 == (GCObject *)0x1) {
      pGVar1 = pTVar5[-1].value_.gc;
      if (pGVar1 != (GCObject *)0x0) {
        pGVar1 = (GCObject *)0x1;
      }
    }
    else {
      pGVar1 = (GCObject *)0x1;
    }
  }
  return (int)pGVar1;
}


