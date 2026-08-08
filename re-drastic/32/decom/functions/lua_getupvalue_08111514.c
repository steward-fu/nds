/*
 * Ghidra decompilation
 *
 * Function : lua_getupvalue
 * Address  : 08111514
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * lua_getupvalue(lua_State *L,int funcindex,int n)

{
  char *pcVar1;
  TString *name;
  TValue *o;
  int iVar2;
  Proto *p;
  TValue *pTVar3;
  Value *pVVar4;
  CallInfo *ci;
  uint uVar5;
  CClosure *f;
  StkId pTVar6;
  LClosure *f_1;
  lua_CFunction p_Var7;
  CClosure *func;
  Value VVar8;
  
  if (funcindex < 1) {
    if (funcindex < -0xf4627) {
      if (funcindex == -0xf4628) {
        pTVar3 = &L->l_G->l_registry;
      }
      else {
        pTVar6 = L->ci->func;
        if ((pTVar6->tt_ == 0x16) ||
           (p_Var7 = (pTVar6->value_).f, (int)(uint)(byte)p_Var7[6] < -0xf4628 - funcindex)) {
          pTVar3 = &luaO_nilobject_;
        }
        else {
          pTVar3 = (TValue *)(p_Var7 + (-0xf4627 - funcindex) * 8);
        }
      }
    }
    else {
      pTVar3 = L->top + funcindex;
    }
  }
  else {
    pTVar3 = L->ci->func + funcindex;
    if (L->top <= pTVar3) {
      pTVar3 = &luaO_nilobject_;
    }
  }
  uVar5 = pTVar3->tt_ & 0x3f;
  if (uVar5 == 6) {
    iVar2 = *(int *)((pTVar3->value_).f + 0xc);
    if ((0 < n) && (n <= *(int *)(iVar2 + 0xc))) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x40) + (n + 0x1fffffff) * 8);
      pVVar4 = **(Value ***)((pTVar3->value_).f + (n + 3) * 4);
      if (iVar2 == 0) {
        pcVar1 = "(*no name)";
      }
      else {
        pcVar1 = (char *)(iVar2 + 0x18);
        if (pcVar1 == (char *)0x0) {
          return (char *)0x0;
        }
      }
      goto LAB_08111588;
    }
  }
  else if (((uVar5 == 0x26) && (0 < n)) && (n <= (int)(uint)(byte)(pTVar3->value_).f[6])) {
    pVVar4 = (Value *)((pTVar3->value_).f + (n + 1) * 8);
    pcVar1 = "";
LAB_08111588:
    VVar8 = pVVar4[1];
    pTVar6 = L->top;
    pTVar6->value_ = *pVVar4;
    pTVar6->tt_ = (int)VVar8;
    L->top = pTVar6 + 1;
    return pcVar1;
  }
  return (char *)0x0;
}


