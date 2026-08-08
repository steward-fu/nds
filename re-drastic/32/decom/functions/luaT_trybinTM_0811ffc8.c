/*
 * Ghidra decompilation
 *
 * Function : luaT_trybinTM
 * Address  : 0811ffc8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaT_trybinTM(lua_State *L,TValue *p1,TValue *p2,StkId res,TMS event)

{
  Table *mt;
  TValue *tm;
  Table *mt_1;
  TValue *io1;
  Value VVar1;
  uint uVar2;
  StkId pTVar3;
  StkId pTVar4;
  ptrdiff_t result;
  Value VVar5;
  Value *pVVar6;
  TValue *io1_1;
  int iVar7;
  CallInfo *pCVar8;
  lua_Number dummy;
  int local_2c;
  
  uVar2 = p1->tt_ & 0xf;
  local_2c = __stack_chk_guard;
  if (uVar2 == 5) {
    mt = *(Table **)((p1->value_).f + 0x18);
LAB_08120028:
    if (mt != (Table *)0x0) goto LAB_08120030;
LAB_081200ec:
    tm = &luaO_nilobject_;
    if (luaO_nilobject_.tt_ != 0) goto LAB_0812004c;
  }
  else {
    if (uVar2 != 7) {
      mt = L->l_G->mt[uVar2];
      goto LAB_08120028;
    }
    mt = *(Table **)((p1->value_).f + 8);
    if (mt == (Table *)0x0) goto LAB_081200ec;
LAB_08120030:
    tm = luaH_getstr(mt,L->l_G->tmname[event]);
    if (tm->tt_ != 0) goto LAB_0812004c;
  }
  uVar2 = p2->tt_ & 0xf;
  if (uVar2 == 5) {
    mt_1 = *(Table **)((p2->value_).f + 0x18);
  }
  else if (uVar2 == 7) {
    mt_1 = *(Table **)((p2->value_).f + 8);
  }
  else {
    mt_1 = L->l_G->mt[uVar2];
  }
  if (mt_1 == (Table *)0x0) {
    tm = &luaO_nilobject_;
  }
  else {
    tm = luaH_getstr(mt_1,L->l_G->tmname[event]);
  }
  if (tm->tt_ == 0) {
    switch(event) {
    case TM_BAND:
    case TM_BOR:
    case TM_BXOR:
    case TM_SHL:
    case TM_SHR:
    case TM_BNOT:
      goto switchD_0812014c_caseD_d;
    default:
                    /* WARNING: Subroutine does not return */
      luaG_opinterror(L,p1,p2,"perform arithmetic on");
    case TM_CONCAT:
                    /* WARNING: Subroutine does not return */
      luaG_concaterror(L,p1,p2);
    }
  }
LAB_0812004c:
  pTVar3 = L->top;
  iVar7 = tm->tt_;
  pCVar8 = L->ci;
  pTVar4 = L->stack;
  pTVar3->value_ = tm->value_;
  pTVar3->tt_ = iVar7;
  iVar7 = p1->tt_;
  pTVar3[1].value_ = p1->value_;
  pTVar3[1].tt_ = iVar7;
  VVar5 = p2->value_;
  iVar7 = p2->tt_;
  L->top = pTVar3 + 3;
  pTVar3[2].value_ = VVar5;
  pTVar3[2].tt_ = iVar7;
  luaD_call(L,pTVar3,1,pCVar8->callstatus & 2);
  iVar7 = __stack_chk_guard;
  pTVar3 = L->top;
  VVar5 = pTVar3[-1].value_;
  VVar1 = (Value)pTVar3[-1].tt_;
  pVVar6 = (Value *)((int)L->stack + ((int)res - (int)pTVar4));
  L->top = pTVar3 + -1;
  *pVVar6 = VVar5;
  pVVar6[1] = VVar1;
  if (local_2c != iVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
switchD_0812014c_caseD_d:
  if (p1->tt_ == 3) {
    dummy = (p1->value_).n;
  }
  else {
    iVar7 = luaV_tonumber_(p1,&dummy);
    if (iVar7 == 0) goto LAB_0812021c;
  }
  if (p2->tt_ == 3) {
    dummy = (p2->value_).n;
  }
  else {
    iVar7 = luaV_tonumber_(p2,&dummy);
    if (iVar7 == 0) {
LAB_0812021c:
                    /* WARNING: Subroutine does not return */
      luaG_opinterror(L,p1,p2,"perform bitwise operation on");
    }
  }
                    /* WARNING: Subroutine does not return */
  luaG_tointerror(L,p1,p2);
}


