/*
 * Ghidra decompilation
 *
 * Function : luaV_finishOp
 * Address  : 08121ddc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaV_finishOp(lua_State *L)

{
  Value VVar1;
  TValue *pTVar2;
  int total;
  OpCode op;
  StkId pTVar3;
  uint uVar4;
  Instruction inst;
  StkId pTVar5;
  CallInfo *ci;
  CallInfo *pCVar6;
  int res;
  uint uVar7;
  int iVar8;
  int iVar9;
  StkId pTVar10;
  StkId base;
  bool bVar11;
  
  pCVar6 = L->ci;
  pTVar10 = (pCVar6->u).l.base;
  uVar4 = *(uint *)((pCVar6->u).c.old_errfunc + -4);
  switch(uVar4 & 0x3f) {
  case 6:
  case 7:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
    pTVar3 = L->top;
    VVar1 = pTVar3[-1].value_;
    iVar9 = pTVar3[-1].tt_;
    L->top = pTVar3 + -1;
    pTVar10[(uVar4 << 0x12) >> 0x18].value_ = VVar1;
    pTVar10[(uVar4 << 0x12) >> 0x18].tt_ = iVar9;
    break;
  case 0x1d:
    pTVar3 = L->top;
    iVar8 = pTVar3[-1].tt_;
    iVar9 = (int)((int)pTVar3 + (uVar4 >> 0x17) * -8 + (-0x10 - (int)pTVar10)) >> 3;
    pTVar3[-3].value_ = pTVar3[-1].value_;
    pTVar3[-3].tt_ = iVar8;
    if (1 < iVar9) {
      L->top = pTVar3 + -2;
      luaV_concat(L,iVar9);
      pTVar3 = L->top;
    }
    iVar9 = pTVar3[-1].tt_;
    pTVar10 = pCVar6->top;
    pTVar5 = (pCVar6->u).l.base + ((uVar4 << 0x12) >> 0x18);
    pTVar5->value_ = pTVar3[-1].value_;
    pTVar5->tt_ = iVar9;
    L->top = pTVar10;
    break;
  case 0x1f:
  case 0x20:
  case 0x21:
    pTVar3 = L->top;
    if (pTVar3[-1].tt_ == 0) {
      uVar7 = 1;
      res = 0;
    }
    else if (pTVar3[-1].tt_ == 1) {
      bVar11 = pTVar3[-1].value_.gc == (GCObject *)0x0;
      uVar7 = (uint)bVar11;
      res = (int)!bVar11;
    }
    else {
      uVar7 = 0;
      res = 1;
    }
    L->top = pTVar3 + -1;
    if (((uVar4 & 0x3f) == 0x21) &&
       (pTVar2 = luaT_gettmbyobj(L,pTVar10 + (uVar4 >> 0x17),TM_LE), pTVar2->tt_ == 0)) {
      res = uVar7;
    }
    if (res != (uVar4 << 0x12) >> 0x18) {
      (pCVar6->u).l.savedpc = (Instruction *)((pCVar6->u).c.old_errfunc + 4);
    }
    break;
  case 0x24:
    if ((uVar4 << 9) >> 0x17 == 0) {
      return;
    }
  case 0x29:
    L->top = pCVar6->top;
  }
  return;
}


