/*
 * Ghidra decompilation
 *
 * Function : luaV_equalobj
 * Address  : 081216a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaV_equalobj(lua_State *L,TValue *t1,TValue *t2)

{
  Table *pTVar1;
  TValue *f;
  TValue *tm;
  int iVar2;
  lua_CFunction p_Var3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  lua_Number n2;
  lua_Number n1;
  lua_Number x;
  lua_Number x_1;
  
  uVar4 = t1->tt_;
  uVar5 = t2->tt_;
  if (((uVar4 ^ uVar5) & 0x3f) != 0) {
    if (((uVar4 ^ uVar5) & 0xf) != 0) {
      return 0;
    }
    if ((uVar4 & 0xf) != 3) {
      return 0;
    }
    if (uVar4 == 3) {
      n1 = (t1->value_).n;
    }
    else if (uVar4 == 0x13) {
      n1 = (lua_Number)(longlong)(t1->value_).b;
    }
    else {
      n1 = 0.0;
    }
    if (uVar5 == 3) {
      fVar6 = (t2->value_).n;
    }
    else if (uVar5 == 0x13) {
      fVar6 = (float)(longlong)(t2->value_).b;
    }
    else {
      fVar6 = 0.0;
    }
LAB_081217a8:
    return (uint)(fVar6 == n1);
  }
  switch(uVar4 & 0x3f) {
  case 0:
    goto LAB_0812176c;
  default:
    return (uint)((t1->value_).gc == (t2->value_).gc);
  case 3:
    fVar6 = (t1->value_).n;
    n1 = (t2->value_).n;
    goto LAB_081217a8;
  case 5:
    p_Var3 = (t2->value_).f;
    if ((t1->value_).f == p_Var3) {
      return 1;
    }
    if (L == (lua_State *)0x0) {
      return 0;
    }
    pTVar1 = *(Table **)((t1->value_).f + 0x18);
    if ((pTVar1 == (Table *)0x0) || ((pTVar1->flags & 0x20) != 0)) {
LAB_081218b4:
      pTVar1 = *(Table **)(p_Var3 + 0x18);
      goto joined_r0x081217f4;
    }
    f = luaT_gettm(pTVar1,TM_EQ,L->l_G->tmname[5]);
    if (f == (TValue *)0x0) {
      p_Var3 = (t2->value_).f;
      goto LAB_081218b4;
    }
    break;
  case 7:
    p_Var3 = (t2->value_).f;
    if ((t1->value_).f == p_Var3) {
      return 1;
    }
    if (L == (lua_State *)0x0) {
      return 0;
    }
    pTVar1 = *(Table **)((t1->value_).f + 8);
    if ((pTVar1 != (Table *)0x0) && ((pTVar1->flags & 0x20) == 0)) {
      f = luaT_gettm(pTVar1,TM_EQ,L->l_G->tmname[5]);
      if (f != (TValue *)0x0) break;
      p_Var3 = (t2->value_).f;
    }
    pTVar1 = *(Table **)(p_Var3 + 8);
joined_r0x081217f4:
    if (pTVar1 == (Table *)0x0) {
      return 0;
    }
    if ((pTVar1->flags & 0x20) != 0) {
      return 0;
    }
    f = luaT_gettm(pTVar1,TM_EQ,L->l_G->tmname[5]);
    if (f == (TValue *)0x0) {
      return 0;
    }
    break;
  case 0x14:
    iVar2 = luaS_eqlngstr((TString *)(t1->value_).gc,(TString *)(t2->value_).gc);
    return iVar2;
  }
  luaT_callTM(L,f,t1,t2,L->top,1);
  iVar2 = L->top->tt_;
  if ((iVar2 == 0) || ((iVar2 == 1 && ((L->top->value_).gc == (GCObject *)0x0)))) {
    return 0;
  }
LAB_0812176c:
  return 1;
}


