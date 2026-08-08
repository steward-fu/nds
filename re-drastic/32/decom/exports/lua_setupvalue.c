/*
 * Ghidra decompilation
 *
 * Function : lua_setupvalue
 * Address  : 08111684
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * lua_setupvalue(lua_State *L,int funcindex,int n)

{
  GCObject *pGVar1;
  undefined uVar2;
  undefined uVar3;
  undefined2 uVar4;
  TValue *o;
  GCObject *o_00;
  CClosure *f;
  int iVar5;
  Proto *p;
  UpVal *uv;
  CallInfo *ci;
  uint uVar6;
  StkId pTVar7;
  LClosure *f_1;
  TValue *pTVar8;
  lua_CFunction p_Var9;
  CClosure *func;
  Value VVar10;
  TString *name;
  char *pcVar11;
  
  if (funcindex < 1) {
    if (funcindex < -0xf4627) {
      if (funcindex == -0xf4628) {
        pTVar8 = &L->l_G->l_registry;
      }
      else {
        pTVar7 = L->ci->func;
        if ((pTVar7->tt_ == 0x16) ||
           (p_Var9 = (pTVar7->value_).f, (int)(uint)(byte)p_Var9[6] < -0xf4628 - funcindex)) {
          pTVar8 = &luaO_nilobject_;
        }
        else {
          pTVar8 = (TValue *)(p_Var9 + (-0xf4627 - funcindex) * 8);
        }
      }
    }
    else {
      pTVar8 = L->top + funcindex;
    }
  }
  else {
    pTVar8 = L->ci->func + funcindex;
    if (L->top <= pTVar8) {
      pTVar8 = &luaO_nilobject_;
    }
  }
  uVar6 = pTVar8->tt_ & 0x3f;
  if (uVar6 == 6) {
    iVar5 = *(int *)((pTVar8->value_).f + 0xc);
    if ((0 < n) && (n <= *(int *)(iVar5 + 0xc))) {
      uv = *(UpVal **)((pTVar8->value_).f + (n + 3) * 4);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x40) + (n + 0x1fffffff) * 8);
      pTVar8 = uv->v;
      if (iVar5 == 0) {
        pTVar7 = L->top;
        pcVar11 = "(*no name)";
        VVar10 = pTVar7[-1].value_;
        iVar5 = pTVar7[-1].tt_;
        L->top = pTVar7 + -1;
        pTVar8->value_ = VVar10;
        pTVar8->tt_ = iVar5;
      }
      else {
        pcVar11 = (char *)(iVar5 + 0x18);
        if (pcVar11 == (char *)0x0) {
          return (char *)0x0;
        }
        pTVar7 = L->top;
        VVar10 = pTVar7[-1].value_;
        iVar5 = pTVar7[-1].tt_;
        L->top = pTVar7 + -1;
        pTVar8->value_ = VVar10;
        pTVar8->tt_ = iVar5;
      }
      if ((pTVar8->tt_ & 0x40U) == 0) {
        return pcVar11;
      }
      if (pTVar8 != (TValue *)&uv->u) {
        return pcVar11;
      }
      luaC_upvalbarrier_(L,uv);
      return pcVar11;
    }
  }
  else if (((uVar6 == 0x26) && (o_00 = (pTVar8->value_).gc, 0 < n)) &&
          (n <= (int)(uint)(byte)o_00->field_0x6)) {
    pTVar7 = L->top;
    VVar10 = pTVar7[-1].value_;
    uVar2 = *(undefined *)&pTVar7[-0xffffffff00000001].tt_;
    uVar3 = *(undefined *)((int)&pTVar7[-0xffffffff00000001].tt_ + 1);
    uVar4 = *(undefined2 *)((int)&pTVar7[-0xffffffff00000001].tt_ + 2);
    L->top = pTVar7 + -1;
    o_00[n + 1].next = (GCObject *)VVar10;
    pGVar1 = o_00 + n + 1;
    pGVar1->tt = uVar2;
    pGVar1->marked = uVar3;
    *(undefined2 *)&pGVar1->field_0x6 = uVar4;
    if (((o_00 != (GCObject *)0x0) && ((pTVar7[-1].tt_ & 0x40U) != 0)) && ((o_00->marked & 4) != 0))
    {
      if (((pTVar7[-1].value_.gc)->marked & 3) != 0) {
        luaC_barrier_(L,o_00,pTVar7[-1].value_.gc);
        return "";
      }
      return "";
    }
    return "";
  }
  return (char *)0x0;
}


