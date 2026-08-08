/*
 * Ghidra decompilation
 *
 * Function : lua_upvaluejoin
 * Address  : 08111968
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_upvaluejoin(lua_State *L,int fidx1,int n1,int fidx2,int n2)

{
  CClosure *func;
  TValue *o;
  UpVal *uv;
  lua_CFunction p_Var1;
  CClosure *func_1;
  TValue *o_1;
  lu_mem lVar2;
  TValue *pTVar3;
  GCObject *pGVar4;
  LClosure *f1;
  GCObject *pGVar5;
  CallInfo *pCVar6;
  CallInfo *ci;
  CallInfo *ci_1;
  
  pCVar6 = L->ci;
  if (fidx1 < 1) {
    if (fidx1 < -0xf4627) {
      if (fidx1 == -0xf4628) {
        pTVar3 = &L->l_G->l_registry;
      }
      else if ((pCVar6->func->tt_ == 0x16) ||
              (p_Var1 = (pCVar6->func->value_).f, (int)(uint)(byte)p_Var1[6] < -0xf4628 - fidx1)) {
        pTVar3 = &luaO_nilobject_;
      }
      else {
        pTVar3 = (TValue *)(p_Var1 + (-0xf4627 - fidx1) * 8);
      }
    }
    else {
      pTVar3 = L->top + fidx1;
    }
  }
  else {
    pTVar3 = pCVar6->func + fidx1;
    if (L->top <= pCVar6->func + fidx1) {
      pTVar3 = &luaO_nilobject_;
    }
  }
  pGVar4 = (pTVar3->value_).gc;
  if (fidx2 < 1) {
    if (fidx2 < -0xf4627) {
      if (fidx2 == -0xf4628) {
        pTVar3 = &L->l_G->l_registry;
      }
      else if ((pCVar6->func->tt_ == 0x16) ||
              (p_Var1 = (pCVar6->func->value_).f, (int)(uint)(byte)p_Var1[6] < -0xf4628 - fidx2)) {
        pTVar3 = &luaO_nilobject_;
      }
      else {
        pTVar3 = (TValue *)(p_Var1 + (-0xf4627 - fidx2) * 8);
      }
    }
    else {
      pTVar3 = L->top + fidx2;
    }
  }
  else {
    pTVar3 = pCVar6->func + fidx2;
    if (L->top <= pCVar6->func + fidx2) {
      pTVar3 = &luaO_nilobject_;
    }
  }
  pGVar5 = (pTVar3->value_).gc;
  luaC_upvdeccount(L,*(UpVal **)(&pGVar4[1].tt + n1 * 4));
  uv = *(UpVal **)(&pGVar5[1].tt + n2 * 4);
  lVar2 = uv->refcount;
  *(UpVal **)(&pGVar4[1].tt + n1 * 4) = uv;
  uv->refcount = lVar2 + 1;
  if (uv->v == (TValue *)&uv->u) {
    if ((uv->v->tt_ & 0x40U) != 0) goto LAB_08111b1c;
  }
  else {
    (uv->u).open.touched = 1;
    uv = *(UpVal **)(&pGVar4[1].tt + n1 * 4);
    if (((uv->v->tt_ & 0x40U) != 0) && (uv->v == (TValue *)&uv->u)) {
LAB_08111b1c:
      luaC_upvalbarrier_(L,uv);
      return;
    }
  }
  return;
}


