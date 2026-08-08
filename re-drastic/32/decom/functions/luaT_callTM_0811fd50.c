/*
 * Ghidra decompilation
 *
 * Function : luaT_callTM
 * Address  : 0811fd50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaT_callTM(lua_State *L,TValue *f,TValue *p1,TValue *p2,TValue *p3,int hasres)

{
  Value VVar1;
  Value VVar2;
  CallInfo *pCVar3;
  Value *pVVar4;
  TValue *io1_1;
  StkId pTVar5;
  int iVar6;
  StkId pTVar7;
  TValue *io1;
  
  pTVar7 = L->top;
  pTVar5 = L->stack;
  iVar6 = f->tt_;
  pTVar7->value_ = f->value_;
  pTVar7->tt_ = iVar6;
  iVar6 = p1->tt_;
  pTVar7[1].value_ = p1->value_;
  pTVar7[1].tt_ = iVar6;
  VVar2 = p2->value_;
  iVar6 = p2->tt_;
  L->top = pTVar7 + 3;
  pTVar7[2].value_ = VVar2;
  pTVar7[2].tt_ = iVar6;
  if (hasres == 0) {
    pCVar3 = L->ci;
    VVar2 = p3->value_;
    iVar6 = p3->tt_;
    L->top = pTVar7 + 4;
    pTVar7[3].value_ = VVar2;
    pTVar7[3].tt_ = iVar6;
    luaD_call(L,pTVar7,0,pCVar3->callstatus & 2);
    return;
  }
  luaD_call(L,pTVar7 + 3 + -(4 - hasres),hasres,L->ci->callstatus & 2);
  pTVar7 = L->top;
  VVar2 = pTVar7[-1].value_;
  VVar1 = (Value)pTVar7[-1].tt_;
  pVVar4 = (Value *)((int)L->stack + ((int)p3 - (int)pTVar5));
  L->top = pTVar7 + -1;
  *pVVar4 = VVar2;
  pVVar4[1] = VVar1;
  return;
}


