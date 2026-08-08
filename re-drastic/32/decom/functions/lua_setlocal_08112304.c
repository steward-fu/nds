/*
 * Ghidra decompilation
 *
 * Function : lua_setlocal
 * Address  : 08112304
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * lua_setlocal(lua_State *L,lua_Debug *ar,int n)

{
  Proto *f;
  char *pcVar1;
  uint uVar2;
  TValue *io1;
  StkId limit;
  StkId pTVar3;
  StkId base;
  int iVar4;
  CallInfo *pCVar5;
  bool bVar6;
  bool bVar7;
  
  pCVar5 = ar->i_ci;
  if ((pCVar5->callstatus & 2) == 0) {
    pTVar3 = pCVar5->func + 1;
LAB_081123a0:
    if (pCVar5 == L->ci) {
      limit = L->top;
    }
    else {
      limit = pCVar5->next->func;
    }
    limit = (StkId)((int)limit - (int)pTVar3);
    iVar4 = (int)limit >> 3;
    bVar6 = iVar4 - n < 0;
    bVar7 = iVar4 == n;
    if (iVar4 >= n) {
      bVar6 = n < 0;
      bVar7 = n == 0;
    }
    if (bVar7 || bVar6 != (iVar4 < n && SBORROW4(iVar4,n))) {
      return (char *)0x0;
    }
    pcVar1 = "(*temporary)";
  }
  else {
    if (n < 0) {
      pTVar3 = pCVar5->func;
      uVar2 = (uint)*(byte *)(*(int *)((pTVar3->value_).f + 0xc) + 6);
      if ((int)(((int)(pCVar5->u).l.base - (int)pTVar3 >> 3) - uVar2) <= -n) {
        return (char *)0x0;
      }
      io1 = pTVar3 + (uVar2 - n);
      pcVar1 = "(*vararg)";
      goto LAB_08112370;
    }
    pTVar3 = (pCVar5->u).l.base;
    f = *(Proto **)((pCVar5->func->value_).f + 0xc);
    pcVar1 = luaF_getlocalname(f,n,((int)(pCVar5->u).l.savedpc - (int)f->code >> 2) + -1);
    if (pcVar1 == (char *)0x0) goto LAB_081123a0;
  }
  io1 = pTVar3 + n + 0x1fffffff;
LAB_08112370:
  pTVar3 = L->top;
  iVar4 = pTVar3[-1].tt_;
  io1->value_ = pTVar3[-1].value_;
  io1->tt_ = iVar4;
  L->top = pTVar3 + -1;
  return pcVar1;
}


