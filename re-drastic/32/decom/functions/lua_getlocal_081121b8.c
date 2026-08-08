/*
 * Ghidra decompilation
 *
 * Function : lua_getlocal
 * Address  : 081121b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * lua_getlocal(lua_State *L,lua_Debug *ar,int n)

{
  char *pcVar1;
  uint uVar2;
  StkId limit;
  StkId pTVar3;
  StkId pTVar4;
  StkId base;
  CallInfo *pCVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  if (ar == (lua_Debug *)0x0) {
    if (L->top[-1].tt_ != 0x46) {
      return (char *)0x0;
    }
    pcVar1 = luaF_getlocalname(*(Proto **)(L->top[-1].value_.f + 0xc),n,0);
    return pcVar1;
  }
  pCVar5 = ar->i_ci;
  if ((pCVar5->callstatus & 2) == 0) {
    base = pCVar5->func + 1;
LAB_081121f0:
    if (pCVar5 == L->ci) {
      limit = L->top;
    }
    else {
      limit = pCVar5->next->func;
    }
    limit = (StkId)((int)limit - (int)base);
    iVar6 = (int)limit >> 3;
    bVar7 = iVar6 - n < 0;
    bVar8 = iVar6 == n;
    if (iVar6 >= n) {
      bVar7 = n < 0;
      bVar8 = n == 0;
    }
    if (bVar8 || bVar7 != (iVar6 < n && SBORROW4(iVar6,n))) {
      return (char *)0x0;
    }
    pcVar1 = "(*temporary)";
  }
  else {
    pTVar3 = pCVar5->func;
    if (n < 0) {
      uVar2 = (uint)*(byte *)(*(int *)((pTVar3->value_).f + 0xc) + 6);
      if ((int)(((int)(pCVar5->u).l.base - (int)pTVar3 >> 3) - uVar2) <= -n) {
        return (char *)0x0;
      }
      pTVar3 = pTVar3 + (uVar2 - n);
      pcVar1 = "(*vararg)";
      goto LAB_08112268;
    }
    base = (pCVar5->u).l.base;
    pcVar1 = luaF_getlocalname(*(Proto **)((pTVar3->value_).f + 0xc),n,
                               ((int)(pCVar5->u).l.savedpc -
                                (int)(*(Proto **)((pTVar3->value_).f + 0xc))->code >> 2) + -1);
    if (pcVar1 == (char *)0x0) goto LAB_081121f0;
  }
  pTVar3 = base + n + 0x1fffffff;
LAB_08112268:
  iVar6 = pTVar3->tt_;
  pTVar4 = L->top;
  pTVar4->value_ = pTVar3->value_;
  pTVar4->tt_ = iVar6;
  L->top = pTVar4 + 1;
  return pcVar1;
}


